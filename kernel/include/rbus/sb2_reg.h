/**
* @file Merlin5-DesignSpec-SB2_ARCH
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_SB2_REG_H_
#define _RBUS_SB2_REG_H_

#include "rbus_types.h"



//  SB2 Register Address
#define  SB2_HD_SEM                                                             0x1801A000
#define  SB2_HD_SEM_reg_addr                                                     "0xB801A000"
#define  SB2_HD_SEM_reg                                                          0xB801A000
#define  SB2_HD_SEM_inst_addr                                                    "0x0000"
#define  set_SB2_HD_SEM_reg(data)                                                (*((volatile unsigned int*)SB2_HD_SEM_reg)=data)
#define  get_SB2_HD_SEM_reg                                                      (*((volatile unsigned int*)SB2_HD_SEM_reg))
#define  SB2_HD_SEM_semaphore_data_shift                                         (1)
#define  SB2_HD_SEM_semaphore_shift                                              (0)
#define  SB2_HD_SEM_semaphore_data_mask                                          (0xFFFFFFFE)
#define  SB2_HD_SEM_semaphore_mask                                               (0x00000001)
#define  SB2_HD_SEM_semaphore_data(data)                                         (0xFFFFFFFE&((data)<<1))
#define  SB2_HD_SEM_semaphore(data)                                              (0x00000001&(data))
#define  SB2_HD_SEM_get_semaphore_data(data)                                     ((0xFFFFFFFE&(data))>>1)
#define  SB2_HD_SEM_get_semaphore(data)                                          (0x00000001&(data))

#define  SB2_INV_INTEN                                                          0x1801A004
#define  SB2_INV_INTEN_reg_addr                                                  "0xB801A004"
#define  SB2_INV_INTEN_reg                                                       0xB801A004
#define  SB2_INV_INTEN_inst_addr                                                 "0x0001"
#define  set_SB2_INV_INTEN_reg(data)                                             (*((volatile unsigned int*)SB2_INV_INTEN_reg)=data)
#define  get_SB2_INV_INTEN_reg                                                   (*((volatile unsigned int*)SB2_INV_INTEN_reg))
#define  SB2_INV_INTEN_to_end_shift                                              (8)
#define  SB2_INV_INTEN_ac2ivairq_en_shift                                        (7)
#define  SB2_INV_INTEN_vc2ivairq_en_shift                                        (6)
#define  SB2_INV_INTEN_to_en1_shift                                              (5)
#define  SB2_INV_INTEN_to_en_shift                                               (4)
#define  SB2_INV_INTEN_acivairq_en_shift                                         (3)
#define  SB2_INV_INTEN_vcivairq_en_shift                                         (2)
#define  SB2_INV_INTEN_scivairq_en_shift                                         (1)
#define  SB2_INV_INTEN_write_data_shift                                          (0)
#define  SB2_INV_INTEN_to_end_mask                                               (0x00000100)
#define  SB2_INV_INTEN_ac2ivairq_en_mask                                         (0x00000080)
#define  SB2_INV_INTEN_vc2ivairq_en_mask                                         (0x00000040)
#define  SB2_INV_INTEN_to_en1_mask                                               (0x00000020)
#define  SB2_INV_INTEN_to_en_mask                                                (0x00000010)
#define  SB2_INV_INTEN_acivairq_en_mask                                          (0x00000008)
#define  SB2_INV_INTEN_vcivairq_en_mask                                          (0x00000004)
#define  SB2_INV_INTEN_scivairq_en_mask                                          (0x00000002)
#define  SB2_INV_INTEN_write_data_mask                                           (0x00000001)
#define  SB2_INV_INTEN_to_end(data)                                              (0x00000100&((data)<<8))
#define  SB2_INV_INTEN_ac2ivairq_en(data)                                        (0x00000080&((data)<<7))
#define  SB2_INV_INTEN_vc2ivairq_en(data)                                        (0x00000040&((data)<<6))
#define  SB2_INV_INTEN_to_en1(data)                                              (0x00000020&((data)<<5))
#define  SB2_INV_INTEN_to_en(data)                                               (0x00000010&((data)<<4))
#define  SB2_INV_INTEN_acivairq_en(data)                                         (0x00000008&((data)<<3))
#define  SB2_INV_INTEN_vcivairq_en(data)                                         (0x00000004&((data)<<2))
#define  SB2_INV_INTEN_scivairq_en(data)                                         (0x00000002&((data)<<1))
#define  SB2_INV_INTEN_write_data(data)                                          (0x00000001&(data))
#define  SB2_INV_INTEN_get_to_end(data)                                          ((0x00000100&(data))>>8)
#define  SB2_INV_INTEN_get_ac2ivairq_en(data)                                    ((0x00000080&(data))>>7)
#define  SB2_INV_INTEN_get_vc2ivairq_en(data)                                    ((0x00000040&(data))>>6)
#define  SB2_INV_INTEN_get_to_en1(data)                                          ((0x00000020&(data))>>5)
#define  SB2_INV_INTEN_get_to_en(data)                                           ((0x00000010&(data))>>4)
#define  SB2_INV_INTEN_get_acivairq_en(data)                                     ((0x00000008&(data))>>3)
#define  SB2_INV_INTEN_get_vcivairq_en(data)                                     ((0x00000004&(data))>>2)
#define  SB2_INV_INTEN_get_scivairq_en(data)                                     ((0x00000002&(data))>>1)
#define  SB2_INV_INTEN_get_write_data(data)                                      (0x00000001&(data))

#define  SB2_INV_INTSTAT                                                        0x1801A008
#define  SB2_INV_INTSTAT_reg_addr                                                "0xB801A008"
#define  SB2_INV_INTSTAT_reg                                                     0xB801A008
#define  SB2_INV_INTSTAT_inst_addr                                               "0x0002"
#define  set_SB2_INV_INTSTAT_reg(data)                                           (*((volatile unsigned int*)SB2_INV_INTSTAT_reg)=data)
#define  get_SB2_INV_INTSTAT_reg                                                 (*((volatile unsigned int*)SB2_INV_INTSTAT_reg))
#define  SB2_INV_INTSTAT_ac2iva_int_shift                                        (5)
#define  SB2_INV_INTSTAT_vc2iva_int_shift                                        (4)
#define  SB2_INV_INTSTAT_aciva_int_shift                                         (3)
#define  SB2_INV_INTSTAT_vciva_int_shift                                         (2)
#define  SB2_INV_INTSTAT_sciva_int_shift                                         (1)
#define  SB2_INV_INTSTAT_write_data_shift                                        (0)
#define  SB2_INV_INTSTAT_ac2iva_int_mask                                         (0x00000020)
#define  SB2_INV_INTSTAT_vc2iva_int_mask                                         (0x00000010)
#define  SB2_INV_INTSTAT_aciva_int_mask                                          (0x00000008)
#define  SB2_INV_INTSTAT_vciva_int_mask                                          (0x00000004)
#define  SB2_INV_INTSTAT_sciva_int_mask                                          (0x00000002)
#define  SB2_INV_INTSTAT_write_data_mask                                         (0x00000001)
#define  SB2_INV_INTSTAT_ac2iva_int(data)                                        (0x00000020&((data)<<5))
#define  SB2_INV_INTSTAT_vc2iva_int(data)                                        (0x00000010&((data)<<4))
#define  SB2_INV_INTSTAT_aciva_int(data)                                         (0x00000008&((data)<<3))
#define  SB2_INV_INTSTAT_vciva_int(data)                                         (0x00000004&((data)<<2))
#define  SB2_INV_INTSTAT_sciva_int(data)                                         (0x00000002&((data)<<1))
#define  SB2_INV_INTSTAT_write_data(data)                                        (0x00000001&(data))
#define  SB2_INV_INTSTAT_get_ac2iva_int(data)                                    ((0x00000020&(data))>>5)
#define  SB2_INV_INTSTAT_get_vc2iva_int(data)                                    ((0x00000010&(data))>>4)
#define  SB2_INV_INTSTAT_get_aciva_int(data)                                     ((0x00000008&(data))>>3)
#define  SB2_INV_INTSTAT_get_vciva_int(data)                                     ((0x00000004&(data))>>2)
#define  SB2_INV_INTSTAT_get_sciva_int(data)                                     ((0x00000002&(data))>>1)
#define  SB2_INV_INTSTAT_get_write_data(data)                                    (0x00000001&(data))

#define  SB2_INV_ADDR                                                           0x1801A00C
#define  SB2_INV_ADDR_reg_addr                                                   "0xB801A00C"
#define  SB2_INV_ADDR_reg                                                        0xB801A00C
#define  SB2_INV_ADDR_inst_addr                                                  "0x0003"
#define  set_SB2_INV_ADDR_reg(data)                                              (*((volatile unsigned int*)SB2_INV_ADDR_reg)=data)
#define  get_SB2_INV_ADDR_reg                                                    (*((volatile unsigned int*)SB2_INV_ADDR_reg))
#define  SB2_INV_ADDR_inv_adr_shift                                              (0)
#define  SB2_INV_ADDR_inv_adr_mask                                               (0xFFFFFFFF)
#define  SB2_INV_ADDR_inv_adr(data)                                              (0xFFFFFFFF&(data))
#define  SB2_INV_ADDR_get_inv_adr(data)                                          (0xFFFFFFFF&(data))

#define  SB2_DEBUG_REG                                                          0x1801A010
#define  SB2_DEBUG_REG_reg_addr                                                  "0xB801A010"
#define  SB2_DEBUG_REG_reg                                                       0xB801A010
#define  SB2_DEBUG_REG_inst_addr                                                 "0x0004"
#define  set_SB2_DEBUG_REG_reg(data)                                             (*((volatile unsigned int*)SB2_DEBUG_REG_reg)=data)
#define  get_SB2_DEBUG_REG_reg                                                   (*((volatile unsigned int*)SB2_DEBUG_REG_reg))
#define  SB2_DEBUG_REG_to_thrd_shift                                             (6)
#define  SB2_DEBUG_REG_to_thr1_shift                                             (3)
#define  SB2_DEBUG_REG_to_thr_shift                                              (0)
#define  SB2_DEBUG_REG_to_thrd_mask                                              (0x000001C0)
#define  SB2_DEBUG_REG_to_thr1_mask                                              (0x00000038)
#define  SB2_DEBUG_REG_to_thr_mask                                               (0x00000007)
#define  SB2_DEBUG_REG_to_thrd(data)                                             (0x000001C0&((data)<<6))
#define  SB2_DEBUG_REG_to_thr1(data)                                             (0x00000038&((data)<<3))
#define  SB2_DEBUG_REG_to_thr(data)                                              (0x00000007&(data))
#define  SB2_DEBUG_REG_get_to_thrd(data)                                         ((0x000001C0&(data))>>6)
#define  SB2_DEBUG_REG_get_to_thr1(data)                                         ((0x00000038&(data))>>3)
#define  SB2_DEBUG_REG_get_to_thr(data)                                          (0x00000007&(data))

#define  SB2_WRAPPER_CTRL                                                       0x1801A018
#define  SB2_WRAPPER_CTRL_reg_addr                                               "0xB801A018"
#define  SB2_WRAPPER_CTRL_reg                                                    0xB801A018
#define  SB2_WRAPPER_CTRL_inst_addr                                              "0x0005"
#define  set_SB2_WRAPPER_CTRL_reg(data)                                          (*((volatile unsigned int*)SB2_WRAPPER_CTRL_reg)=data)
#define  get_SB2_WRAPPER_CTRL_reg                                                (*((volatile unsigned int*)SB2_WRAPPER_CTRL_reg))
#define  SB2_WRAPPER_CTRL_write_en3_shift                                        (11)
#define  SB2_WRAPPER_CTRL_ac_in_order_shift                                      (10)
#define  SB2_WRAPPER_CTRL_write_en2_shift                                        (7)
#define  SB2_WRAPPER_CTRL_vc_in_order_shift                                      (6)
#define  SB2_WRAPPER_CTRL_vc_bypass_shift                                        (5)
#define  SB2_WRAPPER_CTRL_vc_merge_shift                                         (4)
#define  SB2_WRAPPER_CTRL_write_en3_mask                                         (0x00000800)
#define  SB2_WRAPPER_CTRL_ac_in_order_mask                                       (0x00000400)
#define  SB2_WRAPPER_CTRL_write_en2_mask                                         (0x00000080)
#define  SB2_WRAPPER_CTRL_vc_in_order_mask                                       (0x00000040)
#define  SB2_WRAPPER_CTRL_vc_bypass_mask                                         (0x00000020)
#define  SB2_WRAPPER_CTRL_vc_merge_mask                                          (0x00000010)
#define  SB2_WRAPPER_CTRL_write_en3(data)                                        (0x00000800&((data)<<11))
#define  SB2_WRAPPER_CTRL_ac_in_order(data)                                      (0x00000400&((data)<<10))
#define  SB2_WRAPPER_CTRL_write_en2(data)                                        (0x00000080&((data)<<7))
#define  SB2_WRAPPER_CTRL_vc_in_order(data)                                      (0x00000040&((data)<<6))
#define  SB2_WRAPPER_CTRL_vc_bypass(data)                                        (0x00000020&((data)<<5))
#define  SB2_WRAPPER_CTRL_vc_merge(data)                                         (0x00000010&((data)<<4))
#define  SB2_WRAPPER_CTRL_get_write_en3(data)                                    ((0x00000800&(data))>>11)
#define  SB2_WRAPPER_CTRL_get_ac_in_order(data)                                  ((0x00000400&(data))>>10)
#define  SB2_WRAPPER_CTRL_get_write_en2(data)                                    ((0x00000080&(data))>>7)
#define  SB2_WRAPPER_CTRL_get_vc_in_order(data)                                  ((0x00000040&(data))>>6)
#define  SB2_WRAPPER_CTRL_get_vc_bypass(data)                                    ((0x00000020&(data))>>5)
#define  SB2_WRAPPER_CTRL_get_vc_merge(data)                                     ((0x00000010&(data))>>4)

#define  SB2_SYNC                                                               0x1801A020
#define  SB2_SYNC_reg_addr                                                       "0xB801A020"
#define  SB2_SYNC_reg                                                            0xB801A020
#define  SB2_SYNC_inst_addr                                                      "0x0006"
#define  set_SB2_SYNC_reg(data)                                                  (*((volatile unsigned int*)SB2_SYNC_reg)=data)
#define  get_SB2_SYNC_reg                                                        (*((volatile unsigned int*)SB2_SYNC_reg))
#define  SB2_SYNC_sync_shift                                                     (0)
#define  SB2_SYNC_sync_mask                                                      (0xFFFFFFFF)
#define  SB2_SYNC_sync(data)                                                     (0xFFFFFFFF&(data))
#define  SB2_SYNC_get_sync(data)                                                 (0xFFFFFFFF&(data))

#define  SB2_DBG                                                                0x1801A024
#define  SB2_DBG_reg_addr                                                        "0xB801A024"
#define  SB2_DBG_reg                                                             0xB801A024
#define  SB2_DBG_inst_addr                                                       "0x0007"
#define  set_SB2_DBG_reg(data)                                                   (*((volatile unsigned int*)SB2_DBG_reg)=data)
#define  get_SB2_DBG_reg                                                         (*((volatile unsigned int*)SB2_DBG_reg))
#define  SB2_DBG_dbg_mode_shift                                                  (0)
#define  SB2_DBG_dbg_mode_mask                                                   (0x0000001F)
#define  SB2_DBG_dbg_mode(data)                                                  (0x0000001F&(data))
#define  SB2_DBG_get_dbg_mode(data)                                              (0x0000001F&(data))

#define  SB2_DEBUG                                                              0x1801A028
#define  SB2_DEBUG_reg_addr                                                      "0xB801A028"
#define  SB2_DEBUG_reg                                                           0xB801A028
#define  SB2_DEBUG_inst_addr                                                     "0x0008"
#define  set_SB2_DEBUG_reg(data)                                                 (*((volatile unsigned int*)SB2_DEBUG_reg)=data)
#define  get_SB2_DEBUG_reg                                                       (*((volatile unsigned int*)SB2_DEBUG_reg))
#define  SB2_DEBUG_write_enable3_shift                                           (15)
#define  SB2_DEBUG_sel1_shift                                                    (9)
#define  SB2_DEBUG_write_enable2_shift                                           (8)
#define  SB2_DEBUG_sel0_shift                                                    (2)
#define  SB2_DEBUG_write_enable1_shift                                           (1)
#define  SB2_DEBUG_enable_shift                                                  (0)
#define  SB2_DEBUG_write_enable3_mask                                            (0x00008000)
#define  SB2_DEBUG_sel1_mask                                                     (0x00007E00)
#define  SB2_DEBUG_write_enable2_mask                                            (0x00000100)
#define  SB2_DEBUG_sel0_mask                                                     (0x000000FC)
#define  SB2_DEBUG_write_enable1_mask                                            (0x00000002)
#define  SB2_DEBUG_enable_mask                                                   (0x00000001)
#define  SB2_DEBUG_write_enable3(data)                                           (0x00008000&((data)<<15))
#define  SB2_DEBUG_sel1(data)                                                    (0x00007E00&((data)<<9))
#define  SB2_DEBUG_write_enable2(data)                                           (0x00000100&((data)<<8))
#define  SB2_DEBUG_sel0(data)                                                    (0x000000FC&((data)<<2))
#define  SB2_DEBUG_write_enable1(data)                                           (0x00000002&((data)<<1))
#define  SB2_DEBUG_enable(data)                                                  (0x00000001&(data))
#define  SB2_DEBUG_get_write_enable3(data)                                       ((0x00008000&(data))>>15)
#define  SB2_DEBUG_get_sel1(data)                                                ((0x00007E00&(data))>>9)
#define  SB2_DEBUG_get_write_enable2(data)                                       ((0x00000100&(data))>>8)
#define  SB2_DEBUG_get_sel0(data)                                                ((0x000000FC&(data))>>2)
#define  SB2_DEBUG_get_write_enable1(data)                                       ((0x00000002&(data))>>1)
#define  SB2_DEBUG_get_enable(data)                                              (0x00000001&(data))

#define  SB2_UART2RDBS                                                          0x1801A02C
#define  SB2_UART2RDBS_reg_addr                                                  "0xB801A02C"
#define  SB2_UART2RDBS_reg                                                       0xB801A02C
#define  SB2_UART2RDBS_inst_addr                                                 "0x0009"
#define  set_SB2_UART2RDBS_reg(data)                                             (*((volatile unsigned int*)SB2_UART2RDBS_reg)=data)
#define  get_SB2_UART2RDBS_reg                                                   (*((volatile unsigned int*)SB2_UART2RDBS_reg))
#define  SB2_UART2RDBS_u2r_24m_mode_shift                                        (0)
#define  SB2_UART2RDBS_u2r_24m_mode_mask                                         (0x00000001)
#define  SB2_UART2RDBS_u2r_24m_mode(data)                                        (0x00000001&(data))
#define  SB2_UART2RDBS_get_u2r_24m_mode(data)                                    (0x00000001&(data))

#define  SB2_ROM_RM                                                             0x1801A030
#define  SB2_ROM_RM_reg_addr                                                     "0xB801A030"
#define  SB2_ROM_RM_reg                                                          0xB801A030
#define  SB2_ROM_RM_inst_addr                                                    "0x000A"
#define  set_SB2_ROM_RM_reg(data)                                                (*((volatile unsigned int*)SB2_ROM_RM_reg)=data)
#define  get_SB2_ROM_RM_reg                                                      (*((volatile unsigned int*)SB2_ROM_RM_reg))
#define  SB2_ROM_RM_rm_rom_shift                                                 (0)
#define  SB2_ROM_RM_rm_rom_mask                                                  (0x0000000F)
#define  SB2_ROM_RM_rm_rom(data)                                                 (0x0000000F&(data))
#define  SB2_ROM_RM_get_rm_rom(data)                                             (0x0000000F&(data))

#define  SB2_ROM_RME                                                            0x1801A034
#define  SB2_ROM_RME_reg_addr                                                    "0xB801A034"
#define  SB2_ROM_RME_reg                                                         0xB801A034
#define  SB2_ROM_RME_inst_addr                                                   "0x000B"
#define  set_SB2_ROM_RME_reg(data)                                               (*((volatile unsigned int*)SB2_ROM_RME_reg)=data)
#define  get_SB2_ROM_RME_reg                                                     (*((volatile unsigned int*)SB2_ROM_RME_reg))
#define  SB2_ROM_RME_rme_rom_shift                                               (0)
#define  SB2_ROM_RME_rme_rom_mask                                                (0x00000001)
#define  SB2_ROM_RME_rme_rom(data)                                               (0x00000001&(data))
#define  SB2_ROM_RME_get_rme_rom(data)                                           (0x00000001&(data))

#define  SB2_BIST_TEST_MODE                                                     0x1801A038
#define  SB2_BIST_TEST_MODE_reg_addr                                             "0xB801A038"
#define  SB2_BIST_TEST_MODE_reg                                                  0xB801A038
#define  SB2_BIST_TEST_MODE_inst_addr                                            "0x000C"
#define  set_SB2_BIST_TEST_MODE_reg(data)                                        (*((volatile unsigned int*)SB2_BIST_TEST_MODE_reg)=data)
#define  get_SB2_BIST_TEST_MODE_reg                                              (*((volatile unsigned int*)SB2_BIST_TEST_MODE_reg))
#define  SB2_BIST_TEST_MODE_bist_test_mode_rom_shift                             (0)
#define  SB2_BIST_TEST_MODE_bist_test_mode_rom_mask                              (0x00000001)
#define  SB2_BIST_TEST_MODE_bist_test_mode_rom(data)                             (0x00000001&(data))
#define  SB2_BIST_TEST_MODE_get_bist_test_mode_rom(data)                         (0x00000001&(data))

#define  SB2_BIST_DONE                                                          0x1801A040
#define  SB2_BIST_DONE_reg_addr                                                  "0xB801A040"
#define  SB2_BIST_DONE_reg                                                       0xB801A040
#define  SB2_BIST_DONE_inst_addr                                                 "0x000D"
#define  set_SB2_BIST_DONE_reg(data)                                             (*((volatile unsigned int*)SB2_BIST_DONE_reg)=data)
#define  get_SB2_BIST_DONE_reg                                                   (*((volatile unsigned int*)SB2_BIST_DONE_reg))
#define  SB2_BIST_DONE_bist_done_rom_shift                                       (0)
#define  SB2_BIST_DONE_bist_done_rom_mask                                        (0x00000001)
#define  SB2_BIST_DONE_bist_done_rom(data)                                       (0x00000001&(data))
#define  SB2_BIST_DONE_get_bist_done_rom(data)                                   (0x00000001&(data))

#define  SB2_BIST_CRC                                                           0x1801A044
#define  SB2_BIST_CRC_reg_addr                                                   "0xB801A044"
#define  SB2_BIST_CRC_reg                                                        0xB801A044
#define  SB2_BIST_CRC_inst_addr                                                  "0x000E"
#define  set_SB2_BIST_CRC_reg(data)                                              (*((volatile unsigned int*)SB2_BIST_CRC_reg)=data)
#define  get_SB2_BIST_CRC_reg                                                    (*((volatile unsigned int*)SB2_BIST_CRC_reg))
#define  SB2_BIST_CRC_bist_crc_shift                                             (0)
#define  SB2_BIST_CRC_bist_crc_mask                                              (0xFFFFFFFF)
#define  SB2_BIST_CRC_bist_crc(data)                                             (0xFFFFFFFF&(data))
#define  SB2_BIST_CRC_get_bist_crc(data)                                         (0xFFFFFFFF&(data))

#define  SB2_BIST_LS                                                            0x1801A048
#define  SB2_BIST_LS_reg_addr                                                    "0xB801A048"
#define  SB2_BIST_LS_reg                                                         0xB801A048
#define  SB2_BIST_LS_inst_addr                                                   "0x000F"
#define  set_SB2_BIST_LS_reg(data)                                               (*((volatile unsigned int*)SB2_BIST_LS_reg)=data)
#define  get_SB2_BIST_LS_reg                                                     (*((volatile unsigned int*)SB2_BIST_LS_reg))
#define  SB2_BIST_LS_bist_test_ls_shift                                          (0)
#define  SB2_BIST_LS_bist_test_ls_mask                                           (0x00000001)
#define  SB2_BIST_LS_bist_test_ls(data)                                          (0x00000001&(data))
#define  SB2_BIST_LS_get_bist_test_ls(data)                                      (0x00000001&(data))

#define  SB2_ROM_TEST                                                           0x1801A04C
#define  SB2_ROM_TEST_reg_addr                                                   "0xB801A04C"
#define  SB2_ROM_TEST_reg                                                        0xB801A04C
#define  SB2_ROM_TEST_inst_addr                                                  "0x0010"
#define  set_SB2_ROM_TEST_reg(data)                                              (*((volatile unsigned int*)SB2_ROM_TEST_reg)=data)
#define  get_SB2_ROM_TEST_reg                                                    (*((volatile unsigned int*)SB2_ROM_TEST_reg))
#define  SB2_ROM_TEST_test1_0_rom_shift                                          (0)
#define  SB2_ROM_TEST_test1_0_rom_mask                                           (0x00000001)
#define  SB2_ROM_TEST_test1_0_rom(data)                                          (0x00000001&(data))
#define  SB2_ROM_TEST_get_test1_0_rom(data)                                      (0x00000001&(data))

#define  SB2_CPU_SW_INT_EN                                                      0x1801A100
#define  SB2_CPU_SW_INT_EN_reg_addr                                              "0xB801A100"
#define  SB2_CPU_SW_INT_EN_reg                                                   0xB801A100
#define  SB2_CPU_SW_INT_EN_inst_addr                                             "0x0011"
#define  set_SB2_CPU_SW_INT_EN_reg(data)                                         (*((volatile unsigned int*)SB2_CPU_SW_INT_EN_reg)=data)
#define  get_SB2_CPU_SW_INT_EN_reg                                               (*((volatile unsigned int*)SB2_CPU_SW_INT_EN_reg))
#define  SB2_CPU_SW_INT_EN_int_sw_sc_en_shift                                    (3)
#define  SB2_CPU_SW_INT_EN_int_sw_vc_en_shift                                    (2)
#define  SB2_CPU_SW_INT_EN_int_sw_ac_en_shift                                    (1)
#define  SB2_CPU_SW_INT_EN_write_data_shift                                      (0)
#define  SB2_CPU_SW_INT_EN_int_sw_sc_en_mask                                     (0x00000008)
#define  SB2_CPU_SW_INT_EN_int_sw_vc_en_mask                                     (0x00000004)
#define  SB2_CPU_SW_INT_EN_int_sw_ac_en_mask                                     (0x00000002)
#define  SB2_CPU_SW_INT_EN_write_data_mask                                       (0x00000001)
#define  SB2_CPU_SW_INT_EN_int_sw_sc_en(data)                                    (0x00000008&((data)<<3))
#define  SB2_CPU_SW_INT_EN_int_sw_vc_en(data)                                    (0x00000004&((data)<<2))
#define  SB2_CPU_SW_INT_EN_int_sw_ac_en(data)                                    (0x00000002&((data)<<1))
#define  SB2_CPU_SW_INT_EN_write_data(data)                                      (0x00000001&(data))
#define  SB2_CPU_SW_INT_EN_get_int_sw_sc_en(data)                                ((0x00000008&(data))>>3)
#define  SB2_CPU_SW_INT_EN_get_int_sw_vc_en(data)                                ((0x00000004&(data))>>2)
#define  SB2_CPU_SW_INT_EN_get_int_sw_ac_en(data)                                ((0x00000002&(data))>>1)
#define  SB2_CPU_SW_INT_EN_get_write_data(data)                                  (0x00000001&(data))

#define  SB2_CPU_SW_INT_0                                                       0x1801A104
#define  SB2_CPU_SW_INT_0_reg_addr                                               "0xB801A104"
#define  SB2_CPU_SW_INT_0_reg                                                    0xB801A104
#define  SB2_CPU_SW_INT_0_inst_addr                                              "0x0012"
#define  set_SB2_CPU_SW_INT_0_reg(data)                                          (*((volatile unsigned int*)SB2_CPU_SW_INT_0_reg)=data)
#define  get_SB2_CPU_SW_INT_0_reg                                                (*((volatile unsigned int*)SB2_CPU_SW_INT_0_reg))
#define  SB2_CPU_SW_INT_0_int_sw15_shift                                         (16)
#define  SB2_CPU_SW_INT_0_int_sw14_shift                                         (15)
#define  SB2_CPU_SW_INT_0_int_sw13_shift                                         (14)
#define  SB2_CPU_SW_INT_0_int_sw12_shift                                         (13)
#define  SB2_CPU_SW_INT_0_int_sw11_shift                                         (12)
#define  SB2_CPU_SW_INT_0_int_sw10_shift                                         (11)
#define  SB2_CPU_SW_INT_0_int_sw9_shift                                          (10)
#define  SB2_CPU_SW_INT_0_int_sw8_shift                                          (9)
#define  SB2_CPU_SW_INT_0_int_sw7_shift                                          (8)
#define  SB2_CPU_SW_INT_0_int_sw6_shift                                          (7)
#define  SB2_CPU_SW_INT_0_int_sw5_shift                                          (6)
#define  SB2_CPU_SW_INT_0_int_sw4_shift                                          (5)
#define  SB2_CPU_SW_INT_0_int_sw3_shift                                          (4)
#define  SB2_CPU_SW_INT_0_int_sw2_shift                                          (3)
#define  SB2_CPU_SW_INT_0_int_sw1_shift                                          (2)
#define  SB2_CPU_SW_INT_0_int_sw0_shift                                          (1)
#define  SB2_CPU_SW_INT_0_write_data_shift                                       (0)
#define  SB2_CPU_SW_INT_0_int_sw15_mask                                          (0x00010000)
#define  SB2_CPU_SW_INT_0_int_sw14_mask                                          (0x00008000)
#define  SB2_CPU_SW_INT_0_int_sw13_mask                                          (0x00004000)
#define  SB2_CPU_SW_INT_0_int_sw12_mask                                          (0x00002000)
#define  SB2_CPU_SW_INT_0_int_sw11_mask                                          (0x00001000)
#define  SB2_CPU_SW_INT_0_int_sw10_mask                                          (0x00000800)
#define  SB2_CPU_SW_INT_0_int_sw9_mask                                           (0x00000400)
#define  SB2_CPU_SW_INT_0_int_sw8_mask                                           (0x00000200)
#define  SB2_CPU_SW_INT_0_int_sw7_mask                                           (0x00000100)
#define  SB2_CPU_SW_INT_0_int_sw6_mask                                           (0x00000080)
#define  SB2_CPU_SW_INT_0_int_sw5_mask                                           (0x00000040)
#define  SB2_CPU_SW_INT_0_int_sw4_mask                                           (0x00000020)
#define  SB2_CPU_SW_INT_0_int_sw3_mask                                           (0x00000010)
#define  SB2_CPU_SW_INT_0_int_sw2_mask                                           (0x00000008)
#define  SB2_CPU_SW_INT_0_int_sw1_mask                                           (0x00000004)
#define  SB2_CPU_SW_INT_0_int_sw0_mask                                           (0x00000002)
#define  SB2_CPU_SW_INT_0_write_data_mask                                        (0x00000001)
#define  SB2_CPU_SW_INT_0_int_sw15(data)                                         (0x00010000&((data)<<16))
#define  SB2_CPU_SW_INT_0_int_sw14(data)                                         (0x00008000&((data)<<15))
#define  SB2_CPU_SW_INT_0_int_sw13(data)                                         (0x00004000&((data)<<14))
#define  SB2_CPU_SW_INT_0_int_sw12(data)                                         (0x00002000&((data)<<13))
#define  SB2_CPU_SW_INT_0_int_sw11(data)                                         (0x00001000&((data)<<12))
#define  SB2_CPU_SW_INT_0_int_sw10(data)                                         (0x00000800&((data)<<11))
#define  SB2_CPU_SW_INT_0_int_sw9(data)                                          (0x00000400&((data)<<10))
#define  SB2_CPU_SW_INT_0_int_sw8(data)                                          (0x00000200&((data)<<9))
#define  SB2_CPU_SW_INT_0_int_sw7(data)                                          (0x00000100&((data)<<8))
#define  SB2_CPU_SW_INT_0_int_sw6(data)                                          (0x00000080&((data)<<7))
#define  SB2_CPU_SW_INT_0_int_sw5(data)                                          (0x00000040&((data)<<6))
#define  SB2_CPU_SW_INT_0_int_sw4(data)                                          (0x00000020&((data)<<5))
#define  SB2_CPU_SW_INT_0_int_sw3(data)                                          (0x00000010&((data)<<4))
#define  SB2_CPU_SW_INT_0_int_sw2(data)                                          (0x00000008&((data)<<3))
#define  SB2_CPU_SW_INT_0_int_sw1(data)                                          (0x00000004&((data)<<2))
#define  SB2_CPU_SW_INT_0_int_sw0(data)                                          (0x00000002&((data)<<1))
#define  SB2_CPU_SW_INT_0_write_data(data)                                       (0x00000001&(data))
#define  SB2_CPU_SW_INT_0_get_int_sw15(data)                                     ((0x00010000&(data))>>16)
#define  SB2_CPU_SW_INT_0_get_int_sw14(data)                                     ((0x00008000&(data))>>15)
#define  SB2_CPU_SW_INT_0_get_int_sw13(data)                                     ((0x00004000&(data))>>14)
#define  SB2_CPU_SW_INT_0_get_int_sw12(data)                                     ((0x00002000&(data))>>13)
#define  SB2_CPU_SW_INT_0_get_int_sw11(data)                                     ((0x00001000&(data))>>12)
#define  SB2_CPU_SW_INT_0_get_int_sw10(data)                                     ((0x00000800&(data))>>11)
#define  SB2_CPU_SW_INT_0_get_int_sw9(data)                                      ((0x00000400&(data))>>10)
#define  SB2_CPU_SW_INT_0_get_int_sw8(data)                                      ((0x00000200&(data))>>9)
#define  SB2_CPU_SW_INT_0_get_int_sw7(data)                                      ((0x00000100&(data))>>8)
#define  SB2_CPU_SW_INT_0_get_int_sw6(data)                                      ((0x00000080&(data))>>7)
#define  SB2_CPU_SW_INT_0_get_int_sw5(data)                                      ((0x00000040&(data))>>6)
#define  SB2_CPU_SW_INT_0_get_int_sw4(data)                                      ((0x00000020&(data))>>5)
#define  SB2_CPU_SW_INT_0_get_int_sw3(data)                                      ((0x00000010&(data))>>4)
#define  SB2_CPU_SW_INT_0_get_int_sw2(data)                                      ((0x00000008&(data))>>3)
#define  SB2_CPU_SW_INT_0_get_int_sw1(data)                                      ((0x00000004&(data))>>2)
#define  SB2_CPU_SW_INT_0_get_int_sw0(data)                                      ((0x00000002&(data))>>1)
#define  SB2_CPU_SW_INT_0_get_write_data(data)                                   (0x00000001&(data))

#define  SB2_CPU_SW_INT_1                                                       0x1801A108
#define  SB2_CPU_SW_INT_1_reg_addr                                               "0xB801A108"
#define  SB2_CPU_SW_INT_1_reg                                                    0xB801A108
#define  SB2_CPU_SW_INT_1_inst_addr                                              "0x0013"
#define  set_SB2_CPU_SW_INT_1_reg(data)                                          (*((volatile unsigned int*)SB2_CPU_SW_INT_1_reg)=data)
#define  get_SB2_CPU_SW_INT_1_reg                                                (*((volatile unsigned int*)SB2_CPU_SW_INT_1_reg))
#define  SB2_CPU_SW_INT_1_int_sw15_shift                                         (16)
#define  SB2_CPU_SW_INT_1_int_sw14_shift                                         (15)
#define  SB2_CPU_SW_INT_1_int_sw13_shift                                         (14)
#define  SB2_CPU_SW_INT_1_int_sw12_shift                                         (13)
#define  SB2_CPU_SW_INT_1_int_sw11_shift                                         (12)
#define  SB2_CPU_SW_INT_1_int_sw10_shift                                         (11)
#define  SB2_CPU_SW_INT_1_int_sw9_shift                                          (10)
#define  SB2_CPU_SW_INT_1_int_sw8_shift                                          (9)
#define  SB2_CPU_SW_INT_1_int_sw7_shift                                          (8)
#define  SB2_CPU_SW_INT_1_int_sw6_shift                                          (7)
#define  SB2_CPU_SW_INT_1_int_sw5_shift                                          (6)
#define  SB2_CPU_SW_INT_1_int_sw4_shift                                          (5)
#define  SB2_CPU_SW_INT_1_int_sw3_shift                                          (4)
#define  SB2_CPU_SW_INT_1_int_sw2_shift                                          (3)
#define  SB2_CPU_SW_INT_1_int_sw1_shift                                          (2)
#define  SB2_CPU_SW_INT_1_int_sw0_shift                                          (1)
#define  SB2_CPU_SW_INT_1_write_data_shift                                       (0)
#define  SB2_CPU_SW_INT_1_int_sw15_mask                                          (0x00010000)
#define  SB2_CPU_SW_INT_1_int_sw14_mask                                          (0x00008000)
#define  SB2_CPU_SW_INT_1_int_sw13_mask                                          (0x00004000)
#define  SB2_CPU_SW_INT_1_int_sw12_mask                                          (0x00002000)
#define  SB2_CPU_SW_INT_1_int_sw11_mask                                          (0x00001000)
#define  SB2_CPU_SW_INT_1_int_sw10_mask                                          (0x00000800)
#define  SB2_CPU_SW_INT_1_int_sw9_mask                                           (0x00000400)
#define  SB2_CPU_SW_INT_1_int_sw8_mask                                           (0x00000200)
#define  SB2_CPU_SW_INT_1_int_sw7_mask                                           (0x00000100)
#define  SB2_CPU_SW_INT_1_int_sw6_mask                                           (0x00000080)
#define  SB2_CPU_SW_INT_1_int_sw5_mask                                           (0x00000040)
#define  SB2_CPU_SW_INT_1_int_sw4_mask                                           (0x00000020)
#define  SB2_CPU_SW_INT_1_int_sw3_mask                                           (0x00000010)
#define  SB2_CPU_SW_INT_1_int_sw2_mask                                           (0x00000008)
#define  SB2_CPU_SW_INT_1_int_sw1_mask                                           (0x00000004)
#define  SB2_CPU_SW_INT_1_int_sw0_mask                                           (0x00000002)
#define  SB2_CPU_SW_INT_1_write_data_mask                                        (0x00000001)
#define  SB2_CPU_SW_INT_1_int_sw15(data)                                         (0x00010000&((data)<<16))
#define  SB2_CPU_SW_INT_1_int_sw14(data)                                         (0x00008000&((data)<<15))
#define  SB2_CPU_SW_INT_1_int_sw13(data)                                         (0x00004000&((data)<<14))
#define  SB2_CPU_SW_INT_1_int_sw12(data)                                         (0x00002000&((data)<<13))
#define  SB2_CPU_SW_INT_1_int_sw11(data)                                         (0x00001000&((data)<<12))
#define  SB2_CPU_SW_INT_1_int_sw10(data)                                         (0x00000800&((data)<<11))
#define  SB2_CPU_SW_INT_1_int_sw9(data)                                          (0x00000400&((data)<<10))
#define  SB2_CPU_SW_INT_1_int_sw8(data)                                          (0x00000200&((data)<<9))
#define  SB2_CPU_SW_INT_1_int_sw7(data)                                          (0x00000100&((data)<<8))
#define  SB2_CPU_SW_INT_1_int_sw6(data)                                          (0x00000080&((data)<<7))
#define  SB2_CPU_SW_INT_1_int_sw5(data)                                          (0x00000040&((data)<<6))
#define  SB2_CPU_SW_INT_1_int_sw4(data)                                          (0x00000020&((data)<<5))
#define  SB2_CPU_SW_INT_1_int_sw3(data)                                          (0x00000010&((data)<<4))
#define  SB2_CPU_SW_INT_1_int_sw2(data)                                          (0x00000008&((data)<<3))
#define  SB2_CPU_SW_INT_1_int_sw1(data)                                          (0x00000004&((data)<<2))
#define  SB2_CPU_SW_INT_1_int_sw0(data)                                          (0x00000002&((data)<<1))
#define  SB2_CPU_SW_INT_1_write_data(data)                                       (0x00000001&(data))
#define  SB2_CPU_SW_INT_1_get_int_sw15(data)                                     ((0x00010000&(data))>>16)
#define  SB2_CPU_SW_INT_1_get_int_sw14(data)                                     ((0x00008000&(data))>>15)
#define  SB2_CPU_SW_INT_1_get_int_sw13(data)                                     ((0x00004000&(data))>>14)
#define  SB2_CPU_SW_INT_1_get_int_sw12(data)                                     ((0x00002000&(data))>>13)
#define  SB2_CPU_SW_INT_1_get_int_sw11(data)                                     ((0x00001000&(data))>>12)
#define  SB2_CPU_SW_INT_1_get_int_sw10(data)                                     ((0x00000800&(data))>>11)
#define  SB2_CPU_SW_INT_1_get_int_sw9(data)                                      ((0x00000400&(data))>>10)
#define  SB2_CPU_SW_INT_1_get_int_sw8(data)                                      ((0x00000200&(data))>>9)
#define  SB2_CPU_SW_INT_1_get_int_sw7(data)                                      ((0x00000100&(data))>>8)
#define  SB2_CPU_SW_INT_1_get_int_sw6(data)                                      ((0x00000080&(data))>>7)
#define  SB2_CPU_SW_INT_1_get_int_sw5(data)                                      ((0x00000040&(data))>>6)
#define  SB2_CPU_SW_INT_1_get_int_sw4(data)                                      ((0x00000020&(data))>>5)
#define  SB2_CPU_SW_INT_1_get_int_sw3(data)                                      ((0x00000010&(data))>>4)
#define  SB2_CPU_SW_INT_1_get_int_sw2(data)                                      ((0x00000008&(data))>>3)
#define  SB2_CPU_SW_INT_1_get_int_sw1(data)                                      ((0x00000004&(data))>>2)
#define  SB2_CPU_SW_INT_1_get_int_sw0(data)                                      ((0x00000002&(data))>>1)
#define  SB2_CPU_SW_INT_1_get_write_data(data)                                   (0x00000001&(data))

#define  SB2_CPU_SW_INT_2                                                       0x1801A10C
#define  SB2_CPU_SW_INT_2_reg_addr                                               "0xB801A10C"
#define  SB2_CPU_SW_INT_2_reg                                                    0xB801A10C
#define  SB2_CPU_SW_INT_2_inst_addr                                              "0x0014"
#define  set_SB2_CPU_SW_INT_2_reg(data)                                          (*((volatile unsigned int*)SB2_CPU_SW_INT_2_reg)=data)
#define  get_SB2_CPU_SW_INT_2_reg                                                (*((volatile unsigned int*)SB2_CPU_SW_INT_2_reg))
#define  SB2_CPU_SW_INT_2_int_sw15_shift                                         (16)
#define  SB2_CPU_SW_INT_2_int_sw14_shift                                         (15)
#define  SB2_CPU_SW_INT_2_int_sw13_shift                                         (14)
#define  SB2_CPU_SW_INT_2_int_sw12_shift                                         (13)
#define  SB2_CPU_SW_INT_2_int_sw11_shift                                         (12)
#define  SB2_CPU_SW_INT_2_int_sw10_shift                                         (11)
#define  SB2_CPU_SW_INT_2_int_sw9_shift                                          (10)
#define  SB2_CPU_SW_INT_2_int_sw8_shift                                          (9)
#define  SB2_CPU_SW_INT_2_int_sw7_shift                                          (8)
#define  SB2_CPU_SW_INT_2_int_sw6_shift                                          (7)
#define  SB2_CPU_SW_INT_2_int_sw5_shift                                          (6)
#define  SB2_CPU_SW_INT_2_int_sw4_shift                                          (5)
#define  SB2_CPU_SW_INT_2_int_sw3_shift                                          (4)
#define  SB2_CPU_SW_INT_2_int_sw2_shift                                          (3)
#define  SB2_CPU_SW_INT_2_int_sw1_shift                                          (2)
#define  SB2_CPU_SW_INT_2_int_sw0_shift                                          (1)
#define  SB2_CPU_SW_INT_2_write_data_shift                                       (0)
#define  SB2_CPU_SW_INT_2_int_sw15_mask                                          (0x00010000)
#define  SB2_CPU_SW_INT_2_int_sw14_mask                                          (0x00008000)
#define  SB2_CPU_SW_INT_2_int_sw13_mask                                          (0x00004000)
#define  SB2_CPU_SW_INT_2_int_sw12_mask                                          (0x00002000)
#define  SB2_CPU_SW_INT_2_int_sw11_mask                                          (0x00001000)
#define  SB2_CPU_SW_INT_2_int_sw10_mask                                          (0x00000800)
#define  SB2_CPU_SW_INT_2_int_sw9_mask                                           (0x00000400)
#define  SB2_CPU_SW_INT_2_int_sw8_mask                                           (0x00000200)
#define  SB2_CPU_SW_INT_2_int_sw7_mask                                           (0x00000100)
#define  SB2_CPU_SW_INT_2_int_sw6_mask                                           (0x00000080)
#define  SB2_CPU_SW_INT_2_int_sw5_mask                                           (0x00000040)
#define  SB2_CPU_SW_INT_2_int_sw4_mask                                           (0x00000020)
#define  SB2_CPU_SW_INT_2_int_sw3_mask                                           (0x00000010)
#define  SB2_CPU_SW_INT_2_int_sw2_mask                                           (0x00000008)
#define  SB2_CPU_SW_INT_2_int_sw1_mask                                           (0x00000004)
#define  SB2_CPU_SW_INT_2_int_sw0_mask                                           (0x00000002)
#define  SB2_CPU_SW_INT_2_write_data_mask                                        (0x00000001)
#define  SB2_CPU_SW_INT_2_int_sw15(data)                                         (0x00010000&((data)<<16))
#define  SB2_CPU_SW_INT_2_int_sw14(data)                                         (0x00008000&((data)<<15))
#define  SB2_CPU_SW_INT_2_int_sw13(data)                                         (0x00004000&((data)<<14))
#define  SB2_CPU_SW_INT_2_int_sw12(data)                                         (0x00002000&((data)<<13))
#define  SB2_CPU_SW_INT_2_int_sw11(data)                                         (0x00001000&((data)<<12))
#define  SB2_CPU_SW_INT_2_int_sw10(data)                                         (0x00000800&((data)<<11))
#define  SB2_CPU_SW_INT_2_int_sw9(data)                                          (0x00000400&((data)<<10))
#define  SB2_CPU_SW_INT_2_int_sw8(data)                                          (0x00000200&((data)<<9))
#define  SB2_CPU_SW_INT_2_int_sw7(data)                                          (0x00000100&((data)<<8))
#define  SB2_CPU_SW_INT_2_int_sw6(data)                                          (0x00000080&((data)<<7))
#define  SB2_CPU_SW_INT_2_int_sw5(data)                                          (0x00000040&((data)<<6))
#define  SB2_CPU_SW_INT_2_int_sw4(data)                                          (0x00000020&((data)<<5))
#define  SB2_CPU_SW_INT_2_int_sw3(data)                                          (0x00000010&((data)<<4))
#define  SB2_CPU_SW_INT_2_int_sw2(data)                                          (0x00000008&((data)<<3))
#define  SB2_CPU_SW_INT_2_int_sw1(data)                                          (0x00000004&((data)<<2))
#define  SB2_CPU_SW_INT_2_int_sw0(data)                                          (0x00000002&((data)<<1))
#define  SB2_CPU_SW_INT_2_write_data(data)                                       (0x00000001&(data))
#define  SB2_CPU_SW_INT_2_get_int_sw15(data)                                     ((0x00010000&(data))>>16)
#define  SB2_CPU_SW_INT_2_get_int_sw14(data)                                     ((0x00008000&(data))>>15)
#define  SB2_CPU_SW_INT_2_get_int_sw13(data)                                     ((0x00004000&(data))>>14)
#define  SB2_CPU_SW_INT_2_get_int_sw12(data)                                     ((0x00002000&(data))>>13)
#define  SB2_CPU_SW_INT_2_get_int_sw11(data)                                     ((0x00001000&(data))>>12)
#define  SB2_CPU_SW_INT_2_get_int_sw10(data)                                     ((0x00000800&(data))>>11)
#define  SB2_CPU_SW_INT_2_get_int_sw9(data)                                      ((0x00000400&(data))>>10)
#define  SB2_CPU_SW_INT_2_get_int_sw8(data)                                      ((0x00000200&(data))>>9)
#define  SB2_CPU_SW_INT_2_get_int_sw7(data)                                      ((0x00000100&(data))>>8)
#define  SB2_CPU_SW_INT_2_get_int_sw6(data)                                      ((0x00000080&(data))>>7)
#define  SB2_CPU_SW_INT_2_get_int_sw5(data)                                      ((0x00000040&(data))>>6)
#define  SB2_CPU_SW_INT_2_get_int_sw4(data)                                      ((0x00000020&(data))>>5)
#define  SB2_CPU_SW_INT_2_get_int_sw3(data)                                      ((0x00000010&(data))>>4)
#define  SB2_CPU_SW_INT_2_get_int_sw2(data)                                      ((0x00000008&(data))>>3)
#define  SB2_CPU_SW_INT_2_get_int_sw1(data)                                      ((0x00000004&(data))>>2)
#define  SB2_CPU_SW_INT_2_get_int_sw0(data)                                      ((0x00000002&(data))>>1)
#define  SB2_CPU_SW_INT_2_get_write_data(data)                                   (0x00000001&(data))

#define  SB2_KCPU_DACC                                                          0x1801A300
#define  SB2_KCPU_DACC_reg_addr                                                  "0xB801A300"
#define  SB2_KCPU_DACC_reg                                                       0xB801A300
#define  SB2_KCPU_DACC_inst_addr                                                 "0x0015"
#define  set_SB2_KCPU_DACC_reg(data)                                             (*((volatile unsigned int*)SB2_KCPU_DACC_reg)=data)
#define  get_SB2_KCPU_DACC_reg                                                   (*((volatile unsigned int*)SB2_KCPU_DACC_reg))
#define  SB2_KCPU_DACC_kcpu_dbus_acc_shift                                       (0)
#define  SB2_KCPU_DACC_kcpu_dbus_acc_mask                                        (0xFFFFFFFF)
#define  SB2_KCPU_DACC_kcpu_dbus_acc(data)                                       (0xFFFFFFFF&(data))
#define  SB2_KCPU_DACC_get_kcpu_dbus_acc(data)                                   (0xFFFFFFFF&(data))

#define  SB2_KCPU_DREQ_NUM                                                      0x1801A304
#define  SB2_KCPU_DREQ_NUM_reg_addr                                              "0xB801A304"
#define  SB2_KCPU_DREQ_NUM_reg                                                   0xB801A304
#define  SB2_KCPU_DREQ_NUM_inst_addr                                             "0x0016"
#define  set_SB2_KCPU_DREQ_NUM_reg(data)                                         (*((volatile unsigned int*)SB2_KCPU_DREQ_NUM_reg)=data)
#define  get_SB2_KCPU_DREQ_NUM_reg                                               (*((volatile unsigned int*)SB2_KCPU_DREQ_NUM_reg))
#define  SB2_KCPU_DREQ_NUM_kcpu_dreq_num_shift                                   (0)
#define  SB2_KCPU_DREQ_NUM_kcpu_dreq_num_mask                                    (0x00FFFFFF)
#define  SB2_KCPU_DREQ_NUM_kcpu_dreq_num(data)                                   (0x00FFFFFF&(data))
#define  SB2_KCPU_DREQ_NUM_get_kcpu_dreq_num(data)                               (0x00FFFFFF&(data))

#define  SB2_KCPU_DREQ_MAX                                                      0x1801A308
#define  SB2_KCPU_DREQ_MAX_reg_addr                                              "0xB801A308"
#define  SB2_KCPU_DREQ_MAX_reg                                                   0xB801A308
#define  SB2_KCPU_DREQ_MAX_inst_addr                                             "0x0017"
#define  set_SB2_KCPU_DREQ_MAX_reg(data)                                         (*((volatile unsigned int*)SB2_KCPU_DREQ_MAX_reg)=data)
#define  get_SB2_KCPU_DREQ_MAX_reg                                               (*((volatile unsigned int*)SB2_KCPU_DREQ_MAX_reg))
#define  SB2_KCPU_DREQ_MAX_kcpu_dreq_max_shift                                   (0)
#define  SB2_KCPU_DREQ_MAX_kcpu_dreq_max_mask                                    (0x0000FFFF)
#define  SB2_KCPU_DREQ_MAX_kcpu_dreq_max(data)                                   (0x0000FFFF&(data))
#define  SB2_KCPU_DREQ_MAX_get_kcpu_dreq_max(data)                               (0x0000FFFF&(data))

#define  SB2_KCPU_DREQ_ACK                                                      0x1801A30C
#define  SB2_KCPU_DREQ_ACK_reg_addr                                              "0xB801A30C"
#define  SB2_KCPU_DREQ_ACK_reg                                                   0xB801A30C
#define  SB2_KCPU_DREQ_ACK_inst_addr                                             "0x0018"
#define  set_SB2_KCPU_DREQ_ACK_reg(data)                                         (*((volatile unsigned int*)SB2_KCPU_DREQ_ACK_reg)=data)
#define  get_SB2_KCPU_DREQ_ACK_reg                                               (*((volatile unsigned int*)SB2_KCPU_DREQ_ACK_reg))
#define  SB2_KCPU_DREQ_ACK_kcpu_dreq_ack_shift                                   (0)
#define  SB2_KCPU_DREQ_ACK_kcpu_dreq_ack_mask                                    (0x03FFFFFF)
#define  SB2_KCPU_DREQ_ACK_kcpu_dreq_ack(data)                                   (0x03FFFFFF&(data))
#define  SB2_KCPU_DREQ_ACK_get_kcpu_dreq_ack(data)                               (0x03FFFFFF&(data))

#define  SB2_VCPU2_DACC                                                         0x1801A310
#define  SB2_VCPU2_DACC_reg_addr                                                 "0xB801A310"
#define  SB2_VCPU2_DACC_reg                                                      0xB801A310
#define  SB2_VCPU2_DACC_inst_addr                                                "0x0019"
#define  set_SB2_VCPU2_DACC_reg(data)                                            (*((volatile unsigned int*)SB2_VCPU2_DACC_reg)=data)
#define  get_SB2_VCPU2_DACC_reg                                                  (*((volatile unsigned int*)SB2_VCPU2_DACC_reg))
#define  SB2_VCPU2_DACC_vcpu2_dbus_acc_shift                                     (0)
#define  SB2_VCPU2_DACC_vcpu2_dbus_acc_mask                                      (0xFFFFFFFF)
#define  SB2_VCPU2_DACC_vcpu2_dbus_acc(data)                                     (0xFFFFFFFF&(data))
#define  SB2_VCPU2_DACC_get_vcpu2_dbus_acc(data)                                 (0xFFFFFFFF&(data))

#define  SB2_VCPU2_DREQ_NUM                                                     0x1801A314
#define  SB2_VCPU2_DREQ_NUM_reg_addr                                             "0xB801A314"
#define  SB2_VCPU2_DREQ_NUM_reg                                                  0xB801A314
#define  SB2_VCPU2_DREQ_NUM_inst_addr                                            "0x001A"
#define  set_SB2_VCPU2_DREQ_NUM_reg(data)                                        (*((volatile unsigned int*)SB2_VCPU2_DREQ_NUM_reg)=data)
#define  get_SB2_VCPU2_DREQ_NUM_reg                                              (*((volatile unsigned int*)SB2_VCPU2_DREQ_NUM_reg))
#define  SB2_VCPU2_DREQ_NUM_vcpu2_dreq_num_shift                                 (0)
#define  SB2_VCPU2_DREQ_NUM_vcpu2_dreq_num_mask                                  (0x00FFFFFF)
#define  SB2_VCPU2_DREQ_NUM_vcpu2_dreq_num(data)                                 (0x00FFFFFF&(data))
#define  SB2_VCPU2_DREQ_NUM_get_vcpu2_dreq_num(data)                             (0x00FFFFFF&(data))

#define  SB2_VCPU2_DREQ_MAX                                                     0x1801A318
#define  SB2_VCPU2_DREQ_MAX_reg_addr                                             "0xB801A318"
#define  SB2_VCPU2_DREQ_MAX_reg                                                  0xB801A318
#define  SB2_VCPU2_DREQ_MAX_inst_addr                                            "0x001B"
#define  set_SB2_VCPU2_DREQ_MAX_reg(data)                                        (*((volatile unsigned int*)SB2_VCPU2_DREQ_MAX_reg)=data)
#define  get_SB2_VCPU2_DREQ_MAX_reg                                              (*((volatile unsigned int*)SB2_VCPU2_DREQ_MAX_reg))
#define  SB2_VCPU2_DREQ_MAX_vcpu2_dreq_max_shift                                 (0)
#define  SB2_VCPU2_DREQ_MAX_vcpu2_dreq_max_mask                                  (0x0000FFFF)
#define  SB2_VCPU2_DREQ_MAX_vcpu2_dreq_max(data)                                 (0x0000FFFF&(data))
#define  SB2_VCPU2_DREQ_MAX_get_vcpu2_dreq_max(data)                             (0x0000FFFF&(data))

#define  SB2_VCPU2_DREQ_ACK                                                     0x1801A31C
#define  SB2_VCPU2_DREQ_ACK_reg_addr                                             "0xB801A31C"
#define  SB2_VCPU2_DREQ_ACK_reg                                                  0xB801A31C
#define  SB2_VCPU2_DREQ_ACK_inst_addr                                            "0x001C"
#define  set_SB2_VCPU2_DREQ_ACK_reg(data)                                        (*((volatile unsigned int*)SB2_VCPU2_DREQ_ACK_reg)=data)
#define  get_SB2_VCPU2_DREQ_ACK_reg                                              (*((volatile unsigned int*)SB2_VCPU2_DREQ_ACK_reg))
#define  SB2_VCPU2_DREQ_ACK_vcpu2_dreq_ack_shift                                 (0)
#define  SB2_VCPU2_DREQ_ACK_vcpu2_dreq_ack_mask                                  (0x03FFFFFF)
#define  SB2_VCPU2_DREQ_ACK_vcpu2_dreq_ack(data)                                 (0x03FFFFFF&(data))
#define  SB2_VCPU2_DREQ_ACK_get_vcpu2_dreq_ack(data)                             (0x03FFFFFF&(data))

#define  SB2_KCPU_RACC                                                          0x1801A320
#define  SB2_KCPU_RACC_reg_addr                                                  "0xB801A320"
#define  SB2_KCPU_RACC_reg                                                       0xB801A320
#define  SB2_KCPU_RACC_inst_addr                                                 "0x001D"
#define  set_SB2_KCPU_RACC_reg(data)                                             (*((volatile unsigned int*)SB2_KCPU_RACC_reg)=data)
#define  get_SB2_KCPU_RACC_reg                                                   (*((volatile unsigned int*)SB2_KCPU_RACC_reg))
#define  SB2_KCPU_RACC_kcpu_rbus_acc_shift                                       (0)
#define  SB2_KCPU_RACC_kcpu_rbus_acc_mask                                        (0xFFFFFFFF)
#define  SB2_KCPU_RACC_kcpu_rbus_acc(data)                                       (0xFFFFFFFF&(data))
#define  SB2_KCPU_RACC_get_kcpu_rbus_acc(data)                                   (0xFFFFFFFF&(data))

#define  SB2_KCPU_RREQ_RLT                                                      0x1801A324
#define  SB2_KCPU_RREQ_RLT_reg_addr                                              "0xB801A324"
#define  SB2_KCPU_RREQ_RLT_reg                                                   0xB801A324
#define  SB2_KCPU_RREQ_RLT_inst_addr                                             "0x001E"
#define  set_SB2_KCPU_RREQ_RLT_reg(data)                                         (*((volatile unsigned int*)SB2_KCPU_RREQ_RLT_reg)=data)
#define  get_SB2_KCPU_RREQ_RLT_reg                                               (*((volatile unsigned int*)SB2_KCPU_RREQ_RLT_reg))
#define  SB2_KCPU_RREQ_RLT_kcpu_rreq_max_shift                                   (24)
#define  SB2_KCPU_RREQ_RLT_kcpu_rreq_num_shift                                   (0)
#define  SB2_KCPU_RREQ_RLT_kcpu_rreq_max_mask                                    (0xFF000000)
#define  SB2_KCPU_RREQ_RLT_kcpu_rreq_num_mask                                    (0x00FFFFFF)
#define  SB2_KCPU_RREQ_RLT_kcpu_rreq_max(data)                                   (0xFF000000&((data)<<24))
#define  SB2_KCPU_RREQ_RLT_kcpu_rreq_num(data)                                   (0x00FFFFFF&(data))
#define  SB2_KCPU_RREQ_RLT_get_kcpu_rreq_max(data)                               ((0xFF000000&(data))>>24)
#define  SB2_KCPU_RREQ_RLT_get_kcpu_rreq_num(data)                               (0x00FFFFFF&(data))

#define  SB2_VCPU2_RACC                                                         0x1801A328
#define  SB2_VCPU2_RACC_reg_addr                                                 "0xB801A328"
#define  SB2_VCPU2_RACC_reg                                                      0xB801A328
#define  SB2_VCPU2_RACC_inst_addr                                                "0x001F"
#define  set_SB2_VCPU2_RACC_reg(data)                                            (*((volatile unsigned int*)SB2_VCPU2_RACC_reg)=data)
#define  get_SB2_VCPU2_RACC_reg                                                  (*((volatile unsigned int*)SB2_VCPU2_RACC_reg))
#define  SB2_VCPU2_RACC_vcpu2_rbus_acc_shift                                     (0)
#define  SB2_VCPU2_RACC_vcpu2_rbus_acc_mask                                      (0xFFFFFFFF)
#define  SB2_VCPU2_RACC_vcpu2_rbus_acc(data)                                     (0xFFFFFFFF&(data))
#define  SB2_VCPU2_RACC_get_vcpu2_rbus_acc(data)                                 (0xFFFFFFFF&(data))

#define  SB2_VCPU2_RREQ_RLT                                                     0x1801A32C
#define  SB2_VCPU2_RREQ_RLT_reg_addr                                             "0xB801A32C"
#define  SB2_VCPU2_RREQ_RLT_reg                                                  0xB801A32C
#define  SB2_VCPU2_RREQ_RLT_inst_addr                                            "0x0020"
#define  set_SB2_VCPU2_RREQ_RLT_reg(data)                                        (*((volatile unsigned int*)SB2_VCPU2_RREQ_RLT_reg)=data)
#define  get_SB2_VCPU2_RREQ_RLT_reg                                              (*((volatile unsigned int*)SB2_VCPU2_RREQ_RLT_reg))
#define  SB2_VCPU2_RREQ_RLT_vcpu2_rreq_max_shift                                 (24)
#define  SB2_VCPU2_RREQ_RLT_vcpu2_rreq_num_shift                                 (0)
#define  SB2_VCPU2_RREQ_RLT_vcpu2_rreq_max_mask                                  (0xFF000000)
#define  SB2_VCPU2_RREQ_RLT_vcpu2_rreq_num_mask                                  (0x00FFFFFF)
#define  SB2_VCPU2_RREQ_RLT_vcpu2_rreq_max(data)                                 (0xFF000000&((data)<<24))
#define  SB2_VCPU2_RREQ_RLT_vcpu2_rreq_num(data)                                 (0x00FFFFFF&(data))
#define  SB2_VCPU2_RREQ_RLT_get_vcpu2_rreq_max(data)                             ((0xFF000000&(data))>>24)
#define  SB2_VCPU2_RREQ_RLT_get_vcpu2_rreq_num(data)                             (0x00FFFFFF&(data))

#define  SB2_ACPU2_DACC                                                         0x1801A330
#define  SB2_ACPU2_DACC_reg_addr                                                 "0xB801A330"
#define  SB2_ACPU2_DACC_reg                                                      0xB801A330
#define  SB2_ACPU2_DACC_inst_addr                                                "0x0021"
#define  set_SB2_ACPU2_DACC_reg(data)                                            (*((volatile unsigned int*)SB2_ACPU2_DACC_reg)=data)
#define  get_SB2_ACPU2_DACC_reg                                                  (*((volatile unsigned int*)SB2_ACPU2_DACC_reg))
#define  SB2_ACPU2_DACC_acpu2_dbus_acc_shift                                     (0)
#define  SB2_ACPU2_DACC_acpu2_dbus_acc_mask                                      (0xFFFFFFFF)
#define  SB2_ACPU2_DACC_acpu2_dbus_acc(data)                                     (0xFFFFFFFF&(data))
#define  SB2_ACPU2_DACC_get_acpu2_dbus_acc(data)                                 (0xFFFFFFFF&(data))

#define  SB2_ACPU2_DREQ_NUM                                                     0x1801A334
#define  SB2_ACPU2_DREQ_NUM_reg_addr                                             "0xB801A334"
#define  SB2_ACPU2_DREQ_NUM_reg                                                  0xB801A334
#define  SB2_ACPU2_DREQ_NUM_inst_addr                                            "0x0022"
#define  set_SB2_ACPU2_DREQ_NUM_reg(data)                                        (*((volatile unsigned int*)SB2_ACPU2_DREQ_NUM_reg)=data)
#define  get_SB2_ACPU2_DREQ_NUM_reg                                              (*((volatile unsigned int*)SB2_ACPU2_DREQ_NUM_reg))
#define  SB2_ACPU2_DREQ_NUM_acpu2_dreq_num_shift                                 (0)
#define  SB2_ACPU2_DREQ_NUM_acpu2_dreq_num_mask                                  (0x00FFFFFF)
#define  SB2_ACPU2_DREQ_NUM_acpu2_dreq_num(data)                                 (0x00FFFFFF&(data))
#define  SB2_ACPU2_DREQ_NUM_get_acpu2_dreq_num(data)                             (0x00FFFFFF&(data))

#define  SB2_ACPU2_DREQ_MAX                                                     0x1801A338
#define  SB2_ACPU2_DREQ_MAX_reg_addr                                             "0xB801A338"
#define  SB2_ACPU2_DREQ_MAX_reg                                                  0xB801A338
#define  SB2_ACPU2_DREQ_MAX_inst_addr                                            "0x0023"
#define  set_SB2_ACPU2_DREQ_MAX_reg(data)                                        (*((volatile unsigned int*)SB2_ACPU2_DREQ_MAX_reg)=data)
#define  get_SB2_ACPU2_DREQ_MAX_reg                                              (*((volatile unsigned int*)SB2_ACPU2_DREQ_MAX_reg))
#define  SB2_ACPU2_DREQ_MAX_acpu2_dreq_max_shift                                 (0)
#define  SB2_ACPU2_DREQ_MAX_acpu2_dreq_max_mask                                  (0x0000FFFF)
#define  SB2_ACPU2_DREQ_MAX_acpu2_dreq_max(data)                                 (0x0000FFFF&(data))
#define  SB2_ACPU2_DREQ_MAX_get_acpu2_dreq_max(data)                             (0x0000FFFF&(data))

#define  SB2_ACPU2_DREQ_ACK                                                     0x1801A33C
#define  SB2_ACPU2_DREQ_ACK_reg_addr                                             "0xB801A33C"
#define  SB2_ACPU2_DREQ_ACK_reg                                                  0xB801A33C
#define  SB2_ACPU2_DREQ_ACK_inst_addr                                            "0x0024"
#define  set_SB2_ACPU2_DREQ_ACK_reg(data)                                        (*((volatile unsigned int*)SB2_ACPU2_DREQ_ACK_reg)=data)
#define  get_SB2_ACPU2_DREQ_ACK_reg                                              (*((volatile unsigned int*)SB2_ACPU2_DREQ_ACK_reg))
#define  SB2_ACPU2_DREQ_ACK_acpu2_dreq_ack_shift                                 (0)
#define  SB2_ACPU2_DREQ_ACK_acpu2_dreq_ack_mask                                  (0x03FFFFFF)
#define  SB2_ACPU2_DREQ_ACK_acpu2_dreq_ack(data)                                 (0x03FFFFFF&(data))
#define  SB2_ACPU2_DREQ_ACK_get_acpu2_dreq_ack(data)                             (0x03FFFFFF&(data))

#define  SB2_ACPU2_RACC                                                         0x1801A340
#define  SB2_ACPU2_RACC_reg_addr                                                 "0xB801A340"
#define  SB2_ACPU2_RACC_reg                                                      0xB801A340
#define  SB2_ACPU2_RACC_inst_addr                                                "0x0025"
#define  set_SB2_ACPU2_RACC_reg(data)                                            (*((volatile unsigned int*)SB2_ACPU2_RACC_reg)=data)
#define  get_SB2_ACPU2_RACC_reg                                                  (*((volatile unsigned int*)SB2_ACPU2_RACC_reg))
#define  SB2_ACPU2_RACC_acpu2_rbus_acc_shift                                     (0)
#define  SB2_ACPU2_RACC_acpu2_rbus_acc_mask                                      (0xFFFFFFFF)
#define  SB2_ACPU2_RACC_acpu2_rbus_acc(data)                                     (0xFFFFFFFF&(data))
#define  SB2_ACPU2_RACC_get_acpu2_rbus_acc(data)                                 (0xFFFFFFFF&(data))

#define  SB2_ACPU2_RREQ_RLT                                                     0x1801A344
#define  SB2_ACPU2_RREQ_RLT_reg_addr                                             "0xB801A344"
#define  SB2_ACPU2_RREQ_RLT_reg                                                  0xB801A344
#define  SB2_ACPU2_RREQ_RLT_inst_addr                                            "0x0026"
#define  set_SB2_ACPU2_RREQ_RLT_reg(data)                                        (*((volatile unsigned int*)SB2_ACPU2_RREQ_RLT_reg)=data)
#define  get_SB2_ACPU2_RREQ_RLT_reg                                              (*((volatile unsigned int*)SB2_ACPU2_RREQ_RLT_reg))
#define  SB2_ACPU2_RREQ_RLT_acpu2_rreq_max_shift                                 (24)
#define  SB2_ACPU2_RREQ_RLT_acpu2_rreq_num_shift                                 (0)
#define  SB2_ACPU2_RREQ_RLT_acpu2_rreq_max_mask                                  (0xFF000000)
#define  SB2_ACPU2_RREQ_RLT_acpu2_rreq_num_mask                                  (0x00FFFFFF)
#define  SB2_ACPU2_RREQ_RLT_acpu2_rreq_max(data)                                 (0xFF000000&((data)<<24))
#define  SB2_ACPU2_RREQ_RLT_acpu2_rreq_num(data)                                 (0x00FFFFFF&(data))
#define  SB2_ACPU2_RREQ_RLT_get_acpu2_rreq_max(data)                             ((0xFF000000&(data))>>24)
#define  SB2_ACPU2_RREQ_RLT_get_acpu2_rreq_num(data)                             (0x00FFFFFF&(data))

#define  SB2_PC_CTRL                                                            0x1801A400
#define  SB2_PC_CTRL_reg_addr                                                    "0xB801A400"
#define  SB2_PC_CTRL_reg                                                         0xB801A400
#define  SB2_PC_CTRL_inst_addr                                                   "0x0027"
#define  set_SB2_PC_CTRL_reg(data)                                               (*((volatile unsigned int*)SB2_PC_CTRL_reg)=data)
#define  get_SB2_PC_CTRL_reg                                                     (*((volatile unsigned int*)SB2_PC_CTRL_reg))
#define  SB2_PC_CTRL_write_en11_shift                                            (23)
#define  SB2_PC_CTRL_acpu2_rbus_go_shift                                         (22)
#define  SB2_PC_CTRL_write_en10_shift                                            (21)
#define  SB2_PC_CTRL_acpu2_dbus_go_shift                                         (20)
#define  SB2_PC_CTRL_write_en9_shift                                             (19)
#define  SB2_PC_CTRL_kcpu_rbus_go_shift                                          (18)
#define  SB2_PC_CTRL_write_en8_shift                                             (17)
#define  SB2_PC_CTRL_kcpu_dbus_go_shift                                          (16)
#define  SB2_PC_CTRL_write_en7_shift                                             (15)
#define  SB2_PC_CTRL_vcpu2_rbus_go_shift                                         (14)
#define  SB2_PC_CTRL_write_en6_shift                                             (13)
#define  SB2_PC_CTRL_acpu_rbus_go_shift                                          (12)
#define  SB2_PC_CTRL_write_en5_shift                                             (11)
#define  SB2_PC_CTRL_vcpu_rbus_go_shift                                          (10)
#define  SB2_PC_CTRL_write_en4_shift                                             (9)
#define  SB2_PC_CTRL_scpu_rbus_go_shift                                          (8)
#define  SB2_PC_CTRL_write_en3_shift                                             (7)
#define  SB2_PC_CTRL_vcpu2_dbus_go_shift                                         (6)
#define  SB2_PC_CTRL_write_en2_shift                                             (5)
#define  SB2_PC_CTRL_acpu_dbus_go_shift                                          (4)
#define  SB2_PC_CTRL_write_en1_shift                                             (3)
#define  SB2_PC_CTRL_vcpu_dbus_go_shift                                          (2)
#define  SB2_PC_CTRL_write_en11_mask                                             (0x00800000)
#define  SB2_PC_CTRL_acpu2_rbus_go_mask                                          (0x00400000)
#define  SB2_PC_CTRL_write_en10_mask                                             (0x00200000)
#define  SB2_PC_CTRL_acpu2_dbus_go_mask                                          (0x00100000)
#define  SB2_PC_CTRL_write_en9_mask                                              (0x00080000)
#define  SB2_PC_CTRL_kcpu_rbus_go_mask                                           (0x00040000)
#define  SB2_PC_CTRL_write_en8_mask                                              (0x00020000)
#define  SB2_PC_CTRL_kcpu_dbus_go_mask                                           (0x00010000)
#define  SB2_PC_CTRL_write_en7_mask                                              (0x00008000)
#define  SB2_PC_CTRL_vcpu2_rbus_go_mask                                          (0x00004000)
#define  SB2_PC_CTRL_write_en6_mask                                              (0x00002000)
#define  SB2_PC_CTRL_acpu_rbus_go_mask                                           (0x00001000)
#define  SB2_PC_CTRL_write_en5_mask                                              (0x00000800)
#define  SB2_PC_CTRL_vcpu_rbus_go_mask                                           (0x00000400)
#define  SB2_PC_CTRL_write_en4_mask                                              (0x00000200)
#define  SB2_PC_CTRL_scpu_rbus_go_mask                                           (0x00000100)
#define  SB2_PC_CTRL_write_en3_mask                                              (0x00000080)
#define  SB2_PC_CTRL_vcpu2_dbus_go_mask                                          (0x00000040)
#define  SB2_PC_CTRL_write_en2_mask                                              (0x00000020)
#define  SB2_PC_CTRL_acpu_dbus_go_mask                                           (0x00000010)
#define  SB2_PC_CTRL_write_en1_mask                                              (0x00000008)
#define  SB2_PC_CTRL_vcpu_dbus_go_mask                                           (0x00000004)
#define  SB2_PC_CTRL_write_en11(data)                                            (0x00800000&((data)<<23))
#define  SB2_PC_CTRL_acpu2_rbus_go(data)                                         (0x00400000&((data)<<22))
#define  SB2_PC_CTRL_write_en10(data)                                            (0x00200000&((data)<<21))
#define  SB2_PC_CTRL_acpu2_dbus_go(data)                                         (0x00100000&((data)<<20))
#define  SB2_PC_CTRL_write_en9(data)                                             (0x00080000&((data)<<19))
#define  SB2_PC_CTRL_kcpu_rbus_go(data)                                          (0x00040000&((data)<<18))
#define  SB2_PC_CTRL_write_en8(data)                                             (0x00020000&((data)<<17))
#define  SB2_PC_CTRL_kcpu_dbus_go(data)                                          (0x00010000&((data)<<16))
#define  SB2_PC_CTRL_write_en7(data)                                             (0x00008000&((data)<<15))
#define  SB2_PC_CTRL_vcpu2_rbus_go(data)                                         (0x00004000&((data)<<14))
#define  SB2_PC_CTRL_write_en6(data)                                             (0x00002000&((data)<<13))
#define  SB2_PC_CTRL_acpu_rbus_go(data)                                          (0x00001000&((data)<<12))
#define  SB2_PC_CTRL_write_en5(data)                                             (0x00000800&((data)<<11))
#define  SB2_PC_CTRL_vcpu_rbus_go(data)                                          (0x00000400&((data)<<10))
#define  SB2_PC_CTRL_write_en4(data)                                             (0x00000200&((data)<<9))
#define  SB2_PC_CTRL_scpu_rbus_go(data)                                          (0x00000100&((data)<<8))
#define  SB2_PC_CTRL_write_en3(data)                                             (0x00000080&((data)<<7))
#define  SB2_PC_CTRL_vcpu2_dbus_go(data)                                         (0x00000040&((data)<<6))
#define  SB2_PC_CTRL_write_en2(data)                                             (0x00000020&((data)<<5))
#define  SB2_PC_CTRL_acpu_dbus_go(data)                                          (0x00000010&((data)<<4))
#define  SB2_PC_CTRL_write_en1(data)                                             (0x00000008&((data)<<3))
#define  SB2_PC_CTRL_vcpu_dbus_go(data)                                          (0x00000004&((data)<<2))
#define  SB2_PC_CTRL_get_write_en11(data)                                        ((0x00800000&(data))>>23)
#define  SB2_PC_CTRL_get_acpu2_rbus_go(data)                                     ((0x00400000&(data))>>22)
#define  SB2_PC_CTRL_get_write_en10(data)                                        ((0x00200000&(data))>>21)
#define  SB2_PC_CTRL_get_acpu2_dbus_go(data)                                     ((0x00100000&(data))>>20)
#define  SB2_PC_CTRL_get_write_en9(data)                                         ((0x00080000&(data))>>19)
#define  SB2_PC_CTRL_get_kcpu_rbus_go(data)                                      ((0x00040000&(data))>>18)
#define  SB2_PC_CTRL_get_write_en8(data)                                         ((0x00020000&(data))>>17)
#define  SB2_PC_CTRL_get_kcpu_dbus_go(data)                                      ((0x00010000&(data))>>16)
#define  SB2_PC_CTRL_get_write_en7(data)                                         ((0x00008000&(data))>>15)
#define  SB2_PC_CTRL_get_vcpu2_rbus_go(data)                                     ((0x00004000&(data))>>14)
#define  SB2_PC_CTRL_get_write_en6(data)                                         ((0x00002000&(data))>>13)
#define  SB2_PC_CTRL_get_acpu_rbus_go(data)                                      ((0x00001000&(data))>>12)
#define  SB2_PC_CTRL_get_write_en5(data)                                         ((0x00000800&(data))>>11)
#define  SB2_PC_CTRL_get_vcpu_rbus_go(data)                                      ((0x00000400&(data))>>10)
#define  SB2_PC_CTRL_get_write_en4(data)                                         ((0x00000200&(data))>>9)
#define  SB2_PC_CTRL_get_scpu_rbus_go(data)                                      ((0x00000100&(data))>>8)
#define  SB2_PC_CTRL_get_write_en3(data)                                         ((0x00000080&(data))>>7)
#define  SB2_PC_CTRL_get_vcpu2_dbus_go(data)                                     ((0x00000040&(data))>>6)
#define  SB2_PC_CTRL_get_write_en2(data)                                         ((0x00000020&(data))>>5)
#define  SB2_PC_CTRL_get_acpu_dbus_go(data)                                      ((0x00000010&(data))>>4)
#define  SB2_PC_CTRL_get_write_en1(data)                                         ((0x00000008&(data))>>3)
#define  SB2_PC_CTRL_get_vcpu_dbus_go(data)                                      ((0x00000004&(data))>>2)

#define  SB2_VCPU_DACC                                                          0x1801A418
#define  SB2_VCPU_DACC_reg_addr                                                  "0xB801A418"
#define  SB2_VCPU_DACC_reg                                                       0xB801A418
#define  SB2_VCPU_DACC_inst_addr                                                 "0x0028"
#define  set_SB2_VCPU_DACC_reg(data)                                             (*((volatile unsigned int*)SB2_VCPU_DACC_reg)=data)
#define  get_SB2_VCPU_DACC_reg                                                   (*((volatile unsigned int*)SB2_VCPU_DACC_reg))
#define  SB2_VCPU_DACC_vcpu_dbus_acc_shift                                       (0)
#define  SB2_VCPU_DACC_vcpu_dbus_acc_mask                                        (0xFFFFFFFF)
#define  SB2_VCPU_DACC_vcpu_dbus_acc(data)                                       (0xFFFFFFFF&(data))
#define  SB2_VCPU_DACC_get_vcpu_dbus_acc(data)                                   (0xFFFFFFFF&(data))

#define  SB2_VCPU_DREQ_NUM                                                      0x1801A41C
#define  SB2_VCPU_DREQ_NUM_reg_addr                                              "0xB801A41C"
#define  SB2_VCPU_DREQ_NUM_reg                                                   0xB801A41C
#define  SB2_VCPU_DREQ_NUM_inst_addr                                             "0x0029"
#define  set_SB2_VCPU_DREQ_NUM_reg(data)                                         (*((volatile unsigned int*)SB2_VCPU_DREQ_NUM_reg)=data)
#define  get_SB2_VCPU_DREQ_NUM_reg                                               (*((volatile unsigned int*)SB2_VCPU_DREQ_NUM_reg))
#define  SB2_VCPU_DREQ_NUM_vcpu_dreq_num_shift                                   (0)
#define  SB2_VCPU_DREQ_NUM_vcpu_dreq_num_mask                                    (0x00FFFFFF)
#define  SB2_VCPU_DREQ_NUM_vcpu_dreq_num(data)                                   (0x00FFFFFF&(data))
#define  SB2_VCPU_DREQ_NUM_get_vcpu_dreq_num(data)                               (0x00FFFFFF&(data))

#define  SB2_VCPU_DREQ_MAX                                                      0x1801A420
#define  SB2_VCPU_DREQ_MAX_reg_addr                                              "0xB801A420"
#define  SB2_VCPU_DREQ_MAX_reg                                                   0xB801A420
#define  SB2_VCPU_DREQ_MAX_inst_addr                                             "0x002A"
#define  set_SB2_VCPU_DREQ_MAX_reg(data)                                         (*((volatile unsigned int*)SB2_VCPU_DREQ_MAX_reg)=data)
#define  get_SB2_VCPU_DREQ_MAX_reg                                               (*((volatile unsigned int*)SB2_VCPU_DREQ_MAX_reg))
#define  SB2_VCPU_DREQ_MAX_vcpu_dreq_max_shift                                   (0)
#define  SB2_VCPU_DREQ_MAX_vcpu_dreq_max_mask                                    (0x0000FFFF)
#define  SB2_VCPU_DREQ_MAX_vcpu_dreq_max(data)                                   (0x0000FFFF&(data))
#define  SB2_VCPU_DREQ_MAX_get_vcpu_dreq_max(data)                               (0x0000FFFF&(data))

#define  SB2_VCPU_DREQ_ACK                                                      0x1801A424
#define  SB2_VCPU_DREQ_ACK_reg_addr                                              "0xB801A424"
#define  SB2_VCPU_DREQ_ACK_reg                                                   0xB801A424
#define  SB2_VCPU_DREQ_ACK_inst_addr                                             "0x002B"
#define  set_SB2_VCPU_DREQ_ACK_reg(data)                                         (*((volatile unsigned int*)SB2_VCPU_DREQ_ACK_reg)=data)
#define  get_SB2_VCPU_DREQ_ACK_reg                                               (*((volatile unsigned int*)SB2_VCPU_DREQ_ACK_reg))
#define  SB2_VCPU_DREQ_ACK_vcpu_dreq_ack_shift                                   (0)
#define  SB2_VCPU_DREQ_ACK_vcpu_dreq_ack_mask                                    (0x03FFFFFF)
#define  SB2_VCPU_DREQ_ACK_vcpu_dreq_ack(data)                                   (0x03FFFFFF&(data))
#define  SB2_VCPU_DREQ_ACK_get_vcpu_dreq_ack(data)                               (0x03FFFFFF&(data))

#define  SB2_ACPU_DACC                                                          0x1801A42C
#define  SB2_ACPU_DACC_reg_addr                                                  "0xB801A42C"
#define  SB2_ACPU_DACC_reg                                                       0xB801A42C
#define  SB2_ACPU_DACC_inst_addr                                                 "0x002C"
#define  set_SB2_ACPU_DACC_reg(data)                                             (*((volatile unsigned int*)SB2_ACPU_DACC_reg)=data)
#define  get_SB2_ACPU_DACC_reg                                                   (*((volatile unsigned int*)SB2_ACPU_DACC_reg))
#define  SB2_ACPU_DACC_acpu_dbus_acc_shift                                       (0)
#define  SB2_ACPU_DACC_acpu_dbus_acc_mask                                        (0xFFFFFFFF)
#define  SB2_ACPU_DACC_acpu_dbus_acc(data)                                       (0xFFFFFFFF&(data))
#define  SB2_ACPU_DACC_get_acpu_dbus_acc(data)                                   (0xFFFFFFFF&(data))

#define  SB2_ACPU_DREQ_NUM                                                      0x1801A430
#define  SB2_ACPU_DREQ_NUM_reg_addr                                              "0xB801A430"
#define  SB2_ACPU_DREQ_NUM_reg                                                   0xB801A430
#define  SB2_ACPU_DREQ_NUM_inst_addr                                             "0x002D"
#define  set_SB2_ACPU_DREQ_NUM_reg(data)                                         (*((volatile unsigned int*)SB2_ACPU_DREQ_NUM_reg)=data)
#define  get_SB2_ACPU_DREQ_NUM_reg                                               (*((volatile unsigned int*)SB2_ACPU_DREQ_NUM_reg))
#define  SB2_ACPU_DREQ_NUM_acpu_dreq_num_shift                                   (0)
#define  SB2_ACPU_DREQ_NUM_acpu_dreq_num_mask                                    (0x00FFFFFF)
#define  SB2_ACPU_DREQ_NUM_acpu_dreq_num(data)                                   (0x00FFFFFF&(data))
#define  SB2_ACPU_DREQ_NUM_get_acpu_dreq_num(data)                               (0x00FFFFFF&(data))

#define  SB2_ACPU_DREQ_MAX                                                      0x1801A434
#define  SB2_ACPU_DREQ_MAX_reg_addr                                              "0xB801A434"
#define  SB2_ACPU_DREQ_MAX_reg                                                   0xB801A434
#define  SB2_ACPU_DREQ_MAX_inst_addr                                             "0x002E"
#define  set_SB2_ACPU_DREQ_MAX_reg(data)                                         (*((volatile unsigned int*)SB2_ACPU_DREQ_MAX_reg)=data)
#define  get_SB2_ACPU_DREQ_MAX_reg                                               (*((volatile unsigned int*)SB2_ACPU_DREQ_MAX_reg))
#define  SB2_ACPU_DREQ_MAX_acpu_dreq_max_shift                                   (0)
#define  SB2_ACPU_DREQ_MAX_acpu_dreq_max_mask                                    (0x0000FFFF)
#define  SB2_ACPU_DREQ_MAX_acpu_dreq_max(data)                                   (0x0000FFFF&(data))
#define  SB2_ACPU_DREQ_MAX_get_acpu_dreq_max(data)                               (0x0000FFFF&(data))

#define  SB2_ACPU_DREQ_ACK                                                      0x1801A438
#define  SB2_ACPU_DREQ_ACK_reg_addr                                              "0xB801A438"
#define  SB2_ACPU_DREQ_ACK_reg                                                   0xB801A438
#define  SB2_ACPU_DREQ_ACK_inst_addr                                             "0x002F"
#define  set_SB2_ACPU_DREQ_ACK_reg(data)                                         (*((volatile unsigned int*)SB2_ACPU_DREQ_ACK_reg)=data)
#define  get_SB2_ACPU_DREQ_ACK_reg                                               (*((volatile unsigned int*)SB2_ACPU_DREQ_ACK_reg))
#define  SB2_ACPU_DREQ_ACK_acpu_dreq_ack_shift                                   (0)
#define  SB2_ACPU_DREQ_ACK_acpu_dreq_ack_mask                                    (0x03FFFFFF)
#define  SB2_ACPU_DREQ_ACK_acpu_dreq_ack(data)                                   (0x03FFFFFF&(data))
#define  SB2_ACPU_DREQ_ACK_get_acpu_dreq_ack(data)                               (0x03FFFFFF&(data))

#define  SB2_SCPU_RACC                                                          0x1801A440
#define  SB2_SCPU_RACC_reg_addr                                                  "0xB801A440"
#define  SB2_SCPU_RACC_reg                                                       0xB801A440
#define  SB2_SCPU_RACC_inst_addr                                                 "0x0030"
#define  set_SB2_SCPU_RACC_reg(data)                                             (*((volatile unsigned int*)SB2_SCPU_RACC_reg)=data)
#define  get_SB2_SCPU_RACC_reg                                                   (*((volatile unsigned int*)SB2_SCPU_RACC_reg))
#define  SB2_SCPU_RACC_scpu_rbus_acc_shift                                       (0)
#define  SB2_SCPU_RACC_scpu_rbus_acc_mask                                        (0xFFFFFFFF)
#define  SB2_SCPU_RACC_scpu_rbus_acc(data)                                       (0xFFFFFFFF&(data))
#define  SB2_SCPU_RACC_get_scpu_rbus_acc(data)                                   (0xFFFFFFFF&(data))

#define  SB2_SCPU_RREQ_RLT                                                      0x1801A444
#define  SB2_SCPU_RREQ_RLT_reg_addr                                              "0xB801A444"
#define  SB2_SCPU_RREQ_RLT_reg                                                   0xB801A444
#define  SB2_SCPU_RREQ_RLT_inst_addr                                             "0x0031"
#define  set_SB2_SCPU_RREQ_RLT_reg(data)                                         (*((volatile unsigned int*)SB2_SCPU_RREQ_RLT_reg)=data)
#define  get_SB2_SCPU_RREQ_RLT_reg                                               (*((volatile unsigned int*)SB2_SCPU_RREQ_RLT_reg))
#define  SB2_SCPU_RREQ_RLT_scpu_rreq_max_shift                                   (24)
#define  SB2_SCPU_RREQ_RLT_scpu_rreq_num_shift                                   (0)
#define  SB2_SCPU_RREQ_RLT_scpu_rreq_max_mask                                    (0xFF000000)
#define  SB2_SCPU_RREQ_RLT_scpu_rreq_num_mask                                    (0x00FFFFFF)
#define  SB2_SCPU_RREQ_RLT_scpu_rreq_max(data)                                   (0xFF000000&((data)<<24))
#define  SB2_SCPU_RREQ_RLT_scpu_rreq_num(data)                                   (0x00FFFFFF&(data))
#define  SB2_SCPU_RREQ_RLT_get_scpu_rreq_max(data)                               ((0xFF000000&(data))>>24)
#define  SB2_SCPU_RREQ_RLT_get_scpu_rreq_num(data)                               (0x00FFFFFF&(data))

#define  SB2_VCPU_RACC                                                          0x1801A448
#define  SB2_VCPU_RACC_reg_addr                                                  "0xB801A448"
#define  SB2_VCPU_RACC_reg                                                       0xB801A448
#define  SB2_VCPU_RACC_inst_addr                                                 "0x0032"
#define  set_SB2_VCPU_RACC_reg(data)                                             (*((volatile unsigned int*)SB2_VCPU_RACC_reg)=data)
#define  get_SB2_VCPU_RACC_reg                                                   (*((volatile unsigned int*)SB2_VCPU_RACC_reg))
#define  SB2_VCPU_RACC_vcpu_rbus_acc_shift                                       (0)
#define  SB2_VCPU_RACC_vcpu_rbus_acc_mask                                        (0xFFFFFFFF)
#define  SB2_VCPU_RACC_vcpu_rbus_acc(data)                                       (0xFFFFFFFF&(data))
#define  SB2_VCPU_RACC_get_vcpu_rbus_acc(data)                                   (0xFFFFFFFF&(data))

#define  SB2_VCPU_RREQ_RLT                                                      0x1801A44C
#define  SB2_VCPU_RREQ_RLT_reg_addr                                              "0xB801A44C"
#define  SB2_VCPU_RREQ_RLT_reg                                                   0xB801A44C
#define  SB2_VCPU_RREQ_RLT_inst_addr                                             "0x0033"
#define  set_SB2_VCPU_RREQ_RLT_reg(data)                                         (*((volatile unsigned int*)SB2_VCPU_RREQ_RLT_reg)=data)
#define  get_SB2_VCPU_RREQ_RLT_reg                                               (*((volatile unsigned int*)SB2_VCPU_RREQ_RLT_reg))
#define  SB2_VCPU_RREQ_RLT_vcpu_rreq_max_shift                                   (24)
#define  SB2_VCPU_RREQ_RLT_vcpu_rreq_num_shift                                   (0)
#define  SB2_VCPU_RREQ_RLT_vcpu_rreq_max_mask                                    (0xFF000000)
#define  SB2_VCPU_RREQ_RLT_vcpu_rreq_num_mask                                    (0x00FFFFFF)
#define  SB2_VCPU_RREQ_RLT_vcpu_rreq_max(data)                                   (0xFF000000&((data)<<24))
#define  SB2_VCPU_RREQ_RLT_vcpu_rreq_num(data)                                   (0x00FFFFFF&(data))
#define  SB2_VCPU_RREQ_RLT_get_vcpu_rreq_max(data)                               ((0xFF000000&(data))>>24)
#define  SB2_VCPU_RREQ_RLT_get_vcpu_rreq_num(data)                               (0x00FFFFFF&(data))

#define  SB2_ACPU_RACC                                                          0x1801A450
#define  SB2_ACPU_RACC_reg_addr                                                  "0xB801A450"
#define  SB2_ACPU_RACC_reg                                                       0xB801A450
#define  SB2_ACPU_RACC_inst_addr                                                 "0x0034"
#define  set_SB2_ACPU_RACC_reg(data)                                             (*((volatile unsigned int*)SB2_ACPU_RACC_reg)=data)
#define  get_SB2_ACPU_RACC_reg                                                   (*((volatile unsigned int*)SB2_ACPU_RACC_reg))
#define  SB2_ACPU_RACC_acpu_rbus_acc_shift                                       (0)
#define  SB2_ACPU_RACC_acpu_rbus_acc_mask                                        (0xFFFFFFFF)
#define  SB2_ACPU_RACC_acpu_rbus_acc(data)                                       (0xFFFFFFFF&(data))
#define  SB2_ACPU_RACC_get_acpu_rbus_acc(data)                                   (0xFFFFFFFF&(data))

#define  SB2_ACPU_RREQ_RLT                                                      0x1801A454
#define  SB2_ACPU_RREQ_RLT_reg_addr                                              "0xB801A454"
#define  SB2_ACPU_RREQ_RLT_reg                                                   0xB801A454
#define  SB2_ACPU_RREQ_RLT_inst_addr                                             "0x0035"
#define  set_SB2_ACPU_RREQ_RLT_reg(data)                                         (*((volatile unsigned int*)SB2_ACPU_RREQ_RLT_reg)=data)
#define  get_SB2_ACPU_RREQ_RLT_reg                                               (*((volatile unsigned int*)SB2_ACPU_RREQ_RLT_reg))
#define  SB2_ACPU_RREQ_RLT_acpu_rreq_max_shift                                   (24)
#define  SB2_ACPU_RREQ_RLT_acpu_rreq_num_shift                                   (0)
#define  SB2_ACPU_RREQ_RLT_acpu_rreq_max_mask                                    (0xFF000000)
#define  SB2_ACPU_RREQ_RLT_acpu_rreq_num_mask                                    (0x00FFFFFF)
#define  SB2_ACPU_RREQ_RLT_acpu_rreq_max(data)                                   (0xFF000000&((data)<<24))
#define  SB2_ACPU_RREQ_RLT_acpu_rreq_num(data)                                   (0x00FFFFFF&(data))
#define  SB2_ACPU_RREQ_RLT_get_acpu_rreq_max(data)                               ((0xFF000000&(data))>>24)
#define  SB2_ACPU_RREQ_RLT_get_acpu_rreq_num(data)                               (0x00FFFFFF&(data))

#define  SB2_DBG_START_0                                                        0x1801A458
#define  SB2_DBG_START_0_reg_addr                                                "0xB801A458"
#define  SB2_DBG_START_0_reg                                                     0xB801A458
#define  SB2_DBG_START_0_inst_addr                                               "0x0036"
#define  set_SB2_DBG_START_0_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_START_0_reg)=data)
#define  get_SB2_DBG_START_0_reg                                                 (*((volatile unsigned int*)SB2_DBG_START_0_reg))
#define  SB2_DBG_START_0_dbg_start_addr_shift                                    (0)
#define  SB2_DBG_START_0_dbg_start_addr_mask                                     (0xFFFFFFFF)
#define  SB2_DBG_START_0_dbg_start_addr(data)                                    (0xFFFFFFFF&(data))
#define  SB2_DBG_START_0_get_dbg_start_addr(data)                                (0xFFFFFFFF&(data))

#define  SB2_DBG_START_1                                                        0x1801A45C
#define  SB2_DBG_START_1_reg_addr                                                "0xB801A45C"
#define  SB2_DBG_START_1_reg                                                     0xB801A45C
#define  SB2_DBG_START_1_inst_addr                                               "0x0037"
#define  set_SB2_DBG_START_1_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_START_1_reg)=data)
#define  get_SB2_DBG_START_1_reg                                                 (*((volatile unsigned int*)SB2_DBG_START_1_reg))
#define  SB2_DBG_START_1_dbg_start_addr_shift                                    (0)
#define  SB2_DBG_START_1_dbg_start_addr_mask                                     (0xFFFFFFFF)
#define  SB2_DBG_START_1_dbg_start_addr(data)                                    (0xFFFFFFFF&(data))
#define  SB2_DBG_START_1_get_dbg_start_addr(data)                                (0xFFFFFFFF&(data))

#define  SB2_DBG_START_2                                                        0x1801A460
#define  SB2_DBG_START_2_reg_addr                                                "0xB801A460"
#define  SB2_DBG_START_2_reg                                                     0xB801A460
#define  SB2_DBG_START_2_inst_addr                                               "0x0038"
#define  set_SB2_DBG_START_2_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_START_2_reg)=data)
#define  get_SB2_DBG_START_2_reg                                                 (*((volatile unsigned int*)SB2_DBG_START_2_reg))
#define  SB2_DBG_START_2_dbg_start_addr_shift                                    (0)
#define  SB2_DBG_START_2_dbg_start_addr_mask                                     (0xFFFFFFFF)
#define  SB2_DBG_START_2_dbg_start_addr(data)                                    (0xFFFFFFFF&(data))
#define  SB2_DBG_START_2_get_dbg_start_addr(data)                                (0xFFFFFFFF&(data))

#define  SB2_DBG_START_3                                                        0x1801A464
#define  SB2_DBG_START_3_reg_addr                                                "0xB801A464"
#define  SB2_DBG_START_3_reg                                                     0xB801A464
#define  SB2_DBG_START_3_inst_addr                                               "0x0039"
#define  set_SB2_DBG_START_3_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_START_3_reg)=data)
#define  get_SB2_DBG_START_3_reg                                                 (*((volatile unsigned int*)SB2_DBG_START_3_reg))
#define  SB2_DBG_START_3_dbg_start_addr_shift                                    (0)
#define  SB2_DBG_START_3_dbg_start_addr_mask                                     (0xFFFFFFFF)
#define  SB2_DBG_START_3_dbg_start_addr(data)                                    (0xFFFFFFFF&(data))
#define  SB2_DBG_START_3_get_dbg_start_addr(data)                                (0xFFFFFFFF&(data))

#define  SB2_DBG_START_4                                                        0x1801A468
#define  SB2_DBG_START_4_reg_addr                                                "0xB801A468"
#define  SB2_DBG_START_4_reg                                                     0xB801A468
#define  SB2_DBG_START_4_inst_addr                                               "0x003A"
#define  set_SB2_DBG_START_4_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_START_4_reg)=data)
#define  get_SB2_DBG_START_4_reg                                                 (*((volatile unsigned int*)SB2_DBG_START_4_reg))
#define  SB2_DBG_START_4_dbg_start_addr_shift                                    (0)
#define  SB2_DBG_START_4_dbg_start_addr_mask                                     (0xFFFFFFFF)
#define  SB2_DBG_START_4_dbg_start_addr(data)                                    (0xFFFFFFFF&(data))
#define  SB2_DBG_START_4_get_dbg_start_addr(data)                                (0xFFFFFFFF&(data))

#define  SB2_DBG_START_5                                                        0x1801A46C
#define  SB2_DBG_START_5_reg_addr                                                "0xB801A46C"
#define  SB2_DBG_START_5_reg                                                     0xB801A46C
#define  SB2_DBG_START_5_inst_addr                                               "0x003B"
#define  set_SB2_DBG_START_5_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_START_5_reg)=data)
#define  get_SB2_DBG_START_5_reg                                                 (*((volatile unsigned int*)SB2_DBG_START_5_reg))
#define  SB2_DBG_START_5_dbg_start_addr_shift                                    (0)
#define  SB2_DBG_START_5_dbg_start_addr_mask                                     (0xFFFFFFFF)
#define  SB2_DBG_START_5_dbg_start_addr(data)                                    (0xFFFFFFFF&(data))
#define  SB2_DBG_START_5_get_dbg_start_addr(data)                                (0xFFFFFFFF&(data))

#define  SB2_DBG_START_6                                                        0x1801A470
#define  SB2_DBG_START_6_reg_addr                                                "0xB801A470"
#define  SB2_DBG_START_6_reg                                                     0xB801A470
#define  SB2_DBG_START_6_inst_addr                                               "0x003C"
#define  set_SB2_DBG_START_6_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_START_6_reg)=data)
#define  get_SB2_DBG_START_6_reg                                                 (*((volatile unsigned int*)SB2_DBG_START_6_reg))
#define  SB2_DBG_START_6_dbg_start_addr_shift                                    (0)
#define  SB2_DBG_START_6_dbg_start_addr_mask                                     (0xFFFFFFFF)
#define  SB2_DBG_START_6_dbg_start_addr(data)                                    (0xFFFFFFFF&(data))
#define  SB2_DBG_START_6_get_dbg_start_addr(data)                                (0xFFFFFFFF&(data))

#define  SB2_DBG_START_7                                                        0x1801A474
#define  SB2_DBG_START_7_reg_addr                                                "0xB801A474"
#define  SB2_DBG_START_7_reg                                                     0xB801A474
#define  SB2_DBG_START_7_inst_addr                                               "0x003D"
#define  set_SB2_DBG_START_7_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_START_7_reg)=data)
#define  get_SB2_DBG_START_7_reg                                                 (*((volatile unsigned int*)SB2_DBG_START_7_reg))
#define  SB2_DBG_START_7_dbg_start_addr_shift                                    (0)
#define  SB2_DBG_START_7_dbg_start_addr_mask                                     (0xFFFFFFFF)
#define  SB2_DBG_START_7_dbg_start_addr(data)                                    (0xFFFFFFFF&(data))
#define  SB2_DBG_START_7_get_dbg_start_addr(data)                                (0xFFFFFFFF&(data))

#define  SB2_DBG_END_0                                                          0x1801A478
#define  SB2_DBG_END_0_reg_addr                                                  "0xB801A478"
#define  SB2_DBG_END_0_reg                                                       0xB801A478
#define  SB2_DBG_END_0_inst_addr                                                 "0x003E"
#define  set_SB2_DBG_END_0_reg(data)                                             (*((volatile unsigned int*)SB2_DBG_END_0_reg)=data)
#define  get_SB2_DBG_END_0_reg                                                   (*((volatile unsigned int*)SB2_DBG_END_0_reg))
#define  SB2_DBG_END_0_dbg_end_addr_shift                                        (0)
#define  SB2_DBG_END_0_dbg_end_addr_mask                                         (0xFFFFFFFF)
#define  SB2_DBG_END_0_dbg_end_addr(data)                                        (0xFFFFFFFF&(data))
#define  SB2_DBG_END_0_get_dbg_end_addr(data)                                    (0xFFFFFFFF&(data))

#define  SB2_DBG_END_1                                                          0x1801A47C
#define  SB2_DBG_END_1_reg_addr                                                  "0xB801A47C"
#define  SB2_DBG_END_1_reg                                                       0xB801A47C
#define  SB2_DBG_END_1_inst_addr                                                 "0x003F"
#define  set_SB2_DBG_END_1_reg(data)                                             (*((volatile unsigned int*)SB2_DBG_END_1_reg)=data)
#define  get_SB2_DBG_END_1_reg                                                   (*((volatile unsigned int*)SB2_DBG_END_1_reg))
#define  SB2_DBG_END_1_dbg_end_addr_shift                                        (0)
#define  SB2_DBG_END_1_dbg_end_addr_mask                                         (0xFFFFFFFF)
#define  SB2_DBG_END_1_dbg_end_addr(data)                                        (0xFFFFFFFF&(data))
#define  SB2_DBG_END_1_get_dbg_end_addr(data)                                    (0xFFFFFFFF&(data))

#define  SB2_DBG_END_2                                                          0x1801A480
#define  SB2_DBG_END_2_reg_addr                                                  "0xB801A480"
#define  SB2_DBG_END_2_reg                                                       0xB801A480
#define  SB2_DBG_END_2_inst_addr                                                 "0x0040"
#define  set_SB2_DBG_END_2_reg(data)                                             (*((volatile unsigned int*)SB2_DBG_END_2_reg)=data)
#define  get_SB2_DBG_END_2_reg                                                   (*((volatile unsigned int*)SB2_DBG_END_2_reg))
#define  SB2_DBG_END_2_dbg_end_addr_shift                                        (0)
#define  SB2_DBG_END_2_dbg_end_addr_mask                                         (0xFFFFFFFF)
#define  SB2_DBG_END_2_dbg_end_addr(data)                                        (0xFFFFFFFF&(data))
#define  SB2_DBG_END_2_get_dbg_end_addr(data)                                    (0xFFFFFFFF&(data))

#define  SB2_DBG_END_3                                                          0x1801A484
#define  SB2_DBG_END_3_reg_addr                                                  "0xB801A484"
#define  SB2_DBG_END_3_reg                                                       0xB801A484
#define  SB2_DBG_END_3_inst_addr                                                 "0x0041"
#define  set_SB2_DBG_END_3_reg(data)                                             (*((volatile unsigned int*)SB2_DBG_END_3_reg)=data)
#define  get_SB2_DBG_END_3_reg                                                   (*((volatile unsigned int*)SB2_DBG_END_3_reg))
#define  SB2_DBG_END_3_dbg_end_addr_shift                                        (0)
#define  SB2_DBG_END_3_dbg_end_addr_mask                                         (0xFFFFFFFF)
#define  SB2_DBG_END_3_dbg_end_addr(data)                                        (0xFFFFFFFF&(data))
#define  SB2_DBG_END_3_get_dbg_end_addr(data)                                    (0xFFFFFFFF&(data))

#define  SB2_DBG_END_4                                                          0x1801A488
#define  SB2_DBG_END_4_reg_addr                                                  "0xB801A488"
#define  SB2_DBG_END_4_reg                                                       0xB801A488
#define  SB2_DBG_END_4_inst_addr                                                 "0x0042"
#define  set_SB2_DBG_END_4_reg(data)                                             (*((volatile unsigned int*)SB2_DBG_END_4_reg)=data)
#define  get_SB2_DBG_END_4_reg                                                   (*((volatile unsigned int*)SB2_DBG_END_4_reg))
#define  SB2_DBG_END_4_dbg_end_addr_shift                                        (0)
#define  SB2_DBG_END_4_dbg_end_addr_mask                                         (0xFFFFFFFF)
#define  SB2_DBG_END_4_dbg_end_addr(data)                                        (0xFFFFFFFF&(data))
#define  SB2_DBG_END_4_get_dbg_end_addr(data)                                    (0xFFFFFFFF&(data))

#define  SB2_DBG_END_5                                                          0x1801A48C
#define  SB2_DBG_END_5_reg_addr                                                  "0xB801A48C"
#define  SB2_DBG_END_5_reg                                                       0xB801A48C
#define  SB2_DBG_END_5_inst_addr                                                 "0x0043"
#define  set_SB2_DBG_END_5_reg(data)                                             (*((volatile unsigned int*)SB2_DBG_END_5_reg)=data)
#define  get_SB2_DBG_END_5_reg                                                   (*((volatile unsigned int*)SB2_DBG_END_5_reg))
#define  SB2_DBG_END_5_dbg_end_addr_shift                                        (0)
#define  SB2_DBG_END_5_dbg_end_addr_mask                                         (0xFFFFFFFF)
#define  SB2_DBG_END_5_dbg_end_addr(data)                                        (0xFFFFFFFF&(data))
#define  SB2_DBG_END_5_get_dbg_end_addr(data)                                    (0xFFFFFFFF&(data))

#define  SB2_DBG_END_6                                                          0x1801A490
#define  SB2_DBG_END_6_reg_addr                                                  "0xB801A490"
#define  SB2_DBG_END_6_reg                                                       0xB801A490
#define  SB2_DBG_END_6_inst_addr                                                 "0x0044"
#define  set_SB2_DBG_END_6_reg(data)                                             (*((volatile unsigned int*)SB2_DBG_END_6_reg)=data)
#define  get_SB2_DBG_END_6_reg                                                   (*((volatile unsigned int*)SB2_DBG_END_6_reg))
#define  SB2_DBG_END_6_dbg_end_addr_shift                                        (0)
#define  SB2_DBG_END_6_dbg_end_addr_mask                                         (0xFFFFFFFF)
#define  SB2_DBG_END_6_dbg_end_addr(data)                                        (0xFFFFFFFF&(data))
#define  SB2_DBG_END_6_get_dbg_end_addr(data)                                    (0xFFFFFFFF&(data))

#define  SB2_DBG_END_7                                                          0x1801A494
#define  SB2_DBG_END_7_reg_addr                                                  "0xB801A494"
#define  SB2_DBG_END_7_reg                                                       0xB801A494
#define  SB2_DBG_END_7_inst_addr                                                 "0x0045"
#define  set_SB2_DBG_END_7_reg(data)                                             (*((volatile unsigned int*)SB2_DBG_END_7_reg)=data)
#define  get_SB2_DBG_END_7_reg                                                   (*((volatile unsigned int*)SB2_DBG_END_7_reg))
#define  SB2_DBG_END_7_dbg_end_addr_shift                                        (0)
#define  SB2_DBG_END_7_dbg_end_addr_mask                                         (0xFFFFFFFF)
#define  SB2_DBG_END_7_dbg_end_addr(data)                                        (0xFFFFFFFF&(data))
#define  SB2_DBG_END_7_get_dbg_end_addr(data)                                    (0xFFFFFFFF&(data))

#define  SB2_DBG_CTRL_0                                                         0x1801A498
#define  SB2_DBG_CTRL_0_reg_addr                                                 "0xB801A498"
#define  SB2_DBG_CTRL_0_reg                                                      0xB801A498
#define  SB2_DBG_CTRL_0_inst_addr                                                "0x0046"
#define  set_SB2_DBG_CTRL_0_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_CTRL_0_reg)=data)
#define  get_SB2_DBG_CTRL_0_reg                                                  (*((volatile unsigned int*)SB2_DBG_CTRL_0_reg))
#define  SB2_DBG_CTRL_0_write_en9_shift                                          (19)
#define  SB2_DBG_CTRL_0_dbg_acpu2_chk_en_shift                                   (18)
#define  SB2_DBG_CTRL_0_write_en8_shift                                          (17)
#define  SB2_DBG_CTRL_0_dbg_kcpu_chk_en_shift                                    (16)
#define  SB2_DBG_CTRL_0_write_en7_shift                                          (15)
#define  SB2_DBG_CTRL_0_dbg_vcpu2_chk_en_shift                                   (14)
#define  SB2_DBG_CTRL_0_write_en6_shift                                          (13)
#define  SB2_DBG_CTRL_0_dbg_acpu_chk_en_shift                                    (12)
#define  SB2_DBG_CTRL_0_write_en5_shift                                          (11)
#define  SB2_DBG_CTRL_0_dbg_vcpu_chk_en_shift                                    (10)
#define  SB2_DBG_CTRL_0_write_en4_shift                                          (9)
#define  SB2_DBG_CTRL_0_dbg_scpu_chk_en_shift                                    (8)
#define  SB2_DBG_CTRL_0_write_en3_shift                                          (7)
#define  SB2_DBG_CTRL_0_dbg_wr_chk_shift                                         (5)
#define  SB2_DBG_CTRL_0_write_en2_shift                                          (4)
#define  SB2_DBG_CTRL_0_dbg_id_chk_shift                                         (2)
#define  SB2_DBG_CTRL_0_write_en1_shift                                          (1)
#define  SB2_DBG_CTRL_0_dbg_en_shift                                             (0)
#define  SB2_DBG_CTRL_0_write_en9_mask                                           (0x00080000)
#define  SB2_DBG_CTRL_0_dbg_acpu2_chk_en_mask                                    (0x00040000)
#define  SB2_DBG_CTRL_0_write_en8_mask                                           (0x00020000)
#define  SB2_DBG_CTRL_0_dbg_kcpu_chk_en_mask                                     (0x00010000)
#define  SB2_DBG_CTRL_0_write_en7_mask                                           (0x00008000)
#define  SB2_DBG_CTRL_0_dbg_vcpu2_chk_en_mask                                    (0x00004000)
#define  SB2_DBG_CTRL_0_write_en6_mask                                           (0x00002000)
#define  SB2_DBG_CTRL_0_dbg_acpu_chk_en_mask                                     (0x00001000)
#define  SB2_DBG_CTRL_0_write_en5_mask                                           (0x00000800)
#define  SB2_DBG_CTRL_0_dbg_vcpu_chk_en_mask                                     (0x00000400)
#define  SB2_DBG_CTRL_0_write_en4_mask                                           (0x00000200)
#define  SB2_DBG_CTRL_0_dbg_scpu_chk_en_mask                                     (0x00000100)
#define  SB2_DBG_CTRL_0_write_en3_mask                                           (0x00000080)
#define  SB2_DBG_CTRL_0_dbg_wr_chk_mask                                          (0x00000060)
#define  SB2_DBG_CTRL_0_write_en2_mask                                           (0x00000010)
#define  SB2_DBG_CTRL_0_dbg_id_chk_mask                                          (0x0000000C)
#define  SB2_DBG_CTRL_0_write_en1_mask                                           (0x00000002)
#define  SB2_DBG_CTRL_0_dbg_en_mask                                              (0x00000001)
#define  SB2_DBG_CTRL_0_write_en9(data)                                          (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL_0_dbg_acpu2_chk_en(data)                                   (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL_0_write_en8(data)                                          (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL_0_dbg_kcpu_chk_en(data)                                    (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL_0_write_en7(data)                                          (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL_0_dbg_vcpu2_chk_en(data)                                   (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL_0_write_en6(data)                                          (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL_0_dbg_acpu_chk_en(data)                                    (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL_0_write_en5(data)                                          (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL_0_dbg_vcpu_chk_en(data)                                    (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL_0_write_en4(data)                                          (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL_0_dbg_scpu_chk_en(data)                                    (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL_0_write_en3(data)                                          (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL_0_dbg_wr_chk(data)                                         (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL_0_write_en2(data)                                          (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL_0_dbg_id_chk(data)                                         (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL_0_write_en1(data)                                          (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL_0_dbg_en(data)                                             (0x00000001&(data))
#define  SB2_DBG_CTRL_0_get_write_en9(data)                                      ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL_0_get_dbg_acpu2_chk_en(data)                               ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL_0_get_write_en8(data)                                      ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL_0_get_dbg_kcpu_chk_en(data)                                ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL_0_get_write_en7(data)                                      ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL_0_get_dbg_vcpu2_chk_en(data)                               ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL_0_get_write_en6(data)                                      ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL_0_get_dbg_acpu_chk_en(data)                                ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL_0_get_write_en5(data)                                      ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL_0_get_dbg_vcpu_chk_en(data)                                ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL_0_get_write_en4(data)                                      ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL_0_get_dbg_scpu_chk_en(data)                                ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL_0_get_write_en3(data)                                      ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL_0_get_dbg_wr_chk(data)                                     ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL_0_get_write_en2(data)                                      ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL_0_get_dbg_id_chk(data)                                     ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL_0_get_write_en1(data)                                      ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL_0_get_dbg_en(data)                                         (0x00000001&(data))

#define  SB2_DBG_CTRL_1                                                         0x1801A49C
#define  SB2_DBG_CTRL_1_reg_addr                                                 "0xB801A49C"
#define  SB2_DBG_CTRL_1_reg                                                      0xB801A49C
#define  SB2_DBG_CTRL_1_inst_addr                                                "0x0047"
#define  set_SB2_DBG_CTRL_1_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_CTRL_1_reg)=data)
#define  get_SB2_DBG_CTRL_1_reg                                                  (*((volatile unsigned int*)SB2_DBG_CTRL_1_reg))
#define  SB2_DBG_CTRL_1_write_en9_shift                                          (19)
#define  SB2_DBG_CTRL_1_dbg_acpu2_chk_en_shift                                   (18)
#define  SB2_DBG_CTRL_1_write_en8_shift                                          (17)
#define  SB2_DBG_CTRL_1_dbg_kcpu_chk_en_shift                                    (16)
#define  SB2_DBG_CTRL_1_write_en7_shift                                          (15)
#define  SB2_DBG_CTRL_1_dbg_vcpu2_chk_en_shift                                   (14)
#define  SB2_DBG_CTRL_1_write_en6_shift                                          (13)
#define  SB2_DBG_CTRL_1_dbg_acpu_chk_en_shift                                    (12)
#define  SB2_DBG_CTRL_1_write_en5_shift                                          (11)
#define  SB2_DBG_CTRL_1_dbg_vcpu_chk_en_shift                                    (10)
#define  SB2_DBG_CTRL_1_write_en4_shift                                          (9)
#define  SB2_DBG_CTRL_1_dbg_scpu_chk_en_shift                                    (8)
#define  SB2_DBG_CTRL_1_write_en3_shift                                          (7)
#define  SB2_DBG_CTRL_1_dbg_wr_chk_shift                                         (5)
#define  SB2_DBG_CTRL_1_write_en2_shift                                          (4)
#define  SB2_DBG_CTRL_1_dbg_id_chk_shift                                         (2)
#define  SB2_DBG_CTRL_1_write_en1_shift                                          (1)
#define  SB2_DBG_CTRL_1_dbg_en_shift                                             (0)
#define  SB2_DBG_CTRL_1_write_en9_mask                                           (0x00080000)
#define  SB2_DBG_CTRL_1_dbg_acpu2_chk_en_mask                                    (0x00040000)
#define  SB2_DBG_CTRL_1_write_en8_mask                                           (0x00020000)
#define  SB2_DBG_CTRL_1_dbg_kcpu_chk_en_mask                                     (0x00010000)
#define  SB2_DBG_CTRL_1_write_en7_mask                                           (0x00008000)
#define  SB2_DBG_CTRL_1_dbg_vcpu2_chk_en_mask                                    (0x00004000)
#define  SB2_DBG_CTRL_1_write_en6_mask                                           (0x00002000)
#define  SB2_DBG_CTRL_1_dbg_acpu_chk_en_mask                                     (0x00001000)
#define  SB2_DBG_CTRL_1_write_en5_mask                                           (0x00000800)
#define  SB2_DBG_CTRL_1_dbg_vcpu_chk_en_mask                                     (0x00000400)
#define  SB2_DBG_CTRL_1_write_en4_mask                                           (0x00000200)
#define  SB2_DBG_CTRL_1_dbg_scpu_chk_en_mask                                     (0x00000100)
#define  SB2_DBG_CTRL_1_write_en3_mask                                           (0x00000080)
#define  SB2_DBG_CTRL_1_dbg_wr_chk_mask                                          (0x00000060)
#define  SB2_DBG_CTRL_1_write_en2_mask                                           (0x00000010)
#define  SB2_DBG_CTRL_1_dbg_id_chk_mask                                          (0x0000000C)
#define  SB2_DBG_CTRL_1_write_en1_mask                                           (0x00000002)
#define  SB2_DBG_CTRL_1_dbg_en_mask                                              (0x00000001)
#define  SB2_DBG_CTRL_1_write_en9(data)                                          (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL_1_dbg_acpu2_chk_en(data)                                   (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL_1_write_en8(data)                                          (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL_1_dbg_kcpu_chk_en(data)                                    (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL_1_write_en7(data)                                          (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL_1_dbg_vcpu2_chk_en(data)                                   (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL_1_write_en6(data)                                          (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL_1_dbg_acpu_chk_en(data)                                    (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL_1_write_en5(data)                                          (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL_1_dbg_vcpu_chk_en(data)                                    (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL_1_write_en4(data)                                          (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL_1_dbg_scpu_chk_en(data)                                    (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL_1_write_en3(data)                                          (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL_1_dbg_wr_chk(data)                                         (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL_1_write_en2(data)                                          (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL_1_dbg_id_chk(data)                                         (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL_1_write_en1(data)                                          (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL_1_dbg_en(data)                                             (0x00000001&(data))
#define  SB2_DBG_CTRL_1_get_write_en9(data)                                      ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL_1_get_dbg_acpu2_chk_en(data)                               ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL_1_get_write_en8(data)                                      ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL_1_get_dbg_kcpu_chk_en(data)                                ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL_1_get_write_en7(data)                                      ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL_1_get_dbg_vcpu2_chk_en(data)                               ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL_1_get_write_en6(data)                                      ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL_1_get_dbg_acpu_chk_en(data)                                ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL_1_get_write_en5(data)                                      ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL_1_get_dbg_vcpu_chk_en(data)                                ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL_1_get_write_en4(data)                                      ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL_1_get_dbg_scpu_chk_en(data)                                ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL_1_get_write_en3(data)                                      ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL_1_get_dbg_wr_chk(data)                                     ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL_1_get_write_en2(data)                                      ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL_1_get_dbg_id_chk(data)                                     ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL_1_get_write_en1(data)                                      ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL_1_get_dbg_en(data)                                         (0x00000001&(data))

#define  SB2_DBG_CTRL_2                                                         0x1801A4A0
#define  SB2_DBG_CTRL_2_reg_addr                                                 "0xB801A4A0"
#define  SB2_DBG_CTRL_2_reg                                                      0xB801A4A0
#define  SB2_DBG_CTRL_2_inst_addr                                                "0x0048"
#define  set_SB2_DBG_CTRL_2_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_CTRL_2_reg)=data)
#define  get_SB2_DBG_CTRL_2_reg                                                  (*((volatile unsigned int*)SB2_DBG_CTRL_2_reg))
#define  SB2_DBG_CTRL_2_write_en9_shift                                          (19)
#define  SB2_DBG_CTRL_2_dbg_acpu2_chk_en_shift                                   (18)
#define  SB2_DBG_CTRL_2_write_en8_shift                                          (17)
#define  SB2_DBG_CTRL_2_dbg_kcpu_chk_en_shift                                    (16)
#define  SB2_DBG_CTRL_2_write_en7_shift                                          (15)
#define  SB2_DBG_CTRL_2_dbg_vcpu2_chk_en_shift                                   (14)
#define  SB2_DBG_CTRL_2_write_en6_shift                                          (13)
#define  SB2_DBG_CTRL_2_dbg_acpu_chk_en_shift                                    (12)
#define  SB2_DBG_CTRL_2_write_en5_shift                                          (11)
#define  SB2_DBG_CTRL_2_dbg_vcpu_chk_en_shift                                    (10)
#define  SB2_DBG_CTRL_2_write_en4_shift                                          (9)
#define  SB2_DBG_CTRL_2_dbg_scpu_chk_en_shift                                    (8)
#define  SB2_DBG_CTRL_2_write_en3_shift                                          (7)
#define  SB2_DBG_CTRL_2_dbg_wr_chk_shift                                         (5)
#define  SB2_DBG_CTRL_2_write_en2_shift                                          (4)
#define  SB2_DBG_CTRL_2_dbg_id_chk_shift                                         (2)
#define  SB2_DBG_CTRL_2_write_en1_shift                                          (1)
#define  SB2_DBG_CTRL_2_dbg_en_shift                                             (0)
#define  SB2_DBG_CTRL_2_write_en9_mask                                           (0x00080000)
#define  SB2_DBG_CTRL_2_dbg_acpu2_chk_en_mask                                    (0x00040000)
#define  SB2_DBG_CTRL_2_write_en8_mask                                           (0x00020000)
#define  SB2_DBG_CTRL_2_dbg_kcpu_chk_en_mask                                     (0x00010000)
#define  SB2_DBG_CTRL_2_write_en7_mask                                           (0x00008000)
#define  SB2_DBG_CTRL_2_dbg_vcpu2_chk_en_mask                                    (0x00004000)
#define  SB2_DBG_CTRL_2_write_en6_mask                                           (0x00002000)
#define  SB2_DBG_CTRL_2_dbg_acpu_chk_en_mask                                     (0x00001000)
#define  SB2_DBG_CTRL_2_write_en5_mask                                           (0x00000800)
#define  SB2_DBG_CTRL_2_dbg_vcpu_chk_en_mask                                     (0x00000400)
#define  SB2_DBG_CTRL_2_write_en4_mask                                           (0x00000200)
#define  SB2_DBG_CTRL_2_dbg_scpu_chk_en_mask                                     (0x00000100)
#define  SB2_DBG_CTRL_2_write_en3_mask                                           (0x00000080)
#define  SB2_DBG_CTRL_2_dbg_wr_chk_mask                                          (0x00000060)
#define  SB2_DBG_CTRL_2_write_en2_mask                                           (0x00000010)
#define  SB2_DBG_CTRL_2_dbg_id_chk_mask                                          (0x0000000C)
#define  SB2_DBG_CTRL_2_write_en1_mask                                           (0x00000002)
#define  SB2_DBG_CTRL_2_dbg_en_mask                                              (0x00000001)
#define  SB2_DBG_CTRL_2_write_en9(data)                                          (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL_2_dbg_acpu2_chk_en(data)                                   (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL_2_write_en8(data)                                          (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL_2_dbg_kcpu_chk_en(data)                                    (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL_2_write_en7(data)                                          (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL_2_dbg_vcpu2_chk_en(data)                                   (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL_2_write_en6(data)                                          (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL_2_dbg_acpu_chk_en(data)                                    (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL_2_write_en5(data)                                          (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL_2_dbg_vcpu_chk_en(data)                                    (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL_2_write_en4(data)                                          (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL_2_dbg_scpu_chk_en(data)                                    (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL_2_write_en3(data)                                          (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL_2_dbg_wr_chk(data)                                         (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL_2_write_en2(data)                                          (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL_2_dbg_id_chk(data)                                         (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL_2_write_en1(data)                                          (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL_2_dbg_en(data)                                             (0x00000001&(data))
#define  SB2_DBG_CTRL_2_get_write_en9(data)                                      ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL_2_get_dbg_acpu2_chk_en(data)                               ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL_2_get_write_en8(data)                                      ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL_2_get_dbg_kcpu_chk_en(data)                                ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL_2_get_write_en7(data)                                      ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL_2_get_dbg_vcpu2_chk_en(data)                               ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL_2_get_write_en6(data)                                      ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL_2_get_dbg_acpu_chk_en(data)                                ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL_2_get_write_en5(data)                                      ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL_2_get_dbg_vcpu_chk_en(data)                                ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL_2_get_write_en4(data)                                      ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL_2_get_dbg_scpu_chk_en(data)                                ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL_2_get_write_en3(data)                                      ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL_2_get_dbg_wr_chk(data)                                     ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL_2_get_write_en2(data)                                      ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL_2_get_dbg_id_chk(data)                                     ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL_2_get_write_en1(data)                                      ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL_2_get_dbg_en(data)                                         (0x00000001&(data))

#define  SB2_DBG_CTRL_3                                                         0x1801A4A4
#define  SB2_DBG_CTRL_3_reg_addr                                                 "0xB801A4A4"
#define  SB2_DBG_CTRL_3_reg                                                      0xB801A4A4
#define  SB2_DBG_CTRL_3_inst_addr                                                "0x0049"
#define  set_SB2_DBG_CTRL_3_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_CTRL_3_reg)=data)
#define  get_SB2_DBG_CTRL_3_reg                                                  (*((volatile unsigned int*)SB2_DBG_CTRL_3_reg))
#define  SB2_DBG_CTRL_3_write_en9_shift                                          (19)
#define  SB2_DBG_CTRL_3_dbg_acpu2_chk_en_shift                                   (18)
#define  SB2_DBG_CTRL_3_write_en8_shift                                          (17)
#define  SB2_DBG_CTRL_3_dbg_kcpu_chk_en_shift                                    (16)
#define  SB2_DBG_CTRL_3_write_en7_shift                                          (15)
#define  SB2_DBG_CTRL_3_dbg_vcpu2_chk_en_shift                                   (14)
#define  SB2_DBG_CTRL_3_write_en6_shift                                          (13)
#define  SB2_DBG_CTRL_3_dbg_acpu_chk_en_shift                                    (12)
#define  SB2_DBG_CTRL_3_write_en5_shift                                          (11)
#define  SB2_DBG_CTRL_3_dbg_vcpu_chk_en_shift                                    (10)
#define  SB2_DBG_CTRL_3_write_en4_shift                                          (9)
#define  SB2_DBG_CTRL_3_dbg_scpu_chk_en_shift                                    (8)
#define  SB2_DBG_CTRL_3_write_en3_shift                                          (7)
#define  SB2_DBG_CTRL_3_dbg_wr_chk_shift                                         (5)
#define  SB2_DBG_CTRL_3_write_en2_shift                                          (4)
#define  SB2_DBG_CTRL_3_dbg_id_chk_shift                                         (2)
#define  SB2_DBG_CTRL_3_write_en1_shift                                          (1)
#define  SB2_DBG_CTRL_3_dbg_en_shift                                             (0)
#define  SB2_DBG_CTRL_3_write_en9_mask                                           (0x00080000)
#define  SB2_DBG_CTRL_3_dbg_acpu2_chk_en_mask                                    (0x00040000)
#define  SB2_DBG_CTRL_3_write_en8_mask                                           (0x00020000)
#define  SB2_DBG_CTRL_3_dbg_kcpu_chk_en_mask                                     (0x00010000)
#define  SB2_DBG_CTRL_3_write_en7_mask                                           (0x00008000)
#define  SB2_DBG_CTRL_3_dbg_vcpu2_chk_en_mask                                    (0x00004000)
#define  SB2_DBG_CTRL_3_write_en6_mask                                           (0x00002000)
#define  SB2_DBG_CTRL_3_dbg_acpu_chk_en_mask                                     (0x00001000)
#define  SB2_DBG_CTRL_3_write_en5_mask                                           (0x00000800)
#define  SB2_DBG_CTRL_3_dbg_vcpu_chk_en_mask                                     (0x00000400)
#define  SB2_DBG_CTRL_3_write_en4_mask                                           (0x00000200)
#define  SB2_DBG_CTRL_3_dbg_scpu_chk_en_mask                                     (0x00000100)
#define  SB2_DBG_CTRL_3_write_en3_mask                                           (0x00000080)
#define  SB2_DBG_CTRL_3_dbg_wr_chk_mask                                          (0x00000060)
#define  SB2_DBG_CTRL_3_write_en2_mask                                           (0x00000010)
#define  SB2_DBG_CTRL_3_dbg_id_chk_mask                                          (0x0000000C)
#define  SB2_DBG_CTRL_3_write_en1_mask                                           (0x00000002)
#define  SB2_DBG_CTRL_3_dbg_en_mask                                              (0x00000001)
#define  SB2_DBG_CTRL_3_write_en9(data)                                          (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL_3_dbg_acpu2_chk_en(data)                                   (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL_3_write_en8(data)                                          (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL_3_dbg_kcpu_chk_en(data)                                    (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL_3_write_en7(data)                                          (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL_3_dbg_vcpu2_chk_en(data)                                   (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL_3_write_en6(data)                                          (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL_3_dbg_acpu_chk_en(data)                                    (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL_3_write_en5(data)                                          (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL_3_dbg_vcpu_chk_en(data)                                    (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL_3_write_en4(data)                                          (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL_3_dbg_scpu_chk_en(data)                                    (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL_3_write_en3(data)                                          (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL_3_dbg_wr_chk(data)                                         (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL_3_write_en2(data)                                          (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL_3_dbg_id_chk(data)                                         (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL_3_write_en1(data)                                          (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL_3_dbg_en(data)                                             (0x00000001&(data))
#define  SB2_DBG_CTRL_3_get_write_en9(data)                                      ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL_3_get_dbg_acpu2_chk_en(data)                               ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL_3_get_write_en8(data)                                      ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL_3_get_dbg_kcpu_chk_en(data)                                ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL_3_get_write_en7(data)                                      ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL_3_get_dbg_vcpu2_chk_en(data)                               ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL_3_get_write_en6(data)                                      ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL_3_get_dbg_acpu_chk_en(data)                                ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL_3_get_write_en5(data)                                      ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL_3_get_dbg_vcpu_chk_en(data)                                ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL_3_get_write_en4(data)                                      ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL_3_get_dbg_scpu_chk_en(data)                                ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL_3_get_write_en3(data)                                      ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL_3_get_dbg_wr_chk(data)                                     ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL_3_get_write_en2(data)                                      ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL_3_get_dbg_id_chk(data)                                     ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL_3_get_write_en1(data)                                      ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL_3_get_dbg_en(data)                                         (0x00000001&(data))

#define  SB2_DBG_CTRL_4                                                         0x1801A4A8
#define  SB2_DBG_CTRL_4_reg_addr                                                 "0xB801A4A8"
#define  SB2_DBG_CTRL_4_reg                                                      0xB801A4A8
#define  SB2_DBG_CTRL_4_inst_addr                                                "0x004A"
#define  set_SB2_DBG_CTRL_4_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_CTRL_4_reg)=data)
#define  get_SB2_DBG_CTRL_4_reg                                                  (*((volatile unsigned int*)SB2_DBG_CTRL_4_reg))
#define  SB2_DBG_CTRL_4_write_en9_shift                                          (19)
#define  SB2_DBG_CTRL_4_dbg_acpu2_chk_en_shift                                   (18)
#define  SB2_DBG_CTRL_4_write_en8_shift                                          (17)
#define  SB2_DBG_CTRL_4_dbg_kcpu_chk_en_shift                                    (16)
#define  SB2_DBG_CTRL_4_write_en7_shift                                          (15)
#define  SB2_DBG_CTRL_4_dbg_vcpu2_chk_en_shift                                   (14)
#define  SB2_DBG_CTRL_4_write_en6_shift                                          (13)
#define  SB2_DBG_CTRL_4_dbg_acpu_chk_en_shift                                    (12)
#define  SB2_DBG_CTRL_4_write_en5_shift                                          (11)
#define  SB2_DBG_CTRL_4_dbg_vcpu_chk_en_shift                                    (10)
#define  SB2_DBG_CTRL_4_write_en4_shift                                          (9)
#define  SB2_DBG_CTRL_4_dbg_scpu_chk_en_shift                                    (8)
#define  SB2_DBG_CTRL_4_write_en3_shift                                          (7)
#define  SB2_DBG_CTRL_4_dbg_wr_chk_shift                                         (5)
#define  SB2_DBG_CTRL_4_write_en2_shift                                          (4)
#define  SB2_DBG_CTRL_4_dbg_id_chk_shift                                         (2)
#define  SB2_DBG_CTRL_4_write_en1_shift                                          (1)
#define  SB2_DBG_CTRL_4_dbg_en_shift                                             (0)
#define  SB2_DBG_CTRL_4_write_en9_mask                                           (0x00080000)
#define  SB2_DBG_CTRL_4_dbg_acpu2_chk_en_mask                                    (0x00040000)
#define  SB2_DBG_CTRL_4_write_en8_mask                                           (0x00020000)
#define  SB2_DBG_CTRL_4_dbg_kcpu_chk_en_mask                                     (0x00010000)
#define  SB2_DBG_CTRL_4_write_en7_mask                                           (0x00008000)
#define  SB2_DBG_CTRL_4_dbg_vcpu2_chk_en_mask                                    (0x00004000)
#define  SB2_DBG_CTRL_4_write_en6_mask                                           (0x00002000)
#define  SB2_DBG_CTRL_4_dbg_acpu_chk_en_mask                                     (0x00001000)
#define  SB2_DBG_CTRL_4_write_en5_mask                                           (0x00000800)
#define  SB2_DBG_CTRL_4_dbg_vcpu_chk_en_mask                                     (0x00000400)
#define  SB2_DBG_CTRL_4_write_en4_mask                                           (0x00000200)
#define  SB2_DBG_CTRL_4_dbg_scpu_chk_en_mask                                     (0x00000100)
#define  SB2_DBG_CTRL_4_write_en3_mask                                           (0x00000080)
#define  SB2_DBG_CTRL_4_dbg_wr_chk_mask                                          (0x00000060)
#define  SB2_DBG_CTRL_4_write_en2_mask                                           (0x00000010)
#define  SB2_DBG_CTRL_4_dbg_id_chk_mask                                          (0x0000000C)
#define  SB2_DBG_CTRL_4_write_en1_mask                                           (0x00000002)
#define  SB2_DBG_CTRL_4_dbg_en_mask                                              (0x00000001)
#define  SB2_DBG_CTRL_4_write_en9(data)                                          (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL_4_dbg_acpu2_chk_en(data)                                   (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL_4_write_en8(data)                                          (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL_4_dbg_kcpu_chk_en(data)                                    (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL_4_write_en7(data)                                          (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL_4_dbg_vcpu2_chk_en(data)                                   (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL_4_write_en6(data)                                          (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL_4_dbg_acpu_chk_en(data)                                    (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL_4_write_en5(data)                                          (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL_4_dbg_vcpu_chk_en(data)                                    (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL_4_write_en4(data)                                          (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL_4_dbg_scpu_chk_en(data)                                    (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL_4_write_en3(data)                                          (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL_4_dbg_wr_chk(data)                                         (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL_4_write_en2(data)                                          (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL_4_dbg_id_chk(data)                                         (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL_4_write_en1(data)                                          (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL_4_dbg_en(data)                                             (0x00000001&(data))
#define  SB2_DBG_CTRL_4_get_write_en9(data)                                      ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL_4_get_dbg_acpu2_chk_en(data)                               ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL_4_get_write_en8(data)                                      ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL_4_get_dbg_kcpu_chk_en(data)                                ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL_4_get_write_en7(data)                                      ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL_4_get_dbg_vcpu2_chk_en(data)                               ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL_4_get_write_en6(data)                                      ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL_4_get_dbg_acpu_chk_en(data)                                ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL_4_get_write_en5(data)                                      ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL_4_get_dbg_vcpu_chk_en(data)                                ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL_4_get_write_en4(data)                                      ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL_4_get_dbg_scpu_chk_en(data)                                ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL_4_get_write_en3(data)                                      ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL_4_get_dbg_wr_chk(data)                                     ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL_4_get_write_en2(data)                                      ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL_4_get_dbg_id_chk(data)                                     ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL_4_get_write_en1(data)                                      ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL_4_get_dbg_en(data)                                         (0x00000001&(data))

#define  SB2_DBG_CTRL_5                                                         0x1801A4AC
#define  SB2_DBG_CTRL_5_reg_addr                                                 "0xB801A4AC"
#define  SB2_DBG_CTRL_5_reg                                                      0xB801A4AC
#define  SB2_DBG_CTRL_5_inst_addr                                                "0x004B"
#define  set_SB2_DBG_CTRL_5_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_CTRL_5_reg)=data)
#define  get_SB2_DBG_CTRL_5_reg                                                  (*((volatile unsigned int*)SB2_DBG_CTRL_5_reg))
#define  SB2_DBG_CTRL_5_write_en9_shift                                          (19)
#define  SB2_DBG_CTRL_5_dbg_acpu2_chk_en_shift                                   (18)
#define  SB2_DBG_CTRL_5_write_en8_shift                                          (17)
#define  SB2_DBG_CTRL_5_dbg_kcpu_chk_en_shift                                    (16)
#define  SB2_DBG_CTRL_5_write_en7_shift                                          (15)
#define  SB2_DBG_CTRL_5_dbg_vcpu2_chk_en_shift                                   (14)
#define  SB2_DBG_CTRL_5_write_en6_shift                                          (13)
#define  SB2_DBG_CTRL_5_dbg_acpu_chk_en_shift                                    (12)
#define  SB2_DBG_CTRL_5_write_en5_shift                                          (11)
#define  SB2_DBG_CTRL_5_dbg_vcpu_chk_en_shift                                    (10)
#define  SB2_DBG_CTRL_5_write_en4_shift                                          (9)
#define  SB2_DBG_CTRL_5_dbg_scpu_chk_en_shift                                    (8)
#define  SB2_DBG_CTRL_5_write_en3_shift                                          (7)
#define  SB2_DBG_CTRL_5_dbg_wr_chk_shift                                         (5)
#define  SB2_DBG_CTRL_5_write_en2_shift                                          (4)
#define  SB2_DBG_CTRL_5_dbg_id_chk_shift                                         (2)
#define  SB2_DBG_CTRL_5_write_en1_shift                                          (1)
#define  SB2_DBG_CTRL_5_dbg_en_shift                                             (0)
#define  SB2_DBG_CTRL_5_write_en9_mask                                           (0x00080000)
#define  SB2_DBG_CTRL_5_dbg_acpu2_chk_en_mask                                    (0x00040000)
#define  SB2_DBG_CTRL_5_write_en8_mask                                           (0x00020000)
#define  SB2_DBG_CTRL_5_dbg_kcpu_chk_en_mask                                     (0x00010000)
#define  SB2_DBG_CTRL_5_write_en7_mask                                           (0x00008000)
#define  SB2_DBG_CTRL_5_dbg_vcpu2_chk_en_mask                                    (0x00004000)
#define  SB2_DBG_CTRL_5_write_en6_mask                                           (0x00002000)
#define  SB2_DBG_CTRL_5_dbg_acpu_chk_en_mask                                     (0x00001000)
#define  SB2_DBG_CTRL_5_write_en5_mask                                           (0x00000800)
#define  SB2_DBG_CTRL_5_dbg_vcpu_chk_en_mask                                     (0x00000400)
#define  SB2_DBG_CTRL_5_write_en4_mask                                           (0x00000200)
#define  SB2_DBG_CTRL_5_dbg_scpu_chk_en_mask                                     (0x00000100)
#define  SB2_DBG_CTRL_5_write_en3_mask                                           (0x00000080)
#define  SB2_DBG_CTRL_5_dbg_wr_chk_mask                                          (0x00000060)
#define  SB2_DBG_CTRL_5_write_en2_mask                                           (0x00000010)
#define  SB2_DBG_CTRL_5_dbg_id_chk_mask                                          (0x0000000C)
#define  SB2_DBG_CTRL_5_write_en1_mask                                           (0x00000002)
#define  SB2_DBG_CTRL_5_dbg_en_mask                                              (0x00000001)
#define  SB2_DBG_CTRL_5_write_en9(data)                                          (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL_5_dbg_acpu2_chk_en(data)                                   (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL_5_write_en8(data)                                          (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL_5_dbg_kcpu_chk_en(data)                                    (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL_5_write_en7(data)                                          (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL_5_dbg_vcpu2_chk_en(data)                                   (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL_5_write_en6(data)                                          (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL_5_dbg_acpu_chk_en(data)                                    (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL_5_write_en5(data)                                          (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL_5_dbg_vcpu_chk_en(data)                                    (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL_5_write_en4(data)                                          (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL_5_dbg_scpu_chk_en(data)                                    (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL_5_write_en3(data)                                          (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL_5_dbg_wr_chk(data)                                         (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL_5_write_en2(data)                                          (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL_5_dbg_id_chk(data)                                         (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL_5_write_en1(data)                                          (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL_5_dbg_en(data)                                             (0x00000001&(data))
#define  SB2_DBG_CTRL_5_get_write_en9(data)                                      ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL_5_get_dbg_acpu2_chk_en(data)                               ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL_5_get_write_en8(data)                                      ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL_5_get_dbg_kcpu_chk_en(data)                                ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL_5_get_write_en7(data)                                      ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL_5_get_dbg_vcpu2_chk_en(data)                               ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL_5_get_write_en6(data)                                      ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL_5_get_dbg_acpu_chk_en(data)                                ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL_5_get_write_en5(data)                                      ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL_5_get_dbg_vcpu_chk_en(data)                                ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL_5_get_write_en4(data)                                      ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL_5_get_dbg_scpu_chk_en(data)                                ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL_5_get_write_en3(data)                                      ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL_5_get_dbg_wr_chk(data)                                     ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL_5_get_write_en2(data)                                      ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL_5_get_dbg_id_chk(data)                                     ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL_5_get_write_en1(data)                                      ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL_5_get_dbg_en(data)                                         (0x00000001&(data))

#define  SB2_DBG_CTRL_6                                                         0x1801A4B0
#define  SB2_DBG_CTRL_6_reg_addr                                                 "0xB801A4B0"
#define  SB2_DBG_CTRL_6_reg                                                      0xB801A4B0
#define  SB2_DBG_CTRL_6_inst_addr                                                "0x004C"
#define  set_SB2_DBG_CTRL_6_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_CTRL_6_reg)=data)
#define  get_SB2_DBG_CTRL_6_reg                                                  (*((volatile unsigned int*)SB2_DBG_CTRL_6_reg))
#define  SB2_DBG_CTRL_6_write_en9_shift                                          (19)
#define  SB2_DBG_CTRL_6_dbg_acpu2_chk_en_shift                                   (18)
#define  SB2_DBG_CTRL_6_write_en8_shift                                          (17)
#define  SB2_DBG_CTRL_6_dbg_kcpu_chk_en_shift                                    (16)
#define  SB2_DBG_CTRL_6_write_en7_shift                                          (15)
#define  SB2_DBG_CTRL_6_dbg_vcpu2_chk_en_shift                                   (14)
#define  SB2_DBG_CTRL_6_write_en6_shift                                          (13)
#define  SB2_DBG_CTRL_6_dbg_acpu_chk_en_shift                                    (12)
#define  SB2_DBG_CTRL_6_write_en5_shift                                          (11)
#define  SB2_DBG_CTRL_6_dbg_vcpu_chk_en_shift                                    (10)
#define  SB2_DBG_CTRL_6_write_en4_shift                                          (9)
#define  SB2_DBG_CTRL_6_dbg_scpu_chk_en_shift                                    (8)
#define  SB2_DBG_CTRL_6_write_en3_shift                                          (7)
#define  SB2_DBG_CTRL_6_dbg_wr_chk_shift                                         (5)
#define  SB2_DBG_CTRL_6_write_en2_shift                                          (4)
#define  SB2_DBG_CTRL_6_dbg_id_chk_shift                                         (2)
#define  SB2_DBG_CTRL_6_write_en1_shift                                          (1)
#define  SB2_DBG_CTRL_6_dbg_en_shift                                             (0)
#define  SB2_DBG_CTRL_6_write_en9_mask                                           (0x00080000)
#define  SB2_DBG_CTRL_6_dbg_acpu2_chk_en_mask                                    (0x00040000)
#define  SB2_DBG_CTRL_6_write_en8_mask                                           (0x00020000)
#define  SB2_DBG_CTRL_6_dbg_kcpu_chk_en_mask                                     (0x00010000)
#define  SB2_DBG_CTRL_6_write_en7_mask                                           (0x00008000)
#define  SB2_DBG_CTRL_6_dbg_vcpu2_chk_en_mask                                    (0x00004000)
#define  SB2_DBG_CTRL_6_write_en6_mask                                           (0x00002000)
#define  SB2_DBG_CTRL_6_dbg_acpu_chk_en_mask                                     (0x00001000)
#define  SB2_DBG_CTRL_6_write_en5_mask                                           (0x00000800)
#define  SB2_DBG_CTRL_6_dbg_vcpu_chk_en_mask                                     (0x00000400)
#define  SB2_DBG_CTRL_6_write_en4_mask                                           (0x00000200)
#define  SB2_DBG_CTRL_6_dbg_scpu_chk_en_mask                                     (0x00000100)
#define  SB2_DBG_CTRL_6_write_en3_mask                                           (0x00000080)
#define  SB2_DBG_CTRL_6_dbg_wr_chk_mask                                          (0x00000060)
#define  SB2_DBG_CTRL_6_write_en2_mask                                           (0x00000010)
#define  SB2_DBG_CTRL_6_dbg_id_chk_mask                                          (0x0000000C)
#define  SB2_DBG_CTRL_6_write_en1_mask                                           (0x00000002)
#define  SB2_DBG_CTRL_6_dbg_en_mask                                              (0x00000001)
#define  SB2_DBG_CTRL_6_write_en9(data)                                          (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL_6_dbg_acpu2_chk_en(data)                                   (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL_6_write_en8(data)                                          (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL_6_dbg_kcpu_chk_en(data)                                    (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL_6_write_en7(data)                                          (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL_6_dbg_vcpu2_chk_en(data)                                   (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL_6_write_en6(data)                                          (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL_6_dbg_acpu_chk_en(data)                                    (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL_6_write_en5(data)                                          (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL_6_dbg_vcpu_chk_en(data)                                    (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL_6_write_en4(data)                                          (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL_6_dbg_scpu_chk_en(data)                                    (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL_6_write_en3(data)                                          (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL_6_dbg_wr_chk(data)                                         (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL_6_write_en2(data)                                          (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL_6_dbg_id_chk(data)                                         (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL_6_write_en1(data)                                          (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL_6_dbg_en(data)                                             (0x00000001&(data))
#define  SB2_DBG_CTRL_6_get_write_en9(data)                                      ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL_6_get_dbg_acpu2_chk_en(data)                               ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL_6_get_write_en8(data)                                      ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL_6_get_dbg_kcpu_chk_en(data)                                ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL_6_get_write_en7(data)                                      ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL_6_get_dbg_vcpu2_chk_en(data)                               ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL_6_get_write_en6(data)                                      ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL_6_get_dbg_acpu_chk_en(data)                                ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL_6_get_write_en5(data)                                      ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL_6_get_dbg_vcpu_chk_en(data)                                ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL_6_get_write_en4(data)                                      ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL_6_get_dbg_scpu_chk_en(data)                                ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL_6_get_write_en3(data)                                      ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL_6_get_dbg_wr_chk(data)                                     ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL_6_get_write_en2(data)                                      ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL_6_get_dbg_id_chk(data)                                     ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL_6_get_write_en1(data)                                      ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL_6_get_dbg_en(data)                                         (0x00000001&(data))

#define  SB2_DBG_CTRL_7                                                         0x1801A4B4
#define  SB2_DBG_CTRL_7_reg_addr                                                 "0xB801A4B4"
#define  SB2_DBG_CTRL_7_reg                                                      0xB801A4B4
#define  SB2_DBG_CTRL_7_inst_addr                                                "0x004D"
#define  set_SB2_DBG_CTRL_7_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_CTRL_7_reg)=data)
#define  get_SB2_DBG_CTRL_7_reg                                                  (*((volatile unsigned int*)SB2_DBG_CTRL_7_reg))
#define  SB2_DBG_CTRL_7_write_en9_shift                                          (19)
#define  SB2_DBG_CTRL_7_dbg_acpu2_chk_en_shift                                   (18)
#define  SB2_DBG_CTRL_7_write_en8_shift                                          (17)
#define  SB2_DBG_CTRL_7_dbg_kcpu_chk_en_shift                                    (16)
#define  SB2_DBG_CTRL_7_write_en7_shift                                          (15)
#define  SB2_DBG_CTRL_7_dbg_vcpu2_chk_en_shift                                   (14)
#define  SB2_DBG_CTRL_7_write_en6_shift                                          (13)
#define  SB2_DBG_CTRL_7_dbg_acpu_chk_en_shift                                    (12)
#define  SB2_DBG_CTRL_7_write_en5_shift                                          (11)
#define  SB2_DBG_CTRL_7_dbg_vcpu_chk_en_shift                                    (10)
#define  SB2_DBG_CTRL_7_write_en4_shift                                          (9)
#define  SB2_DBG_CTRL_7_dbg_scpu_chk_en_shift                                    (8)
#define  SB2_DBG_CTRL_7_write_en3_shift                                          (7)
#define  SB2_DBG_CTRL_7_dbg_wr_chk_shift                                         (5)
#define  SB2_DBG_CTRL_7_write_en2_shift                                          (4)
#define  SB2_DBG_CTRL_7_dbg_id_chk_shift                                         (2)
#define  SB2_DBG_CTRL_7_write_en1_shift                                          (1)
#define  SB2_DBG_CTRL_7_dbg_en_shift                                             (0)
#define  SB2_DBG_CTRL_7_write_en9_mask                                           (0x00080000)
#define  SB2_DBG_CTRL_7_dbg_acpu2_chk_en_mask                                    (0x00040000)
#define  SB2_DBG_CTRL_7_write_en8_mask                                           (0x00020000)
#define  SB2_DBG_CTRL_7_dbg_kcpu_chk_en_mask                                     (0x00010000)
#define  SB2_DBG_CTRL_7_write_en7_mask                                           (0x00008000)
#define  SB2_DBG_CTRL_7_dbg_vcpu2_chk_en_mask                                    (0x00004000)
#define  SB2_DBG_CTRL_7_write_en6_mask                                           (0x00002000)
#define  SB2_DBG_CTRL_7_dbg_acpu_chk_en_mask                                     (0x00001000)
#define  SB2_DBG_CTRL_7_write_en5_mask                                           (0x00000800)
#define  SB2_DBG_CTRL_7_dbg_vcpu_chk_en_mask                                     (0x00000400)
#define  SB2_DBG_CTRL_7_write_en4_mask                                           (0x00000200)
#define  SB2_DBG_CTRL_7_dbg_scpu_chk_en_mask                                     (0x00000100)
#define  SB2_DBG_CTRL_7_write_en3_mask                                           (0x00000080)
#define  SB2_DBG_CTRL_7_dbg_wr_chk_mask                                          (0x00000060)
#define  SB2_DBG_CTRL_7_write_en2_mask                                           (0x00000010)
#define  SB2_DBG_CTRL_7_dbg_id_chk_mask                                          (0x0000000C)
#define  SB2_DBG_CTRL_7_write_en1_mask                                           (0x00000002)
#define  SB2_DBG_CTRL_7_dbg_en_mask                                              (0x00000001)
#define  SB2_DBG_CTRL_7_write_en9(data)                                          (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL_7_dbg_acpu2_chk_en(data)                                   (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL_7_write_en8(data)                                          (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL_7_dbg_kcpu_chk_en(data)                                    (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL_7_write_en7(data)                                          (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL_7_dbg_vcpu2_chk_en(data)                                   (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL_7_write_en6(data)                                          (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL_7_dbg_acpu_chk_en(data)                                    (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL_7_write_en5(data)                                          (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL_7_dbg_vcpu_chk_en(data)                                    (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL_7_write_en4(data)                                          (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL_7_dbg_scpu_chk_en(data)                                    (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL_7_write_en3(data)                                          (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL_7_dbg_wr_chk(data)                                         (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL_7_write_en2(data)                                          (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL_7_dbg_id_chk(data)                                         (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL_7_write_en1(data)                                          (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL_7_dbg_en(data)                                             (0x00000001&(data))
#define  SB2_DBG_CTRL_7_get_write_en9(data)                                      ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL_7_get_dbg_acpu2_chk_en(data)                               ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL_7_get_write_en8(data)                                      ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL_7_get_dbg_kcpu_chk_en(data)                                ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL_7_get_write_en7(data)                                      ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL_7_get_dbg_vcpu2_chk_en(data)                               ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL_7_get_write_en6(data)                                      ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL_7_get_dbg_acpu_chk_en(data)                                ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL_7_get_write_en5(data)                                      ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL_7_get_dbg_vcpu_chk_en(data)                                ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL_7_get_write_en4(data)                                      ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL_7_get_dbg_scpu_chk_en(data)                                ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL_7_get_write_en3(data)                                      ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL_7_get_dbg_wr_chk(data)                                     ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL_7_get_write_en2(data)                                      ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL_7_get_dbg_id_chk(data)                                     ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL_7_get_write_en1(data)                                      ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL_7_get_dbg_en(data)                                         (0x00000001&(data))

#define  SB2_DBG_ADDR_0                                                         0x1801A4B8
#define  SB2_DBG_ADDR_0_reg_addr                                                 "0xB801A4B8"
#define  SB2_DBG_ADDR_0_reg                                                      0xB801A4B8
#define  SB2_DBG_ADDR_0_inst_addr                                                "0x004E"
#define  set_SB2_DBG_ADDR_0_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_ADDR_0_reg)=data)
#define  get_SB2_DBG_ADDR_0_reg                                                  (*((volatile unsigned int*)SB2_DBG_ADDR_0_reg))
#define  SB2_DBG_ADDR_0_dbg_addr_shift                                           (0)
#define  SB2_DBG_ADDR_0_dbg_addr_mask                                            (0xFFFFFFFF)
#define  SB2_DBG_ADDR_0_dbg_addr(data)                                           (0xFFFFFFFF&(data))
#define  SB2_DBG_ADDR_0_get_dbg_addr(data)                                       (0xFFFFFFFF&(data))

#define  SB2_DBG_ADDR_1                                                         0x1801A4BC
#define  SB2_DBG_ADDR_1_reg_addr                                                 "0xB801A4BC"
#define  SB2_DBG_ADDR_1_reg                                                      0xB801A4BC
#define  SB2_DBG_ADDR_1_inst_addr                                                "0x004F"
#define  set_SB2_DBG_ADDR_1_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_ADDR_1_reg)=data)
#define  get_SB2_DBG_ADDR_1_reg                                                  (*((volatile unsigned int*)SB2_DBG_ADDR_1_reg))
#define  SB2_DBG_ADDR_1_dbg_addr_shift                                           (0)
#define  SB2_DBG_ADDR_1_dbg_addr_mask                                            (0xFFFFFFFF)
#define  SB2_DBG_ADDR_1_dbg_addr(data)                                           (0xFFFFFFFF&(data))
#define  SB2_DBG_ADDR_1_get_dbg_addr(data)                                       (0xFFFFFFFF&(data))

#define  SB2_DBG_ADDR_2                                                         0x1801A4C0
#define  SB2_DBG_ADDR_2_reg_addr                                                 "0xB801A4C0"
#define  SB2_DBG_ADDR_2_reg                                                      0xB801A4C0
#define  SB2_DBG_ADDR_2_inst_addr                                                "0x0050"
#define  set_SB2_DBG_ADDR_2_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_ADDR_2_reg)=data)
#define  get_SB2_DBG_ADDR_2_reg                                                  (*((volatile unsigned int*)SB2_DBG_ADDR_2_reg))
#define  SB2_DBG_ADDR_2_dbg_addr_shift                                           (0)
#define  SB2_DBG_ADDR_2_dbg_addr_mask                                            (0xFFFFFFFF)
#define  SB2_DBG_ADDR_2_dbg_addr(data)                                           (0xFFFFFFFF&(data))
#define  SB2_DBG_ADDR_2_get_dbg_addr(data)                                       (0xFFFFFFFF&(data))

#define  SB2_DBG_ADDR_3                                                         0x1801A4C4
#define  SB2_DBG_ADDR_3_reg_addr                                                 "0xB801A4C4"
#define  SB2_DBG_ADDR_3_reg                                                      0xB801A4C4
#define  SB2_DBG_ADDR_3_inst_addr                                                "0x0051"
#define  set_SB2_DBG_ADDR_3_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_ADDR_3_reg)=data)
#define  get_SB2_DBG_ADDR_3_reg                                                  (*((volatile unsigned int*)SB2_DBG_ADDR_3_reg))
#define  SB2_DBG_ADDR_3_dbg_addr_shift                                           (0)
#define  SB2_DBG_ADDR_3_dbg_addr_mask                                            (0xFFFFFFFF)
#define  SB2_DBG_ADDR_3_dbg_addr(data)                                           (0xFFFFFFFF&(data))
#define  SB2_DBG_ADDR_3_get_dbg_addr(data)                                       (0xFFFFFFFF&(data))

#define  SB2_DBG_ADDR_4                                                         0x1801A4C8
#define  SB2_DBG_ADDR_4_reg_addr                                                 "0xB801A4C8"
#define  SB2_DBG_ADDR_4_reg                                                      0xB801A4C8
#define  SB2_DBG_ADDR_4_inst_addr                                                "0x0052"
#define  set_SB2_DBG_ADDR_4_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_ADDR_4_reg)=data)
#define  get_SB2_DBG_ADDR_4_reg                                                  (*((volatile unsigned int*)SB2_DBG_ADDR_4_reg))
#define  SB2_DBG_ADDR_4_dbg_addr_shift                                           (0)
#define  SB2_DBG_ADDR_4_dbg_addr_mask                                            (0xFFFFFFFF)
#define  SB2_DBG_ADDR_4_dbg_addr(data)                                           (0xFFFFFFFF&(data))
#define  SB2_DBG_ADDR_4_get_dbg_addr(data)                                       (0xFFFFFFFF&(data))

#define  SB2_DBG_ADDR1                                                          0x1801A4CC
#define  SB2_DBG_ADDR1_reg_addr                                                  "0xB801A4CC"
#define  SB2_DBG_ADDR1_reg                                                       0xB801A4CC
#define  SB2_DBG_ADDR1_inst_addr                                                 "0x0053"
#define  set_SB2_DBG_ADDR1_reg(data)                                             (*((volatile unsigned int*)SB2_DBG_ADDR1_reg)=data)
#define  get_SB2_DBG_ADDR1_reg                                                   (*((volatile unsigned int*)SB2_DBG_ADDR1_reg))
#define  SB2_DBG_ADDR1_acpu2_dbg_write_shift                                     (11)
#define  SB2_DBG_ADDR1_acpu2_dbg_dacc_shift                                      (10)
#define  SB2_DBG_ADDR1_kcpu_dbg_write_shift                                      (9)
#define  SB2_DBG_ADDR1_kcpu_dbg_dacc_shift                                       (8)
#define  SB2_DBG_ADDR1_vcpu_dbg_write_shift                                      (7)
#define  SB2_DBG_ADDR1_vcpu_dbg_dacc_shift                                       (6)
#define  SB2_DBG_ADDR1_acpu_dbg_write_shift                                      (5)
#define  SB2_DBG_ADDR1_acpu_dbg_dacc_shift                                       (4)
#define  SB2_DBG_ADDR1_scpu_dbg_write_shift                                      (3)
#define  SB2_DBG_ADDR1_scpu_dbg_dacc_shift                                       (2)
#define  SB2_DBG_ADDR1_vcpu2_dbg_write_shift                                     (1)
#define  SB2_DBG_ADDR1_vcpu2_dbg_dacc_shift                                      (0)
#define  SB2_DBG_ADDR1_acpu2_dbg_write_mask                                      (0x00000800)
#define  SB2_DBG_ADDR1_acpu2_dbg_dacc_mask                                       (0x00000400)
#define  SB2_DBG_ADDR1_kcpu_dbg_write_mask                                       (0x00000200)
#define  SB2_DBG_ADDR1_kcpu_dbg_dacc_mask                                        (0x00000100)
#define  SB2_DBG_ADDR1_vcpu_dbg_write_mask                                       (0x00000080)
#define  SB2_DBG_ADDR1_vcpu_dbg_dacc_mask                                        (0x00000040)
#define  SB2_DBG_ADDR1_acpu_dbg_write_mask                                       (0x00000020)
#define  SB2_DBG_ADDR1_acpu_dbg_dacc_mask                                        (0x00000010)
#define  SB2_DBG_ADDR1_scpu_dbg_write_mask                                       (0x00000008)
#define  SB2_DBG_ADDR1_scpu_dbg_dacc_mask                                        (0x00000004)
#define  SB2_DBG_ADDR1_vcpu2_dbg_write_mask                                      (0x00000002)
#define  SB2_DBG_ADDR1_vcpu2_dbg_dacc_mask                                       (0x00000001)
#define  SB2_DBG_ADDR1_acpu2_dbg_write(data)                                     (0x00000800&((data)<<11))
#define  SB2_DBG_ADDR1_acpu2_dbg_dacc(data)                                      (0x00000400&((data)<<10))
#define  SB2_DBG_ADDR1_kcpu_dbg_write(data)                                      (0x00000200&((data)<<9))
#define  SB2_DBG_ADDR1_kcpu_dbg_dacc(data)                                       (0x00000100&((data)<<8))
#define  SB2_DBG_ADDR1_vcpu_dbg_write(data)                                      (0x00000080&((data)<<7))
#define  SB2_DBG_ADDR1_vcpu_dbg_dacc(data)                                       (0x00000040&((data)<<6))
#define  SB2_DBG_ADDR1_acpu_dbg_write(data)                                      (0x00000020&((data)<<5))
#define  SB2_DBG_ADDR1_acpu_dbg_dacc(data)                                       (0x00000010&((data)<<4))
#define  SB2_DBG_ADDR1_scpu_dbg_write(data)                                      (0x00000008&((data)<<3))
#define  SB2_DBG_ADDR1_scpu_dbg_dacc(data)                                       (0x00000004&((data)<<2))
#define  SB2_DBG_ADDR1_vcpu2_dbg_write(data)                                     (0x00000002&((data)<<1))
#define  SB2_DBG_ADDR1_vcpu2_dbg_dacc(data)                                      (0x00000001&(data))
#define  SB2_DBG_ADDR1_get_acpu2_dbg_write(data)                                 ((0x00000800&(data))>>11)
#define  SB2_DBG_ADDR1_get_acpu2_dbg_dacc(data)                                  ((0x00000400&(data))>>10)
#define  SB2_DBG_ADDR1_get_kcpu_dbg_write(data)                                  ((0x00000200&(data))>>9)
#define  SB2_DBG_ADDR1_get_kcpu_dbg_dacc(data)                                   ((0x00000100&(data))>>8)
#define  SB2_DBG_ADDR1_get_vcpu_dbg_write(data)                                  ((0x00000080&(data))>>7)
#define  SB2_DBG_ADDR1_get_vcpu_dbg_dacc(data)                                   ((0x00000040&(data))>>6)
#define  SB2_DBG_ADDR1_get_acpu_dbg_write(data)                                  ((0x00000020&(data))>>5)
#define  SB2_DBG_ADDR1_get_acpu_dbg_dacc(data)                                   ((0x00000010&(data))>>4)
#define  SB2_DBG_ADDR1_get_scpu_dbg_write(data)                                  ((0x00000008&(data))>>3)
#define  SB2_DBG_ADDR1_get_scpu_dbg_dacc(data)                                   ((0x00000004&(data))>>2)
#define  SB2_DBG_ADDR1_get_vcpu2_dbg_write(data)                                 ((0x00000002&(data))>>1)
#define  SB2_DBG_ADDR1_get_vcpu2_dbg_dacc(data)                                  (0x00000001&(data))

#define  SB2_DBG_CTRL2                                                          0x1801A4D0
#define  SB2_DBG_CTRL2_reg_addr                                                  "0xB801A4D0"
#define  SB2_DBG_CTRL2_reg                                                       0xB801A4D0
#define  SB2_DBG_CTRL2_inst_addr                                                 "0x0054"
#define  set_SB2_DBG_CTRL2_reg(data)                                             (*((volatile unsigned int*)SB2_DBG_CTRL2_reg)=data)
#define  get_SB2_DBG_CTRL2_reg                                                   (*((volatile unsigned int*)SB2_DBG_CTRL2_reg))
#define  SB2_DBG_CTRL2_ac2_first_addr_en_shift                                   (5)
#define  SB2_DBG_CTRL2_vc2_first_addr_en_shift                                   (4)
#define  SB2_DBG_CTRL2_kc_first_addr_en_shift                                    (3)
#define  SB2_DBG_CTRL2_sc_first_addr_en_shift                                    (2)
#define  SB2_DBG_CTRL2_vc_first_addr_en_shift                                    (1)
#define  SB2_DBG_CTRL2_ac_first_addr_en_shift                                    (0)
#define  SB2_DBG_CTRL2_ac2_first_addr_en_mask                                    (0x00000020)
#define  SB2_DBG_CTRL2_vc2_first_addr_en_mask                                    (0x00000010)
#define  SB2_DBG_CTRL2_kc_first_addr_en_mask                                     (0x00000008)
#define  SB2_DBG_CTRL2_sc_first_addr_en_mask                                     (0x00000004)
#define  SB2_DBG_CTRL2_vc_first_addr_en_mask                                     (0x00000002)
#define  SB2_DBG_CTRL2_ac_first_addr_en_mask                                     (0x00000001)
#define  SB2_DBG_CTRL2_ac2_first_addr_en(data)                                   (0x00000020&((data)<<5))
#define  SB2_DBG_CTRL2_vc2_first_addr_en(data)                                   (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL2_kc_first_addr_en(data)                                    (0x00000008&((data)<<3))
#define  SB2_DBG_CTRL2_sc_first_addr_en(data)                                    (0x00000004&((data)<<2))
#define  SB2_DBG_CTRL2_vc_first_addr_en(data)                                    (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL2_ac_first_addr_en(data)                                    (0x00000001&(data))
#define  SB2_DBG_CTRL2_get_ac2_first_addr_en(data)                               ((0x00000020&(data))>>5)
#define  SB2_DBG_CTRL2_get_vc2_first_addr_en(data)                               ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL2_get_kc_first_addr_en(data)                                ((0x00000008&(data))>>3)
#define  SB2_DBG_CTRL2_get_sc_first_addr_en(data)                                ((0x00000004&(data))>>2)
#define  SB2_DBG_CTRL2_get_vc_first_addr_en(data)                                ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL2_get_ac_first_addr_en(data)                                (0x00000001&(data))

#define  SB2_DBG_INT                                                            0x1801A4E0
#define  SB2_DBG_INT_reg_addr                                                    "0xB801A4E0"
#define  SB2_DBG_INT_reg                                                         0xB801A4E0
#define  SB2_DBG_INT_inst_addr                                                   "0x0055"
#define  set_SB2_DBG_INT_reg(data)                                               (*((volatile unsigned int*)SB2_DBG_INT_reg)=data)
#define  get_SB2_DBG_INT_reg                                                     (*((volatile unsigned int*)SB2_DBG_INT_reg))
#define  SB2_DBG_INT_scpu_err_en_shift                                           (25)
#define  SB2_DBG_INT_acpu2_int_shift                                             (24)
#define  SB2_DBG_INT_acpu2_int_en_shift                                          (23)
#define  SB2_DBG_INT_acpu2_neg_int_shift                                         (22)
#define  SB2_DBG_INT_acpu2_neg_int_en_shift                                      (21)
#define  SB2_DBG_INT_kcpu_int_shift                                              (20)
#define  SB2_DBG_INT_kcpu_int_en_shift                                           (19)
#define  SB2_DBG_INT_kcpu_neg_int_shift                                          (18)
#define  SB2_DBG_INT_kcpu_neg_int_en_shift                                       (17)
#define  SB2_DBG_INT_vcpu2_int_shift                                             (16)
#define  SB2_DBG_INT_vcpu2_int_en_shift                                          (15)
#define  SB2_DBG_INT_vcpu2_neg_int_shift                                         (14)
#define  SB2_DBG_INT_vcpu2_neg_int_en_shift                                      (13)
#define  SB2_DBG_INT_acpu_int_shift                                              (12)
#define  SB2_DBG_INT_vcpu_int_shift                                              (11)
#define  SB2_DBG_INT_scpu_exception_shift                                        (10)
#define  SB2_DBG_INT_acpu_int_en_shift                                           (9)
#define  SB2_DBG_INT_vcpu_int_en_shift                                           (8)
#define  SB2_DBG_INT_scpu_int_en_shift                                           (7)
#define  SB2_DBG_INT_acpu_neg_int_shift                                          (6)
#define  SB2_DBG_INT_vcpu_neg_int_shift                                          (5)
#define  SB2_DBG_INT_scpu_neg_exception_shift                                    (4)
#define  SB2_DBG_INT_acpu_neg_int_en_shift                                       (3)
#define  SB2_DBG_INT_vcpu_neg_int_en_shift                                       (2)
#define  SB2_DBG_INT_scpu_neg_int_en_shift                                       (1)
#define  SB2_DBG_INT_write_data_shift                                            (0)
#define  SB2_DBG_INT_scpu_err_en_mask                                            (0x02000000)
#define  SB2_DBG_INT_acpu2_int_mask                                              (0x01000000)
#define  SB2_DBG_INT_acpu2_int_en_mask                                           (0x00800000)
#define  SB2_DBG_INT_acpu2_neg_int_mask                                          (0x00400000)
#define  SB2_DBG_INT_acpu2_neg_int_en_mask                                       (0x00200000)
#define  SB2_DBG_INT_kcpu_int_mask                                               (0x00100000)
#define  SB2_DBG_INT_kcpu_int_en_mask                                            (0x00080000)
#define  SB2_DBG_INT_kcpu_neg_int_mask                                           (0x00040000)
#define  SB2_DBG_INT_kcpu_neg_int_en_mask                                        (0x00020000)
#define  SB2_DBG_INT_vcpu2_int_mask                                              (0x00010000)
#define  SB2_DBG_INT_vcpu2_int_en_mask                                           (0x00008000)
#define  SB2_DBG_INT_vcpu2_neg_int_mask                                          (0x00004000)
#define  SB2_DBG_INT_vcpu2_neg_int_en_mask                                       (0x00002000)
#define  SB2_DBG_INT_acpu_int_mask                                               (0x00001000)
#define  SB2_DBG_INT_vcpu_int_mask                                               (0x00000800)
#define  SB2_DBG_INT_scpu_exception_mask                                         (0x00000400)
#define  SB2_DBG_INT_acpu_int_en_mask                                            (0x00000200)
#define  SB2_DBG_INT_vcpu_int_en_mask                                            (0x00000100)
#define  SB2_DBG_INT_scpu_int_en_mask                                            (0x00000080)
#define  SB2_DBG_INT_acpu_neg_int_mask                                           (0x00000040)
#define  SB2_DBG_INT_vcpu_neg_int_mask                                           (0x00000020)
#define  SB2_DBG_INT_scpu_neg_exception_mask                                     (0x00000010)
#define  SB2_DBG_INT_acpu_neg_int_en_mask                                        (0x00000008)
#define  SB2_DBG_INT_vcpu_neg_int_en_mask                                        (0x00000004)
#define  SB2_DBG_INT_scpu_neg_int_en_mask                                        (0x00000002)
#define  SB2_DBG_INT_write_data_mask                                             (0x00000001)
#define  SB2_DBG_INT_scpu_err_en(data)                                           (0x02000000&((data)<<25))
#define  SB2_DBG_INT_acpu2_int(data)                                             (0x01000000&((data)<<24))
#define  SB2_DBG_INT_acpu2_int_en(data)                                          (0x00800000&((data)<<23))
#define  SB2_DBG_INT_acpu2_neg_int(data)                                         (0x00400000&((data)<<22))
#define  SB2_DBG_INT_acpu2_neg_int_en(data)                                      (0x00200000&((data)<<21))
#define  SB2_DBG_INT_kcpu_int(data)                                              (0x00100000&((data)<<20))
#define  SB2_DBG_INT_kcpu_int_en(data)                                           (0x00080000&((data)<<19))
#define  SB2_DBG_INT_kcpu_neg_int(data)                                          (0x00040000&((data)<<18))
#define  SB2_DBG_INT_kcpu_neg_int_en(data)                                       (0x00020000&((data)<<17))
#define  SB2_DBG_INT_vcpu2_int(data)                                             (0x00010000&((data)<<16))
#define  SB2_DBG_INT_vcpu2_int_en(data)                                          (0x00008000&((data)<<15))
#define  SB2_DBG_INT_vcpu2_neg_int(data)                                         (0x00004000&((data)<<14))
#define  SB2_DBG_INT_vcpu2_neg_int_en(data)                                      (0x00002000&((data)<<13))
#define  SB2_DBG_INT_acpu_int(data)                                              (0x00001000&((data)<<12))
#define  SB2_DBG_INT_vcpu_int(data)                                              (0x00000800&((data)<<11))
#define  SB2_DBG_INT_scpu_exception(data)                                        (0x00000400&((data)<<10))
#define  SB2_DBG_INT_acpu_int_en(data)                                           (0x00000200&((data)<<9))
#define  SB2_DBG_INT_vcpu_int_en(data)                                           (0x00000100&((data)<<8))
#define  SB2_DBG_INT_scpu_int_en(data)                                           (0x00000080&((data)<<7))
#define  SB2_DBG_INT_acpu_neg_int(data)                                          (0x00000040&((data)<<6))
#define  SB2_DBG_INT_vcpu_neg_int(data)                                          (0x00000020&((data)<<5))
#define  SB2_DBG_INT_scpu_neg_exception(data)                                    (0x00000010&((data)<<4))
#define  SB2_DBG_INT_acpu_neg_int_en(data)                                       (0x00000008&((data)<<3))
#define  SB2_DBG_INT_vcpu_neg_int_en(data)                                       (0x00000004&((data)<<2))
#define  SB2_DBG_INT_scpu_neg_int_en(data)                                       (0x00000002&((data)<<1))
#define  SB2_DBG_INT_write_data(data)                                            (0x00000001&(data))
#define  SB2_DBG_INT_get_scpu_err_en(data)                                       ((0x02000000&(data))>>25)
#define  SB2_DBG_INT_get_acpu2_int(data)                                         ((0x01000000&(data))>>24)
#define  SB2_DBG_INT_get_acpu2_int_en(data)                                      ((0x00800000&(data))>>23)
#define  SB2_DBG_INT_get_acpu2_neg_int(data)                                     ((0x00400000&(data))>>22)
#define  SB2_DBG_INT_get_acpu2_neg_int_en(data)                                  ((0x00200000&(data))>>21)
#define  SB2_DBG_INT_get_kcpu_int(data)                                          ((0x00100000&(data))>>20)
#define  SB2_DBG_INT_get_kcpu_int_en(data)                                       ((0x00080000&(data))>>19)
#define  SB2_DBG_INT_get_kcpu_neg_int(data)                                      ((0x00040000&(data))>>18)
#define  SB2_DBG_INT_get_kcpu_neg_int_en(data)                                   ((0x00020000&(data))>>17)
#define  SB2_DBG_INT_get_vcpu2_int(data)                                         ((0x00010000&(data))>>16)
#define  SB2_DBG_INT_get_vcpu2_int_en(data)                                      ((0x00008000&(data))>>15)
#define  SB2_DBG_INT_get_vcpu2_neg_int(data)                                     ((0x00004000&(data))>>14)
#define  SB2_DBG_INT_get_vcpu2_neg_int_en(data)                                  ((0x00002000&(data))>>13)
#define  SB2_DBG_INT_get_acpu_int(data)                                          ((0x00001000&(data))>>12)
#define  SB2_DBG_INT_get_vcpu_int(data)                                          ((0x00000800&(data))>>11)
#define  SB2_DBG_INT_get_scpu_exception(data)                                    ((0x00000400&(data))>>10)
#define  SB2_DBG_INT_get_acpu_int_en(data)                                       ((0x00000200&(data))>>9)
#define  SB2_DBG_INT_get_vcpu_int_en(data)                                       ((0x00000100&(data))>>8)
#define  SB2_DBG_INT_get_scpu_int_en(data)                                       ((0x00000080&(data))>>7)
#define  SB2_DBG_INT_get_acpu_neg_int(data)                                      ((0x00000040&(data))>>6)
#define  SB2_DBG_INT_get_vcpu_neg_int(data)                                      ((0x00000020&(data))>>5)
#define  SB2_DBG_INT_get_scpu_neg_exception(data)                                ((0x00000010&(data))>>4)
#define  SB2_DBG_INT_get_acpu_neg_int_en(data)                                   ((0x00000008&(data))>>3)
#define  SB2_DBG_INT_get_vcpu_neg_int_en(data)                                   ((0x00000004&(data))>>2)
#define  SB2_DBG_INT_get_scpu_neg_int_en(data)                                   ((0x00000002&(data))>>1)
#define  SB2_DBG_INT_get_write_data(data)                                        (0x00000001&(data))

#define  SB2_DUMMY_0                                                            0x1801A600
#define  SB2_DUMMY_0_reg_addr                                                    "0xB801A600"
#define  SB2_DUMMY_0_reg                                                         0xB801A600
#define  SB2_DUMMY_0_inst_addr                                                   "0x0056"
#define  set_SB2_DUMMY_0_reg(data)                                               (*((volatile unsigned int*)SB2_DUMMY_0_reg)=data)
#define  get_SB2_DUMMY_0_reg                                                     (*((volatile unsigned int*)SB2_DUMMY_0_reg))
#define  SB2_DUMMY_0_data_shift                                                  (0)
#define  SB2_DUMMY_0_data_mask                                                   (0xFFFFFFFF)
#define  SB2_DUMMY_0_data(data)                                                  (0xFFFFFFFF&(data))
#define  SB2_DUMMY_0_get_data(data)                                              (0xFFFFFFFF&(data))

#define  SB2_DUMMY_1                                                            0x1801A604
#define  SB2_DUMMY_1_reg_addr                                                    "0xB801A604"
#define  SB2_DUMMY_1_reg                                                         0xB801A604
#define  SB2_DUMMY_1_inst_addr                                                   "0x0057"
#define  set_SB2_DUMMY_1_reg(data)                                               (*((volatile unsigned int*)SB2_DUMMY_1_reg)=data)
#define  get_SB2_DUMMY_1_reg                                                     (*((volatile unsigned int*)SB2_DUMMY_1_reg))
#define  SB2_DUMMY_1_data_shift                                                  (0)
#define  SB2_DUMMY_1_data_mask                                                   (0xFFFFFFFF)
#define  SB2_DUMMY_1_data(data)                                                  (0xFFFFFFFF&(data))
#define  SB2_DUMMY_1_get_data(data)                                              (0xFFFFFFFF&(data))

#define  SB2_DUMMY_2                                                            0x1801A608
#define  SB2_DUMMY_2_reg_addr                                                    "0xB801A608"
#define  SB2_DUMMY_2_reg                                                         0xB801A608
#define  SB2_DUMMY_2_inst_addr                                                   "0x0058"
#define  set_SB2_DUMMY_2_reg(data)                                               (*((volatile unsigned int*)SB2_DUMMY_2_reg)=data)
#define  get_SB2_DUMMY_2_reg                                                     (*((volatile unsigned int*)SB2_DUMMY_2_reg))
#define  SB2_DUMMY_2_data_shift                                                  (0)
#define  SB2_DUMMY_2_data_mask                                                   (0xFFFFFFFF)
#define  SB2_DUMMY_2_data(data)                                                  (0xFFFFFFFF&(data))
#define  SB2_DUMMY_2_get_data(data)                                              (0xFFFFFFFF&(data))

#define  SB2_DUMMY_3                                                            0x1801A60C
#define  SB2_DUMMY_3_reg_addr                                                    "0xB801A60C"
#define  SB2_DUMMY_3_reg                                                         0xB801A60C
#define  SB2_DUMMY_3_inst_addr                                                   "0x0059"
#define  set_SB2_DUMMY_3_reg(data)                                               (*((volatile unsigned int*)SB2_DUMMY_3_reg)=data)
#define  get_SB2_DUMMY_3_reg                                                     (*((volatile unsigned int*)SB2_DUMMY_3_reg))
#define  SB2_DUMMY_3_data_shift                                                  (0)
#define  SB2_DUMMY_3_data_mask                                                   (0xFFFFFFFF)
#define  SB2_DUMMY_3_data(data)                                                  (0xFFFFFFFF&(data))
#define  SB2_DUMMY_3_get_data(data)                                              (0xFFFFFFFF&(data))

#define  SB2_SHADOW_0                                                           0x1801A610
#define  SB2_SHADOW_0_reg_addr                                                   "0xB801A610"
#define  SB2_SHADOW_0_reg                                                        0xB801A610
#define  SB2_SHADOW_0_inst_addr                                                  "0x005A"
#define  set_SB2_SHADOW_0_reg(data)                                              (*((volatile unsigned int*)SB2_SHADOW_0_reg)=data)
#define  get_SB2_SHADOW_0_reg                                                    (*((volatile unsigned int*)SB2_SHADOW_0_reg))
#define  SB2_SHADOW_0_data_shift                                                 (0)
#define  SB2_SHADOW_0_data_mask                                                  (0xFFFFFFFF)
#define  SB2_SHADOW_0_data(data)                                                 (0xFFFFFFFF&(data))
#define  SB2_SHADOW_0_get_data(data)                                             (0xFFFFFFFF&(data))

#define  SB2_SHADOW_1                                                           0x1801A614
#define  SB2_SHADOW_1_reg_addr                                                   "0xB801A614"
#define  SB2_SHADOW_1_reg                                                        0xB801A614
#define  SB2_SHADOW_1_inst_addr                                                  "0x005B"
#define  set_SB2_SHADOW_1_reg(data)                                              (*((volatile unsigned int*)SB2_SHADOW_1_reg)=data)
#define  get_SB2_SHADOW_1_reg                                                    (*((volatile unsigned int*)SB2_SHADOW_1_reg))
#define  SB2_SHADOW_1_data_shift                                                 (0)
#define  SB2_SHADOW_1_data_mask                                                  (0xFFFFFFFF)
#define  SB2_SHADOW_1_data(data)                                                 (0xFFFFFFFF&(data))
#define  SB2_SHADOW_1_get_data(data)                                             (0xFFFFFFFF&(data))

#define  SB2_SHADOW_2                                                           0x1801A618
#define  SB2_SHADOW_2_reg_addr                                                   "0xB801A618"
#define  SB2_SHADOW_2_reg                                                        0xB801A618
#define  SB2_SHADOW_2_inst_addr                                                  "0x005C"
#define  set_SB2_SHADOW_2_reg(data)                                              (*((volatile unsigned int*)SB2_SHADOW_2_reg)=data)
#define  get_SB2_SHADOW_2_reg                                                    (*((volatile unsigned int*)SB2_SHADOW_2_reg))
#define  SB2_SHADOW_2_data_shift                                                 (0)
#define  SB2_SHADOW_2_data_mask                                                  (0xFFFFFFFF)
#define  SB2_SHADOW_2_data(data)                                                 (0xFFFFFFFF&(data))
#define  SB2_SHADOW_2_get_data(data)                                             (0xFFFFFFFF&(data))

#define  SB2_SHADOW_3                                                           0x1801A61C
#define  SB2_SHADOW_3_reg_addr                                                   "0xB801A61C"
#define  SB2_SHADOW_3_reg                                                        0xB801A61C
#define  SB2_SHADOW_3_inst_addr                                                  "0x005D"
#define  set_SB2_SHADOW_3_reg(data)                                              (*((volatile unsigned int*)SB2_SHADOW_3_reg)=data)
#define  get_SB2_SHADOW_3_reg                                                    (*((volatile unsigned int*)SB2_SHADOW_3_reg))
#define  SB2_SHADOW_3_data_shift                                                 (0)
#define  SB2_SHADOW_3_data_mask                                                  (0xFFFFFFFF)
#define  SB2_SHADOW_3_data(data)                                                 (0xFFFFFFFF&(data))
#define  SB2_SHADOW_3_get_data(data)                                             (0xFFFFFFFF&(data))

#define  SB2_HD_SEM_NEW_0                                                       0x1801A620
#define  SB2_HD_SEM_NEW_0_reg_addr                                               "0xB801A620"
#define  SB2_HD_SEM_NEW_0_reg                                                    0xB801A620
#define  SB2_HD_SEM_NEW_0_inst_addr                                              "0x005E"
#define  set_SB2_HD_SEM_NEW_0_reg(data)                                          (*((volatile unsigned int*)SB2_HD_SEM_NEW_0_reg)=data)
#define  get_SB2_HD_SEM_NEW_0_reg                                                (*((volatile unsigned int*)SB2_HD_SEM_NEW_0_reg))
#define  SB2_HD_SEM_NEW_0_semaphore_data_shift                                   (1)
#define  SB2_HD_SEM_NEW_0_semaphore_shift                                        (0)
#define  SB2_HD_SEM_NEW_0_semaphore_data_mask                                    (0xFFFFFFFE)
#define  SB2_HD_SEM_NEW_0_semaphore_mask                                         (0x00000001)
#define  SB2_HD_SEM_NEW_0_semaphore_data(data)                                   (0xFFFFFFFE&((data)<<1))
#define  SB2_HD_SEM_NEW_0_semaphore(data)                                        (0x00000001&(data))
#define  SB2_HD_SEM_NEW_0_get_semaphore_data(data)                               ((0xFFFFFFFE&(data))>>1)
#define  SB2_HD_SEM_NEW_0_get_semaphore(data)                                    (0x00000001&(data))

#define  SB2_HD_SEM_NEW_1                                                       0x1801A624
#define  SB2_HD_SEM_NEW_1_reg_addr                                               "0xB801A624"
#define  SB2_HD_SEM_NEW_1_reg                                                    0xB801A624
#define  SB2_HD_SEM_NEW_1_inst_addr                                              "0x005F"
#define  set_SB2_HD_SEM_NEW_1_reg(data)                                          (*((volatile unsigned int*)SB2_HD_SEM_NEW_1_reg)=data)
#define  get_SB2_HD_SEM_NEW_1_reg                                                (*((volatile unsigned int*)SB2_HD_SEM_NEW_1_reg))
#define  SB2_HD_SEM_NEW_1_semaphore_data_shift                                   (1)
#define  SB2_HD_SEM_NEW_1_semaphore_shift                                        (0)
#define  SB2_HD_SEM_NEW_1_semaphore_data_mask                                    (0xFFFFFFFE)
#define  SB2_HD_SEM_NEW_1_semaphore_mask                                         (0x00000001)
#define  SB2_HD_SEM_NEW_1_semaphore_data(data)                                   (0xFFFFFFFE&((data)<<1))
#define  SB2_HD_SEM_NEW_1_semaphore(data)                                        (0x00000001&(data))
#define  SB2_HD_SEM_NEW_1_get_semaphore_data(data)                               ((0xFFFFFFFE&(data))>>1)
#define  SB2_HD_SEM_NEW_1_get_semaphore(data)                                    (0x00000001&(data))

#define  SB2_HD_SEM_NEW_2                                                       0x1801A628
#define  SB2_HD_SEM_NEW_2_reg_addr                                               "0xB801A628"
#define  SB2_HD_SEM_NEW_2_reg                                                    0xB801A628
#define  SB2_HD_SEM_NEW_2_inst_addr                                              "0x0060"
#define  set_SB2_HD_SEM_NEW_2_reg(data)                                          (*((volatile unsigned int*)SB2_HD_SEM_NEW_2_reg)=data)
#define  get_SB2_HD_SEM_NEW_2_reg                                                (*((volatile unsigned int*)SB2_HD_SEM_NEW_2_reg))
#define  SB2_HD_SEM_NEW_2_semaphore_data_shift                                   (1)
#define  SB2_HD_SEM_NEW_2_semaphore_shift                                        (0)
#define  SB2_HD_SEM_NEW_2_semaphore_data_mask                                    (0xFFFFFFFE)
#define  SB2_HD_SEM_NEW_2_semaphore_mask                                         (0x00000001)
#define  SB2_HD_SEM_NEW_2_semaphore_data(data)                                   (0xFFFFFFFE&((data)<<1))
#define  SB2_HD_SEM_NEW_2_semaphore(data)                                        (0x00000001&(data))
#define  SB2_HD_SEM_NEW_2_get_semaphore_data(data)                               ((0xFFFFFFFE&(data))>>1)
#define  SB2_HD_SEM_NEW_2_get_semaphore(data)                                    (0x00000001&(data))

#define  SB2_HD_SEM_NEW_3                                                       0x1801A62C
#define  SB2_HD_SEM_NEW_3_reg_addr                                               "0xB801A62C"
#define  SB2_HD_SEM_NEW_3_reg                                                    0xB801A62C
#define  SB2_HD_SEM_NEW_3_inst_addr                                              "0x0061"
#define  set_SB2_HD_SEM_NEW_3_reg(data)                                          (*((volatile unsigned int*)SB2_HD_SEM_NEW_3_reg)=data)
#define  get_SB2_HD_SEM_NEW_3_reg                                                (*((volatile unsigned int*)SB2_HD_SEM_NEW_3_reg))
#define  SB2_HD_SEM_NEW_3_semaphore_data_shift                                   (1)
#define  SB2_HD_SEM_NEW_3_semaphore_shift                                        (0)
#define  SB2_HD_SEM_NEW_3_semaphore_data_mask                                    (0xFFFFFFFE)
#define  SB2_HD_SEM_NEW_3_semaphore_mask                                         (0x00000001)
#define  SB2_HD_SEM_NEW_3_semaphore_data(data)                                   (0xFFFFFFFE&((data)<<1))
#define  SB2_HD_SEM_NEW_3_semaphore(data)                                        (0x00000001&(data))
#define  SB2_HD_SEM_NEW_3_get_semaphore_data(data)                               ((0xFFFFFFFE&(data))>>1)
#define  SB2_HD_SEM_NEW_3_get_semaphore(data)                                    (0x00000001&(data))

#define  SB2_HD_SEM_NEW_4                                                       0x1801A630
#define  SB2_HD_SEM_NEW_4_reg_addr                                               "0xB801A630"
#define  SB2_HD_SEM_NEW_4_reg                                                    0xB801A630
#define  SB2_HD_SEM_NEW_4_inst_addr                                              "0x0062"
#define  set_SB2_HD_SEM_NEW_4_reg(data)                                          (*((volatile unsigned int*)SB2_HD_SEM_NEW_4_reg)=data)
#define  get_SB2_HD_SEM_NEW_4_reg                                                (*((volatile unsigned int*)SB2_HD_SEM_NEW_4_reg))
#define  SB2_HD_SEM_NEW_4_semaphore_data_shift                                   (1)
#define  SB2_HD_SEM_NEW_4_semaphore_shift                                        (0)
#define  SB2_HD_SEM_NEW_4_semaphore_data_mask                                    (0xFFFFFFFE)
#define  SB2_HD_SEM_NEW_4_semaphore_mask                                         (0x00000001)
#define  SB2_HD_SEM_NEW_4_semaphore_data(data)                                   (0xFFFFFFFE&((data)<<1))
#define  SB2_HD_SEM_NEW_4_semaphore(data)                                        (0x00000001&(data))
#define  SB2_HD_SEM_NEW_4_get_semaphore_data(data)                               ((0xFFFFFFFE&(data))>>1)
#define  SB2_HD_SEM_NEW_4_get_semaphore(data)                                    (0x00000001&(data))

#define  SB2_HD_SEM_NEW_5                                                       0x1801A634
#define  SB2_HD_SEM_NEW_5_reg_addr                                               "0xB801A634"
#define  SB2_HD_SEM_NEW_5_reg                                                    0xB801A634
#define  SB2_HD_SEM_NEW_5_inst_addr                                              "0x0063"
#define  set_SB2_HD_SEM_NEW_5_reg(data)                                          (*((volatile unsigned int*)SB2_HD_SEM_NEW_5_reg)=data)
#define  get_SB2_HD_SEM_NEW_5_reg                                                (*((volatile unsigned int*)SB2_HD_SEM_NEW_5_reg))
#define  SB2_HD_SEM_NEW_5_semaphore_data_shift                                   (1)
#define  SB2_HD_SEM_NEW_5_semaphore_shift                                        (0)
#define  SB2_HD_SEM_NEW_5_semaphore_data_mask                                    (0xFFFFFFFE)
#define  SB2_HD_SEM_NEW_5_semaphore_mask                                         (0x00000001)
#define  SB2_HD_SEM_NEW_5_semaphore_data(data)                                   (0xFFFFFFFE&((data)<<1))
#define  SB2_HD_SEM_NEW_5_semaphore(data)                                        (0x00000001&(data))
#define  SB2_HD_SEM_NEW_5_get_semaphore_data(data)                               ((0xFFFFFFFE&(data))>>1)
#define  SB2_HD_SEM_NEW_5_get_semaphore(data)                                    (0x00000001&(data))

#define  SB2_HD_SEM_NEW_6                                                       0x1801A638
#define  SB2_HD_SEM_NEW_6_reg_addr                                               "0xB801A638"
#define  SB2_HD_SEM_NEW_6_reg                                                    0xB801A638
#define  SB2_HD_SEM_NEW_6_inst_addr                                              "0x0064"
#define  set_SB2_HD_SEM_NEW_6_reg(data)                                          (*((volatile unsigned int*)SB2_HD_SEM_NEW_6_reg)=data)
#define  get_SB2_HD_SEM_NEW_6_reg                                                (*((volatile unsigned int*)SB2_HD_SEM_NEW_6_reg))
#define  SB2_HD_SEM_NEW_6_semaphore_data_shift                                   (1)
#define  SB2_HD_SEM_NEW_6_semaphore_shift                                        (0)
#define  SB2_HD_SEM_NEW_6_semaphore_data_mask                                    (0xFFFFFFFE)
#define  SB2_HD_SEM_NEW_6_semaphore_mask                                         (0x00000001)
#define  SB2_HD_SEM_NEW_6_semaphore_data(data)                                   (0xFFFFFFFE&((data)<<1))
#define  SB2_HD_SEM_NEW_6_semaphore(data)                                        (0x00000001&(data))
#define  SB2_HD_SEM_NEW_6_get_semaphore_data(data)                               ((0xFFFFFFFE&(data))>>1)
#define  SB2_HD_SEM_NEW_6_get_semaphore(data)                                    (0x00000001&(data))

#define  SB2_HD_SEM_NEW_7                                                       0x1801A63C
#define  SB2_HD_SEM_NEW_7_reg_addr                                               "0xB801A63C"
#define  SB2_HD_SEM_NEW_7_reg                                                    0xB801A63C
#define  SB2_HD_SEM_NEW_7_inst_addr                                              "0x0065"
#define  set_SB2_HD_SEM_NEW_7_reg(data)                                          (*((volatile unsigned int*)SB2_HD_SEM_NEW_7_reg)=data)
#define  get_SB2_HD_SEM_NEW_7_reg                                                (*((volatile unsigned int*)SB2_HD_SEM_NEW_7_reg))
#define  SB2_HD_SEM_NEW_7_semaphore_data_shift                                   (1)
#define  SB2_HD_SEM_NEW_7_semaphore_shift                                        (0)
#define  SB2_HD_SEM_NEW_7_semaphore_data_mask                                    (0xFFFFFFFE)
#define  SB2_HD_SEM_NEW_7_semaphore_mask                                         (0x00000001)
#define  SB2_HD_SEM_NEW_7_semaphore_data(data)                                   (0xFFFFFFFE&((data)<<1))
#define  SB2_HD_SEM_NEW_7_semaphore(data)                                        (0x00000001&(data))
#define  SB2_HD_SEM_NEW_7_get_semaphore_data(data)                               ((0xFFFFFFFE&(data))>>1)
#define  SB2_HD_SEM_NEW_7_get_semaphore(data)                                    (0x00000001&(data))

#define  SB2_INC_CTRL                                                           0x1801A640
#define  SB2_INC_CTRL_reg_addr                                                   "0xB801A640"
#define  SB2_INC_CTRL_reg                                                        0xB801A640
#define  SB2_INC_CTRL_inst_addr                                                  "0x0066"
#define  set_SB2_INC_CTRL_reg(data)                                              (*((volatile unsigned int*)SB2_INC_CTRL_reg)=data)
#define  get_SB2_INC_CTRL_reg                                                    (*((volatile unsigned int*)SB2_INC_CTRL_reg))
#define  SB2_INC_CTRL_vc2_line_read_rbus_shift                                   (4)
#define  SB2_INC_CTRL_vc_line_read_rbus_shift                                    (3)
#define  SB2_INC_CTRL_ac2_line_read_rbus_shift                                   (2)
#define  SB2_INC_CTRL_ac_line_read_rbus_shift                                    (1)
#define  SB2_INC_CTRL_kc_line_read_rbus_shift                                    (0)
#define  SB2_INC_CTRL_vc2_line_read_rbus_mask                                    (0x00000010)
#define  SB2_INC_CTRL_vc_line_read_rbus_mask                                     (0x00000008)
#define  SB2_INC_CTRL_ac2_line_read_rbus_mask                                    (0x00000004)
#define  SB2_INC_CTRL_ac_line_read_rbus_mask                                     (0x00000002)
#define  SB2_INC_CTRL_kc_line_read_rbus_mask                                     (0x00000001)
#define  SB2_INC_CTRL_vc2_line_read_rbus(data)                                   (0x00000010&((data)<<4))
#define  SB2_INC_CTRL_vc_line_read_rbus(data)                                    (0x00000008&((data)<<3))
#define  SB2_INC_CTRL_ac2_line_read_rbus(data)                                   (0x00000004&((data)<<2))
#define  SB2_INC_CTRL_ac_line_read_rbus(data)                                    (0x00000002&((data)<<1))
#define  SB2_INC_CTRL_kc_line_read_rbus(data)                                    (0x00000001&(data))
#define  SB2_INC_CTRL_get_vc2_line_read_rbus(data)                               ((0x00000010&(data))>>4)
#define  SB2_INC_CTRL_get_vc_line_read_rbus(data)                                ((0x00000008&(data))>>3)
#define  SB2_INC_CTRL_get_ac2_line_read_rbus(data)                               ((0x00000004&(data))>>2)
#define  SB2_INC_CTRL_get_ac_line_read_rbus(data)                                ((0x00000002&(data))>>1)
#define  SB2_INC_CTRL_get_kc_line_read_rbus(data)                                (0x00000001&(data))

#define  SB2_INC_ADDR_0                                                         0x1801A644
#define  SB2_INC_ADDR_0_reg_addr                                                 "0xB801A644"
#define  SB2_INC_ADDR_0_reg                                                      0xB801A644
#define  SB2_INC_ADDR_0_inst_addr                                                "0x0067"
#define  set_SB2_INC_ADDR_0_reg(data)                                            (*((volatile unsigned int*)SB2_INC_ADDR_0_reg)=data)
#define  get_SB2_INC_ADDR_0_reg                                                  (*((volatile unsigned int*)SB2_INC_ADDR_0_reg))
#define  SB2_INC_ADDR_0_line_read_rbus_addr_shift                                (0)
#define  SB2_INC_ADDR_0_line_read_rbus_addr_mask                                 (0xFFFFFFFF)
#define  SB2_INC_ADDR_0_line_read_rbus_addr(data)                                (0xFFFFFFFF&(data))
#define  SB2_INC_ADDR_0_get_line_read_rbus_addr(data)                            (0xFFFFFFFF&(data))

#define  SB2_INC_ADDR_1                                                         0x1801A648
#define  SB2_INC_ADDR_1_reg_addr                                                 "0xB801A648"
#define  SB2_INC_ADDR_1_reg                                                      0xB801A648
#define  SB2_INC_ADDR_1_inst_addr                                                "0x0068"
#define  set_SB2_INC_ADDR_1_reg(data)                                            (*((volatile unsigned int*)SB2_INC_ADDR_1_reg)=data)
#define  get_SB2_INC_ADDR_1_reg                                                  (*((volatile unsigned int*)SB2_INC_ADDR_1_reg))
#define  SB2_INC_ADDR_1_line_read_rbus_addr_shift                                (0)
#define  SB2_INC_ADDR_1_line_read_rbus_addr_mask                                 (0xFFFFFFFF)
#define  SB2_INC_ADDR_1_line_read_rbus_addr(data)                                (0xFFFFFFFF&(data))
#define  SB2_INC_ADDR_1_get_line_read_rbus_addr(data)                            (0xFFFFFFFF&(data))

#define  SB2_INC_ADDR_2                                                         0x1801A64C
#define  SB2_INC_ADDR_2_reg_addr                                                 "0xB801A64C"
#define  SB2_INC_ADDR_2_reg                                                      0xB801A64C
#define  SB2_INC_ADDR_2_inst_addr                                                "0x0069"
#define  set_SB2_INC_ADDR_2_reg(data)                                            (*((volatile unsigned int*)SB2_INC_ADDR_2_reg)=data)
#define  get_SB2_INC_ADDR_2_reg                                                  (*((volatile unsigned int*)SB2_INC_ADDR_2_reg))
#define  SB2_INC_ADDR_2_line_read_rbus_addr_shift                                (0)
#define  SB2_INC_ADDR_2_line_read_rbus_addr_mask                                 (0xFFFFFFFF)
#define  SB2_INC_ADDR_2_line_read_rbus_addr(data)                                (0xFFFFFFFF&(data))
#define  SB2_INC_ADDR_2_get_line_read_rbus_addr(data)                            (0xFFFFFFFF&(data))

#define  SB2_INC_ADDR_3                                                         0x1801A650
#define  SB2_INC_ADDR_3_reg_addr                                                 "0xB801A650"
#define  SB2_INC_ADDR_3_reg                                                      0xB801A650
#define  SB2_INC_ADDR_3_inst_addr                                                "0x006A"
#define  set_SB2_INC_ADDR_3_reg(data)                                            (*((volatile unsigned int*)SB2_INC_ADDR_3_reg)=data)
#define  get_SB2_INC_ADDR_3_reg                                                  (*((volatile unsigned int*)SB2_INC_ADDR_3_reg))
#define  SB2_INC_ADDR_3_line_read_rbus_addr_shift                                (0)
#define  SB2_INC_ADDR_3_line_read_rbus_addr_mask                                 (0xFFFFFFFF)
#define  SB2_INC_ADDR_3_line_read_rbus_addr(data)                                (0xFFFFFFFF&(data))
#define  SB2_INC_ADDR_3_get_line_read_rbus_addr(data)                            (0xFFFFFFFF&(data))

#define  SB2_INC_ADDR_4                                                         0x1801A654
#define  SB2_INC_ADDR_4_reg_addr                                                 "0xB801A654"
#define  SB2_INC_ADDR_4_reg                                                      0xB801A654
#define  SB2_INC_ADDR_4_inst_addr                                                "0x006B"
#define  set_SB2_INC_ADDR_4_reg(data)                                            (*((volatile unsigned int*)SB2_INC_ADDR_4_reg)=data)
#define  get_SB2_INC_ADDR_4_reg                                                  (*((volatile unsigned int*)SB2_INC_ADDR_4_reg))
#define  SB2_INC_ADDR_4_line_read_rbus_addr_shift                                (0)
#define  SB2_INC_ADDR_4_line_read_rbus_addr_mask                                 (0xFFFFFFFF)
#define  SB2_INC_ADDR_4_line_read_rbus_addr(data)                                (0xFFFFFFFF&(data))
#define  SB2_INC_ADDR_4_get_line_read_rbus_addr(data)                            (0xFFFFFFFF&(data))

#define  SB2_DIC_DUMMY                                                          0x1801A674
#define  SB2_DIC_DUMMY_reg_addr                                                  "0xB801A674"
#define  SB2_DIC_DUMMY_reg                                                       0xB801A674
#define  SB2_DIC_DUMMY_inst_addr                                                 "0x006C"
#define  set_SB2_DIC_DUMMY_reg(data)                                             (*((volatile unsigned int*)SB2_DIC_DUMMY_reg)=data)
#define  get_SB2_DIC_DUMMY_reg                                                   (*((volatile unsigned int*)SB2_DIC_DUMMY_reg))
#define  SB2_DIC_DUMMY_data_shift                                                (0)
#define  SB2_DIC_DUMMY_data_mask                                                 (0xFFFFFFFF)
#define  SB2_DIC_DUMMY_data(data)                                                (0xFFFFFFFF&(data))
#define  SB2_DIC_DUMMY_get_data(data)                                            (0xFFFFFFFF&(data))

#define  SB2_ejtag                                                              0x1801A678
#define  SB2_ejtag_reg_addr                                                      "0xB801A678"
#define  SB2_ejtag_reg                                                           0xB801A678
#define  SB2_ejtag_inst_addr                                                     "0x006D"
#define  set_SB2_ejtag_reg(data)                                                 (*((volatile unsigned int*)SB2_ejtag_reg)=data)
#define  get_SB2_ejtag_reg                                                       (*((volatile unsigned int*)SB2_ejtag_reg))
#define  SB2_ejtag_hif_plugin_detect_wdog_shift                                  (1)
#define  SB2_ejtag_hif_plugin_detect_por_shift                                   (0)
#define  SB2_ejtag_hif_plugin_detect_wdog_mask                                   (0x00000002)
#define  SB2_ejtag_hif_plugin_detect_por_mask                                    (0x00000001)
#define  SB2_ejtag_hif_plugin_detect_wdog(data)                                  (0x00000002&((data)<<1))
#define  SB2_ejtag_hif_plugin_detect_por(data)                                   (0x00000001&(data))
#define  SB2_ejtag_get_hif_plugin_detect_wdog(data)                              ((0x00000002&(data))>>1)
#define  SB2_ejtag_get_hif_plugin_detect_por(data)                               (0x00000001&(data))

#define  SB2_hif_select                                                         0x1801A67C
#define  SB2_hif_select_reg_addr                                                 "0xB801A67C"
#define  SB2_hif_select_reg                                                      0xB801A67C
#define  SB2_hif_select_inst_addr                                                "0x006E"
#define  set_SB2_hif_select_reg(data)                                            (*((volatile unsigned int*)SB2_hif_select_reg)=data)
#define  get_SB2_hif_select_reg                                                  (*((volatile unsigned int*)SB2_hif_select_reg))
#define  SB2_hif_select_reg_phif_enable_shift                                    (0)
#define  SB2_hif_select_reg_phif_enable_mask                                     (0x00000001)
#define  SB2_hif_select_reg_phif_enable(data)                                    (0x00000001&(data))
#define  SB2_hif_select_get_reg_phif_enable(data)                                (0x00000001&(data))

#define  SB2_DBUS_ARB_CR0                                                       0x1801A700
#define  SB2_DBUS_ARB_CR0_reg_addr                                               "0xB801A700"
#define  SB2_DBUS_ARB_CR0_reg                                                    0xB801A700
#define  SB2_DBUS_ARB_CR0_inst_addr                                              "0x006F"
#define  set_SB2_DBUS_ARB_CR0_reg(data)                                          (*((volatile unsigned int*)SB2_DBUS_ARB_CR0_reg)=data)
#define  get_SB2_DBUS_ARB_CR0_reg                                                (*((volatile unsigned int*)SB2_DBUS_ARB_CR0_reg))
#define  SB2_DBUS_ARB_CR0_dummy_31_4_shift                                       (4)
#define  SB2_DBUS_ARB_CR0_time_step_shift                                        (0)
#define  SB2_DBUS_ARB_CR0_dummy_31_4_mask                                        (0xFFFFFFF0)
#define  SB2_DBUS_ARB_CR0_time_step_mask                                         (0x0000000F)
#define  SB2_DBUS_ARB_CR0_dummy_31_4(data)                                       (0xFFFFFFF0&((data)<<4))
#define  SB2_DBUS_ARB_CR0_time_step(data)                                        (0x0000000F&(data))
#define  SB2_DBUS_ARB_CR0_get_dummy_31_4(data)                                   ((0xFFFFFFF0&(data))>>4)
#define  SB2_DBUS_ARB_CR0_get_time_step(data)                                    (0x0000000F&(data))

#define  SB2_DBUS_ARB_CR1                                                       0x1801A704
#define  SB2_DBUS_ARB_CR1_reg_addr                                               "0xB801A704"
#define  SB2_DBUS_ARB_CR1_reg                                                    0xB801A704
#define  SB2_DBUS_ARB_CR1_inst_addr                                              "0x0070"
#define  set_SB2_DBUS_ARB_CR1_reg(data)                                          (*((volatile unsigned int*)SB2_DBUS_ARB_CR1_reg)=data)
#define  get_SB2_DBUS_ARB_CR1_reg                                                (*((volatile unsigned int*)SB2_DBUS_ARB_CR1_reg))
#define  SB2_DBUS_ARB_CR1_arb_en_shift                                           (0)
#define  SB2_DBUS_ARB_CR1_arb_en_mask                                            (0x0000007F)
#define  SB2_DBUS_ARB_CR1_arb_en(data)                                           (0x0000007F&(data))
#define  SB2_DBUS_ARB_CR1_get_arb_en(data)                                       (0x0000007F&(data))

#define  SB2_DBUS_LATCNT_CR1                                                    0x1801A708
#define  SB2_DBUS_LATCNT_CR1_reg_addr                                            "0xB801A708"
#define  SB2_DBUS_LATCNT_CR1_reg                                                 0xB801A708
#define  SB2_DBUS_LATCNT_CR1_inst_addr                                           "0x0071"
#define  set_SB2_DBUS_LATCNT_CR1_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR1_reg)=data)
#define  get_SB2_DBUS_LATCNT_CR1_reg                                             (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR1_reg))
#define  SB2_DBUS_LATCNT_CR1_client0_latcnt_end_shift                            (16)
#define  SB2_DBUS_LATCNT_CR1_client0_latcnt_beg_shift                            (0)
#define  SB2_DBUS_LATCNT_CR1_client0_latcnt_end_mask                             (0x00FF0000)
#define  SB2_DBUS_LATCNT_CR1_client0_latcnt_beg_mask                             (0x000000FF)
#define  SB2_DBUS_LATCNT_CR1_client0_latcnt_end(data)                            (0x00FF0000&((data)<<16))
#define  SB2_DBUS_LATCNT_CR1_client0_latcnt_beg(data)                            (0x000000FF&(data))
#define  SB2_DBUS_LATCNT_CR1_get_client0_latcnt_end(data)                        ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_LATCNT_CR1_get_client0_latcnt_beg(data)                        (0x000000FF&(data))

#define  SB2_DBUS_LATCNT_CR2                                                    0x1801A70C
#define  SB2_DBUS_LATCNT_CR2_reg_addr                                            "0xB801A70C"
#define  SB2_DBUS_LATCNT_CR2_reg                                                 0xB801A70C
#define  SB2_DBUS_LATCNT_CR2_inst_addr                                           "0x0072"
#define  set_SB2_DBUS_LATCNT_CR2_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR2_reg)=data)
#define  get_SB2_DBUS_LATCNT_CR2_reg                                             (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR2_reg))
#define  SB2_DBUS_LATCNT_CR2_client1_latcnt_end_shift                            (16)
#define  SB2_DBUS_LATCNT_CR2_client1_latcnt_beg_shift                            (0)
#define  SB2_DBUS_LATCNT_CR2_client1_latcnt_end_mask                             (0x00FF0000)
#define  SB2_DBUS_LATCNT_CR2_client1_latcnt_beg_mask                             (0x000000FF)
#define  SB2_DBUS_LATCNT_CR2_client1_latcnt_end(data)                            (0x00FF0000&((data)<<16))
#define  SB2_DBUS_LATCNT_CR2_client1_latcnt_beg(data)                            (0x000000FF&(data))
#define  SB2_DBUS_LATCNT_CR2_get_client1_latcnt_end(data)                        ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_LATCNT_CR2_get_client1_latcnt_beg(data)                        (0x000000FF&(data))

#define  SB2_DBUS_LATCNT_CR3                                                    0x1801A710
#define  SB2_DBUS_LATCNT_CR3_reg_addr                                            "0xB801A710"
#define  SB2_DBUS_LATCNT_CR3_reg                                                 0xB801A710
#define  SB2_DBUS_LATCNT_CR3_inst_addr                                           "0x0073"
#define  set_SB2_DBUS_LATCNT_CR3_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR3_reg)=data)
#define  get_SB2_DBUS_LATCNT_CR3_reg                                             (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR3_reg))
#define  SB2_DBUS_LATCNT_CR3_client2_latcnt_end_shift                            (16)
#define  SB2_DBUS_LATCNT_CR3_client2_latcnt_beg_shift                            (0)
#define  SB2_DBUS_LATCNT_CR3_client2_latcnt_end_mask                             (0x00FF0000)
#define  SB2_DBUS_LATCNT_CR3_client2_latcnt_beg_mask                             (0x000000FF)
#define  SB2_DBUS_LATCNT_CR3_client2_latcnt_end(data)                            (0x00FF0000&((data)<<16))
#define  SB2_DBUS_LATCNT_CR3_client2_latcnt_beg(data)                            (0x000000FF&(data))
#define  SB2_DBUS_LATCNT_CR3_get_client2_latcnt_end(data)                        ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_LATCNT_CR3_get_client2_latcnt_beg(data)                        (0x000000FF&(data))

#define  SB2_DBUS_LATCNT_CR4                                                    0x1801A714
#define  SB2_DBUS_LATCNT_CR4_reg_addr                                            "0xB801A714"
#define  SB2_DBUS_LATCNT_CR4_reg                                                 0xB801A714
#define  SB2_DBUS_LATCNT_CR4_inst_addr                                           "0x0074"
#define  set_SB2_DBUS_LATCNT_CR4_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR4_reg)=data)
#define  get_SB2_DBUS_LATCNT_CR4_reg                                             (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR4_reg))
#define  SB2_DBUS_LATCNT_CR4_client3_latcnt_end_shift                            (16)
#define  SB2_DBUS_LATCNT_CR4_client3_latcnt_beg_shift                            (0)
#define  SB2_DBUS_LATCNT_CR4_client3_latcnt_end_mask                             (0x00FF0000)
#define  SB2_DBUS_LATCNT_CR4_client3_latcnt_beg_mask                             (0x000000FF)
#define  SB2_DBUS_LATCNT_CR4_client3_latcnt_end(data)                            (0x00FF0000&((data)<<16))
#define  SB2_DBUS_LATCNT_CR4_client3_latcnt_beg(data)                            (0x000000FF&(data))
#define  SB2_DBUS_LATCNT_CR4_get_client3_latcnt_end(data)                        ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_LATCNT_CR4_get_client3_latcnt_beg(data)                        (0x000000FF&(data))

#define  SB2_DBUS_LATCNT_CR5                                                    0x1801A718
#define  SB2_DBUS_LATCNT_CR5_reg_addr                                            "0xB801A718"
#define  SB2_DBUS_LATCNT_CR5_reg                                                 0xB801A718
#define  SB2_DBUS_LATCNT_CR5_inst_addr                                           "0x0075"
#define  set_SB2_DBUS_LATCNT_CR5_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR5_reg)=data)
#define  get_SB2_DBUS_LATCNT_CR5_reg                                             (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR5_reg))
#define  SB2_DBUS_LATCNT_CR5_client4_latcnt_end_shift                            (16)
#define  SB2_DBUS_LATCNT_CR5_client4_latcnt_beg_shift                            (0)
#define  SB2_DBUS_LATCNT_CR5_client4_latcnt_end_mask                             (0x00FF0000)
#define  SB2_DBUS_LATCNT_CR5_client4_latcnt_beg_mask                             (0x000000FF)
#define  SB2_DBUS_LATCNT_CR5_client4_latcnt_end(data)                            (0x00FF0000&((data)<<16))
#define  SB2_DBUS_LATCNT_CR5_client4_latcnt_beg(data)                            (0x000000FF&(data))
#define  SB2_DBUS_LATCNT_CR5_get_client4_latcnt_end(data)                        ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_LATCNT_CR5_get_client4_latcnt_beg(data)                        (0x000000FF&(data))

#define  SB2_DBUS_LATCNT_CR6                                                    0x1801A71C
#define  SB2_DBUS_LATCNT_CR6_reg_addr                                            "0xB801A71C"
#define  SB2_DBUS_LATCNT_CR6_reg                                                 0xB801A71C
#define  SB2_DBUS_LATCNT_CR6_inst_addr                                           "0x0076"
#define  set_SB2_DBUS_LATCNT_CR6_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR6_reg)=data)
#define  get_SB2_DBUS_LATCNT_CR6_reg                                             (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR6_reg))
#define  SB2_DBUS_LATCNT_CR6_client5_latcnt_end_shift                            (16)
#define  SB2_DBUS_LATCNT_CR6_client5_latcnt_beg_shift                            (0)
#define  SB2_DBUS_LATCNT_CR6_client5_latcnt_end_mask                             (0x00FF0000)
#define  SB2_DBUS_LATCNT_CR6_client5_latcnt_beg_mask                             (0x000000FF)
#define  SB2_DBUS_LATCNT_CR6_client5_latcnt_end(data)                            (0x00FF0000&((data)<<16))
#define  SB2_DBUS_LATCNT_CR6_client5_latcnt_beg(data)                            (0x000000FF&(data))
#define  SB2_DBUS_LATCNT_CR6_get_client5_latcnt_end(data)                        ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_LATCNT_CR6_get_client5_latcnt_beg(data)                        (0x000000FF&(data))

#define  SB2_DBUS_LATCNT_CR7                                                    0x1801A720
#define  SB2_DBUS_LATCNT_CR7_reg_addr                                            "0xB801A720"
#define  SB2_DBUS_LATCNT_CR7_reg                                                 0xB801A720
#define  SB2_DBUS_LATCNT_CR7_inst_addr                                           "0x0077"
#define  set_SB2_DBUS_LATCNT_CR7_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR7_reg)=data)
#define  get_SB2_DBUS_LATCNT_CR7_reg                                             (*((volatile unsigned int*)SB2_DBUS_LATCNT_CR7_reg))
#define  SB2_DBUS_LATCNT_CR7_client6_latcnt_end_shift                            (16)
#define  SB2_DBUS_LATCNT_CR7_client6_latcnt_beg_shift                            (0)
#define  SB2_DBUS_LATCNT_CR7_client6_latcnt_end_mask                             (0x00FF0000)
#define  SB2_DBUS_LATCNT_CR7_client6_latcnt_beg_mask                             (0x000000FF)
#define  SB2_DBUS_LATCNT_CR7_client6_latcnt_end(data)                            (0x00FF0000&((data)<<16))
#define  SB2_DBUS_LATCNT_CR7_client6_latcnt_beg(data)                            (0x000000FF&(data))
#define  SB2_DBUS_LATCNT_CR7_get_client6_latcnt_end(data)                        ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_LATCNT_CR7_get_client6_latcnt_beg(data)                        (0x000000FF&(data))

#define  SB2_DBUS_PC_CTRL                                                       0x1801A750
#define  SB2_DBUS_PC_CTRL_reg_addr                                               "0xB801A750"
#define  SB2_DBUS_PC_CTRL_reg                                                    0xB801A750
#define  SB2_DBUS_PC_CTRL_inst_addr                                              "0x0078"
#define  set_SB2_DBUS_PC_CTRL_reg(data)                                          (*((volatile unsigned int*)SB2_DBUS_PC_CTRL_reg)=data)
#define  get_SB2_DBUS_PC_CTRL_reg                                                (*((volatile unsigned int*)SB2_DBUS_PC_CTRL_reg))
#define  SB2_DBUS_PC_CTRL_pc_rd_only_shift                                       (1)
#define  SB2_DBUS_PC_CTRL_pc_go_shift                                            (0)
#define  SB2_DBUS_PC_CTRL_pc_rd_only_mask                                        (0x00000002)
#define  SB2_DBUS_PC_CTRL_pc_go_mask                                             (0x00000001)
#define  SB2_DBUS_PC_CTRL_pc_rd_only(data)                                       (0x00000002&((data)<<1))
#define  SB2_DBUS_PC_CTRL_pc_go(data)                                            (0x00000001&(data))
#define  SB2_DBUS_PC_CTRL_get_pc_rd_only(data)                                   ((0x00000002&(data))>>1)
#define  SB2_DBUS_PC_CTRL_get_pc_go(data)                                        (0x00000001&(data))

#define  SB2_DBUS_PC_TOTA_MON_NUM                                               0x1801A754
#define  SB2_DBUS_PC_TOTA_MON_NUM_reg_addr                                       "0xB801A754"
#define  SB2_DBUS_PC_TOTA_MON_NUM_reg                                            0xB801A754
#define  SB2_DBUS_PC_TOTA_MON_NUM_inst_addr                                      "0x0079"
#define  set_SB2_DBUS_PC_TOTA_MON_NUM_reg(data)                                  (*((volatile unsigned int*)SB2_DBUS_PC_TOTA_MON_NUM_reg)=data)
#define  get_SB2_DBUS_PC_TOTA_MON_NUM_reg                                        (*((volatile unsigned int*)SB2_DBUS_PC_TOTA_MON_NUM_reg))
#define  SB2_DBUS_PC_TOTA_MON_NUM_pc_tota_mon_num_shift                          (0)
#define  SB2_DBUS_PC_TOTA_MON_NUM_pc_tota_mon_num_mask                           (0xFFFFFFFF)
#define  SB2_DBUS_PC_TOTA_MON_NUM_pc_tota_mon_num(data)                          (0xFFFFFFFF&(data))
#define  SB2_DBUS_PC_TOTA_MON_NUM_get_pc_tota_mon_num(data)                      (0xFFFFFFFF&(data))

#define  SB2_DBUS_PC_TOTA_ACK_NUM                                               0x1801A758
#define  SB2_DBUS_PC_TOTA_ACK_NUM_reg_addr                                       "0xB801A758"
#define  SB2_DBUS_PC_TOTA_ACK_NUM_reg                                            0xB801A758
#define  SB2_DBUS_PC_TOTA_ACK_NUM_inst_addr                                      "0x007A"
#define  set_SB2_DBUS_PC_TOTA_ACK_NUM_reg(data)                                  (*((volatile unsigned int*)SB2_DBUS_PC_TOTA_ACK_NUM_reg)=data)
#define  get_SB2_DBUS_PC_TOTA_ACK_NUM_reg                                        (*((volatile unsigned int*)SB2_DBUS_PC_TOTA_ACK_NUM_reg))
#define  SB2_DBUS_PC_TOTA_ACK_NUM_pc_tota_ack_num_shift                          (0)
#define  SB2_DBUS_PC_TOTA_ACK_NUM_pc_tota_ack_num_mask                           (0xFFFFFFFF)
#define  SB2_DBUS_PC_TOTA_ACK_NUM_pc_tota_ack_num(data)                          (0xFFFFFFFF&(data))
#define  SB2_DBUS_PC_TOTA_ACK_NUM_get_pc_tota_ack_num(data)                      (0xFFFFFFFF&(data))

#define  SB2_DBUS_PC_TOTA_IDL_NUM                                               0x1801A75C
#define  SB2_DBUS_PC_TOTA_IDL_NUM_reg_addr                                       "0xB801A75C"
#define  SB2_DBUS_PC_TOTA_IDL_NUM_reg                                            0xB801A75C
#define  SB2_DBUS_PC_TOTA_IDL_NUM_inst_addr                                      "0x007B"
#define  set_SB2_DBUS_PC_TOTA_IDL_NUM_reg(data)                                  (*((volatile unsigned int*)SB2_DBUS_PC_TOTA_IDL_NUM_reg)=data)
#define  get_SB2_DBUS_PC_TOTA_IDL_NUM_reg                                        (*((volatile unsigned int*)SB2_DBUS_PC_TOTA_IDL_NUM_reg))
#define  SB2_DBUS_PC_TOTA_IDL_NUM_pc_tota_idl_num_shift                          (0)
#define  SB2_DBUS_PC_TOTA_IDL_NUM_pc_tota_idl_num_mask                           (0xFFFFFFFF)
#define  SB2_DBUS_PC_TOTA_IDL_NUM_pc_tota_idl_num(data)                          (0xFFFFFFFF&(data))
#define  SB2_DBUS_PC_TOTA_IDL_NUM_get_pc_tota_idl_num(data)                      (0xFFFFFFFF&(data))

#define  SB2_DBUS_PC_prog_ctrl1                                                 0x1801A760
#define  SB2_DBUS_PC_prog_ctrl1_reg_addr                                         "0xB801A760"
#define  SB2_DBUS_PC_prog_ctrl1_reg                                              0xB801A760
#define  SB2_DBUS_PC_prog_ctrl1_inst_addr                                        "0x007C"
#define  set_SB2_DBUS_PC_prog_ctrl1_reg(data)                                    (*((volatile unsigned int*)SB2_DBUS_PC_prog_ctrl1_reg)=data)
#define  get_SB2_DBUS_PC_prog_ctrl1_reg                                          (*((volatile unsigned int*)SB2_DBUS_PC_prog_ctrl1_reg))
#define  SB2_DBUS_PC_prog_ctrl1_pc_prog2_sel_shift                               (16)
#define  SB2_DBUS_PC_prog_ctrl1_pc_prog1_sel_shift                               (8)
#define  SB2_DBUS_PC_prog_ctrl1_pc_prog0_sel_shift                               (0)
#define  SB2_DBUS_PC_prog_ctrl1_pc_prog2_sel_mask                                (0x000F0000)
#define  SB2_DBUS_PC_prog_ctrl1_pc_prog1_sel_mask                                (0x00000F00)
#define  SB2_DBUS_PC_prog_ctrl1_pc_prog0_sel_mask                                (0x0000000F)
#define  SB2_DBUS_PC_prog_ctrl1_pc_prog2_sel(data)                               (0x000F0000&((data)<<16))
#define  SB2_DBUS_PC_prog_ctrl1_pc_prog1_sel(data)                               (0x00000F00&((data)<<8))
#define  SB2_DBUS_PC_prog_ctrl1_pc_prog0_sel(data)                               (0x0000000F&(data))
#define  SB2_DBUS_PC_prog_ctrl1_get_pc_prog2_sel(data)                           ((0x000F0000&(data))>>16)
#define  SB2_DBUS_PC_prog_ctrl1_get_pc_prog1_sel(data)                           ((0x00000F00&(data))>>8)
#define  SB2_DBUS_PC_prog_ctrl1_get_pc_prog0_sel(data)                           (0x0000000F&(data))

#define  SB2_DBUS_PC_prog_ctrl2                                                 0x1801A764
#define  SB2_DBUS_PC_prog_ctrl2_reg_addr                                         "0xB801A764"
#define  SB2_DBUS_PC_prog_ctrl2_reg                                              0xB801A764
#define  SB2_DBUS_PC_prog_ctrl2_inst_addr                                        "0x007D"
#define  set_SB2_DBUS_PC_prog_ctrl2_reg(data)                                    (*((volatile unsigned int*)SB2_DBUS_PC_prog_ctrl2_reg)=data)
#define  get_SB2_DBUS_PC_prog_ctrl2_reg                                          (*((volatile unsigned int*)SB2_DBUS_PC_prog_ctrl2_reg))
#define  SB2_DBUS_PC_prog_ctrl2_pc_prog2_req_occur_shift                         (2)
#define  SB2_DBUS_PC_prog_ctrl2_pc_prog1_req_occur_shift                         (1)
#define  SB2_DBUS_PC_prog_ctrl2_pc_prog0_req_occur_shift                         (0)
#define  SB2_DBUS_PC_prog_ctrl2_pc_prog2_req_occur_mask                          (0x00000004)
#define  SB2_DBUS_PC_prog_ctrl2_pc_prog1_req_occur_mask                          (0x00000002)
#define  SB2_DBUS_PC_prog_ctrl2_pc_prog0_req_occur_mask                          (0x00000001)
#define  SB2_DBUS_PC_prog_ctrl2_pc_prog2_req_occur(data)                         (0x00000004&((data)<<2))
#define  SB2_DBUS_PC_prog_ctrl2_pc_prog1_req_occur(data)                         (0x00000002&((data)<<1))
#define  SB2_DBUS_PC_prog_ctrl2_pc_prog0_req_occur(data)                         (0x00000001&(data))
#define  SB2_DBUS_PC_prog_ctrl2_get_pc_prog2_req_occur(data)                     ((0x00000004&(data))>>2)
#define  SB2_DBUS_PC_prog_ctrl2_get_pc_prog1_req_occur(data)                     ((0x00000002&(data))>>1)
#define  SB2_DBUS_PC_prog_ctrl2_get_pc_prog0_req_occur(data)                     (0x00000001&(data))

#define  SB2_DBUS_PC_prog_0_channel_sel                                         0x1801A768
#define  SB2_DBUS_PC_prog_0_channel_sel_reg_addr                                 "0xB801A768"
#define  SB2_DBUS_PC_prog_0_channel_sel_reg                                      0xB801A768
#define  SB2_DBUS_PC_prog_0_channel_sel_inst_addr                                "0x007E"
#define  set_SB2_DBUS_PC_prog_0_channel_sel_reg(data)                            (*((volatile unsigned int*)SB2_DBUS_PC_prog_0_channel_sel_reg)=data)
#define  get_SB2_DBUS_PC_prog_0_channel_sel_reg                                  (*((volatile unsigned int*)SB2_DBUS_PC_prog_0_channel_sel_reg))
#define  SB2_DBUS_PC_prog_0_channel_sel_prog_channel_sel_shift                   (0)
#define  SB2_DBUS_PC_prog_0_channel_sel_prog_channel_sel_mask                    (0x00000003)
#define  SB2_DBUS_PC_prog_0_channel_sel_prog_channel_sel(data)                   (0x00000003&(data))
#define  SB2_DBUS_PC_prog_0_channel_sel_get_prog_channel_sel(data)               (0x00000003&(data))

#define  SB2_DBUS_PC_prog_0_acc_lat                                             0x1801A76C
#define  SB2_DBUS_PC_prog_0_acc_lat_reg_addr                                     "0xB801A76C"
#define  SB2_DBUS_PC_prog_0_acc_lat_reg                                          0xB801A76C
#define  SB2_DBUS_PC_prog_0_acc_lat_inst_addr                                    "0x007F"
#define  set_SB2_DBUS_PC_prog_0_acc_lat_reg(data)                                (*((volatile unsigned int*)SB2_DBUS_PC_prog_0_acc_lat_reg)=data)
#define  get_SB2_DBUS_PC_prog_0_acc_lat_reg                                      (*((volatile unsigned int*)SB2_DBUS_PC_prog_0_acc_lat_reg))
#define  SB2_DBUS_PC_prog_0_acc_lat_prog_acc_lat_shift                           (0)
#define  SB2_DBUS_PC_prog_0_acc_lat_prog_acc_lat_mask                            (0xFFFFFFFF)
#define  SB2_DBUS_PC_prog_0_acc_lat_prog_acc_lat(data)                           (0xFFFFFFFF&(data))
#define  SB2_DBUS_PC_prog_0_acc_lat_get_prog_acc_lat(data)                       (0xFFFFFFFF&(data))

#define  SB2_DBUS_PC_prog_0_max_lat                                             0x1801A770
#define  SB2_DBUS_PC_prog_0_max_lat_reg_addr                                     "0xB801A770"
#define  SB2_DBUS_PC_prog_0_max_lat_reg                                          0xB801A770
#define  SB2_DBUS_PC_prog_0_max_lat_inst_addr                                    "0x0080"
#define  set_SB2_DBUS_PC_prog_0_max_lat_reg(data)                                (*((volatile unsigned int*)SB2_DBUS_PC_prog_0_max_lat_reg)=data)
#define  get_SB2_DBUS_PC_prog_0_max_lat_reg                                      (*((volatile unsigned int*)SB2_DBUS_PC_prog_0_max_lat_reg))
#define  SB2_DBUS_PC_prog_0_max_lat_prog_max_lat_shift                           (0)
#define  SB2_DBUS_PC_prog_0_max_lat_prog_max_lat_mask                            (0x0000FFFF)
#define  SB2_DBUS_PC_prog_0_max_lat_prog_max_lat(data)                           (0x0000FFFF&(data))
#define  SB2_DBUS_PC_prog_0_max_lat_get_prog_max_lat(data)                       (0x0000FFFF&(data))

#define  SB2_DBUS_PC_prog_0_req_num                                             0x1801A774
#define  SB2_DBUS_PC_prog_0_req_num_reg_addr                                     "0xB801A774"
#define  SB2_DBUS_PC_prog_0_req_num_reg                                          0xB801A774
#define  SB2_DBUS_PC_prog_0_req_num_inst_addr                                    "0x0081"
#define  set_SB2_DBUS_PC_prog_0_req_num_reg(data)                                (*((volatile unsigned int*)SB2_DBUS_PC_prog_0_req_num_reg)=data)
#define  get_SB2_DBUS_PC_prog_0_req_num_reg                                      (*((volatile unsigned int*)SB2_DBUS_PC_prog_0_req_num_reg))
#define  SB2_DBUS_PC_prog_0_req_num_prog_req_num_shift                           (0)
#define  SB2_DBUS_PC_prog_0_req_num_prog_req_num_mask                            (0x00FFFFFF)
#define  SB2_DBUS_PC_prog_0_req_num_prog_req_num(data)                           (0x00FFFFFF&(data))
#define  SB2_DBUS_PC_prog_0_req_num_get_prog_req_num(data)                       (0x00FFFFFF&(data))

#define  SB2_DBUS_PC_prog_0_ack_num                                             0x1801A778
#define  SB2_DBUS_PC_prog_0_ack_num_reg_addr                                     "0xB801A778"
#define  SB2_DBUS_PC_prog_0_ack_num_reg                                          0xB801A778
#define  SB2_DBUS_PC_prog_0_ack_num_inst_addr                                    "0x0082"
#define  set_SB2_DBUS_PC_prog_0_ack_num_reg(data)                                (*((volatile unsigned int*)SB2_DBUS_PC_prog_0_ack_num_reg)=data)
#define  get_SB2_DBUS_PC_prog_0_ack_num_reg                                      (*((volatile unsigned int*)SB2_DBUS_PC_prog_0_ack_num_reg))
#define  SB2_DBUS_PC_prog_0_ack_num_prog_ack_num_shift                           (0)
#define  SB2_DBUS_PC_prog_0_ack_num_prog_ack_num_mask                            (0xFFFFFFFF)
#define  SB2_DBUS_PC_prog_0_ack_num_prog_ack_num(data)                           (0xFFFFFFFF&(data))
#define  SB2_DBUS_PC_prog_0_ack_num_get_prog_ack_num(data)                       (0xFFFFFFFF&(data))

#define  SB2_DBUS_PC_prog_0_hitend                                              0x1801A77C
#define  SB2_DBUS_PC_prog_0_hitend_reg_addr                                      "0xB801A77C"
#define  SB2_DBUS_PC_prog_0_hitend_reg                                           0xB801A77C
#define  SB2_DBUS_PC_prog_0_hitend_inst_addr                                     "0x0083"
#define  set_SB2_DBUS_PC_prog_0_hitend_reg(data)                                 (*((volatile unsigned int*)SB2_DBUS_PC_prog_0_hitend_reg)=data)
#define  get_SB2_DBUS_PC_prog_0_hitend_reg                                       (*((volatile unsigned int*)SB2_DBUS_PC_prog_0_hitend_reg))
#define  SB2_DBUS_PC_prog_0_hitend_prog_hitend_cnt_shift                         (0)
#define  SB2_DBUS_PC_prog_0_hitend_prog_hitend_cnt_mask                          (0x0000FFFF)
#define  SB2_DBUS_PC_prog_0_hitend_prog_hitend_cnt(data)                         (0x0000FFFF&(data))
#define  SB2_DBUS_PC_prog_0_hitend_get_prog_hitend_cnt(data)                     (0x0000FFFF&(data))

#define  SB2_DBUS_BRIDGE_TEST_CTRL                                              0x1801A7D0
#define  SB2_DBUS_BRIDGE_TEST_CTRL_reg_addr                                      "0xB801A7D0"
#define  SB2_DBUS_BRIDGE_TEST_CTRL_reg                                           0xB801A7D0
#define  SB2_DBUS_BRIDGE_TEST_CTRL_inst_addr                                     "0x0084"
#define  set_SB2_DBUS_BRIDGE_TEST_CTRL_reg(data)                                 (*((volatile unsigned int*)SB2_DBUS_BRIDGE_TEST_CTRL_reg)=data)
#define  get_SB2_DBUS_BRIDGE_TEST_CTRL_reg                                       (*((volatile unsigned int*)SB2_DBUS_BRIDGE_TEST_CTRL_reg))
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_done_shift                                 (4)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_bl_shift                                   (3)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_data_inv_shift                             (2)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_rw_shift                                   (1)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_go_shift                                   (0)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_done_mask                                  (0x00000030)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_bl_mask                                    (0x00000008)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_data_inv_mask                              (0x00000004)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_rw_mask                                    (0x00000002)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_go_mask                                    (0x00000001)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_done(data)                                 (0x00000030&((data)<<4))
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_bl(data)                                   (0x00000008&((data)<<3))
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_data_inv(data)                             (0x00000004&((data)<<2))
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_rw(data)                                   (0x00000002&((data)<<1))
#define  SB2_DBUS_BRIDGE_TEST_CTRL_bt_go(data)                                   (0x00000001&(data))
#define  SB2_DBUS_BRIDGE_TEST_CTRL_get_bt_done(data)                             ((0x00000030&(data))>>4)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_get_bt_bl(data)                               ((0x00000008&(data))>>3)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_get_bt_data_inv(data)                         ((0x00000004&(data))>>2)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_get_bt_rw(data)                               ((0x00000002&(data))>>1)
#define  SB2_DBUS_BRIDGE_TEST_CTRL_get_bt_go(data)                               (0x00000001&(data))

#define  SB2_DBUS_BRIDGE_TEST_ADDR_DATA                                         0x1801A7D4
#define  SB2_DBUS_BRIDGE_TEST_ADDR_DATA_reg_addr                                 "0xB801A7D4"
#define  SB2_DBUS_BRIDGE_TEST_ADDR_DATA_reg                                      0xB801A7D4
#define  SB2_DBUS_BRIDGE_TEST_ADDR_DATA_inst_addr                                "0x0085"
#define  set_SB2_DBUS_BRIDGE_TEST_ADDR_DATA_reg(data)                            (*((volatile unsigned int*)SB2_DBUS_BRIDGE_TEST_ADDR_DATA_reg)=data)
#define  get_SB2_DBUS_BRIDGE_TEST_ADDR_DATA_reg                                  (*((volatile unsigned int*)SB2_DBUS_BRIDGE_TEST_ADDR_DATA_reg))
#define  SB2_DBUS_BRIDGE_TEST_ADDR_DATA_bt_addr_data_shift                       (4)
#define  SB2_DBUS_BRIDGE_TEST_ADDR_DATA_bt_addr_data_mask                        (0xFFFFFFF0)
#define  SB2_DBUS_BRIDGE_TEST_ADDR_DATA_bt_addr_data(data)                       (0xFFFFFFF0&((data)<<4))
#define  SB2_DBUS_BRIDGE_TEST_ADDR_DATA_get_bt_addr_data(data)                   ((0xFFFFFFF0&(data))>>4)

#define  SB2_DBUS_ARB_SR0                                                       0x1801A7C8
#define  SB2_DBUS_ARB_SR0_reg_addr                                               "0xB801A7C8"
#define  SB2_DBUS_ARB_SR0_reg                                                    0xB801A7C8
#define  SB2_DBUS_ARB_SR0_inst_addr                                              "0x0086"
#define  set_SB2_DBUS_ARB_SR0_reg(data)                                          (*((volatile unsigned int*)SB2_DBUS_ARB_SR0_reg)=data)
#define  get_SB2_DBUS_ARB_SR0_reg                                                (*((volatile unsigned int*)SB2_DBUS_ARB_SR0_reg))
#define  SB2_DBUS_ARB_SR0_sb_req_shift                                           (16)
#define  SB2_DBUS_ARB_SR0_sb_gnt_shift                                           (0)
#define  SB2_DBUS_ARB_SR0_sb_req_mask                                            (0x007F0000)
#define  SB2_DBUS_ARB_SR0_sb_gnt_mask                                            (0x0000007F)
#define  SB2_DBUS_ARB_SR0_sb_req(data)                                           (0x007F0000&((data)<<16))
#define  SB2_DBUS_ARB_SR0_sb_gnt(data)                                           (0x0000007F&(data))
#define  SB2_DBUS_ARB_SR0_get_sb_req(data)                                       ((0x007F0000&(data))>>16)
#define  SB2_DBUS_ARB_SR0_get_sb_gnt(data)                                       (0x0000007F&(data))

#define  SB2_DBUS_ARB_SR1                                                       0x1801A7CC
#define  SB2_DBUS_ARB_SR1_reg_addr                                               "0xB801A7CC"
#define  SB2_DBUS_ARB_SR1_reg                                                    0xB801A7CC
#define  SB2_DBUS_ARB_SR1_inst_addr                                              "0x0087"
#define  set_SB2_DBUS_ARB_SR1_reg(data)                                          (*((volatile unsigned int*)SB2_DBUS_ARB_SR1_reg)=data)
#define  get_SB2_DBUS_ARB_SR1_reg                                                (*((volatile unsigned int*)SB2_DBUS_ARB_SR1_reg))
#define  SB2_DBUS_ARB_SR1_win_latcnt_shift                                       (0)
#define  SB2_DBUS_ARB_SR1_win_latcnt_mask                                        (0x000000FF)
#define  SB2_DBUS_ARB_SR1_win_latcnt(data)                                       (0x000000FF&(data))
#define  SB2_DBUS_ARB_SR1_get_win_latcnt(data)                                   (0x000000FF&(data))

#define  SB2_DBUS_bw_limit_0                                                    0x1801A738
#define  SB2_DBUS_bw_limit_0_reg_addr                                            "0xB801A738"
#define  SB2_DBUS_bw_limit_0_reg                                                 0xB801A738
#define  SB2_DBUS_bw_limit_0_inst_addr                                           "0x0088"
#define  set_SB2_DBUS_bw_limit_0_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_bw_limit_0_reg)=data)
#define  get_SB2_DBUS_bw_limit_0_reg                                             (*((volatile unsigned int*)SB2_DBUS_bw_limit_0_reg))
#define  SB2_DBUS_bw_limit_0_max_req_num_0_shift                                 (24)
#define  SB2_DBUS_bw_limit_0_req_thr_0_shift                                     (16)
#define  SB2_DBUS_bw_limit_0_time_thr_0_shift                                    (0)
#define  SB2_DBUS_bw_limit_0_max_req_num_0_mask                                  (0xFF000000)
#define  SB2_DBUS_bw_limit_0_req_thr_0_mask                                      (0x00FF0000)
#define  SB2_DBUS_bw_limit_0_time_thr_0_mask                                     (0x0000FFFF)
#define  SB2_DBUS_bw_limit_0_max_req_num_0(data)                                 (0xFF000000&((data)<<24))
#define  SB2_DBUS_bw_limit_0_req_thr_0(data)                                     (0x00FF0000&((data)<<16))
#define  SB2_DBUS_bw_limit_0_time_thr_0(data)                                    (0x0000FFFF&(data))
#define  SB2_DBUS_bw_limit_0_get_max_req_num_0(data)                             ((0xFF000000&(data))>>24)
#define  SB2_DBUS_bw_limit_0_get_req_thr_0(data)                                 ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_bw_limit_0_get_time_thr_0(data)                                (0x0000FFFF&(data))

#define  SB2_DBUS_bw_limit_1                                                    0x1801A73C
#define  SB2_DBUS_bw_limit_1_reg_addr                                            "0xB801A73C"
#define  SB2_DBUS_bw_limit_1_reg                                                 0xB801A73C
#define  SB2_DBUS_bw_limit_1_inst_addr                                           "0x0089"
#define  set_SB2_DBUS_bw_limit_1_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_bw_limit_1_reg)=data)
#define  get_SB2_DBUS_bw_limit_1_reg                                             (*((volatile unsigned int*)SB2_DBUS_bw_limit_1_reg))
#define  SB2_DBUS_bw_limit_1_max_req_num_1_shift                                 (24)
#define  SB2_DBUS_bw_limit_1_req_thr_1_shift                                     (16)
#define  SB2_DBUS_bw_limit_1_time_thr_1_shift                                    (0)
#define  SB2_DBUS_bw_limit_1_max_req_num_1_mask                                  (0xFF000000)
#define  SB2_DBUS_bw_limit_1_req_thr_1_mask                                      (0x00FF0000)
#define  SB2_DBUS_bw_limit_1_time_thr_1_mask                                     (0x0000FFFF)
#define  SB2_DBUS_bw_limit_1_max_req_num_1(data)                                 (0xFF000000&((data)<<24))
#define  SB2_DBUS_bw_limit_1_req_thr_1(data)                                     (0x00FF0000&((data)<<16))
#define  SB2_DBUS_bw_limit_1_time_thr_1(data)                                    (0x0000FFFF&(data))
#define  SB2_DBUS_bw_limit_1_get_max_req_num_1(data)                             ((0xFF000000&(data))>>24)
#define  SB2_DBUS_bw_limit_1_get_req_thr_1(data)                                 ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_bw_limit_1_get_time_thr_1(data)                                (0x0000FFFF&(data))

#define  SB2_DBUS_bw_limit_2                                                    0x1801A740
#define  SB2_DBUS_bw_limit_2_reg_addr                                            "0xB801A740"
#define  SB2_DBUS_bw_limit_2_reg                                                 0xB801A740
#define  SB2_DBUS_bw_limit_2_inst_addr                                           "0x008A"
#define  set_SB2_DBUS_bw_limit_2_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_bw_limit_2_reg)=data)
#define  get_SB2_DBUS_bw_limit_2_reg                                             (*((volatile unsigned int*)SB2_DBUS_bw_limit_2_reg))
#define  SB2_DBUS_bw_limit_2_max_req_num_2_shift                                 (24)
#define  SB2_DBUS_bw_limit_2_req_thr_2_shift                                     (16)
#define  SB2_DBUS_bw_limit_2_time_thr_2_shift                                    (0)
#define  SB2_DBUS_bw_limit_2_max_req_num_2_mask                                  (0xFF000000)
#define  SB2_DBUS_bw_limit_2_req_thr_2_mask                                      (0x00FF0000)
#define  SB2_DBUS_bw_limit_2_time_thr_2_mask                                     (0x0000FFFF)
#define  SB2_DBUS_bw_limit_2_max_req_num_2(data)                                 (0xFF000000&((data)<<24))
#define  SB2_DBUS_bw_limit_2_req_thr_2(data)                                     (0x00FF0000&((data)<<16))
#define  SB2_DBUS_bw_limit_2_time_thr_2(data)                                    (0x0000FFFF&(data))
#define  SB2_DBUS_bw_limit_2_get_max_req_num_2(data)                             ((0xFF000000&(data))>>24)
#define  SB2_DBUS_bw_limit_2_get_req_thr_2(data)                                 ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_bw_limit_2_get_time_thr_2(data)                                (0x0000FFFF&(data))

#define  SB2_DBUS_bw_limit_3                                                    0x1801A744
#define  SB2_DBUS_bw_limit_3_reg_addr                                            "0xB801A744"
#define  SB2_DBUS_bw_limit_3_reg                                                 0xB801A744
#define  SB2_DBUS_bw_limit_3_inst_addr                                           "0x008B"
#define  set_SB2_DBUS_bw_limit_3_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_bw_limit_3_reg)=data)
#define  get_SB2_DBUS_bw_limit_3_reg                                             (*((volatile unsigned int*)SB2_DBUS_bw_limit_3_reg))
#define  SB2_DBUS_bw_limit_3_max_req_num_3_shift                                 (24)
#define  SB2_DBUS_bw_limit_3_req_thr_3_shift                                     (16)
#define  SB2_DBUS_bw_limit_3_time_thr_3_shift                                    (0)
#define  SB2_DBUS_bw_limit_3_max_req_num_3_mask                                  (0xFF000000)
#define  SB2_DBUS_bw_limit_3_req_thr_3_mask                                      (0x00FF0000)
#define  SB2_DBUS_bw_limit_3_time_thr_3_mask                                     (0x0000FFFF)
#define  SB2_DBUS_bw_limit_3_max_req_num_3(data)                                 (0xFF000000&((data)<<24))
#define  SB2_DBUS_bw_limit_3_req_thr_3(data)                                     (0x00FF0000&((data)<<16))
#define  SB2_DBUS_bw_limit_3_time_thr_3(data)                                    (0x0000FFFF&(data))
#define  SB2_DBUS_bw_limit_3_get_max_req_num_3(data)                             ((0xFF000000&(data))>>24)
#define  SB2_DBUS_bw_limit_3_get_req_thr_3(data)                                 ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_bw_limit_3_get_time_thr_3(data)                                (0x0000FFFF&(data))

#define  SB2_DBUS_bw_limit_4                                                    0x1801A748
#define  SB2_DBUS_bw_limit_4_reg_addr                                            "0xB801A748"
#define  SB2_DBUS_bw_limit_4_reg                                                 0xB801A748
#define  SB2_DBUS_bw_limit_4_inst_addr                                           "0x008C"
#define  set_SB2_DBUS_bw_limit_4_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_bw_limit_4_reg)=data)
#define  get_SB2_DBUS_bw_limit_4_reg                                             (*((volatile unsigned int*)SB2_DBUS_bw_limit_4_reg))
#define  SB2_DBUS_bw_limit_4_max_req_num_4_shift                                 (24)
#define  SB2_DBUS_bw_limit_4_req_thr_4_shift                                     (16)
#define  SB2_DBUS_bw_limit_4_time_thr_4_shift                                    (0)
#define  SB2_DBUS_bw_limit_4_max_req_num_4_mask                                  (0xFF000000)
#define  SB2_DBUS_bw_limit_4_req_thr_4_mask                                      (0x00FF0000)
#define  SB2_DBUS_bw_limit_4_time_thr_4_mask                                     (0x0000FFFF)
#define  SB2_DBUS_bw_limit_4_max_req_num_4(data)                                 (0xFF000000&((data)<<24))
#define  SB2_DBUS_bw_limit_4_req_thr_4(data)                                     (0x00FF0000&((data)<<16))
#define  SB2_DBUS_bw_limit_4_time_thr_4(data)                                    (0x0000FFFF&(data))
#define  SB2_DBUS_bw_limit_4_get_max_req_num_4(data)                             ((0xFF000000&(data))>>24)
#define  SB2_DBUS_bw_limit_4_get_req_thr_4(data)                                 ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_bw_limit_4_get_time_thr_4(data)                                (0x0000FFFF&(data))

#define  SB2_DBUS_bw_limit_5                                                    0x1801A74C
#define  SB2_DBUS_bw_limit_5_reg_addr                                            "0xB801A74C"
#define  SB2_DBUS_bw_limit_5_reg                                                 0xB801A74C
#define  SB2_DBUS_bw_limit_5_inst_addr                                           "0x008D"
#define  set_SB2_DBUS_bw_limit_5_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_bw_limit_5_reg)=data)
#define  get_SB2_DBUS_bw_limit_5_reg                                             (*((volatile unsigned int*)SB2_DBUS_bw_limit_5_reg))
#define  SB2_DBUS_bw_limit_5_max_req_num_5_shift                                 (24)
#define  SB2_DBUS_bw_limit_5_req_thr_5_shift                                     (16)
#define  SB2_DBUS_bw_limit_5_time_thr_5_shift                                    (0)
#define  SB2_DBUS_bw_limit_5_max_req_num_5_mask                                  (0xFF000000)
#define  SB2_DBUS_bw_limit_5_req_thr_5_mask                                      (0x00FF0000)
#define  SB2_DBUS_bw_limit_5_time_thr_5_mask                                     (0x0000FFFF)
#define  SB2_DBUS_bw_limit_5_max_req_num_5(data)                                 (0xFF000000&((data)<<24))
#define  SB2_DBUS_bw_limit_5_req_thr_5(data)                                     (0x00FF0000&((data)<<16))
#define  SB2_DBUS_bw_limit_5_time_thr_5(data)                                    (0x0000FFFF&(data))
#define  SB2_DBUS_bw_limit_5_get_max_req_num_5(data)                             ((0xFF000000&(data))>>24)
#define  SB2_DBUS_bw_limit_5_get_req_thr_5(data)                                 ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_bw_limit_5_get_time_thr_5(data)                                (0x0000FFFF&(data))

#define  SB2_DBUS_bw_limit_6                                                    0x1801A7B0
#define  SB2_DBUS_bw_limit_6_reg_addr                                            "0xB801A7B0"
#define  SB2_DBUS_bw_limit_6_reg                                                 0xB801A7B0
#define  SB2_DBUS_bw_limit_6_inst_addr                                           "0x008E"
#define  set_SB2_DBUS_bw_limit_6_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_bw_limit_6_reg)=data)
#define  get_SB2_DBUS_bw_limit_6_reg                                             (*((volatile unsigned int*)SB2_DBUS_bw_limit_6_reg))
#define  SB2_DBUS_bw_limit_6_max_req_num_6_shift                                 (24)
#define  SB2_DBUS_bw_limit_6_req_thr_6_shift                                     (16)
#define  SB2_DBUS_bw_limit_6_time_thr_6_shift                                    (0)
#define  SB2_DBUS_bw_limit_6_max_req_num_6_mask                                  (0xFF000000)
#define  SB2_DBUS_bw_limit_6_req_thr_6_mask                                      (0x00FF0000)
#define  SB2_DBUS_bw_limit_6_time_thr_6_mask                                     (0x0000FFFF)
#define  SB2_DBUS_bw_limit_6_max_req_num_6(data)                                 (0xFF000000&((data)<<24))
#define  SB2_DBUS_bw_limit_6_req_thr_6(data)                                     (0x00FF0000&((data)<<16))
#define  SB2_DBUS_bw_limit_6_time_thr_6(data)                                    (0x0000FFFF&(data))
#define  SB2_DBUS_bw_limit_6_get_max_req_num_6(data)                             ((0xFF000000&(data))>>24)
#define  SB2_DBUS_bw_limit_6_get_req_thr_6(data)                                 ((0x00FF0000&(data))>>16)
#define  SB2_DBUS_bw_limit_6_get_time_thr_6(data)                                (0x0000FFFF&(data))

#define  SB2_DBUS_bw_limit_en                                                   0x1801A7E8
#define  SB2_DBUS_bw_limit_en_reg_addr                                           "0xB801A7E8"
#define  SB2_DBUS_bw_limit_en_reg                                                0xB801A7E8
#define  SB2_DBUS_bw_limit_en_inst_addr                                          "0x008F"
#define  set_SB2_DBUS_bw_limit_en_reg(data)                                      (*((volatile unsigned int*)SB2_DBUS_bw_limit_en_reg)=data)
#define  get_SB2_DBUS_bw_limit_en_reg                                            (*((volatile unsigned int*)SB2_DBUS_bw_limit_en_reg))
#define  SB2_DBUS_bw_limit_en_len_scheme_en_shift                                (31)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_6_shift                              (13)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_6_shift                                (12)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_5_shift                              (11)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_5_shift                                (10)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_4_shift                              (9)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_4_shift                                (8)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_3_shift                              (7)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_3_shift                                (6)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_2_shift                              (5)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_2_shift                                (4)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_1_shift                              (3)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_1_shift                                (2)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_0_shift                              (1)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_0_shift                                (0)
#define  SB2_DBUS_bw_limit_en_len_scheme_en_mask                                 (0x80000000)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_6_mask                               (0x00002000)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_6_mask                                 (0x00001000)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_5_mask                               (0x00000800)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_5_mask                                 (0x00000400)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_4_mask                               (0x00000200)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_4_mask                                 (0x00000100)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_3_mask                               (0x00000080)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_3_mask                                 (0x00000040)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_2_mask                               (0x00000020)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_2_mask                                 (0x00000010)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_1_mask                               (0x00000008)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_1_mask                                 (0x00000004)
#define  SB2_DBUS_bw_limit_en_bw_status_clr_0_mask                               (0x00000002)
#define  SB2_DBUS_bw_limit_en_bw_limit_en_0_mask                                 (0x00000001)
#define  SB2_DBUS_bw_limit_en_len_scheme_en(data)                                (0x80000000&((data)<<31))
#define  SB2_DBUS_bw_limit_en_bw_status_clr_6(data)                              (0x00002000&((data)<<13))
#define  SB2_DBUS_bw_limit_en_bw_limit_en_6(data)                                (0x00001000&((data)<<12))
#define  SB2_DBUS_bw_limit_en_bw_status_clr_5(data)                              (0x00000800&((data)<<11))
#define  SB2_DBUS_bw_limit_en_bw_limit_en_5(data)                                (0x00000400&((data)<<10))
#define  SB2_DBUS_bw_limit_en_bw_status_clr_4(data)                              (0x00000200&((data)<<9))
#define  SB2_DBUS_bw_limit_en_bw_limit_en_4(data)                                (0x00000100&((data)<<8))
#define  SB2_DBUS_bw_limit_en_bw_status_clr_3(data)                              (0x00000080&((data)<<7))
#define  SB2_DBUS_bw_limit_en_bw_limit_en_3(data)                                (0x00000040&((data)<<6))
#define  SB2_DBUS_bw_limit_en_bw_status_clr_2(data)                              (0x00000020&((data)<<5))
#define  SB2_DBUS_bw_limit_en_bw_limit_en_2(data)                                (0x00000010&((data)<<4))
#define  SB2_DBUS_bw_limit_en_bw_status_clr_1(data)                              (0x00000008&((data)<<3))
#define  SB2_DBUS_bw_limit_en_bw_limit_en_1(data)                                (0x00000004&((data)<<2))
#define  SB2_DBUS_bw_limit_en_bw_status_clr_0(data)                              (0x00000002&((data)<<1))
#define  SB2_DBUS_bw_limit_en_bw_limit_en_0(data)                                (0x00000001&(data))
#define  SB2_DBUS_bw_limit_en_get_len_scheme_en(data)                            ((0x80000000&(data))>>31)
#define  SB2_DBUS_bw_limit_en_get_bw_status_clr_6(data)                          ((0x00002000&(data))>>13)
#define  SB2_DBUS_bw_limit_en_get_bw_limit_en_6(data)                            ((0x00001000&(data))>>12)
#define  SB2_DBUS_bw_limit_en_get_bw_status_clr_5(data)                          ((0x00000800&(data))>>11)
#define  SB2_DBUS_bw_limit_en_get_bw_limit_en_5(data)                            ((0x00000400&(data))>>10)
#define  SB2_DBUS_bw_limit_en_get_bw_status_clr_4(data)                          ((0x00000200&(data))>>9)
#define  SB2_DBUS_bw_limit_en_get_bw_limit_en_4(data)                            ((0x00000100&(data))>>8)
#define  SB2_DBUS_bw_limit_en_get_bw_status_clr_3(data)                          ((0x00000080&(data))>>7)
#define  SB2_DBUS_bw_limit_en_get_bw_limit_en_3(data)                            ((0x00000040&(data))>>6)
#define  SB2_DBUS_bw_limit_en_get_bw_status_clr_2(data)                          ((0x00000020&(data))>>5)
#define  SB2_DBUS_bw_limit_en_get_bw_limit_en_2(data)                            ((0x00000010&(data))>>4)
#define  SB2_DBUS_bw_limit_en_get_bw_status_clr_1(data)                          ((0x00000008&(data))>>3)
#define  SB2_DBUS_bw_limit_en_get_bw_limit_en_1(data)                            ((0x00000004&(data))>>2)
#define  SB2_DBUS_bw_limit_en_get_bw_status_clr_0(data)                          ((0x00000002&(data))>>1)
#define  SB2_DBUS_bw_limit_en_get_bw_limit_en_0(data)                            (0x00000001&(data))

#define  SB2_DBUS_queue_ctrl                                                    0x1801A7EC
#define  SB2_DBUS_queue_ctrl_reg_addr                                            "0xB801A7EC"
#define  SB2_DBUS_queue_ctrl_reg                                                 0xB801A7EC
#define  SB2_DBUS_queue_ctrl_inst_addr                                           "0x0090"
#define  set_SB2_DBUS_queue_ctrl_reg(data)                                       (*((volatile unsigned int*)SB2_DBUS_queue_ctrl_reg)=data)
#define  get_SB2_DBUS_queue_ctrl_reg                                             (*((volatile unsigned int*)SB2_DBUS_queue_ctrl_reg))
#define  SB2_DBUS_queue_ctrl_rd_queue_num_shift                                  (4)
#define  SB2_DBUS_queue_ctrl_wr_queue_num_shift                                  (0)
#define  SB2_DBUS_queue_ctrl_rd_queue_num_mask                                   (0x000000F0)
#define  SB2_DBUS_queue_ctrl_wr_queue_num_mask                                   (0x0000000F)
#define  SB2_DBUS_queue_ctrl_rd_queue_num(data)                                  (0x000000F0&((data)<<4))
#define  SB2_DBUS_queue_ctrl_wr_queue_num(data)                                  (0x0000000F&(data))
#define  SB2_DBUS_queue_ctrl_get_rd_queue_num(data)                              ((0x000000F0&(data))>>4)
#define  SB2_DBUS_queue_ctrl_get_wr_queue_num(data)                              (0x0000000F&(data))

#define  SB2_DBUS_error_status                                                  0x1801A7FC
#define  SB2_DBUS_error_status_reg_addr                                          "0xB801A7FC"
#define  SB2_DBUS_error_status_reg                                               0xB801A7FC
#define  SB2_DBUS_error_status_inst_addr                                         "0x0091"
#define  set_SB2_DBUS_error_status_reg(data)                                     (*((volatile unsigned int*)SB2_DBUS_error_status_reg)=data)
#define  get_SB2_DBUS_error_status_reg                                           (*((volatile unsigned int*)SB2_DBUS_error_status_reg))
#define  SB2_DBUS_error_status_error_clr_shift                                   (31)
#define  SB2_DBUS_error_status_error_zero_length_id_shift                        (12)
#define  SB2_DBUS_error_status_error_read_full_shift                             (9)
#define  SB2_DBUS_error_status_error_write_full_shift                            (8)
#define  SB2_DBUS_error_status_error_clr_mask                                    (0x80000000)
#define  SB2_DBUS_error_status_error_zero_length_id_mask                         (0x0000F000)
#define  SB2_DBUS_error_status_error_read_full_mask                              (0x00000200)
#define  SB2_DBUS_error_status_error_write_full_mask                             (0x00000100)
#define  SB2_DBUS_error_status_error_clr(data)                                   (0x80000000&((data)<<31))
#define  SB2_DBUS_error_status_error_zero_length_id(data)                        (0x0000F000&((data)<<12))
#define  SB2_DBUS_error_status_error_read_full(data)                             (0x00000200&((data)<<9))
#define  SB2_DBUS_error_status_error_write_full(data)                            (0x00000100&((data)<<8))
#define  SB2_DBUS_error_status_get_error_clr(data)                               ((0x80000000&(data))>>31)
#define  SB2_DBUS_error_status_get_error_zero_length_id(data)                    ((0x0000F000&(data))>>12)
#define  SB2_DBUS_error_status_get_error_read_full(data)                         ((0x00000200&(data))>>9)
#define  SB2_DBUS_error_status_get_error_write_full(data)                        ((0x00000100&(data))>>8)

#define  SB2_SFC_OPCODE                                                         0x1801A800
#define  SB2_SFC_OPCODE_reg_addr                                                 "0xB801A800"
#define  SB2_SFC_OPCODE_reg                                                      0xB801A800
#define  SB2_SFC_OPCODE_inst_addr                                                "0x0092"
#define  set_SB2_SFC_OPCODE_reg(data)                                            (*((volatile unsigned int*)SB2_SFC_OPCODE_reg)=data)
#define  get_SB2_SFC_OPCODE_reg                                                  (*((volatile unsigned int*)SB2_SFC_OPCODE_reg))
#define  SB2_SFC_OPCODE_dual_quad_mode_shift                                     (9)
#define  SB2_SFC_OPCODE_fat_mode_shift                                           (8)
#define  SB2_SFC_OPCODE_opc_shift                                                (0)
#define  SB2_SFC_OPCODE_dual_quad_mode_mask                                      (0x00001E00)
#define  SB2_SFC_OPCODE_fat_mode_mask                                            (0x00000100)
#define  SB2_SFC_OPCODE_opc_mask                                                 (0x000000FF)
#define  SB2_SFC_OPCODE_dual_quad_mode(data)                                     (0x00001E00&((data)<<9))
#define  SB2_SFC_OPCODE_fat_mode(data)                                           (0x00000100&((data)<<8))
#define  SB2_SFC_OPCODE_opc(data)                                                (0x000000FF&(data))
#define  SB2_SFC_OPCODE_get_dual_quad_mode(data)                                 ((0x00001E00&(data))>>9)
#define  SB2_SFC_OPCODE_get_fat_mode(data)                                       ((0x00000100&(data))>>8)
#define  SB2_SFC_OPCODE_get_opc(data)                                            (0x000000FF&(data))

#define  SB2_SFC_CTL                                                            0x1801A804
#define  SB2_SFC_CTL_reg_addr                                                    "0xB801A804"
#define  SB2_SFC_CTL_reg                                                         0xB801A804
#define  SB2_SFC_CTL_inst_addr                                                   "0x0093"
#define  set_SB2_SFC_CTL_reg(data)                                               (*((volatile unsigned int*)SB2_SFC_CTL_reg)=data)
#define  get_SB2_SFC_CTL_reg                                                     (*((volatile unsigned int*)SB2_SFC_CTL_reg))
#define  SB2_SFC_CTL_dataen_shift                                                (4)
#define  SB2_SFC_CTL_adren_shift                                                 (3)
#define  SB2_SFC_CTL_dmycnt_shift                                                (0)
#define  SB2_SFC_CTL_dataen_mask                                                 (0x00000010)
#define  SB2_SFC_CTL_adren_mask                                                  (0x00000008)
#define  SB2_SFC_CTL_dmycnt_mask                                                 (0x00000007)
#define  SB2_SFC_CTL_dataen(data)                                                (0x00000010&((data)<<4))
#define  SB2_SFC_CTL_adren(data)                                                 (0x00000008&((data)<<3))
#define  SB2_SFC_CTL_dmycnt(data)                                                (0x00000007&(data))
#define  SB2_SFC_CTL_get_dataen(data)                                            ((0x00000010&(data))>>4)
#define  SB2_SFC_CTL_get_adren(data)                                             ((0x00000008&(data))>>3)
#define  SB2_SFC_CTL_get_dmycnt(data)                                            (0x00000007&(data))

#define  SB2_SFC_SCK                                                            0x1801A808
#define  SB2_SFC_SCK_reg_addr                                                    "0xB801A808"
#define  SB2_SFC_SCK_reg                                                         0xB801A808
#define  SB2_SFC_SCK_inst_addr                                                   "0x0094"
#define  set_SB2_SFC_SCK_reg(data)                                               (*((volatile unsigned int*)SB2_SFC_SCK_reg)=data)
#define  get_SB2_SFC_SCK_reg                                                     (*((volatile unsigned int*)SB2_SFC_SCK_reg))
#define  SB2_SFC_SCK_fdiv_hi_shift                                               (16)
#define  SB2_SFC_SCK_clk_duty50_en_shift                                         (9)
#define  SB2_SFC_SCK_mode_shift                                                  (8)
#define  SB2_SFC_SCK_fdiv_shift                                                  (0)
#define  SB2_SFC_SCK_fdiv_hi_mask                                                (0x00FF0000)
#define  SB2_SFC_SCK_clk_duty50_en_mask                                          (0x00000200)
#define  SB2_SFC_SCK_mode_mask                                                   (0x00000100)
#define  SB2_SFC_SCK_fdiv_mask                                                   (0x000000FF)
#define  SB2_SFC_SCK_fdiv_hi(data)                                               (0x00FF0000&((data)<<16))
#define  SB2_SFC_SCK_clk_duty50_en(data)                                         (0x00000200&((data)<<9))
#define  SB2_SFC_SCK_mode(data)                                                  (0x00000100&((data)<<8))
#define  SB2_SFC_SCK_fdiv(data)                                                  (0x000000FF&(data))
#define  SB2_SFC_SCK_get_fdiv_hi(data)                                           ((0x00FF0000&(data))>>16)
#define  SB2_SFC_SCK_get_clk_duty50_en(data)                                     ((0x00000200&(data))>>9)
#define  SB2_SFC_SCK_get_mode(data)                                              ((0x00000100&(data))>>8)
#define  SB2_SFC_SCK_get_fdiv(data)                                              (0x000000FF&(data))

#define  SB2_SFC_CE                                                             0x1801A80C
#define  SB2_SFC_CE_reg_addr                                                     "0xB801A80C"
#define  SB2_SFC_CE_reg                                                          0xB801A80C
#define  SB2_SFC_CE_inst_addr                                                    "0x0095"
#define  set_SB2_SFC_CE_reg(data)                                                (*((volatile unsigned int*)SB2_SFC_CE_reg)=data)
#define  get_SB2_SFC_CE_reg                                                      (*((volatile unsigned int*)SB2_SFC_CE_reg))
#define  SB2_SFC_CE_tdt_shift                                                    (16)
#define  SB2_SFC_CE_phcnt_shift                                                  (8)
#define  SB2_SFC_CE_plcnt_shift                                                  (0)
#define  SB2_SFC_CE_tdt_mask                                                     (0xFFFF0000)
#define  SB2_SFC_CE_phcnt_mask                                                   (0x0000FF00)
#define  SB2_SFC_CE_plcnt_mask                                                   (0x000000FF)
#define  SB2_SFC_CE_tdt(data)                                                    (0xFFFF0000&((data)<<16))
#define  SB2_SFC_CE_phcnt(data)                                                  (0x0000FF00&((data)<<8))
#define  SB2_SFC_CE_plcnt(data)                                                  (0x000000FF&(data))
#define  SB2_SFC_CE_get_tdt(data)                                                ((0xFFFF0000&(data))>>16)
#define  SB2_SFC_CE_get_phcnt(data)                                              ((0x0000FF00&(data))>>8)
#define  SB2_SFC_CE_get_plcnt(data)                                              (0x000000FF&(data))

#define  SB2_SFC_WP                                                             0x1801A810
#define  SB2_SFC_WP_reg_addr                                                     "0xB801A810"
#define  SB2_SFC_WP_reg                                                          0xB801A810
#define  SB2_SFC_WP_inst_addr                                                    "0x0096"
#define  set_SB2_SFC_WP_reg(data)                                                (*((volatile unsigned int*)SB2_SFC_WP_reg)=data)
#define  get_SB2_SFC_WP_reg                                                      (*((volatile unsigned int*)SB2_SFC_WP_reg))
#define  SB2_SFC_WP_write_en3_shift                                              (7)
#define  SB2_SFC_WP_spi_csn_inv_shift                                            (6)
#define  SB2_SFC_WP_write_en2_shift                                              (5)
#define  SB2_SFC_WP_ce_n_shift                                                   (4)
#define  SB2_SFC_WP_write_en1_shift                                              (1)
#define  SB2_SFC_WP_wp_n_shift                                                   (0)
#define  SB2_SFC_WP_write_en3_mask                                               (0x00000080)
#define  SB2_SFC_WP_spi_csn_inv_mask                                             (0x00000040)
#define  SB2_SFC_WP_write_en2_mask                                               (0x00000020)
#define  SB2_SFC_WP_ce_n_mask                                                    (0x00000010)
#define  SB2_SFC_WP_write_en1_mask                                               (0x00000002)
#define  SB2_SFC_WP_wp_n_mask                                                    (0x00000001)
#define  SB2_SFC_WP_write_en3(data)                                              (0x00000080&((data)<<7))
#define  SB2_SFC_WP_spi_csn_inv(data)                                            (0x00000040&((data)<<6))
#define  SB2_SFC_WP_write_en2(data)                                              (0x00000020&((data)<<5))
#define  SB2_SFC_WP_ce_n(data)                                                   (0x00000010&((data)<<4))
#define  SB2_SFC_WP_write_en1(data)                                              (0x00000002&((data)<<1))
#define  SB2_SFC_WP_wp_n(data)                                                   (0x00000001&(data))
#define  SB2_SFC_WP_get_write_en3(data)                                          ((0x00000080&(data))>>7)
#define  SB2_SFC_WP_get_spi_csn_inv(data)                                        ((0x00000040&(data))>>6)
#define  SB2_SFC_WP_get_write_en2(data)                                          ((0x00000020&(data))>>5)
#define  SB2_SFC_WP_get_ce_n(data)                                               ((0x00000010&(data))>>4)
#define  SB2_SFC_WP_get_write_en1(data)                                          ((0x00000002&(data))>>1)
#define  SB2_SFC_WP_get_wp_n(data)                                               (0x00000001&(data))

#define  SB2_SFC_POS_LATCH                                                      0x1801A814
#define  SB2_SFC_POS_LATCH_reg_addr                                              "0xB801A814"
#define  SB2_SFC_POS_LATCH_reg                                                   0xB801A814
#define  SB2_SFC_POS_LATCH_inst_addr                                             "0x0097"
#define  set_SB2_SFC_POS_LATCH_reg(data)                                         (*((volatile unsigned int*)SB2_SFC_POS_LATCH_reg)=data)
#define  get_SB2_SFC_POS_LATCH_reg                                               (*((volatile unsigned int*)SB2_SFC_POS_LATCH_reg))
#define  SB2_SFC_POS_LATCH_delay_sel_shift                                       (1)
#define  SB2_SFC_POS_LATCH_pos_latch_shift                                       (0)
#define  SB2_SFC_POS_LATCH_delay_sel_mask                                        (0x0000001E)
#define  SB2_SFC_POS_LATCH_pos_latch_mask                                        (0x00000001)
#define  SB2_SFC_POS_LATCH_delay_sel(data)                                       (0x0000001E&((data)<<1))
#define  SB2_SFC_POS_LATCH_pos_latch(data)                                       (0x00000001&(data))
#define  SB2_SFC_POS_LATCH_get_delay_sel(data)                                   ((0x0000001E&(data))>>1)
#define  SB2_SFC_POS_LATCH_get_pos_latch(data)                                   (0x00000001&(data))

#define  SB2_SFC_WAIT_WR                                                        0x1801A818
#define  SB2_SFC_WAIT_WR_reg_addr                                                "0xB801A818"
#define  SB2_SFC_WAIT_WR_reg                                                     0xB801A818
#define  SB2_SFC_WAIT_WR_inst_addr                                               "0x0098"
#define  set_SB2_SFC_WAIT_WR_reg(data)                                           (*((volatile unsigned int*)SB2_SFC_WAIT_WR_reg)=data)
#define  get_SB2_SFC_WAIT_WR_reg                                                 (*((volatile unsigned int*)SB2_SFC_WAIT_WR_reg))
#define  SB2_SFC_WAIT_WR_wt_prog_done_shift                                      (8)
#define  SB2_SFC_WAIT_WR_rdsr_op_shift                                           (0)
#define  SB2_SFC_WAIT_WR_wt_prog_done_mask                                       (0x00000100)
#define  SB2_SFC_WAIT_WR_rdsr_op_mask                                            (0x000000FF)
#define  SB2_SFC_WAIT_WR_wt_prog_done(data)                                      (0x00000100&((data)<<8))
#define  SB2_SFC_WAIT_WR_rdsr_op(data)                                           (0x000000FF&(data))
#define  SB2_SFC_WAIT_WR_get_wt_prog_done(data)                                  ((0x00000100&(data))>>8)
#define  SB2_SFC_WAIT_WR_get_rdsr_op(data)                                       (0x000000FF&(data))

#define  SB2_SFC_EN_WR                                                          0x1801A81C
#define  SB2_SFC_EN_WR_reg_addr                                                  "0xB801A81C"
#define  SB2_SFC_EN_WR_reg                                                       0xB801A81C
#define  SB2_SFC_EN_WR_inst_addr                                                 "0x0099"
#define  set_SB2_SFC_EN_WR_reg(data)                                             (*((volatile unsigned int*)SB2_SFC_EN_WR_reg)=data)
#define  get_SB2_SFC_EN_WR_reg                                                   (*((volatile unsigned int*)SB2_SFC_EN_WR_reg))
#define  SB2_SFC_EN_WR_wt_prog_en_shift                                          (8)
#define  SB2_SFC_EN_WR_wr_en_op_shift                                            (0)
#define  SB2_SFC_EN_WR_wt_prog_en_mask                                           (0x00000100)
#define  SB2_SFC_EN_WR_wr_en_op_mask                                             (0x000000FF)
#define  SB2_SFC_EN_WR_wt_prog_en(data)                                          (0x00000100&((data)<<8))
#define  SB2_SFC_EN_WR_wr_en_op(data)                                            (0x000000FF&(data))
#define  SB2_SFC_EN_WR_get_wt_prog_en(data)                                      ((0x00000100&(data))>>8)
#define  SB2_SFC_EN_WR_get_wr_en_op(data)                                        (0x000000FF&(data))

#define  SB2_SFC_OPCODE2                                                        0x1801A828
#define  SB2_SFC_OPCODE2_reg_addr                                                "0xB801A828"
#define  SB2_SFC_OPCODE2_reg                                                     0xB801A828
#define  SB2_SFC_OPCODE2_inst_addr                                               "0x009A"
#define  set_SB2_SFC_OPCODE2_reg(data)                                           (*((volatile unsigned int*)SB2_SFC_OPCODE2_reg)=data)
#define  get_SB2_SFC_OPCODE2_reg                                                 (*((volatile unsigned int*)SB2_SFC_OPCODE2_reg))
#define  SB2_SFC_OPCODE2_adr4byte_en_shift                                       (0)
#define  SB2_SFC_OPCODE2_adr4byte_en_mask                                        (0x00000001)
#define  SB2_SFC_OPCODE2_adr4byte_en(data)                                       (0x00000001&(data))
#define  SB2_SFC_OPCODE2_get_adr4byte_en(data)                                   (0x00000001&(data))

#define  SB2_SPI_NAND_0                                                         0x1801A82C
#define  SB2_SPI_NAND_0_reg_addr                                                 "0xB801A82C"
#define  SB2_SPI_NAND_0_reg                                                      0xB801A82C
#define  SB2_SPI_NAND_0_inst_addr                                                "0x009B"
#define  set_SB2_SPI_NAND_0_reg(data)                                            (*((volatile unsigned int*)SB2_SPI_NAND_0_reg)=data)
#define  get_SB2_SPI_NAND_0_reg                                                  (*((volatile unsigned int*)SB2_SPI_NAND_0_reg))
#define  SB2_SPI_NAND_0_spi_nand_flash_addr_cnt_shift                            (26)
#define  SB2_SPI_NAND_0_spi_nand_flash_en_shift                                  (25)
#define  SB2_SPI_NAND_0_spi_nand_flash_addr_cnt_mask                             (0x0C000000)
#define  SB2_SPI_NAND_0_spi_nand_flash_en_mask                                   (0x02000000)
#define  SB2_SPI_NAND_0_spi_nand_flash_addr_cnt(data)                            (0x0C000000&((data)<<26))
#define  SB2_SPI_NAND_0_spi_nand_flash_en(data)                                  (0x02000000&((data)<<25))
#define  SB2_SPI_NAND_0_get_spi_nand_flash_addr_cnt(data)                        ((0x0C000000&(data))>>26)
#define  SB2_SPI_NAND_0_get_spi_nand_flash_en(data)                              ((0x02000000&(data))>>25)

#define  SB2_security_lock                                                      0x1801A900
#define  SB2_security_lock_reg_addr                                              "0xB801A900"
#define  SB2_security_lock_reg                                                   0xB801A900
#define  SB2_security_lock_inst_addr                                             "0x009C"
#define  set_SB2_security_lock_reg(data)                                         (*((volatile unsigned int*)SB2_security_lock_reg)=data)
#define  get_SB2_security_lock_reg                                               (*((volatile unsigned int*)SB2_security_lock_reg))
#define  SB2_security_lock_otp_rtk_chip_id_lock_shift                            (22)
#define  SB2_security_lock_otp_rw_par_reg_lock_shift                             (15)
#define  SB2_security_lock_cpu_boot_addr_remap_reg_lock_shift                    (14)
#define  SB2_security_lock_cp_cw_ctrl_reg_lock_shift                             (13)
#define  SB2_security_lock_otp_rosc_reg_lock_shift                               (12)
#define  SB2_security_lock_dc_ibu_reg_lock_shift                                 (11)
#define  SB2_security_lock_ddr_scramble_protection_reg_lock_shift                (8)
#define  SB2_security_lock_dc_sys_di_sram_mode_reg_lock_shift                    (6)
#define  SB2_security_lock_rom_kcpu_reg_lock_shift                               (5)
#define  SB2_security_lock_rom_nagra_region_read_reg_lock_shift                  (4)
#define  SB2_security_lock_storage_protection_reg_lock_shift                     (3)
#define  SB2_security_lock_secure_tp_reg_lock_shift                              (2)
#define  SB2_security_lock_secure_crt_reg_lock_shift                             (1)
#define  SB2_security_lock_secure_reg_lock_shift                                 (0)
#define  SB2_security_lock_otp_rtk_chip_id_lock_mask                             (0x00400000)
#define  SB2_security_lock_otp_rw_par_reg_lock_mask                              (0x00008000)
#define  SB2_security_lock_cpu_boot_addr_remap_reg_lock_mask                     (0x00004000)
#define  SB2_security_lock_cp_cw_ctrl_reg_lock_mask                              (0x00002000)
#define  SB2_security_lock_otp_rosc_reg_lock_mask                                (0x00001000)
#define  SB2_security_lock_dc_ibu_reg_lock_mask                                  (0x00000800)
#define  SB2_security_lock_ddr_scramble_protection_reg_lock_mask                 (0x00000100)
#define  SB2_security_lock_dc_sys_di_sram_mode_reg_lock_mask                     (0x00000040)
#define  SB2_security_lock_rom_kcpu_reg_lock_mask                                (0x00000020)
#define  SB2_security_lock_rom_nagra_region_read_reg_lock_mask                   (0x00000010)
#define  SB2_security_lock_storage_protection_reg_lock_mask                      (0x00000008)
#define  SB2_security_lock_secure_tp_reg_lock_mask                               (0x00000004)
#define  SB2_security_lock_secure_crt_reg_lock_mask                              (0x00000002)
#define  SB2_security_lock_secure_reg_lock_mask                                  (0x00000001)
#define  SB2_security_lock_otp_rtk_chip_id_lock(data)                            (0x00400000&((data)<<22))
#define  SB2_security_lock_otp_rw_par_reg_lock(data)                             (0x00008000&((data)<<15))
#define  SB2_security_lock_cpu_boot_addr_remap_reg_lock(data)                    (0x00004000&((data)<<14))
#define  SB2_security_lock_cp_cw_ctrl_reg_lock(data)                             (0x00002000&((data)<<13))
#define  SB2_security_lock_otp_rosc_reg_lock(data)                               (0x00001000&((data)<<12))
#define  SB2_security_lock_dc_ibu_reg_lock(data)                                 (0x00000800&((data)<<11))
#define  SB2_security_lock_ddr_scramble_protection_reg_lock(data)                (0x00000100&((data)<<8))
#define  SB2_security_lock_dc_sys_di_sram_mode_reg_lock(data)                    (0x00000040&((data)<<6))
#define  SB2_security_lock_rom_kcpu_reg_lock(data)                               (0x00000020&((data)<<5))
#define  SB2_security_lock_rom_nagra_region_read_reg_lock(data)                  (0x00000010&((data)<<4))
#define  SB2_security_lock_storage_protection_reg_lock(data)                     (0x00000008&((data)<<3))
#define  SB2_security_lock_secure_tp_reg_lock(data)                              (0x00000004&((data)<<2))
#define  SB2_security_lock_secure_crt_reg_lock(data)                             (0x00000002&((data)<<1))
#define  SB2_security_lock_secure_reg_lock(data)                                 (0x00000001&(data))
#define  SB2_security_lock_get_otp_rtk_chip_id_lock(data)                        ((0x00400000&(data))>>22)
#define  SB2_security_lock_get_otp_rw_par_reg_lock(data)                         ((0x00008000&(data))>>15)
#define  SB2_security_lock_get_cpu_boot_addr_remap_reg_lock(data)                ((0x00004000&(data))>>14)
#define  SB2_security_lock_get_cp_cw_ctrl_reg_lock(data)                         ((0x00002000&(data))>>13)
#define  SB2_security_lock_get_otp_rosc_reg_lock(data)                           ((0x00001000&(data))>>12)
#define  SB2_security_lock_get_dc_ibu_reg_lock(data)                             ((0x00000800&(data))>>11)
#define  SB2_security_lock_get_ddr_scramble_protection_reg_lock(data)            ((0x00000100&(data))>>8)
#define  SB2_security_lock_get_dc_sys_di_sram_mode_reg_lock(data)                ((0x00000040&(data))>>6)
#define  SB2_security_lock_get_rom_kcpu_reg_lock(data)                           ((0x00000020&(data))>>5)
#define  SB2_security_lock_get_rom_nagra_region_read_reg_lock(data)              ((0x00000010&(data))>>4)
#define  SB2_security_lock_get_storage_protection_reg_lock(data)                 ((0x00000008&(data))>>3)
#define  SB2_security_lock_get_secure_tp_reg_lock(data)                          ((0x00000004&(data))>>2)
#define  SB2_security_lock_get_secure_crt_reg_lock(data)                         ((0x00000002&(data))>>1)
#define  SB2_security_lock_get_secure_reg_lock(data)                             (0x00000001&(data))

#define  SB2_security                                                           0x1801A904
#define  SB2_security_reg_addr                                                   "0xB801A904"
#define  SB2_security_reg                                                        0xB801A904
#define  SB2_security_inst_addr                                                  "0x009D"
#define  set_SB2_security_reg(data)                                              (*((volatile unsigned int*)SB2_security_reg)=data)
#define  get_SB2_security_reg                                                    (*((volatile unsigned int*)SB2_security_reg))
#define  SB2_security_scpu_w_rtc_en_shift                                        (11)
#define  SB2_security_cp_scpu_key_reg_ren_n_shift                                (10)
#define  SB2_security_scpu_w_rng_n_shift                                         (9)
#define  SB2_security_kcpu_rbus_region1_en_shift                                 (7)
#define  SB2_security_kcpu_rbus_region2_en_shift                                 (6)
#define  SB2_security_scpu_rwen_reg_md_vcpu_n_shift                              (3)
#define  SB2_security_scpu_rwen_reg_ve_n_shift                                   (2)
#define  SB2_security_scpu_rwen_reg_vde_n_shift                                  (1)
#define  SB2_security_scpu_rwen_reg_ae_ade_n_shift                               (0)
#define  SB2_security_scpu_w_rtc_en_mask                                         (0x00000800)
#define  SB2_security_cp_scpu_key_reg_ren_n_mask                                 (0x00000400)
#define  SB2_security_scpu_w_rng_n_mask                                          (0x00000200)
#define  SB2_security_kcpu_rbus_region1_en_mask                                  (0x00000080)
#define  SB2_security_kcpu_rbus_region2_en_mask                                  (0x00000040)
#define  SB2_security_scpu_rwen_reg_md_vcpu_n_mask                               (0x00000008)
#define  SB2_security_scpu_rwen_reg_ve_n_mask                                    (0x00000004)
#define  SB2_security_scpu_rwen_reg_vde_n_mask                                   (0x00000002)
#define  SB2_security_scpu_rwen_reg_ae_ade_n_mask                                (0x00000001)
#define  SB2_security_scpu_w_rtc_en(data)                                        (0x00000800&((data)<<11))
#define  SB2_security_cp_scpu_key_reg_ren_n(data)                                (0x00000400&((data)<<10))
#define  SB2_security_scpu_w_rng_n(data)                                         (0x00000200&((data)<<9))
#define  SB2_security_kcpu_rbus_region1_en(data)                                 (0x00000080&((data)<<7))
#define  SB2_security_kcpu_rbus_region2_en(data)                                 (0x00000040&((data)<<6))
#define  SB2_security_scpu_rwen_reg_md_vcpu_n(data)                              (0x00000008&((data)<<3))
#define  SB2_security_scpu_rwen_reg_ve_n(data)                                   (0x00000004&((data)<<2))
#define  SB2_security_scpu_rwen_reg_vde_n(data)                                  (0x00000002&((data)<<1))
#define  SB2_security_scpu_rwen_reg_ae_ade_n(data)                               (0x00000001&(data))
#define  SB2_security_get_scpu_w_rtc_en(data)                                    ((0x00000800&(data))>>11)
#define  SB2_security_get_cp_scpu_key_reg_ren_n(data)                            ((0x00000400&(data))>>10)
#define  SB2_security_get_scpu_w_rng_n(data)                                     ((0x00000200&(data))>>9)
#define  SB2_security_get_kcpu_rbus_region1_en(data)                             ((0x00000080&(data))>>7)
#define  SB2_security_get_kcpu_rbus_region2_en(data)                             ((0x00000040&(data))>>6)
#define  SB2_security_get_scpu_rwen_reg_md_vcpu_n(data)                          ((0x00000008&(data))>>3)
#define  SB2_security_get_scpu_rwen_reg_ve_n(data)                               ((0x00000004&(data))>>2)
#define  SB2_security_get_scpu_rwen_reg_vde_n(data)                              ((0x00000002&(data))>>1)
#define  SB2_security_get_scpu_rwen_reg_ae_ade_n(data)                           (0x00000001&(data))

#define  SB2_KCPU_RBUS_PROTECT1                                                 0x1801A908
#define  SB2_KCPU_RBUS_PROTECT1_reg_addr                                         "0xB801A908"
#define  SB2_KCPU_RBUS_PROTECT1_reg                                              0xB801A908
#define  SB2_KCPU_RBUS_PROTECT1_inst_addr                                        "0x009E"
#define  set_SB2_KCPU_RBUS_PROTECT1_reg(data)                                    (*((volatile unsigned int*)SB2_KCPU_RBUS_PROTECT1_reg)=data)
#define  get_SB2_KCPU_RBUS_PROTECT1_reg                                          (*((volatile unsigned int*)SB2_KCPU_RBUS_PROTECT1_reg))
#define  SB2_KCPU_RBUS_PROTECT1_start_addr1_shift                                (2)
#define  SB2_KCPU_RBUS_PROTECT1_start_addr1_mask                                 (0x001FFFFC)
#define  SB2_KCPU_RBUS_PROTECT1_start_addr1(data)                                (0x001FFFFC&((data)<<2))
#define  SB2_KCPU_RBUS_PROTECT1_get_start_addr1(data)                            ((0x001FFFFC&(data))>>2)

#define  SB2_KCPU_RBUS_PROTECT2                                                 0x1801A90C
#define  SB2_KCPU_RBUS_PROTECT2_reg_addr                                         "0xB801A90C"
#define  SB2_KCPU_RBUS_PROTECT2_reg                                              0xB801A90C
#define  SB2_KCPU_RBUS_PROTECT2_inst_addr                                        "0x009F"
#define  set_SB2_KCPU_RBUS_PROTECT2_reg(data)                                    (*((volatile unsigned int*)SB2_KCPU_RBUS_PROTECT2_reg)=data)
#define  get_SB2_KCPU_RBUS_PROTECT2_reg                                          (*((volatile unsigned int*)SB2_KCPU_RBUS_PROTECT2_reg))
#define  SB2_KCPU_RBUS_PROTECT2_end_addr1_shift                                  (2)
#define  SB2_KCPU_RBUS_PROTECT2_end_addr1_mask                                   (0x001FFFFC)
#define  SB2_KCPU_RBUS_PROTECT2_end_addr1(data)                                  (0x001FFFFC&((data)<<2))
#define  SB2_KCPU_RBUS_PROTECT2_get_end_addr1(data)                              ((0x001FFFFC&(data))>>2)

#define  SB2_KCPU_RBUS_PROTECT3                                                 0x1801A910
#define  SB2_KCPU_RBUS_PROTECT3_reg_addr                                         "0xB801A910"
#define  SB2_KCPU_RBUS_PROTECT3_reg                                              0xB801A910
#define  SB2_KCPU_RBUS_PROTECT3_inst_addr                                        "0x00A0"
#define  set_SB2_KCPU_RBUS_PROTECT3_reg(data)                                    (*((volatile unsigned int*)SB2_KCPU_RBUS_PROTECT3_reg)=data)
#define  get_SB2_KCPU_RBUS_PROTECT3_reg                                          (*((volatile unsigned int*)SB2_KCPU_RBUS_PROTECT3_reg))
#define  SB2_KCPU_RBUS_PROTECT3_start_addr2_shift                                (2)
#define  SB2_KCPU_RBUS_PROTECT3_start_addr2_mask                                 (0x001FFFFC)
#define  SB2_KCPU_RBUS_PROTECT3_start_addr2(data)                                (0x001FFFFC&((data)<<2))
#define  SB2_KCPU_RBUS_PROTECT3_get_start_addr2(data)                            ((0x001FFFFC&(data))>>2)

#define  SB2_KCPU_RBUS_PROTECT4                                                 0x1801A914
#define  SB2_KCPU_RBUS_PROTECT4_reg_addr                                         "0xB801A914"
#define  SB2_KCPU_RBUS_PROTECT4_reg                                              0xB801A914
#define  SB2_KCPU_RBUS_PROTECT4_inst_addr                                        "0x00A1"
#define  set_SB2_KCPU_RBUS_PROTECT4_reg(data)                                    (*((volatile unsigned int*)SB2_KCPU_RBUS_PROTECT4_reg)=data)
#define  get_SB2_KCPU_RBUS_PROTECT4_reg                                          (*((volatile unsigned int*)SB2_KCPU_RBUS_PROTECT4_reg))
#define  SB2_KCPU_RBUS_PROTECT4_end_addr2_shift                                  (2)
#define  SB2_KCPU_RBUS_PROTECT4_end_addr2_mask                                   (0x001FFFFC)
#define  SB2_KCPU_RBUS_PROTECT4_end_addr2(data)                                  (0x001FFFFC&((data)<<2))
#define  SB2_KCPU_RBUS_PROTECT4_get_end_addr2(data)                              ((0x001FFFFC&(data))>>2)

#define  SB2_security_crt                                                       0x1801A918
#define  SB2_security_crt_reg_addr                                               "0xB801A918"
#define  SB2_security_crt_reg                                                    0xB801A918
#define  SB2_security_crt_inst_addr                                              "0x00A2"
#define  set_SB2_security_crt_reg(data)                                          (*((volatile unsigned int*)SB2_security_crt_reg)=data)
#define  get_SB2_security_crt_reg                                                (*((volatile unsigned int*)SB2_security_crt_reg))
#define  SB2_security_crt_pmm_reg_rw_sel_shift                                   (1)
#define  SB2_security_crt_wdog_reg_rw_sel_shift                                  (0)
#define  SB2_security_crt_pmm_reg_rw_sel_mask                                    (0x00000002)
#define  SB2_security_crt_wdog_reg_rw_sel_mask                                   (0x00000001)
#define  SB2_security_crt_pmm_reg_rw_sel(data)                                   (0x00000002&((data)<<1))
#define  SB2_security_crt_wdog_reg_rw_sel(data)                                  (0x00000001&(data))
#define  SB2_security_crt_get_pmm_reg_rw_sel(data)                               ((0x00000002&(data))>>1)
#define  SB2_security_crt_get_wdog_reg_rw_sel(data)                              (0x00000001&(data))

#define  SB2_security_tp                                                        0x1801A91C
#define  SB2_security_tp_reg_addr                                                "0xB801A91C"
#define  SB2_security_tp_reg                                                     0xB801A91C
#define  SB2_security_tp_inst_addr                                               "0x00A3"
#define  set_SB2_security_tp_reg(data)                                           (*((volatile unsigned int*)SB2_security_tp_reg)=data)
#define  get_SB2_security_tp_reg                                                 (*((volatile unsigned int*)SB2_security_tp_reg))
#define  SB2_security_tp_scpu_wen_tp_cw_reg_n_shift                              (1)
#define  SB2_security_tp_scpu_rwen_reg_tp_n_shift                                (0)
#define  SB2_security_tp_scpu_wen_tp_cw_reg_n_mask                               (0x00000002)
#define  SB2_security_tp_scpu_rwen_reg_tp_n_mask                                 (0x00000001)
#define  SB2_security_tp_scpu_wen_tp_cw_reg_n(data)                              (0x00000002&((data)<<1))
#define  SB2_security_tp_scpu_rwen_reg_tp_n(data)                                (0x00000001&(data))
#define  SB2_security_tp_get_scpu_wen_tp_cw_reg_n(data)                          ((0x00000002&(data))>>1)
#define  SB2_security_tp_get_scpu_rwen_reg_tp_n(data)                            (0x00000001&(data))

#define  SB2_security_flash                                                     0x1801A920
#define  SB2_security_flash_reg_addr                                             "0xB801A920"
#define  SB2_security_flash_reg                                                  0xB801A920
#define  SB2_security_flash_inst_addr                                            "0x00A4"
#define  set_SB2_security_flash_reg(data)                                        (*((volatile unsigned int*)SB2_security_flash_reg)=data)
#define  get_SB2_security_flash_reg                                              (*((volatile unsigned int*)SB2_security_flash_reg))
#define  SB2_security_flash_flash_addr_protect1_en_shift                         (4)
#define  SB2_security_flash_flash_addr_protect2_en_shift                         (3)
#define  SB2_security_flash_flash_addr_bit_set_shift                             (0)
#define  SB2_security_flash_flash_addr_protect1_en_mask                          (0x00000010)
#define  SB2_security_flash_flash_addr_protect2_en_mask                          (0x00000008)
#define  SB2_security_flash_flash_addr_bit_set_mask                              (0x00000007)
#define  SB2_security_flash_flash_addr_protect1_en(data)                         (0x00000010&((data)<<4))
#define  SB2_security_flash_flash_addr_protect2_en(data)                         (0x00000008&((data)<<3))
#define  SB2_security_flash_flash_addr_bit_set(data)                             (0x00000007&(data))
#define  SB2_security_flash_get_flash_addr_protect1_en(data)                     ((0x00000010&(data))>>4)
#define  SB2_security_flash_get_flash_addr_protect2_en(data)                     ((0x00000008&(data))>>3)
#define  SB2_security_flash_get_flash_addr_bit_set(data)                         (0x00000007&(data))

#define  SB2_FLASH_PROTECT1                                                     0x1801A924
#define  SB2_FLASH_PROTECT1_reg_addr                                             "0xB801A924"
#define  SB2_FLASH_PROTECT1_reg                                                  0xB801A924
#define  SB2_FLASH_PROTECT1_inst_addr                                            "0x00A5"
#define  set_SB2_FLASH_PROTECT1_reg(data)                                        (*((volatile unsigned int*)SB2_FLASH_PROTECT1_reg)=data)
#define  get_SB2_FLASH_PROTECT1_reg                                              (*((volatile unsigned int*)SB2_FLASH_PROTECT1_reg))
#define  SB2_FLASH_PROTECT1_flash_protect1_start_addr_shift                      (8)
#define  SB2_FLASH_PROTECT1_flash_protect1_start_addr_mask                       (0x01FFFF00)
#define  SB2_FLASH_PROTECT1_flash_protect1_start_addr(data)                      (0x01FFFF00&((data)<<8))
#define  SB2_FLASH_PROTECT1_get_flash_protect1_start_addr(data)                  ((0x01FFFF00&(data))>>8)

#define  SB2_FLASH_PROTECT2                                                     0x1801A928
#define  SB2_FLASH_PROTECT2_reg_addr                                             "0xB801A928"
#define  SB2_FLASH_PROTECT2_reg                                                  0xB801A928
#define  SB2_FLASH_PROTECT2_inst_addr                                            "0x00A6"
#define  set_SB2_FLASH_PROTECT2_reg(data)                                        (*((volatile unsigned int*)SB2_FLASH_PROTECT2_reg)=data)
#define  get_SB2_FLASH_PROTECT2_reg                                              (*((volatile unsigned int*)SB2_FLASH_PROTECT2_reg))
#define  SB2_FLASH_PROTECT2_flash_protect1_end_addr_shift                        (8)
#define  SB2_FLASH_PROTECT2_flash_protect1_end_addr_mask                         (0x01FFFF00)
#define  SB2_FLASH_PROTECT2_flash_protect1_end_addr(data)                        (0x01FFFF00&((data)<<8))
#define  SB2_FLASH_PROTECT2_get_flash_protect1_end_addr(data)                    ((0x01FFFF00&(data))>>8)

#define  SB2_FLASH_PROTECT3                                                     0x1801A92C
#define  SB2_FLASH_PROTECT3_reg_addr                                             "0xB801A92C"
#define  SB2_FLASH_PROTECT3_reg                                                  0xB801A92C
#define  SB2_FLASH_PROTECT3_inst_addr                                            "0x00A7"
#define  set_SB2_FLASH_PROTECT3_reg(data)                                        (*((volatile unsigned int*)SB2_FLASH_PROTECT3_reg)=data)
#define  get_SB2_FLASH_PROTECT3_reg                                              (*((volatile unsigned int*)SB2_FLASH_PROTECT3_reg))
#define  SB2_FLASH_PROTECT3_flash_protect2_start_addr_shift                      (8)
#define  SB2_FLASH_PROTECT3_flash_protect2_start_addr_mask                       (0x01FFFF00)
#define  SB2_FLASH_PROTECT3_flash_protect2_start_addr(data)                      (0x01FFFF00&((data)<<8))
#define  SB2_FLASH_PROTECT3_get_flash_protect2_start_addr(data)                  ((0x01FFFF00&(data))>>8)

#define  SB2_FLASH_PROTECT4                                                     0x1801A930
#define  SB2_FLASH_PROTECT4_reg_addr                                             "0xB801A930"
#define  SB2_FLASH_PROTECT4_reg                                                  0xB801A930
#define  SB2_FLASH_PROTECT4_inst_addr                                            "0x00A8"
#define  set_SB2_FLASH_PROTECT4_reg(data)                                        (*((volatile unsigned int*)SB2_FLASH_PROTECT4_reg)=data)
#define  get_SB2_FLASH_PROTECT4_reg                                              (*((volatile unsigned int*)SB2_FLASH_PROTECT4_reg))
#define  SB2_FLASH_PROTECT4_flash_protect2_end_addr_shift                        (8)
#define  SB2_FLASH_PROTECT4_flash_protect2_end_addr_mask                         (0x01FFFF00)
#define  SB2_FLASH_PROTECT4_flash_protect2_end_addr(data)                        (0x01FFFF00&((data)<<8))
#define  SB2_FLASH_PROTECT4_get_flash_protect2_end_addr(data)                    ((0x01FFFF00&(data))>>8)

#define  SB2_security_rom                                                       0x1801A934
#define  SB2_security_rom_reg_addr                                               "0xB801A934"
#define  SB2_security_rom_reg                                                    0xB801A934
#define  SB2_security_rom_inst_addr                                              "0x00A9"
#define  set_SB2_security_rom_reg(data)                                          (*((volatile unsigned int*)SB2_security_rom_reg)=data)
#define  get_SB2_security_rom_reg                                                (*((volatile unsigned int*)SB2_security_rom_reg))
#define  SB2_security_rom_rom_kcpu_region_staddr_shift                           (16)
#define  SB2_security_rom_rom_kcpu_region_endaddr_shift                          (1)
#define  SB2_security_rom_rom_kcpu_region_en_shift                               (0)
#define  SB2_security_rom_rom_kcpu_region_staddr_mask                            (0x7FFF0000)
#define  SB2_security_rom_rom_kcpu_region_endaddr_mask                           (0x0000FFFE)
#define  SB2_security_rom_rom_kcpu_region_en_mask                                (0x00000001)
#define  SB2_security_rom_rom_kcpu_region_staddr(data)                           (0x7FFF0000&((data)<<16))
#define  SB2_security_rom_rom_kcpu_region_endaddr(data)                          (0x0000FFFE&((data)<<1))
#define  SB2_security_rom_rom_kcpu_region_en(data)                               (0x00000001&(data))
#define  SB2_security_rom_get_rom_kcpu_region_staddr(data)                       ((0x7FFF0000&(data))>>16)
#define  SB2_security_rom_get_rom_kcpu_region_endaddr(data)                      ((0x0000FFFE&(data))>>1)
#define  SB2_security_rom_get_rom_kcpu_region_en(data)                           (0x00000001&(data))

#define  SB2_BOOT_REMAP1                                                        0x1801A938
#define  SB2_BOOT_REMAP1_reg_addr                                                "0xB801A938"
#define  SB2_BOOT_REMAP1_reg                                                     0xB801A938
#define  SB2_BOOT_REMAP1_inst_addr                                               "0x00AA"
#define  set_SB2_BOOT_REMAP1_reg(data)                                           (*((volatile unsigned int*)SB2_BOOT_REMAP1_reg)=data)
#define  get_SB2_BOOT_REMAP1_reg                                                 (*((volatile unsigned int*)SB2_BOOT_REMAP1_reg))
#define  SB2_BOOT_REMAP1_acpu_boot_addr_remap_shift                              (16)
#define  SB2_BOOT_REMAP1_acpu_boot_addr_remap_mask                               (0xFFFF0000)
#define  SB2_BOOT_REMAP1_acpu_boot_addr_remap(data)                              (0xFFFF0000&((data)<<16))
#define  SB2_BOOT_REMAP1_get_acpu_boot_addr_remap(data)                          ((0xFFFF0000&(data))>>16)

#define  SB2_BOOT_REMAP2                                                        0x1801A93C
#define  SB2_BOOT_REMAP2_reg_addr                                                "0xB801A93C"
#define  SB2_BOOT_REMAP2_reg                                                     0xB801A93C
#define  SB2_BOOT_REMAP2_inst_addr                                               "0x00AB"
#define  set_SB2_BOOT_REMAP2_reg(data)                                           (*((volatile unsigned int*)SB2_BOOT_REMAP2_reg)=data)
#define  get_SB2_BOOT_REMAP2_reg                                                 (*((volatile unsigned int*)SB2_BOOT_REMAP2_reg))
#define  SB2_BOOT_REMAP2_vcpu_boot_addr_remap_shift                              (16)
#define  SB2_BOOT_REMAP2_vcpu_boot_addr_remap_mask                               (0xFFFF0000)
#define  SB2_BOOT_REMAP2_vcpu_boot_addr_remap(data)                              (0xFFFF0000&((data)<<16))
#define  SB2_BOOT_REMAP2_get_vcpu_boot_addr_remap(data)                          ((0xFFFF0000&(data))>>16)

#define  SB2_BOOT_REMAP3                                                        0x1801A940
#define  SB2_BOOT_REMAP3_reg_addr                                                "0xB801A940"
#define  SB2_BOOT_REMAP3_reg                                                     0xB801A940
#define  SB2_BOOT_REMAP3_inst_addr                                               "0x00AC"
#define  set_SB2_BOOT_REMAP3_reg(data)                                           (*((volatile unsigned int*)SB2_BOOT_REMAP3_reg)=data)
#define  get_SB2_BOOT_REMAP3_reg                                                 (*((volatile unsigned int*)SB2_BOOT_REMAP3_reg))
#define  SB2_BOOT_REMAP3_vcpu2_boot_addr_remap_shift                             (16)
#define  SB2_BOOT_REMAP3_vcpu2_boot_addr_remap_mask                              (0xFFFF0000)
#define  SB2_BOOT_REMAP3_vcpu2_boot_addr_remap(data)                             (0xFFFF0000&((data)<<16))
#define  SB2_BOOT_REMAP3_get_vcpu2_boot_addr_remap(data)                         ((0xFFFF0000&(data))>>16)

#define  SB2_BOOT_REMAP4                                                        0x1801A944
#define  SB2_BOOT_REMAP4_reg_addr                                                "0xB801A944"
#define  SB2_BOOT_REMAP4_reg                                                     0xB801A944
#define  SB2_BOOT_REMAP4_inst_addr                                               "0x00AD"
#define  set_SB2_BOOT_REMAP4_reg(data)                                           (*((volatile unsigned int*)SB2_BOOT_REMAP4_reg)=data)
#define  get_SB2_BOOT_REMAP4_reg                                                 (*((volatile unsigned int*)SB2_BOOT_REMAP4_reg))
#define  SB2_BOOT_REMAP4_acpu2_boot_addr_remap_shift                             (16)
#define  SB2_BOOT_REMAP4_acpu2_boot_addr_remap_mask                              (0xFFFF0000)
#define  SB2_BOOT_REMAP4_acpu2_boot_addr_remap(data)                             (0xFFFF0000&((data)<<16))
#define  SB2_BOOT_REMAP4_get_acpu2_boot_addr_remap(data)                         ((0xFFFF0000&(data))>>16)

#define  SB2_security_otp_rw_par                                                0x1801A950
#define  SB2_security_otp_rw_par_reg_addr                                        "0xB801A950"
#define  SB2_security_otp_rw_par_reg                                             0xB801A950
#define  SB2_security_otp_rw_par_inst_addr                                       "0x00AE"
#define  set_SB2_security_otp_rw_par_reg(data)                                   (*((volatile unsigned int*)SB2_security_otp_rw_par_reg)=data)
#define  get_SB2_security_otp_rw_par_reg                                         (*((volatile unsigned int*)SB2_security_otp_rw_par_reg))
#define  SB2_security_otp_rw_par_scpu_w_otp_reg_n_shift                          (0)
#define  SB2_security_otp_rw_par_scpu_w_otp_reg_n_mask                           (0x00000001)
#define  SB2_security_otp_rw_par_scpu_w_otp_reg_n(data)                          (0x00000001&(data))
#define  SB2_security_otp_rw_par_get_scpu_w_otp_reg_n(data)                      (0x00000001&(data))

#define  SB2_ctrl_reg                                                           0x1801A960
#define  SB2_ctrl_reg_reg_addr                                                   "0xB801A960"
#define  SB2_ctrl_reg_reg                                                        0xB801A960
#define  SB2_ctrl_reg_inst_addr                                                  "0x00AF"
#define  set_SB2_ctrl_reg_reg(data)                                              (*((volatile unsigned int*)SB2_ctrl_reg_reg)=data)
#define  get_SB2_ctrl_reg_reg                                                    (*((volatile unsigned int*)SB2_ctrl_reg_reg))
#define  SB2_ctrl_reg_dispd_dc2h_security_protect_shift                          (30)
#define  SB2_ctrl_reg_memc_security_protect_shift                                (29)
#define  SB2_ctrl_reg_dispd_od_security_protect_shift                            (28)
#define  SB2_ctrl_reg_dispim_i3ddma_security_protect_shift                       (27)
#define  SB2_ctrl_reg_dispim_m_security_protect_shift                            (26)
#define  SB2_ctrl_reg_dispim_vi_security_protect_shift                           (25)
#define  SB2_ctrl_reg_dispim_di_security_protect_shift                           (24)
#define  SB2_ctrl_reg_dispim_dexc_security_protect_shift                         (23)
#define  SB2_ctrl_reg_vodma_security_protect_shift                               (22)
#define  SB2_ctrl_reg_gpu_security_protect_shift                                 (21)
#define  SB2_ctrl_reg_gpu_general_protect_shift                                  (20)
#define  SB2_ctrl_reg_gpu_os_id_3_protect_shift                                  (19)
#define  SB2_ctrl_reg_gpu_os_id_2_protect_shift                                  (18)
#define  SB2_ctrl_reg_gpu_os_id_1_protect_shift                                  (17)
#define  SB2_ctrl_reg_gpu_os_id_0_protect_shift                                  (16)
#define  SB2_ctrl_reg_dc_picindex_rw_n_shift                                     (12)
#define  SB2_ctrl_reg_otp_bits_scpu_rd_n_shift                                   (11)
#define  SB2_ctrl_reg_otp_bits_vcpu_rd_n_shift                                   (10)
#define  SB2_ctrl_reg_otp_bits_acpu_rd_n_shift                                   (9)
#define  SB2_ctrl_reg_otp_bits_kcpu_rd_n_shift                                   (8)
#define  SB2_ctrl_reg_nnip_general_protect_shift                                 (7)
#define  SB2_ctrl_reg_nnip_wrapper_protect_shift                                 (6)
#define  SB2_ctrl_reg_se_queue2_protect_shift                                    (4)
#define  SB2_ctrl_reg_flash_release_shift                                        (0)
#define  SB2_ctrl_reg_dispd_dc2h_security_protect_mask                           (0x40000000)
#define  SB2_ctrl_reg_memc_security_protect_mask                                 (0x20000000)
#define  SB2_ctrl_reg_dispd_od_security_protect_mask                             (0x10000000)
#define  SB2_ctrl_reg_dispim_i3ddma_security_protect_mask                        (0x08000000)
#define  SB2_ctrl_reg_dispim_m_security_protect_mask                             (0x04000000)
#define  SB2_ctrl_reg_dispim_vi_security_protect_mask                            (0x02000000)
#define  SB2_ctrl_reg_dispim_di_security_protect_mask                            (0x01000000)
#define  SB2_ctrl_reg_dispim_dexc_security_protect_mask                          (0x00800000)
#define  SB2_ctrl_reg_vodma_security_protect_mask                                (0x00400000)
#define  SB2_ctrl_reg_gpu_security_protect_mask                                  (0x00200000)
#define  SB2_ctrl_reg_gpu_general_protect_mask                                   (0x00100000)
#define  SB2_ctrl_reg_gpu_os_id_3_protect_mask                                   (0x00080000)
#define  SB2_ctrl_reg_gpu_os_id_2_protect_mask                                   (0x00040000)
#define  SB2_ctrl_reg_gpu_os_id_1_protect_mask                                   (0x00020000)
#define  SB2_ctrl_reg_gpu_os_id_0_protect_mask                                   (0x00010000)
#define  SB2_ctrl_reg_dc_picindex_rw_n_mask                                      (0x00001000)
#define  SB2_ctrl_reg_otp_bits_scpu_rd_n_mask                                    (0x00000800)
#define  SB2_ctrl_reg_otp_bits_vcpu_rd_n_mask                                    (0x00000400)
#define  SB2_ctrl_reg_otp_bits_acpu_rd_n_mask                                    (0x00000200)
#define  SB2_ctrl_reg_otp_bits_kcpu_rd_n_mask                                    (0x00000100)
#define  SB2_ctrl_reg_nnip_general_protect_mask                                  (0x00000080)
#define  SB2_ctrl_reg_nnip_wrapper_protect_mask                                  (0x00000040)
#define  SB2_ctrl_reg_se_queue2_protect_mask                                     (0x00000030)
#define  SB2_ctrl_reg_flash_release_mask                                         (0x00000001)
#define  SB2_ctrl_reg_dispd_dc2h_security_protect(data)                          (0x40000000&((data)<<30))
#define  SB2_ctrl_reg_memc_security_protect(data)                                (0x20000000&((data)<<29))
#define  SB2_ctrl_reg_dispd_od_security_protect(data)                            (0x10000000&((data)<<28))
#define  SB2_ctrl_reg_dispim_i3ddma_security_protect(data)                       (0x08000000&((data)<<27))
#define  SB2_ctrl_reg_dispim_m_security_protect(data)                            (0x04000000&((data)<<26))
#define  SB2_ctrl_reg_dispim_vi_security_protect(data)                           (0x02000000&((data)<<25))
#define  SB2_ctrl_reg_dispim_di_security_protect(data)                           (0x01000000&((data)<<24))
#define  SB2_ctrl_reg_dispim_dexc_security_protect(data)                         (0x00800000&((data)<<23))
#define  SB2_ctrl_reg_vodma_security_protect(data)                               (0x00400000&((data)<<22))
#define  SB2_ctrl_reg_gpu_security_protect(data)                                 (0x00200000&((data)<<21))
#define  SB2_ctrl_reg_gpu_general_protect(data)                                  (0x00100000&((data)<<20))
#define  SB2_ctrl_reg_gpu_os_id_3_protect(data)                                  (0x00080000&((data)<<19))
#define  SB2_ctrl_reg_gpu_os_id_2_protect(data)                                  (0x00040000&((data)<<18))
#define  SB2_ctrl_reg_gpu_os_id_1_protect(data)                                  (0x00020000&((data)<<17))
#define  SB2_ctrl_reg_gpu_os_id_0_protect(data)                                  (0x00010000&((data)<<16))
#define  SB2_ctrl_reg_dc_picindex_rw_n(data)                                     (0x00001000&((data)<<12))
#define  SB2_ctrl_reg_otp_bits_scpu_rd_n(data)                                   (0x00000800&((data)<<11))
#define  SB2_ctrl_reg_otp_bits_vcpu_rd_n(data)                                   (0x00000400&((data)<<10))
#define  SB2_ctrl_reg_otp_bits_acpu_rd_n(data)                                   (0x00000200&((data)<<9))
#define  SB2_ctrl_reg_otp_bits_kcpu_rd_n(data)                                   (0x00000100&((data)<<8))
#define  SB2_ctrl_reg_nnip_general_protect(data)                                 (0x00000080&((data)<<7))
#define  SB2_ctrl_reg_nnip_wrapper_protect(data)                                 (0x00000040&((data)<<6))
#define  SB2_ctrl_reg_se_queue2_protect(data)                                    (0x00000030&((data)<<4))
#define  SB2_ctrl_reg_flash_release(data)                                        (0x00000001&(data))
#define  SB2_ctrl_reg_get_dispd_dc2h_security_protect(data)                      ((0x40000000&(data))>>30)
#define  SB2_ctrl_reg_get_memc_security_protect(data)                            ((0x20000000&(data))>>29)
#define  SB2_ctrl_reg_get_dispd_od_security_protect(data)                        ((0x10000000&(data))>>28)
#define  SB2_ctrl_reg_get_dispim_i3ddma_security_protect(data)                   ((0x08000000&(data))>>27)
#define  SB2_ctrl_reg_get_dispim_m_security_protect(data)                        ((0x04000000&(data))>>26)
#define  SB2_ctrl_reg_get_dispim_vi_security_protect(data)                       ((0x02000000&(data))>>25)
#define  SB2_ctrl_reg_get_dispim_di_security_protect(data)                       ((0x01000000&(data))>>24)
#define  SB2_ctrl_reg_get_dispim_dexc_security_protect(data)                     ((0x00800000&(data))>>23)
#define  SB2_ctrl_reg_get_vodma_security_protect(data)                           ((0x00400000&(data))>>22)
#define  SB2_ctrl_reg_get_gpu_security_protect(data)                             ((0x00200000&(data))>>21)
#define  SB2_ctrl_reg_get_gpu_general_protect(data)                              ((0x00100000&(data))>>20)
#define  SB2_ctrl_reg_get_gpu_os_id_3_protect(data)                              ((0x00080000&(data))>>19)
#define  SB2_ctrl_reg_get_gpu_os_id_2_protect(data)                              ((0x00040000&(data))>>18)
#define  SB2_ctrl_reg_get_gpu_os_id_1_protect(data)                              ((0x00020000&(data))>>17)
#define  SB2_ctrl_reg_get_gpu_os_id_0_protect(data)                              ((0x00010000&(data))>>16)
#define  SB2_ctrl_reg_get_dc_picindex_rw_n(data)                                 ((0x00001000&(data))>>12)
#define  SB2_ctrl_reg_get_otp_bits_scpu_rd_n(data)                               ((0x00000800&(data))>>11)
#define  SB2_ctrl_reg_get_otp_bits_vcpu_rd_n(data)                               ((0x00000400&(data))>>10)
#define  SB2_ctrl_reg_get_otp_bits_acpu_rd_n(data)                               ((0x00000200&(data))>>9)
#define  SB2_ctrl_reg_get_otp_bits_kcpu_rd_n(data)                               ((0x00000100&(data))>>8)
#define  SB2_ctrl_reg_get_nnip_general_protect(data)                             ((0x00000080&(data))>>7)
#define  SB2_ctrl_reg_get_nnip_wrapper_protect(data)                             ((0x00000040&(data))>>6)
#define  SB2_ctrl_reg_get_se_queue2_protect(data)                                ((0x00000030&(data))>>4)
#define  SB2_ctrl_reg_get_flash_release(data)                                    (0x00000001&(data))

#define  SB2_CPU_FLASH_REGION                                                   0x1801A964
#define  SB2_CPU_FLASH_REGION_reg_addr                                           "0xB801A964"
#define  SB2_CPU_FLASH_REGION_reg                                                0xB801A964
#define  SB2_CPU_FLASH_REGION_inst_addr                                          "0x00B0"
#define  set_SB2_CPU_FLASH_REGION_reg(data)                                      (*((volatile unsigned int*)SB2_CPU_FLASH_REGION_reg)=data)
#define  get_SB2_CPU_FLASH_REGION_reg                                            (*((volatile unsigned int*)SB2_CPU_FLASH_REGION_reg))
#define  SB2_CPU_FLASH_REGION_flash_end_addr_shift                               (16)
#define  SB2_CPU_FLASH_REGION_flash_start_addr_shift                             (0)
#define  SB2_CPU_FLASH_REGION_flash_end_addr_mask                                (0xFFFF0000)
#define  SB2_CPU_FLASH_REGION_flash_start_addr_mask                              (0x0000FFFF)
#define  SB2_CPU_FLASH_REGION_flash_end_addr(data)                               (0xFFFF0000&((data)<<16))
#define  SB2_CPU_FLASH_REGION_flash_start_addr(data)                             (0x0000FFFF&(data))
#define  SB2_CPU_FLASH_REGION_get_flash_end_addr(data)                           ((0xFFFF0000&(data))>>16)
#define  SB2_CPU_FLASH_REGION_get_flash_start_addr(data)                         (0x0000FFFF&(data))

#define  SB2_INTEN                                                              0x1801A970
#define  SB2_INTEN_reg_addr                                                      "0xB801A970"
#define  SB2_INTEN_reg                                                           0xB801A970
#define  SB2_INTEN_inst_addr                                                     "0x00B1"
#define  set_SB2_INTEN_reg(data)                                                 (*((volatile unsigned int*)SB2_INTEN_reg)=data)
#define  get_SB2_INTEN_reg                                                       (*((volatile unsigned int*)SB2_INTEN_reg))
#define  SB2_INTEN_kcnsfbusirq_en_shift                                          (3)
#define  SB2_INTEN_kcnsrbusirq_en_shift                                          (2)
#define  SB2_INTEN_kcivairq_en_shift                                             (1)
#define  SB2_INTEN_write_data_shift                                              (0)
#define  SB2_INTEN_kcnsfbusirq_en_mask                                           (0x00000008)
#define  SB2_INTEN_kcnsrbusirq_en_mask                                           (0x00000004)
#define  SB2_INTEN_kcivairq_en_mask                                              (0x00000002)
#define  SB2_INTEN_write_data_mask                                               (0x00000001)
#define  SB2_INTEN_kcnsfbusirq_en(data)                                          (0x00000008&((data)<<3))
#define  SB2_INTEN_kcnsrbusirq_en(data)                                          (0x00000004&((data)<<2))
#define  SB2_INTEN_kcivairq_en(data)                                             (0x00000002&((data)<<1))
#define  SB2_INTEN_write_data(data)                                              (0x00000001&(data))
#define  SB2_INTEN_get_kcnsfbusirq_en(data)                                      ((0x00000008&(data))>>3)
#define  SB2_INTEN_get_kcnsrbusirq_en(data)                                      ((0x00000004&(data))>>2)
#define  SB2_INTEN_get_kcivairq_en(data)                                         ((0x00000002&(data))>>1)
#define  SB2_INTEN_get_write_data(data)                                          (0x00000001&(data))

#define  SB2_INTSTAT                                                            0x1801A974
#define  SB2_INTSTAT_reg_addr                                                    "0xB801A974"
#define  SB2_INTSTAT_reg                                                         0xB801A974
#define  SB2_INTSTAT_inst_addr                                                   "0x00B2"
#define  set_SB2_INTSTAT_reg(data)                                               (*((volatile unsigned int*)SB2_INTSTAT_reg)=data)
#define  get_SB2_INTSTAT_reg                                                     (*((volatile unsigned int*)SB2_INTSTAT_reg))
#define  SB2_INTSTAT_kcnsfbus_int_shift                                          (3)
#define  SB2_INTSTAT_kcnsrbus_int_shift                                          (2)
#define  SB2_INTSTAT_kciva_int_shift                                             (1)
#define  SB2_INTSTAT_write_data_shift                                            (0)
#define  SB2_INTSTAT_kcnsfbus_int_mask                                           (0x00000008)
#define  SB2_INTSTAT_kcnsrbus_int_mask                                           (0x00000004)
#define  SB2_INTSTAT_kciva_int_mask                                              (0x00000002)
#define  SB2_INTSTAT_write_data_mask                                             (0x00000001)
#define  SB2_INTSTAT_kcnsfbus_int(data)                                          (0x00000008&((data)<<3))
#define  SB2_INTSTAT_kcnsrbus_int(data)                                          (0x00000004&((data)<<2))
#define  SB2_INTSTAT_kciva_int(data)                                             (0x00000002&((data)<<1))
#define  SB2_INTSTAT_write_data(data)                                            (0x00000001&(data))
#define  SB2_INTSTAT_get_kcnsfbus_int(data)                                      ((0x00000008&(data))>>3)
#define  SB2_INTSTAT_get_kcnsrbus_int(data)                                      ((0x00000004&(data))>>2)
#define  SB2_INTSTAT_get_kciva_int(data)                                         ((0x00000002&(data))>>1)
#define  SB2_INTSTAT_get_write_data(data)                                        (0x00000001&(data))

#define  SB2_NS_CPU                                                             0x1801A978
#define  SB2_NS_CPU_reg_addr                                                     "0xB801A978"
#define  SB2_NS_CPU_reg                                                          0xB801A978
#define  SB2_NS_CPU_inst_addr                                                    "0x00B3"
#define  set_SB2_NS_CPU_reg(data)                                                (*((volatile unsigned int*)SB2_NS_CPU_reg)=data)
#define  get_SB2_NS_CPU_reg                                                      (*((volatile unsigned int*)SB2_NS_CPU_reg))
#define  SB2_NS_CPU_fbus_access_cpu_shift                                        (28)
#define  SB2_NS_CPU_rbus_access_cpu_shift                                        (24)
#define  SB2_NS_CPU_rbus_access_addr_shift                                       (0)
#define  SB2_NS_CPU_fbus_access_cpu_mask                                         (0x70000000)
#define  SB2_NS_CPU_rbus_access_cpu_mask                                         (0x0F000000)
#define  SB2_NS_CPU_rbus_access_addr_mask                                        (0x001FFFFF)
#define  SB2_NS_CPU_fbus_access_cpu(data)                                        (0x70000000&((data)<<28))
#define  SB2_NS_CPU_rbus_access_cpu(data)                                        (0x0F000000&((data)<<24))
#define  SB2_NS_CPU_rbus_access_addr(data)                                       (0x001FFFFF&(data))
#define  SB2_NS_CPU_get_fbus_access_cpu(data)                                    ((0x70000000&(data))>>28)
#define  SB2_NS_CPU_get_rbus_access_cpu(data)                                    ((0x0F000000&(data))>>24)
#define  SB2_NS_CPU_get_rbus_access_addr(data)                                   (0x001FFFFF&(data))

#define  SB2_DBG_ADDR_KCPU                                                      0x1801A980
#define  SB2_DBG_ADDR_KCPU_reg_addr                                              "0xB801A980"
#define  SB2_DBG_ADDR_KCPU_reg                                                   0xB801A980
#define  SB2_DBG_ADDR_KCPU_inst_addr                                             "0x00B4"
#define  set_SB2_DBG_ADDR_KCPU_reg(data)                                         (*((volatile unsigned int*)SB2_DBG_ADDR_KCPU_reg)=data)
#define  get_SB2_DBG_ADDR_KCPU_reg                                               (*((volatile unsigned int*)SB2_DBG_ADDR_KCPU_reg))
#define  SB2_DBG_ADDR_KCPU_dbg_addr_kcpu_shift                                   (0)
#define  SB2_DBG_ADDR_KCPU_dbg_addr_kcpu_mask                                    (0xFFFFFFFF)
#define  SB2_DBG_ADDR_KCPU_dbg_addr_kcpu(data)                                   (0xFFFFFFFF&(data))
#define  SB2_DBG_ADDR_KCPU_get_dbg_addr_kcpu(data)                               (0xFFFFFFFF&(data))

#define  SB2_KCPU_DBG                                                           0x1801A984
#define  SB2_KCPU_DBG_reg_addr                                                   "0xB801A984"
#define  SB2_KCPU_DBG_reg                                                        0xB801A984
#define  SB2_KCPU_DBG_inst_addr                                                  "0x00B5"
#define  set_SB2_KCPU_DBG_reg(data)                                              (*((volatile unsigned int*)SB2_KCPU_DBG_reg)=data)
#define  get_SB2_KCPU_DBG_reg                                                    (*((volatile unsigned int*)SB2_KCPU_DBG_reg))
#define  SB2_KCPU_DBG_kc_dbg_enable_shift                                        (16)
#define  SB2_KCPU_DBG_kc_dbg_sel1_shift                                          (8)
#define  SB2_KCPU_DBG_kc_dbg_sel0_shift                                          (0)
#define  SB2_KCPU_DBG_kc_dbg_enable_mask                                         (0x00010000)
#define  SB2_KCPU_DBG_kc_dbg_sel1_mask                                           (0x00001F00)
#define  SB2_KCPU_DBG_kc_dbg_sel0_mask                                           (0x0000001F)
#define  SB2_KCPU_DBG_kc_dbg_enable(data)                                        (0x00010000&((data)<<16))
#define  SB2_KCPU_DBG_kc_dbg_sel1(data)                                          (0x00001F00&((data)<<8))
#define  SB2_KCPU_DBG_kc_dbg_sel0(data)                                          (0x0000001F&(data))
#define  SB2_KCPU_DBG_get_kc_dbg_enable(data)                                    ((0x00010000&(data))>>16)
#define  SB2_KCPU_DBG_get_kc_dbg_sel1(data)                                      ((0x00001F00&(data))>>8)
#define  SB2_KCPU_DBG_get_kc_dbg_sel0(data)                                      (0x0000001F&(data))

#define  SB2_KCPU_EXCEPTION_OFFSET                                              0x1801A990
#define  SB2_KCPU_EXCEPTION_OFFSET_reg_addr                                      "0xB801A990"
#define  SB2_KCPU_EXCEPTION_OFFSET_reg                                           0xB801A990
#define  SB2_KCPU_EXCEPTION_OFFSET_inst_addr                                     "0x00B6"
#define  set_SB2_KCPU_EXCEPTION_OFFSET_reg(data)                                 (*((volatile unsigned int*)SB2_KCPU_EXCEPTION_OFFSET_reg)=data)
#define  get_SB2_KCPU_EXCEPTION_OFFSET_reg                                       (*((volatile unsigned int*)SB2_KCPU_EXCEPTION_OFFSET_reg))
#define  SB2_KCPU_EXCEPTION_OFFSET_kcpu_exvoffset_shift                          (0)
#define  SB2_KCPU_EXCEPTION_OFFSET_kcpu_exvoffset_mask                           (0xFFFFFFFF)
#define  SB2_KCPU_EXCEPTION_OFFSET_kcpu_exvoffset(data)                          (0xFFFFFFFF&(data))
#define  SB2_KCPU_EXCEPTION_OFFSET_get_kcpu_exvoffset(data)                      (0xFFFFFFFF&(data))

#define  SB2_DBG_START2_0                                                       0x1801AA80
#define  SB2_DBG_START2_0_reg_addr                                               "0xB801AA80"
#define  SB2_DBG_START2_0_reg                                                    0xB801AA80
#define  SB2_DBG_START2_0_inst_addr                                              "0x00B7"
#define  set_SB2_DBG_START2_0_reg(data)                                          (*((volatile unsigned int*)SB2_DBG_START2_0_reg)=data)
#define  get_SB2_DBG_START2_0_reg                                                (*((volatile unsigned int*)SB2_DBG_START2_0_reg))
#define  SB2_DBG_START2_0_dbg_start_addr_shift                                   (0)
#define  SB2_DBG_START2_0_dbg_start_addr_mask                                    (0xFFFFFFFF)
#define  SB2_DBG_START2_0_dbg_start_addr(data)                                   (0xFFFFFFFF&(data))
#define  SB2_DBG_START2_0_get_dbg_start_addr(data)                               (0xFFFFFFFF&(data))

#define  SB2_DBG_START2_1                                                       0x1801AA84
#define  SB2_DBG_START2_1_reg_addr                                               "0xB801AA84"
#define  SB2_DBG_START2_1_reg                                                    0xB801AA84
#define  SB2_DBG_START2_1_inst_addr                                              "0x00B8"
#define  set_SB2_DBG_START2_1_reg(data)                                          (*((volatile unsigned int*)SB2_DBG_START2_1_reg)=data)
#define  get_SB2_DBG_START2_1_reg                                                (*((volatile unsigned int*)SB2_DBG_START2_1_reg))
#define  SB2_DBG_START2_1_dbg_start_addr_shift                                   (0)
#define  SB2_DBG_START2_1_dbg_start_addr_mask                                    (0xFFFFFFFF)
#define  SB2_DBG_START2_1_dbg_start_addr(data)                                   (0xFFFFFFFF&(data))
#define  SB2_DBG_START2_1_get_dbg_start_addr(data)                               (0xFFFFFFFF&(data))

#define  SB2_DBG_START2_2                                                       0x1801AA88
#define  SB2_DBG_START2_2_reg_addr                                               "0xB801AA88"
#define  SB2_DBG_START2_2_reg                                                    0xB801AA88
#define  SB2_DBG_START2_2_inst_addr                                              "0x00B9"
#define  set_SB2_DBG_START2_2_reg(data)                                          (*((volatile unsigned int*)SB2_DBG_START2_2_reg)=data)
#define  get_SB2_DBG_START2_2_reg                                                (*((volatile unsigned int*)SB2_DBG_START2_2_reg))
#define  SB2_DBG_START2_2_dbg_start_addr_shift                                   (0)
#define  SB2_DBG_START2_2_dbg_start_addr_mask                                    (0xFFFFFFFF)
#define  SB2_DBG_START2_2_dbg_start_addr(data)                                   (0xFFFFFFFF&(data))
#define  SB2_DBG_START2_2_get_dbg_start_addr(data)                               (0xFFFFFFFF&(data))

#define  SB2_DBG_START2_3                                                       0x1801AA8C
#define  SB2_DBG_START2_3_reg_addr                                               "0xB801AA8C"
#define  SB2_DBG_START2_3_reg                                                    0xB801AA8C
#define  SB2_DBG_START2_3_inst_addr                                              "0x00BA"
#define  set_SB2_DBG_START2_3_reg(data)                                          (*((volatile unsigned int*)SB2_DBG_START2_3_reg)=data)
#define  get_SB2_DBG_START2_3_reg                                                (*((volatile unsigned int*)SB2_DBG_START2_3_reg))
#define  SB2_DBG_START2_3_dbg_start_addr_shift                                   (0)
#define  SB2_DBG_START2_3_dbg_start_addr_mask                                    (0xFFFFFFFF)
#define  SB2_DBG_START2_3_dbg_start_addr(data)                                   (0xFFFFFFFF&(data))
#define  SB2_DBG_START2_3_get_dbg_start_addr(data)                               (0xFFFFFFFF&(data))

#define  SB2_DBG_START2_4                                                       0x1801AA90
#define  SB2_DBG_START2_4_reg_addr                                               "0xB801AA90"
#define  SB2_DBG_START2_4_reg                                                    0xB801AA90
#define  SB2_DBG_START2_4_inst_addr                                              "0x00BB"
#define  set_SB2_DBG_START2_4_reg(data)                                          (*((volatile unsigned int*)SB2_DBG_START2_4_reg)=data)
#define  get_SB2_DBG_START2_4_reg                                                (*((volatile unsigned int*)SB2_DBG_START2_4_reg))
#define  SB2_DBG_START2_4_dbg_start_addr_shift                                   (0)
#define  SB2_DBG_START2_4_dbg_start_addr_mask                                    (0xFFFFFFFF)
#define  SB2_DBG_START2_4_dbg_start_addr(data)                                   (0xFFFFFFFF&(data))
#define  SB2_DBG_START2_4_get_dbg_start_addr(data)                               (0xFFFFFFFF&(data))

#define  SB2_DBG_START2_5                                                       0x1801AA94
#define  SB2_DBG_START2_5_reg_addr                                               "0xB801AA94"
#define  SB2_DBG_START2_5_reg                                                    0xB801AA94
#define  SB2_DBG_START2_5_inst_addr                                              "0x00BC"
#define  set_SB2_DBG_START2_5_reg(data)                                          (*((volatile unsigned int*)SB2_DBG_START2_5_reg)=data)
#define  get_SB2_DBG_START2_5_reg                                                (*((volatile unsigned int*)SB2_DBG_START2_5_reg))
#define  SB2_DBG_START2_5_dbg_start_addr_shift                                   (0)
#define  SB2_DBG_START2_5_dbg_start_addr_mask                                    (0xFFFFFFFF)
#define  SB2_DBG_START2_5_dbg_start_addr(data)                                   (0xFFFFFFFF&(data))
#define  SB2_DBG_START2_5_get_dbg_start_addr(data)                               (0xFFFFFFFF&(data))

#define  SB2_DBG_START2_6                                                       0x1801AA98
#define  SB2_DBG_START2_6_reg_addr                                               "0xB801AA98"
#define  SB2_DBG_START2_6_reg                                                    0xB801AA98
#define  SB2_DBG_START2_6_inst_addr                                              "0x00BD"
#define  set_SB2_DBG_START2_6_reg(data)                                          (*((volatile unsigned int*)SB2_DBG_START2_6_reg)=data)
#define  get_SB2_DBG_START2_6_reg                                                (*((volatile unsigned int*)SB2_DBG_START2_6_reg))
#define  SB2_DBG_START2_6_dbg_start_addr_shift                                   (0)
#define  SB2_DBG_START2_6_dbg_start_addr_mask                                    (0xFFFFFFFF)
#define  SB2_DBG_START2_6_dbg_start_addr(data)                                   (0xFFFFFFFF&(data))
#define  SB2_DBG_START2_6_get_dbg_start_addr(data)                               (0xFFFFFFFF&(data))

#define  SB2_DBG_START2_7                                                       0x1801AA9C
#define  SB2_DBG_START2_7_reg_addr                                               "0xB801AA9C"
#define  SB2_DBG_START2_7_reg                                                    0xB801AA9C
#define  SB2_DBG_START2_7_inst_addr                                              "0x00BE"
#define  set_SB2_DBG_START2_7_reg(data)                                          (*((volatile unsigned int*)SB2_DBG_START2_7_reg)=data)
#define  get_SB2_DBG_START2_7_reg                                                (*((volatile unsigned int*)SB2_DBG_START2_7_reg))
#define  SB2_DBG_START2_7_dbg_start_addr_shift                                   (0)
#define  SB2_DBG_START2_7_dbg_start_addr_mask                                    (0xFFFFFFFF)
#define  SB2_DBG_START2_7_dbg_start_addr(data)                                   (0xFFFFFFFF&(data))
#define  SB2_DBG_START2_7_get_dbg_start_addr(data)                               (0xFFFFFFFF&(data))

#define  SB2_DBG_END2_0                                                         0x1801AAA0
#define  SB2_DBG_END2_0_reg_addr                                                 "0xB801AAA0"
#define  SB2_DBG_END2_0_reg                                                      0xB801AAA0
#define  SB2_DBG_END2_0_inst_addr                                                "0x00BF"
#define  set_SB2_DBG_END2_0_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_END2_0_reg)=data)
#define  get_SB2_DBG_END2_0_reg                                                  (*((volatile unsigned int*)SB2_DBG_END2_0_reg))
#define  SB2_DBG_END2_0_dbg_end_addr_shift                                       (0)
#define  SB2_DBG_END2_0_dbg_end_addr_mask                                        (0xFFFFFFFF)
#define  SB2_DBG_END2_0_dbg_end_addr(data)                                       (0xFFFFFFFF&(data))
#define  SB2_DBG_END2_0_get_dbg_end_addr(data)                                   (0xFFFFFFFF&(data))

#define  SB2_DBG_END2_1                                                         0x1801AAA4
#define  SB2_DBG_END2_1_reg_addr                                                 "0xB801AAA4"
#define  SB2_DBG_END2_1_reg                                                      0xB801AAA4
#define  SB2_DBG_END2_1_inst_addr                                                "0x00C0"
#define  set_SB2_DBG_END2_1_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_END2_1_reg)=data)
#define  get_SB2_DBG_END2_1_reg                                                  (*((volatile unsigned int*)SB2_DBG_END2_1_reg))
#define  SB2_DBG_END2_1_dbg_end_addr_shift                                       (0)
#define  SB2_DBG_END2_1_dbg_end_addr_mask                                        (0xFFFFFFFF)
#define  SB2_DBG_END2_1_dbg_end_addr(data)                                       (0xFFFFFFFF&(data))
#define  SB2_DBG_END2_1_get_dbg_end_addr(data)                                   (0xFFFFFFFF&(data))

#define  SB2_DBG_END2_2                                                         0x1801AAA8
#define  SB2_DBG_END2_2_reg_addr                                                 "0xB801AAA8"
#define  SB2_DBG_END2_2_reg                                                      0xB801AAA8
#define  SB2_DBG_END2_2_inst_addr                                                "0x00C1"
#define  set_SB2_DBG_END2_2_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_END2_2_reg)=data)
#define  get_SB2_DBG_END2_2_reg                                                  (*((volatile unsigned int*)SB2_DBG_END2_2_reg))
#define  SB2_DBG_END2_2_dbg_end_addr_shift                                       (0)
#define  SB2_DBG_END2_2_dbg_end_addr_mask                                        (0xFFFFFFFF)
#define  SB2_DBG_END2_2_dbg_end_addr(data)                                       (0xFFFFFFFF&(data))
#define  SB2_DBG_END2_2_get_dbg_end_addr(data)                                   (0xFFFFFFFF&(data))

#define  SB2_DBG_END2_3                                                         0x1801AAAC
#define  SB2_DBG_END2_3_reg_addr                                                 "0xB801AAAC"
#define  SB2_DBG_END2_3_reg                                                      0xB801AAAC
#define  SB2_DBG_END2_3_inst_addr                                                "0x00C2"
#define  set_SB2_DBG_END2_3_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_END2_3_reg)=data)
#define  get_SB2_DBG_END2_3_reg                                                  (*((volatile unsigned int*)SB2_DBG_END2_3_reg))
#define  SB2_DBG_END2_3_dbg_end_addr_shift                                       (0)
#define  SB2_DBG_END2_3_dbg_end_addr_mask                                        (0xFFFFFFFF)
#define  SB2_DBG_END2_3_dbg_end_addr(data)                                       (0xFFFFFFFF&(data))
#define  SB2_DBG_END2_3_get_dbg_end_addr(data)                                   (0xFFFFFFFF&(data))

#define  SB2_DBG_END2_4                                                         0x1801AAB0
#define  SB2_DBG_END2_4_reg_addr                                                 "0xB801AAB0"
#define  SB2_DBG_END2_4_reg                                                      0xB801AAB0
#define  SB2_DBG_END2_4_inst_addr                                                "0x00C3"
#define  set_SB2_DBG_END2_4_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_END2_4_reg)=data)
#define  get_SB2_DBG_END2_4_reg                                                  (*((volatile unsigned int*)SB2_DBG_END2_4_reg))
#define  SB2_DBG_END2_4_dbg_end_addr_shift                                       (0)
#define  SB2_DBG_END2_4_dbg_end_addr_mask                                        (0xFFFFFFFF)
#define  SB2_DBG_END2_4_dbg_end_addr(data)                                       (0xFFFFFFFF&(data))
#define  SB2_DBG_END2_4_get_dbg_end_addr(data)                                   (0xFFFFFFFF&(data))

#define  SB2_DBG_END2_5                                                         0x1801AAB4
#define  SB2_DBG_END2_5_reg_addr                                                 "0xB801AAB4"
#define  SB2_DBG_END2_5_reg                                                      0xB801AAB4
#define  SB2_DBG_END2_5_inst_addr                                                "0x00C4"
#define  set_SB2_DBG_END2_5_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_END2_5_reg)=data)
#define  get_SB2_DBG_END2_5_reg                                                  (*((volatile unsigned int*)SB2_DBG_END2_5_reg))
#define  SB2_DBG_END2_5_dbg_end_addr_shift                                       (0)
#define  SB2_DBG_END2_5_dbg_end_addr_mask                                        (0xFFFFFFFF)
#define  SB2_DBG_END2_5_dbg_end_addr(data)                                       (0xFFFFFFFF&(data))
#define  SB2_DBG_END2_5_get_dbg_end_addr(data)                                   (0xFFFFFFFF&(data))

#define  SB2_DBG_END2_6                                                         0x1801AAB8
#define  SB2_DBG_END2_6_reg_addr                                                 "0xB801AAB8"
#define  SB2_DBG_END2_6_reg                                                      0xB801AAB8
#define  SB2_DBG_END2_6_inst_addr                                                "0x00C5"
#define  set_SB2_DBG_END2_6_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_END2_6_reg)=data)
#define  get_SB2_DBG_END2_6_reg                                                  (*((volatile unsigned int*)SB2_DBG_END2_6_reg))
#define  SB2_DBG_END2_6_dbg_end_addr_shift                                       (0)
#define  SB2_DBG_END2_6_dbg_end_addr_mask                                        (0xFFFFFFFF)
#define  SB2_DBG_END2_6_dbg_end_addr(data)                                       (0xFFFFFFFF&(data))
#define  SB2_DBG_END2_6_get_dbg_end_addr(data)                                   (0xFFFFFFFF&(data))

#define  SB2_DBG_END2_7                                                         0x1801AABC
#define  SB2_DBG_END2_7_reg_addr                                                 "0xB801AABC"
#define  SB2_DBG_END2_7_reg                                                      0xB801AABC
#define  SB2_DBG_END2_7_inst_addr                                                "0x00C6"
#define  set_SB2_DBG_END2_7_reg(data)                                            (*((volatile unsigned int*)SB2_DBG_END2_7_reg)=data)
#define  get_SB2_DBG_END2_7_reg                                                  (*((volatile unsigned int*)SB2_DBG_END2_7_reg))
#define  SB2_DBG_END2_7_dbg_end_addr_shift                                       (0)
#define  SB2_DBG_END2_7_dbg_end_addr_mask                                        (0xFFFFFFFF)
#define  SB2_DBG_END2_7_dbg_end_addr(data)                                       (0xFFFFFFFF&(data))
#define  SB2_DBG_END2_7_get_dbg_end_addr(data)                                   (0xFFFFFFFF&(data))

#define  SB2_DBG_CTRL3_0                                                        0x1801AAC0
#define  SB2_DBG_CTRL3_0_reg_addr                                                "0xB801AAC0"
#define  SB2_DBG_CTRL3_0_reg                                                     0xB801AAC0
#define  SB2_DBG_CTRL3_0_inst_addr                                               "0x00C7"
#define  set_SB2_DBG_CTRL3_0_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_CTRL3_0_reg)=data)
#define  get_SB2_DBG_CTRL3_0_reg                                                 (*((volatile unsigned int*)SB2_DBG_CTRL3_0_reg))
#define  SB2_DBG_CTRL3_0_write_en9_shift                                         (19)
#define  SB2_DBG_CTRL3_0_dbg_acpu2_chk_en_shift                                  (18)
#define  SB2_DBG_CTRL3_0_write_en8_shift                                         (17)
#define  SB2_DBG_CTRL3_0_dbg_kcpu_chk_en_shift                                   (16)
#define  SB2_DBG_CTRL3_0_write_en7_shift                                         (15)
#define  SB2_DBG_CTRL3_0_dbg_vcpu2_chk_en_shift                                  (14)
#define  SB2_DBG_CTRL3_0_write_en6_shift                                         (13)
#define  SB2_DBG_CTRL3_0_dbg_acpu_chk_en_shift                                   (12)
#define  SB2_DBG_CTRL3_0_write_en5_shift                                         (11)
#define  SB2_DBG_CTRL3_0_dbg_vcpu_chk_en_shift                                   (10)
#define  SB2_DBG_CTRL3_0_write_en4_shift                                         (9)
#define  SB2_DBG_CTRL3_0_dbg_scpu_chk_en_shift                                   (8)
#define  SB2_DBG_CTRL3_0_write_en3_shift                                         (7)
#define  SB2_DBG_CTRL3_0_dbg_wr_chk_shift                                        (5)
#define  SB2_DBG_CTRL3_0_write_en2_shift                                         (4)
#define  SB2_DBG_CTRL3_0_dbg_id_chk_shift                                        (2)
#define  SB2_DBG_CTRL3_0_write_en1_shift                                         (1)
#define  SB2_DBG_CTRL3_0_dbg_en_shift                                            (0)
#define  SB2_DBG_CTRL3_0_write_en9_mask                                          (0x00080000)
#define  SB2_DBG_CTRL3_0_dbg_acpu2_chk_en_mask                                   (0x00040000)
#define  SB2_DBG_CTRL3_0_write_en8_mask                                          (0x00020000)
#define  SB2_DBG_CTRL3_0_dbg_kcpu_chk_en_mask                                    (0x00010000)
#define  SB2_DBG_CTRL3_0_write_en7_mask                                          (0x00008000)
#define  SB2_DBG_CTRL3_0_dbg_vcpu2_chk_en_mask                                   (0x00004000)
#define  SB2_DBG_CTRL3_0_write_en6_mask                                          (0x00002000)
#define  SB2_DBG_CTRL3_0_dbg_acpu_chk_en_mask                                    (0x00001000)
#define  SB2_DBG_CTRL3_0_write_en5_mask                                          (0x00000800)
#define  SB2_DBG_CTRL3_0_dbg_vcpu_chk_en_mask                                    (0x00000400)
#define  SB2_DBG_CTRL3_0_write_en4_mask                                          (0x00000200)
#define  SB2_DBG_CTRL3_0_dbg_scpu_chk_en_mask                                    (0x00000100)
#define  SB2_DBG_CTRL3_0_write_en3_mask                                          (0x00000080)
#define  SB2_DBG_CTRL3_0_dbg_wr_chk_mask                                         (0x00000060)
#define  SB2_DBG_CTRL3_0_write_en2_mask                                          (0x00000010)
#define  SB2_DBG_CTRL3_0_dbg_id_chk_mask                                         (0x0000000C)
#define  SB2_DBG_CTRL3_0_write_en1_mask                                          (0x00000002)
#define  SB2_DBG_CTRL3_0_dbg_en_mask                                             (0x00000001)
#define  SB2_DBG_CTRL3_0_write_en9(data)                                         (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL3_0_dbg_acpu2_chk_en(data)                                  (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL3_0_write_en8(data)                                         (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL3_0_dbg_kcpu_chk_en(data)                                   (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL3_0_write_en7(data)                                         (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL3_0_dbg_vcpu2_chk_en(data)                                  (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL3_0_write_en6(data)                                         (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL3_0_dbg_acpu_chk_en(data)                                   (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL3_0_write_en5(data)                                         (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL3_0_dbg_vcpu_chk_en(data)                                   (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL3_0_write_en4(data)                                         (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL3_0_dbg_scpu_chk_en(data)                                   (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL3_0_write_en3(data)                                         (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL3_0_dbg_wr_chk(data)                                        (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL3_0_write_en2(data)                                         (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL3_0_dbg_id_chk(data)                                        (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL3_0_write_en1(data)                                         (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL3_0_dbg_en(data)                                            (0x00000001&(data))
#define  SB2_DBG_CTRL3_0_get_write_en9(data)                                     ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL3_0_get_dbg_acpu2_chk_en(data)                              ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL3_0_get_write_en8(data)                                     ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL3_0_get_dbg_kcpu_chk_en(data)                               ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL3_0_get_write_en7(data)                                     ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL3_0_get_dbg_vcpu2_chk_en(data)                              ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL3_0_get_write_en6(data)                                     ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL3_0_get_dbg_acpu_chk_en(data)                               ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL3_0_get_write_en5(data)                                     ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL3_0_get_dbg_vcpu_chk_en(data)                               ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL3_0_get_write_en4(data)                                     ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL3_0_get_dbg_scpu_chk_en(data)                               ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL3_0_get_write_en3(data)                                     ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL3_0_get_dbg_wr_chk(data)                                    ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL3_0_get_write_en2(data)                                     ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL3_0_get_dbg_id_chk(data)                                    ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL3_0_get_write_en1(data)                                     ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL3_0_get_dbg_en(data)                                        (0x00000001&(data))

#define  SB2_DBG_CTRL3_1                                                        0x1801AAC4
#define  SB2_DBG_CTRL3_1_reg_addr                                                "0xB801AAC4"
#define  SB2_DBG_CTRL3_1_reg                                                     0xB801AAC4
#define  SB2_DBG_CTRL3_1_inst_addr                                               "0x00C8"
#define  set_SB2_DBG_CTRL3_1_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_CTRL3_1_reg)=data)
#define  get_SB2_DBG_CTRL3_1_reg                                                 (*((volatile unsigned int*)SB2_DBG_CTRL3_1_reg))
#define  SB2_DBG_CTRL3_1_write_en9_shift                                         (19)
#define  SB2_DBG_CTRL3_1_dbg_acpu2_chk_en_shift                                  (18)
#define  SB2_DBG_CTRL3_1_write_en8_shift                                         (17)
#define  SB2_DBG_CTRL3_1_dbg_kcpu_chk_en_shift                                   (16)
#define  SB2_DBG_CTRL3_1_write_en7_shift                                         (15)
#define  SB2_DBG_CTRL3_1_dbg_vcpu2_chk_en_shift                                  (14)
#define  SB2_DBG_CTRL3_1_write_en6_shift                                         (13)
#define  SB2_DBG_CTRL3_1_dbg_acpu_chk_en_shift                                   (12)
#define  SB2_DBG_CTRL3_1_write_en5_shift                                         (11)
#define  SB2_DBG_CTRL3_1_dbg_vcpu_chk_en_shift                                   (10)
#define  SB2_DBG_CTRL3_1_write_en4_shift                                         (9)
#define  SB2_DBG_CTRL3_1_dbg_scpu_chk_en_shift                                   (8)
#define  SB2_DBG_CTRL3_1_write_en3_shift                                         (7)
#define  SB2_DBG_CTRL3_1_dbg_wr_chk_shift                                        (5)
#define  SB2_DBG_CTRL3_1_write_en2_shift                                         (4)
#define  SB2_DBG_CTRL3_1_dbg_id_chk_shift                                        (2)
#define  SB2_DBG_CTRL3_1_write_en1_shift                                         (1)
#define  SB2_DBG_CTRL3_1_dbg_en_shift                                            (0)
#define  SB2_DBG_CTRL3_1_write_en9_mask                                          (0x00080000)
#define  SB2_DBG_CTRL3_1_dbg_acpu2_chk_en_mask                                   (0x00040000)
#define  SB2_DBG_CTRL3_1_write_en8_mask                                          (0x00020000)
#define  SB2_DBG_CTRL3_1_dbg_kcpu_chk_en_mask                                    (0x00010000)
#define  SB2_DBG_CTRL3_1_write_en7_mask                                          (0x00008000)
#define  SB2_DBG_CTRL3_1_dbg_vcpu2_chk_en_mask                                   (0x00004000)
#define  SB2_DBG_CTRL3_1_write_en6_mask                                          (0x00002000)
#define  SB2_DBG_CTRL3_1_dbg_acpu_chk_en_mask                                    (0x00001000)
#define  SB2_DBG_CTRL3_1_write_en5_mask                                          (0x00000800)
#define  SB2_DBG_CTRL3_1_dbg_vcpu_chk_en_mask                                    (0x00000400)
#define  SB2_DBG_CTRL3_1_write_en4_mask                                          (0x00000200)
#define  SB2_DBG_CTRL3_1_dbg_scpu_chk_en_mask                                    (0x00000100)
#define  SB2_DBG_CTRL3_1_write_en3_mask                                          (0x00000080)
#define  SB2_DBG_CTRL3_1_dbg_wr_chk_mask                                         (0x00000060)
#define  SB2_DBG_CTRL3_1_write_en2_mask                                          (0x00000010)
#define  SB2_DBG_CTRL3_1_dbg_id_chk_mask                                         (0x0000000C)
#define  SB2_DBG_CTRL3_1_write_en1_mask                                          (0x00000002)
#define  SB2_DBG_CTRL3_1_dbg_en_mask                                             (0x00000001)
#define  SB2_DBG_CTRL3_1_write_en9(data)                                         (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL3_1_dbg_acpu2_chk_en(data)                                  (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL3_1_write_en8(data)                                         (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL3_1_dbg_kcpu_chk_en(data)                                   (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL3_1_write_en7(data)                                         (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL3_1_dbg_vcpu2_chk_en(data)                                  (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL3_1_write_en6(data)                                         (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL3_1_dbg_acpu_chk_en(data)                                   (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL3_1_write_en5(data)                                         (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL3_1_dbg_vcpu_chk_en(data)                                   (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL3_1_write_en4(data)                                         (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL3_1_dbg_scpu_chk_en(data)                                   (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL3_1_write_en3(data)                                         (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL3_1_dbg_wr_chk(data)                                        (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL3_1_write_en2(data)                                         (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL3_1_dbg_id_chk(data)                                        (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL3_1_write_en1(data)                                         (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL3_1_dbg_en(data)                                            (0x00000001&(data))
#define  SB2_DBG_CTRL3_1_get_write_en9(data)                                     ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL3_1_get_dbg_acpu2_chk_en(data)                              ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL3_1_get_write_en8(data)                                     ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL3_1_get_dbg_kcpu_chk_en(data)                               ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL3_1_get_write_en7(data)                                     ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL3_1_get_dbg_vcpu2_chk_en(data)                              ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL3_1_get_write_en6(data)                                     ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL3_1_get_dbg_acpu_chk_en(data)                               ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL3_1_get_write_en5(data)                                     ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL3_1_get_dbg_vcpu_chk_en(data)                               ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL3_1_get_write_en4(data)                                     ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL3_1_get_dbg_scpu_chk_en(data)                               ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL3_1_get_write_en3(data)                                     ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL3_1_get_dbg_wr_chk(data)                                    ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL3_1_get_write_en2(data)                                     ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL3_1_get_dbg_id_chk(data)                                    ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL3_1_get_write_en1(data)                                     ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL3_1_get_dbg_en(data)                                        (0x00000001&(data))

#define  SB2_DBG_CTRL3_2                                                        0x1801AAC8
#define  SB2_DBG_CTRL3_2_reg_addr                                                "0xB801AAC8"
#define  SB2_DBG_CTRL3_2_reg                                                     0xB801AAC8
#define  SB2_DBG_CTRL3_2_inst_addr                                               "0x00C9"
#define  set_SB2_DBG_CTRL3_2_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_CTRL3_2_reg)=data)
#define  get_SB2_DBG_CTRL3_2_reg                                                 (*((volatile unsigned int*)SB2_DBG_CTRL3_2_reg))
#define  SB2_DBG_CTRL3_2_write_en9_shift                                         (19)
#define  SB2_DBG_CTRL3_2_dbg_acpu2_chk_en_shift                                  (18)
#define  SB2_DBG_CTRL3_2_write_en8_shift                                         (17)
#define  SB2_DBG_CTRL3_2_dbg_kcpu_chk_en_shift                                   (16)
#define  SB2_DBG_CTRL3_2_write_en7_shift                                         (15)
#define  SB2_DBG_CTRL3_2_dbg_vcpu2_chk_en_shift                                  (14)
#define  SB2_DBG_CTRL3_2_write_en6_shift                                         (13)
#define  SB2_DBG_CTRL3_2_dbg_acpu_chk_en_shift                                   (12)
#define  SB2_DBG_CTRL3_2_write_en5_shift                                         (11)
#define  SB2_DBG_CTRL3_2_dbg_vcpu_chk_en_shift                                   (10)
#define  SB2_DBG_CTRL3_2_write_en4_shift                                         (9)
#define  SB2_DBG_CTRL3_2_dbg_scpu_chk_en_shift                                   (8)
#define  SB2_DBG_CTRL3_2_write_en3_shift                                         (7)
#define  SB2_DBG_CTRL3_2_dbg_wr_chk_shift                                        (5)
#define  SB2_DBG_CTRL3_2_write_en2_shift                                         (4)
#define  SB2_DBG_CTRL3_2_dbg_id_chk_shift                                        (2)
#define  SB2_DBG_CTRL3_2_write_en1_shift                                         (1)
#define  SB2_DBG_CTRL3_2_dbg_en_shift                                            (0)
#define  SB2_DBG_CTRL3_2_write_en9_mask                                          (0x00080000)
#define  SB2_DBG_CTRL3_2_dbg_acpu2_chk_en_mask                                   (0x00040000)
#define  SB2_DBG_CTRL3_2_write_en8_mask                                          (0x00020000)
#define  SB2_DBG_CTRL3_2_dbg_kcpu_chk_en_mask                                    (0x00010000)
#define  SB2_DBG_CTRL3_2_write_en7_mask                                          (0x00008000)
#define  SB2_DBG_CTRL3_2_dbg_vcpu2_chk_en_mask                                   (0x00004000)
#define  SB2_DBG_CTRL3_2_write_en6_mask                                          (0x00002000)
#define  SB2_DBG_CTRL3_2_dbg_acpu_chk_en_mask                                    (0x00001000)
#define  SB2_DBG_CTRL3_2_write_en5_mask                                          (0x00000800)
#define  SB2_DBG_CTRL3_2_dbg_vcpu_chk_en_mask                                    (0x00000400)
#define  SB2_DBG_CTRL3_2_write_en4_mask                                          (0x00000200)
#define  SB2_DBG_CTRL3_2_dbg_scpu_chk_en_mask                                    (0x00000100)
#define  SB2_DBG_CTRL3_2_write_en3_mask                                          (0x00000080)
#define  SB2_DBG_CTRL3_2_dbg_wr_chk_mask                                         (0x00000060)
#define  SB2_DBG_CTRL3_2_write_en2_mask                                          (0x00000010)
#define  SB2_DBG_CTRL3_2_dbg_id_chk_mask                                         (0x0000000C)
#define  SB2_DBG_CTRL3_2_write_en1_mask                                          (0x00000002)
#define  SB2_DBG_CTRL3_2_dbg_en_mask                                             (0x00000001)
#define  SB2_DBG_CTRL3_2_write_en9(data)                                         (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL3_2_dbg_acpu2_chk_en(data)                                  (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL3_2_write_en8(data)                                         (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL3_2_dbg_kcpu_chk_en(data)                                   (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL3_2_write_en7(data)                                         (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL3_2_dbg_vcpu2_chk_en(data)                                  (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL3_2_write_en6(data)                                         (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL3_2_dbg_acpu_chk_en(data)                                   (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL3_2_write_en5(data)                                         (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL3_2_dbg_vcpu_chk_en(data)                                   (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL3_2_write_en4(data)                                         (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL3_2_dbg_scpu_chk_en(data)                                   (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL3_2_write_en3(data)                                         (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL3_2_dbg_wr_chk(data)                                        (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL3_2_write_en2(data)                                         (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL3_2_dbg_id_chk(data)                                        (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL3_2_write_en1(data)                                         (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL3_2_dbg_en(data)                                            (0x00000001&(data))
#define  SB2_DBG_CTRL3_2_get_write_en9(data)                                     ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL3_2_get_dbg_acpu2_chk_en(data)                              ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL3_2_get_write_en8(data)                                     ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL3_2_get_dbg_kcpu_chk_en(data)                               ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL3_2_get_write_en7(data)                                     ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL3_2_get_dbg_vcpu2_chk_en(data)                              ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL3_2_get_write_en6(data)                                     ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL3_2_get_dbg_acpu_chk_en(data)                               ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL3_2_get_write_en5(data)                                     ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL3_2_get_dbg_vcpu_chk_en(data)                               ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL3_2_get_write_en4(data)                                     ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL3_2_get_dbg_scpu_chk_en(data)                               ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL3_2_get_write_en3(data)                                     ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL3_2_get_dbg_wr_chk(data)                                    ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL3_2_get_write_en2(data)                                     ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL3_2_get_dbg_id_chk(data)                                    ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL3_2_get_write_en1(data)                                     ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL3_2_get_dbg_en(data)                                        (0x00000001&(data))

#define  SB2_DBG_CTRL3_3                                                        0x1801AACC
#define  SB2_DBG_CTRL3_3_reg_addr                                                "0xB801AACC"
#define  SB2_DBG_CTRL3_3_reg                                                     0xB801AACC
#define  SB2_DBG_CTRL3_3_inst_addr                                               "0x00CA"
#define  set_SB2_DBG_CTRL3_3_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_CTRL3_3_reg)=data)
#define  get_SB2_DBG_CTRL3_3_reg                                                 (*((volatile unsigned int*)SB2_DBG_CTRL3_3_reg))
#define  SB2_DBG_CTRL3_3_write_en9_shift                                         (19)
#define  SB2_DBG_CTRL3_3_dbg_acpu2_chk_en_shift                                  (18)
#define  SB2_DBG_CTRL3_3_write_en8_shift                                         (17)
#define  SB2_DBG_CTRL3_3_dbg_kcpu_chk_en_shift                                   (16)
#define  SB2_DBG_CTRL3_3_write_en7_shift                                         (15)
#define  SB2_DBG_CTRL3_3_dbg_vcpu2_chk_en_shift                                  (14)
#define  SB2_DBG_CTRL3_3_write_en6_shift                                         (13)
#define  SB2_DBG_CTRL3_3_dbg_acpu_chk_en_shift                                   (12)
#define  SB2_DBG_CTRL3_3_write_en5_shift                                         (11)
#define  SB2_DBG_CTRL3_3_dbg_vcpu_chk_en_shift                                   (10)
#define  SB2_DBG_CTRL3_3_write_en4_shift                                         (9)
#define  SB2_DBG_CTRL3_3_dbg_scpu_chk_en_shift                                   (8)
#define  SB2_DBG_CTRL3_3_write_en3_shift                                         (7)
#define  SB2_DBG_CTRL3_3_dbg_wr_chk_shift                                        (5)
#define  SB2_DBG_CTRL3_3_write_en2_shift                                         (4)
#define  SB2_DBG_CTRL3_3_dbg_id_chk_shift                                        (2)
#define  SB2_DBG_CTRL3_3_write_en1_shift                                         (1)
#define  SB2_DBG_CTRL3_3_dbg_en_shift                                            (0)
#define  SB2_DBG_CTRL3_3_write_en9_mask                                          (0x00080000)
#define  SB2_DBG_CTRL3_3_dbg_acpu2_chk_en_mask                                   (0x00040000)
#define  SB2_DBG_CTRL3_3_write_en8_mask                                          (0x00020000)
#define  SB2_DBG_CTRL3_3_dbg_kcpu_chk_en_mask                                    (0x00010000)
#define  SB2_DBG_CTRL3_3_write_en7_mask                                          (0x00008000)
#define  SB2_DBG_CTRL3_3_dbg_vcpu2_chk_en_mask                                   (0x00004000)
#define  SB2_DBG_CTRL3_3_write_en6_mask                                          (0x00002000)
#define  SB2_DBG_CTRL3_3_dbg_acpu_chk_en_mask                                    (0x00001000)
#define  SB2_DBG_CTRL3_3_write_en5_mask                                          (0x00000800)
#define  SB2_DBG_CTRL3_3_dbg_vcpu_chk_en_mask                                    (0x00000400)
#define  SB2_DBG_CTRL3_3_write_en4_mask                                          (0x00000200)
#define  SB2_DBG_CTRL3_3_dbg_scpu_chk_en_mask                                    (0x00000100)
#define  SB2_DBG_CTRL3_3_write_en3_mask                                          (0x00000080)
#define  SB2_DBG_CTRL3_3_dbg_wr_chk_mask                                         (0x00000060)
#define  SB2_DBG_CTRL3_3_write_en2_mask                                          (0x00000010)
#define  SB2_DBG_CTRL3_3_dbg_id_chk_mask                                         (0x0000000C)
#define  SB2_DBG_CTRL3_3_write_en1_mask                                          (0x00000002)
#define  SB2_DBG_CTRL3_3_dbg_en_mask                                             (0x00000001)
#define  SB2_DBG_CTRL3_3_write_en9(data)                                         (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL3_3_dbg_acpu2_chk_en(data)                                  (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL3_3_write_en8(data)                                         (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL3_3_dbg_kcpu_chk_en(data)                                   (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL3_3_write_en7(data)                                         (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL3_3_dbg_vcpu2_chk_en(data)                                  (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL3_3_write_en6(data)                                         (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL3_3_dbg_acpu_chk_en(data)                                   (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL3_3_write_en5(data)                                         (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL3_3_dbg_vcpu_chk_en(data)                                   (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL3_3_write_en4(data)                                         (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL3_3_dbg_scpu_chk_en(data)                                   (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL3_3_write_en3(data)                                         (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL3_3_dbg_wr_chk(data)                                        (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL3_3_write_en2(data)                                         (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL3_3_dbg_id_chk(data)                                        (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL3_3_write_en1(data)                                         (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL3_3_dbg_en(data)                                            (0x00000001&(data))
#define  SB2_DBG_CTRL3_3_get_write_en9(data)                                     ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL3_3_get_dbg_acpu2_chk_en(data)                              ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL3_3_get_write_en8(data)                                     ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL3_3_get_dbg_kcpu_chk_en(data)                               ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL3_3_get_write_en7(data)                                     ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL3_3_get_dbg_vcpu2_chk_en(data)                              ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL3_3_get_write_en6(data)                                     ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL3_3_get_dbg_acpu_chk_en(data)                               ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL3_3_get_write_en5(data)                                     ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL3_3_get_dbg_vcpu_chk_en(data)                               ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL3_3_get_write_en4(data)                                     ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL3_3_get_dbg_scpu_chk_en(data)                               ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL3_3_get_write_en3(data)                                     ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL3_3_get_dbg_wr_chk(data)                                    ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL3_3_get_write_en2(data)                                     ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL3_3_get_dbg_id_chk(data)                                    ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL3_3_get_write_en1(data)                                     ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL3_3_get_dbg_en(data)                                        (0x00000001&(data))

#define  SB2_DBG_CTRL3_4                                                        0x1801AAD0
#define  SB2_DBG_CTRL3_4_reg_addr                                                "0xB801AAD0"
#define  SB2_DBG_CTRL3_4_reg                                                     0xB801AAD0
#define  SB2_DBG_CTRL3_4_inst_addr                                               "0x00CB"
#define  set_SB2_DBG_CTRL3_4_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_CTRL3_4_reg)=data)
#define  get_SB2_DBG_CTRL3_4_reg                                                 (*((volatile unsigned int*)SB2_DBG_CTRL3_4_reg))
#define  SB2_DBG_CTRL3_4_write_en9_shift                                         (19)
#define  SB2_DBG_CTRL3_4_dbg_acpu2_chk_en_shift                                  (18)
#define  SB2_DBG_CTRL3_4_write_en8_shift                                         (17)
#define  SB2_DBG_CTRL3_4_dbg_kcpu_chk_en_shift                                   (16)
#define  SB2_DBG_CTRL3_4_write_en7_shift                                         (15)
#define  SB2_DBG_CTRL3_4_dbg_vcpu2_chk_en_shift                                  (14)
#define  SB2_DBG_CTRL3_4_write_en6_shift                                         (13)
#define  SB2_DBG_CTRL3_4_dbg_acpu_chk_en_shift                                   (12)
#define  SB2_DBG_CTRL3_4_write_en5_shift                                         (11)
#define  SB2_DBG_CTRL3_4_dbg_vcpu_chk_en_shift                                   (10)
#define  SB2_DBG_CTRL3_4_write_en4_shift                                         (9)
#define  SB2_DBG_CTRL3_4_dbg_scpu_chk_en_shift                                   (8)
#define  SB2_DBG_CTRL3_4_write_en3_shift                                         (7)
#define  SB2_DBG_CTRL3_4_dbg_wr_chk_shift                                        (5)
#define  SB2_DBG_CTRL3_4_write_en2_shift                                         (4)
#define  SB2_DBG_CTRL3_4_dbg_id_chk_shift                                        (2)
#define  SB2_DBG_CTRL3_4_write_en1_shift                                         (1)
#define  SB2_DBG_CTRL3_4_dbg_en_shift                                            (0)
#define  SB2_DBG_CTRL3_4_write_en9_mask                                          (0x00080000)
#define  SB2_DBG_CTRL3_4_dbg_acpu2_chk_en_mask                                   (0x00040000)
#define  SB2_DBG_CTRL3_4_write_en8_mask                                          (0x00020000)
#define  SB2_DBG_CTRL3_4_dbg_kcpu_chk_en_mask                                    (0x00010000)
#define  SB2_DBG_CTRL3_4_write_en7_mask                                          (0x00008000)
#define  SB2_DBG_CTRL3_4_dbg_vcpu2_chk_en_mask                                   (0x00004000)
#define  SB2_DBG_CTRL3_4_write_en6_mask                                          (0x00002000)
#define  SB2_DBG_CTRL3_4_dbg_acpu_chk_en_mask                                    (0x00001000)
#define  SB2_DBG_CTRL3_4_write_en5_mask                                          (0x00000800)
#define  SB2_DBG_CTRL3_4_dbg_vcpu_chk_en_mask                                    (0x00000400)
#define  SB2_DBG_CTRL3_4_write_en4_mask                                          (0x00000200)
#define  SB2_DBG_CTRL3_4_dbg_scpu_chk_en_mask                                    (0x00000100)
#define  SB2_DBG_CTRL3_4_write_en3_mask                                          (0x00000080)
#define  SB2_DBG_CTRL3_4_dbg_wr_chk_mask                                         (0x00000060)
#define  SB2_DBG_CTRL3_4_write_en2_mask                                          (0x00000010)
#define  SB2_DBG_CTRL3_4_dbg_id_chk_mask                                         (0x0000000C)
#define  SB2_DBG_CTRL3_4_write_en1_mask                                          (0x00000002)
#define  SB2_DBG_CTRL3_4_dbg_en_mask                                             (0x00000001)
#define  SB2_DBG_CTRL3_4_write_en9(data)                                         (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL3_4_dbg_acpu2_chk_en(data)                                  (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL3_4_write_en8(data)                                         (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL3_4_dbg_kcpu_chk_en(data)                                   (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL3_4_write_en7(data)                                         (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL3_4_dbg_vcpu2_chk_en(data)                                  (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL3_4_write_en6(data)                                         (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL3_4_dbg_acpu_chk_en(data)                                   (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL3_4_write_en5(data)                                         (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL3_4_dbg_vcpu_chk_en(data)                                   (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL3_4_write_en4(data)                                         (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL3_4_dbg_scpu_chk_en(data)                                   (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL3_4_write_en3(data)                                         (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL3_4_dbg_wr_chk(data)                                        (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL3_4_write_en2(data)                                         (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL3_4_dbg_id_chk(data)                                        (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL3_4_write_en1(data)                                         (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL3_4_dbg_en(data)                                            (0x00000001&(data))
#define  SB2_DBG_CTRL3_4_get_write_en9(data)                                     ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL3_4_get_dbg_acpu2_chk_en(data)                              ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL3_4_get_write_en8(data)                                     ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL3_4_get_dbg_kcpu_chk_en(data)                               ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL3_4_get_write_en7(data)                                     ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL3_4_get_dbg_vcpu2_chk_en(data)                              ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL3_4_get_write_en6(data)                                     ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL3_4_get_dbg_acpu_chk_en(data)                               ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL3_4_get_write_en5(data)                                     ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL3_4_get_dbg_vcpu_chk_en(data)                               ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL3_4_get_write_en4(data)                                     ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL3_4_get_dbg_scpu_chk_en(data)                               ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL3_4_get_write_en3(data)                                     ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL3_4_get_dbg_wr_chk(data)                                    ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL3_4_get_write_en2(data)                                     ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL3_4_get_dbg_id_chk(data)                                    ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL3_4_get_write_en1(data)                                     ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL3_4_get_dbg_en(data)                                        (0x00000001&(data))

#define  SB2_DBG_CTRL3_5                                                        0x1801AAD4
#define  SB2_DBG_CTRL3_5_reg_addr                                                "0xB801AAD4"
#define  SB2_DBG_CTRL3_5_reg                                                     0xB801AAD4
#define  SB2_DBG_CTRL3_5_inst_addr                                               "0x00CC"
#define  set_SB2_DBG_CTRL3_5_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_CTRL3_5_reg)=data)
#define  get_SB2_DBG_CTRL3_5_reg                                                 (*((volatile unsigned int*)SB2_DBG_CTRL3_5_reg))
#define  SB2_DBG_CTRL3_5_write_en9_shift                                         (19)
#define  SB2_DBG_CTRL3_5_dbg_acpu2_chk_en_shift                                  (18)
#define  SB2_DBG_CTRL3_5_write_en8_shift                                         (17)
#define  SB2_DBG_CTRL3_5_dbg_kcpu_chk_en_shift                                   (16)
#define  SB2_DBG_CTRL3_5_write_en7_shift                                         (15)
#define  SB2_DBG_CTRL3_5_dbg_vcpu2_chk_en_shift                                  (14)
#define  SB2_DBG_CTRL3_5_write_en6_shift                                         (13)
#define  SB2_DBG_CTRL3_5_dbg_acpu_chk_en_shift                                   (12)
#define  SB2_DBG_CTRL3_5_write_en5_shift                                         (11)
#define  SB2_DBG_CTRL3_5_dbg_vcpu_chk_en_shift                                   (10)
#define  SB2_DBG_CTRL3_5_write_en4_shift                                         (9)
#define  SB2_DBG_CTRL3_5_dbg_scpu_chk_en_shift                                   (8)
#define  SB2_DBG_CTRL3_5_write_en3_shift                                         (7)
#define  SB2_DBG_CTRL3_5_dbg_wr_chk_shift                                        (5)
#define  SB2_DBG_CTRL3_5_write_en2_shift                                         (4)
#define  SB2_DBG_CTRL3_5_dbg_id_chk_shift                                        (2)
#define  SB2_DBG_CTRL3_5_write_en1_shift                                         (1)
#define  SB2_DBG_CTRL3_5_dbg_en_shift                                            (0)
#define  SB2_DBG_CTRL3_5_write_en9_mask                                          (0x00080000)
#define  SB2_DBG_CTRL3_5_dbg_acpu2_chk_en_mask                                   (0x00040000)
#define  SB2_DBG_CTRL3_5_write_en8_mask                                          (0x00020000)
#define  SB2_DBG_CTRL3_5_dbg_kcpu_chk_en_mask                                    (0x00010000)
#define  SB2_DBG_CTRL3_5_write_en7_mask                                          (0x00008000)
#define  SB2_DBG_CTRL3_5_dbg_vcpu2_chk_en_mask                                   (0x00004000)
#define  SB2_DBG_CTRL3_5_write_en6_mask                                          (0x00002000)
#define  SB2_DBG_CTRL3_5_dbg_acpu_chk_en_mask                                    (0x00001000)
#define  SB2_DBG_CTRL3_5_write_en5_mask                                          (0x00000800)
#define  SB2_DBG_CTRL3_5_dbg_vcpu_chk_en_mask                                    (0x00000400)
#define  SB2_DBG_CTRL3_5_write_en4_mask                                          (0x00000200)
#define  SB2_DBG_CTRL3_5_dbg_scpu_chk_en_mask                                    (0x00000100)
#define  SB2_DBG_CTRL3_5_write_en3_mask                                          (0x00000080)
#define  SB2_DBG_CTRL3_5_dbg_wr_chk_mask                                         (0x00000060)
#define  SB2_DBG_CTRL3_5_write_en2_mask                                          (0x00000010)
#define  SB2_DBG_CTRL3_5_dbg_id_chk_mask                                         (0x0000000C)
#define  SB2_DBG_CTRL3_5_write_en1_mask                                          (0x00000002)
#define  SB2_DBG_CTRL3_5_dbg_en_mask                                             (0x00000001)
#define  SB2_DBG_CTRL3_5_write_en9(data)                                         (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL3_5_dbg_acpu2_chk_en(data)                                  (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL3_5_write_en8(data)                                         (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL3_5_dbg_kcpu_chk_en(data)                                   (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL3_5_write_en7(data)                                         (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL3_5_dbg_vcpu2_chk_en(data)                                  (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL3_5_write_en6(data)                                         (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL3_5_dbg_acpu_chk_en(data)                                   (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL3_5_write_en5(data)                                         (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL3_5_dbg_vcpu_chk_en(data)                                   (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL3_5_write_en4(data)                                         (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL3_5_dbg_scpu_chk_en(data)                                   (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL3_5_write_en3(data)                                         (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL3_5_dbg_wr_chk(data)                                        (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL3_5_write_en2(data)                                         (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL3_5_dbg_id_chk(data)                                        (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL3_5_write_en1(data)                                         (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL3_5_dbg_en(data)                                            (0x00000001&(data))
#define  SB2_DBG_CTRL3_5_get_write_en9(data)                                     ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL3_5_get_dbg_acpu2_chk_en(data)                              ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL3_5_get_write_en8(data)                                     ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL3_5_get_dbg_kcpu_chk_en(data)                               ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL3_5_get_write_en7(data)                                     ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL3_5_get_dbg_vcpu2_chk_en(data)                              ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL3_5_get_write_en6(data)                                     ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL3_5_get_dbg_acpu_chk_en(data)                               ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL3_5_get_write_en5(data)                                     ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL3_5_get_dbg_vcpu_chk_en(data)                               ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL3_5_get_write_en4(data)                                     ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL3_5_get_dbg_scpu_chk_en(data)                               ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL3_5_get_write_en3(data)                                     ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL3_5_get_dbg_wr_chk(data)                                    ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL3_5_get_write_en2(data)                                     ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL3_5_get_dbg_id_chk(data)                                    ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL3_5_get_write_en1(data)                                     ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL3_5_get_dbg_en(data)                                        (0x00000001&(data))

#define  SB2_DBG_CTRL3_6                                                        0x1801AAD8
#define  SB2_DBG_CTRL3_6_reg_addr                                                "0xB801AAD8"
#define  SB2_DBG_CTRL3_6_reg                                                     0xB801AAD8
#define  SB2_DBG_CTRL3_6_inst_addr                                               "0x00CD"
#define  set_SB2_DBG_CTRL3_6_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_CTRL3_6_reg)=data)
#define  get_SB2_DBG_CTRL3_6_reg                                                 (*((volatile unsigned int*)SB2_DBG_CTRL3_6_reg))
#define  SB2_DBG_CTRL3_6_write_en9_shift                                         (19)
#define  SB2_DBG_CTRL3_6_dbg_acpu2_chk_en_shift                                  (18)
#define  SB2_DBG_CTRL3_6_write_en8_shift                                         (17)
#define  SB2_DBG_CTRL3_6_dbg_kcpu_chk_en_shift                                   (16)
#define  SB2_DBG_CTRL3_6_write_en7_shift                                         (15)
#define  SB2_DBG_CTRL3_6_dbg_vcpu2_chk_en_shift                                  (14)
#define  SB2_DBG_CTRL3_6_write_en6_shift                                         (13)
#define  SB2_DBG_CTRL3_6_dbg_acpu_chk_en_shift                                   (12)
#define  SB2_DBG_CTRL3_6_write_en5_shift                                         (11)
#define  SB2_DBG_CTRL3_6_dbg_vcpu_chk_en_shift                                   (10)
#define  SB2_DBG_CTRL3_6_write_en4_shift                                         (9)
#define  SB2_DBG_CTRL3_6_dbg_scpu_chk_en_shift                                   (8)
#define  SB2_DBG_CTRL3_6_write_en3_shift                                         (7)
#define  SB2_DBG_CTRL3_6_dbg_wr_chk_shift                                        (5)
#define  SB2_DBG_CTRL3_6_write_en2_shift                                         (4)
#define  SB2_DBG_CTRL3_6_dbg_id_chk_shift                                        (2)
#define  SB2_DBG_CTRL3_6_write_en1_shift                                         (1)
#define  SB2_DBG_CTRL3_6_dbg_en_shift                                            (0)
#define  SB2_DBG_CTRL3_6_write_en9_mask                                          (0x00080000)
#define  SB2_DBG_CTRL3_6_dbg_acpu2_chk_en_mask                                   (0x00040000)
#define  SB2_DBG_CTRL3_6_write_en8_mask                                          (0x00020000)
#define  SB2_DBG_CTRL3_6_dbg_kcpu_chk_en_mask                                    (0x00010000)
#define  SB2_DBG_CTRL3_6_write_en7_mask                                          (0x00008000)
#define  SB2_DBG_CTRL3_6_dbg_vcpu2_chk_en_mask                                   (0x00004000)
#define  SB2_DBG_CTRL3_6_write_en6_mask                                          (0x00002000)
#define  SB2_DBG_CTRL3_6_dbg_acpu_chk_en_mask                                    (0x00001000)
#define  SB2_DBG_CTRL3_6_write_en5_mask                                          (0x00000800)
#define  SB2_DBG_CTRL3_6_dbg_vcpu_chk_en_mask                                    (0x00000400)
#define  SB2_DBG_CTRL3_6_write_en4_mask                                          (0x00000200)
#define  SB2_DBG_CTRL3_6_dbg_scpu_chk_en_mask                                    (0x00000100)
#define  SB2_DBG_CTRL3_6_write_en3_mask                                          (0x00000080)
#define  SB2_DBG_CTRL3_6_dbg_wr_chk_mask                                         (0x00000060)
#define  SB2_DBG_CTRL3_6_write_en2_mask                                          (0x00000010)
#define  SB2_DBG_CTRL3_6_dbg_id_chk_mask                                         (0x0000000C)
#define  SB2_DBG_CTRL3_6_write_en1_mask                                          (0x00000002)
#define  SB2_DBG_CTRL3_6_dbg_en_mask                                             (0x00000001)
#define  SB2_DBG_CTRL3_6_write_en9(data)                                         (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL3_6_dbg_acpu2_chk_en(data)                                  (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL3_6_write_en8(data)                                         (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL3_6_dbg_kcpu_chk_en(data)                                   (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL3_6_write_en7(data)                                         (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL3_6_dbg_vcpu2_chk_en(data)                                  (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL3_6_write_en6(data)                                         (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL3_6_dbg_acpu_chk_en(data)                                   (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL3_6_write_en5(data)                                         (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL3_6_dbg_vcpu_chk_en(data)                                   (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL3_6_write_en4(data)                                         (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL3_6_dbg_scpu_chk_en(data)                                   (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL3_6_write_en3(data)                                         (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL3_6_dbg_wr_chk(data)                                        (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL3_6_write_en2(data)                                         (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL3_6_dbg_id_chk(data)                                        (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL3_6_write_en1(data)                                         (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL3_6_dbg_en(data)                                            (0x00000001&(data))
#define  SB2_DBG_CTRL3_6_get_write_en9(data)                                     ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL3_6_get_dbg_acpu2_chk_en(data)                              ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL3_6_get_write_en8(data)                                     ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL3_6_get_dbg_kcpu_chk_en(data)                               ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL3_6_get_write_en7(data)                                     ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL3_6_get_dbg_vcpu2_chk_en(data)                              ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL3_6_get_write_en6(data)                                     ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL3_6_get_dbg_acpu_chk_en(data)                               ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL3_6_get_write_en5(data)                                     ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL3_6_get_dbg_vcpu_chk_en(data)                               ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL3_6_get_write_en4(data)                                     ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL3_6_get_dbg_scpu_chk_en(data)                               ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL3_6_get_write_en3(data)                                     ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL3_6_get_dbg_wr_chk(data)                                    ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL3_6_get_write_en2(data)                                     ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL3_6_get_dbg_id_chk(data)                                    ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL3_6_get_write_en1(data)                                     ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL3_6_get_dbg_en(data)                                        (0x00000001&(data))

#define  SB2_DBG_CTRL3_7                                                        0x1801AADC
#define  SB2_DBG_CTRL3_7_reg_addr                                                "0xB801AADC"
#define  SB2_DBG_CTRL3_7_reg                                                     0xB801AADC
#define  SB2_DBG_CTRL3_7_inst_addr                                               "0x00CE"
#define  set_SB2_DBG_CTRL3_7_reg(data)                                           (*((volatile unsigned int*)SB2_DBG_CTRL3_7_reg)=data)
#define  get_SB2_DBG_CTRL3_7_reg                                                 (*((volatile unsigned int*)SB2_DBG_CTRL3_7_reg))
#define  SB2_DBG_CTRL3_7_write_en9_shift                                         (19)
#define  SB2_DBG_CTRL3_7_dbg_acpu2_chk_en_shift                                  (18)
#define  SB2_DBG_CTRL3_7_write_en8_shift                                         (17)
#define  SB2_DBG_CTRL3_7_dbg_kcpu_chk_en_shift                                   (16)
#define  SB2_DBG_CTRL3_7_write_en7_shift                                         (15)
#define  SB2_DBG_CTRL3_7_dbg_vcpu2_chk_en_shift                                  (14)
#define  SB2_DBG_CTRL3_7_write_en6_shift                                         (13)
#define  SB2_DBG_CTRL3_7_dbg_acpu_chk_en_shift                                   (12)
#define  SB2_DBG_CTRL3_7_write_en5_shift                                         (11)
#define  SB2_DBG_CTRL3_7_dbg_vcpu_chk_en_shift                                   (10)
#define  SB2_DBG_CTRL3_7_write_en4_shift                                         (9)
#define  SB2_DBG_CTRL3_7_dbg_scpu_chk_en_shift                                   (8)
#define  SB2_DBG_CTRL3_7_write_en3_shift                                         (7)
#define  SB2_DBG_CTRL3_7_dbg_wr_chk_shift                                        (5)
#define  SB2_DBG_CTRL3_7_write_en2_shift                                         (4)
#define  SB2_DBG_CTRL3_7_dbg_id_chk_shift                                        (2)
#define  SB2_DBG_CTRL3_7_write_en1_shift                                         (1)
#define  SB2_DBG_CTRL3_7_dbg_en_shift                                            (0)
#define  SB2_DBG_CTRL3_7_write_en9_mask                                          (0x00080000)
#define  SB2_DBG_CTRL3_7_dbg_acpu2_chk_en_mask                                   (0x00040000)
#define  SB2_DBG_CTRL3_7_write_en8_mask                                          (0x00020000)
#define  SB2_DBG_CTRL3_7_dbg_kcpu_chk_en_mask                                    (0x00010000)
#define  SB2_DBG_CTRL3_7_write_en7_mask                                          (0x00008000)
#define  SB2_DBG_CTRL3_7_dbg_vcpu2_chk_en_mask                                   (0x00004000)
#define  SB2_DBG_CTRL3_7_write_en6_mask                                          (0x00002000)
#define  SB2_DBG_CTRL3_7_dbg_acpu_chk_en_mask                                    (0x00001000)
#define  SB2_DBG_CTRL3_7_write_en5_mask                                          (0x00000800)
#define  SB2_DBG_CTRL3_7_dbg_vcpu_chk_en_mask                                    (0x00000400)
#define  SB2_DBG_CTRL3_7_write_en4_mask                                          (0x00000200)
#define  SB2_DBG_CTRL3_7_dbg_scpu_chk_en_mask                                    (0x00000100)
#define  SB2_DBG_CTRL3_7_write_en3_mask                                          (0x00000080)
#define  SB2_DBG_CTRL3_7_dbg_wr_chk_mask                                         (0x00000060)
#define  SB2_DBG_CTRL3_7_write_en2_mask                                          (0x00000010)
#define  SB2_DBG_CTRL3_7_dbg_id_chk_mask                                         (0x0000000C)
#define  SB2_DBG_CTRL3_7_write_en1_mask                                          (0x00000002)
#define  SB2_DBG_CTRL3_7_dbg_en_mask                                             (0x00000001)
#define  SB2_DBG_CTRL3_7_write_en9(data)                                         (0x00080000&((data)<<19))
#define  SB2_DBG_CTRL3_7_dbg_acpu2_chk_en(data)                                  (0x00040000&((data)<<18))
#define  SB2_DBG_CTRL3_7_write_en8(data)                                         (0x00020000&((data)<<17))
#define  SB2_DBG_CTRL3_7_dbg_kcpu_chk_en(data)                                   (0x00010000&((data)<<16))
#define  SB2_DBG_CTRL3_7_write_en7(data)                                         (0x00008000&((data)<<15))
#define  SB2_DBG_CTRL3_7_dbg_vcpu2_chk_en(data)                                  (0x00004000&((data)<<14))
#define  SB2_DBG_CTRL3_7_write_en6(data)                                         (0x00002000&((data)<<13))
#define  SB2_DBG_CTRL3_7_dbg_acpu_chk_en(data)                                   (0x00001000&((data)<<12))
#define  SB2_DBG_CTRL3_7_write_en5(data)                                         (0x00000800&((data)<<11))
#define  SB2_DBG_CTRL3_7_dbg_vcpu_chk_en(data)                                   (0x00000400&((data)<<10))
#define  SB2_DBG_CTRL3_7_write_en4(data)                                         (0x00000200&((data)<<9))
#define  SB2_DBG_CTRL3_7_dbg_scpu_chk_en(data)                                   (0x00000100&((data)<<8))
#define  SB2_DBG_CTRL3_7_write_en3(data)                                         (0x00000080&((data)<<7))
#define  SB2_DBG_CTRL3_7_dbg_wr_chk(data)                                        (0x00000060&((data)<<5))
#define  SB2_DBG_CTRL3_7_write_en2(data)                                         (0x00000010&((data)<<4))
#define  SB2_DBG_CTRL3_7_dbg_id_chk(data)                                        (0x0000000C&((data)<<2))
#define  SB2_DBG_CTRL3_7_write_en1(data)                                         (0x00000002&((data)<<1))
#define  SB2_DBG_CTRL3_7_dbg_en(data)                                            (0x00000001&(data))
#define  SB2_DBG_CTRL3_7_get_write_en9(data)                                     ((0x00080000&(data))>>19)
#define  SB2_DBG_CTRL3_7_get_dbg_acpu2_chk_en(data)                              ((0x00040000&(data))>>18)
#define  SB2_DBG_CTRL3_7_get_write_en8(data)                                     ((0x00020000&(data))>>17)
#define  SB2_DBG_CTRL3_7_get_dbg_kcpu_chk_en(data)                               ((0x00010000&(data))>>16)
#define  SB2_DBG_CTRL3_7_get_write_en7(data)                                     ((0x00008000&(data))>>15)
#define  SB2_DBG_CTRL3_7_get_dbg_vcpu2_chk_en(data)                              ((0x00004000&(data))>>14)
#define  SB2_DBG_CTRL3_7_get_write_en6(data)                                     ((0x00002000&(data))>>13)
#define  SB2_DBG_CTRL3_7_get_dbg_acpu_chk_en(data)                               ((0x00001000&(data))>>12)
#define  SB2_DBG_CTRL3_7_get_write_en5(data)                                     ((0x00000800&(data))>>11)
#define  SB2_DBG_CTRL3_7_get_dbg_vcpu_chk_en(data)                               ((0x00000400&(data))>>10)
#define  SB2_DBG_CTRL3_7_get_write_en4(data)                                     ((0x00000200&(data))>>9)
#define  SB2_DBG_CTRL3_7_get_dbg_scpu_chk_en(data)                               ((0x00000100&(data))>>8)
#define  SB2_DBG_CTRL3_7_get_write_en3(data)                                     ((0x00000080&(data))>>7)
#define  SB2_DBG_CTRL3_7_get_dbg_wr_chk(data)                                    ((0x00000060&(data))>>5)
#define  SB2_DBG_CTRL3_7_get_write_en2(data)                                     ((0x00000010&(data))>>4)
#define  SB2_DBG_CTRL3_7_get_dbg_id_chk(data)                                    ((0x0000000C&(data))>>2)
#define  SB2_DBG_CTRL3_7_get_write_en1(data)                                     ((0x00000002&(data))>>1)
#define  SB2_DBG_CTRL3_7_get_dbg_en(data)                                        (0x00000001&(data))

#define  SB2_NMI_CPU_INT                                                        0x1801AAE0
#define  SB2_NMI_CPU_INT_reg_addr                                                "0xB801AAE0"
#define  SB2_NMI_CPU_INT_reg                                                     0xB801AAE0
#define  SB2_NMI_CPU_INT_inst_addr                                               "0x00CF"
#define  set_SB2_NMI_CPU_INT_reg(data)                                           (*((volatile unsigned int*)SB2_NMI_CPU_INT_reg)=data)
#define  get_SB2_NMI_CPU_INT_reg                                                 (*((volatile unsigned int*)SB2_NMI_CPU_INT_reg))
#define  SB2_NMI_CPU_INT_int_sv2_shift                                           (5)
#define  SB2_NMI_CPU_INT_int_sa2_shift                                           (4)
#define  SB2_NMI_CPU_INT_int_sk_shift                                            (3)
#define  SB2_NMI_CPU_INT_int_sv_shift                                            (2)
#define  SB2_NMI_CPU_INT_int_sa_shift                                            (1)
#define  SB2_NMI_CPU_INT_write_data_shift                                        (0)
#define  SB2_NMI_CPU_INT_int_sv2_mask                                            (0x00000020)
#define  SB2_NMI_CPU_INT_int_sa2_mask                                            (0x00000010)
#define  SB2_NMI_CPU_INT_int_sk_mask                                             (0x00000008)
#define  SB2_NMI_CPU_INT_int_sv_mask                                             (0x00000004)
#define  SB2_NMI_CPU_INT_int_sa_mask                                             (0x00000002)
#define  SB2_NMI_CPU_INT_write_data_mask                                         (0x00000001)
#define  SB2_NMI_CPU_INT_int_sv2(data)                                           (0x00000020&((data)<<5))
#define  SB2_NMI_CPU_INT_int_sa2(data)                                           (0x00000010&((data)<<4))
#define  SB2_NMI_CPU_INT_int_sk(data)                                            (0x00000008&((data)<<3))
#define  SB2_NMI_CPU_INT_int_sv(data)                                            (0x00000004&((data)<<2))
#define  SB2_NMI_CPU_INT_int_sa(data)                                            (0x00000002&((data)<<1))
#define  SB2_NMI_CPU_INT_write_data(data)                                        (0x00000001&(data))
#define  SB2_NMI_CPU_INT_get_int_sv2(data)                                       ((0x00000020&(data))>>5)
#define  SB2_NMI_CPU_INT_get_int_sa2(data)                                       ((0x00000010&(data))>>4)
#define  SB2_NMI_CPU_INT_get_int_sk(data)                                        ((0x00000008&(data))>>3)
#define  SB2_NMI_CPU_INT_get_int_sv(data)                                        ((0x00000004&(data))>>2)
#define  SB2_NMI_CPU_INT_get_int_sa(data)                                        ((0x00000002&(data))>>1)
#define  SB2_NMI_CPU_INT_get_write_data(data)                                    (0x00000001&(data))

#define  SB2_NMI_CPU_INT_EN                                                     0x1801AAE4
#define  SB2_NMI_CPU_INT_EN_reg_addr                                             "0xB801AAE4"
#define  SB2_NMI_CPU_INT_EN_reg                                                  0xB801AAE4
#define  SB2_NMI_CPU_INT_EN_inst_addr                                            "0x00D0"
#define  set_SB2_NMI_CPU_INT_EN_reg(data)                                        (*((volatile unsigned int*)SB2_NMI_CPU_INT_EN_reg)=data)
#define  get_SB2_NMI_CPU_INT_EN_reg                                              (*((volatile unsigned int*)SB2_NMI_CPU_INT_EN_reg))
#define  SB2_NMI_CPU_INT_EN_int_sv2_en_shift                                     (5)
#define  SB2_NMI_CPU_INT_EN_int_sa2_en_shift                                     (4)
#define  SB2_NMI_CPU_INT_EN_int_sk_en_shift                                      (3)
#define  SB2_NMI_CPU_INT_EN_int_sv_en_shift                                      (2)
#define  SB2_NMI_CPU_INT_EN_int_sa_en_shift                                      (1)
#define  SB2_NMI_CPU_INT_EN_write_data_shift                                     (0)
#define  SB2_NMI_CPU_INT_EN_int_sv2_en_mask                                      (0x00000020)
#define  SB2_NMI_CPU_INT_EN_int_sa2_en_mask                                      (0x00000010)
#define  SB2_NMI_CPU_INT_EN_int_sk_en_mask                                       (0x00000008)
#define  SB2_NMI_CPU_INT_EN_int_sv_en_mask                                       (0x00000004)
#define  SB2_NMI_CPU_INT_EN_int_sa_en_mask                                       (0x00000002)
#define  SB2_NMI_CPU_INT_EN_write_data_mask                                      (0x00000001)
#define  SB2_NMI_CPU_INT_EN_int_sv2_en(data)                                     (0x00000020&((data)<<5))
#define  SB2_NMI_CPU_INT_EN_int_sa2_en(data)                                     (0x00000010&((data)<<4))
#define  SB2_NMI_CPU_INT_EN_int_sk_en(data)                                      (0x00000008&((data)<<3))
#define  SB2_NMI_CPU_INT_EN_int_sv_en(data)                                      (0x00000004&((data)<<2))
#define  SB2_NMI_CPU_INT_EN_int_sa_en(data)                                      (0x00000002&((data)<<1))
#define  SB2_NMI_CPU_INT_EN_write_data(data)                                     (0x00000001&(data))
#define  SB2_NMI_CPU_INT_EN_get_int_sv2_en(data)                                 ((0x00000020&(data))>>5)
#define  SB2_NMI_CPU_INT_EN_get_int_sa2_en(data)                                 ((0x00000010&(data))>>4)
#define  SB2_NMI_CPU_INT_EN_get_int_sk_en(data)                                  ((0x00000008&(data))>>3)
#define  SB2_NMI_CPU_INT_EN_get_int_sv_en(data)                                  ((0x00000004&(data))>>2)
#define  SB2_NMI_CPU_INT_EN_get_int_sa_en(data)                                  ((0x00000002&(data))>>1)
#define  SB2_NMI_CPU_INT_EN_get_write_data(data)                                 (0x00000001&(data))

#define  SB2_DBUS_CMD                                                           0x1801AB04
#define  SB2_DBUS_CMD_reg_addr                                                   "0xB801AB04"
#define  SB2_DBUS_CMD_reg                                                        0xB801AB04
#define  SB2_DBUS_CMD_inst_addr                                                  "0x00D1"
#define  set_SB2_DBUS_CMD_reg(data)                                              (*((volatile unsigned int*)SB2_DBUS_CMD_reg)=data)
#define  get_SB2_DBUS_CMD_reg                                                    (*((volatile unsigned int*)SB2_DBUS_CMD_reg))
#define  SB2_DBUS_CMD_addcmd_shift                                               (0)
#define  SB2_DBUS_CMD_addcmd_mask                                                (0xFFFFFFFF)
#define  SB2_DBUS_CMD_addcmd(data)                                               (0xFFFFFFFF&(data))
#define  SB2_DBUS_CMD_get_addcmd(data)                                           (0xFFFFFFFF&(data))

#define  SB2_DBUS_CMD2                                                          0x1801AB08
#define  SB2_DBUS_CMD2_reg_addr                                                  "0xB801AB08"
#define  SB2_DBUS_CMD2_reg                                                       0xB801AB08
#define  SB2_DBUS_CMD2_inst_addr                                                 "0x00D2"
#define  set_SB2_DBUS_CMD2_reg(data)                                             (*((volatile unsigned int*)SB2_DBUS_CMD2_reg)=data)
#define  get_SB2_DBUS_CMD2_reg                                                   (*((volatile unsigned int*)SB2_DBUS_CMD2_reg))
#define  SB2_DBUS_CMD2_addcmd_shift                                              (0)
#define  SB2_DBUS_CMD2_addcmd_mask                                               (0x0003FFFF)
#define  SB2_DBUS_CMD2_addcmd(data)                                              (0x0003FFFF&(data))
#define  SB2_DBUS_CMD2_get_addcmd(data)                                          (0x0003FFFF&(data))

#define  SB2_DBG3_0_0                                                           0x1801AB10
#define  SB2_DBG3_0_0_reg_addr                                                   "0xB801AB10"
#define  SB2_DBG3_0_0_reg                                                        0xB801AB10
#define  SB2_DBG3_0_0_inst_addr                                                  "0x00D3"
#define  set_SB2_DBG3_0_0_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_0_0_reg)=data)
#define  get_SB2_DBG3_0_0_reg                                                    (*((volatile unsigned int*)SB2_DBG3_0_0_reg))
#define  SB2_DBG3_0_0_dbg_target_addr_shift                                      (0)
#define  SB2_DBG3_0_0_dbg_target_addr_mask                                       (0x001FFFFF)
#define  SB2_DBG3_0_0_dbg_target_addr(data)                                      (0x001FFFFF&(data))
#define  SB2_DBG3_0_0_get_dbg_target_addr(data)                                  (0x001FFFFF&(data))

#define  SB2_DBG3_0_1                                                           0x1801AB14
#define  SB2_DBG3_0_1_reg_addr                                                   "0xB801AB14"
#define  SB2_DBG3_0_1_reg                                                        0xB801AB14
#define  SB2_DBG3_0_1_inst_addr                                                  "0x00D4"
#define  set_SB2_DBG3_0_1_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_0_1_reg)=data)
#define  get_SB2_DBG3_0_1_reg                                                    (*((volatile unsigned int*)SB2_DBG3_0_1_reg))
#define  SB2_DBG3_0_1_dbg_target_addr_shift                                      (0)
#define  SB2_DBG3_0_1_dbg_target_addr_mask                                       (0x001FFFFF)
#define  SB2_DBG3_0_1_dbg_target_addr(data)                                      (0x001FFFFF&(data))
#define  SB2_DBG3_0_1_get_dbg_target_addr(data)                                  (0x001FFFFF&(data))

#define  SB2_DBG3_0_2                                                           0x1801AB18
#define  SB2_DBG3_0_2_reg_addr                                                   "0xB801AB18"
#define  SB2_DBG3_0_2_reg                                                        0xB801AB18
#define  SB2_DBG3_0_2_inst_addr                                                  "0x00D5"
#define  set_SB2_DBG3_0_2_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_0_2_reg)=data)
#define  get_SB2_DBG3_0_2_reg                                                    (*((volatile unsigned int*)SB2_DBG3_0_2_reg))
#define  SB2_DBG3_0_2_dbg_target_addr_shift                                      (0)
#define  SB2_DBG3_0_2_dbg_target_addr_mask                                       (0x001FFFFF)
#define  SB2_DBG3_0_2_dbg_target_addr(data)                                      (0x001FFFFF&(data))
#define  SB2_DBG3_0_2_get_dbg_target_addr(data)                                  (0x001FFFFF&(data))

#define  SB2_DBG3_0_3                                                           0x1801AB1C
#define  SB2_DBG3_0_3_reg_addr                                                   "0xB801AB1C"
#define  SB2_DBG3_0_3_reg                                                        0xB801AB1C
#define  SB2_DBG3_0_3_inst_addr                                                  "0x00D6"
#define  set_SB2_DBG3_0_3_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_0_3_reg)=data)
#define  get_SB2_DBG3_0_3_reg                                                    (*((volatile unsigned int*)SB2_DBG3_0_3_reg))
#define  SB2_DBG3_0_3_dbg_target_addr_shift                                      (0)
#define  SB2_DBG3_0_3_dbg_target_addr_mask                                       (0x001FFFFF)
#define  SB2_DBG3_0_3_dbg_target_addr(data)                                      (0x001FFFFF&(data))
#define  SB2_DBG3_0_3_get_dbg_target_addr(data)                                  (0x001FFFFF&(data))

#define  SB2_DBG3_1_0                                                           0x1801AB20
#define  SB2_DBG3_1_0_reg_addr                                                   "0xB801AB20"
#define  SB2_DBG3_1_0_reg                                                        0xB801AB20
#define  SB2_DBG3_1_0_inst_addr                                                  "0x00D7"
#define  set_SB2_DBG3_1_0_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_1_0_reg)=data)
#define  get_SB2_DBG3_1_0_reg                                                    (*((volatile unsigned int*)SB2_DBG3_1_0_reg))
#define  SB2_DBG3_1_0_dbg_bit_monitor_shift                                      (0)
#define  SB2_DBG3_1_0_dbg_bit_monitor_mask                                       (0xFFFFFFFF)
#define  SB2_DBG3_1_0_dbg_bit_monitor(data)                                      (0xFFFFFFFF&(data))
#define  SB2_DBG3_1_0_get_dbg_bit_monitor(data)                                  (0xFFFFFFFF&(data))

#define  SB2_DBG3_1_1                                                           0x1801AB24
#define  SB2_DBG3_1_1_reg_addr                                                   "0xB801AB24"
#define  SB2_DBG3_1_1_reg                                                        0xB801AB24
#define  SB2_DBG3_1_1_inst_addr                                                  "0x00D8"
#define  set_SB2_DBG3_1_1_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_1_1_reg)=data)
#define  get_SB2_DBG3_1_1_reg                                                    (*((volatile unsigned int*)SB2_DBG3_1_1_reg))
#define  SB2_DBG3_1_1_dbg_bit_monitor_shift                                      (0)
#define  SB2_DBG3_1_1_dbg_bit_monitor_mask                                       (0xFFFFFFFF)
#define  SB2_DBG3_1_1_dbg_bit_monitor(data)                                      (0xFFFFFFFF&(data))
#define  SB2_DBG3_1_1_get_dbg_bit_monitor(data)                                  (0xFFFFFFFF&(data))

#define  SB2_DBG3_1_2                                                           0x1801AB28
#define  SB2_DBG3_1_2_reg_addr                                                   "0xB801AB28"
#define  SB2_DBG3_1_2_reg                                                        0xB801AB28
#define  SB2_DBG3_1_2_inst_addr                                                  "0x00D9"
#define  set_SB2_DBG3_1_2_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_1_2_reg)=data)
#define  get_SB2_DBG3_1_2_reg                                                    (*((volatile unsigned int*)SB2_DBG3_1_2_reg))
#define  SB2_DBG3_1_2_dbg_bit_monitor_shift                                      (0)
#define  SB2_DBG3_1_2_dbg_bit_monitor_mask                                       (0xFFFFFFFF)
#define  SB2_DBG3_1_2_dbg_bit_monitor(data)                                      (0xFFFFFFFF&(data))
#define  SB2_DBG3_1_2_get_dbg_bit_monitor(data)                                  (0xFFFFFFFF&(data))

#define  SB2_DBG3_1_3                                                           0x1801AB2C
#define  SB2_DBG3_1_3_reg_addr                                                   "0xB801AB2C"
#define  SB2_DBG3_1_3_reg                                                        0xB801AB2C
#define  SB2_DBG3_1_3_inst_addr                                                  "0x00DA"
#define  set_SB2_DBG3_1_3_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_1_3_reg)=data)
#define  get_SB2_DBG3_1_3_reg                                                    (*((volatile unsigned int*)SB2_DBG3_1_3_reg))
#define  SB2_DBG3_1_3_dbg_bit_monitor_shift                                      (0)
#define  SB2_DBG3_1_3_dbg_bit_monitor_mask                                       (0xFFFFFFFF)
#define  SB2_DBG3_1_3_dbg_bit_monitor(data)                                      (0xFFFFFFFF&(data))
#define  SB2_DBG3_1_3_get_dbg_bit_monitor(data)                                  (0xFFFFFFFF&(data))

#define  SB2_DBG3_2_0                                                           0x1801AB30
#define  SB2_DBG3_2_0_reg_addr                                                   "0xB801AB30"
#define  SB2_DBG3_2_0_reg                                                        0xB801AB30
#define  SB2_DBG3_2_0_inst_addr                                                  "0x00DB"
#define  set_SB2_DBG3_2_0_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_2_0_reg)=data)
#define  get_SB2_DBG3_2_0_reg                                                    (*((volatile unsigned int*)SB2_DBG3_2_0_reg))
#define  SB2_DBG3_2_0_dbg_data_monitor_shift                                     (0)
#define  SB2_DBG3_2_0_dbg_data_monitor_mask                                      (0xFFFFFFFF)
#define  SB2_DBG3_2_0_dbg_data_monitor(data)                                     (0xFFFFFFFF&(data))
#define  SB2_DBG3_2_0_get_dbg_data_monitor(data)                                 (0xFFFFFFFF&(data))

#define  SB2_DBG3_2_1                                                           0x1801AB34
#define  SB2_DBG3_2_1_reg_addr                                                   "0xB801AB34"
#define  SB2_DBG3_2_1_reg                                                        0xB801AB34
#define  SB2_DBG3_2_1_inst_addr                                                  "0x00DC"
#define  set_SB2_DBG3_2_1_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_2_1_reg)=data)
#define  get_SB2_DBG3_2_1_reg                                                    (*((volatile unsigned int*)SB2_DBG3_2_1_reg))
#define  SB2_DBG3_2_1_dbg_data_monitor_shift                                     (0)
#define  SB2_DBG3_2_1_dbg_data_monitor_mask                                      (0xFFFFFFFF)
#define  SB2_DBG3_2_1_dbg_data_monitor(data)                                     (0xFFFFFFFF&(data))
#define  SB2_DBG3_2_1_get_dbg_data_monitor(data)                                 (0xFFFFFFFF&(data))

#define  SB2_DBG3_2_2                                                           0x1801AB38
#define  SB2_DBG3_2_2_reg_addr                                                   "0xB801AB38"
#define  SB2_DBG3_2_2_reg                                                        0xB801AB38
#define  SB2_DBG3_2_2_inst_addr                                                  "0x00DD"
#define  set_SB2_DBG3_2_2_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_2_2_reg)=data)
#define  get_SB2_DBG3_2_2_reg                                                    (*((volatile unsigned int*)SB2_DBG3_2_2_reg))
#define  SB2_DBG3_2_2_dbg_data_monitor_shift                                     (0)
#define  SB2_DBG3_2_2_dbg_data_monitor_mask                                      (0xFFFFFFFF)
#define  SB2_DBG3_2_2_dbg_data_monitor(data)                                     (0xFFFFFFFF&(data))
#define  SB2_DBG3_2_2_get_dbg_data_monitor(data)                                 (0xFFFFFFFF&(data))

#define  SB2_DBG3_2_3                                                           0x1801AB3C
#define  SB2_DBG3_2_3_reg_addr                                                   "0xB801AB3C"
#define  SB2_DBG3_2_3_reg                                                        0xB801AB3C
#define  SB2_DBG3_2_3_inst_addr                                                  "0x00DE"
#define  set_SB2_DBG3_2_3_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_2_3_reg)=data)
#define  get_SB2_DBG3_2_3_reg                                                    (*((volatile unsigned int*)SB2_DBG3_2_3_reg))
#define  SB2_DBG3_2_3_dbg_data_monitor_shift                                     (0)
#define  SB2_DBG3_2_3_dbg_data_monitor_mask                                      (0xFFFFFFFF)
#define  SB2_DBG3_2_3_dbg_data_monitor(data)                                     (0xFFFFFFFF&(data))
#define  SB2_DBG3_2_3_get_dbg_data_monitor(data)                                 (0xFFFFFFFF&(data))

#define  SB2_DBG3_CTRL_0                                                        0x1801AB40
#define  SB2_DBG3_CTRL_0_reg_addr                                                "0xB801AB40"
#define  SB2_DBG3_CTRL_0_reg                                                     0xB801AB40
#define  SB2_DBG3_CTRL_0_inst_addr                                               "0x00DF"
#define  set_SB2_DBG3_CTRL_0_reg(data)                                           (*((volatile unsigned int*)SB2_DBG3_CTRL_0_reg)=data)
#define  get_SB2_DBG3_CTRL_0_reg                                                 (*((volatile unsigned int*)SB2_DBG3_CTRL_0_reg))
#define  SB2_DBG3_CTRL_0_write_en4_shift                                         (7)
#define  SB2_DBG3_CTRL_0_dbg_acpu_chk_en_shift                                   (6)
#define  SB2_DBG3_CTRL_0_write_en3_shift                                         (5)
#define  SB2_DBG3_CTRL_0_dbg_vcpu_chk_en_shift                                   (4)
#define  SB2_DBG3_CTRL_0_write_en2_shift                                         (3)
#define  SB2_DBG3_CTRL_0_dbg_scpu_chk_en_shift                                   (2)
#define  SB2_DBG3_CTRL_0_write_en1_shift                                         (1)
#define  SB2_DBG3_CTRL_0_dbg_en_shift                                            (0)
#define  SB2_DBG3_CTRL_0_write_en4_mask                                          (0x00000080)
#define  SB2_DBG3_CTRL_0_dbg_acpu_chk_en_mask                                    (0x00000040)
#define  SB2_DBG3_CTRL_0_write_en3_mask                                          (0x00000020)
#define  SB2_DBG3_CTRL_0_dbg_vcpu_chk_en_mask                                    (0x00000010)
#define  SB2_DBG3_CTRL_0_write_en2_mask                                          (0x00000008)
#define  SB2_DBG3_CTRL_0_dbg_scpu_chk_en_mask                                    (0x00000004)
#define  SB2_DBG3_CTRL_0_write_en1_mask                                          (0x00000002)
#define  SB2_DBG3_CTRL_0_dbg_en_mask                                             (0x00000001)
#define  SB2_DBG3_CTRL_0_write_en4(data)                                         (0x00000080&((data)<<7))
#define  SB2_DBG3_CTRL_0_dbg_acpu_chk_en(data)                                   (0x00000040&((data)<<6))
#define  SB2_DBG3_CTRL_0_write_en3(data)                                         (0x00000020&((data)<<5))
#define  SB2_DBG3_CTRL_0_dbg_vcpu_chk_en(data)                                   (0x00000010&((data)<<4))
#define  SB2_DBG3_CTRL_0_write_en2(data)                                         (0x00000008&((data)<<3))
#define  SB2_DBG3_CTRL_0_dbg_scpu_chk_en(data)                                   (0x00000004&((data)<<2))
#define  SB2_DBG3_CTRL_0_write_en1(data)                                         (0x00000002&((data)<<1))
#define  SB2_DBG3_CTRL_0_dbg_en(data)                                            (0x00000001&(data))
#define  SB2_DBG3_CTRL_0_get_write_en4(data)                                     ((0x00000080&(data))>>7)
#define  SB2_DBG3_CTRL_0_get_dbg_acpu_chk_en(data)                               ((0x00000040&(data))>>6)
#define  SB2_DBG3_CTRL_0_get_write_en3(data)                                     ((0x00000020&(data))>>5)
#define  SB2_DBG3_CTRL_0_get_dbg_vcpu_chk_en(data)                               ((0x00000010&(data))>>4)
#define  SB2_DBG3_CTRL_0_get_write_en2(data)                                     ((0x00000008&(data))>>3)
#define  SB2_DBG3_CTRL_0_get_dbg_scpu_chk_en(data)                               ((0x00000004&(data))>>2)
#define  SB2_DBG3_CTRL_0_get_write_en1(data)                                     ((0x00000002&(data))>>1)
#define  SB2_DBG3_CTRL_0_get_dbg_en(data)                                        (0x00000001&(data))

#define  SB2_DBG3_CTRL_1                                                        0x1801AB44
#define  SB2_DBG3_CTRL_1_reg_addr                                                "0xB801AB44"
#define  SB2_DBG3_CTRL_1_reg                                                     0xB801AB44
#define  SB2_DBG3_CTRL_1_inst_addr                                               "0x00E0"
#define  set_SB2_DBG3_CTRL_1_reg(data)                                           (*((volatile unsigned int*)SB2_DBG3_CTRL_1_reg)=data)
#define  get_SB2_DBG3_CTRL_1_reg                                                 (*((volatile unsigned int*)SB2_DBG3_CTRL_1_reg))
#define  SB2_DBG3_CTRL_1_write_en4_shift                                         (7)
#define  SB2_DBG3_CTRL_1_dbg_acpu_chk_en_shift                                   (6)
#define  SB2_DBG3_CTRL_1_write_en3_shift                                         (5)
#define  SB2_DBG3_CTRL_1_dbg_vcpu_chk_en_shift                                   (4)
#define  SB2_DBG3_CTRL_1_write_en2_shift                                         (3)
#define  SB2_DBG3_CTRL_1_dbg_scpu_chk_en_shift                                   (2)
#define  SB2_DBG3_CTRL_1_write_en1_shift                                         (1)
#define  SB2_DBG3_CTRL_1_dbg_en_shift                                            (0)
#define  SB2_DBG3_CTRL_1_write_en4_mask                                          (0x00000080)
#define  SB2_DBG3_CTRL_1_dbg_acpu_chk_en_mask                                    (0x00000040)
#define  SB2_DBG3_CTRL_1_write_en3_mask                                          (0x00000020)
#define  SB2_DBG3_CTRL_1_dbg_vcpu_chk_en_mask                                    (0x00000010)
#define  SB2_DBG3_CTRL_1_write_en2_mask                                          (0x00000008)
#define  SB2_DBG3_CTRL_1_dbg_scpu_chk_en_mask                                    (0x00000004)
#define  SB2_DBG3_CTRL_1_write_en1_mask                                          (0x00000002)
#define  SB2_DBG3_CTRL_1_dbg_en_mask                                             (0x00000001)
#define  SB2_DBG3_CTRL_1_write_en4(data)                                         (0x00000080&((data)<<7))
#define  SB2_DBG3_CTRL_1_dbg_acpu_chk_en(data)                                   (0x00000040&((data)<<6))
#define  SB2_DBG3_CTRL_1_write_en3(data)                                         (0x00000020&((data)<<5))
#define  SB2_DBG3_CTRL_1_dbg_vcpu_chk_en(data)                                   (0x00000010&((data)<<4))
#define  SB2_DBG3_CTRL_1_write_en2(data)                                         (0x00000008&((data)<<3))
#define  SB2_DBG3_CTRL_1_dbg_scpu_chk_en(data)                                   (0x00000004&((data)<<2))
#define  SB2_DBG3_CTRL_1_write_en1(data)                                         (0x00000002&((data)<<1))
#define  SB2_DBG3_CTRL_1_dbg_en(data)                                            (0x00000001&(data))
#define  SB2_DBG3_CTRL_1_get_write_en4(data)                                     ((0x00000080&(data))>>7)
#define  SB2_DBG3_CTRL_1_get_dbg_acpu_chk_en(data)                               ((0x00000040&(data))>>6)
#define  SB2_DBG3_CTRL_1_get_write_en3(data)                                     ((0x00000020&(data))>>5)
#define  SB2_DBG3_CTRL_1_get_dbg_vcpu_chk_en(data)                               ((0x00000010&(data))>>4)
#define  SB2_DBG3_CTRL_1_get_write_en2(data)                                     ((0x00000008&(data))>>3)
#define  SB2_DBG3_CTRL_1_get_dbg_scpu_chk_en(data)                               ((0x00000004&(data))>>2)
#define  SB2_DBG3_CTRL_1_get_write_en1(data)                                     ((0x00000002&(data))>>1)
#define  SB2_DBG3_CTRL_1_get_dbg_en(data)                                        (0x00000001&(data))

#define  SB2_DBG3_CTRL_2                                                        0x1801AB48
#define  SB2_DBG3_CTRL_2_reg_addr                                                "0xB801AB48"
#define  SB2_DBG3_CTRL_2_reg                                                     0xB801AB48
#define  SB2_DBG3_CTRL_2_inst_addr                                               "0x00E1"
#define  set_SB2_DBG3_CTRL_2_reg(data)                                           (*((volatile unsigned int*)SB2_DBG3_CTRL_2_reg)=data)
#define  get_SB2_DBG3_CTRL_2_reg                                                 (*((volatile unsigned int*)SB2_DBG3_CTRL_2_reg))
#define  SB2_DBG3_CTRL_2_write_en4_shift                                         (7)
#define  SB2_DBG3_CTRL_2_dbg_acpu_chk_en_shift                                   (6)
#define  SB2_DBG3_CTRL_2_write_en3_shift                                         (5)
#define  SB2_DBG3_CTRL_2_dbg_vcpu_chk_en_shift                                   (4)
#define  SB2_DBG3_CTRL_2_write_en2_shift                                         (3)
#define  SB2_DBG3_CTRL_2_dbg_scpu_chk_en_shift                                   (2)
#define  SB2_DBG3_CTRL_2_write_en1_shift                                         (1)
#define  SB2_DBG3_CTRL_2_dbg_en_shift                                            (0)
#define  SB2_DBG3_CTRL_2_write_en4_mask                                          (0x00000080)
#define  SB2_DBG3_CTRL_2_dbg_acpu_chk_en_mask                                    (0x00000040)
#define  SB2_DBG3_CTRL_2_write_en3_mask                                          (0x00000020)
#define  SB2_DBG3_CTRL_2_dbg_vcpu_chk_en_mask                                    (0x00000010)
#define  SB2_DBG3_CTRL_2_write_en2_mask                                          (0x00000008)
#define  SB2_DBG3_CTRL_2_dbg_scpu_chk_en_mask                                    (0x00000004)
#define  SB2_DBG3_CTRL_2_write_en1_mask                                          (0x00000002)
#define  SB2_DBG3_CTRL_2_dbg_en_mask                                             (0x00000001)
#define  SB2_DBG3_CTRL_2_write_en4(data)                                         (0x00000080&((data)<<7))
#define  SB2_DBG3_CTRL_2_dbg_acpu_chk_en(data)                                   (0x00000040&((data)<<6))
#define  SB2_DBG3_CTRL_2_write_en3(data)                                         (0x00000020&((data)<<5))
#define  SB2_DBG3_CTRL_2_dbg_vcpu_chk_en(data)                                   (0x00000010&((data)<<4))
#define  SB2_DBG3_CTRL_2_write_en2(data)                                         (0x00000008&((data)<<3))
#define  SB2_DBG3_CTRL_2_dbg_scpu_chk_en(data)                                   (0x00000004&((data)<<2))
#define  SB2_DBG3_CTRL_2_write_en1(data)                                         (0x00000002&((data)<<1))
#define  SB2_DBG3_CTRL_2_dbg_en(data)                                            (0x00000001&(data))
#define  SB2_DBG3_CTRL_2_get_write_en4(data)                                     ((0x00000080&(data))>>7)
#define  SB2_DBG3_CTRL_2_get_dbg_acpu_chk_en(data)                               ((0x00000040&(data))>>6)
#define  SB2_DBG3_CTRL_2_get_write_en3(data)                                     ((0x00000020&(data))>>5)
#define  SB2_DBG3_CTRL_2_get_dbg_vcpu_chk_en(data)                               ((0x00000010&(data))>>4)
#define  SB2_DBG3_CTRL_2_get_write_en2(data)                                     ((0x00000008&(data))>>3)
#define  SB2_DBG3_CTRL_2_get_dbg_scpu_chk_en(data)                               ((0x00000004&(data))>>2)
#define  SB2_DBG3_CTRL_2_get_write_en1(data)                                     ((0x00000002&(data))>>1)
#define  SB2_DBG3_CTRL_2_get_dbg_en(data)                                        (0x00000001&(data))

#define  SB2_DBG3_CTRL_3                                                        0x1801AB4C
#define  SB2_DBG3_CTRL_3_reg_addr                                                "0xB801AB4C"
#define  SB2_DBG3_CTRL_3_reg                                                     0xB801AB4C
#define  SB2_DBG3_CTRL_3_inst_addr                                               "0x00E2"
#define  set_SB2_DBG3_CTRL_3_reg(data)                                           (*((volatile unsigned int*)SB2_DBG3_CTRL_3_reg)=data)
#define  get_SB2_DBG3_CTRL_3_reg                                                 (*((volatile unsigned int*)SB2_DBG3_CTRL_3_reg))
#define  SB2_DBG3_CTRL_3_write_en4_shift                                         (7)
#define  SB2_DBG3_CTRL_3_dbg_acpu_chk_en_shift                                   (6)
#define  SB2_DBG3_CTRL_3_write_en3_shift                                         (5)
#define  SB2_DBG3_CTRL_3_dbg_vcpu_chk_en_shift                                   (4)
#define  SB2_DBG3_CTRL_3_write_en2_shift                                         (3)
#define  SB2_DBG3_CTRL_3_dbg_scpu_chk_en_shift                                   (2)
#define  SB2_DBG3_CTRL_3_write_en1_shift                                         (1)
#define  SB2_DBG3_CTRL_3_dbg_en_shift                                            (0)
#define  SB2_DBG3_CTRL_3_write_en4_mask                                          (0x00000080)
#define  SB2_DBG3_CTRL_3_dbg_acpu_chk_en_mask                                    (0x00000040)
#define  SB2_DBG3_CTRL_3_write_en3_mask                                          (0x00000020)
#define  SB2_DBG3_CTRL_3_dbg_vcpu_chk_en_mask                                    (0x00000010)
#define  SB2_DBG3_CTRL_3_write_en2_mask                                          (0x00000008)
#define  SB2_DBG3_CTRL_3_dbg_scpu_chk_en_mask                                    (0x00000004)
#define  SB2_DBG3_CTRL_3_write_en1_mask                                          (0x00000002)
#define  SB2_DBG3_CTRL_3_dbg_en_mask                                             (0x00000001)
#define  SB2_DBG3_CTRL_3_write_en4(data)                                         (0x00000080&((data)<<7))
#define  SB2_DBG3_CTRL_3_dbg_acpu_chk_en(data)                                   (0x00000040&((data)<<6))
#define  SB2_DBG3_CTRL_3_write_en3(data)                                         (0x00000020&((data)<<5))
#define  SB2_DBG3_CTRL_3_dbg_vcpu_chk_en(data)                                   (0x00000010&((data)<<4))
#define  SB2_DBG3_CTRL_3_write_en2(data)                                         (0x00000008&((data)<<3))
#define  SB2_DBG3_CTRL_3_dbg_scpu_chk_en(data)                                   (0x00000004&((data)<<2))
#define  SB2_DBG3_CTRL_3_write_en1(data)                                         (0x00000002&((data)<<1))
#define  SB2_DBG3_CTRL_3_dbg_en(data)                                            (0x00000001&(data))
#define  SB2_DBG3_CTRL_3_get_write_en4(data)                                     ((0x00000080&(data))>>7)
#define  SB2_DBG3_CTRL_3_get_dbg_acpu_chk_en(data)                               ((0x00000040&(data))>>6)
#define  SB2_DBG3_CTRL_3_get_write_en3(data)                                     ((0x00000020&(data))>>5)
#define  SB2_DBG3_CTRL_3_get_dbg_vcpu_chk_en(data)                               ((0x00000010&(data))>>4)
#define  SB2_DBG3_CTRL_3_get_write_en2(data)                                     ((0x00000008&(data))>>3)
#define  SB2_DBG3_CTRL_3_get_dbg_scpu_chk_en(data)                               ((0x00000004&(data))>>2)
#define  SB2_DBG3_CTRL_3_get_write_en1(data)                                     ((0x00000002&(data))>>1)
#define  SB2_DBG3_CTRL_3_get_dbg_en(data)                                        (0x00000001&(data))

#define  SB2_DBG3_WDATA_0                                                       0x1801AB50
#define  SB2_DBG3_WDATA_0_reg_addr                                               "0xB801AB50"
#define  SB2_DBG3_WDATA_0_reg                                                    0xB801AB50
#define  SB2_DBG3_WDATA_0_inst_addr                                              "0x00E3"
#define  set_SB2_DBG3_WDATA_0_reg(data)                                          (*((volatile unsigned int*)SB2_DBG3_WDATA_0_reg)=data)
#define  get_SB2_DBG3_WDATA_0_reg                                                (*((volatile unsigned int*)SB2_DBG3_WDATA_0_reg))
#define  SB2_DBG3_WDATA_0_monitor_wdata_shift                                    (0)
#define  SB2_DBG3_WDATA_0_monitor_wdata_mask                                     (0xFFFFFFFF)
#define  SB2_DBG3_WDATA_0_monitor_wdata(data)                                    (0xFFFFFFFF&(data))
#define  SB2_DBG3_WDATA_0_get_monitor_wdata(data)                                (0xFFFFFFFF&(data))

#define  SB2_DBG3_WDATA_1                                                       0x1801AB54
#define  SB2_DBG3_WDATA_1_reg_addr                                               "0xB801AB54"
#define  SB2_DBG3_WDATA_1_reg                                                    0xB801AB54
#define  SB2_DBG3_WDATA_1_inst_addr                                              "0x00E4"
#define  set_SB2_DBG3_WDATA_1_reg(data)                                          (*((volatile unsigned int*)SB2_DBG3_WDATA_1_reg)=data)
#define  get_SB2_DBG3_WDATA_1_reg                                                (*((volatile unsigned int*)SB2_DBG3_WDATA_1_reg))
#define  SB2_DBG3_WDATA_1_monitor_wdata_shift                                    (0)
#define  SB2_DBG3_WDATA_1_monitor_wdata_mask                                     (0xFFFFFFFF)
#define  SB2_DBG3_WDATA_1_monitor_wdata(data)                                    (0xFFFFFFFF&(data))
#define  SB2_DBG3_WDATA_1_get_monitor_wdata(data)                                (0xFFFFFFFF&(data))

#define  SB2_DBG3_WDATA_2                                                       0x1801AB58
#define  SB2_DBG3_WDATA_2_reg_addr                                               "0xB801AB58"
#define  SB2_DBG3_WDATA_2_reg                                                    0xB801AB58
#define  SB2_DBG3_WDATA_2_inst_addr                                              "0x00E5"
#define  set_SB2_DBG3_WDATA_2_reg(data)                                          (*((volatile unsigned int*)SB2_DBG3_WDATA_2_reg)=data)
#define  get_SB2_DBG3_WDATA_2_reg                                                (*((volatile unsigned int*)SB2_DBG3_WDATA_2_reg))
#define  SB2_DBG3_WDATA_2_monitor_wdata_shift                                    (0)
#define  SB2_DBG3_WDATA_2_monitor_wdata_mask                                     (0xFFFFFFFF)
#define  SB2_DBG3_WDATA_2_monitor_wdata(data)                                    (0xFFFFFFFF&(data))
#define  SB2_DBG3_WDATA_2_get_monitor_wdata(data)                                (0xFFFFFFFF&(data))

#define  SB2_DBG3_CPU_0                                                         0x1801AB60
#define  SB2_DBG3_CPU_0_reg_addr                                                 "0xB801AB60"
#define  SB2_DBG3_CPU_0_reg                                                      0xB801AB60
#define  SB2_DBG3_CPU_0_inst_addr                                                "0x00E6"
#define  set_SB2_DBG3_CPU_0_reg(data)                                            (*((volatile unsigned int*)SB2_DBG3_CPU_0_reg)=data)
#define  get_SB2_DBG3_CPU_0_reg                                                  (*((volatile unsigned int*)SB2_DBG3_CPU_0_reg))
#define  SB2_DBG3_CPU_0_monitor_group_shift                                      (0)
#define  SB2_DBG3_CPU_0_monitor_group_mask                                       (0x00000003)
#define  SB2_DBG3_CPU_0_monitor_group(data)                                      (0x00000003&(data))
#define  SB2_DBG3_CPU_0_get_monitor_group(data)                                  (0x00000003&(data))

#define  SB2_DBG3_CPU_1                                                         0x1801AB64
#define  SB2_DBG3_CPU_1_reg_addr                                                 "0xB801AB64"
#define  SB2_DBG3_CPU_1_reg                                                      0xB801AB64
#define  SB2_DBG3_CPU_1_inst_addr                                                "0x00E7"
#define  set_SB2_DBG3_CPU_1_reg(data)                                            (*((volatile unsigned int*)SB2_DBG3_CPU_1_reg)=data)
#define  get_SB2_DBG3_CPU_1_reg                                                  (*((volatile unsigned int*)SB2_DBG3_CPU_1_reg))
#define  SB2_DBG3_CPU_1_monitor_group_shift                                      (0)
#define  SB2_DBG3_CPU_1_monitor_group_mask                                       (0x00000003)
#define  SB2_DBG3_CPU_1_monitor_group(data)                                      (0x00000003&(data))
#define  SB2_DBG3_CPU_1_get_monitor_group(data)                                  (0x00000003&(data))

#define  SB2_DBG3_CPU_2                                                         0x1801AB68
#define  SB2_DBG3_CPU_2_reg_addr                                                 "0xB801AB68"
#define  SB2_DBG3_CPU_2_reg                                                      0xB801AB68
#define  SB2_DBG3_CPU_2_inst_addr                                                "0x00E8"
#define  set_SB2_DBG3_CPU_2_reg(data)                                            (*((volatile unsigned int*)SB2_DBG3_CPU_2_reg)=data)
#define  get_SB2_DBG3_CPU_2_reg                                                  (*((volatile unsigned int*)SB2_DBG3_CPU_2_reg))
#define  SB2_DBG3_CPU_2_monitor_group_shift                                      (0)
#define  SB2_DBG3_CPU_2_monitor_group_mask                                       (0x00000003)
#define  SB2_DBG3_CPU_2_monitor_group(data)                                      (0x00000003&(data))
#define  SB2_DBG3_CPU_2_get_monitor_group(data)                                  (0x00000003&(data))

#define  SB2_DBG3_INT                                                           0x1801AB70
#define  SB2_DBG3_INT_reg_addr                                                   "0xB801AB70"
#define  SB2_DBG3_INT_reg                                                        0xB801AB70
#define  SB2_DBG3_INT_inst_addr                                                  "0x00E9"
#define  set_SB2_DBG3_INT_reg(data)                                              (*((volatile unsigned int*)SB2_DBG3_INT_reg)=data)
#define  get_SB2_DBG3_INT_reg                                                    (*((volatile unsigned int*)SB2_DBG3_INT_reg))
#define  SB2_DBG3_INT_acpu_int_shift                                             (6)
#define  SB2_DBG3_INT_vcpu_int_shift                                             (5)
#define  SB2_DBG3_INT_scpu_exception_shift                                       (4)
#define  SB2_DBG3_INT_acpu_int_en_shift                                          (3)
#define  SB2_DBG3_INT_vcpu_int_en_shift                                          (2)
#define  SB2_DBG3_INT_scpu_exception_en_shift                                    (1)
#define  SB2_DBG3_INT_write_data_shift                                           (0)
#define  SB2_DBG3_INT_acpu_int_mask                                              (0x00000040)
#define  SB2_DBG3_INT_vcpu_int_mask                                              (0x00000020)
#define  SB2_DBG3_INT_scpu_exception_mask                                        (0x00000010)
#define  SB2_DBG3_INT_acpu_int_en_mask                                           (0x00000008)
#define  SB2_DBG3_INT_vcpu_int_en_mask                                           (0x00000004)
#define  SB2_DBG3_INT_scpu_exception_en_mask                                     (0x00000002)
#define  SB2_DBG3_INT_write_data_mask                                            (0x00000001)
#define  SB2_DBG3_INT_acpu_int(data)                                             (0x00000040&((data)<<6))
#define  SB2_DBG3_INT_vcpu_int(data)                                             (0x00000020&((data)<<5))
#define  SB2_DBG3_INT_scpu_exception(data)                                       (0x00000010&((data)<<4))
#define  SB2_DBG3_INT_acpu_int_en(data)                                          (0x00000008&((data)<<3))
#define  SB2_DBG3_INT_vcpu_int_en(data)                                          (0x00000004&((data)<<2))
#define  SB2_DBG3_INT_scpu_exception_en(data)                                    (0x00000002&((data)<<1))
#define  SB2_DBG3_INT_write_data(data)                                           (0x00000001&(data))
#define  SB2_DBG3_INT_get_acpu_int(data)                                         ((0x00000040&(data))>>6)
#define  SB2_DBG3_INT_get_vcpu_int(data)                                         ((0x00000020&(data))>>5)
#define  SB2_DBG3_INT_get_scpu_exception(data)                                   ((0x00000010&(data))>>4)
#define  SB2_DBG3_INT_get_acpu_int_en(data)                                      ((0x00000008&(data))>>3)
#define  SB2_DBG3_INT_get_vcpu_int_en(data)                                      ((0x00000004&(data))>>2)
#define  SB2_DBG3_INT_get_scpu_exception_en(data)                                ((0x00000002&(data))>>1)
#define  SB2_DBG3_INT_get_write_data(data)                                       (0x00000001&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======SB2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  semaphore_data:31;
        RBus_UInt32  semaphore:1;
    };
}sb2_hd_sem_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  to_end:1;
        RBus_UInt32  ac2ivairq_en:1;
        RBus_UInt32  vc2ivairq_en:1;
        RBus_UInt32  to_en1:1;
        RBus_UInt32  to_en:1;
        RBus_UInt32  acivairq_en:1;
        RBus_UInt32  vcivairq_en:1;
        RBus_UInt32  scivairq_en:1;
        RBus_UInt32  write_data:1;
    };
}sb2_inv_inten_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  ac2iva_int:1;
        RBus_UInt32  vc2iva_int:1;
        RBus_UInt32  aciva_int:1;
        RBus_UInt32  vciva_int:1;
        RBus_UInt32  sciva_int:1;
        RBus_UInt32  write_data:1;
    };
}sb2_inv_intstat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inv_adr:32;
    };
}sb2_inv_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  to_thrd:3;
        RBus_UInt32  to_thr1:3;
        RBus_UInt32  to_thr:3;
    };
}sb2_debug_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  ac_in_order:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  vc_in_order:1;
        RBus_UInt32  vc_bypass:1;
        RBus_UInt32  vc_merge:1;
        RBus_UInt32  res3:4;
    };
}sb2_wrapper_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync:32;
    };
}sb2_sync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  dbg_mode:5;
    };
}sb2_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  sel1:6;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  sel0:6;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  enable:1;
    };
}sb2_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  u2r_24m_mode:1;
    };
}sb2_uart2rdbs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  rm_rom:4;
    };
}sb2_rom_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  rme_rom:1;
    };
}sb2_rom_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_test_mode_rom:1;
    };
}sb2_bist_test_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_done_rom:1;
    };
}sb2_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_crc:32;
    };
}sb2_bist_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  bist_test_ls:1;
    };
}sb2_bist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  test1_0_rom:1;
    };
}sb2_rom_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  int_sw_sc_en:1;
        RBus_UInt32  int_sw_vc_en:1;
        RBus_UInt32  int_sw_ac_en:1;
        RBus_UInt32  write_data:1;
    };
}sb2_cpu_sw_int_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  int_sw15:1;
        RBus_UInt32  int_sw14:1;
        RBus_UInt32  int_sw13:1;
        RBus_UInt32  int_sw12:1;
        RBus_UInt32  int_sw11:1;
        RBus_UInt32  int_sw10:1;
        RBus_UInt32  int_sw9:1;
        RBus_UInt32  int_sw8:1;
        RBus_UInt32  int_sw7:1;
        RBus_UInt32  int_sw6:1;
        RBus_UInt32  int_sw5:1;
        RBus_UInt32  int_sw4:1;
        RBus_UInt32  int_sw3:1;
        RBus_UInt32  int_sw2:1;
        RBus_UInt32  int_sw1:1;
        RBus_UInt32  int_sw0:1;
        RBus_UInt32  write_data:1;
    };
}sb2_cpu_sw_int_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kcpu_dbus_acc:32;
    };
}sb2_kcpu_dacc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  kcpu_dreq_num:24;
    };
}sb2_kcpu_dreq_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  kcpu_dreq_max:16;
    };
}sb2_kcpu_dreq_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  kcpu_dreq_ack:26;
    };
}sb2_kcpu_dreq_ack_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu2_dbus_acc:32;
    };
}sb2_vcpu2_dacc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  vcpu2_dreq_num:24;
    };
}sb2_vcpu2_dreq_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  vcpu2_dreq_max:16;
    };
}sb2_vcpu2_dreq_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  vcpu2_dreq_ack:26;
    };
}sb2_vcpu2_dreq_ack_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kcpu_rbus_acc:32;
    };
}sb2_kcpu_racc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kcpu_rreq_max:8;
        RBus_UInt32  kcpu_rreq_num:24;
    };
}sb2_kcpu_rreq_rlt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu2_rbus_acc:32;
    };
}sb2_vcpu2_racc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu2_rreq_max:8;
        RBus_UInt32  vcpu2_rreq_num:24;
    };
}sb2_vcpu2_rreq_rlt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu2_dbus_acc:32;
    };
}sb2_acpu2_dacc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  acpu2_dreq_num:24;
    };
}sb2_acpu2_dreq_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  acpu2_dreq_max:16;
    };
}sb2_acpu2_dreq_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  acpu2_dreq_ack:26;
    };
}sb2_acpu2_dreq_ack_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu2_rbus_acc:32;
    };
}sb2_acpu2_racc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu2_rreq_max:8;
        RBus_UInt32  acpu2_rreq_num:24;
    };
}sb2_acpu2_rreq_rlt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  write_en11:1;
        RBus_UInt32  acpu2_rbus_go:1;
        RBus_UInt32  write_en10:1;
        RBus_UInt32  acpu2_dbus_go:1;
        RBus_UInt32  write_en9:1;
        RBus_UInt32  kcpu_rbus_go:1;
        RBus_UInt32  write_en8:1;
        RBus_UInt32  kcpu_dbus_go:1;
        RBus_UInt32  write_en7:1;
        RBus_UInt32  vcpu2_rbus_go:1;
        RBus_UInt32  write_en6:1;
        RBus_UInt32  acpu_rbus_go:1;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  vcpu_rbus_go:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  scpu_rbus_go:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  vcpu2_dbus_go:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  acpu_dbus_go:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  vcpu_dbus_go:1;
        RBus_UInt32  res2:2;
    };
}sb2_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu_dbus_acc:32;
    };
}sb2_vcpu_dacc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  vcpu_dreq_num:24;
    };
}sb2_vcpu_dreq_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  vcpu_dreq_max:16;
    };
}sb2_vcpu_dreq_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  vcpu_dreq_ack:26;
    };
}sb2_vcpu_dreq_ack_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu_dbus_acc:32;
    };
}sb2_acpu_dacc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  acpu_dreq_num:24;
    };
}sb2_acpu_dreq_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  acpu_dreq_max:16;
    };
}sb2_acpu_dreq_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  acpu_dreq_ack:26;
    };
}sb2_acpu_dreq_ack_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_rbus_acc:32;
    };
}sb2_scpu_racc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_rreq_max:8;
        RBus_UInt32  scpu_rreq_num:24;
    };
}sb2_scpu_rreq_rlt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu_rbus_acc:32;
    };
}sb2_vcpu_racc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu_rreq_max:8;
        RBus_UInt32  vcpu_rreq_num:24;
    };
}sb2_vcpu_rreq_rlt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu_rbus_acc:32;
    };
}sb2_acpu_racc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu_rreq_max:8;
        RBus_UInt32  acpu_rreq_num:24;
    };
}sb2_acpu_rreq_rlt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_start_addr:32;
    };
}sb2_dbg_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_end_addr:32;
    };
}sb2_dbg_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  write_en9:1;
        RBus_UInt32  dbg_acpu2_chk_en:1;
        RBus_UInt32  write_en8:1;
        RBus_UInt32  dbg_kcpu_chk_en:1;
        RBus_UInt32  write_en7:1;
        RBus_UInt32  dbg_vcpu2_chk_en:1;
        RBus_UInt32  write_en6:1;
        RBus_UInt32  dbg_acpu_chk_en:1;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  dbg_vcpu_chk_en:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  dbg_scpu_chk_en:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  dbg_wr_chk:2;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  dbg_id_chk:2;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  dbg_en:1;
    };
}sb2_dbg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_addr:32;
    };
}sb2_dbg_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  acpu2_dbg_write:1;
        RBus_UInt32  acpu2_dbg_dacc:1;
        RBus_UInt32  kcpu_dbg_write:1;
        RBus_UInt32  kcpu_dbg_dacc:1;
        RBus_UInt32  vcpu_dbg_write:1;
        RBus_UInt32  vcpu_dbg_dacc:1;
        RBus_UInt32  acpu_dbg_write:1;
        RBus_UInt32  acpu_dbg_dacc:1;
        RBus_UInt32  scpu_dbg_write:1;
        RBus_UInt32  scpu_dbg_dacc:1;
        RBus_UInt32  vcpu2_dbg_write:1;
        RBus_UInt32  vcpu2_dbg_dacc:1;
    };
}sb2_dbg_addr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  ac2_first_addr_en:1;
        RBus_UInt32  vc2_first_addr_en:1;
        RBus_UInt32  kc_first_addr_en:1;
        RBus_UInt32  sc_first_addr_en:1;
        RBus_UInt32  vc_first_addr_en:1;
        RBus_UInt32  ac_first_addr_en:1;
    };
}sb2_dbg_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:6;
        RBus_UInt32  scpu_err_en:1;
        RBus_UInt32  acpu2_int:1;
        RBus_UInt32  acpu2_int_en:1;
        RBus_UInt32  acpu2_neg_int:1;
        RBus_UInt32  acpu2_neg_int_en:1;
        RBus_UInt32  kcpu_int:1;
        RBus_UInt32  kcpu_int_en:1;
        RBus_UInt32  kcpu_neg_int:1;
        RBus_UInt32  kcpu_neg_int_en:1;
        RBus_UInt32  vcpu2_int:1;
        RBus_UInt32  vcpu2_int_en:1;
        RBus_UInt32  vcpu2_neg_int:1;
        RBus_UInt32  vcpu2_neg_int_en:1;
        RBus_UInt32  acpu_int:1;
        RBus_UInt32  vcpu_int:1;
        RBus_UInt32  scpu_exception:1;
        RBus_UInt32  acpu_int_en:1;
        RBus_UInt32  vcpu_int_en:1;
        RBus_UInt32  scpu_int_en:1;
        RBus_UInt32  acpu_neg_int:1;
        RBus_UInt32  vcpu_neg_int:1;
        RBus_UInt32  scpu_neg_exception:1;
        RBus_UInt32  acpu_neg_int_en:1;
        RBus_UInt32  vcpu_neg_int_en:1;
        RBus_UInt32  scpu_neg_int_en:1;
        RBus_UInt32  write_data:1;
    };
}sb2_dbg_int_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data:32;
    };
}sb2_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data:32;
    };
}sb2_shadow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  semaphore_data:31;
        RBus_UInt32  semaphore:1;
    };
}sb2_hd_sem_new_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  vc2_line_read_rbus:1;
        RBus_UInt32  vc_line_read_rbus:1;
        RBus_UInt32  ac2_line_read_rbus:1;
        RBus_UInt32  ac_line_read_rbus:1;
        RBus_UInt32  kc_line_read_rbus:1;
    };
}sb2_inc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line_read_rbus_addr:32;
    };
}sb2_inc_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data:32;
    };
}sb2_dic_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  hif_plugin_detect_wdog:1;
        RBus_UInt32  hif_plugin_detect_por:1;
    };
}sb2_ejtag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  reg_phif_enable:1;
    };
}sb2_hif_select_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy1801a700_31_4:28;
        RBus_UInt32  time_step:4;
    };
}sb2_dbus_arb_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  arb_en:7;
    };
}sb2_dbus_arb_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client0_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client0_latcnt_beg:8;
    };
}sb2_dbus_latcnt_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client1_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client1_latcnt_beg:8;
    };
}sb2_dbus_latcnt_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client2_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client2_latcnt_beg:8;
    };
}sb2_dbus_latcnt_cr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client3_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client3_latcnt_beg:8;
    };
}sb2_dbus_latcnt_cr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client4_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client4_latcnt_beg:8;
    };
}sb2_dbus_latcnt_cr5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client5_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client5_latcnt_beg:8;
    };
}sb2_dbus_latcnt_cr6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  client6_latcnt_end:8;
        RBus_UInt32  res2:8;
        RBus_UInt32  client6_latcnt_beg:8;
    };
}sb2_dbus_latcnt_cr7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  pc_rd_only:1;
        RBus_UInt32  pc_go:1;
    };
}sb2_dbus_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_mon_num:32;
    };
}sb2_dbus_pc_tota_mon_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_ack_num:32;
    };
}sb2_dbus_pc_tota_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_idl_num:32;
    };
}sb2_dbus_pc_tota_idl_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  pc_prog2_sel:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  pc_prog1_sel:4;
        RBus_UInt32  res3:4;
        RBus_UInt32  pc_prog0_sel:4;
    };
}sb2_dbus_pc_prog_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  pc_prog2_req_occur:1;
        RBus_UInt32  pc_prog1_req_occur:1;
        RBus_UInt32  pc_prog0_req_occur:1;
    };
}sb2_dbus_pc_prog_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  prog_channel_sel:2;
    };
}sb2_dbus_pc_prog_0_channel_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_acc_lat:32;
    };
}sb2_dbus_pc_prog_0_acc_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  prog_max_lat:16;
    };
}sb2_dbus_pc_prog_0_max_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  prog_req_num:24;
    };
}sb2_dbus_pc_prog_0_req_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_ack_num:32;
    };
}sb2_dbus_pc_prog_0_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  prog_hitend_cnt:16;
    };
}sb2_dbus_pc_prog_0_hitend_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  bt_done:2;
        RBus_UInt32  bt_bl:1;
        RBus_UInt32  bt_data_inv:1;
        RBus_UInt32  bt_rw:1;
        RBus_UInt32  bt_go:1;
    };
}sb2_dbus_bridge_test_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bt_addr_data:28;
        RBus_UInt32  res1:4;
    };
}sb2_dbus_bridge_test_addr_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  sb_req:7;
        RBus_UInt32  res2:9;
        RBus_UInt32  sb_gnt:7;
    };
}sb2_dbus_arb_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  win_latcnt:8;
    };
}sb2_dbus_arb_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_0:8;
        RBus_UInt32  req_thr_0:8;
        RBus_UInt32  time_thr_0:16;
    };
}sb2_dbus_bw_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_1:8;
        RBus_UInt32  req_thr_1:8;
        RBus_UInt32  time_thr_1:16;
    };
}sb2_dbus_bw_limit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_2:8;
        RBus_UInt32  req_thr_2:8;
        RBus_UInt32  time_thr_2:16;
    };
}sb2_dbus_bw_limit_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_3:8;
        RBus_UInt32  req_thr_3:8;
        RBus_UInt32  time_thr_3:16;
    };
}sb2_dbus_bw_limit_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_4:8;
        RBus_UInt32  req_thr_4:8;
        RBus_UInt32  time_thr_4:16;
    };
}sb2_dbus_bw_limit_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_5:8;
        RBus_UInt32  req_thr_5:8;
        RBus_UInt32  time_thr_5:16;
    };
}sb2_dbus_bw_limit_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  max_req_num_6:8;
        RBus_UInt32  req_thr_6:8;
        RBus_UInt32  time_thr_6:16;
    };
}sb2_dbus_bw_limit_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  len_scheme_en:1;
        RBus_UInt32  res1:17;
        RBus_UInt32  bw_status_clr_6:1;
        RBus_UInt32  bw_limit_en_6:1;
        RBus_UInt32  bw_status_clr_5:1;
        RBus_UInt32  bw_limit_en_5:1;
        RBus_UInt32  bw_status_clr_4:1;
        RBus_UInt32  bw_limit_en_4:1;
        RBus_UInt32  bw_status_clr_3:1;
        RBus_UInt32  bw_limit_en_3:1;
        RBus_UInt32  bw_status_clr_2:1;
        RBus_UInt32  bw_limit_en_2:1;
        RBus_UInt32  bw_status_clr_1:1;
        RBus_UInt32  bw_limit_en_1:1;
        RBus_UInt32  bw_status_clr_0:1;
        RBus_UInt32  bw_limit_en_0:1;
    };
}sb2_dbus_bw_limit_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rd_queue_num:4;
        RBus_UInt32  wr_queue_num:4;
    };
}sb2_dbus_queue_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  error_clr:1;
        RBus_UInt32  res1:15;
        RBus_UInt32  error_zero_length_id:4;
        RBus_UInt32  res2:2;
        RBus_UInt32  error_read_full:1;
        RBus_UInt32  error_write_full:1;
        RBus_UInt32  res3:8;
    };
}sb2_dbus_error_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  dual_quad_mode:4;
        RBus_UInt32  fat_mode:1;
        RBus_UInt32  opc:8;
    };
}sb2_sfc_opcode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  res2:11;
        RBus_UInt32  dataen:1;
        RBus_UInt32  adren:1;
        RBus_UInt32  dmycnt:3;
    };
}sb2_sfc_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  fdiv_hi:8;
        RBus_UInt32  res2:6;
        RBus_UInt32  clk_duty50_en:1;
        RBus_UInt32  mode:1;
        RBus_UInt32  fdiv:8;
    };
}sb2_sfc_sck_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tdt:16;
        RBus_UInt32  phcnt:8;
        RBus_UInt32  plcnt:8;
    };
}sb2_sfc_ce_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  spi_csn_inv:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  ce_n:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  wp_n:1;
    };
}sb2_sfc_wp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  delay_sel:4;
        RBus_UInt32  pos_latch:1;
    };
}sb2_sfc_pos_latch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  wt_prog_done:1;
        RBus_UInt32  rdsr_op:8;
    };
}sb2_sfc_wait_wr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  wt_prog_en:1;
        RBus_UInt32  wr_en_op:8;
    };
}sb2_sfc_en_wr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  adr4byte_en:1;
    };
}sb2_sfc_opcode2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  spi_nand_flash_addr_cnt:2;
        RBus_UInt32  spi_nand_flash_en:1;
        RBus_UInt32  res2:25;
    };
}sb2_spi_nand_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:9;
        RBus_UInt32  otp_rtk_chip_id_lock:1;
        RBus_UInt32  res2:6;
        RBus_UInt32  otp_rw_par_reg_lock:1;
        RBus_UInt32  cpu_boot_addr_remap_reg_lock:1;
        RBus_UInt32  cp_cw_ctrl_reg_lock:1;
        RBus_UInt32  otp_rosc_reg_lock:1;
        RBus_UInt32  dc_ibu_reg_lock:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  ddr_scramble_protection_reg_lock:1;
        RBus_UInt32  res4:1;
        RBus_UInt32  dc_sys_di_sram_mode_reg_lock:1;
        RBus_UInt32  rom_kcpu_reg_lock:1;
        RBus_UInt32  rom_nagra_region_read_reg_lock:1;
        RBus_UInt32  storage_protection_reg_lock:1;
        RBus_UInt32  secure_tp_reg_lock:1;
        RBus_UInt32  secure_crt_reg_lock:1;
        RBus_UInt32  secure_reg_lock:1;
    };
}sb2_security_lock_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  scpu_w_rtc_en:1;
        RBus_UInt32  cp_scpu_key_reg_ren_n:1;
        RBus_UInt32  scpu_w_rng_n:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  kcpu_rbus_region1_en:1;
        RBus_UInt32  kcpu_rbus_region2_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  scpu_rwen_reg_md_vcpu_n:1;
        RBus_UInt32  scpu_rwen_reg_ve_n:1;
        RBus_UInt32  scpu_rwen_reg_vde_n:1;
        RBus_UInt32  scpu_rwen_reg_ae_ade_n:1;
    };
}sb2_security_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  start_addr1:19;
        RBus_UInt32  res2:2;
    };
}sb2_kcpu_rbus_protect1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  end_addr1:19;
        RBus_UInt32  res2:2;
    };
}sb2_kcpu_rbus_protect2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  start_addr2:19;
        RBus_UInt32  res2:2;
    };
}sb2_kcpu_rbus_protect3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  end_addr2:19;
        RBus_UInt32  res2:2;
    };
}sb2_kcpu_rbus_protect4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  pmm_reg_rw_sel:1;
        RBus_UInt32  wdog_reg_rw_sel:1;
    };
}sb2_security_crt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  scpu_wen_tp_cw_reg_n:1;
        RBus_UInt32  scpu_rwen_reg_tp_n:1;
    };
}sb2_security_tp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  flash_addr_protect1_en:1;
        RBus_UInt32  flash_addr_protect2_en:1;
        RBus_UInt32  flash_addr_bit_set:3;
    };
}sb2_security_flash_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  flash_protect1_start_addr:17;
        RBus_UInt32  res2:8;
    };
}sb2_flash_protect1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  flash_protect1_end_addr:17;
        RBus_UInt32  res2:8;
    };
}sb2_flash_protect2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  flash_protect2_start_addr:17;
        RBus_UInt32  res2:8;
    };
}sb2_flash_protect3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:7;
        RBus_UInt32  flash_protect2_end_addr:17;
        RBus_UInt32  res2:8;
    };
}sb2_flash_protect4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  rom_kcpu_region_staddr:15;
        RBus_UInt32  rom_kcpu_region_endaddr:15;
        RBus_UInt32  rom_kcpu_region_en:1;
    };
}sb2_security_rom_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu_boot_addr_remap:16;
        RBus_UInt32  res1:16;
    };
}sb2_boot_remap1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu_boot_addr_remap:16;
        RBus_UInt32  res1:16;
    };
}sb2_boot_remap2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu2_boot_addr_remap:16;
        RBus_UInt32  res1:16;
    };
}sb2_boot_remap3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu2_boot_addr_remap:16;
        RBus_UInt32  res1:16;
    };
}sb2_boot_remap4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  scpu_w_otp_reg_n:1;
    };
}sb2_security_otp_rw_par_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dispd_dc2h_security_protect:1;
        RBus_UInt32  memc_security_protect:1;
        RBus_UInt32  dispd_od_security_protect:1;
        RBus_UInt32  dispim_i3ddma_security_protect:1;
        RBus_UInt32  dispim_m_security_protect:1;
        RBus_UInt32  dispim_vi_security_protect:1;
        RBus_UInt32  dispim_di_security_protect:1;
        RBus_UInt32  dispim_dexc_security_protect:1;
        RBus_UInt32  vodma_security_protect:1;
        RBus_UInt32  gpu_security_protect:1;
        RBus_UInt32  gpu_general_protect:1;
        RBus_UInt32  gpu_os_id_3_protect:1;
        RBus_UInt32  gpu_os_id_2_protect:1;
        RBus_UInt32  gpu_os_id_1_protect:1;
        RBus_UInt32  gpu_os_id_0_protect:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  dc_picindex_rw_n:1;
        RBus_UInt32  otp_bits_scpu_rd_n:1;
        RBus_UInt32  otp_bits_vcpu_rd_n:1;
        RBus_UInt32  otp_bits_acpu_rd_n:1;
        RBus_UInt32  otp_bits_kcpu_rd_n:1;
        RBus_UInt32  nnip_general_protect:1;
        RBus_UInt32  nnip_wrapper_protect:1;
        RBus_UInt32  se_queue2_protect:2;
        RBus_UInt32  res3:3;
        RBus_UInt32  flash_release:1;
    };
}sb2_ctrl_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_end_addr:16;
        RBus_UInt32  flash_start_addr:16;
    };
}sb2_cpu_flash_region_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  kcnsfbusirq_en:1;
        RBus_UInt32  kcnsrbusirq_en:1;
        RBus_UInt32  kcivairq_en:1;
        RBus_UInt32  write_data:1;
    };
}sb2_inten_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:28;
        RBus_UInt32  kcnsfbus_int:1;
        RBus_UInt32  kcnsrbus_int:1;
        RBus_UInt32  kciva_int:1;
        RBus_UInt32  write_data:1;
    };
}sb2_intstat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  fbus_access_cpu:3;
        RBus_UInt32  rbus_access_cpu:4;
        RBus_UInt32  res2:3;
        RBus_UInt32  rbus_access_addr:21;
    };
}sb2_ns_cpu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_addr_kcpu:32;
    };
}sb2_dbg_addr_kcpu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:15;
        RBus_UInt32  kc_dbg_enable:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  kc_dbg_sel1:5;
        RBus_UInt32  res3:3;
        RBus_UInt32  kc_dbg_sel0:5;
    };
}sb2_kcpu_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kcpu_exvoffset:32;
    };
}sb2_kcpu_exception_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_start_addr:32;
    };
}sb2_dbg_start2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_end_addr:32;
    };
}sb2_dbg_end2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  write_en9:1;
        RBus_UInt32  dbg_acpu2_chk_en:1;
        RBus_UInt32  write_en8:1;
        RBus_UInt32  dbg_kcpu_chk_en:1;
        RBus_UInt32  write_en7:1;
        RBus_UInt32  dbg_vcpu2_chk_en:1;
        RBus_UInt32  write_en6:1;
        RBus_UInt32  dbg_acpu_chk_en:1;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  dbg_vcpu_chk_en:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  dbg_scpu_chk_en:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  dbg_wr_chk:2;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  dbg_id_chk:2;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  dbg_en:1;
    };
}sb2_dbg_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  int_sv2:1;
        RBus_UInt32  int_sa2:1;
        RBus_UInt32  int_sk:1;
        RBus_UInt32  int_sv:1;
        RBus_UInt32  int_sa:1;
        RBus_UInt32  write_data:1;
    };
}sb2_nmi_cpu_int_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  int_sv2_en:1;
        RBus_UInt32  int_sa2_en:1;
        RBus_UInt32  int_sk_en:1;
        RBus_UInt32  int_sv_en:1;
        RBus_UInt32  int_sa_en:1;
        RBus_UInt32  write_data:1;
    };
}sb2_nmi_cpu_int_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addcmd:32;
    };
}sb2_dbus_cmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  addcmd:18;
    };
}sb2_dbus_cmd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:11;
        RBus_UInt32  dbg_target_addr:21;
    };
}sb2_dbg3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_bit_monitor:32;
    };
}sb2_dbg3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_data_monitor:32;
    };
}sb2_dbg3_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  dbg_acpu_chk_en:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  dbg_vcpu_chk_en:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  dbg_scpu_chk_en:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  dbg_en:1;
    };
}sb2_dbg3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_wdata:32;
    };
}sb2_dbg3_wdata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:30;
        RBus_UInt32  monitor_group:2;
    };
}sb2_dbg3_cpu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  acpu_int:1;
        RBus_UInt32  vcpu_int:1;
        RBus_UInt32  scpu_exception:1;
        RBus_UInt32  acpu_int_en:1;
        RBus_UInt32  vcpu_int_en:1;
        RBus_UInt32  scpu_exception_en:1;
        RBus_UInt32  write_data:1;
    };
}sb2_dbg3_int_RBUS;

#else //apply LITTLE_ENDIAN

//======SB2 register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  semaphore:1;
        RBus_UInt32  semaphore_data:31;
    };
}sb2_hd_sem_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  scivairq_en:1;
        RBus_UInt32  vcivairq_en:1;
        RBus_UInt32  acivairq_en:1;
        RBus_UInt32  to_en:1;
        RBus_UInt32  to_en1:1;
        RBus_UInt32  vc2ivairq_en:1;
        RBus_UInt32  ac2ivairq_en:1;
        RBus_UInt32  to_end:1;
        RBus_UInt32  res1:23;
    };
}sb2_inv_inten_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  sciva_int:1;
        RBus_UInt32  vciva_int:1;
        RBus_UInt32  aciva_int:1;
        RBus_UInt32  vc2iva_int:1;
        RBus_UInt32  ac2iva_int:1;
        RBus_UInt32  res1:26;
    };
}sb2_inv_intstat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  inv_adr:32;
    };
}sb2_inv_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  to_thr:3;
        RBus_UInt32  to_thr1:3;
        RBus_UInt32  to_thrd:3;
        RBus_UInt32  res1:23;
    };
}sb2_debug_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  vc_merge:1;
        RBus_UInt32  vc_bypass:1;
        RBus_UInt32  vc_in_order:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  ac_in_order:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  res3:20;
    };
}sb2_wrapper_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sync:32;
    };
}sb2_sync_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_mode:5;
        RBus_UInt32  res1:27;
    };
}sb2_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  enable:1;
        RBus_UInt32  write_enable1:1;
        RBus_UInt32  sel0:6;
        RBus_UInt32  write_enable2:1;
        RBus_UInt32  sel1:6;
        RBus_UInt32  write_enable3:1;
        RBus_UInt32  res1:16;
    };
}sb2_debug_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  u2r_24m_mode:1;
        RBus_UInt32  res1:31;
    };
}sb2_uart2rdbs_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rm_rom:4;
        RBus_UInt32  res1:28;
    };
}sb2_rom_rm_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rme_rom:1;
        RBus_UInt32  res1:31;
    };
}sb2_rom_rme_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_test_mode_rom:1;
        RBus_UInt32  res1:31;
    };
}sb2_bist_test_mode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_done_rom:1;
        RBus_UInt32  res1:31;
    };
}sb2_bist_done_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_crc:32;
    };
}sb2_bist_crc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bist_test_ls:1;
        RBus_UInt32  res1:31;
    };
}sb2_bist_ls_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  test1_0_rom:1;
        RBus_UInt32  res1:31;
    };
}sb2_rom_test_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int_sw_ac_en:1;
        RBus_UInt32  int_sw_vc_en:1;
        RBus_UInt32  int_sw_sc_en:1;
        RBus_UInt32  res1:28;
    };
}sb2_cpu_sw_int_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int_sw0:1;
        RBus_UInt32  int_sw1:1;
        RBus_UInt32  int_sw2:1;
        RBus_UInt32  int_sw3:1;
        RBus_UInt32  int_sw4:1;
        RBus_UInt32  int_sw5:1;
        RBus_UInt32  int_sw6:1;
        RBus_UInt32  int_sw7:1;
        RBus_UInt32  int_sw8:1;
        RBus_UInt32  int_sw9:1;
        RBus_UInt32  int_sw10:1;
        RBus_UInt32  int_sw11:1;
        RBus_UInt32  int_sw12:1;
        RBus_UInt32  int_sw13:1;
        RBus_UInt32  int_sw14:1;
        RBus_UInt32  int_sw15:1;
        RBus_UInt32  res1:15;
    };
}sb2_cpu_sw_int_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kcpu_dbus_acc:32;
    };
}sb2_kcpu_dacc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kcpu_dreq_num:24;
        RBus_UInt32  res1:8;
    };
}sb2_kcpu_dreq_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kcpu_dreq_max:16;
        RBus_UInt32  res1:16;
    };
}sb2_kcpu_dreq_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kcpu_dreq_ack:26;
        RBus_UInt32  res1:6;
    };
}sb2_kcpu_dreq_ack_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu2_dbus_acc:32;
    };
}sb2_vcpu2_dacc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu2_dreq_num:24;
        RBus_UInt32  res1:8;
    };
}sb2_vcpu2_dreq_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu2_dreq_max:16;
        RBus_UInt32  res1:16;
    };
}sb2_vcpu2_dreq_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu2_dreq_ack:26;
        RBus_UInt32  res1:6;
    };
}sb2_vcpu2_dreq_ack_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kcpu_rbus_acc:32;
    };
}sb2_kcpu_racc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kcpu_rreq_num:24;
        RBus_UInt32  kcpu_rreq_max:8;
    };
}sb2_kcpu_rreq_rlt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu2_rbus_acc:32;
    };
}sb2_vcpu2_racc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu2_rreq_num:24;
        RBus_UInt32  vcpu2_rreq_max:8;
    };
}sb2_vcpu2_rreq_rlt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu2_dbus_acc:32;
    };
}sb2_acpu2_dacc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu2_dreq_num:24;
        RBus_UInt32  res1:8;
    };
}sb2_acpu2_dreq_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu2_dreq_max:16;
        RBus_UInt32  res1:16;
    };
}sb2_acpu2_dreq_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu2_dreq_ack:26;
        RBus_UInt32  res1:6;
    };
}sb2_acpu2_dreq_ack_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu2_rbus_acc:32;
    };
}sb2_acpu2_racc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu2_rreq_num:24;
        RBus_UInt32  acpu2_rreq_max:8;
    };
}sb2_acpu2_rreq_rlt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  vcpu_dbus_go:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  acpu_dbus_go:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  vcpu2_dbus_go:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  scpu_rbus_go:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  vcpu_rbus_go:1;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  acpu_rbus_go:1;
        RBus_UInt32  write_en6:1;
        RBus_UInt32  vcpu2_rbus_go:1;
        RBus_UInt32  write_en7:1;
        RBus_UInt32  kcpu_dbus_go:1;
        RBus_UInt32  write_en8:1;
        RBus_UInt32  kcpu_rbus_go:1;
        RBus_UInt32  write_en9:1;
        RBus_UInt32  acpu2_dbus_go:1;
        RBus_UInt32  write_en10:1;
        RBus_UInt32  acpu2_rbus_go:1;
        RBus_UInt32  write_en11:1;
        RBus_UInt32  res2:8;
    };
}sb2_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu_dbus_acc:32;
    };
}sb2_vcpu_dacc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu_dreq_num:24;
        RBus_UInt32  res1:8;
    };
}sb2_vcpu_dreq_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu_dreq_max:16;
        RBus_UInt32  res1:16;
    };
}sb2_vcpu_dreq_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu_dreq_ack:26;
        RBus_UInt32  res1:6;
    };
}sb2_vcpu_dreq_ack_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu_dbus_acc:32;
    };
}sb2_acpu_dacc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu_dreq_num:24;
        RBus_UInt32  res1:8;
    };
}sb2_acpu_dreq_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu_dreq_max:16;
        RBus_UInt32  res1:16;
    };
}sb2_acpu_dreq_max_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu_dreq_ack:26;
        RBus_UInt32  res1:6;
    };
}sb2_acpu_dreq_ack_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_rbus_acc:32;
    };
}sb2_scpu_racc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_rreq_num:24;
        RBus_UInt32  scpu_rreq_max:8;
    };
}sb2_scpu_rreq_rlt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu_rbus_acc:32;
    };
}sb2_vcpu_racc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu_rreq_num:24;
        RBus_UInt32  vcpu_rreq_max:8;
    };
}sb2_vcpu_rreq_rlt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu_rbus_acc:32;
    };
}sb2_acpu_racc_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  acpu_rreq_num:24;
        RBus_UInt32  acpu_rreq_max:8;
    };
}sb2_acpu_rreq_rlt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_start_addr:32;
    };
}sb2_dbg_start_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_end_addr:32;
    };
}sb2_dbg_end_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  dbg_id_chk:2;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  dbg_wr_chk:2;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  dbg_scpu_chk_en:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  dbg_vcpu_chk_en:1;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  dbg_acpu_chk_en:1;
        RBus_UInt32  write_en6:1;
        RBus_UInt32  dbg_vcpu2_chk_en:1;
        RBus_UInt32  write_en7:1;
        RBus_UInt32  dbg_kcpu_chk_en:1;
        RBus_UInt32  write_en8:1;
        RBus_UInt32  dbg_acpu2_chk_en:1;
        RBus_UInt32  write_en9:1;
        RBus_UInt32  res1:12;
    };
}sb2_dbg_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_addr:32;
    };
}sb2_dbg_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  vcpu2_dbg_dacc:1;
        RBus_UInt32  vcpu2_dbg_write:1;
        RBus_UInt32  scpu_dbg_dacc:1;
        RBus_UInt32  scpu_dbg_write:1;
        RBus_UInt32  acpu_dbg_dacc:1;
        RBus_UInt32  acpu_dbg_write:1;
        RBus_UInt32  vcpu_dbg_dacc:1;
        RBus_UInt32  vcpu_dbg_write:1;
        RBus_UInt32  kcpu_dbg_dacc:1;
        RBus_UInt32  kcpu_dbg_write:1;
        RBus_UInt32  acpu2_dbg_dacc:1;
        RBus_UInt32  acpu2_dbg_write:1;
        RBus_UInt32  res1:20;
    };
}sb2_dbg_addr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ac_first_addr_en:1;
        RBus_UInt32  vc_first_addr_en:1;
        RBus_UInt32  sc_first_addr_en:1;
        RBus_UInt32  kc_first_addr_en:1;
        RBus_UInt32  vc2_first_addr_en:1;
        RBus_UInt32  ac2_first_addr_en:1;
        RBus_UInt32  res1:26;
    };
}sb2_dbg_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  scpu_neg_int_en:1;
        RBus_UInt32  vcpu_neg_int_en:1;
        RBus_UInt32  acpu_neg_int_en:1;
        RBus_UInt32  scpu_neg_exception:1;
        RBus_UInt32  vcpu_neg_int:1;
        RBus_UInt32  acpu_neg_int:1;
        RBus_UInt32  scpu_int_en:1;
        RBus_UInt32  vcpu_int_en:1;
        RBus_UInt32  acpu_int_en:1;
        RBus_UInt32  scpu_exception:1;
        RBus_UInt32  vcpu_int:1;
        RBus_UInt32  acpu_int:1;
        RBus_UInt32  vcpu2_neg_int_en:1;
        RBus_UInt32  vcpu2_neg_int:1;
        RBus_UInt32  vcpu2_int_en:1;
        RBus_UInt32  vcpu2_int:1;
        RBus_UInt32  kcpu_neg_int_en:1;
        RBus_UInt32  kcpu_neg_int:1;
        RBus_UInt32  kcpu_int_en:1;
        RBus_UInt32  kcpu_int:1;
        RBus_UInt32  acpu2_neg_int_en:1;
        RBus_UInt32  acpu2_neg_int:1;
        RBus_UInt32  acpu2_int_en:1;
        RBus_UInt32  acpu2_int:1;
        RBus_UInt32  scpu_err_en:1;
        RBus_UInt32  res1:6;
    };
}sb2_dbg_int_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data:32;
    };
}sb2_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data:32;
    };
}sb2_shadow_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  semaphore:1;
        RBus_UInt32  semaphore_data:31;
    };
}sb2_hd_sem_new_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kc_line_read_rbus:1;
        RBus_UInt32  ac_line_read_rbus:1;
        RBus_UInt32  ac2_line_read_rbus:1;
        RBus_UInt32  vc_line_read_rbus:1;
        RBus_UInt32  vc2_line_read_rbus:1;
        RBus_UInt32  res1:27;
    };
}sb2_inc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  line_read_rbus_addr:32;
    };
}sb2_inc_addr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  data:32;
    };
}sb2_dic_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hif_plugin_detect_por:1;
        RBus_UInt32  hif_plugin_detect_wdog:1;
        RBus_UInt32  res1:30;
    };
}sb2_ejtag_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  reg_phif_enable:1;
        RBus_UInt32  res1:31;
    };
}sb2_hif_select_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_step:4;
        RBus_UInt32  dummy1801a700_31_4:28;
    };
}sb2_dbus_arb_cr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  arb_en:7;
        RBus_UInt32  res1:25;
    };
}sb2_dbus_arb_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client0_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client0_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}sb2_dbus_latcnt_cr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client1_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client1_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}sb2_dbus_latcnt_cr2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client2_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client2_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}sb2_dbus_latcnt_cr3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client3_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client3_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}sb2_dbus_latcnt_cr4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client4_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client4_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}sb2_dbus_latcnt_cr5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client5_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client5_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}sb2_dbus_latcnt_cr6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  client6_latcnt_beg:8;
        RBus_UInt32  res1:8;
        RBus_UInt32  client6_latcnt_end:8;
        RBus_UInt32  res2:8;
    };
}sb2_dbus_latcnt_cr7_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_go:1;
        RBus_UInt32  pc_rd_only:1;
        RBus_UInt32  res1:30;
    };
}sb2_dbus_pc_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_mon_num:32;
    };
}sb2_dbus_pc_tota_mon_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_ack_num:32;
    };
}sb2_dbus_pc_tota_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_tota_idl_num:32;
    };
}sb2_dbus_pc_tota_idl_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_prog0_sel:4;
        RBus_UInt32  res1:4;
        RBus_UInt32  pc_prog1_sel:4;
        RBus_UInt32  res2:4;
        RBus_UInt32  pc_prog2_sel:4;
        RBus_UInt32  res3:12;
    };
}sb2_dbus_pc_prog_ctrl1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pc_prog0_req_occur:1;
        RBus_UInt32  pc_prog1_req_occur:1;
        RBus_UInt32  pc_prog2_req_occur:1;
        RBus_UInt32  res1:29;
    };
}sb2_dbus_pc_prog_ctrl2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_channel_sel:2;
        RBus_UInt32  res1:30;
    };
}sb2_dbus_pc_prog_0_channel_sel_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_acc_lat:32;
    };
}sb2_dbus_pc_prog_0_acc_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_max_lat:16;
        RBus_UInt32  res1:16;
    };
}sb2_dbus_pc_prog_0_max_lat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_req_num:24;
        RBus_UInt32  res1:8;
    };
}sb2_dbus_pc_prog_0_req_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_ack_num:32;
    };
}sb2_dbus_pc_prog_0_ack_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prog_hitend_cnt:16;
        RBus_UInt32  res1:16;
    };
}sb2_dbus_pc_prog_0_hitend_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bt_go:1;
        RBus_UInt32  bt_rw:1;
        RBus_UInt32  bt_data_inv:1;
        RBus_UInt32  bt_bl:1;
        RBus_UInt32  bt_done:2;
        RBus_UInt32  res1:26;
    };
}sb2_dbus_bridge_test_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  bt_addr_data:28;
    };
}sb2_dbus_bridge_test_addr_data_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  sb_gnt:7;
        RBus_UInt32  res1:9;
        RBus_UInt32  sb_req:7;
        RBus_UInt32  res2:9;
    };
}sb2_dbus_arb_sr0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  win_latcnt:8;
        RBus_UInt32  res1:24;
    };
}sb2_dbus_arb_sr1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_0:16;
        RBus_UInt32  req_thr_0:8;
        RBus_UInt32  max_req_num_0:8;
    };
}sb2_dbus_bw_limit_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_1:16;
        RBus_UInt32  req_thr_1:8;
        RBus_UInt32  max_req_num_1:8;
    };
}sb2_dbus_bw_limit_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_2:16;
        RBus_UInt32  req_thr_2:8;
        RBus_UInt32  max_req_num_2:8;
    };
}sb2_dbus_bw_limit_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_3:16;
        RBus_UInt32  req_thr_3:8;
        RBus_UInt32  max_req_num_3:8;
    };
}sb2_dbus_bw_limit_3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_4:16;
        RBus_UInt32  req_thr_4:8;
        RBus_UInt32  max_req_num_4:8;
    };
}sb2_dbus_bw_limit_4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_5:16;
        RBus_UInt32  req_thr_5:8;
        RBus_UInt32  max_req_num_5:8;
    };
}sb2_dbus_bw_limit_5_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  time_thr_6:16;
        RBus_UInt32  req_thr_6:8;
        RBus_UInt32  max_req_num_6:8;
    };
}sb2_dbus_bw_limit_6_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  bw_limit_en_0:1;
        RBus_UInt32  bw_status_clr_0:1;
        RBus_UInt32  bw_limit_en_1:1;
        RBus_UInt32  bw_status_clr_1:1;
        RBus_UInt32  bw_limit_en_2:1;
        RBus_UInt32  bw_status_clr_2:1;
        RBus_UInt32  bw_limit_en_3:1;
        RBus_UInt32  bw_status_clr_3:1;
        RBus_UInt32  bw_limit_en_4:1;
        RBus_UInt32  bw_status_clr_4:1;
        RBus_UInt32  bw_limit_en_5:1;
        RBus_UInt32  bw_status_clr_5:1;
        RBus_UInt32  bw_limit_en_6:1;
        RBus_UInt32  bw_status_clr_6:1;
        RBus_UInt32  res1:17;
        RBus_UInt32  len_scheme_en:1;
    };
}sb2_dbus_bw_limit_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_queue_num:4;
        RBus_UInt32  rd_queue_num:4;
        RBus_UInt32  res1:24;
    };
}sb2_dbus_queue_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  error_write_full:1;
        RBus_UInt32  error_read_full:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  error_zero_length_id:4;
        RBus_UInt32  res3:15;
        RBus_UInt32  error_clr:1;
    };
}sb2_dbus_error_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  opc:8;
        RBus_UInt32  fat_mode:1;
        RBus_UInt32  dual_quad_mode:4;
        RBus_UInt32  res1:19;
    };
}sb2_sfc_opcode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dmycnt:3;
        RBus_UInt32  adren:1;
        RBus_UInt32  dataen:1;
        RBus_UInt32  res1:11;
        RBus_UInt32  res2:16;
    };
}sb2_sfc_ctl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  fdiv:8;
        RBus_UInt32  mode:1;
        RBus_UInt32  clk_duty50_en:1;
        RBus_UInt32  res1:6;
        RBus_UInt32  fdiv_hi:8;
        RBus_UInt32  res2:8;
    };
}sb2_sfc_sck_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  plcnt:8;
        RBus_UInt32  phcnt:8;
        RBus_UInt32  tdt:16;
    };
}sb2_sfc_ce_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wp_n:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  ce_n:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  spi_csn_inv:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  res2:24;
    };
}sb2_sfc_wp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  pos_latch:1;
        RBus_UInt32  delay_sel:4;
        RBus_UInt32  res1:27;
    };
}sb2_sfc_pos_latch_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rdsr_op:8;
        RBus_UInt32  wt_prog_done:1;
        RBus_UInt32  res1:23;
    };
}sb2_sfc_wait_wr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wr_en_op:8;
        RBus_UInt32  wt_prog_en:1;
        RBus_UInt32  res1:23;
    };
}sb2_sfc_en_wr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  adr4byte_en:1;
        RBus_UInt32  res1:31;
    };
}sb2_sfc_opcode2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  spi_nand_flash_en:1;
        RBus_UInt32  spi_nand_flash_addr_cnt:2;
        RBus_UInt32  res2:4;
    };
}sb2_spi_nand_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  secure_reg_lock:1;
        RBus_UInt32  secure_crt_reg_lock:1;
        RBus_UInt32  secure_tp_reg_lock:1;
        RBus_UInt32  storage_protection_reg_lock:1;
        RBus_UInt32  rom_nagra_region_read_reg_lock:1;
        RBus_UInt32  rom_kcpu_reg_lock:1;
        RBus_UInt32  dc_sys_di_sram_mode_reg_lock:1;
        RBus_UInt32  res1:1;
        RBus_UInt32  ddr_scramble_protection_reg_lock:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  dc_ibu_reg_lock:1;
        RBus_UInt32  otp_rosc_reg_lock:1;
        RBus_UInt32  cp_cw_ctrl_reg_lock:1;
        RBus_UInt32  cpu_boot_addr_remap_reg_lock:1;
        RBus_UInt32  otp_rw_par_reg_lock:1;
        RBus_UInt32  res3:6;
        RBus_UInt32  otp_rtk_chip_id_lock:1;
        RBus_UInt32  res4:9;
    };
}sb2_security_lock_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_rwen_reg_ae_ade_n:1;
        RBus_UInt32  scpu_rwen_reg_vde_n:1;
        RBus_UInt32  scpu_rwen_reg_ve_n:1;
        RBus_UInt32  scpu_rwen_reg_md_vcpu_n:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  kcpu_rbus_region2_en:1;
        RBus_UInt32  kcpu_rbus_region1_en:1;
        RBus_UInt32  res2:1;
        RBus_UInt32  scpu_w_rng_n:1;
        RBus_UInt32  cp_scpu_key_reg_ren_n:1;
        RBus_UInt32  scpu_w_rtc_en:1;
        RBus_UInt32  res3:20;
    };
}sb2_security_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  start_addr1:19;
        RBus_UInt32  res2:11;
    };
}sb2_kcpu_rbus_protect1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  end_addr1:19;
        RBus_UInt32  res2:11;
    };
}sb2_kcpu_rbus_protect2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  start_addr2:19;
        RBus_UInt32  res2:11;
    };
}sb2_kcpu_rbus_protect3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  end_addr2:19;
        RBus_UInt32  res2:11;
    };
}sb2_kcpu_rbus_protect4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wdog_reg_rw_sel:1;
        RBus_UInt32  pmm_reg_rw_sel:1;
        RBus_UInt32  res1:30;
    };
}sb2_security_crt_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_rwen_reg_tp_n:1;
        RBus_UInt32  scpu_wen_tp_cw_reg_n:1;
        RBus_UInt32  res1:30;
    };
}sb2_security_tp_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_addr_bit_set:3;
        RBus_UInt32  flash_addr_protect2_en:1;
        RBus_UInt32  flash_addr_protect1_en:1;
        RBus_UInt32  res1:27;
    };
}sb2_security_flash_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  flash_protect1_start_addr:17;
        RBus_UInt32  res2:7;
    };
}sb2_flash_protect1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  flash_protect1_end_addr:17;
        RBus_UInt32  res2:7;
    };
}sb2_flash_protect2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  flash_protect2_start_addr:17;
        RBus_UInt32  res2:7;
    };
}sb2_flash_protect3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  flash_protect2_end_addr:17;
        RBus_UInt32  res2:7;
    };
}sb2_flash_protect4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rom_kcpu_region_en:1;
        RBus_UInt32  rom_kcpu_region_endaddr:15;
        RBus_UInt32  rom_kcpu_region_staddr:15;
        RBus_UInt32  res1:1;
    };
}sb2_security_rom_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  acpu_boot_addr_remap:16;
    };
}sb2_boot_remap1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  vcpu_boot_addr_remap:16;
    };
}sb2_boot_remap2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  vcpu2_boot_addr_remap:16;
    };
}sb2_boot_remap3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  acpu2_boot_addr_remap:16;
    };
}sb2_boot_remap4_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  scpu_w_otp_reg_n:1;
        RBus_UInt32  res1:31;
    };
}sb2_security_otp_rw_par_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_release:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  se_queue2_protect:2;
        RBus_UInt32  nnip_wrapper_protect:1;
        RBus_UInt32  nnip_general_protect:1;
        RBus_UInt32  otp_bits_kcpu_rd_n:1;
        RBus_UInt32  otp_bits_acpu_rd_n:1;
        RBus_UInt32  otp_bits_vcpu_rd_n:1;
        RBus_UInt32  otp_bits_scpu_rd_n:1;
        RBus_UInt32  dc_picindex_rw_n:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  gpu_os_id_0_protect:1;
        RBus_UInt32  gpu_os_id_1_protect:1;
        RBus_UInt32  gpu_os_id_2_protect:1;
        RBus_UInt32  gpu_os_id_3_protect:1;
        RBus_UInt32  gpu_general_protect:1;
        RBus_UInt32  gpu_security_protect:1;
        RBus_UInt32  vodma_security_protect:1;
        RBus_UInt32  dispim_dexc_security_protect:1;
        RBus_UInt32  dispim_di_security_protect:1;
        RBus_UInt32  dispim_vi_security_protect:1;
        RBus_UInt32  dispim_m_security_protect:1;
        RBus_UInt32  dispim_i3ddma_security_protect:1;
        RBus_UInt32  dispd_od_security_protect:1;
        RBus_UInt32  memc_security_protect:1;
        RBus_UInt32  dispd_dc2h_security_protect:1;
        RBus_UInt32  res3:1;
    };
}sb2_ctrl_reg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  flash_start_addr:16;
        RBus_UInt32  flash_end_addr:16;
    };
}sb2_cpu_flash_region_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  kcivairq_en:1;
        RBus_UInt32  kcnsrbusirq_en:1;
        RBus_UInt32  kcnsfbusirq_en:1;
        RBus_UInt32  res1:28;
    };
}sb2_inten_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  kciva_int:1;
        RBus_UInt32  kcnsrbus_int:1;
        RBus_UInt32  kcnsfbus_int:1;
        RBus_UInt32  res1:28;
    };
}sb2_intstat_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rbus_access_addr:21;
        RBus_UInt32  res1:3;
        RBus_UInt32  rbus_access_cpu:4;
        RBus_UInt32  fbus_access_cpu:3;
        RBus_UInt32  res2:1;
    };
}sb2_ns_cpu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_addr_kcpu:32;
    };
}sb2_dbg_addr_kcpu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kc_dbg_sel0:5;
        RBus_UInt32  res1:3;
        RBus_UInt32  kc_dbg_sel1:5;
        RBus_UInt32  res2:3;
        RBus_UInt32  kc_dbg_enable:1;
        RBus_UInt32  res3:15;
    };
}sb2_kcpu_dbg_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  kcpu_exvoffset:32;
    };
}sb2_kcpu_exception_offset_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_start_addr:32;
    };
}sb2_dbg_start2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_end_addr:32;
    };
}sb2_dbg_end2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  dbg_id_chk:2;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  dbg_wr_chk:2;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  dbg_scpu_chk_en:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  dbg_vcpu_chk_en:1;
        RBus_UInt32  write_en5:1;
        RBus_UInt32  dbg_acpu_chk_en:1;
        RBus_UInt32  write_en6:1;
        RBus_UInt32  dbg_vcpu2_chk_en:1;
        RBus_UInt32  write_en7:1;
        RBus_UInt32  dbg_kcpu_chk_en:1;
        RBus_UInt32  write_en8:1;
        RBus_UInt32  dbg_acpu2_chk_en:1;
        RBus_UInt32  write_en9:1;
        RBus_UInt32  res1:12;
    };
}sb2_dbg_ctrl3_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int_sa:1;
        RBus_UInt32  int_sv:1;
        RBus_UInt32  int_sk:1;
        RBus_UInt32  int_sa2:1;
        RBus_UInt32  int_sv2:1;
        RBus_UInt32  res1:26;
    };
}sb2_nmi_cpu_int_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  int_sa_en:1;
        RBus_UInt32  int_sv_en:1;
        RBus_UInt32  int_sk_en:1;
        RBus_UInt32  int_sa2_en:1;
        RBus_UInt32  int_sv2_en:1;
        RBus_UInt32  res1:26;
    };
}sb2_nmi_cpu_int_en_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addcmd:32;
    };
}sb2_dbus_cmd_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addcmd:18;
        RBus_UInt32  res1:14;
    };
}sb2_dbus_cmd2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_target_addr:21;
        RBus_UInt32  res1:11;
    };
}sb2_dbg3_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_bit_monitor:32;
    };
}sb2_dbg3_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_data_monitor:32;
    };
}sb2_dbg3_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dbg_en:1;
        RBus_UInt32  write_en1:1;
        RBus_UInt32  dbg_scpu_chk_en:1;
        RBus_UInt32  write_en2:1;
        RBus_UInt32  dbg_vcpu_chk_en:1;
        RBus_UInt32  write_en3:1;
        RBus_UInt32  dbg_acpu_chk_en:1;
        RBus_UInt32  write_en4:1;
        RBus_UInt32  res1:24;
    };
}sb2_dbg3_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_wdata:32;
    };
}sb2_dbg3_wdata_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  monitor_group:2;
        RBus_UInt32  res1:30;
    };
}sb2_dbg3_cpu_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  scpu_exception_en:1;
        RBus_UInt32  vcpu_int_en:1;
        RBus_UInt32  acpu_int_en:1;
        RBus_UInt32  scpu_exception:1;
        RBus_UInt32  vcpu_int:1;
        RBus_UInt32  acpu_int:1;
        RBus_UInt32  res1:25;
    };
}sb2_dbg3_int_RBUS;




#endif 


#endif 
