/**
* @file Merlin5-DesignSpec-Lzma
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_LZMA_REG_H_
#define _RBUS_LZMA_REG_H_

#include "rbus_types.h"



//  LZMA Register Address
#define  LZMA_CMD_0_BASE                                                        0x18068000
#define  LZMA_CMD_0_BASE_reg_addr                                                "0xB8068000"
#define  LZMA_CMD_0_BASE_reg                                                     0xB8068000
#define  LZMA_CMD_0_BASE_inst_addr                                               "0x0000"
#define  set_LZMA_CMD_0_BASE_reg(data)                                           (*((volatile unsigned int*)LZMA_CMD_0_BASE_reg)=data)
#define  get_LZMA_CMD_0_BASE_reg                                                 (*((volatile unsigned int*)LZMA_CMD_0_BASE_reg))
#define  LZMA_CMD_0_BASE_base_shift                                              (4)
#define  LZMA_CMD_0_BASE_base_mask                                               (0xFFFFFFF0)
#define  LZMA_CMD_0_BASE_base(data)                                              (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_0_BASE_get_base(data)                                          ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_0_LIMIT                                                       0x18068004
#define  LZMA_CMD_0_LIMIT_reg_addr                                               "0xB8068004"
#define  LZMA_CMD_0_LIMIT_reg                                                    0xB8068004
#define  LZMA_CMD_0_LIMIT_inst_addr                                              "0x0001"
#define  set_LZMA_CMD_0_LIMIT_reg(data)                                          (*((volatile unsigned int*)LZMA_CMD_0_LIMIT_reg)=data)
#define  get_LZMA_CMD_0_LIMIT_reg                                                (*((volatile unsigned int*)LZMA_CMD_0_LIMIT_reg))
#define  LZMA_CMD_0_LIMIT_limit_shift                                            (4)
#define  LZMA_CMD_0_LIMIT_limit_mask                                             (0xFFFFFFF0)
#define  LZMA_CMD_0_LIMIT_limit(data)                                            (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_0_LIMIT_get_limit(data)                                        ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_0_RPTR                                                        0x18068008
#define  LZMA_CMD_0_RPTR_reg_addr                                                "0xB8068008"
#define  LZMA_CMD_0_RPTR_reg                                                     0xB8068008
#define  LZMA_CMD_0_RPTR_inst_addr                                               "0x0002"
#define  set_LZMA_CMD_0_RPTR_reg(data)                                           (*((volatile unsigned int*)LZMA_CMD_0_RPTR_reg)=data)
#define  get_LZMA_CMD_0_RPTR_reg                                                 (*((volatile unsigned int*)LZMA_CMD_0_RPTR_reg))
#define  LZMA_CMD_0_RPTR_rptr_shift                                              (4)
#define  LZMA_CMD_0_RPTR_rptr_mask                                               (0xFFFFFFF0)
#define  LZMA_CMD_0_RPTR_rptr(data)                                              (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_0_RPTR_get_rptr(data)                                          ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_0_WPTR                                                        0x1806800C
#define  LZMA_CMD_0_WPTR_reg_addr                                                "0xB806800C"
#define  LZMA_CMD_0_WPTR_reg                                                     0xB806800C
#define  LZMA_CMD_0_WPTR_inst_addr                                               "0x0003"
#define  set_LZMA_CMD_0_WPTR_reg(data)                                           (*((volatile unsigned int*)LZMA_CMD_0_WPTR_reg)=data)
#define  get_LZMA_CMD_0_WPTR_reg                                                 (*((volatile unsigned int*)LZMA_CMD_0_WPTR_reg))
#define  LZMA_CMD_0_WPTR_wptr_shift                                              (4)
#define  LZMA_CMD_0_WPTR_wptr_mask                                               (0xFFFFFFF0)
#define  LZMA_CMD_0_WPTR_wptr(data)                                              (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_0_WPTR_get_wptr(data)                                          ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_0_SRC                                                         0x18068010
#define  LZMA_CMD_0_SRC_reg_addr                                                 "0xB8068010"
#define  LZMA_CMD_0_SRC_reg                                                      0xB8068010
#define  LZMA_CMD_0_SRC_inst_addr                                                "0x0004"
#define  set_LZMA_CMD_0_SRC_reg(data)                                            (*((volatile unsigned int*)LZMA_CMD_0_SRC_reg)=data)
#define  get_LZMA_CMD_0_SRC_reg                                                  (*((volatile unsigned int*)LZMA_CMD_0_SRC_reg))
#define  LZMA_CMD_0_SRC_src_shift                                                (4)
#define  LZMA_CMD_0_SRC_cmd_error_shift                                          (3)
#define  LZMA_CMD_0_SRC_hw_done_shift                                            (2)
#define  LZMA_CMD_0_SRC_decode_mode_shift                                        (1)
#define  LZMA_CMD_0_SRC_encode_mode_shift                                        (0)
#define  LZMA_CMD_0_SRC_src_mask                                                 (0xFFFFFFF0)
#define  LZMA_CMD_0_SRC_cmd_error_mask                                           (0x00000008)
#define  LZMA_CMD_0_SRC_hw_done_mask                                             (0x00000004)
#define  LZMA_CMD_0_SRC_decode_mode_mask                                         (0x00000002)
#define  LZMA_CMD_0_SRC_encode_mode_mask                                         (0x00000001)
#define  LZMA_CMD_0_SRC_src(data)                                                (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_0_SRC_cmd_error(data)                                          (0x00000008&((data)<<3))
#define  LZMA_CMD_0_SRC_hw_done(data)                                            (0x00000004&((data)<<2))
#define  LZMA_CMD_0_SRC_decode_mode(data)                                        (0x00000002&((data)<<1))
#define  LZMA_CMD_0_SRC_encode_mode(data)                                        (0x00000001&(data))
#define  LZMA_CMD_0_SRC_get_src(data)                                            ((0xFFFFFFF0&(data))>>4)
#define  LZMA_CMD_0_SRC_get_cmd_error(data)                                      ((0x00000008&(data))>>3)
#define  LZMA_CMD_0_SRC_get_hw_done(data)                                        ((0x00000004&(data))>>2)
#define  LZMA_CMD_0_SRC_get_decode_mode(data)                                    ((0x00000002&(data))>>1)
#define  LZMA_CMD_0_SRC_get_encode_mode(data)                                    (0x00000001&(data))

#define  LZMA_CMD_0_dec                                                         0x18068014
#define  LZMA_CMD_0_dec_reg_addr                                                 "0xB8068014"
#define  LZMA_CMD_0_dec_reg                                                      0xB8068014
#define  LZMA_CMD_0_dec_inst_addr                                                "0x0005"
#define  set_LZMA_CMD_0_dec_reg(data)                                            (*((volatile unsigned int*)LZMA_CMD_0_dec_reg)=data)
#define  get_LZMA_CMD_0_dec_reg                                                  (*((volatile unsigned int*)LZMA_CMD_0_dec_reg))
#define  LZMA_CMD_0_dec_dec_shift                                                (4)
#define  LZMA_CMD_0_dec_hw_done_count_shift                                      (0)
#define  LZMA_CMD_0_dec_dec_mask                                                 (0xFFFFFFF0)
#define  LZMA_CMD_0_dec_hw_done_count_mask                                       (0x0000000F)
#define  LZMA_CMD_0_dec_dec(data)                                                (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_0_dec_hw_done_count(data)                                      (0x0000000F&(data))
#define  LZMA_CMD_0_dec_get_dec(data)                                            ((0xFFFFFFF0&(data))>>4)
#define  LZMA_CMD_0_dec_get_hw_done_count(data)                                  (0x0000000F&(data))

#define  LZMA_CMD_0_info_encode                                                 0x18068018
#define  LZMA_CMD_0_info_encode_reg_addr                                         "0xB8068018"
#define  LZMA_CMD_0_info_encode_reg                                              0xB8068018
#define  LZMA_CMD_0_info_encode_inst_addr                                        "0x0006"
#define  set_LZMA_CMD_0_info_encode_reg(data)                                    (*((volatile unsigned int*)LZMA_CMD_0_info_encode_reg)=data)
#define  get_LZMA_CMD_0_info_encode_reg                                          (*((volatile unsigned int*)LZMA_CMD_0_info_encode_reg))
#define  LZMA_CMD_0_info_encode_encode_crc_shift                                 (16)
#define  LZMA_CMD_0_info_encode_size_over4k_shift                                (13)
#define  LZMA_CMD_0_info_encode_comp_size_shift                                  (0)
#define  LZMA_CMD_0_info_encode_encode_crc_mask                                  (0xFFFF0000)
#define  LZMA_CMD_0_info_encode_size_over4k_mask                                 (0x00002000)
#define  LZMA_CMD_0_info_encode_comp_size_mask                                   (0x00001FFF)
#define  LZMA_CMD_0_info_encode_encode_crc(data)                                 (0xFFFF0000&((data)<<16))
#define  LZMA_CMD_0_info_encode_size_over4k(data)                                (0x00002000&((data)<<13))
#define  LZMA_CMD_0_info_encode_comp_size(data)                                  (0x00001FFF&(data))
#define  LZMA_CMD_0_info_encode_get_encode_crc(data)                             ((0xFFFF0000&(data))>>16)
#define  LZMA_CMD_0_info_encode_get_size_over4k(data)                            ((0x00002000&(data))>>13)
#define  LZMA_CMD_0_info_encode_get_comp_size(data)                              (0x00001FFF&(data))

#define  LZMA_CMD_0_info_decode_1                                               0x1806801C
#define  LZMA_CMD_0_info_decode_1_reg_addr                                       "0xB806801C"
#define  LZMA_CMD_0_info_decode_1_reg                                            0xB806801C
#define  LZMA_CMD_0_info_decode_1_inst_addr                                      "0x0007"
#define  set_LZMA_CMD_0_info_decode_1_reg(data)                                  (*((volatile unsigned int*)LZMA_CMD_0_info_decode_1_reg)=data)
#define  get_LZMA_CMD_0_info_decode_1_reg                                        (*((volatile unsigned int*)LZMA_CMD_0_info_decode_1_reg))
#define  LZMA_CMD_0_info_decode_1_golden_crc_lsb_shift                           (24)
#define  LZMA_CMD_0_info_decode_1_decoder_error_shift                            (23)
#define  LZMA_CMD_0_info_decode_1_decode_size_shift                              (0)
#define  LZMA_CMD_0_info_decode_1_golden_crc_lsb_mask                            (0xFF000000)
#define  LZMA_CMD_0_info_decode_1_decoder_error_mask                             (0x00800000)
#define  LZMA_CMD_0_info_decode_1_decode_size_mask                               (0x007FFFFF)
#define  LZMA_CMD_0_info_decode_1_golden_crc_lsb(data)                           (0xFF000000&((data)<<24))
#define  LZMA_CMD_0_info_decode_1_decoder_error(data)                            (0x00800000&((data)<<23))
#define  LZMA_CMD_0_info_decode_1_decode_size(data)                              (0x007FFFFF&(data))
#define  LZMA_CMD_0_info_decode_1_get_golden_crc_lsb(data)                       ((0xFF000000&(data))>>24)
#define  LZMA_CMD_0_info_decode_1_get_decoder_error(data)                        ((0x00800000&(data))>>23)
#define  LZMA_CMD_0_info_decode_1_get_decode_size(data)                          (0x007FFFFF&(data))

#define  LZMA_CMD_0_info_decode_2                                               0x18068020
#define  LZMA_CMD_0_info_decode_2_reg_addr                                       "0xB8068020"
#define  LZMA_CMD_0_info_decode_2_reg                                            0xB8068020
#define  LZMA_CMD_0_info_decode_2_inst_addr                                      "0x0008"
#define  set_LZMA_CMD_0_info_decode_2_reg(data)                                  (*((volatile unsigned int*)LZMA_CMD_0_info_decode_2_reg)=data)
#define  get_LZMA_CMD_0_info_decode_2_reg                                        (*((volatile unsigned int*)LZMA_CMD_0_info_decode_2_reg))
#define  LZMA_CMD_0_info_decode_2_golden_crc_msb_shift                           (24)
#define  LZMA_CMD_0_info_decode_2_decode_crc_error_shift                         (23)
#define  LZMA_CMD_0_info_decode_2_encode_size_decode_shift                       (0)
#define  LZMA_CMD_0_info_decode_2_golden_crc_msb_mask                            (0xFF000000)
#define  LZMA_CMD_0_info_decode_2_decode_crc_error_mask                          (0x00800000)
#define  LZMA_CMD_0_info_decode_2_encode_size_decode_mask                        (0x007FFFFF)
#define  LZMA_CMD_0_info_decode_2_golden_crc_msb(data)                           (0xFF000000&((data)<<24))
#define  LZMA_CMD_0_info_decode_2_decode_crc_error(data)                         (0x00800000&((data)<<23))
#define  LZMA_CMD_0_info_decode_2_encode_size_decode(data)                       (0x007FFFFF&(data))
#define  LZMA_CMD_0_info_decode_2_get_golden_crc_msb(data)                       ((0xFF000000&(data))>>24)
#define  LZMA_CMD_0_info_decode_2_get_decode_crc_error(data)                     ((0x00800000&(data))>>23)
#define  LZMA_CMD_0_info_decode_2_get_encode_size_decode(data)                   (0x007FFFFF&(data))

#define  LZMA_CMD_1_BASE                                                        0x18068024
#define  LZMA_CMD_1_BASE_reg_addr                                                "0xB8068024"
#define  LZMA_CMD_1_BASE_reg                                                     0xB8068024
#define  LZMA_CMD_1_BASE_inst_addr                                               "0x0009"
#define  set_LZMA_CMD_1_BASE_reg(data)                                           (*((volatile unsigned int*)LZMA_CMD_1_BASE_reg)=data)
#define  get_LZMA_CMD_1_BASE_reg                                                 (*((volatile unsigned int*)LZMA_CMD_1_BASE_reg))
#define  LZMA_CMD_1_BASE_base_shift                                              (4)
#define  LZMA_CMD_1_BASE_base_mask                                               (0xFFFFFFF0)
#define  LZMA_CMD_1_BASE_base(data)                                              (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_1_BASE_get_base(data)                                          ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_1_LIMIT                                                       0x18068028
#define  LZMA_CMD_1_LIMIT_reg_addr                                               "0xB8068028"
#define  LZMA_CMD_1_LIMIT_reg                                                    0xB8068028
#define  LZMA_CMD_1_LIMIT_inst_addr                                              "0x000A"
#define  set_LZMA_CMD_1_LIMIT_reg(data)                                          (*((volatile unsigned int*)LZMA_CMD_1_LIMIT_reg)=data)
#define  get_LZMA_CMD_1_LIMIT_reg                                                (*((volatile unsigned int*)LZMA_CMD_1_LIMIT_reg))
#define  LZMA_CMD_1_LIMIT_limit_shift                                            (4)
#define  LZMA_CMD_1_LIMIT_limit_mask                                             (0xFFFFFFF0)
#define  LZMA_CMD_1_LIMIT_limit(data)                                            (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_1_LIMIT_get_limit(data)                                        ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_1_RPTR                                                        0x1806802C
#define  LZMA_CMD_1_RPTR_reg_addr                                                "0xB806802C"
#define  LZMA_CMD_1_RPTR_reg                                                     0xB806802C
#define  LZMA_CMD_1_RPTR_inst_addr                                               "0x000B"
#define  set_LZMA_CMD_1_RPTR_reg(data)                                           (*((volatile unsigned int*)LZMA_CMD_1_RPTR_reg)=data)
#define  get_LZMA_CMD_1_RPTR_reg                                                 (*((volatile unsigned int*)LZMA_CMD_1_RPTR_reg))
#define  LZMA_CMD_1_RPTR_rptr_shift                                              (4)
#define  LZMA_CMD_1_RPTR_rptr_mask                                               (0xFFFFFFF0)
#define  LZMA_CMD_1_RPTR_rptr(data)                                              (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_1_RPTR_get_rptr(data)                                          ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_1_WPTR                                                        0x18068030
#define  LZMA_CMD_1_WPTR_reg_addr                                                "0xB8068030"
#define  LZMA_CMD_1_WPTR_reg                                                     0xB8068030
#define  LZMA_CMD_1_WPTR_inst_addr                                               "0x000C"
#define  set_LZMA_CMD_1_WPTR_reg(data)                                           (*((volatile unsigned int*)LZMA_CMD_1_WPTR_reg)=data)
#define  get_LZMA_CMD_1_WPTR_reg                                                 (*((volatile unsigned int*)LZMA_CMD_1_WPTR_reg))
#define  LZMA_CMD_1_WPTR_wptr_shift                                              (4)
#define  LZMA_CMD_1_WPTR_wptr_mask                                               (0xFFFFFFF0)
#define  LZMA_CMD_1_WPTR_wptr(data)                                              (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_1_WPTR_get_wptr(data)                                          ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_1_SRC                                                         0x18068034
#define  LZMA_CMD_1_SRC_reg_addr                                                 "0xB8068034"
#define  LZMA_CMD_1_SRC_reg                                                      0xB8068034
#define  LZMA_CMD_1_SRC_inst_addr                                                "0x000D"
#define  set_LZMA_CMD_1_SRC_reg(data)                                            (*((volatile unsigned int*)LZMA_CMD_1_SRC_reg)=data)
#define  get_LZMA_CMD_1_SRC_reg                                                  (*((volatile unsigned int*)LZMA_CMD_1_SRC_reg))
#define  LZMA_CMD_1_SRC_src_shift                                                (4)
#define  LZMA_CMD_1_SRC_cmd_error_shift                                          (3)
#define  LZMA_CMD_1_SRC_hw_done_shift                                            (2)
#define  LZMA_CMD_1_SRC_decode_mode_shift                                        (1)
#define  LZMA_CMD_1_SRC_encode_mode_shift                                        (0)
#define  LZMA_CMD_1_SRC_src_mask                                                 (0xFFFFFFF0)
#define  LZMA_CMD_1_SRC_cmd_error_mask                                           (0x00000008)
#define  LZMA_CMD_1_SRC_hw_done_mask                                             (0x00000004)
#define  LZMA_CMD_1_SRC_decode_mode_mask                                         (0x00000002)
#define  LZMA_CMD_1_SRC_encode_mode_mask                                         (0x00000001)
#define  LZMA_CMD_1_SRC_src(data)                                                (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_1_SRC_cmd_error(data)                                          (0x00000008&((data)<<3))
#define  LZMA_CMD_1_SRC_hw_done(data)                                            (0x00000004&((data)<<2))
#define  LZMA_CMD_1_SRC_decode_mode(data)                                        (0x00000002&((data)<<1))
#define  LZMA_CMD_1_SRC_encode_mode(data)                                        (0x00000001&(data))
#define  LZMA_CMD_1_SRC_get_src(data)                                            ((0xFFFFFFF0&(data))>>4)
#define  LZMA_CMD_1_SRC_get_cmd_error(data)                                      ((0x00000008&(data))>>3)
#define  LZMA_CMD_1_SRC_get_hw_done(data)                                        ((0x00000004&(data))>>2)
#define  LZMA_CMD_1_SRC_get_decode_mode(data)                                    ((0x00000002&(data))>>1)
#define  LZMA_CMD_1_SRC_get_encode_mode(data)                                    (0x00000001&(data))

#define  LZMA_CMD_1_dec                                                         0x18068038
#define  LZMA_CMD_1_dec_reg_addr                                                 "0xB8068038"
#define  LZMA_CMD_1_dec_reg                                                      0xB8068038
#define  LZMA_CMD_1_dec_inst_addr                                                "0x000E"
#define  set_LZMA_CMD_1_dec_reg(data)                                            (*((volatile unsigned int*)LZMA_CMD_1_dec_reg)=data)
#define  get_LZMA_CMD_1_dec_reg                                                  (*((volatile unsigned int*)LZMA_CMD_1_dec_reg))
#define  LZMA_CMD_1_dec_dec_shift                                                (4)
#define  LZMA_CMD_1_dec_hw_done_count_shift                                      (0)
#define  LZMA_CMD_1_dec_dec_mask                                                 (0xFFFFFFF0)
#define  LZMA_CMD_1_dec_hw_done_count_mask                                       (0x0000000F)
#define  LZMA_CMD_1_dec_dec(data)                                                (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_1_dec_hw_done_count(data)                                      (0x0000000F&(data))
#define  LZMA_CMD_1_dec_get_dec(data)                                            ((0xFFFFFFF0&(data))>>4)
#define  LZMA_CMD_1_dec_get_hw_done_count(data)                                  (0x0000000F&(data))

#define  LZMA_CMD_1_info_encode                                                 0x1806803C
#define  LZMA_CMD_1_info_encode_reg_addr                                         "0xB806803C"
#define  LZMA_CMD_1_info_encode_reg                                              0xB806803C
#define  LZMA_CMD_1_info_encode_inst_addr                                        "0x000F"
#define  set_LZMA_CMD_1_info_encode_reg(data)                                    (*((volatile unsigned int*)LZMA_CMD_1_info_encode_reg)=data)
#define  get_LZMA_CMD_1_info_encode_reg                                          (*((volatile unsigned int*)LZMA_CMD_1_info_encode_reg))
#define  LZMA_CMD_1_info_encode_encode_crc_shift                                 (16)
#define  LZMA_CMD_1_info_encode_size_over4k_shift                                (13)
#define  LZMA_CMD_1_info_encode_comp_size_shift                                  (0)
#define  LZMA_CMD_1_info_encode_encode_crc_mask                                  (0xFFFF0000)
#define  LZMA_CMD_1_info_encode_size_over4k_mask                                 (0x00002000)
#define  LZMA_CMD_1_info_encode_comp_size_mask                                   (0x00001FFF)
#define  LZMA_CMD_1_info_encode_encode_crc(data)                                 (0xFFFF0000&((data)<<16))
#define  LZMA_CMD_1_info_encode_size_over4k(data)                                (0x00002000&((data)<<13))
#define  LZMA_CMD_1_info_encode_comp_size(data)                                  (0x00001FFF&(data))
#define  LZMA_CMD_1_info_encode_get_encode_crc(data)                             ((0xFFFF0000&(data))>>16)
#define  LZMA_CMD_1_info_encode_get_size_over4k(data)                            ((0x00002000&(data))>>13)
#define  LZMA_CMD_1_info_encode_get_comp_size(data)                              (0x00001FFF&(data))

#define  LZMA_CMD_1_info_decode_1                                               0x18068040
#define  LZMA_CMD_1_info_decode_1_reg_addr                                       "0xB8068040"
#define  LZMA_CMD_1_info_decode_1_reg                                            0xB8068040
#define  LZMA_CMD_1_info_decode_1_inst_addr                                      "0x0010"
#define  set_LZMA_CMD_1_info_decode_1_reg(data)                                  (*((volatile unsigned int*)LZMA_CMD_1_info_decode_1_reg)=data)
#define  get_LZMA_CMD_1_info_decode_1_reg                                        (*((volatile unsigned int*)LZMA_CMD_1_info_decode_1_reg))
#define  LZMA_CMD_1_info_decode_1_golden_crc_lsb_shift                           (24)
#define  LZMA_CMD_1_info_decode_1_decoder_error_shift                            (23)
#define  LZMA_CMD_1_info_decode_1_decode_size_shift                              (0)
#define  LZMA_CMD_1_info_decode_1_golden_crc_lsb_mask                            (0xFF000000)
#define  LZMA_CMD_1_info_decode_1_decoder_error_mask                             (0x00800000)
#define  LZMA_CMD_1_info_decode_1_decode_size_mask                               (0x007FFFFF)
#define  LZMA_CMD_1_info_decode_1_golden_crc_lsb(data)                           (0xFF000000&((data)<<24))
#define  LZMA_CMD_1_info_decode_1_decoder_error(data)                            (0x00800000&((data)<<23))
#define  LZMA_CMD_1_info_decode_1_decode_size(data)                              (0x007FFFFF&(data))
#define  LZMA_CMD_1_info_decode_1_get_golden_crc_lsb(data)                       ((0xFF000000&(data))>>24)
#define  LZMA_CMD_1_info_decode_1_get_decoder_error(data)                        ((0x00800000&(data))>>23)
#define  LZMA_CMD_1_info_decode_1_get_decode_size(data)                          (0x007FFFFF&(data))

#define  LZMA_CMD_1_info_decode_2                                               0x18068044
#define  LZMA_CMD_1_info_decode_2_reg_addr                                       "0xB8068044"
#define  LZMA_CMD_1_info_decode_2_reg                                            0xB8068044
#define  LZMA_CMD_1_info_decode_2_inst_addr                                      "0x0011"
#define  set_LZMA_CMD_1_info_decode_2_reg(data)                                  (*((volatile unsigned int*)LZMA_CMD_1_info_decode_2_reg)=data)
#define  get_LZMA_CMD_1_info_decode_2_reg                                        (*((volatile unsigned int*)LZMA_CMD_1_info_decode_2_reg))
#define  LZMA_CMD_1_info_decode_2_golden_crc_msb_shift                           (24)
#define  LZMA_CMD_1_info_decode_2_decode_crc_error_shift                         (23)
#define  LZMA_CMD_1_info_decode_2_encode_size_decode_shift                       (0)
#define  LZMA_CMD_1_info_decode_2_golden_crc_msb_mask                            (0xFF000000)
#define  LZMA_CMD_1_info_decode_2_decode_crc_error_mask                          (0x00800000)
#define  LZMA_CMD_1_info_decode_2_encode_size_decode_mask                        (0x007FFFFF)
#define  LZMA_CMD_1_info_decode_2_golden_crc_msb(data)                           (0xFF000000&((data)<<24))
#define  LZMA_CMD_1_info_decode_2_decode_crc_error(data)                         (0x00800000&((data)<<23))
#define  LZMA_CMD_1_info_decode_2_encode_size_decode(data)                       (0x007FFFFF&(data))
#define  LZMA_CMD_1_info_decode_2_get_golden_crc_msb(data)                       ((0xFF000000&(data))>>24)
#define  LZMA_CMD_1_info_decode_2_get_decode_crc_error(data)                     ((0x00800000&(data))>>23)
#define  LZMA_CMD_1_info_decode_2_get_encode_size_decode(data)                   (0x007FFFFF&(data))

#define  LZMA_CMD_2_BASE                                                        0x1806804C
#define  LZMA_CMD_2_BASE_reg_addr                                                "0xB806804C"
#define  LZMA_CMD_2_BASE_reg                                                     0xB806804C
#define  LZMA_CMD_2_BASE_inst_addr                                               "0x0012"
#define  set_LZMA_CMD_2_BASE_reg(data)                                           (*((volatile unsigned int*)LZMA_CMD_2_BASE_reg)=data)
#define  get_LZMA_CMD_2_BASE_reg                                                 (*((volatile unsigned int*)LZMA_CMD_2_BASE_reg))
#define  LZMA_CMD_2_BASE_base_shift                                              (4)
#define  LZMA_CMD_2_BASE_base_mask                                               (0xFFFFFFF0)
#define  LZMA_CMD_2_BASE_base(data)                                              (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_2_BASE_get_base(data)                                          ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_2_LIMIT                                                       0x18068050
#define  LZMA_CMD_2_LIMIT_reg_addr                                               "0xB8068050"
#define  LZMA_CMD_2_LIMIT_reg                                                    0xB8068050
#define  LZMA_CMD_2_LIMIT_inst_addr                                              "0x0013"
#define  set_LZMA_CMD_2_LIMIT_reg(data)                                          (*((volatile unsigned int*)LZMA_CMD_2_LIMIT_reg)=data)
#define  get_LZMA_CMD_2_LIMIT_reg                                                (*((volatile unsigned int*)LZMA_CMD_2_LIMIT_reg))
#define  LZMA_CMD_2_LIMIT_limit_shift                                            (4)
#define  LZMA_CMD_2_LIMIT_limit_mask                                             (0xFFFFFFF0)
#define  LZMA_CMD_2_LIMIT_limit(data)                                            (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_2_LIMIT_get_limit(data)                                        ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_2_RPTR                                                        0x18068054
#define  LZMA_CMD_2_RPTR_reg_addr                                                "0xB8068054"
#define  LZMA_CMD_2_RPTR_reg                                                     0xB8068054
#define  LZMA_CMD_2_RPTR_inst_addr                                               "0x0014"
#define  set_LZMA_CMD_2_RPTR_reg(data)                                           (*((volatile unsigned int*)LZMA_CMD_2_RPTR_reg)=data)
#define  get_LZMA_CMD_2_RPTR_reg                                                 (*((volatile unsigned int*)LZMA_CMD_2_RPTR_reg))
#define  LZMA_CMD_2_RPTR_rptr_shift                                              (4)
#define  LZMA_CMD_2_RPTR_rptr_mask                                               (0xFFFFFFF0)
#define  LZMA_CMD_2_RPTR_rptr(data)                                              (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_2_RPTR_get_rptr(data)                                          ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_2_WPTR                                                        0x18068058
#define  LZMA_CMD_2_WPTR_reg_addr                                                "0xB8068058"
#define  LZMA_CMD_2_WPTR_reg                                                     0xB8068058
#define  LZMA_CMD_2_WPTR_inst_addr                                               "0x0015"
#define  set_LZMA_CMD_2_WPTR_reg(data)                                           (*((volatile unsigned int*)LZMA_CMD_2_WPTR_reg)=data)
#define  get_LZMA_CMD_2_WPTR_reg                                                 (*((volatile unsigned int*)LZMA_CMD_2_WPTR_reg))
#define  LZMA_CMD_2_WPTR_wptr_shift                                              (4)
#define  LZMA_CMD_2_WPTR_wptr_mask                                               (0xFFFFFFF0)
#define  LZMA_CMD_2_WPTR_wptr(data)                                              (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_2_WPTR_get_wptr(data)                                          ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_2_SRC                                                         0x1806805C
#define  LZMA_CMD_2_SRC_reg_addr                                                 "0xB806805C"
#define  LZMA_CMD_2_SRC_reg                                                      0xB806805C
#define  LZMA_CMD_2_SRC_inst_addr                                                "0x0016"
#define  set_LZMA_CMD_2_SRC_reg(data)                                            (*((volatile unsigned int*)LZMA_CMD_2_SRC_reg)=data)
#define  get_LZMA_CMD_2_SRC_reg                                                  (*((volatile unsigned int*)LZMA_CMD_2_SRC_reg))
#define  LZMA_CMD_2_SRC_src_shift                                                (4)
#define  LZMA_CMD_2_SRC_cmd_error_shift                                          (3)
#define  LZMA_CMD_2_SRC_hw_done_shift                                            (2)
#define  LZMA_CMD_2_SRC_decode_mode_shift                                        (1)
#define  LZMA_CMD_2_SRC_encode_mode_shift                                        (0)
#define  LZMA_CMD_2_SRC_src_mask                                                 (0xFFFFFFF0)
#define  LZMA_CMD_2_SRC_cmd_error_mask                                           (0x00000008)
#define  LZMA_CMD_2_SRC_hw_done_mask                                             (0x00000004)
#define  LZMA_CMD_2_SRC_decode_mode_mask                                         (0x00000002)
#define  LZMA_CMD_2_SRC_encode_mode_mask                                         (0x00000001)
#define  LZMA_CMD_2_SRC_src(data)                                                (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_2_SRC_cmd_error(data)                                          (0x00000008&((data)<<3))
#define  LZMA_CMD_2_SRC_hw_done(data)                                            (0x00000004&((data)<<2))
#define  LZMA_CMD_2_SRC_decode_mode(data)                                        (0x00000002&((data)<<1))
#define  LZMA_CMD_2_SRC_encode_mode(data)                                        (0x00000001&(data))
#define  LZMA_CMD_2_SRC_get_src(data)                                            ((0xFFFFFFF0&(data))>>4)
#define  LZMA_CMD_2_SRC_get_cmd_error(data)                                      ((0x00000008&(data))>>3)
#define  LZMA_CMD_2_SRC_get_hw_done(data)                                        ((0x00000004&(data))>>2)
#define  LZMA_CMD_2_SRC_get_decode_mode(data)                                    ((0x00000002&(data))>>1)
#define  LZMA_CMD_2_SRC_get_encode_mode(data)                                    (0x00000001&(data))

#define  LZMA_CMD_2_dec                                                         0x18068060
#define  LZMA_CMD_2_dec_reg_addr                                                 "0xB8068060"
#define  LZMA_CMD_2_dec_reg                                                      0xB8068060
#define  LZMA_CMD_2_dec_inst_addr                                                "0x0017"
#define  set_LZMA_CMD_2_dec_reg(data)                                            (*((volatile unsigned int*)LZMA_CMD_2_dec_reg)=data)
#define  get_LZMA_CMD_2_dec_reg                                                  (*((volatile unsigned int*)LZMA_CMD_2_dec_reg))
#define  LZMA_CMD_2_dec_dec_shift                                                (4)
#define  LZMA_CMD_2_dec_hw_done_count_shift                                      (0)
#define  LZMA_CMD_2_dec_dec_mask                                                 (0xFFFFFFF0)
#define  LZMA_CMD_2_dec_hw_done_count_mask                                       (0x0000000F)
#define  LZMA_CMD_2_dec_dec(data)                                                (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_2_dec_hw_done_count(data)                                      (0x0000000F&(data))
#define  LZMA_CMD_2_dec_get_dec(data)                                            ((0xFFFFFFF0&(data))>>4)
#define  LZMA_CMD_2_dec_get_hw_done_count(data)                                  (0x0000000F&(data))

#define  LZMA_CMD_2_info_encode                                                 0x18068064
#define  LZMA_CMD_2_info_encode_reg_addr                                         "0xB8068064"
#define  LZMA_CMD_2_info_encode_reg                                              0xB8068064
#define  LZMA_CMD_2_info_encode_inst_addr                                        "0x0018"
#define  set_LZMA_CMD_2_info_encode_reg(data)                                    (*((volatile unsigned int*)LZMA_CMD_2_info_encode_reg)=data)
#define  get_LZMA_CMD_2_info_encode_reg                                          (*((volatile unsigned int*)LZMA_CMD_2_info_encode_reg))
#define  LZMA_CMD_2_info_encode_encode_crc_shift                                 (16)
#define  LZMA_CMD_2_info_encode_size_over4k_shift                                (13)
#define  LZMA_CMD_2_info_encode_comp_size_shift                                  (0)
#define  LZMA_CMD_2_info_encode_encode_crc_mask                                  (0xFFFF0000)
#define  LZMA_CMD_2_info_encode_size_over4k_mask                                 (0x00002000)
#define  LZMA_CMD_2_info_encode_comp_size_mask                                   (0x00001FFF)
#define  LZMA_CMD_2_info_encode_encode_crc(data)                                 (0xFFFF0000&((data)<<16))
#define  LZMA_CMD_2_info_encode_size_over4k(data)                                (0x00002000&((data)<<13))
#define  LZMA_CMD_2_info_encode_comp_size(data)                                  (0x00001FFF&(data))
#define  LZMA_CMD_2_info_encode_get_encode_crc(data)                             ((0xFFFF0000&(data))>>16)
#define  LZMA_CMD_2_info_encode_get_size_over4k(data)                            ((0x00002000&(data))>>13)
#define  LZMA_CMD_2_info_encode_get_comp_size(data)                              (0x00001FFF&(data))

#define  LZMA_CMD_2_info_decode_1                                               0x18068068
#define  LZMA_CMD_2_info_decode_1_reg_addr                                       "0xB8068068"
#define  LZMA_CMD_2_info_decode_1_reg                                            0xB8068068
#define  LZMA_CMD_2_info_decode_1_inst_addr                                      "0x0019"
#define  set_LZMA_CMD_2_info_decode_1_reg(data)                                  (*((volatile unsigned int*)LZMA_CMD_2_info_decode_1_reg)=data)
#define  get_LZMA_CMD_2_info_decode_1_reg                                        (*((volatile unsigned int*)LZMA_CMD_2_info_decode_1_reg))
#define  LZMA_CMD_2_info_decode_1_golden_crc_lsb_shift                           (24)
#define  LZMA_CMD_2_info_decode_1_decoder_error_shift                            (23)
#define  LZMA_CMD_2_info_decode_1_decode_size_shift                              (0)
#define  LZMA_CMD_2_info_decode_1_golden_crc_lsb_mask                            (0xFF000000)
#define  LZMA_CMD_2_info_decode_1_decoder_error_mask                             (0x00800000)
#define  LZMA_CMD_2_info_decode_1_decode_size_mask                               (0x007FFFFF)
#define  LZMA_CMD_2_info_decode_1_golden_crc_lsb(data)                           (0xFF000000&((data)<<24))
#define  LZMA_CMD_2_info_decode_1_decoder_error(data)                            (0x00800000&((data)<<23))
#define  LZMA_CMD_2_info_decode_1_decode_size(data)                              (0x007FFFFF&(data))
#define  LZMA_CMD_2_info_decode_1_get_golden_crc_lsb(data)                       ((0xFF000000&(data))>>24)
#define  LZMA_CMD_2_info_decode_1_get_decoder_error(data)                        ((0x00800000&(data))>>23)
#define  LZMA_CMD_2_info_decode_1_get_decode_size(data)                          (0x007FFFFF&(data))

#define  LZMA_CMD_2_info_decode_2                                               0x1806806C
#define  LZMA_CMD_2_info_decode_2_reg_addr                                       "0xB806806C"
#define  LZMA_CMD_2_info_decode_2_reg                                            0xB806806C
#define  LZMA_CMD_2_info_decode_2_inst_addr                                      "0x001A"
#define  set_LZMA_CMD_2_info_decode_2_reg(data)                                  (*((volatile unsigned int*)LZMA_CMD_2_info_decode_2_reg)=data)
#define  get_LZMA_CMD_2_info_decode_2_reg                                        (*((volatile unsigned int*)LZMA_CMD_2_info_decode_2_reg))
#define  LZMA_CMD_2_info_decode_2_golden_crc_msb_shift                           (24)
#define  LZMA_CMD_2_info_decode_2_decode_crc_error_shift                         (23)
#define  LZMA_CMD_2_info_decode_2_encode_size_decode_shift                       (0)
#define  LZMA_CMD_2_info_decode_2_golden_crc_msb_mask                            (0xFF000000)
#define  LZMA_CMD_2_info_decode_2_decode_crc_error_mask                          (0x00800000)
#define  LZMA_CMD_2_info_decode_2_encode_size_decode_mask                        (0x007FFFFF)
#define  LZMA_CMD_2_info_decode_2_golden_crc_msb(data)                           (0xFF000000&((data)<<24))
#define  LZMA_CMD_2_info_decode_2_decode_crc_error(data)                         (0x00800000&((data)<<23))
#define  LZMA_CMD_2_info_decode_2_encode_size_decode(data)                       (0x007FFFFF&(data))
#define  LZMA_CMD_2_info_decode_2_get_golden_crc_msb(data)                       ((0xFF000000&(data))>>24)
#define  LZMA_CMD_2_info_decode_2_get_decode_crc_error(data)                     ((0x00800000&(data))>>23)
#define  LZMA_CMD_2_info_decode_2_get_encode_size_decode(data)                   (0x007FFFFF&(data))

#define  LZMA_CMD_3_BASE                                                        0x18068070
#define  LZMA_CMD_3_BASE_reg_addr                                                "0xB8068070"
#define  LZMA_CMD_3_BASE_reg                                                     0xB8068070
#define  LZMA_CMD_3_BASE_inst_addr                                               "0x001B"
#define  set_LZMA_CMD_3_BASE_reg(data)                                           (*((volatile unsigned int*)LZMA_CMD_3_BASE_reg)=data)
#define  get_LZMA_CMD_3_BASE_reg                                                 (*((volatile unsigned int*)LZMA_CMD_3_BASE_reg))
#define  LZMA_CMD_3_BASE_base_shift                                              (4)
#define  LZMA_CMD_3_BASE_base_mask                                               (0xFFFFFFF0)
#define  LZMA_CMD_3_BASE_base(data)                                              (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_3_BASE_get_base(data)                                          ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_3_LIMIT                                                       0x18068074
#define  LZMA_CMD_3_LIMIT_reg_addr                                               "0xB8068074"
#define  LZMA_CMD_3_LIMIT_reg                                                    0xB8068074
#define  LZMA_CMD_3_LIMIT_inst_addr                                              "0x001C"
#define  set_LZMA_CMD_3_LIMIT_reg(data)                                          (*((volatile unsigned int*)LZMA_CMD_3_LIMIT_reg)=data)
#define  get_LZMA_CMD_3_LIMIT_reg                                                (*((volatile unsigned int*)LZMA_CMD_3_LIMIT_reg))
#define  LZMA_CMD_3_LIMIT_limit_shift                                            (4)
#define  LZMA_CMD_3_LIMIT_limit_mask                                             (0xFFFFFFF0)
#define  LZMA_CMD_3_LIMIT_limit(data)                                            (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_3_LIMIT_get_limit(data)                                        ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_3_RPTR                                                        0x18068078
#define  LZMA_CMD_3_RPTR_reg_addr                                                "0xB8068078"
#define  LZMA_CMD_3_RPTR_reg                                                     0xB8068078
#define  LZMA_CMD_3_RPTR_inst_addr                                               "0x001D"
#define  set_LZMA_CMD_3_RPTR_reg(data)                                           (*((volatile unsigned int*)LZMA_CMD_3_RPTR_reg)=data)
#define  get_LZMA_CMD_3_RPTR_reg                                                 (*((volatile unsigned int*)LZMA_CMD_3_RPTR_reg))
#define  LZMA_CMD_3_RPTR_rptr_shift                                              (4)
#define  LZMA_CMD_3_RPTR_rptr_mask                                               (0xFFFFFFF0)
#define  LZMA_CMD_3_RPTR_rptr(data)                                              (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_3_RPTR_get_rptr(data)                                          ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_3_WPTR                                                        0x1806807C
#define  LZMA_CMD_3_WPTR_reg_addr                                                "0xB806807C"
#define  LZMA_CMD_3_WPTR_reg                                                     0xB806807C
#define  LZMA_CMD_3_WPTR_inst_addr                                               "0x001E"
#define  set_LZMA_CMD_3_WPTR_reg(data)                                           (*((volatile unsigned int*)LZMA_CMD_3_WPTR_reg)=data)
#define  get_LZMA_CMD_3_WPTR_reg                                                 (*((volatile unsigned int*)LZMA_CMD_3_WPTR_reg))
#define  LZMA_CMD_3_WPTR_wptr_shift                                              (4)
#define  LZMA_CMD_3_WPTR_wptr_mask                                               (0xFFFFFFF0)
#define  LZMA_CMD_3_WPTR_wptr(data)                                              (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_3_WPTR_get_wptr(data)                                          ((0xFFFFFFF0&(data))>>4)

#define  LZMA_CMD_3_SRC                                                         0x18068080
#define  LZMA_CMD_3_SRC_reg_addr                                                 "0xB8068080"
#define  LZMA_CMD_3_SRC_reg                                                      0xB8068080
#define  LZMA_CMD_3_SRC_inst_addr                                                "0x001F"
#define  set_LZMA_CMD_3_SRC_reg(data)                                            (*((volatile unsigned int*)LZMA_CMD_3_SRC_reg)=data)
#define  get_LZMA_CMD_3_SRC_reg                                                  (*((volatile unsigned int*)LZMA_CMD_3_SRC_reg))
#define  LZMA_CMD_3_SRC_src_shift                                                (4)
#define  LZMA_CMD_3_SRC_cmd_error_shift                                          (3)
#define  LZMA_CMD_3_SRC_hw_done_shift                                            (2)
#define  LZMA_CMD_3_SRC_decode_mode_shift                                        (1)
#define  LZMA_CMD_3_SRC_encode_mode_shift                                        (0)
#define  LZMA_CMD_3_SRC_src_mask                                                 (0xFFFFFFF0)
#define  LZMA_CMD_3_SRC_cmd_error_mask                                           (0x00000008)
#define  LZMA_CMD_3_SRC_hw_done_mask                                             (0x00000004)
#define  LZMA_CMD_3_SRC_decode_mode_mask                                         (0x00000002)
#define  LZMA_CMD_3_SRC_encode_mode_mask                                         (0x00000001)
#define  LZMA_CMD_3_SRC_src(data)                                                (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_3_SRC_cmd_error(data)                                          (0x00000008&((data)<<3))
#define  LZMA_CMD_3_SRC_hw_done(data)                                            (0x00000004&((data)<<2))
#define  LZMA_CMD_3_SRC_decode_mode(data)                                        (0x00000002&((data)<<1))
#define  LZMA_CMD_3_SRC_encode_mode(data)                                        (0x00000001&(data))
#define  LZMA_CMD_3_SRC_get_src(data)                                            ((0xFFFFFFF0&(data))>>4)
#define  LZMA_CMD_3_SRC_get_cmd_error(data)                                      ((0x00000008&(data))>>3)
#define  LZMA_CMD_3_SRC_get_hw_done(data)                                        ((0x00000004&(data))>>2)
#define  LZMA_CMD_3_SRC_get_decode_mode(data)                                    ((0x00000002&(data))>>1)
#define  LZMA_CMD_3_SRC_get_encode_mode(data)                                    (0x00000001&(data))

#define  LZMA_CMD_3_dec                                                         0x18068084
#define  LZMA_CMD_3_dec_reg_addr                                                 "0xB8068084"
#define  LZMA_CMD_3_dec_reg                                                      0xB8068084
#define  LZMA_CMD_3_dec_inst_addr                                                "0x0020"
#define  set_LZMA_CMD_3_dec_reg(data)                                            (*((volatile unsigned int*)LZMA_CMD_3_dec_reg)=data)
#define  get_LZMA_CMD_3_dec_reg                                                  (*((volatile unsigned int*)LZMA_CMD_3_dec_reg))
#define  LZMA_CMD_3_dec_dec_shift                                                (4)
#define  LZMA_CMD_3_dec_hw_done_count_shift                                      (0)
#define  LZMA_CMD_3_dec_dec_mask                                                 (0xFFFFFFF0)
#define  LZMA_CMD_3_dec_hw_done_count_mask                                       (0x0000000F)
#define  LZMA_CMD_3_dec_dec(data)                                                (0xFFFFFFF0&((data)<<4))
#define  LZMA_CMD_3_dec_hw_done_count(data)                                      (0x0000000F&(data))
#define  LZMA_CMD_3_dec_get_dec(data)                                            ((0xFFFFFFF0&(data))>>4)
#define  LZMA_CMD_3_dec_get_hw_done_count(data)                                  (0x0000000F&(data))

#define  LZMA_CMD_3_info_encode                                                 0x18068088
#define  LZMA_CMD_3_info_encode_reg_addr                                         "0xB8068088"
#define  LZMA_CMD_3_info_encode_reg                                              0xB8068088
#define  LZMA_CMD_3_info_encode_inst_addr                                        "0x0021"
#define  set_LZMA_CMD_3_info_encode_reg(data)                                    (*((volatile unsigned int*)LZMA_CMD_3_info_encode_reg)=data)
#define  get_LZMA_CMD_3_info_encode_reg                                          (*((volatile unsigned int*)LZMA_CMD_3_info_encode_reg))
#define  LZMA_CMD_3_info_encode_encode_crc_shift                                 (16)
#define  LZMA_CMD_3_info_encode_size_over4k_shift                                (13)
#define  LZMA_CMD_3_info_encode_comp_size_shift                                  (0)
#define  LZMA_CMD_3_info_encode_encode_crc_mask                                  (0xFFFF0000)
#define  LZMA_CMD_3_info_encode_size_over4k_mask                                 (0x00002000)
#define  LZMA_CMD_3_info_encode_comp_size_mask                                   (0x00001FFF)
#define  LZMA_CMD_3_info_encode_encode_crc(data)                                 (0xFFFF0000&((data)<<16))
#define  LZMA_CMD_3_info_encode_size_over4k(data)                                (0x00002000&((data)<<13))
#define  LZMA_CMD_3_info_encode_comp_size(data)                                  (0x00001FFF&(data))
#define  LZMA_CMD_3_info_encode_get_encode_crc(data)                             ((0xFFFF0000&(data))>>16)
#define  LZMA_CMD_3_info_encode_get_size_over4k(data)                            ((0x00002000&(data))>>13)
#define  LZMA_CMD_3_info_encode_get_comp_size(data)                              (0x00001FFF&(data))

#define  LZMA_CMD_3_info_decode_1                                               0x1806808C
#define  LZMA_CMD_3_info_decode_1_reg_addr                                       "0xB806808C"
#define  LZMA_CMD_3_info_decode_1_reg                                            0xB806808C
#define  LZMA_CMD_3_info_decode_1_inst_addr                                      "0x0022"
#define  set_LZMA_CMD_3_info_decode_1_reg(data)                                  (*((volatile unsigned int*)LZMA_CMD_3_info_decode_1_reg)=data)
#define  get_LZMA_CMD_3_info_decode_1_reg                                        (*((volatile unsigned int*)LZMA_CMD_3_info_decode_1_reg))
#define  LZMA_CMD_3_info_decode_1_golden_crc_lsb_shift                           (24)
#define  LZMA_CMD_3_info_decode_1_decoder_error_shift                            (23)
#define  LZMA_CMD_3_info_decode_1_decode_size_shift                              (0)
#define  LZMA_CMD_3_info_decode_1_golden_crc_lsb_mask                            (0xFF000000)
#define  LZMA_CMD_3_info_decode_1_decoder_error_mask                             (0x00800000)
#define  LZMA_CMD_3_info_decode_1_decode_size_mask                               (0x007FFFFF)
#define  LZMA_CMD_3_info_decode_1_golden_crc_lsb(data)                           (0xFF000000&((data)<<24))
#define  LZMA_CMD_3_info_decode_1_decoder_error(data)                            (0x00800000&((data)<<23))
#define  LZMA_CMD_3_info_decode_1_decode_size(data)                              (0x007FFFFF&(data))
#define  LZMA_CMD_3_info_decode_1_get_golden_crc_lsb(data)                       ((0xFF000000&(data))>>24)
#define  LZMA_CMD_3_info_decode_1_get_decoder_error(data)                        ((0x00800000&(data))>>23)
#define  LZMA_CMD_3_info_decode_1_get_decode_size(data)                          (0x007FFFFF&(data))

#define  LZMA_CMD_3_info_decode_2                                               0x18068090
#define  LZMA_CMD_3_info_decode_2_reg_addr                                       "0xB8068090"
#define  LZMA_CMD_3_info_decode_2_reg                                            0xB8068090
#define  LZMA_CMD_3_info_decode_2_inst_addr                                      "0x0023"
#define  set_LZMA_CMD_3_info_decode_2_reg(data)                                  (*((volatile unsigned int*)LZMA_CMD_3_info_decode_2_reg)=data)
#define  get_LZMA_CMD_3_info_decode_2_reg                                        (*((volatile unsigned int*)LZMA_CMD_3_info_decode_2_reg))
#define  LZMA_CMD_3_info_decode_2_golden_crc_msb_shift                           (24)
#define  LZMA_CMD_3_info_decode_2_decode_crc_error_shift                         (23)
#define  LZMA_CMD_3_info_decode_2_encode_size_decode_shift                       (0)
#define  LZMA_CMD_3_info_decode_2_golden_crc_msb_mask                            (0xFF000000)
#define  LZMA_CMD_3_info_decode_2_decode_crc_error_mask                          (0x00800000)
#define  LZMA_CMD_3_info_decode_2_encode_size_decode_mask                        (0x007FFFFF)
#define  LZMA_CMD_3_info_decode_2_golden_crc_msb(data)                           (0xFF000000&((data)<<24))
#define  LZMA_CMD_3_info_decode_2_decode_crc_error(data)                         (0x00800000&((data)<<23))
#define  LZMA_CMD_3_info_decode_2_encode_size_decode(data)                       (0x007FFFFF&(data))
#define  LZMA_CMD_3_info_decode_2_get_golden_crc_msb(data)                       ((0xFF000000&(data))>>24)
#define  LZMA_CMD_3_info_decode_2_get_decode_crc_error(data)                     ((0x00800000&(data))>>23)
#define  LZMA_CMD_3_info_decode_2_get_encode_size_decode(data)                   (0x007FFFFF&(data))

#define  LZMA_CMD_GO_SWAP                                                       0x18068094
#define  LZMA_CMD_GO_SWAP_reg_addr                                               "0xB8068094"
#define  LZMA_CMD_GO_SWAP_reg                                                    0xB8068094
#define  LZMA_CMD_GO_SWAP_inst_addr                                              "0x0024"
#define  set_LZMA_CMD_GO_SWAP_reg(data)                                          (*((volatile unsigned int*)LZMA_CMD_GO_SWAP_reg)=data)
#define  get_LZMA_CMD_GO_SWAP_reg                                                (*((volatile unsigned int*)LZMA_CMD_GO_SWAP_reg))
#define  LZMA_CMD_GO_SWAP_cut_value_shift                                        (26)
#define  LZMA_CMD_GO_SWAP_busy_shift                                             (25)
#define  LZMA_CMD_GO_SWAP_dma_soft_rst_shift                                     (24)
#define  LZMA_CMD_GO_SWAP_write_en_11_shift                                      (23)
#define  LZMA_CMD_GO_SWAP_data_swap_3_shift                                      (22)
#define  LZMA_CMD_GO_SWAP_write_en_10_shift                                      (21)
#define  LZMA_CMD_GO_SWAP_cmd_swap_3_shift                                       (20)
#define  LZMA_CMD_GO_SWAP_write_en_9_shift                                       (19)
#define  LZMA_CMD_GO_SWAP_go_3_shift                                             (18)
#define  LZMA_CMD_GO_SWAP_write_en_8_shift                                       (17)
#define  LZMA_CMD_GO_SWAP_data_swap_2_shift                                      (16)
#define  LZMA_CMD_GO_SWAP_write_en_7_shift                                       (15)
#define  LZMA_CMD_GO_SWAP_cmd_swap_2_shift                                       (14)
#define  LZMA_CMD_GO_SWAP_write_en_6_shift                                       (13)
#define  LZMA_CMD_GO_SWAP_go_2_shift                                             (12)
#define  LZMA_CMD_GO_SWAP_write_en_5_shift                                       (11)
#define  LZMA_CMD_GO_SWAP_data_swap_1_shift                                      (10)
#define  LZMA_CMD_GO_SWAP_write_en_4_shift                                       (9)
#define  LZMA_CMD_GO_SWAP_cmd_swap_1_shift                                       (8)
#define  LZMA_CMD_GO_SWAP_write_en_3_shift                                       (7)
#define  LZMA_CMD_GO_SWAP_go_1_shift                                             (6)
#define  LZMA_CMD_GO_SWAP_write_en_2_shift                                       (5)
#define  LZMA_CMD_GO_SWAP_data_swap_0_shift                                      (4)
#define  LZMA_CMD_GO_SWAP_write_en_1_shift                                       (3)
#define  LZMA_CMD_GO_SWAP_cmd_swap_0_shift                                       (2)
#define  LZMA_CMD_GO_SWAP_write_en_0_shift                                       (1)
#define  LZMA_CMD_GO_SWAP_go_0_shift                                             (0)
#define  LZMA_CMD_GO_SWAP_cut_value_mask                                         (0xFC000000)
#define  LZMA_CMD_GO_SWAP_busy_mask                                              (0x02000000)
#define  LZMA_CMD_GO_SWAP_dma_soft_rst_mask                                      (0x01000000)
#define  LZMA_CMD_GO_SWAP_write_en_11_mask                                       (0x00800000)
#define  LZMA_CMD_GO_SWAP_data_swap_3_mask                                       (0x00400000)
#define  LZMA_CMD_GO_SWAP_write_en_10_mask                                       (0x00200000)
#define  LZMA_CMD_GO_SWAP_cmd_swap_3_mask                                        (0x00100000)
#define  LZMA_CMD_GO_SWAP_write_en_9_mask                                        (0x00080000)
#define  LZMA_CMD_GO_SWAP_go_3_mask                                              (0x00040000)
#define  LZMA_CMD_GO_SWAP_write_en_8_mask                                        (0x00020000)
#define  LZMA_CMD_GO_SWAP_data_swap_2_mask                                       (0x00010000)
#define  LZMA_CMD_GO_SWAP_write_en_7_mask                                        (0x00008000)
#define  LZMA_CMD_GO_SWAP_cmd_swap_2_mask                                        (0x00004000)
#define  LZMA_CMD_GO_SWAP_write_en_6_mask                                        (0x00002000)
#define  LZMA_CMD_GO_SWAP_go_2_mask                                              (0x00001000)
#define  LZMA_CMD_GO_SWAP_write_en_5_mask                                        (0x00000800)
#define  LZMA_CMD_GO_SWAP_data_swap_1_mask                                       (0x00000400)
#define  LZMA_CMD_GO_SWAP_write_en_4_mask                                        (0x00000200)
#define  LZMA_CMD_GO_SWAP_cmd_swap_1_mask                                        (0x00000100)
#define  LZMA_CMD_GO_SWAP_write_en_3_mask                                        (0x00000080)
#define  LZMA_CMD_GO_SWAP_go_1_mask                                              (0x00000040)
#define  LZMA_CMD_GO_SWAP_write_en_2_mask                                        (0x00000020)
#define  LZMA_CMD_GO_SWAP_data_swap_0_mask                                       (0x00000010)
#define  LZMA_CMD_GO_SWAP_write_en_1_mask                                        (0x00000008)
#define  LZMA_CMD_GO_SWAP_cmd_swap_0_mask                                        (0x00000004)
#define  LZMA_CMD_GO_SWAP_write_en_0_mask                                        (0x00000002)
#define  LZMA_CMD_GO_SWAP_go_0_mask                                              (0x00000001)
#define  LZMA_CMD_GO_SWAP_cut_value(data)                                        (0xFC000000&((data)<<26))
#define  LZMA_CMD_GO_SWAP_busy(data)                                             (0x02000000&((data)<<25))
#define  LZMA_CMD_GO_SWAP_dma_soft_rst(data)                                     (0x01000000&((data)<<24))
#define  LZMA_CMD_GO_SWAP_write_en_11(data)                                      (0x00800000&((data)<<23))
#define  LZMA_CMD_GO_SWAP_data_swap_3(data)                                      (0x00400000&((data)<<22))
#define  LZMA_CMD_GO_SWAP_write_en_10(data)                                      (0x00200000&((data)<<21))
#define  LZMA_CMD_GO_SWAP_cmd_swap_3(data)                                       (0x00100000&((data)<<20))
#define  LZMA_CMD_GO_SWAP_write_en_9(data)                                       (0x00080000&((data)<<19))
#define  LZMA_CMD_GO_SWAP_go_3(data)                                             (0x00040000&((data)<<18))
#define  LZMA_CMD_GO_SWAP_write_en_8(data)                                       (0x00020000&((data)<<17))
#define  LZMA_CMD_GO_SWAP_data_swap_2(data)                                      (0x00010000&((data)<<16))
#define  LZMA_CMD_GO_SWAP_write_en_7(data)                                       (0x00008000&((data)<<15))
#define  LZMA_CMD_GO_SWAP_cmd_swap_2(data)                                       (0x00004000&((data)<<14))
#define  LZMA_CMD_GO_SWAP_write_en_6(data)                                       (0x00002000&((data)<<13))
#define  LZMA_CMD_GO_SWAP_go_2(data)                                             (0x00001000&((data)<<12))
#define  LZMA_CMD_GO_SWAP_write_en_5(data)                                       (0x00000800&((data)<<11))
#define  LZMA_CMD_GO_SWAP_data_swap_1(data)                                      (0x00000400&((data)<<10))
#define  LZMA_CMD_GO_SWAP_write_en_4(data)                                       (0x00000200&((data)<<9))
#define  LZMA_CMD_GO_SWAP_cmd_swap_1(data)                                       (0x00000100&((data)<<8))
#define  LZMA_CMD_GO_SWAP_write_en_3(data)                                       (0x00000080&((data)<<7))
#define  LZMA_CMD_GO_SWAP_go_1(data)                                             (0x00000040&((data)<<6))
#define  LZMA_CMD_GO_SWAP_write_en_2(data)                                       (0x00000020&((data)<<5))
#define  LZMA_CMD_GO_SWAP_data_swap_0(data)                                      (0x00000010&((data)<<4))
#define  LZMA_CMD_GO_SWAP_write_en_1(data)                                       (0x00000008&((data)<<3))
#define  LZMA_CMD_GO_SWAP_cmd_swap_0(data)                                       (0x00000004&((data)<<2))
#define  LZMA_CMD_GO_SWAP_write_en_0(data)                                       (0x00000002&((data)<<1))
#define  LZMA_CMD_GO_SWAP_go_0(data)                                             (0x00000001&(data))
#define  LZMA_CMD_GO_SWAP_get_cut_value(data)                                    ((0xFC000000&(data))>>26)
#define  LZMA_CMD_GO_SWAP_get_busy(data)                                         ((0x02000000&(data))>>25)
#define  LZMA_CMD_GO_SWAP_get_dma_soft_rst(data)                                 ((0x01000000&(data))>>24)
#define  LZMA_CMD_GO_SWAP_get_write_en_11(data)                                  ((0x00800000&(data))>>23)
#define  LZMA_CMD_GO_SWAP_get_data_swap_3(data)                                  ((0x00400000&(data))>>22)
#define  LZMA_CMD_GO_SWAP_get_write_en_10(data)                                  ((0x00200000&(data))>>21)
#define  LZMA_CMD_GO_SWAP_get_cmd_swap_3(data)                                   ((0x00100000&(data))>>20)
#define  LZMA_CMD_GO_SWAP_get_write_en_9(data)                                   ((0x00080000&(data))>>19)
#define  LZMA_CMD_GO_SWAP_get_go_3(data)                                         ((0x00040000&(data))>>18)
#define  LZMA_CMD_GO_SWAP_get_write_en_8(data)                                   ((0x00020000&(data))>>17)
#define  LZMA_CMD_GO_SWAP_get_data_swap_2(data)                                  ((0x00010000&(data))>>16)
#define  LZMA_CMD_GO_SWAP_get_write_en_7(data)                                   ((0x00008000&(data))>>15)
#define  LZMA_CMD_GO_SWAP_get_cmd_swap_2(data)                                   ((0x00004000&(data))>>14)
#define  LZMA_CMD_GO_SWAP_get_write_en_6(data)                                   ((0x00002000&(data))>>13)
#define  LZMA_CMD_GO_SWAP_get_go_2(data)                                         ((0x00001000&(data))>>12)
#define  LZMA_CMD_GO_SWAP_get_write_en_5(data)                                   ((0x00000800&(data))>>11)
#define  LZMA_CMD_GO_SWAP_get_data_swap_1(data)                                  ((0x00000400&(data))>>10)
#define  LZMA_CMD_GO_SWAP_get_write_en_4(data)                                   ((0x00000200&(data))>>9)
#define  LZMA_CMD_GO_SWAP_get_cmd_swap_1(data)                                   ((0x00000100&(data))>>8)
#define  LZMA_CMD_GO_SWAP_get_write_en_3(data)                                   ((0x00000080&(data))>>7)
#define  LZMA_CMD_GO_SWAP_get_go_1(data)                                         ((0x00000040&(data))>>6)
#define  LZMA_CMD_GO_SWAP_get_write_en_2(data)                                   ((0x00000020&(data))>>5)
#define  LZMA_CMD_GO_SWAP_get_data_swap_0(data)                                  ((0x00000010&(data))>>4)
#define  LZMA_CMD_GO_SWAP_get_write_en_1(data)                                   ((0x00000008&(data))>>3)
#define  LZMA_CMD_GO_SWAP_get_cmd_swap_0(data)                                   ((0x00000004&(data))>>2)
#define  LZMA_CMD_GO_SWAP_get_write_en_0(data)                                   ((0x00000002&(data))>>1)
#define  LZMA_CMD_GO_SWAP_get_go_0(data)                                         (0x00000001&(data))

#define  LZMA_INT_STATUS                                                        0x18068098
#define  LZMA_INT_STATUS_reg_addr                                                "0xB8068098"
#define  LZMA_INT_STATUS_reg                                                     0xB8068098
#define  LZMA_INT_STATUS_inst_addr                                               "0x0025"
#define  set_LZMA_INT_STATUS_reg(data)                                           (*((volatile unsigned int*)LZMA_INT_STATUS_reg)=data)
#define  get_LZMA_INT_STATUS_reg                                                 (*((volatile unsigned int*)LZMA_INT_STATUS_reg))
#define  LZMA_INT_STATUS_hw_done_en_shift                                        (31)
#define  LZMA_INT_STATUS_cmd_register_mode_shift                                 (30)
#define  LZMA_INT_STATUS_d_dist_err_en_shift                                     (29)
#define  LZMA_INT_STATUS_d_dist_err_shift                                        (28)
#define  LZMA_INT_STATUS_d_error_en_shift                                        (25)
#define  LZMA_INT_STATUS_d_error_shift                                           (24)
#define  LZMA_INT_STATUS_d_size_err_en_shift                                     (21)
#define  LZMA_INT_STATUS_d_size_err_shift                                        (20)
#define  LZMA_INT_STATUS_e_size_err_en_shift                                     (17)
#define  LZMA_INT_STATUS_e_size_err_shift                                        (16)
#define  LZMA_INT_STATUS_cmd_empty_en_shift                                      (12)
#define  LZMA_INT_STATUS_cmd_3_empty_shift                                       (11)
#define  LZMA_INT_STATUS_cmd_2_empty_shift                                       (10)
#define  LZMA_INT_STATUS_cmd_1_empty_shift                                       (9)
#define  LZMA_INT_STATUS_cmd_0_empty_shift                                       (8)
#define  LZMA_INT_STATUS_cut_value1_en_shift                                     (5)
#define  LZMA_INT_STATUS_cmd_err_en_shift                                        (4)
#define  LZMA_INT_STATUS_cmd_3_err_shift                                         (3)
#define  LZMA_INT_STATUS_cmd_2_err_shift                                         (2)
#define  LZMA_INT_STATUS_cmd_1_err_shift                                         (1)
#define  LZMA_INT_STATUS_cmd_0_err_shift                                         (0)
#define  LZMA_INT_STATUS_hw_done_en_mask                                         (0x80000000)
#define  LZMA_INT_STATUS_cmd_register_mode_mask                                  (0x40000000)
#define  LZMA_INT_STATUS_d_dist_err_en_mask                                      (0x20000000)
#define  LZMA_INT_STATUS_d_dist_err_mask                                         (0x10000000)
#define  LZMA_INT_STATUS_d_error_en_mask                                         (0x02000000)
#define  LZMA_INT_STATUS_d_error_mask                                            (0x01000000)
#define  LZMA_INT_STATUS_d_size_err_en_mask                                      (0x00200000)
#define  LZMA_INT_STATUS_d_size_err_mask                                         (0x00100000)
#define  LZMA_INT_STATUS_e_size_err_en_mask                                      (0x00020000)
#define  LZMA_INT_STATUS_e_size_err_mask                                         (0x00010000)
#define  LZMA_INT_STATUS_cmd_empty_en_mask                                       (0x00001000)
#define  LZMA_INT_STATUS_cmd_3_empty_mask                                        (0x00000800)
#define  LZMA_INT_STATUS_cmd_2_empty_mask                                        (0x00000400)
#define  LZMA_INT_STATUS_cmd_1_empty_mask                                        (0x00000200)
#define  LZMA_INT_STATUS_cmd_0_empty_mask                                        (0x00000100)
#define  LZMA_INT_STATUS_cut_value1_en_mask                                      (0x00000020)
#define  LZMA_INT_STATUS_cmd_err_en_mask                                         (0x00000010)
#define  LZMA_INT_STATUS_cmd_3_err_mask                                          (0x00000008)
#define  LZMA_INT_STATUS_cmd_2_err_mask                                          (0x00000004)
#define  LZMA_INT_STATUS_cmd_1_err_mask                                          (0x00000002)
#define  LZMA_INT_STATUS_cmd_0_err_mask                                          (0x00000001)
#define  LZMA_INT_STATUS_hw_done_en(data)                                        (0x80000000&((data)<<31))
#define  LZMA_INT_STATUS_cmd_register_mode(data)                                 (0x40000000&((data)<<30))
#define  LZMA_INT_STATUS_d_dist_err_en(data)                                     (0x20000000&((data)<<29))
#define  LZMA_INT_STATUS_d_dist_err(data)                                        (0x10000000&((data)<<28))
#define  LZMA_INT_STATUS_d_error_en(data)                                        (0x02000000&((data)<<25))
#define  LZMA_INT_STATUS_d_error(data)                                           (0x01000000&((data)<<24))
#define  LZMA_INT_STATUS_d_size_err_en(data)                                     (0x00200000&((data)<<21))
#define  LZMA_INT_STATUS_d_size_err(data)                                        (0x00100000&((data)<<20))
#define  LZMA_INT_STATUS_e_size_err_en(data)                                     (0x00020000&((data)<<17))
#define  LZMA_INT_STATUS_e_size_err(data)                                        (0x00010000&((data)<<16))
#define  LZMA_INT_STATUS_cmd_empty_en(data)                                      (0x00001000&((data)<<12))
#define  LZMA_INT_STATUS_cmd_3_empty(data)                                       (0x00000800&((data)<<11))
#define  LZMA_INT_STATUS_cmd_2_empty(data)                                       (0x00000400&((data)<<10))
#define  LZMA_INT_STATUS_cmd_1_empty(data)                                       (0x00000200&((data)<<9))
#define  LZMA_INT_STATUS_cmd_0_empty(data)                                       (0x00000100&((data)<<8))
#define  LZMA_INT_STATUS_cut_value1_en(data)                                     (0x00000020&((data)<<5))
#define  LZMA_INT_STATUS_cmd_err_en(data)                                        (0x00000010&((data)<<4))
#define  LZMA_INT_STATUS_cmd_3_err(data)                                         (0x00000008&((data)<<3))
#define  LZMA_INT_STATUS_cmd_2_err(data)                                         (0x00000004&((data)<<2))
#define  LZMA_INT_STATUS_cmd_1_err(data)                                         (0x00000002&((data)<<1))
#define  LZMA_INT_STATUS_cmd_0_err(data)                                         (0x00000001&(data))
#define  LZMA_INT_STATUS_get_hw_done_en(data)                                    ((0x80000000&(data))>>31)
#define  LZMA_INT_STATUS_get_cmd_register_mode(data)                             ((0x40000000&(data))>>30)
#define  LZMA_INT_STATUS_get_d_dist_err_en(data)                                 ((0x20000000&(data))>>29)
#define  LZMA_INT_STATUS_get_d_dist_err(data)                                    ((0x10000000&(data))>>28)
#define  LZMA_INT_STATUS_get_d_error_en(data)                                    ((0x02000000&(data))>>25)
#define  LZMA_INT_STATUS_get_d_error(data)                                       ((0x01000000&(data))>>24)
#define  LZMA_INT_STATUS_get_d_size_err_en(data)                                 ((0x00200000&(data))>>21)
#define  LZMA_INT_STATUS_get_d_size_err(data)                                    ((0x00100000&(data))>>20)
#define  LZMA_INT_STATUS_get_e_size_err_en(data)                                 ((0x00020000&(data))>>17)
#define  LZMA_INT_STATUS_get_e_size_err(data)                                    ((0x00010000&(data))>>16)
#define  LZMA_INT_STATUS_get_cmd_empty_en(data)                                  ((0x00001000&(data))>>12)
#define  LZMA_INT_STATUS_get_cmd_3_empty(data)                                   ((0x00000800&(data))>>11)
#define  LZMA_INT_STATUS_get_cmd_2_empty(data)                                   ((0x00000400&(data))>>10)
#define  LZMA_INT_STATUS_get_cmd_1_empty(data)                                   ((0x00000200&(data))>>9)
#define  LZMA_INT_STATUS_get_cmd_0_empty(data)                                   ((0x00000100&(data))>>8)
#define  LZMA_INT_STATUS_get_cut_value1_en(data)                                 ((0x00000020&(data))>>5)
#define  LZMA_INT_STATUS_get_cmd_err_en(data)                                    ((0x00000010&(data))>>4)
#define  LZMA_INT_STATUS_get_cmd_3_err(data)                                     ((0x00000008&(data))>>3)
#define  LZMA_INT_STATUS_get_cmd_2_err(data)                                     ((0x00000004&(data))>>2)
#define  LZMA_INT_STATUS_get_cmd_1_err(data)                                     ((0x00000002&(data))>>1)
#define  LZMA_INT_STATUS_get_cmd_0_err(data)                                     (0x00000001&(data))

#define  LZMA_LZMA_E_SIZE_SUM                                                   0x1806809C
#define  LZMA_LZMA_E_SIZE_SUM_reg_addr                                           "0xB806809C"
#define  LZMA_LZMA_E_SIZE_SUM_reg                                                0xB806809C
#define  LZMA_LZMA_E_SIZE_SUM_inst_addr                                          "0x0026"
#define  set_LZMA_LZMA_E_SIZE_SUM_reg(data)                                      (*((volatile unsigned int*)LZMA_LZMA_E_SIZE_SUM_reg)=data)
#define  get_LZMA_LZMA_E_SIZE_SUM_reg                                            (*((volatile unsigned int*)LZMA_LZMA_E_SIZE_SUM_reg))
#define  LZMA_LZMA_E_SIZE_SUM_comp_size_sum_shift                                (0)
#define  LZMA_LZMA_E_SIZE_SUM_comp_size_sum_mask                                 (0xFFFFFFFF)
#define  LZMA_LZMA_E_SIZE_SUM_comp_size_sum(data)                                (0xFFFFFFFF&(data))
#define  LZMA_LZMA_E_SIZE_SUM_get_comp_size_sum(data)                            (0xFFFFFFFF&(data))

#define  LZMA_LZMA_D_SIZE_SUM                                                   0x180680A0
#define  LZMA_LZMA_D_SIZE_SUM_reg_addr                                           "0xB80680A0"
#define  LZMA_LZMA_D_SIZE_SUM_reg                                                0xB80680A0
#define  LZMA_LZMA_D_SIZE_SUM_inst_addr                                          "0x0027"
#define  set_LZMA_LZMA_D_SIZE_SUM_reg(data)                                      (*((volatile unsigned int*)LZMA_LZMA_D_SIZE_SUM_reg)=data)
#define  get_LZMA_LZMA_D_SIZE_SUM_reg                                            (*((volatile unsigned int*)LZMA_LZMA_D_SIZE_SUM_reg))
#define  LZMA_LZMA_D_SIZE_SUM_decomp_size_sum_shift                              (0)
#define  LZMA_LZMA_D_SIZE_SUM_decomp_size_sum_mask                               (0xFFFFFFFF)
#define  LZMA_LZMA_D_SIZE_SUM_decomp_size_sum(data)                              (0xFFFFFFFF&(data))
#define  LZMA_LZMA_D_SIZE_SUM_get_decomp_size_sum(data)                          (0xFFFFFFFF&(data))

#define  LZMA_LZMA_E_CYCLE_SUM                                                  0x180680A4
#define  LZMA_LZMA_E_CYCLE_SUM_reg_addr                                          "0xB80680A4"
#define  LZMA_LZMA_E_CYCLE_SUM_reg                                               0xB80680A4
#define  LZMA_LZMA_E_CYCLE_SUM_inst_addr                                         "0x0028"
#define  set_LZMA_LZMA_E_CYCLE_SUM_reg(data)                                     (*((volatile unsigned int*)LZMA_LZMA_E_CYCLE_SUM_reg)=data)
#define  get_LZMA_LZMA_E_CYCLE_SUM_reg                                           (*((volatile unsigned int*)LZMA_LZMA_E_CYCLE_SUM_reg))
#define  LZMA_LZMA_E_CYCLE_SUM_encode_cycle_sum_shift                            (0)
#define  LZMA_LZMA_E_CYCLE_SUM_encode_cycle_sum_mask                             (0xFFFFFFFF)
#define  LZMA_LZMA_E_CYCLE_SUM_encode_cycle_sum(data)                            (0xFFFFFFFF&(data))
#define  LZMA_LZMA_E_CYCLE_SUM_get_encode_cycle_sum(data)                        (0xFFFFFFFF&(data))

#define  LZMA_LZMA_D_CYCLE_SUM                                                  0x180680A8
#define  LZMA_LZMA_D_CYCLE_SUM_reg_addr                                          "0xB80680A8"
#define  LZMA_LZMA_D_CYCLE_SUM_reg                                               0xB80680A8
#define  LZMA_LZMA_D_CYCLE_SUM_inst_addr                                         "0x0029"
#define  set_LZMA_LZMA_D_CYCLE_SUM_reg(data)                                     (*((volatile unsigned int*)LZMA_LZMA_D_CYCLE_SUM_reg)=data)
#define  get_LZMA_LZMA_D_CYCLE_SUM_reg                                           (*((volatile unsigned int*)LZMA_LZMA_D_CYCLE_SUM_reg))
#define  LZMA_LZMA_D_CYCLE_SUM_decode_cycle_sum_shift                            (0)
#define  LZMA_LZMA_D_CYCLE_SUM_decode_cycle_sum_mask                             (0xFFFFFFFF)
#define  LZMA_LZMA_D_CYCLE_SUM_decode_cycle_sum(data)                            (0xFFFFFFFF&(data))
#define  LZMA_LZMA_D_CYCLE_SUM_get_decode_cycle_sum(data)                        (0xFFFFFFFF&(data))

#define  LZMA_LZMA_E_CMD_NUM                                                    0x180680AC
#define  LZMA_LZMA_E_CMD_NUM_reg_addr                                            "0xB80680AC"
#define  LZMA_LZMA_E_CMD_NUM_reg                                                 0xB80680AC
#define  LZMA_LZMA_E_CMD_NUM_inst_addr                                           "0x002A"
#define  set_LZMA_LZMA_E_CMD_NUM_reg(data)                                       (*((volatile unsigned int*)LZMA_LZMA_E_CMD_NUM_reg)=data)
#define  get_LZMA_LZMA_E_CMD_NUM_reg                                             (*((volatile unsigned int*)LZMA_LZMA_E_CMD_NUM_reg))
#define  LZMA_LZMA_E_CMD_NUM_encode_cmd_num_shift                                (0)
#define  LZMA_LZMA_E_CMD_NUM_encode_cmd_num_mask                                 (0xFFFFFFFF)
#define  LZMA_LZMA_E_CMD_NUM_encode_cmd_num(data)                                (0xFFFFFFFF&(data))
#define  LZMA_LZMA_E_CMD_NUM_get_encode_cmd_num(data)                            (0xFFFFFFFF&(data))

#define  LZMA_LZMA_D_CMD_NUM                                                    0x180680B0
#define  LZMA_LZMA_D_CMD_NUM_reg_addr                                            "0xB80680B0"
#define  LZMA_LZMA_D_CMD_NUM_reg                                                 0xB80680B0
#define  LZMA_LZMA_D_CMD_NUM_inst_addr                                           "0x002B"
#define  set_LZMA_LZMA_D_CMD_NUM_reg(data)                                       (*((volatile unsigned int*)LZMA_LZMA_D_CMD_NUM_reg)=data)
#define  get_LZMA_LZMA_D_CMD_NUM_reg                                             (*((volatile unsigned int*)LZMA_LZMA_D_CMD_NUM_reg))
#define  LZMA_LZMA_D_CMD_NUM_decode_cmd_num_shift                                (0)
#define  LZMA_LZMA_D_CMD_NUM_decode_cmd_num_mask                                 (0xFFFFFFFF)
#define  LZMA_LZMA_D_CMD_NUM_decode_cmd_num(data)                                (0xFFFFFFFF&(data))
#define  LZMA_LZMA_D_CMD_NUM_get_decode_cmd_num(data)                            (0xFFFFFFFF&(data))

#define  LZMA_LZMA_DMA_RD_Rule_check_up                                         0x180680B4
#define  LZMA_LZMA_DMA_RD_Rule_check_up_reg_addr                                 "0xB80680B4"
#define  LZMA_LZMA_DMA_RD_Rule_check_up_reg                                      0xB80680B4
#define  LZMA_LZMA_DMA_RD_Rule_check_up_inst_addr                                "0x002C"
#define  set_LZMA_LZMA_DMA_RD_Rule_check_up_reg(data)                            (*((volatile unsigned int*)LZMA_LZMA_DMA_RD_Rule_check_up_reg)=data)
#define  get_LZMA_LZMA_DMA_RD_Rule_check_up_reg                                  (*((volatile unsigned int*)LZMA_LZMA_DMA_RD_Rule_check_up_reg))
#define  LZMA_LZMA_DMA_RD_Rule_check_up_dma_up_limit_shift                       (4)
#define  LZMA_LZMA_DMA_RD_Rule_check_up_dma_up_limit_mask                        (0xFFFFFFF0)
#define  LZMA_LZMA_DMA_RD_Rule_check_up_dma_up_limit(data)                       (0xFFFFFFF0&((data)<<4))
#define  LZMA_LZMA_DMA_RD_Rule_check_up_get_dma_up_limit(data)                   ((0xFFFFFFF0&(data))>>4)

#define  LZMA_LZMA_DMA_RD_Rule_check_low                                        0x180680B8
#define  LZMA_LZMA_DMA_RD_Rule_check_low_reg_addr                                "0xB80680B8"
#define  LZMA_LZMA_DMA_RD_Rule_check_low_reg                                     0xB80680B8
#define  LZMA_LZMA_DMA_RD_Rule_check_low_inst_addr                               "0x002D"
#define  set_LZMA_LZMA_DMA_RD_Rule_check_low_reg(data)                           (*((volatile unsigned int*)LZMA_LZMA_DMA_RD_Rule_check_low_reg)=data)
#define  get_LZMA_LZMA_DMA_RD_Rule_check_low_reg                                 (*((volatile unsigned int*)LZMA_LZMA_DMA_RD_Rule_check_low_reg))
#define  LZMA_LZMA_DMA_RD_Rule_check_low_dma_low_limit_shift                     (4)
#define  LZMA_LZMA_DMA_RD_Rule_check_low_dma_low_limit_mask                      (0xFFFFFFF0)
#define  LZMA_LZMA_DMA_RD_Rule_check_low_dma_low_limit(data)                     (0xFFFFFFF0&((data)<<4))
#define  LZMA_LZMA_DMA_RD_Rule_check_low_get_dma_low_limit(data)                 ((0xFFFFFFF0&(data))>>4)

#define  LZMA_LZMA_DMA_RD_Ctrl                                                  0x180680BC
#define  LZMA_LZMA_DMA_RD_Ctrl_reg_addr                                          "0xB80680BC"
#define  LZMA_LZMA_DMA_RD_Ctrl_reg                                               0xB80680BC
#define  LZMA_LZMA_DMA_RD_Ctrl_inst_addr                                         "0x002E"
#define  set_LZMA_LZMA_DMA_RD_Ctrl_reg(data)                                     (*((volatile unsigned int*)LZMA_LZMA_DMA_RD_Ctrl_reg)=data)
#define  get_LZMA_LZMA_DMA_RD_Ctrl_reg                                           (*((volatile unsigned int*)LZMA_LZMA_DMA_RD_Ctrl_reg))
#define  LZMA_LZMA_DMA_RD_Ctrl_data_bust_length_shift                            (18)
#define  LZMA_LZMA_DMA_RD_Ctrl_cmd_bust_length_shift                             (16)
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_8byte_swap_shift                              (15)
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_4byte_swap_shift                              (14)
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_2byte_swap_shift                              (13)
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_1byte_swap_shift                              (12)
#define  LZMA_LZMA_DMA_RD_Ctrl_max_outstanding_shift                             (8)
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_force_all_rst_shift                           (0)
#define  LZMA_LZMA_DMA_RD_Ctrl_data_bust_length_mask                             (0x000C0000)
#define  LZMA_LZMA_DMA_RD_Ctrl_cmd_bust_length_mask                              (0x00030000)
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_8byte_swap_mask                               (0x00008000)
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_4byte_swap_mask                               (0x00004000)
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_2byte_swap_mask                               (0x00002000)
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_1byte_swap_mask                               (0x00001000)
#define  LZMA_LZMA_DMA_RD_Ctrl_max_outstanding_mask                              (0x00000300)
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_force_all_rst_mask                            (0x00000001)
#define  LZMA_LZMA_DMA_RD_Ctrl_data_bust_length(data)                            (0x000C0000&((data)<<18))
#define  LZMA_LZMA_DMA_RD_Ctrl_cmd_bust_length(data)                             (0x00030000&((data)<<16))
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_8byte_swap(data)                              (0x00008000&((data)<<15))
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_4byte_swap(data)                              (0x00004000&((data)<<14))
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_2byte_swap(data)                              (0x00002000&((data)<<13))
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_1byte_swap(data)                              (0x00001000&((data)<<12))
#define  LZMA_LZMA_DMA_RD_Ctrl_max_outstanding(data)                             (0x00000300&((data)<<8))
#define  LZMA_LZMA_DMA_RD_Ctrl_dma_force_all_rst(data)                           (0x00000001&(data))
#define  LZMA_LZMA_DMA_RD_Ctrl_get_data_bust_length(data)                        ((0x000C0000&(data))>>18)
#define  LZMA_LZMA_DMA_RD_Ctrl_get_cmd_bust_length(data)                         ((0x00030000&(data))>>16)
#define  LZMA_LZMA_DMA_RD_Ctrl_get_dma_8byte_swap(data)                          ((0x00008000&(data))>>15)
#define  LZMA_LZMA_DMA_RD_Ctrl_get_dma_4byte_swap(data)                          ((0x00004000&(data))>>14)
#define  LZMA_LZMA_DMA_RD_Ctrl_get_dma_2byte_swap(data)                          ((0x00002000&(data))>>13)
#define  LZMA_LZMA_DMA_RD_Ctrl_get_dma_1byte_swap(data)                          ((0x00001000&(data))>>12)
#define  LZMA_LZMA_DMA_RD_Ctrl_get_max_outstanding(data)                         ((0x00000300&(data))>>8)
#define  LZMA_LZMA_DMA_RD_Ctrl_get_dma_force_all_rst(data)                       (0x00000001&(data))

#define  LZMA_LZMA_DMA_RD_status                                                0x180680C0
#define  LZMA_LZMA_DMA_RD_status_reg_addr                                        "0xB80680C0"
#define  LZMA_LZMA_DMA_RD_status_reg                                             0xB80680C0
#define  LZMA_LZMA_DMA_RD_status_inst_addr                                       "0x002F"
#define  set_LZMA_LZMA_DMA_RD_status_reg(data)                                   (*((volatile unsigned int*)LZMA_LZMA_DMA_RD_status_reg)=data)
#define  get_LZMA_LZMA_DMA_RD_status_reg                                         (*((volatile unsigned int*)LZMA_LZMA_DMA_RD_status_reg))
#define  LZMA_LZMA_DMA_RD_status_dma_cmd_water_shift                             (28)
#define  LZMA_LZMA_DMA_RD_status_dma_data_water_shift                            (16)
#define  LZMA_LZMA_DMA_RD_status_cur_outstanding_shift                           (8)
#define  LZMA_LZMA_DMA_RD_status_soft_rst_before_cmd_finish_shift                (4)
#define  LZMA_LZMA_DMA_RD_status_soft_rst_with_data_left_shift                   (3)
#define  LZMA_LZMA_DMA_RD_status_data_fifo_overflow_err_shift                    (2)
#define  LZMA_LZMA_DMA_RD_status_exceed_range_err_shift                          (1)
#define  LZMA_LZMA_DMA_RD_status_zero_length_err_shift                           (0)
#define  LZMA_LZMA_DMA_RD_status_dma_cmd_water_mask                              (0x70000000)
#define  LZMA_LZMA_DMA_RD_status_dma_data_water_mask                             (0x007F0000)
#define  LZMA_LZMA_DMA_RD_status_cur_outstanding_mask                            (0x00000700)
#define  LZMA_LZMA_DMA_RD_status_soft_rst_before_cmd_finish_mask                 (0x00000010)
#define  LZMA_LZMA_DMA_RD_status_soft_rst_with_data_left_mask                    (0x00000008)
#define  LZMA_LZMA_DMA_RD_status_data_fifo_overflow_err_mask                     (0x00000004)
#define  LZMA_LZMA_DMA_RD_status_exceed_range_err_mask                           (0x00000002)
#define  LZMA_LZMA_DMA_RD_status_zero_length_err_mask                            (0x00000001)
#define  LZMA_LZMA_DMA_RD_status_dma_cmd_water(data)                             (0x70000000&((data)<<28))
#define  LZMA_LZMA_DMA_RD_status_dma_data_water(data)                            (0x007F0000&((data)<<16))
#define  LZMA_LZMA_DMA_RD_status_cur_outstanding(data)                           (0x00000700&((data)<<8))
#define  LZMA_LZMA_DMA_RD_status_soft_rst_before_cmd_finish(data)                (0x00000010&((data)<<4))
#define  LZMA_LZMA_DMA_RD_status_soft_rst_with_data_left(data)                   (0x00000008&((data)<<3))
#define  LZMA_LZMA_DMA_RD_status_data_fifo_overflow_err(data)                    (0x00000004&((data)<<2))
#define  LZMA_LZMA_DMA_RD_status_exceed_range_err(data)                          (0x00000002&((data)<<1))
#define  LZMA_LZMA_DMA_RD_status_zero_length_err(data)                           (0x00000001&(data))
#define  LZMA_LZMA_DMA_RD_status_get_dma_cmd_water(data)                         ((0x70000000&(data))>>28)
#define  LZMA_LZMA_DMA_RD_status_get_dma_data_water(data)                        ((0x007F0000&(data))>>16)
#define  LZMA_LZMA_DMA_RD_status_get_cur_outstanding(data)                       ((0x00000700&(data))>>8)
#define  LZMA_LZMA_DMA_RD_status_get_soft_rst_before_cmd_finish(data)            ((0x00000010&(data))>>4)
#define  LZMA_LZMA_DMA_RD_status_get_soft_rst_with_data_left(data)               ((0x00000008&(data))>>3)
#define  LZMA_LZMA_DMA_RD_status_get_data_fifo_overflow_err(data)                ((0x00000004&(data))>>2)
#define  LZMA_LZMA_DMA_RD_status_get_exceed_range_err(data)                      ((0x00000002&(data))>>1)
#define  LZMA_LZMA_DMA_RD_status_get_zero_length_err(data)                       (0x00000001&(data))

#define  LZMA_LZMA_DMA_RD_status1                                               0x180680C4
#define  LZMA_LZMA_DMA_RD_status1_reg_addr                                       "0xB80680C4"
#define  LZMA_LZMA_DMA_RD_status1_reg                                            0xB80680C4
#define  LZMA_LZMA_DMA_RD_status1_inst_addr                                      "0x0030"
#define  set_LZMA_LZMA_DMA_RD_status1_reg(data)                                  (*((volatile unsigned int*)LZMA_LZMA_DMA_RD_status1_reg)=data)
#define  get_LZMA_LZMA_DMA_RD_status1_reg                                        (*((volatile unsigned int*)LZMA_LZMA_DMA_RD_status1_reg))
#define  LZMA_LZMA_DMA_RD_status1_ack_num_error_shift                            (31)
#define  LZMA_LZMA_DMA_RD_status1_last_no_ack_error_shift                        (30)
#define  LZMA_LZMA_DMA_RD_status1_target_ack_num_shift                           (16)
#define  LZMA_LZMA_DMA_RD_status1_last_ack_num_shift                             (8)
#define  LZMA_LZMA_DMA_RD_status1_selected_bl_shift                              (0)
#define  LZMA_LZMA_DMA_RD_status1_ack_num_error_mask                             (0x80000000)
#define  LZMA_LZMA_DMA_RD_status1_last_no_ack_error_mask                         (0x40000000)
#define  LZMA_LZMA_DMA_RD_status1_target_ack_num_mask                            (0x007F0000)
#define  LZMA_LZMA_DMA_RD_status1_last_ack_num_mask                              (0x00007F00)
#define  LZMA_LZMA_DMA_RD_status1_selected_bl_mask                               (0x0000007F)
#define  LZMA_LZMA_DMA_RD_status1_ack_num_error(data)                            (0x80000000&((data)<<31))
#define  LZMA_LZMA_DMA_RD_status1_last_no_ack_error(data)                        (0x40000000&((data)<<30))
#define  LZMA_LZMA_DMA_RD_status1_target_ack_num(data)                           (0x007F0000&((data)<<16))
#define  LZMA_LZMA_DMA_RD_status1_last_ack_num(data)                             (0x00007F00&((data)<<8))
#define  LZMA_LZMA_DMA_RD_status1_selected_bl(data)                              (0x0000007F&(data))
#define  LZMA_LZMA_DMA_RD_status1_get_ack_num_error(data)                        ((0x80000000&(data))>>31)
#define  LZMA_LZMA_DMA_RD_status1_get_last_no_ack_error(data)                    ((0x40000000&(data))>>30)
#define  LZMA_LZMA_DMA_RD_status1_get_target_ack_num(data)                       ((0x007F0000&(data))>>16)
#define  LZMA_LZMA_DMA_RD_status1_get_last_ack_num(data)                         ((0x00007F00&(data))>>8)
#define  LZMA_LZMA_DMA_RD_status1_get_selected_bl(data)                          (0x0000007F&(data))

#define  LZMA_LZMA_DMA_RD_status2                                               0x180680C8
#define  LZMA_LZMA_DMA_RD_status2_reg_addr                                       "0xB80680C8"
#define  LZMA_LZMA_DMA_RD_status2_reg                                            0xB80680C8
#define  LZMA_LZMA_DMA_RD_status2_inst_addr                                      "0x0031"
#define  set_LZMA_LZMA_DMA_RD_status2_reg(data)                                  (*((volatile unsigned int*)LZMA_LZMA_DMA_RD_status2_reg)=data)
#define  get_LZMA_LZMA_DMA_RD_status2_reg                                        (*((volatile unsigned int*)LZMA_LZMA_DMA_RD_status2_reg))
#define  LZMA_LZMA_DMA_RD_status2_selected_addr_shift                            (4)
#define  LZMA_LZMA_DMA_RD_status2_addr_bl_sel_shift                              (0)
#define  LZMA_LZMA_DMA_RD_status2_selected_addr_mask                             (0xFFFFFFF0)
#define  LZMA_LZMA_DMA_RD_status2_addr_bl_sel_mask                               (0x00000003)
#define  LZMA_LZMA_DMA_RD_status2_selected_addr(data)                            (0xFFFFFFF0&((data)<<4))
#define  LZMA_LZMA_DMA_RD_status2_addr_bl_sel(data)                              (0x00000003&(data))
#define  LZMA_LZMA_DMA_RD_status2_get_selected_addr(data)                        ((0xFFFFFFF0&(data))>>4)
#define  LZMA_LZMA_DMA_RD_status2_get_addr_bl_sel(data)                          (0x00000003&(data))

#define  LZMA_LZMA_DMA_WR_Rule_check_up                                         0x180680CC
#define  LZMA_LZMA_DMA_WR_Rule_check_up_reg_addr                                 "0xB80680CC"
#define  LZMA_LZMA_DMA_WR_Rule_check_up_reg                                      0xB80680CC
#define  LZMA_LZMA_DMA_WR_Rule_check_up_inst_addr                                "0x0032"
#define  set_LZMA_LZMA_DMA_WR_Rule_check_up_reg(data)                            (*((volatile unsigned int*)LZMA_LZMA_DMA_WR_Rule_check_up_reg)=data)
#define  get_LZMA_LZMA_DMA_WR_Rule_check_up_reg                                  (*((volatile unsigned int*)LZMA_LZMA_DMA_WR_Rule_check_up_reg))
#define  LZMA_LZMA_DMA_WR_Rule_check_up_dma_up_limit_shift                       (4)
#define  LZMA_LZMA_DMA_WR_Rule_check_up_dma_up_limit_mask                        (0xFFFFFFF0)
#define  LZMA_LZMA_DMA_WR_Rule_check_up_dma_up_limit(data)                       (0xFFFFFFF0&((data)<<4))
#define  LZMA_LZMA_DMA_WR_Rule_check_up_get_dma_up_limit(data)                   ((0xFFFFFFF0&(data))>>4)

#define  LZMA_LZMA_DMA_WR_Rule_check_low                                        0x180680D0
#define  LZMA_LZMA_DMA_WR_Rule_check_low_reg_addr                                "0xB80680D0"
#define  LZMA_LZMA_DMA_WR_Rule_check_low_reg                                     0xB80680D0
#define  LZMA_LZMA_DMA_WR_Rule_check_low_inst_addr                               "0x0033"
#define  set_LZMA_LZMA_DMA_WR_Rule_check_low_reg(data)                           (*((volatile unsigned int*)LZMA_LZMA_DMA_WR_Rule_check_low_reg)=data)
#define  get_LZMA_LZMA_DMA_WR_Rule_check_low_reg                                 (*((volatile unsigned int*)LZMA_LZMA_DMA_WR_Rule_check_low_reg))
#define  LZMA_LZMA_DMA_WR_Rule_check_low_dma_low_limit_shift                     (4)
#define  LZMA_LZMA_DMA_WR_Rule_check_low_dma_low_limit_mask                      (0xFFFFFFF0)
#define  LZMA_LZMA_DMA_WR_Rule_check_low_dma_low_limit(data)                     (0xFFFFFFF0&((data)<<4))
#define  LZMA_LZMA_DMA_WR_Rule_check_low_get_dma_low_limit(data)                 ((0xFFFFFFF0&(data))>>4)

#define  LZMA_LZMA_DMA_WR_Ctrl                                                  0x180680D4
#define  LZMA_LZMA_DMA_WR_Ctrl_reg_addr                                          "0xB80680D4"
#define  LZMA_LZMA_DMA_WR_Ctrl_reg                                               0xB80680D4
#define  LZMA_LZMA_DMA_WR_Ctrl_inst_addr                                         "0x0034"
#define  set_LZMA_LZMA_DMA_WR_Ctrl_reg(data)                                     (*((volatile unsigned int*)LZMA_LZMA_DMA_WR_Ctrl_reg)=data)
#define  get_LZMA_LZMA_DMA_WR_Ctrl_reg                                           (*((volatile unsigned int*)LZMA_LZMA_DMA_WR_Ctrl_reg))
#define  LZMA_LZMA_DMA_WR_Ctrl_data_bust_length_shift                            (16)
#define  LZMA_LZMA_DMA_WR_Ctrl_dma_8byte_swap_shift                              (15)
#define  LZMA_LZMA_DMA_WR_Ctrl_dma_4byte_swap_shift                              (14)
#define  LZMA_LZMA_DMA_WR_Ctrl_dma_2byte_swap_shift                              (13)
#define  LZMA_LZMA_DMA_WR_Ctrl_dma_1byte_swap_shift                              (12)
#define  LZMA_LZMA_DMA_WR_Ctrl_max_outstanding_shift                             (8)
#define  LZMA_LZMA_DMA_WR_Ctrl_force_all_rst_shift                               (0)
#define  LZMA_LZMA_DMA_WR_Ctrl_data_bust_length_mask                             (0x00030000)
#define  LZMA_LZMA_DMA_WR_Ctrl_dma_8byte_swap_mask                               (0x00008000)
#define  LZMA_LZMA_DMA_WR_Ctrl_dma_4byte_swap_mask                               (0x00004000)
#define  LZMA_LZMA_DMA_WR_Ctrl_dma_2byte_swap_mask                               (0x00002000)
#define  LZMA_LZMA_DMA_WR_Ctrl_dma_1byte_swap_mask                               (0x00001000)
#define  LZMA_LZMA_DMA_WR_Ctrl_max_outstanding_mask                              (0x00000300)
#define  LZMA_LZMA_DMA_WR_Ctrl_force_all_rst_mask                                (0x00000001)
#define  LZMA_LZMA_DMA_WR_Ctrl_data_bust_length(data)                            (0x00030000&((data)<<16))
#define  LZMA_LZMA_DMA_WR_Ctrl_dma_8byte_swap(data)                              (0x00008000&((data)<<15))
#define  LZMA_LZMA_DMA_WR_Ctrl_dma_4byte_swap(data)                              (0x00004000&((data)<<14))
#define  LZMA_LZMA_DMA_WR_Ctrl_dma_2byte_swap(data)                              (0x00002000&((data)<<13))
#define  LZMA_LZMA_DMA_WR_Ctrl_dma_1byte_swap(data)                              (0x00001000&((data)<<12))
#define  LZMA_LZMA_DMA_WR_Ctrl_max_outstanding(data)                             (0x00000300&((data)<<8))
#define  LZMA_LZMA_DMA_WR_Ctrl_force_all_rst(data)                               (0x00000001&(data))
#define  LZMA_LZMA_DMA_WR_Ctrl_get_data_bust_length(data)                        ((0x00030000&(data))>>16)
#define  LZMA_LZMA_DMA_WR_Ctrl_get_dma_8byte_swap(data)                          ((0x00008000&(data))>>15)
#define  LZMA_LZMA_DMA_WR_Ctrl_get_dma_4byte_swap(data)                          ((0x00004000&(data))>>14)
#define  LZMA_LZMA_DMA_WR_Ctrl_get_dma_2byte_swap(data)                          ((0x00002000&(data))>>13)
#define  LZMA_LZMA_DMA_WR_Ctrl_get_dma_1byte_swap(data)                          ((0x00001000&(data))>>12)
#define  LZMA_LZMA_DMA_WR_Ctrl_get_max_outstanding(data)                         ((0x00000300&(data))>>8)
#define  LZMA_LZMA_DMA_WR_Ctrl_get_force_all_rst(data)                           (0x00000001&(data))

#define  LZMA_LZMA_DMA_WR_status                                                0x180680D8
#define  LZMA_LZMA_DMA_WR_status_reg_addr                                        "0xB80680D8"
#define  LZMA_LZMA_DMA_WR_status_reg                                             0xB80680D8
#define  LZMA_LZMA_DMA_WR_status_inst_addr                                       "0x0035"
#define  set_LZMA_LZMA_DMA_WR_status_reg(data)                                   (*((volatile unsigned int*)LZMA_LZMA_DMA_WR_status_reg)=data)
#define  get_LZMA_LZMA_DMA_WR_status_reg                                         (*((volatile unsigned int*)LZMA_LZMA_DMA_WR_status_reg))
#define  LZMA_LZMA_DMA_WR_status_dma_cmd_water_shift                             (28)
#define  LZMA_LZMA_DMA_WR_status_dma_data_water_shift                            (16)
#define  LZMA_LZMA_DMA_WR_status_cur_outstanding_shift                           (8)
#define  LZMA_LZMA_DMA_WR_status_soft_rst_before_cmd_finish_shift                (4)
#define  LZMA_LZMA_DMA_WR_status_soft_rst_with_data_left_shift                   (3)
#define  LZMA_LZMA_DMA_WR_status_data_fifo_underflow_err_shift                   (2)
#define  LZMA_LZMA_DMA_WR_status_exceed_range_err_shift                          (1)
#define  LZMA_LZMA_DMA_WR_status_zero_length_err_shift                           (0)
#define  LZMA_LZMA_DMA_WR_status_dma_cmd_water_mask                              (0x70000000)
#define  LZMA_LZMA_DMA_WR_status_dma_data_water_mask                             (0x007F0000)
#define  LZMA_LZMA_DMA_WR_status_cur_outstanding_mask                            (0x00000700)
#define  LZMA_LZMA_DMA_WR_status_soft_rst_before_cmd_finish_mask                 (0x00000010)
#define  LZMA_LZMA_DMA_WR_status_soft_rst_with_data_left_mask                    (0x00000008)
#define  LZMA_LZMA_DMA_WR_status_data_fifo_underflow_err_mask                    (0x00000004)
#define  LZMA_LZMA_DMA_WR_status_exceed_range_err_mask                           (0x00000002)
#define  LZMA_LZMA_DMA_WR_status_zero_length_err_mask                            (0x00000001)
#define  LZMA_LZMA_DMA_WR_status_dma_cmd_water(data)                             (0x70000000&((data)<<28))
#define  LZMA_LZMA_DMA_WR_status_dma_data_water(data)                            (0x007F0000&((data)<<16))
#define  LZMA_LZMA_DMA_WR_status_cur_outstanding(data)                           (0x00000700&((data)<<8))
#define  LZMA_LZMA_DMA_WR_status_soft_rst_before_cmd_finish(data)                (0x00000010&((data)<<4))
#define  LZMA_LZMA_DMA_WR_status_soft_rst_with_data_left(data)                   (0x00000008&((data)<<3))
#define  LZMA_LZMA_DMA_WR_status_data_fifo_underflow_err(data)                   (0x00000004&((data)<<2))
#define  LZMA_LZMA_DMA_WR_status_exceed_range_err(data)                          (0x00000002&((data)<<1))
#define  LZMA_LZMA_DMA_WR_status_zero_length_err(data)                           (0x00000001&(data))
#define  LZMA_LZMA_DMA_WR_status_get_dma_cmd_water(data)                         ((0x70000000&(data))>>28)
#define  LZMA_LZMA_DMA_WR_status_get_dma_data_water(data)                        ((0x007F0000&(data))>>16)
#define  LZMA_LZMA_DMA_WR_status_get_cur_outstanding(data)                       ((0x00000700&(data))>>8)
#define  LZMA_LZMA_DMA_WR_status_get_soft_rst_before_cmd_finish(data)            ((0x00000010&(data))>>4)
#define  LZMA_LZMA_DMA_WR_status_get_soft_rst_with_data_left(data)               ((0x00000008&(data))>>3)
#define  LZMA_LZMA_DMA_WR_status_get_data_fifo_underflow_err(data)               ((0x00000004&(data))>>2)
#define  LZMA_LZMA_DMA_WR_status_get_exceed_range_err(data)                      ((0x00000002&(data))>>1)
#define  LZMA_LZMA_DMA_WR_status_get_zero_length_err(data)                       (0x00000001&(data))

#define  LZMA_LZMA_DMA_WR_status1                                               0x180680DC
#define  LZMA_LZMA_DMA_WR_status1_reg_addr                                       "0xB80680DC"
#define  LZMA_LZMA_DMA_WR_status1_reg                                            0xB80680DC
#define  LZMA_LZMA_DMA_WR_status1_inst_addr                                      "0x0036"
#define  set_LZMA_LZMA_DMA_WR_status1_reg(data)                                  (*((volatile unsigned int*)LZMA_LZMA_DMA_WR_status1_reg)=data)
#define  get_LZMA_LZMA_DMA_WR_status1_reg                                        (*((volatile unsigned int*)LZMA_LZMA_DMA_WR_status1_reg))
#define  LZMA_LZMA_DMA_WR_status1_ack_num_error_shift                            (31)
#define  LZMA_LZMA_DMA_WR_status1_last_no_ack_error_shift                        (30)
#define  LZMA_LZMA_DMA_WR_status1_target_ack_num_shift                           (16)
#define  LZMA_LZMA_DMA_WR_status1_last_ack_num_shift                             (8)
#define  LZMA_LZMA_DMA_WR_status1_selected_bl_shift                              (0)
#define  LZMA_LZMA_DMA_WR_status1_ack_num_error_mask                             (0x80000000)
#define  LZMA_LZMA_DMA_WR_status1_last_no_ack_error_mask                         (0x40000000)
#define  LZMA_LZMA_DMA_WR_status1_target_ack_num_mask                            (0x007F0000)
#define  LZMA_LZMA_DMA_WR_status1_last_ack_num_mask                              (0x00007F00)
#define  LZMA_LZMA_DMA_WR_status1_selected_bl_mask                               (0x0000007F)
#define  LZMA_LZMA_DMA_WR_status1_ack_num_error(data)                            (0x80000000&((data)<<31))
#define  LZMA_LZMA_DMA_WR_status1_last_no_ack_error(data)                        (0x40000000&((data)<<30))
#define  LZMA_LZMA_DMA_WR_status1_target_ack_num(data)                           (0x007F0000&((data)<<16))
#define  LZMA_LZMA_DMA_WR_status1_last_ack_num(data)                             (0x00007F00&((data)<<8))
#define  LZMA_LZMA_DMA_WR_status1_selected_bl(data)                              (0x0000007F&(data))
#define  LZMA_LZMA_DMA_WR_status1_get_ack_num_error(data)                        ((0x80000000&(data))>>31)
#define  LZMA_LZMA_DMA_WR_status1_get_last_no_ack_error(data)                    ((0x40000000&(data))>>30)
#define  LZMA_LZMA_DMA_WR_status1_get_target_ack_num(data)                       ((0x007F0000&(data))>>16)
#define  LZMA_LZMA_DMA_WR_status1_get_last_ack_num(data)                         ((0x00007F00&(data))>>8)
#define  LZMA_LZMA_DMA_WR_status1_get_selected_bl(data)                          (0x0000007F&(data))

#define  LZMA_LZMA_DMA_WR_status2                                               0x180680E0
#define  LZMA_LZMA_DMA_WR_status2_reg_addr                                       "0xB80680E0"
#define  LZMA_LZMA_DMA_WR_status2_reg                                            0xB80680E0
#define  LZMA_LZMA_DMA_WR_status2_inst_addr                                      "0x0037"
#define  set_LZMA_LZMA_DMA_WR_status2_reg(data)                                  (*((volatile unsigned int*)LZMA_LZMA_DMA_WR_status2_reg)=data)
#define  get_LZMA_LZMA_DMA_WR_status2_reg                                        (*((volatile unsigned int*)LZMA_LZMA_DMA_WR_status2_reg))
#define  LZMA_LZMA_DMA_WR_status2_selected_addr_shift                            (4)
#define  LZMA_LZMA_DMA_WR_status2_addr_bl_sel_shift                              (0)
#define  LZMA_LZMA_DMA_WR_status2_selected_addr_mask                             (0xFFFFFFF0)
#define  LZMA_LZMA_DMA_WR_status2_addr_bl_sel_mask                               (0x00000003)
#define  LZMA_LZMA_DMA_WR_status2_selected_addr(data)                            (0xFFFFFFF0&((data)<<4))
#define  LZMA_LZMA_DMA_WR_status2_addr_bl_sel(data)                              (0x00000003&(data))
#define  LZMA_LZMA_DMA_WR_status2_get_selected_addr(data)                        ((0xFFFFFFF0&(data))>>4)
#define  LZMA_LZMA_DMA_WR_status2_get_addr_bl_sel(data)                          (0x00000003&(data))

#define  LZMA_LZMA_DUMMY                                                        0x180680E4
#define  LZMA_LZMA_DUMMY_reg_addr                                                "0xB80680E4"
#define  LZMA_LZMA_DUMMY_reg                                                     0xB80680E4
#define  LZMA_LZMA_DUMMY_inst_addr                                               "0x0038"
#define  set_LZMA_LZMA_DUMMY_reg(data)                                           (*((volatile unsigned int*)LZMA_LZMA_DUMMY_reg)=data)
#define  get_LZMA_LZMA_DUMMY_reg                                                 (*((volatile unsigned int*)LZMA_LZMA_DUMMY_reg))
#define  LZMA_LZMA_DUMMY_lzma_over_4k_eco_shift                                  (31)
#define  LZMA_LZMA_DUMMY_lzma_4k_sram_ready_eco_shift                            (30)
#define  LZMA_LZMA_DUMMY_lzma_wdma_fifo_empty_eco_shift                          (29)
#define  LZMA_LZMA_DUMMY_shift_buffer_over3_eco_shift                            (28)
#define  LZMA_LZMA_DUMMY_cmd_write_bak_eco_shift                                 (27)
#define  LZMA_LZMA_DUMMY_lzma_last_data_finish_eco_shift                         (26)
#define  LZMA_LZMA_DUMMY_lzma_fm_sram_ready_eco_shift                            (25)
#define  LZMA_LZMA_DUMMY_lzma_fm_pending_flag_shift                              (24)
#define  LZMA_LZMA_DUMMY_dummy_23_0_shift                                        (0)
#define  LZMA_LZMA_DUMMY_lzma_over_4k_eco_mask                                   (0x80000000)
#define  LZMA_LZMA_DUMMY_lzma_4k_sram_ready_eco_mask                             (0x40000000)
#define  LZMA_LZMA_DUMMY_lzma_wdma_fifo_empty_eco_mask                           (0x20000000)
#define  LZMA_LZMA_DUMMY_shift_buffer_over3_eco_mask                             (0x10000000)
#define  LZMA_LZMA_DUMMY_cmd_write_bak_eco_mask                                  (0x08000000)
#define  LZMA_LZMA_DUMMY_lzma_last_data_finish_eco_mask                          (0x04000000)
#define  LZMA_LZMA_DUMMY_lzma_fm_sram_ready_eco_mask                             (0x02000000)
#define  LZMA_LZMA_DUMMY_lzma_fm_pending_flag_mask                               (0x01000000)
#define  LZMA_LZMA_DUMMY_dummy_23_0_mask                                         (0x00FFFFFF)
#define  LZMA_LZMA_DUMMY_lzma_over_4k_eco(data)                                  (0x80000000&((data)<<31))
#define  LZMA_LZMA_DUMMY_lzma_4k_sram_ready_eco(data)                            (0x40000000&((data)<<30))
#define  LZMA_LZMA_DUMMY_lzma_wdma_fifo_empty_eco(data)                          (0x20000000&((data)<<29))
#define  LZMA_LZMA_DUMMY_shift_buffer_over3_eco(data)                            (0x10000000&((data)<<28))
#define  LZMA_LZMA_DUMMY_cmd_write_bak_eco(data)                                 (0x08000000&((data)<<27))
#define  LZMA_LZMA_DUMMY_lzma_last_data_finish_eco(data)                         (0x04000000&((data)<<26))
#define  LZMA_LZMA_DUMMY_lzma_fm_sram_ready_eco(data)                            (0x02000000&((data)<<25))
#define  LZMA_LZMA_DUMMY_lzma_fm_pending_flag(data)                              (0x01000000&((data)<<24))
#define  LZMA_LZMA_DUMMY_dummy_23_0(data)                                        (0x00FFFFFF&(data))
#define  LZMA_LZMA_DUMMY_get_lzma_over_4k_eco(data)                              ((0x80000000&(data))>>31)
#define  LZMA_LZMA_DUMMY_get_lzma_4k_sram_ready_eco(data)                        ((0x40000000&(data))>>30)
#define  LZMA_LZMA_DUMMY_get_lzma_wdma_fifo_empty_eco(data)                      ((0x20000000&(data))>>29)
#define  LZMA_LZMA_DUMMY_get_shift_buffer_over3_eco(data)                        ((0x10000000&(data))>>28)
#define  LZMA_LZMA_DUMMY_get_cmd_write_bak_eco(data)                             ((0x08000000&(data))>>27)
#define  LZMA_LZMA_DUMMY_get_lzma_last_data_finish_eco(data)                     ((0x04000000&(data))>>26)
#define  LZMA_LZMA_DUMMY_get_lzma_fm_sram_ready_eco(data)                        ((0x02000000&(data))>>25)
#define  LZMA_LZMA_DUMMY_get_lzma_fm_pending_flag(data)                          ((0x01000000&(data))>>24)
#define  LZMA_LZMA_DUMMY_get_dummy_23_0(data)                                    (0x00FFFFFF&(data))

#define  LZMA_LZMA_BIST_0                                                       0x180680E8
#define  LZMA_LZMA_BIST_0_reg_addr                                               "0xB80680E8"
#define  LZMA_LZMA_BIST_0_reg                                                    0xB80680E8
#define  LZMA_LZMA_BIST_0_inst_addr                                              "0x0039"
#define  set_LZMA_LZMA_BIST_0_reg(data)                                          (*((volatile unsigned int*)LZMA_LZMA_BIST_0_reg)=data)
#define  get_LZMA_LZMA_BIST_0_reg                                                (*((volatile unsigned int*)LZMA_LZMA_BIST_0_reg))
#define  LZMA_LZMA_BIST_0_iobuffer_bist_done_shift                               (23)
#define  LZMA_LZMA_BIST_0_iobuffer_drf_bist_done_shift                           (22)
#define  LZMA_LZMA_BIST_0_iobuffer_bist_mode_shift                               (21)
#define  LZMA_LZMA_BIST_0_iobuffer_drf_bist_mode_shift                           (20)
#define  LZMA_LZMA_BIST_0_iobuffer_drf_start_pause_shift                         (19)
#define  LZMA_LZMA_BIST_0_iobuffer_drf_test_resume_shift                         (18)
#define  LZMA_LZMA_BIST_0_iobuffer_ls_shift                                      (17)
#define  LZMA_LZMA_BIST_0_iobuffer_rme_shift                                     (16)
#define  LZMA_LZMA_BIST_0_iobuffer_rm_shift                                      (12)
#define  LZMA_LZMA_BIST_0_prob_bist_done_shift                                   (11)
#define  LZMA_LZMA_BIST_0_prob_drf_bist_done_shift                               (10)
#define  LZMA_LZMA_BIST_0_prob_bist_mode_shift                                   (9)
#define  LZMA_LZMA_BIST_0_prob_drf_bist_mode_shift                               (8)
#define  LZMA_LZMA_BIST_0_prob_drf_start_pause_shift                             (7)
#define  LZMA_LZMA_BIST_0_prob_drf_test_resume_shift                             (6)
#define  LZMA_LZMA_BIST_0_prob_ls_shift                                          (5)
#define  LZMA_LZMA_BIST_0_prob_rme_shift                                         (4)
#define  LZMA_LZMA_BIST_0_prob_rm_shift                                          (0)
#define  LZMA_LZMA_BIST_0_iobuffer_bist_done_mask                                (0x00800000)
#define  LZMA_LZMA_BIST_0_iobuffer_drf_bist_done_mask                            (0x00400000)
#define  LZMA_LZMA_BIST_0_iobuffer_bist_mode_mask                                (0x00200000)
#define  LZMA_LZMA_BIST_0_iobuffer_drf_bist_mode_mask                            (0x00100000)
#define  LZMA_LZMA_BIST_0_iobuffer_drf_start_pause_mask                          (0x00080000)
#define  LZMA_LZMA_BIST_0_iobuffer_drf_test_resume_mask                          (0x00040000)
#define  LZMA_LZMA_BIST_0_iobuffer_ls_mask                                       (0x00020000)
#define  LZMA_LZMA_BIST_0_iobuffer_rme_mask                                      (0x00010000)
#define  LZMA_LZMA_BIST_0_iobuffer_rm_mask                                       (0x0000F000)
#define  LZMA_LZMA_BIST_0_prob_bist_done_mask                                    (0x00000800)
#define  LZMA_LZMA_BIST_0_prob_drf_bist_done_mask                                (0x00000400)
#define  LZMA_LZMA_BIST_0_prob_bist_mode_mask                                    (0x00000200)
#define  LZMA_LZMA_BIST_0_prob_drf_bist_mode_mask                                (0x00000100)
#define  LZMA_LZMA_BIST_0_prob_drf_start_pause_mask                              (0x00000080)
#define  LZMA_LZMA_BIST_0_prob_drf_test_resume_mask                              (0x00000040)
#define  LZMA_LZMA_BIST_0_prob_ls_mask                                           (0x00000020)
#define  LZMA_LZMA_BIST_0_prob_rme_mask                                          (0x00000010)
#define  LZMA_LZMA_BIST_0_prob_rm_mask                                           (0x0000000F)
#define  LZMA_LZMA_BIST_0_iobuffer_bist_done(data)                               (0x00800000&((data)<<23))
#define  LZMA_LZMA_BIST_0_iobuffer_drf_bist_done(data)                           (0x00400000&((data)<<22))
#define  LZMA_LZMA_BIST_0_iobuffer_bist_mode(data)                               (0x00200000&((data)<<21))
#define  LZMA_LZMA_BIST_0_iobuffer_drf_bist_mode(data)                           (0x00100000&((data)<<20))
#define  LZMA_LZMA_BIST_0_iobuffer_drf_start_pause(data)                         (0x00080000&((data)<<19))
#define  LZMA_LZMA_BIST_0_iobuffer_drf_test_resume(data)                         (0x00040000&((data)<<18))
#define  LZMA_LZMA_BIST_0_iobuffer_ls(data)                                      (0x00020000&((data)<<17))
#define  LZMA_LZMA_BIST_0_iobuffer_rme(data)                                     (0x00010000&((data)<<16))
#define  LZMA_LZMA_BIST_0_iobuffer_rm(data)                                      (0x0000F000&((data)<<12))
#define  LZMA_LZMA_BIST_0_prob_bist_done(data)                                   (0x00000800&((data)<<11))
#define  LZMA_LZMA_BIST_0_prob_drf_bist_done(data)                               (0x00000400&((data)<<10))
#define  LZMA_LZMA_BIST_0_prob_bist_mode(data)                                   (0x00000200&((data)<<9))
#define  LZMA_LZMA_BIST_0_prob_drf_bist_mode(data)                               (0x00000100&((data)<<8))
#define  LZMA_LZMA_BIST_0_prob_drf_start_pause(data)                             (0x00000080&((data)<<7))
#define  LZMA_LZMA_BIST_0_prob_drf_test_resume(data)                             (0x00000040&((data)<<6))
#define  LZMA_LZMA_BIST_0_prob_ls(data)                                          (0x00000020&((data)<<5))
#define  LZMA_LZMA_BIST_0_prob_rme(data)                                         (0x00000010&((data)<<4))
#define  LZMA_LZMA_BIST_0_prob_rm(data)                                          (0x0000000F&(data))
#define  LZMA_LZMA_BIST_0_get_iobuffer_bist_done(data)                           ((0x00800000&(data))>>23)
#define  LZMA_LZMA_BIST_0_get_iobuffer_drf_bist_done(data)                       ((0x00400000&(data))>>22)
#define  LZMA_LZMA_BIST_0_get_iobuffer_bist_mode(data)                           ((0x00200000&(data))>>21)
#define  LZMA_LZMA_BIST_0_get_iobuffer_drf_bist_mode(data)                       ((0x00100000&(data))>>20)
#define  LZMA_LZMA_BIST_0_get_iobuffer_drf_start_pause(data)                     ((0x00080000&(data))>>19)
#define  LZMA_LZMA_BIST_0_get_iobuffer_drf_test_resume(data)                     ((0x00040000&(data))>>18)
#define  LZMA_LZMA_BIST_0_get_iobuffer_ls(data)                                  ((0x00020000&(data))>>17)
#define  LZMA_LZMA_BIST_0_get_iobuffer_rme(data)                                 ((0x00010000&(data))>>16)
#define  LZMA_LZMA_BIST_0_get_iobuffer_rm(data)                                  ((0x0000F000&(data))>>12)
#define  LZMA_LZMA_BIST_0_get_prob_bist_done(data)                               ((0x00000800&(data))>>11)
#define  LZMA_LZMA_BIST_0_get_prob_drf_bist_done(data)                           ((0x00000400&(data))>>10)
#define  LZMA_LZMA_BIST_0_get_prob_bist_mode(data)                               ((0x00000200&(data))>>9)
#define  LZMA_LZMA_BIST_0_get_prob_drf_bist_mode(data)                           ((0x00000100&(data))>>8)
#define  LZMA_LZMA_BIST_0_get_prob_drf_start_pause(data)                         ((0x00000080&(data))>>7)
#define  LZMA_LZMA_BIST_0_get_prob_drf_test_resume(data)                         ((0x00000040&(data))>>6)
#define  LZMA_LZMA_BIST_0_get_prob_ls(data)                                      ((0x00000020&(data))>>5)
#define  LZMA_LZMA_BIST_0_get_prob_rme(data)                                     ((0x00000010&(data))>>4)
#define  LZMA_LZMA_BIST_0_get_prob_rm(data)                                      (0x0000000F&(data))

#define  LZMA_LZMA_MBIST_1                                                      0x180680EC
#define  LZMA_LZMA_MBIST_1_reg_addr                                              "0xB80680EC"
#define  LZMA_LZMA_MBIST_1_reg                                                   0xB80680EC
#define  LZMA_LZMA_MBIST_1_inst_addr                                             "0x003A"
#define  set_LZMA_LZMA_MBIST_1_reg(data)                                         (*((volatile unsigned int*)LZMA_LZMA_MBIST_1_reg)=data)
#define  get_LZMA_LZMA_MBIST_1_reg                                               (*((volatile unsigned int*)LZMA_LZMA_MBIST_1_reg))
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_5_shift                            (19)
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_5_shift                        (18)
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_4_shift                            (17)
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_4_shift                        (16)
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_3_shift                            (15)
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_3_shift                        (14)
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_2_shift                            (13)
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_2_shift                        (12)
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_1_shift                            (11)
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_1_shift                        (10)
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_0_shift                            (9)
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_0_shift                        (8)
#define  LZMA_LZMA_MBIST_1_prob_bist_fail_2_shift                                (5)
#define  LZMA_LZMA_MBIST_1_prob_drf_bist_fail_2_shift                            (4)
#define  LZMA_LZMA_MBIST_1_prob_bist_fail_1_shift                                (3)
#define  LZMA_LZMA_MBIST_1_prob_drf_bist_fail_1_shift                            (2)
#define  LZMA_LZMA_MBIST_1_prob_bist_fail_0_shift                                (1)
#define  LZMA_LZMA_MBIST_1_prob_drf_bist_fail_0_shift                            (0)
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_5_mask                             (0x00080000)
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_5_mask                         (0x00040000)
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_4_mask                             (0x00020000)
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_4_mask                         (0x00010000)
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_3_mask                             (0x00008000)
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_3_mask                         (0x00004000)
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_2_mask                             (0x00002000)
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_2_mask                         (0x00001000)
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_1_mask                             (0x00000800)
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_1_mask                         (0x00000400)
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_0_mask                             (0x00000200)
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_0_mask                         (0x00000100)
#define  LZMA_LZMA_MBIST_1_prob_bist_fail_2_mask                                 (0x00000020)
#define  LZMA_LZMA_MBIST_1_prob_drf_bist_fail_2_mask                             (0x00000010)
#define  LZMA_LZMA_MBIST_1_prob_bist_fail_1_mask                                 (0x00000008)
#define  LZMA_LZMA_MBIST_1_prob_drf_bist_fail_1_mask                             (0x00000004)
#define  LZMA_LZMA_MBIST_1_prob_bist_fail_0_mask                                 (0x00000002)
#define  LZMA_LZMA_MBIST_1_prob_drf_bist_fail_0_mask                             (0x00000001)
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_5(data)                            (0x00080000&((data)<<19))
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_5(data)                        (0x00040000&((data)<<18))
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_4(data)                            (0x00020000&((data)<<17))
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_4(data)                        (0x00010000&((data)<<16))
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_3(data)                            (0x00008000&((data)<<15))
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_3(data)                        (0x00004000&((data)<<14))
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_2(data)                            (0x00002000&((data)<<13))
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_2(data)                        (0x00001000&((data)<<12))
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_1(data)                            (0x00000800&((data)<<11))
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_1(data)                        (0x00000400&((data)<<10))
#define  LZMA_LZMA_MBIST_1_iobuffer_bist_fail_0(data)                            (0x00000200&((data)<<9))
#define  LZMA_LZMA_MBIST_1_iobuffer_drf_bist_fail_0(data)                        (0x00000100&((data)<<8))
#define  LZMA_LZMA_MBIST_1_prob_bist_fail_2(data)                                (0x00000020&((data)<<5))
#define  LZMA_LZMA_MBIST_1_prob_drf_bist_fail_2(data)                            (0x00000010&((data)<<4))
#define  LZMA_LZMA_MBIST_1_prob_bist_fail_1(data)                                (0x00000008&((data)<<3))
#define  LZMA_LZMA_MBIST_1_prob_drf_bist_fail_1(data)                            (0x00000004&((data)<<2))
#define  LZMA_LZMA_MBIST_1_prob_bist_fail_0(data)                                (0x00000002&((data)<<1))
#define  LZMA_LZMA_MBIST_1_prob_drf_bist_fail_0(data)                            (0x00000001&(data))
#define  LZMA_LZMA_MBIST_1_get_iobuffer_bist_fail_5(data)                        ((0x00080000&(data))>>19)
#define  LZMA_LZMA_MBIST_1_get_iobuffer_drf_bist_fail_5(data)                    ((0x00040000&(data))>>18)
#define  LZMA_LZMA_MBIST_1_get_iobuffer_bist_fail_4(data)                        ((0x00020000&(data))>>17)
#define  LZMA_LZMA_MBIST_1_get_iobuffer_drf_bist_fail_4(data)                    ((0x00010000&(data))>>16)
#define  LZMA_LZMA_MBIST_1_get_iobuffer_bist_fail_3(data)                        ((0x00008000&(data))>>15)
#define  LZMA_LZMA_MBIST_1_get_iobuffer_drf_bist_fail_3(data)                    ((0x00004000&(data))>>14)
#define  LZMA_LZMA_MBIST_1_get_iobuffer_bist_fail_2(data)                        ((0x00002000&(data))>>13)
#define  LZMA_LZMA_MBIST_1_get_iobuffer_drf_bist_fail_2(data)                    ((0x00001000&(data))>>12)
#define  LZMA_LZMA_MBIST_1_get_iobuffer_bist_fail_1(data)                        ((0x00000800&(data))>>11)
#define  LZMA_LZMA_MBIST_1_get_iobuffer_drf_bist_fail_1(data)                    ((0x00000400&(data))>>10)
#define  LZMA_LZMA_MBIST_1_get_iobuffer_bist_fail_0(data)                        ((0x00000200&(data))>>9)
#define  LZMA_LZMA_MBIST_1_get_iobuffer_drf_bist_fail_0(data)                    ((0x00000100&(data))>>8)
#define  LZMA_LZMA_MBIST_1_get_prob_bist_fail_2(data)                            ((0x00000020&(data))>>5)
#define  LZMA_LZMA_MBIST_1_get_prob_drf_bist_fail_2(data)                        ((0x00000010&(data))>>4)
#define  LZMA_LZMA_MBIST_1_get_prob_bist_fail_1(data)                            ((0x00000008&(data))>>3)
#define  LZMA_LZMA_MBIST_1_get_prob_drf_bist_fail_1(data)                        ((0x00000004&(data))>>2)
#define  LZMA_LZMA_MBIST_1_get_prob_bist_fail_0(data)                            ((0x00000002&(data))>>1)
#define  LZMA_LZMA_MBIST_1_get_prob_drf_bist_fail_0(data)                        (0x00000001&(data))

#define  LZMA_LZMA_MBIST_2                                                      0x180680F0
#define  LZMA_LZMA_MBIST_2_reg_addr                                              "0xB80680F0"
#define  LZMA_LZMA_MBIST_2_reg                                                   0xB80680F0
#define  LZMA_LZMA_MBIST_2_inst_addr                                             "0x003B"
#define  set_LZMA_LZMA_MBIST_2_reg(data)                                         (*((volatile unsigned int*)LZMA_LZMA_MBIST_2_reg)=data)
#define  get_LZMA_LZMA_MBIST_2_reg                                               (*((volatile unsigned int*)LZMA_LZMA_MBIST_2_reg))
#define  LZMA_LZMA_MBIST_2_son_bist_done_shift                                   (29)
#define  LZMA_LZMA_MBIST_2_son_drf_bist_done_shift                               (28)
#define  LZMA_LZMA_MBIST_2_son_bist_mode_shift                                   (27)
#define  LZMA_LZMA_MBIST_2_son_drf_bist_mode_shift                               (26)
#define  LZMA_LZMA_MBIST_2_son_drf_start_pause_shift                             (25)
#define  LZMA_LZMA_MBIST_2_son_drf_test_resume_shift                             (24)
#define  LZMA_LZMA_MBIST_2_son_bist_fail_0_shift                                 (23)
#define  LZMA_LZMA_MBIST_2_son_drf_bist_fail_0_shift                             (22)
#define  LZMA_LZMA_MBIST_2_son_bist_fail_1_shift                                 (21)
#define  LZMA_LZMA_MBIST_2_son_drf_bist_fail_1_shift                             (20)
#define  LZMA_LZMA_MBIST_2_son_ls_shift                                          (19)
#define  LZMA_LZMA_MBIST_2_son_rme_shift                                         (18)
#define  LZMA_LZMA_MBIST_2_son_rm_shift                                          (14)
#define  LZMA_LZMA_MBIST_2_hash_bist_done_shift                                  (13)
#define  LZMA_LZMA_MBIST_2_hash_drf_bist_done_shift                              (12)
#define  LZMA_LZMA_MBIST_2_hash_bist_mode_shift                                  (11)
#define  LZMA_LZMA_MBIST_2_hash_drf_bist_mode_shift                              (10)
#define  LZMA_LZMA_MBIST_2_hash_drf_start_pause_shift                            (9)
#define  LZMA_LZMA_MBIST_2_hash_drf_test_resume_shift                            (8)
#define  LZMA_LZMA_MBIST_2_hash_bist_fail_0_shift                                (7)
#define  LZMA_LZMA_MBIST_2_hash_drf_bist_fail_0_shift                            (6)
#define  LZMA_LZMA_MBIST_2_hash_ls_shift                                         (5)
#define  LZMA_LZMA_MBIST_2_hash_rme_shift                                        (4)
#define  LZMA_LZMA_MBIST_2_hash_rm_shift                                         (0)
#define  LZMA_LZMA_MBIST_2_son_bist_done_mask                                    (0x20000000)
#define  LZMA_LZMA_MBIST_2_son_drf_bist_done_mask                                (0x10000000)
#define  LZMA_LZMA_MBIST_2_son_bist_mode_mask                                    (0x08000000)
#define  LZMA_LZMA_MBIST_2_son_drf_bist_mode_mask                                (0x04000000)
#define  LZMA_LZMA_MBIST_2_son_drf_start_pause_mask                              (0x02000000)
#define  LZMA_LZMA_MBIST_2_son_drf_test_resume_mask                              (0x01000000)
#define  LZMA_LZMA_MBIST_2_son_bist_fail_0_mask                                  (0x00800000)
#define  LZMA_LZMA_MBIST_2_son_drf_bist_fail_0_mask                              (0x00400000)
#define  LZMA_LZMA_MBIST_2_son_bist_fail_1_mask                                  (0x00200000)
#define  LZMA_LZMA_MBIST_2_son_drf_bist_fail_1_mask                              (0x00100000)
#define  LZMA_LZMA_MBIST_2_son_ls_mask                                           (0x00080000)
#define  LZMA_LZMA_MBIST_2_son_rme_mask                                          (0x00040000)
#define  LZMA_LZMA_MBIST_2_son_rm_mask                                           (0x0003C000)
#define  LZMA_LZMA_MBIST_2_hash_bist_done_mask                                   (0x00002000)
#define  LZMA_LZMA_MBIST_2_hash_drf_bist_done_mask                               (0x00001000)
#define  LZMA_LZMA_MBIST_2_hash_bist_mode_mask                                   (0x00000800)
#define  LZMA_LZMA_MBIST_2_hash_drf_bist_mode_mask                               (0x00000400)
#define  LZMA_LZMA_MBIST_2_hash_drf_start_pause_mask                             (0x00000200)
#define  LZMA_LZMA_MBIST_2_hash_drf_test_resume_mask                             (0x00000100)
#define  LZMA_LZMA_MBIST_2_hash_bist_fail_0_mask                                 (0x00000080)
#define  LZMA_LZMA_MBIST_2_hash_drf_bist_fail_0_mask                             (0x00000040)
#define  LZMA_LZMA_MBIST_2_hash_ls_mask                                          (0x00000020)
#define  LZMA_LZMA_MBIST_2_hash_rme_mask                                         (0x00000010)
#define  LZMA_LZMA_MBIST_2_hash_rm_mask                                          (0x0000000F)
#define  LZMA_LZMA_MBIST_2_son_bist_done(data)                                   (0x20000000&((data)<<29))
#define  LZMA_LZMA_MBIST_2_son_drf_bist_done(data)                               (0x10000000&((data)<<28))
#define  LZMA_LZMA_MBIST_2_son_bist_mode(data)                                   (0x08000000&((data)<<27))
#define  LZMA_LZMA_MBIST_2_son_drf_bist_mode(data)                               (0x04000000&((data)<<26))
#define  LZMA_LZMA_MBIST_2_son_drf_start_pause(data)                             (0x02000000&((data)<<25))
#define  LZMA_LZMA_MBIST_2_son_drf_test_resume(data)                             (0x01000000&((data)<<24))
#define  LZMA_LZMA_MBIST_2_son_bist_fail_0(data)                                 (0x00800000&((data)<<23))
#define  LZMA_LZMA_MBIST_2_son_drf_bist_fail_0(data)                             (0x00400000&((data)<<22))
#define  LZMA_LZMA_MBIST_2_son_bist_fail_1(data)                                 (0x00200000&((data)<<21))
#define  LZMA_LZMA_MBIST_2_son_drf_bist_fail_1(data)                             (0x00100000&((data)<<20))
#define  LZMA_LZMA_MBIST_2_son_ls(data)                                          (0x00080000&((data)<<19))
#define  LZMA_LZMA_MBIST_2_son_rme(data)                                         (0x00040000&((data)<<18))
#define  LZMA_LZMA_MBIST_2_son_rm(data)                                          (0x0003C000&((data)<<14))
#define  LZMA_LZMA_MBIST_2_hash_bist_done(data)                                  (0x00002000&((data)<<13))
#define  LZMA_LZMA_MBIST_2_hash_drf_bist_done(data)                              (0x00001000&((data)<<12))
#define  LZMA_LZMA_MBIST_2_hash_bist_mode(data)                                  (0x00000800&((data)<<11))
#define  LZMA_LZMA_MBIST_2_hash_drf_bist_mode(data)                              (0x00000400&((data)<<10))
#define  LZMA_LZMA_MBIST_2_hash_drf_start_pause(data)                            (0x00000200&((data)<<9))
#define  LZMA_LZMA_MBIST_2_hash_drf_test_resume(data)                            (0x00000100&((data)<<8))
#define  LZMA_LZMA_MBIST_2_hash_bist_fail_0(data)                                (0x00000080&((data)<<7))
#define  LZMA_LZMA_MBIST_2_hash_drf_bist_fail_0(data)                            (0x00000040&((data)<<6))
#define  LZMA_LZMA_MBIST_2_hash_ls(data)                                         (0x00000020&((data)<<5))
#define  LZMA_LZMA_MBIST_2_hash_rme(data)                                        (0x00000010&((data)<<4))
#define  LZMA_LZMA_MBIST_2_hash_rm(data)                                         (0x0000000F&(data))
#define  LZMA_LZMA_MBIST_2_get_son_bist_done(data)                               ((0x20000000&(data))>>29)
#define  LZMA_LZMA_MBIST_2_get_son_drf_bist_done(data)                           ((0x10000000&(data))>>28)
#define  LZMA_LZMA_MBIST_2_get_son_bist_mode(data)                               ((0x08000000&(data))>>27)
#define  LZMA_LZMA_MBIST_2_get_son_drf_bist_mode(data)                           ((0x04000000&(data))>>26)
#define  LZMA_LZMA_MBIST_2_get_son_drf_start_pause(data)                         ((0x02000000&(data))>>25)
#define  LZMA_LZMA_MBIST_2_get_son_drf_test_resume(data)                         ((0x01000000&(data))>>24)
#define  LZMA_LZMA_MBIST_2_get_son_bist_fail_0(data)                             ((0x00800000&(data))>>23)
#define  LZMA_LZMA_MBIST_2_get_son_drf_bist_fail_0(data)                         ((0x00400000&(data))>>22)
#define  LZMA_LZMA_MBIST_2_get_son_bist_fail_1(data)                             ((0x00200000&(data))>>21)
#define  LZMA_LZMA_MBIST_2_get_son_drf_bist_fail_1(data)                         ((0x00100000&(data))>>20)
#define  LZMA_LZMA_MBIST_2_get_son_ls(data)                                      ((0x00080000&(data))>>19)
#define  LZMA_LZMA_MBIST_2_get_son_rme(data)                                     ((0x00040000&(data))>>18)
#define  LZMA_LZMA_MBIST_2_get_son_rm(data)                                      ((0x0003C000&(data))>>14)
#define  LZMA_LZMA_MBIST_2_get_hash_bist_done(data)                              ((0x00002000&(data))>>13)
#define  LZMA_LZMA_MBIST_2_get_hash_drf_bist_done(data)                          ((0x00001000&(data))>>12)
#define  LZMA_LZMA_MBIST_2_get_hash_bist_mode(data)                              ((0x00000800&(data))>>11)
#define  LZMA_LZMA_MBIST_2_get_hash_drf_bist_mode(data)                          ((0x00000400&(data))>>10)
#define  LZMA_LZMA_MBIST_2_get_hash_drf_start_pause(data)                        ((0x00000200&(data))>>9)
#define  LZMA_LZMA_MBIST_2_get_hash_drf_test_resume(data)                        ((0x00000100&(data))>>8)
#define  LZMA_LZMA_MBIST_2_get_hash_bist_fail_0(data)                            ((0x00000080&(data))>>7)
#define  LZMA_LZMA_MBIST_2_get_hash_drf_bist_fail_0(data)                        ((0x00000040&(data))>>6)
#define  LZMA_LZMA_MBIST_2_get_hash_ls(data)                                     ((0x00000020&(data))>>5)
#define  LZMA_LZMA_MBIST_2_get_hash_rme(data)                                    ((0x00000010&(data))>>4)
#define  LZMA_LZMA_MBIST_2_get_hash_rm(data)                                     (0x0000000F&(data))

#define  LZMA_LZMA_BIST_3                                                       0x180680F4
#define  LZMA_LZMA_BIST_3_reg_addr                                               "0xB80680F4"
#define  LZMA_LZMA_BIST_3_reg                                                    0xB80680F4
#define  LZMA_LZMA_BIST_3_inst_addr                                              "0x003C"
#define  set_LZMA_LZMA_BIST_3_reg(data)                                          (*((volatile unsigned int*)LZMA_LZMA_BIST_3_reg)=data)
#define  get_LZMA_LZMA_BIST_3_reg                                                (*((volatile unsigned int*)LZMA_LZMA_BIST_3_reg))
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_bist_done_shift                         (17)
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_drf_bist_done_shift                     (16)
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_bist_mode_shift                         (15)
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_drf_bist_mode_shift                     (14)
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_drf_start_pause_shift                   (13)
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_drf_test_resume_shift                   (12)
#define  LZMA_LZMA_BIST_3_rwdma1_iobuffer_ls_shift                               (11)
#define  LZMA_LZMA_BIST_3_rwdma1_iobuffer_rme_shift                              (10)
#define  LZMA_LZMA_BIST_3_rwdma1_iobuffer_rm_shift                               (6)
#define  LZMA_LZMA_BIST_3_rwdma0_iobuffer_ls_shift                               (5)
#define  LZMA_LZMA_BIST_3_rwdma0_iobuffer_rme_shift                              (4)
#define  LZMA_LZMA_BIST_3_rwdma0_iobuffer_rm_shift                               (0)
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_bist_done_mask                          (0x00020000)
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_drf_bist_done_mask                      (0x00010000)
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_bist_mode_mask                          (0x00008000)
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_drf_bist_mode_mask                      (0x00004000)
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_drf_start_pause_mask                    (0x00002000)
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_drf_test_resume_mask                    (0x00001000)
#define  LZMA_LZMA_BIST_3_rwdma1_iobuffer_ls_mask                                (0x00000800)
#define  LZMA_LZMA_BIST_3_rwdma1_iobuffer_rme_mask                               (0x00000400)
#define  LZMA_LZMA_BIST_3_rwdma1_iobuffer_rm_mask                                (0x000003C0)
#define  LZMA_LZMA_BIST_3_rwdma0_iobuffer_ls_mask                                (0x00000020)
#define  LZMA_LZMA_BIST_3_rwdma0_iobuffer_rme_mask                               (0x00000010)
#define  LZMA_LZMA_BIST_3_rwdma0_iobuffer_rm_mask                                (0x0000000F)
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_bist_done(data)                         (0x00020000&((data)<<17))
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_drf_bist_done(data)                     (0x00010000&((data)<<16))
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_bist_mode(data)                         (0x00008000&((data)<<15))
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_drf_bist_mode(data)                     (0x00004000&((data)<<14))
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_drf_start_pause(data)                   (0x00002000&((data)<<13))
#define  LZMA_LZMA_BIST_3_rwdma_iobuffer_drf_test_resume(data)                   (0x00001000&((data)<<12))
#define  LZMA_LZMA_BIST_3_rwdma1_iobuffer_ls(data)                               (0x00000800&((data)<<11))
#define  LZMA_LZMA_BIST_3_rwdma1_iobuffer_rme(data)                              (0x00000400&((data)<<10))
#define  LZMA_LZMA_BIST_3_rwdma1_iobuffer_rm(data)                               (0x000003C0&((data)<<6))
#define  LZMA_LZMA_BIST_3_rwdma0_iobuffer_ls(data)                               (0x00000020&((data)<<5))
#define  LZMA_LZMA_BIST_3_rwdma0_iobuffer_rme(data)                              (0x00000010&((data)<<4))
#define  LZMA_LZMA_BIST_3_rwdma0_iobuffer_rm(data)                               (0x0000000F&(data))
#define  LZMA_LZMA_BIST_3_get_rwdma_iobuffer_bist_done(data)                     ((0x00020000&(data))>>17)
#define  LZMA_LZMA_BIST_3_get_rwdma_iobuffer_drf_bist_done(data)                 ((0x00010000&(data))>>16)
#define  LZMA_LZMA_BIST_3_get_rwdma_iobuffer_bist_mode(data)                     ((0x00008000&(data))>>15)
#define  LZMA_LZMA_BIST_3_get_rwdma_iobuffer_drf_bist_mode(data)                 ((0x00004000&(data))>>14)
#define  LZMA_LZMA_BIST_3_get_rwdma_iobuffer_drf_start_pause(data)               ((0x00002000&(data))>>13)
#define  LZMA_LZMA_BIST_3_get_rwdma_iobuffer_drf_test_resume(data)               ((0x00001000&(data))>>12)
#define  LZMA_LZMA_BIST_3_get_rwdma1_iobuffer_ls(data)                           ((0x00000800&(data))>>11)
#define  LZMA_LZMA_BIST_3_get_rwdma1_iobuffer_rme(data)                          ((0x00000400&(data))>>10)
#define  LZMA_LZMA_BIST_3_get_rwdma1_iobuffer_rm(data)                           ((0x000003C0&(data))>>6)
#define  LZMA_LZMA_BIST_3_get_rwdma0_iobuffer_ls(data)                           ((0x00000020&(data))>>5)
#define  LZMA_LZMA_BIST_3_get_rwdma0_iobuffer_rme(data)                          ((0x00000010&(data))>>4)
#define  LZMA_LZMA_BIST_3_get_rwdma0_iobuffer_rm(data)                           (0x0000000F&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======LZMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_0_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_0_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rptr:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_0_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wptr:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_0_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src:28;
        RBus_UInt32  cmd_error:1;
        RBus_UInt32  hw_done:1;
        RBus_UInt32  decode_mode:1;
        RBus_UInt32  encode_mode:1;
    };
}lzma_cmd_0_src_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dec:28;
        RBus_UInt32  hw_done_count:4;
    };
}lzma_cmd_0_dec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_crc:16;
        RBus_UInt32  res1:2;
        RBus_UInt32  size_over4k:1;
        RBus_UInt32  comp_size:13;
    };
}lzma_cmd_0_info_encode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  golden_crc_lsb:8;
        RBus_UInt32  decoder_error:1;
        RBus_UInt32  decode_size:23;
    };
}lzma_cmd_0_info_decode_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  golden_crc_msb:8;
        RBus_UInt32  decode_crc_error:1;
        RBus_UInt32  encode_size_decode:23;
    };
}lzma_cmd_0_info_decode_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_1_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_1_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rptr:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_1_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wptr:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_1_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src:28;
        RBus_UInt32  cmd_error:1;
        RBus_UInt32  hw_done:1;
        RBus_UInt32  decode_mode:1;
        RBus_UInt32  encode_mode:1;
    };
}lzma_cmd_1_src_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dec:28;
        RBus_UInt32  hw_done_count:4;
    };
}lzma_cmd_1_dec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_crc:16;
        RBus_UInt32  res1:2;
        RBus_UInt32  size_over4k:1;
        RBus_UInt32  comp_size:13;
    };
}lzma_cmd_1_info_encode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  golden_crc_lsb:8;
        RBus_UInt32  decoder_error:1;
        RBus_UInt32  decode_size:23;
    };
}lzma_cmd_1_info_decode_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  golden_crc_msb:8;
        RBus_UInt32  decode_crc_error:1;
        RBus_UInt32  encode_size_decode:23;
    };
}lzma_cmd_1_info_decode_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_2_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_2_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rptr:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_2_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wptr:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_2_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src:28;
        RBus_UInt32  cmd_error:1;
        RBus_UInt32  hw_done:1;
        RBus_UInt32  decode_mode:1;
        RBus_UInt32  encode_mode:1;
    };
}lzma_cmd_2_src_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dec:28;
        RBus_UInt32  hw_done_count:4;
    };
}lzma_cmd_2_dec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_crc:16;
        RBus_UInt32  res1:2;
        RBus_UInt32  size_over4k:1;
        RBus_UInt32  comp_size:13;
    };
}lzma_cmd_2_info_encode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  golden_crc_lsb:8;
        RBus_UInt32  decoder_error:1;
        RBus_UInt32  decode_size:23;
    };
}lzma_cmd_2_info_decode_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  golden_crc_msb:8;
        RBus_UInt32  decode_crc_error:1;
        RBus_UInt32  encode_size_decode:23;
    };
}lzma_cmd_2_info_decode_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  base:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_3_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  limit:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_3_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rptr:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_3_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  wptr:28;
        RBus_UInt32  res1:4;
    };
}lzma_cmd_3_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  src:28;
        RBus_UInt32  cmd_error:1;
        RBus_UInt32  hw_done:1;
        RBus_UInt32  decode_mode:1;
        RBus_UInt32  encode_mode:1;
    };
}lzma_cmd_3_src_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dec:28;
        RBus_UInt32  hw_done_count:4;
    };
}lzma_cmd_3_dec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_crc:16;
        RBus_UInt32  res1:2;
        RBus_UInt32  size_over4k:1;
        RBus_UInt32  comp_size:13;
    };
}lzma_cmd_3_info_encode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  golden_crc_lsb:8;
        RBus_UInt32  decoder_error:1;
        RBus_UInt32  decode_size:23;
    };
}lzma_cmd_3_info_decode_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  golden_crc_msb:8;
        RBus_UInt32  decode_crc_error:1;
        RBus_UInt32  encode_size_decode:23;
    };
}lzma_cmd_3_info_decode_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cut_value:6;
        RBus_UInt32  busy:1;
        RBus_UInt32  dma_soft_rst:1;
        RBus_UInt32  write_en_11:1;
        RBus_UInt32  data_swap_3:1;
        RBus_UInt32  write_en_10:1;
        RBus_UInt32  cmd_swap_3:1;
        RBus_UInt32  write_en_9:1;
        RBus_UInt32  go_3:1;
        RBus_UInt32  write_en_8:1;
        RBus_UInt32  data_swap_2:1;
        RBus_UInt32  write_en_7:1;
        RBus_UInt32  cmd_swap_2:1;
        RBus_UInt32  write_en_6:1;
        RBus_UInt32  go_2:1;
        RBus_UInt32  write_en_5:1;
        RBus_UInt32  data_swap_1:1;
        RBus_UInt32  write_en_4:1;
        RBus_UInt32  cmd_swap_1:1;
        RBus_UInt32  write_en_3:1;
        RBus_UInt32  go_1:1;
        RBus_UInt32  write_en_2:1;
        RBus_UInt32  data_swap_0:1;
        RBus_UInt32  write_en_1:1;
        RBus_UInt32  cmd_swap_0:1;
        RBus_UInt32  write_en_0:1;
        RBus_UInt32  go_0:1;
    };
}lzma_cmd_go_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hw_done_en:1;
        RBus_UInt32  cmd_register_mode:1;
        RBus_UInt32  d_dist_err_en:1;
        RBus_UInt32  d_dist_err:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  d_error_en:1;
        RBus_UInt32  d_error:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  d_size_err_en:1;
        RBus_UInt32  d_size_err:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  e_size_err_en:1;
        RBus_UInt32  e_size_err:1;
        RBus_UInt32  res4:3;
        RBus_UInt32  cmd_empty_en:1;
        RBus_UInt32  cmd_3_empty:1;
        RBus_UInt32  cmd_2_empty:1;
        RBus_UInt32  cmd_1_empty:1;
        RBus_UInt32  cmd_0_empty:1;
        RBus_UInt32  res5:2;
        RBus_UInt32  cut_value1_en:1;
        RBus_UInt32  cmd_err_en:1;
        RBus_UInt32  cmd_3_err:1;
        RBus_UInt32  cmd_2_err:1;
        RBus_UInt32  cmd_1_err:1;
        RBus_UInt32  cmd_0_err:1;
    };
}lzma_int_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  comp_size_sum:32;
    };
}lzma_lzma_e_size_sum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_size_sum:32;
    };
}lzma_lzma_d_size_sum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_cycle_sum:32;
    };
}lzma_lzma_e_cycle_sum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decode_cycle_sum:32;
    };
}lzma_lzma_d_cycle_sum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_cmd_num:32;
    };
}lzma_lzma_e_cmd_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decode_cmd_num:32;
    };
}lzma_lzma_d_cmd_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}lzma_lzma_dma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}lzma_lzma_dma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  data_bust_length:2;
        RBus_UInt32  cmd_bust_length:2;
        RBus_UInt32  dma_8byte_swap:1;
        RBus_UInt32  dma_4byte_swap:1;
        RBus_UInt32  dma_2byte_swap:1;
        RBus_UInt32  dma_1byte_swap:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  max_outstanding:2;
        RBus_UInt32  res3:7;
        RBus_UInt32  dma_force_all_rst:1;
    };
}lzma_lzma_dma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  dma_data_water:7;
        RBus_UInt32  res3:5;
        RBus_UInt32  cur_outstanding:3;
        RBus_UInt32  res4:3;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}lzma_lzma_dma_rd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_num_error:1;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  selected_bl:7;
    };
}lzma_lzma_dma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}lzma_lzma_dma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_up_limit:28;
        RBus_UInt32  res1:4;
    };
}lzma_lzma_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_low_limit:28;
        RBus_UInt32  res1:4;
    };
}lzma_lzma_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  data_bust_length:2;
        RBus_UInt32  dma_8byte_swap:1;
        RBus_UInt32  dma_4byte_swap:1;
        RBus_UInt32  dma_2byte_swap:1;
        RBus_UInt32  dma_1byte_swap:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  max_outstanding:2;
        RBus_UInt32  res3:7;
        RBus_UInt32  force_all_rst:1;
    };
}lzma_lzma_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:1;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  dma_data_water:7;
        RBus_UInt32  res3:5;
        RBus_UInt32  cur_outstanding:3;
        RBus_UInt32  res4:3;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  data_fifo_underflow_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  zero_length_err:1;
    };
}lzma_lzma_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  ack_num_error:1;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res3:1;
        RBus_UInt32  selected_bl:7;
    };
}lzma_lzma_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_addr:28;
        RBus_UInt32  res1:2;
        RBus_UInt32  addr_bl_sel:2;
    };
}lzma_lzma_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  lzma_over_4k_eco:1;
        RBus_UInt32  lzma_4k_sram_ready_eco:1;
        RBus_UInt32  lzma_wdma_fifo_empty_eco:1;
        RBus_UInt32  shift_buffer_over3_eco:1;
        RBus_UInt32  cmd_write_bak_eco:1;
        RBus_UInt32  lzma_last_data_finish_eco:1;
        RBus_UInt32  lzma_fm_sram_ready_eco:1;
        RBus_UInt32  lzma_fm_pending_flag:1;
        RBus_UInt32  dummy180680e4_23_0:24;
    };
}lzma_lzma_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  iobuffer_bist_done:1;
        RBus_UInt32  iobuffer_drf_bist_done:1;
        RBus_UInt32  iobuffer_bist_mode:1;
        RBus_UInt32  iobuffer_drf_bist_mode:1;
        RBus_UInt32  iobuffer_drf_start_pause:1;
        RBus_UInt32  iobuffer_drf_test_resume:1;
        RBus_UInt32  iobuffer_ls:1;
        RBus_UInt32  iobuffer_rme:1;
        RBus_UInt32  iobuffer_rm:4;
        RBus_UInt32  prob_bist_done:1;
        RBus_UInt32  prob_drf_bist_done:1;
        RBus_UInt32  prob_bist_mode:1;
        RBus_UInt32  prob_drf_bist_mode:1;
        RBus_UInt32  prob_drf_start_pause:1;
        RBus_UInt32  prob_drf_test_resume:1;
        RBus_UInt32  prob_ls:1;
        RBus_UInt32  prob_rme:1;
        RBus_UInt32  prob_rm:4;
    };
}lzma_lzma_bist_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:12;
        RBus_UInt32  iobuffer_bist_fail_5:1;
        RBus_UInt32  iobuffer_drf_bist_fail_5:1;
        RBus_UInt32  iobuffer_bist_fail_4:1;
        RBus_UInt32  iobuffer_drf_bist_fail_4:1;
        RBus_UInt32  iobuffer_bist_fail_3:1;
        RBus_UInt32  iobuffer_drf_bist_fail_3:1;
        RBus_UInt32  iobuffer_bist_fail_2:1;
        RBus_UInt32  iobuffer_drf_bist_fail_2:1;
        RBus_UInt32  iobuffer_bist_fail_1:1;
        RBus_UInt32  iobuffer_drf_bist_fail_1:1;
        RBus_UInt32  iobuffer_bist_fail_0:1;
        RBus_UInt32  iobuffer_drf_bist_fail_0:1;
        RBus_UInt32  res2:2;
        RBus_UInt32  prob_bist_fail_2:1;
        RBus_UInt32  prob_drf_bist_fail_2:1;
        RBus_UInt32  prob_bist_fail_1:1;
        RBus_UInt32  prob_drf_bist_fail_1:1;
        RBus_UInt32  prob_bist_fail_0:1;
        RBus_UInt32  prob_drf_bist_fail_0:1;
    };
}lzma_lzma_mbist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:2;
        RBus_UInt32  son_bist_done:1;
        RBus_UInt32  son_drf_bist_done:1;
        RBus_UInt32  son_bist_mode:1;
        RBus_UInt32  son_drf_bist_mode:1;
        RBus_UInt32  son_drf_start_pause:1;
        RBus_UInt32  son_drf_test_resume:1;
        RBus_UInt32  son_bist_fail_0:1;
        RBus_UInt32  son_drf_bist_fail_0:1;
        RBus_UInt32  son_bist_fail_1:1;
        RBus_UInt32  son_drf_bist_fail_1:1;
        RBus_UInt32  son_ls:1;
        RBus_UInt32  son_rme:1;
        RBus_UInt32  son_rm:4;
        RBus_UInt32  hash_bist_done:1;
        RBus_UInt32  hash_drf_bist_done:1;
        RBus_UInt32  hash_bist_mode:1;
        RBus_UInt32  hash_drf_bist_mode:1;
        RBus_UInt32  hash_drf_start_pause:1;
        RBus_UInt32  hash_drf_test_resume:1;
        RBus_UInt32  hash_bist_fail_0:1;
        RBus_UInt32  hash_drf_bist_fail_0:1;
        RBus_UInt32  hash_ls:1;
        RBus_UInt32  hash_rme:1;
        RBus_UInt32  hash_rm:4;
    };
}lzma_lzma_mbist_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:14;
        RBus_UInt32  rwdma_iobuffer_bist_done:1;
        RBus_UInt32  rwdma_iobuffer_drf_bist_done:1;
        RBus_UInt32  rwdma_iobuffer_bist_mode:1;
        RBus_UInt32  rwdma_iobuffer_drf_bist_mode:1;
        RBus_UInt32  rwdma_iobuffer_drf_start_pause:1;
        RBus_UInt32  rwdma_iobuffer_drf_test_resume:1;
        RBus_UInt32  rwdma1_iobuffer_ls:1;
        RBus_UInt32  rwdma1_iobuffer_rme:1;
        RBus_UInt32  rwdma1_iobuffer_rm:4;
        RBus_UInt32  rwdma0_iobuffer_ls:1;
        RBus_UInt32  rwdma0_iobuffer_rme:1;
        RBus_UInt32  rwdma0_iobuffer_rm:4;
    };
}lzma_lzma_bist_3_RBUS;

#else //apply LITTLE_ENDIAN

//======LZMA register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  base:28;
    };
}lzma_cmd_0_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  limit:28;
    };
}lzma_cmd_0_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  rptr:28;
    };
}lzma_cmd_0_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  wptr:28;
    };
}lzma_cmd_0_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_mode:1;
        RBus_UInt32  decode_mode:1;
        RBus_UInt32  hw_done:1;
        RBus_UInt32  cmd_error:1;
        RBus_UInt32  src:28;
    };
}lzma_cmd_0_src_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hw_done_count:4;
        RBus_UInt32  dec:28;
    };
}lzma_cmd_0_dec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  comp_size:13;
        RBus_UInt32  size_over4k:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  encode_crc:16;
    };
}lzma_cmd_0_info_encode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decode_size:23;
        RBus_UInt32  decoder_error:1;
        RBus_UInt32  golden_crc_lsb:8;
    };
}lzma_cmd_0_info_decode_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_size_decode:23;
        RBus_UInt32  decode_crc_error:1;
        RBus_UInt32  golden_crc_msb:8;
    };
}lzma_cmd_0_info_decode_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  base:28;
    };
}lzma_cmd_1_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  limit:28;
    };
}lzma_cmd_1_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  rptr:28;
    };
}lzma_cmd_1_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  wptr:28;
    };
}lzma_cmd_1_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_mode:1;
        RBus_UInt32  decode_mode:1;
        RBus_UInt32  hw_done:1;
        RBus_UInt32  cmd_error:1;
        RBus_UInt32  src:28;
    };
}lzma_cmd_1_src_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hw_done_count:4;
        RBus_UInt32  dec:28;
    };
}lzma_cmd_1_dec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  comp_size:13;
        RBus_UInt32  size_over4k:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  encode_crc:16;
    };
}lzma_cmd_1_info_encode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decode_size:23;
        RBus_UInt32  decoder_error:1;
        RBus_UInt32  golden_crc_lsb:8;
    };
}lzma_cmd_1_info_decode_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_size_decode:23;
        RBus_UInt32  decode_crc_error:1;
        RBus_UInt32  golden_crc_msb:8;
    };
}lzma_cmd_1_info_decode_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  base:28;
    };
}lzma_cmd_2_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  limit:28;
    };
}lzma_cmd_2_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  rptr:28;
    };
}lzma_cmd_2_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  wptr:28;
    };
}lzma_cmd_2_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_mode:1;
        RBus_UInt32  decode_mode:1;
        RBus_UInt32  hw_done:1;
        RBus_UInt32  cmd_error:1;
        RBus_UInt32  src:28;
    };
}lzma_cmd_2_src_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hw_done_count:4;
        RBus_UInt32  dec:28;
    };
}lzma_cmd_2_dec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  comp_size:13;
        RBus_UInt32  size_over4k:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  encode_crc:16;
    };
}lzma_cmd_2_info_encode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decode_size:23;
        RBus_UInt32  decoder_error:1;
        RBus_UInt32  golden_crc_lsb:8;
    };
}lzma_cmd_2_info_decode_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_size_decode:23;
        RBus_UInt32  decode_crc_error:1;
        RBus_UInt32  golden_crc_msb:8;
    };
}lzma_cmd_2_info_decode_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  base:28;
    };
}lzma_cmd_3_base_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  limit:28;
    };
}lzma_cmd_3_limit_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  rptr:28;
    };
}lzma_cmd_3_rptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  wptr:28;
    };
}lzma_cmd_3_wptr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_mode:1;
        RBus_UInt32  decode_mode:1;
        RBus_UInt32  hw_done:1;
        RBus_UInt32  cmd_error:1;
        RBus_UInt32  src:28;
    };
}lzma_cmd_3_src_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hw_done_count:4;
        RBus_UInt32  dec:28;
    };
}lzma_cmd_3_dec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  comp_size:13;
        RBus_UInt32  size_over4k:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  encode_crc:16;
    };
}lzma_cmd_3_info_encode_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decode_size:23;
        RBus_UInt32  decoder_error:1;
        RBus_UInt32  golden_crc_lsb:8;
    };
}lzma_cmd_3_info_decode_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_size_decode:23;
        RBus_UInt32  decode_crc_error:1;
        RBus_UInt32  golden_crc_msb:8;
    };
}lzma_cmd_3_info_decode_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  go_0:1;
        RBus_UInt32  write_en_0:1;
        RBus_UInt32  cmd_swap_0:1;
        RBus_UInt32  write_en_1:1;
        RBus_UInt32  data_swap_0:1;
        RBus_UInt32  write_en_2:1;
        RBus_UInt32  go_1:1;
        RBus_UInt32  write_en_3:1;
        RBus_UInt32  cmd_swap_1:1;
        RBus_UInt32  write_en_4:1;
        RBus_UInt32  data_swap_1:1;
        RBus_UInt32  write_en_5:1;
        RBus_UInt32  go_2:1;
        RBus_UInt32  write_en_6:1;
        RBus_UInt32  cmd_swap_2:1;
        RBus_UInt32  write_en_7:1;
        RBus_UInt32  data_swap_2:1;
        RBus_UInt32  write_en_8:1;
        RBus_UInt32  go_3:1;
        RBus_UInt32  write_en_9:1;
        RBus_UInt32  cmd_swap_3:1;
        RBus_UInt32  write_en_10:1;
        RBus_UInt32  data_swap_3:1;
        RBus_UInt32  write_en_11:1;
        RBus_UInt32  dma_soft_rst:1;
        RBus_UInt32  busy:1;
        RBus_UInt32  cut_value:6;
    };
}lzma_cmd_go_swap_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cmd_0_err:1;
        RBus_UInt32  cmd_1_err:1;
        RBus_UInt32  cmd_2_err:1;
        RBus_UInt32  cmd_3_err:1;
        RBus_UInt32  cmd_err_en:1;
        RBus_UInt32  cut_value1_en:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  cmd_0_empty:1;
        RBus_UInt32  cmd_1_empty:1;
        RBus_UInt32  cmd_2_empty:1;
        RBus_UInt32  cmd_3_empty:1;
        RBus_UInt32  cmd_empty_en:1;
        RBus_UInt32  res2:3;
        RBus_UInt32  e_size_err:1;
        RBus_UInt32  e_size_err_en:1;
        RBus_UInt32  res3:2;
        RBus_UInt32  d_size_err:1;
        RBus_UInt32  d_size_err_en:1;
        RBus_UInt32  res4:2;
        RBus_UInt32  d_error:1;
        RBus_UInt32  d_error_en:1;
        RBus_UInt32  res5:2;
        RBus_UInt32  d_dist_err:1;
        RBus_UInt32  d_dist_err_en:1;
        RBus_UInt32  cmd_register_mode:1;
        RBus_UInt32  hw_done_en:1;
    };
}lzma_int_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  comp_size_sum:32;
    };
}lzma_lzma_e_size_sum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decomp_size_sum:32;
    };
}lzma_lzma_d_size_sum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_cycle_sum:32;
    };
}lzma_lzma_e_cycle_sum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decode_cycle_sum:32;
    };
}lzma_lzma_d_cycle_sum_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  encode_cmd_num:32;
    };
}lzma_lzma_e_cmd_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  decode_cmd_num:32;
    };
}lzma_lzma_d_cmd_num_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}lzma_lzma_dma_rd_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}lzma_lzma_dma_rd_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dma_force_all_rst:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  max_outstanding:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  dma_1byte_swap:1;
        RBus_UInt32  dma_2byte_swap:1;
        RBus_UInt32  dma_4byte_swap:1;
        RBus_UInt32  dma_8byte_swap:1;
        RBus_UInt32  cmd_bust_length:2;
        RBus_UInt32  data_bust_length:2;
        RBus_UInt32  res3:12;
    };
}lzma_lzma_dma_rd_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_overflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cur_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  dma_data_water:7;
        RBus_UInt32  res3:5;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}lzma_lzma_dma_rd_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  ack_num_error:1;
    };
}lzma_lzma_dma_rd_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}lzma_lzma_dma_rd_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_up_limit:28;
    };
}lzma_lzma_dma_wr_rule_check_up_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:4;
        RBus_UInt32  dma_low_limit:28;
    };
}lzma_lzma_dma_wr_rule_check_low_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  force_all_rst:1;
        RBus_UInt32  res1:7;
        RBus_UInt32  max_outstanding:2;
        RBus_UInt32  res2:2;
        RBus_UInt32  dma_1byte_swap:1;
        RBus_UInt32  dma_2byte_swap:1;
        RBus_UInt32  dma_4byte_swap:1;
        RBus_UInt32  dma_8byte_swap:1;
        RBus_UInt32  data_bust_length:2;
        RBus_UInt32  res3:14;
    };
}lzma_lzma_dma_wr_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  zero_length_err:1;
        RBus_UInt32  exceed_range_err:1;
        RBus_UInt32  data_fifo_underflow_err:1;
        RBus_UInt32  soft_rst_with_data_left:1;
        RBus_UInt32  soft_rst_before_cmd_finish:1;
        RBus_UInt32  res1:3;
        RBus_UInt32  cur_outstanding:3;
        RBus_UInt32  res2:5;
        RBus_UInt32  dma_data_water:7;
        RBus_UInt32  res3:5;
        RBus_UInt32  dma_cmd_water:3;
        RBus_UInt32  res4:1;
    };
}lzma_lzma_dma_wr_status_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  selected_bl:7;
        RBus_UInt32  res1:1;
        RBus_UInt32  last_ack_num:7;
        RBus_UInt32  res2:1;
        RBus_UInt32  target_ack_num:7;
        RBus_UInt32  res3:7;
        RBus_UInt32  last_no_ack_error:1;
        RBus_UInt32  ack_num_error:1;
    };
}lzma_lzma_dma_wr_status1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  addr_bl_sel:2;
        RBus_UInt32  res1:2;
        RBus_UInt32  selected_addr:28;
    };
}lzma_lzma_dma_wr_status2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  dummy180680e4_23_0:24;
        RBus_UInt32  lzma_fm_pending_flag:1;
        RBus_UInt32  lzma_fm_sram_ready_eco:1;
        RBus_UInt32  lzma_last_data_finish_eco:1;
        RBus_UInt32  cmd_write_bak_eco:1;
        RBus_UInt32  shift_buffer_over3_eco:1;
        RBus_UInt32  lzma_wdma_fifo_empty_eco:1;
        RBus_UInt32  lzma_4k_sram_ready_eco:1;
        RBus_UInt32  lzma_over_4k_eco:1;
    };
}lzma_lzma_dummy_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prob_rm:4;
        RBus_UInt32  prob_rme:1;
        RBus_UInt32  prob_ls:1;
        RBus_UInt32  prob_drf_test_resume:1;
        RBus_UInt32  prob_drf_start_pause:1;
        RBus_UInt32  prob_drf_bist_mode:1;
        RBus_UInt32  prob_bist_mode:1;
        RBus_UInt32  prob_drf_bist_done:1;
        RBus_UInt32  prob_bist_done:1;
        RBus_UInt32  iobuffer_rm:4;
        RBus_UInt32  iobuffer_rme:1;
        RBus_UInt32  iobuffer_ls:1;
        RBus_UInt32  iobuffer_drf_test_resume:1;
        RBus_UInt32  iobuffer_drf_start_pause:1;
        RBus_UInt32  iobuffer_drf_bist_mode:1;
        RBus_UInt32  iobuffer_bist_mode:1;
        RBus_UInt32  iobuffer_drf_bist_done:1;
        RBus_UInt32  iobuffer_bist_done:1;
        RBus_UInt32  res1:8;
    };
}lzma_lzma_bist_0_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  prob_drf_bist_fail_0:1;
        RBus_UInt32  prob_bist_fail_0:1;
        RBus_UInt32  prob_drf_bist_fail_1:1;
        RBus_UInt32  prob_bist_fail_1:1;
        RBus_UInt32  prob_drf_bist_fail_2:1;
        RBus_UInt32  prob_bist_fail_2:1;
        RBus_UInt32  res1:2;
        RBus_UInt32  iobuffer_drf_bist_fail_0:1;
        RBus_UInt32  iobuffer_bist_fail_0:1;
        RBus_UInt32  iobuffer_drf_bist_fail_1:1;
        RBus_UInt32  iobuffer_bist_fail_1:1;
        RBus_UInt32  iobuffer_drf_bist_fail_2:1;
        RBus_UInt32  iobuffer_bist_fail_2:1;
        RBus_UInt32  iobuffer_drf_bist_fail_3:1;
        RBus_UInt32  iobuffer_bist_fail_3:1;
        RBus_UInt32  iobuffer_drf_bist_fail_4:1;
        RBus_UInt32  iobuffer_bist_fail_4:1;
        RBus_UInt32  iobuffer_drf_bist_fail_5:1;
        RBus_UInt32  iobuffer_bist_fail_5:1;
        RBus_UInt32  res2:12;
    };
}lzma_lzma_mbist_1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hash_rm:4;
        RBus_UInt32  hash_rme:1;
        RBus_UInt32  hash_ls:1;
        RBus_UInt32  hash_drf_bist_fail_0:1;
        RBus_UInt32  hash_bist_fail_0:1;
        RBus_UInt32  hash_drf_test_resume:1;
        RBus_UInt32  hash_drf_start_pause:1;
        RBus_UInt32  hash_drf_bist_mode:1;
        RBus_UInt32  hash_bist_mode:1;
        RBus_UInt32  hash_drf_bist_done:1;
        RBus_UInt32  hash_bist_done:1;
        RBus_UInt32  son_rm:4;
        RBus_UInt32  son_rme:1;
        RBus_UInt32  son_ls:1;
        RBus_UInt32  son_drf_bist_fail_1:1;
        RBus_UInt32  son_bist_fail_1:1;
        RBus_UInt32  son_drf_bist_fail_0:1;
        RBus_UInt32  son_bist_fail_0:1;
        RBus_UInt32  son_drf_test_resume:1;
        RBus_UInt32  son_drf_start_pause:1;
        RBus_UInt32  son_drf_bist_mode:1;
        RBus_UInt32  son_bist_mode:1;
        RBus_UInt32  son_drf_bist_done:1;
        RBus_UInt32  son_bist_done:1;
        RBus_UInt32  res1:2;
    };
}lzma_lzma_mbist_2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rwdma0_iobuffer_rm:4;
        RBus_UInt32  rwdma0_iobuffer_rme:1;
        RBus_UInt32  rwdma0_iobuffer_ls:1;
        RBus_UInt32  rwdma1_iobuffer_rm:4;
        RBus_UInt32  rwdma1_iobuffer_rme:1;
        RBus_UInt32  rwdma1_iobuffer_ls:1;
        RBus_UInt32  rwdma_iobuffer_drf_test_resume:1;
        RBus_UInt32  rwdma_iobuffer_drf_start_pause:1;
        RBus_UInt32  rwdma_iobuffer_drf_bist_mode:1;
        RBus_UInt32  rwdma_iobuffer_bist_mode:1;
        RBus_UInt32  rwdma_iobuffer_drf_bist_done:1;
        RBus_UInt32  rwdma_iobuffer_bist_done:1;
        RBus_UInt32  res1:14;
    };
}lzma_lzma_bist_3_RBUS;




#endif 


#endif 
