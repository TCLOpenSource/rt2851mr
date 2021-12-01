/**
* @file Merlin5-DesignSpec-MISC_TIMER
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_TIMER_REG_H_
#define _RBUS_TIMER_REG_H_

#include "rbus_types.h"



//  TIMER Register Address
#define  TIMER_TC0TVR                                                           0x1801B600
#define  TIMER_TC0TVR_reg_addr                                                   "0xB801B600"
#define  TIMER_TC0TVR_reg                                                        0xB801B600
#define  TIMER_TC0TVR_inst_addr                                                  "0x0000"
#define  set_TIMER_TC0TVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC0TVR_reg)=data)
#define  get_TIMER_TC0TVR_reg                                                    (*((volatile unsigned int*)TIMER_TC0TVR_reg))
#define  TIMER_TC0TVR_tc0tvr_shift                                               (0)
#define  TIMER_TC0TVR_tc0tvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC0TVR_tc0tvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC0TVR_get_tc0tvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC1TVR                                                           0x1801B604
#define  TIMER_TC1TVR_reg_addr                                                   "0xB801B604"
#define  TIMER_TC1TVR_reg                                                        0xB801B604
#define  TIMER_TC1TVR_inst_addr                                                  "0x0001"
#define  set_TIMER_TC1TVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC1TVR_reg)=data)
#define  get_TIMER_TC1TVR_reg                                                    (*((volatile unsigned int*)TIMER_TC1TVR_reg))
#define  TIMER_TC1TVR_tc1tvr_shift                                               (0)
#define  TIMER_TC1TVR_tc1tvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC1TVR_tc1tvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC1TVR_get_tc1tvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC2TVR                                                           0x1801B608
#define  TIMER_TC2TVR_reg_addr                                                   "0xB801B608"
#define  TIMER_TC2TVR_reg                                                        0xB801B608
#define  TIMER_TC2TVR_inst_addr                                                  "0x0002"
#define  set_TIMER_TC2TVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC2TVR_reg)=data)
#define  get_TIMER_TC2TVR_reg                                                    (*((volatile unsigned int*)TIMER_TC2TVR_reg))
#define  TIMER_TC2TVR_tc2tvr_shift                                               (0)
#define  TIMER_TC2TVR_tc2tvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC2TVR_tc2tvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC2TVR_get_tc2tvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC3TVR                                                           0x1801B60C
#define  TIMER_TC3TVR_reg_addr                                                   "0xB801B60C"
#define  TIMER_TC3TVR_reg                                                        0xB801B60C
#define  TIMER_TC3TVR_inst_addr                                                  "0x0003"
#define  set_TIMER_TC3TVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC3TVR_reg)=data)
#define  get_TIMER_TC3TVR_reg                                                    (*((volatile unsigned int*)TIMER_TC3TVR_reg))
#define  TIMER_TC3TVR_tc3tvr_shift                                               (0)
#define  TIMER_TC3TVR_tc3tvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC3TVR_tc3tvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC3TVR_get_tc3tvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC4TVR                                                           0x1801B610
#define  TIMER_TC4TVR_reg_addr                                                   "0xB801B610"
#define  TIMER_TC4TVR_reg                                                        0xB801B610
#define  TIMER_TC4TVR_inst_addr                                                  "0x0004"
#define  set_TIMER_TC4TVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC4TVR_reg)=data)
#define  get_TIMER_TC4TVR_reg                                                    (*((volatile unsigned int*)TIMER_TC4TVR_reg))
#define  TIMER_TC4TVR_tc4tvr_shift                                               (0)
#define  TIMER_TC4TVR_tc4tvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC4TVR_tc4tvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC4TVR_get_tc4tvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC5TVR                                                           0x1801B614
#define  TIMER_TC5TVR_reg_addr                                                   "0xB801B614"
#define  TIMER_TC5TVR_reg                                                        0xB801B614
#define  TIMER_TC5TVR_inst_addr                                                  "0x0005"
#define  set_TIMER_TC5TVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC5TVR_reg)=data)
#define  get_TIMER_TC5TVR_reg                                                    (*((volatile unsigned int*)TIMER_TC5TVR_reg))
#define  TIMER_TC5TVR_tc5tvr_shift                                               (0)
#define  TIMER_TC5TVR_tc5tvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC5TVR_tc5tvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC5TVR_get_tc5tvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC6TVR                                                           0x1801B618
#define  TIMER_TC6TVR_reg_addr                                                   "0xB801B618"
#define  TIMER_TC6TVR_reg                                                        0xB801B618
#define  TIMER_TC6TVR_inst_addr                                                  "0x0006"
#define  set_TIMER_TC6TVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC6TVR_reg)=data)
#define  get_TIMER_TC6TVR_reg                                                    (*((volatile unsigned int*)TIMER_TC6TVR_reg))
#define  TIMER_TC6TVR_tc6tvr_shift                                               (0)
#define  TIMER_TC6TVR_tc6tvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC6TVR_tc6tvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC6TVR_get_tc6tvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC7TVR                                                           0x1801B61C
#define  TIMER_TC7TVR_reg_addr                                                   "0xB801B61C"
#define  TIMER_TC7TVR_reg                                                        0xB801B61C
#define  TIMER_TC7TVR_inst_addr                                                  "0x0007"
#define  set_TIMER_TC7TVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC7TVR_reg)=data)
#define  get_TIMER_TC7TVR_reg                                                    (*((volatile unsigned int*)TIMER_TC7TVR_reg))
#define  TIMER_TC7TVR_tc7tvr_shift                                               (0)
#define  TIMER_TC7TVR_tc7tvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC7TVR_tc7tvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC7TVR_get_tc7tvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC8TVR                                                           0x1801B620
#define  TIMER_TC8TVR_reg_addr                                                   "0xB801B620"
#define  TIMER_TC8TVR_reg                                                        0xB801B620
#define  TIMER_TC8TVR_inst_addr                                                  "0x0008"
#define  set_TIMER_TC8TVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC8TVR_reg)=data)
#define  get_TIMER_TC8TVR_reg                                                    (*((volatile unsigned int*)TIMER_TC8TVR_reg))
#define  TIMER_TC8TVR_tc8tvr_shift                                               (0)
#define  TIMER_TC8TVR_tc8tvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC8TVR_tc8tvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC8TVR_get_tc8tvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC9TVR                                                           0x1801B624
#define  TIMER_TC9TVR_reg_addr                                                   "0xB801B624"
#define  TIMER_TC9TVR_reg                                                        0xB801B624
#define  TIMER_TC9TVR_inst_addr                                                  "0x0009"
#define  set_TIMER_TC9TVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC9TVR_reg)=data)
#define  get_TIMER_TC9TVR_reg                                                    (*((volatile unsigned int*)TIMER_TC9TVR_reg))
#define  TIMER_TC9TVR_tc9tvr_shift                                               (0)
#define  TIMER_TC9TVR_tc9tvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC9TVR_tc9tvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC9TVR_get_tc9tvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC10TVR                                                          0x1801B628
#define  TIMER_TC10TVR_reg_addr                                                  "0xB801B628"
#define  TIMER_TC10TVR_reg                                                       0xB801B628
#define  TIMER_TC10TVR_inst_addr                                                 "0x000A"
#define  set_TIMER_TC10TVR_reg(data)                                             (*((volatile unsigned int*)TIMER_TC10TVR_reg)=data)
#define  get_TIMER_TC10TVR_reg                                                   (*((volatile unsigned int*)TIMER_TC10TVR_reg))
#define  TIMER_TC10TVR_tc10tvr_shift                                             (0)
#define  TIMER_TC10TVR_tc10tvr_mask                                              (0xFFFFFFFF)
#define  TIMER_TC10TVR_tc10tvr(data)                                             (0xFFFFFFFF&(data))
#define  TIMER_TC10TVR_get_tc10tvr(data)                                         (0xFFFFFFFF&(data))

#define  TIMER_TC11TVR                                                          0x1801B62C
#define  TIMER_TC11TVR_reg_addr                                                  "0xB801B62C"
#define  TIMER_TC11TVR_reg                                                       0xB801B62C
#define  TIMER_TC11TVR_inst_addr                                                 "0x000B"
#define  set_TIMER_TC11TVR_reg(data)                                             (*((volatile unsigned int*)TIMER_TC11TVR_reg)=data)
#define  get_TIMER_TC11TVR_reg                                                   (*((volatile unsigned int*)TIMER_TC11TVR_reg))
#define  TIMER_TC11TVR_tc11tvr_shift                                             (0)
#define  TIMER_TC11TVR_tc11tvr_mask                                              (0xFFFFFFFF)
#define  TIMER_TC11TVR_tc11tvr(data)                                             (0xFFFFFFFF&(data))
#define  TIMER_TC11TVR_get_tc11tvr(data)                                         (0xFFFFFFFF&(data))

#define  TIMER_TC0CVR                                                           0x1801B630
#define  TIMER_TC0CVR_reg_addr                                                   "0xB801B630"
#define  TIMER_TC0CVR_reg                                                        0xB801B630
#define  TIMER_TC0CVR_inst_addr                                                  "0x000C"
#define  set_TIMER_TC0CVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC0CVR_reg)=data)
#define  get_TIMER_TC0CVR_reg                                                    (*((volatile unsigned int*)TIMER_TC0CVR_reg))
#define  TIMER_TC0CVR_tc0cvr_shift                                               (0)
#define  TIMER_TC0CVR_tc0cvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC0CVR_tc0cvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC0CVR_get_tc0cvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC1CVR                                                           0x1801B634
#define  TIMER_TC1CVR_reg_addr                                                   "0xB801B634"
#define  TIMER_TC1CVR_reg                                                        0xB801B634
#define  TIMER_TC1CVR_inst_addr                                                  "0x000D"
#define  set_TIMER_TC1CVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC1CVR_reg)=data)
#define  get_TIMER_TC1CVR_reg                                                    (*((volatile unsigned int*)TIMER_TC1CVR_reg))
#define  TIMER_TC1CVR_tc1cvr_shift                                               (0)
#define  TIMER_TC1CVR_tc1cvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC1CVR_tc1cvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC1CVR_get_tc1cvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC2CVR                                                           0x1801B638
#define  TIMER_TC2CVR_reg_addr                                                   "0xB801B638"
#define  TIMER_TC2CVR_reg                                                        0xB801B638
#define  TIMER_TC2CVR_inst_addr                                                  "0x000E"
#define  set_TIMER_TC2CVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC2CVR_reg)=data)
#define  get_TIMER_TC2CVR_reg                                                    (*((volatile unsigned int*)TIMER_TC2CVR_reg))
#define  TIMER_TC2CVR_tc2vr_shift                                                (0)
#define  TIMER_TC2CVR_tc2vr_mask                                                 (0xFFFFFFFF)
#define  TIMER_TC2CVR_tc2vr(data)                                                (0xFFFFFFFF&(data))
#define  TIMER_TC2CVR_get_tc2vr(data)                                            (0xFFFFFFFF&(data))

#define  TIMER_TC3CVR                                                           0x1801B63C
#define  TIMER_TC3CVR_reg_addr                                                   "0xB801B63C"
#define  TIMER_TC3CVR_reg                                                        0xB801B63C
#define  TIMER_TC3CVR_inst_addr                                                  "0x000F"
#define  set_TIMER_TC3CVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC3CVR_reg)=data)
#define  get_TIMER_TC3CVR_reg                                                    (*((volatile unsigned int*)TIMER_TC3CVR_reg))
#define  TIMER_TC3CVR_tc3cvr_shift                                               (0)
#define  TIMER_TC3CVR_tc3cvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC3CVR_tc3cvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC3CVR_get_tc3cvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC4CVR                                                           0x1801B640
#define  TIMER_TC4CVR_reg_addr                                                   "0xB801B640"
#define  TIMER_TC4CVR_reg                                                        0xB801B640
#define  TIMER_TC4CVR_inst_addr                                                  "0x0010"
#define  set_TIMER_TC4CVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC4CVR_reg)=data)
#define  get_TIMER_TC4CVR_reg                                                    (*((volatile unsigned int*)TIMER_TC4CVR_reg))
#define  TIMER_TC4CVR_tc4cvr_shift                                               (0)
#define  TIMER_TC4CVR_tc4cvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC4CVR_tc4cvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC4CVR_get_tc4cvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC5CVR                                                           0x1801B644
#define  TIMER_TC5CVR_reg_addr                                                   "0xB801B644"
#define  TIMER_TC5CVR_reg                                                        0xB801B644
#define  TIMER_TC5CVR_inst_addr                                                  "0x0011"
#define  set_TIMER_TC5CVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC5CVR_reg)=data)
#define  get_TIMER_TC5CVR_reg                                                    (*((volatile unsigned int*)TIMER_TC5CVR_reg))
#define  TIMER_TC5CVR_tc5vr_shift                                                (0)
#define  TIMER_TC5CVR_tc5vr_mask                                                 (0xFFFFFFFF)
#define  TIMER_TC5CVR_tc5vr(data)                                                (0xFFFFFFFF&(data))
#define  TIMER_TC5CVR_get_tc5vr(data)                                            (0xFFFFFFFF&(data))

#define  TIMER_TC6CVR                                                           0x1801B648
#define  TIMER_TC6CVR_reg_addr                                                   "0xB801B648"
#define  TIMER_TC6CVR_reg                                                        0xB801B648
#define  TIMER_TC6CVR_inst_addr                                                  "0x0012"
#define  set_TIMER_TC6CVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC6CVR_reg)=data)
#define  get_TIMER_TC6CVR_reg                                                    (*((volatile unsigned int*)TIMER_TC6CVR_reg))
#define  TIMER_TC6CVR_tc6cvr_shift                                               (0)
#define  TIMER_TC6CVR_tc6cvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC6CVR_tc6cvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC6CVR_get_tc6cvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC7CVR                                                           0x1801B64C
#define  TIMER_TC7CVR_reg_addr                                                   "0xB801B64C"
#define  TIMER_TC7CVR_reg                                                        0xB801B64C
#define  TIMER_TC7CVR_inst_addr                                                  "0x0013"
#define  set_TIMER_TC7CVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC7CVR_reg)=data)
#define  get_TIMER_TC7CVR_reg                                                    (*((volatile unsigned int*)TIMER_TC7CVR_reg))
#define  TIMER_TC7CVR_tc7cvr_shift                                               (0)
#define  TIMER_TC7CVR_tc7cvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC7CVR_tc7cvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC7CVR_get_tc7cvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC8CVR                                                           0x1801B650
#define  TIMER_TC8CVR_reg_addr                                                   "0xB801B650"
#define  TIMER_TC8CVR_reg                                                        0xB801B650
#define  TIMER_TC8CVR_inst_addr                                                  "0x0014"
#define  set_TIMER_TC8CVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC8CVR_reg)=data)
#define  get_TIMER_TC8CVR_reg                                                    (*((volatile unsigned int*)TIMER_TC8CVR_reg))
#define  TIMER_TC8CVR_tc8cvr_shift                                               (0)
#define  TIMER_TC8CVR_tc8cvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC8CVR_tc8cvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC8CVR_get_tc8cvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC9CVR                                                           0x1801B654
#define  TIMER_TC9CVR_reg_addr                                                   "0xB801B654"
#define  TIMER_TC9CVR_reg                                                        0xB801B654
#define  TIMER_TC9CVR_inst_addr                                                  "0x0015"
#define  set_TIMER_TC9CVR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC9CVR_reg)=data)
#define  get_TIMER_TC9CVR_reg                                                    (*((volatile unsigned int*)TIMER_TC9CVR_reg))
#define  TIMER_TC9CVR_tc9cvr_shift                                               (0)
#define  TIMER_TC9CVR_tc9cvr_mask                                                (0xFFFFFFFF)
#define  TIMER_TC9CVR_tc9cvr(data)                                               (0xFFFFFFFF&(data))
#define  TIMER_TC9CVR_get_tc9cvr(data)                                           (0xFFFFFFFF&(data))

#define  TIMER_TC10CVR                                                          0x1801B658
#define  TIMER_TC10CVR_reg_addr                                                  "0xB801B658"
#define  TIMER_TC10CVR_reg                                                       0xB801B658
#define  TIMER_TC10CVR_inst_addr                                                 "0x0016"
#define  set_TIMER_TC10CVR_reg(data)                                             (*((volatile unsigned int*)TIMER_TC10CVR_reg)=data)
#define  get_TIMER_TC10CVR_reg                                                   (*((volatile unsigned int*)TIMER_TC10CVR_reg))
#define  TIMER_TC10CVR_tc10cvr_shift                                             (0)
#define  TIMER_TC10CVR_tc10cvr_mask                                              (0xFFFFFFFF)
#define  TIMER_TC10CVR_tc10cvr(data)                                             (0xFFFFFFFF&(data))
#define  TIMER_TC10CVR_get_tc10cvr(data)                                         (0xFFFFFFFF&(data))

#define  TIMER_TC11CVR                                                          0x1801B65C
#define  TIMER_TC11CVR_reg_addr                                                  "0xB801B65C"
#define  TIMER_TC11CVR_reg                                                       0xB801B65C
#define  TIMER_TC11CVR_inst_addr                                                 "0x0017"
#define  set_TIMER_TC11CVR_reg(data)                                             (*((volatile unsigned int*)TIMER_TC11CVR_reg)=data)
#define  get_TIMER_TC11CVR_reg                                                   (*((volatile unsigned int*)TIMER_TC11CVR_reg))
#define  TIMER_TC11CVR_tc11cvr_shift                                             (0)
#define  TIMER_TC11CVR_tc11cvr_mask                                              (0xFFFFFFFF)
#define  TIMER_TC11CVR_tc11cvr(data)                                             (0xFFFFFFFF&(data))
#define  TIMER_TC11CVR_get_tc11cvr(data)                                         (0xFFFFFFFF&(data))

#define  TIMER_TC0CR                                                            0x1801B660
#define  TIMER_TC0CR_reg_addr                                                    "0xB801B660"
#define  TIMER_TC0CR_reg                                                         0xB801B660
#define  TIMER_TC0CR_inst_addr                                                   "0x0018"
#define  set_TIMER_TC0CR_reg(data)                                               (*((volatile unsigned int*)TIMER_TC0CR_reg)=data)
#define  get_TIMER_TC0CR_reg                                                     (*((volatile unsigned int*)TIMER_TC0CR_reg))
#define  TIMER_TC0CR_tc0en_shift                                                 (31)
#define  TIMER_TC0CR_tc0mode_shift                                               (30)
#define  TIMER_TC0CR_tc0pause_shift                                              (29)
#define  TIMER_TC0CR_tc0en_mask                                                  (0x80000000)
#define  TIMER_TC0CR_tc0mode_mask                                                (0x40000000)
#define  TIMER_TC0CR_tc0pause_mask                                               (0x20000000)
#define  TIMER_TC0CR_tc0en(data)                                                 (0x80000000&((data)<<31))
#define  TIMER_TC0CR_tc0mode(data)                                               (0x40000000&((data)<<30))
#define  TIMER_TC0CR_tc0pause(data)                                              (0x20000000&((data)<<29))
#define  TIMER_TC0CR_get_tc0en(data)                                             ((0x80000000&(data))>>31)
#define  TIMER_TC0CR_get_tc0mode(data)                                           ((0x40000000&(data))>>30)
#define  TIMER_TC0CR_get_tc0pause(data)                                          ((0x20000000&(data))>>29)

#define  TIMER_TC1CR                                                            0x1801B664
#define  TIMER_TC1CR_reg_addr                                                    "0xB801B664"
#define  TIMER_TC1CR_reg                                                         0xB801B664
#define  TIMER_TC1CR_inst_addr                                                   "0x0019"
#define  set_TIMER_TC1CR_reg(data)                                               (*((volatile unsigned int*)TIMER_TC1CR_reg)=data)
#define  get_TIMER_TC1CR_reg                                                     (*((volatile unsigned int*)TIMER_TC1CR_reg))
#define  TIMER_TC1CR_tc1en_shift                                                 (31)
#define  TIMER_TC1CR_tc1mode_shift                                               (30)
#define  TIMER_TC1CR_tc1pause_shift                                              (29)
#define  TIMER_TC1CR_tc1en_mask                                                  (0x80000000)
#define  TIMER_TC1CR_tc1mode_mask                                                (0x40000000)
#define  TIMER_TC1CR_tc1pause_mask                                               (0x20000000)
#define  TIMER_TC1CR_tc1en(data)                                                 (0x80000000&((data)<<31))
#define  TIMER_TC1CR_tc1mode(data)                                               (0x40000000&((data)<<30))
#define  TIMER_TC1CR_tc1pause(data)                                              (0x20000000&((data)<<29))
#define  TIMER_TC1CR_get_tc1en(data)                                             ((0x80000000&(data))>>31)
#define  TIMER_TC1CR_get_tc1mode(data)                                           ((0x40000000&(data))>>30)
#define  TIMER_TC1CR_get_tc1pause(data)                                          ((0x20000000&(data))>>29)

#define  TIMER_TC2CR                                                            0x1801B668
#define  TIMER_TC2CR_reg_addr                                                    "0xB801B668"
#define  TIMER_TC2CR_reg                                                         0xB801B668
#define  TIMER_TC2CR_inst_addr                                                   "0x001A"
#define  set_TIMER_TC2CR_reg(data)                                               (*((volatile unsigned int*)TIMER_TC2CR_reg)=data)
#define  get_TIMER_TC2CR_reg                                                     (*((volatile unsigned int*)TIMER_TC2CR_reg))
#define  TIMER_TC2CR_tc2en_shift                                                 (31)
#define  TIMER_TC2CR_tc2mode_shift                                               (30)
#define  TIMER_TC2CR_tc2pause_shift                                              (29)
#define  TIMER_TC2CR_tc2en_mask                                                  (0x80000000)
#define  TIMER_TC2CR_tc2mode_mask                                                (0x40000000)
#define  TIMER_TC2CR_tc2pause_mask                                               (0x20000000)
#define  TIMER_TC2CR_tc2en(data)                                                 (0x80000000&((data)<<31))
#define  TIMER_TC2CR_tc2mode(data)                                               (0x40000000&((data)<<30))
#define  TIMER_TC2CR_tc2pause(data)                                              (0x20000000&((data)<<29))
#define  TIMER_TC2CR_get_tc2en(data)                                             ((0x80000000&(data))>>31)
#define  TIMER_TC2CR_get_tc2mode(data)                                           ((0x40000000&(data))>>30)
#define  TIMER_TC2CR_get_tc2pause(data)                                          ((0x20000000&(data))>>29)

#define  TIMER_TC3CR                                                            0x1801B66C
#define  TIMER_TC3CR_reg_addr                                                    "0xB801B66C"
#define  TIMER_TC3CR_reg                                                         0xB801B66C
#define  TIMER_TC3CR_inst_addr                                                   "0x001B"
#define  set_TIMER_TC3CR_reg(data)                                               (*((volatile unsigned int*)TIMER_TC3CR_reg)=data)
#define  get_TIMER_TC3CR_reg                                                     (*((volatile unsigned int*)TIMER_TC3CR_reg))
#define  TIMER_TC3CR_tc3en_shift                                                 (31)
#define  TIMER_TC3CR_tc3mode_shift                                               (30)
#define  TIMER_TC3CR_tc3pause_shift                                              (29)
#define  TIMER_TC3CR_tc3en_mask                                                  (0x80000000)
#define  TIMER_TC3CR_tc3mode_mask                                                (0x40000000)
#define  TIMER_TC3CR_tc3pause_mask                                               (0x20000000)
#define  TIMER_TC3CR_tc3en(data)                                                 (0x80000000&((data)<<31))
#define  TIMER_TC3CR_tc3mode(data)                                               (0x40000000&((data)<<30))
#define  TIMER_TC3CR_tc3pause(data)                                              (0x20000000&((data)<<29))
#define  TIMER_TC3CR_get_tc3en(data)                                             ((0x80000000&(data))>>31)
#define  TIMER_TC3CR_get_tc3mode(data)                                           ((0x40000000&(data))>>30)
#define  TIMER_TC3CR_get_tc3pause(data)                                          ((0x20000000&(data))>>29)

#define  TIMER_TC4CR                                                            0x1801B670
#define  TIMER_TC4CR_reg_addr                                                    "0xB801B670"
#define  TIMER_TC4CR_reg                                                         0xB801B670
#define  TIMER_TC4CR_inst_addr                                                   "0x001C"
#define  set_TIMER_TC4CR_reg(data)                                               (*((volatile unsigned int*)TIMER_TC4CR_reg)=data)
#define  get_TIMER_TC4CR_reg                                                     (*((volatile unsigned int*)TIMER_TC4CR_reg))
#define  TIMER_TC4CR_tc4en_shift                                                 (31)
#define  TIMER_TC4CR_tc4mode_shift                                               (30)
#define  TIMER_TC4CR_tc4pause_shift                                              (29)
#define  TIMER_TC4CR_tc4en_mask                                                  (0x80000000)
#define  TIMER_TC4CR_tc4mode_mask                                                (0x40000000)
#define  TIMER_TC4CR_tc4pause_mask                                               (0x20000000)
#define  TIMER_TC4CR_tc4en(data)                                                 (0x80000000&((data)<<31))
#define  TIMER_TC4CR_tc4mode(data)                                               (0x40000000&((data)<<30))
#define  TIMER_TC4CR_tc4pause(data)                                              (0x20000000&((data)<<29))
#define  TIMER_TC4CR_get_tc4en(data)                                             ((0x80000000&(data))>>31)
#define  TIMER_TC4CR_get_tc4mode(data)                                           ((0x40000000&(data))>>30)
#define  TIMER_TC4CR_get_tc4pause(data)                                          ((0x20000000&(data))>>29)

#define  TIMER_TC5CR                                                            0x1801B674
#define  TIMER_TC5CR_reg_addr                                                    "0xB801B674"
#define  TIMER_TC5CR_reg                                                         0xB801B674
#define  TIMER_TC5CR_inst_addr                                                   "0x001D"
#define  set_TIMER_TC5CR_reg(data)                                               (*((volatile unsigned int*)TIMER_TC5CR_reg)=data)
#define  get_TIMER_TC5CR_reg                                                     (*((volatile unsigned int*)TIMER_TC5CR_reg))
#define  TIMER_TC5CR_tc5en_shift                                                 (31)
#define  TIMER_TC5CR_tc5mode_shift                                               (30)
#define  TIMER_TC5CR_tc5pause_shift                                              (29)
#define  TIMER_TC5CR_tc5en_mask                                                  (0x80000000)
#define  TIMER_TC5CR_tc5mode_mask                                                (0x40000000)
#define  TIMER_TC5CR_tc5pause_mask                                               (0x20000000)
#define  TIMER_TC5CR_tc5en(data)                                                 (0x80000000&((data)<<31))
#define  TIMER_TC5CR_tc5mode(data)                                               (0x40000000&((data)<<30))
#define  TIMER_TC5CR_tc5pause(data)                                              (0x20000000&((data)<<29))
#define  TIMER_TC5CR_get_tc5en(data)                                             ((0x80000000&(data))>>31)
#define  TIMER_TC5CR_get_tc5mode(data)                                           ((0x40000000&(data))>>30)
#define  TIMER_TC5CR_get_tc5pause(data)                                          ((0x20000000&(data))>>29)

#define  TIMER_TC6CR                                                            0x1801B678
#define  TIMER_TC6CR_reg_addr                                                    "0xB801B678"
#define  TIMER_TC6CR_reg                                                         0xB801B678
#define  TIMER_TC6CR_inst_addr                                                   "0x001E"
#define  set_TIMER_TC6CR_reg(data)                                               (*((volatile unsigned int*)TIMER_TC6CR_reg)=data)
#define  get_TIMER_TC6CR_reg                                                     (*((volatile unsigned int*)TIMER_TC6CR_reg))
#define  TIMER_TC6CR_tc6en_shift                                                 (31)
#define  TIMER_TC6CR_tc6mode_shift                                               (30)
#define  TIMER_TC6CR_tc6pause_shift                                              (29)
#define  TIMER_TC6CR_tc6en_mask                                                  (0x80000000)
#define  TIMER_TC6CR_tc6mode_mask                                                (0x40000000)
#define  TIMER_TC6CR_tc6pause_mask                                               (0x20000000)
#define  TIMER_TC6CR_tc6en(data)                                                 (0x80000000&((data)<<31))
#define  TIMER_TC6CR_tc6mode(data)                                               (0x40000000&((data)<<30))
#define  TIMER_TC6CR_tc6pause(data)                                              (0x20000000&((data)<<29))
#define  TIMER_TC6CR_get_tc6en(data)                                             ((0x80000000&(data))>>31)
#define  TIMER_TC6CR_get_tc6mode(data)                                           ((0x40000000&(data))>>30)
#define  TIMER_TC6CR_get_tc6pause(data)                                          ((0x20000000&(data))>>29)

#define  TIMER_TC7CR                                                            0x1801B67C
#define  TIMER_TC7CR_reg_addr                                                    "0xB801B67C"
#define  TIMER_TC7CR_reg                                                         0xB801B67C
#define  TIMER_TC7CR_inst_addr                                                   "0x001F"
#define  set_TIMER_TC7CR_reg(data)                                               (*((volatile unsigned int*)TIMER_TC7CR_reg)=data)
#define  get_TIMER_TC7CR_reg                                                     (*((volatile unsigned int*)TIMER_TC7CR_reg))
#define  TIMER_TC7CR_tc7en_shift                                                 (31)
#define  TIMER_TC7CR_tc7mode_shift                                               (30)
#define  TIMER_TC7CR_tc7pause_shift                                              (29)
#define  TIMER_TC7CR_tc7en_mask                                                  (0x80000000)
#define  TIMER_TC7CR_tc7mode_mask                                                (0x40000000)
#define  TIMER_TC7CR_tc7pause_mask                                               (0x20000000)
#define  TIMER_TC7CR_tc7en(data)                                                 (0x80000000&((data)<<31))
#define  TIMER_TC7CR_tc7mode(data)                                               (0x40000000&((data)<<30))
#define  TIMER_TC7CR_tc7pause(data)                                              (0x20000000&((data)<<29))
#define  TIMER_TC7CR_get_tc7en(data)                                             ((0x80000000&(data))>>31)
#define  TIMER_TC7CR_get_tc7mode(data)                                           ((0x40000000&(data))>>30)
#define  TIMER_TC7CR_get_tc7pause(data)                                          ((0x20000000&(data))>>29)

#define  TIMER_TC8CR                                                            0x1801B680
#define  TIMER_TC8CR_reg_addr                                                    "0xB801B680"
#define  TIMER_TC8CR_reg                                                         0xB801B680
#define  TIMER_TC8CR_inst_addr                                                   "0x0020"
#define  set_TIMER_TC8CR_reg(data)                                               (*((volatile unsigned int*)TIMER_TC8CR_reg)=data)
#define  get_TIMER_TC8CR_reg                                                     (*((volatile unsigned int*)TIMER_TC8CR_reg))
#define  TIMER_TC8CR_tc8en_shift                                                 (31)
#define  TIMER_TC8CR_tc8mode_shift                                               (30)
#define  TIMER_TC8CR_tc8pause_shift                                              (29)
#define  TIMER_TC8CR_tc8en_mask                                                  (0x80000000)
#define  TIMER_TC8CR_tc8mode_mask                                                (0x40000000)
#define  TIMER_TC8CR_tc8pause_mask                                               (0x20000000)
#define  TIMER_TC8CR_tc8en(data)                                                 (0x80000000&((data)<<31))
#define  TIMER_TC8CR_tc8mode(data)                                               (0x40000000&((data)<<30))
#define  TIMER_TC8CR_tc8pause(data)                                              (0x20000000&((data)<<29))
#define  TIMER_TC8CR_get_tc8en(data)                                             ((0x80000000&(data))>>31)
#define  TIMER_TC8CR_get_tc8mode(data)                                           ((0x40000000&(data))>>30)
#define  TIMER_TC8CR_get_tc8pause(data)                                          ((0x20000000&(data))>>29)

#define  TIMER_TC9CR                                                            0x1801B684
#define  TIMER_TC9CR_reg_addr                                                    "0xB801B684"
#define  TIMER_TC9CR_reg                                                         0xB801B684
#define  TIMER_TC9CR_inst_addr                                                   "0x0021"
#define  set_TIMER_TC9CR_reg(data)                                               (*((volatile unsigned int*)TIMER_TC9CR_reg)=data)
#define  get_TIMER_TC9CR_reg                                                     (*((volatile unsigned int*)TIMER_TC9CR_reg))
#define  TIMER_TC9CR_tc9en_shift                                                 (31)
#define  TIMER_TC9CR_tc9mode_shift                                               (30)
#define  TIMER_TC9CR_tc9pause_shift                                              (29)
#define  TIMER_TC9CR_tc9en_mask                                                  (0x80000000)
#define  TIMER_TC9CR_tc9mode_mask                                                (0x40000000)
#define  TIMER_TC9CR_tc9pause_mask                                               (0x20000000)
#define  TIMER_TC9CR_tc9en(data)                                                 (0x80000000&((data)<<31))
#define  TIMER_TC9CR_tc9mode(data)                                               (0x40000000&((data)<<30))
#define  TIMER_TC9CR_tc9pause(data)                                              (0x20000000&((data)<<29))
#define  TIMER_TC9CR_get_tc9en(data)                                             ((0x80000000&(data))>>31)
#define  TIMER_TC9CR_get_tc9mode(data)                                           ((0x40000000&(data))>>30)
#define  TIMER_TC9CR_get_tc9pause(data)                                          ((0x20000000&(data))>>29)

#define  TIMER_TC10CR                                                           0x1801B688
#define  TIMER_TC10CR_reg_addr                                                   "0xB801B688"
#define  TIMER_TC10CR_reg                                                        0xB801B688
#define  TIMER_TC10CR_inst_addr                                                  "0x0022"
#define  set_TIMER_TC10CR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC10CR_reg)=data)
#define  get_TIMER_TC10CR_reg                                                    (*((volatile unsigned int*)TIMER_TC10CR_reg))
#define  TIMER_TC10CR_tc10en_shift                                               (31)
#define  TIMER_TC10CR_tc10mode_shift                                             (30)
#define  TIMER_TC10CR_tc10pause_shift                                            (29)
#define  TIMER_TC10CR_tc10en_mask                                                (0x80000000)
#define  TIMER_TC10CR_tc10mode_mask                                              (0x40000000)
#define  TIMER_TC10CR_tc10pause_mask                                             (0x20000000)
#define  TIMER_TC10CR_tc10en(data)                                               (0x80000000&((data)<<31))
#define  TIMER_TC10CR_tc10mode(data)                                             (0x40000000&((data)<<30))
#define  TIMER_TC10CR_tc10pause(data)                                            (0x20000000&((data)<<29))
#define  TIMER_TC10CR_get_tc10en(data)                                           ((0x80000000&(data))>>31)
#define  TIMER_TC10CR_get_tc10mode(data)                                         ((0x40000000&(data))>>30)
#define  TIMER_TC10CR_get_tc10pause(data)                                        ((0x20000000&(data))>>29)

#define  TIMER_TC11CR                                                           0x1801B68C
#define  TIMER_TC11CR_reg_addr                                                   "0xB801B68C"
#define  TIMER_TC11CR_reg                                                        0xB801B68C
#define  TIMER_TC11CR_inst_addr                                                  "0x0023"
#define  set_TIMER_TC11CR_reg(data)                                              (*((volatile unsigned int*)TIMER_TC11CR_reg)=data)
#define  get_TIMER_TC11CR_reg                                                    (*((volatile unsigned int*)TIMER_TC11CR_reg))
#define  TIMER_TC11CR_tc11en_shift                                               (31)
#define  TIMER_TC11CR_tc11mode_shift                                             (30)
#define  TIMER_TC11CR_tc11pause_shift                                            (29)
#define  TIMER_TC11CR_tc11en_mask                                                (0x80000000)
#define  TIMER_TC11CR_tc11mode_mask                                              (0x40000000)
#define  TIMER_TC11CR_tc11pause_mask                                             (0x20000000)
#define  TIMER_TC11CR_tc11en(data)                                               (0x80000000&((data)<<31))
#define  TIMER_TC11CR_tc11mode(data)                                             (0x40000000&((data)<<30))
#define  TIMER_TC11CR_tc11pause(data)                                            (0x20000000&((data)<<29))
#define  TIMER_TC11CR_get_tc11en(data)                                           ((0x80000000&(data))>>31)
#define  TIMER_TC11CR_get_tc11mode(data)                                         ((0x40000000&(data))>>30)
#define  TIMER_TC11CR_get_tc11pause(data)                                        ((0x20000000&(data))>>29)

#define  TIMER_TCICR                                                            0x1801B6A0
#define  TIMER_TCICR_reg_addr                                                    "0xB801B6A0"
#define  TIMER_TCICR_reg                                                         0xB801B6A0
#define  TIMER_TCICR_inst_addr                                                   "0x0024"
#define  set_TIMER_TCICR_reg(data)                                               (*((volatile unsigned int*)TIMER_TCICR_reg)=data)
#define  get_TIMER_TCICR_reg                                                     (*((volatile unsigned int*)TIMER_TCICR_reg))
#define  TIMER_TCICR_tc11ie_shift                                                (12)
#define  TIMER_TCICR_tc10ie_shift                                                (11)
#define  TIMER_TCICR_tc9ie_shift                                                 (10)
#define  TIMER_TCICR_tc8ie_shift                                                 (9)
#define  TIMER_TCICR_tc7ie_shift                                                 (8)
#define  TIMER_TCICR_tc6ie_shift                                                 (7)
#define  TIMER_TCICR_tc5ie_shift                                                 (6)
#define  TIMER_TCICR_tc4ie_shift                                                 (5)
#define  TIMER_TCICR_tc3ie_shift                                                 (4)
#define  TIMER_TCICR_tc2ie_shift                                                 (3)
#define  TIMER_TCICR_tc1ie_shift                                                 (2)
#define  TIMER_TCICR_tc0ie_shift                                                 (1)
#define  TIMER_TCICR_write_data_shift                                            (0)
#define  TIMER_TCICR_tc11ie_mask                                                 (0x00001000)
#define  TIMER_TCICR_tc10ie_mask                                                 (0x00000800)
#define  TIMER_TCICR_tc9ie_mask                                                  (0x00000400)
#define  TIMER_TCICR_tc8ie_mask                                                  (0x00000200)
#define  TIMER_TCICR_tc7ie_mask                                                  (0x00000100)
#define  TIMER_TCICR_tc6ie_mask                                                  (0x00000080)
#define  TIMER_TCICR_tc5ie_mask                                                  (0x00000040)
#define  TIMER_TCICR_tc4ie_mask                                                  (0x00000020)
#define  TIMER_TCICR_tc3ie_mask                                                  (0x00000010)
#define  TIMER_TCICR_tc2ie_mask                                                  (0x00000008)
#define  TIMER_TCICR_tc1ie_mask                                                  (0x00000004)
#define  TIMER_TCICR_tc0ie_mask                                                  (0x00000002)
#define  TIMER_TCICR_write_data_mask                                             (0x00000001)
#define  TIMER_TCICR_tc11ie(data)                                                (0x00001000&((data)<<12))
#define  TIMER_TCICR_tc10ie(data)                                                (0x00000800&((data)<<11))
#define  TIMER_TCICR_tc9ie(data)                                                 (0x00000400&((data)<<10))
#define  TIMER_TCICR_tc8ie(data)                                                 (0x00000200&((data)<<9))
#define  TIMER_TCICR_tc7ie(data)                                                 (0x00000100&((data)<<8))
#define  TIMER_TCICR_tc6ie(data)                                                 (0x00000080&((data)<<7))
#define  TIMER_TCICR_tc5ie(data)                                                 (0x00000040&((data)<<6))
#define  TIMER_TCICR_tc4ie(data)                                                 (0x00000020&((data)<<5))
#define  TIMER_TCICR_tc3ie(data)                                                 (0x00000010&((data)<<4))
#define  TIMER_TCICR_tc2ie(data)                                                 (0x00000008&((data)<<3))
#define  TIMER_TCICR_tc1ie(data)                                                 (0x00000004&((data)<<2))
#define  TIMER_TCICR_tc0ie(data)                                                 (0x00000002&((data)<<1))
#define  TIMER_TCICR_write_data(data)                                            (0x00000001&(data))
#define  TIMER_TCICR_get_tc11ie(data)                                            ((0x00001000&(data))>>12)
#define  TIMER_TCICR_get_tc10ie(data)                                            ((0x00000800&(data))>>11)
#define  TIMER_TCICR_get_tc9ie(data)                                             ((0x00000400&(data))>>10)
#define  TIMER_TCICR_get_tc8ie(data)                                             ((0x00000200&(data))>>9)
#define  TIMER_TCICR_get_tc7ie(data)                                             ((0x00000100&(data))>>8)
#define  TIMER_TCICR_get_tc6ie(data)                                             ((0x00000080&(data))>>7)
#define  TIMER_TCICR_get_tc5ie(data)                                             ((0x00000040&(data))>>6)
#define  TIMER_TCICR_get_tc4ie(data)                                             ((0x00000020&(data))>>5)
#define  TIMER_TCICR_get_tc3ie(data)                                             ((0x00000010&(data))>>4)
#define  TIMER_TCICR_get_tc2ie(data)                                             ((0x00000008&(data))>>3)
#define  TIMER_TCICR_get_tc1ie(data)                                             ((0x00000004&(data))>>2)
#define  TIMER_TCICR_get_tc0ie(data)                                             ((0x00000002&(data))>>1)
#define  TIMER_TCICR_get_write_data(data)                                        (0x00000001&(data))

#define  TIMER_ISR                                                              0x1801B6A4
#define  TIMER_ISR_reg_addr                                                      "0xB801B6A4"
#define  TIMER_ISR_reg                                                           0xB801B6A4
#define  TIMER_ISR_inst_addr                                                     "0x0025"
#define  set_TIMER_ISR_reg(data)                                                 (*((volatile unsigned int*)TIMER_ISR_reg)=data)
#define  get_TIMER_ISR_reg                                                       (*((volatile unsigned int*)TIMER_ISR_reg))
#define  TIMER_ISR_tc11_int_shift                                                (11)
#define  TIMER_ISR_tc10_int_shift                                                (10)
#define  TIMER_ISR_tc9_int_shift                                                 (9)
#define  TIMER_ISR_tc8_int_shift                                                 (8)
#define  TIMER_ISR_tc7_int_shift                                                 (7)
#define  TIMER_ISR_tc6_int_shift                                                 (6)
#define  TIMER_ISR_tc5_int_shift                                                 (5)
#define  TIMER_ISR_tc4_int_shift                                                 (4)
#define  TIMER_ISR_tc3_int_shift                                                 (3)
#define  TIMER_ISR_tc2_int_shift                                                 (2)
#define  TIMER_ISR_tc1_int_shift                                                 (1)
#define  TIMER_ISR_tc0_int_shift                                                 (0)
#define  TIMER_ISR_tc11_int_mask                                                 (0x00000800)
#define  TIMER_ISR_tc10_int_mask                                                 (0x00000400)
#define  TIMER_ISR_tc9_int_mask                                                  (0x00000200)
#define  TIMER_ISR_tc8_int_mask                                                  (0x00000100)
#define  TIMER_ISR_tc7_int_mask                                                  (0x00000080)
#define  TIMER_ISR_tc6_int_mask                                                  (0x00000040)
#define  TIMER_ISR_tc5_int_mask                                                  (0x00000020)
#define  TIMER_ISR_tc4_int_mask                                                  (0x00000010)
#define  TIMER_ISR_tc3_int_mask                                                  (0x00000008)
#define  TIMER_ISR_tc2_int_mask                                                  (0x00000004)
#define  TIMER_ISR_tc1_int_mask                                                  (0x00000002)
#define  TIMER_ISR_tc0_int_mask                                                  (0x00000001)
#define  TIMER_ISR_tc11_int(data)                                                (0x00000800&((data)<<11))
#define  TIMER_ISR_tc10_int(data)                                                (0x00000400&((data)<<10))
#define  TIMER_ISR_tc9_int(data)                                                 (0x00000200&((data)<<9))
#define  TIMER_ISR_tc8_int(data)                                                 (0x00000100&((data)<<8))
#define  TIMER_ISR_tc7_int(data)                                                 (0x00000080&((data)<<7))
#define  TIMER_ISR_tc6_int(data)                                                 (0x00000040&((data)<<6))
#define  TIMER_ISR_tc5_int(data)                                                 (0x00000020&((data)<<5))
#define  TIMER_ISR_tc4_int(data)                                                 (0x00000010&((data)<<4))
#define  TIMER_ISR_tc3_int(data)                                                 (0x00000008&((data)<<3))
#define  TIMER_ISR_tc2_int(data)                                                 (0x00000004&((data)<<2))
#define  TIMER_ISR_tc1_int(data)                                                 (0x00000002&((data)<<1))
#define  TIMER_ISR_tc0_int(data)                                                 (0x00000001&(data))
#define  TIMER_ISR_get_tc11_int(data)                                            ((0x00000800&(data))>>11)
#define  TIMER_ISR_get_tc10_int(data)                                            ((0x00000400&(data))>>10)
#define  TIMER_ISR_get_tc9_int(data)                                             ((0x00000200&(data))>>9)
#define  TIMER_ISR_get_tc8_int(data)                                             ((0x00000100&(data))>>8)
#define  TIMER_ISR_get_tc7_int(data)                                             ((0x00000080&(data))>>7)
#define  TIMER_ISR_get_tc6_int(data)                                             ((0x00000040&(data))>>6)
#define  TIMER_ISR_get_tc5_int(data)                                             ((0x00000020&(data))>>5)
#define  TIMER_ISR_get_tc4_int(data)                                             ((0x00000010&(data))>>4)
#define  TIMER_ISR_get_tc3_int(data)                                             ((0x00000008&(data))>>3)
#define  TIMER_ISR_get_tc2_int(data)                                             ((0x00000004&(data))>>2)
#define  TIMER_ISR_get_tc1_int(data)                                             ((0x00000002&(data))>>1)
#define  TIMER_ISR_get_tc0_int(data)                                             (0x00000001&(data))

#define  TIMER_CLK90K_CTRL                                                      0x1801B6B0
#define  TIMER_CLK90K_CTRL_reg_addr                                              "0xB801B6B0"
#define  TIMER_CLK90K_CTRL_reg                                                   0xB801B6B0
#define  TIMER_CLK90K_CTRL_inst_addr                                             "0x0026"
#define  set_TIMER_CLK90K_CTRL_reg(data)                                         (*((volatile unsigned int*)TIMER_CLK90K_CTRL_reg)=data)
#define  get_TIMER_CLK90K_CTRL_reg                                               (*((volatile unsigned int*)TIMER_CLK90K_CTRL_reg))
#define  TIMER_CLK90K_CTRL_en_shift                                              (0)
#define  TIMER_CLK90K_CTRL_en_mask                                               (0x00000001)
#define  TIMER_CLK90K_CTRL_en(data)                                              (0x00000001&(data))
#define  TIMER_CLK90K_CTRL_get_en(data)                                          (0x00000001&(data))

#define  TIMER_SCPU_CLK27M_90K                                                  0x1801B6B4
#define  TIMER_SCPU_CLK27M_90K_reg_addr                                          "0xB801B6B4"
#define  TIMER_SCPU_CLK27M_90K_reg                                               0xB801B6B4
#define  TIMER_SCPU_CLK27M_90K_inst_addr                                         "0x0027"
#define  set_TIMER_SCPU_CLK27M_90K_reg(data)                                     (*((volatile unsigned int*)TIMER_SCPU_CLK27M_90K_reg)=data)
#define  get_TIMER_SCPU_CLK27M_90K_reg                                           (*((volatile unsigned int*)TIMER_SCPU_CLK27M_90K_reg))
#define  TIMER_SCPU_CLK27M_90K_cnt_shift                                         (0)
#define  TIMER_SCPU_CLK27M_90K_cnt_mask                                          (0x000001FF)
#define  TIMER_SCPU_CLK27M_90K_cnt(data)                                         (0x000001FF&(data))
#define  TIMER_SCPU_CLK27M_90K_get_cnt(data)                                     (0x000001FF&(data))

#define  TIMER_SCPU_CLK90K_LO                                                   0x1801B6B8
#define  TIMER_SCPU_CLK90K_LO_reg_addr                                           "0xB801B6B8"
#define  TIMER_SCPU_CLK90K_LO_reg                                                0xB801B6B8
#define  TIMER_SCPU_CLK90K_LO_inst_addr                                          "0x0028"
#define  set_TIMER_SCPU_CLK90K_LO_reg(data)                                      (*((volatile unsigned int*)TIMER_SCPU_CLK90K_LO_reg)=data)
#define  get_TIMER_SCPU_CLK90K_LO_reg                                            (*((volatile unsigned int*)TIMER_SCPU_CLK90K_LO_reg))
#define  TIMER_SCPU_CLK90K_LO_val_shift                                          (0)
#define  TIMER_SCPU_CLK90K_LO_val_mask                                           (0xFFFFFFFF)
#define  TIMER_SCPU_CLK90K_LO_val(data)                                          (0xFFFFFFFF&(data))
#define  TIMER_SCPU_CLK90K_LO_get_val(data)                                      (0xFFFFFFFF&(data))

#define  TIMER_SCPU_CLK90K_HI                                                   0x1801B6BC
#define  TIMER_SCPU_CLK90K_HI_reg_addr                                           "0xB801B6BC"
#define  TIMER_SCPU_CLK90K_HI_reg                                                0xB801B6BC
#define  TIMER_SCPU_CLK90K_HI_inst_addr                                          "0x0029"
#define  set_TIMER_SCPU_CLK90K_HI_reg(data)                                      (*((volatile unsigned int*)TIMER_SCPU_CLK90K_HI_reg)=data)
#define  get_TIMER_SCPU_CLK90K_HI_reg                                            (*((volatile unsigned int*)TIMER_SCPU_CLK90K_HI_reg))
#define  TIMER_SCPU_CLK90K_HI_val_shift                                          (0)
#define  TIMER_SCPU_CLK90K_HI_val_mask                                           (0x0000FFFF)
#define  TIMER_SCPU_CLK90K_HI_val(data)                                          (0x0000FFFF&(data))
#define  TIMER_SCPU_CLK90K_HI_get_val(data)                                      (0x0000FFFF&(data))

#define  TIMER_ACPU_CLK27M_90K                                                  0x1801B6C0
#define  TIMER_ACPU_CLK27M_90K_reg_addr                                          "0xB801B6C0"
#define  TIMER_ACPU_CLK27M_90K_reg                                               0xB801B6C0
#define  TIMER_ACPU_CLK27M_90K_inst_addr                                         "0x002A"
#define  set_TIMER_ACPU_CLK27M_90K_reg(data)                                     (*((volatile unsigned int*)TIMER_ACPU_CLK27M_90K_reg)=data)
#define  get_TIMER_ACPU_CLK27M_90K_reg                                           (*((volatile unsigned int*)TIMER_ACPU_CLK27M_90K_reg))
#define  TIMER_ACPU_CLK27M_90K_cnt_shift                                         (0)
#define  TIMER_ACPU_CLK27M_90K_cnt_mask                                          (0x000001FF)
#define  TIMER_ACPU_CLK27M_90K_cnt(data)                                         (0x000001FF&(data))
#define  TIMER_ACPU_CLK27M_90K_get_cnt(data)                                     (0x000001FF&(data))

#define  TIMER_ACPU_CLK90K_LO                                                   0x1801B6C4
#define  TIMER_ACPU_CLK90K_LO_reg_addr                                           "0xB801B6C4"
#define  TIMER_ACPU_CLK90K_LO_reg                                                0xB801B6C4
#define  TIMER_ACPU_CLK90K_LO_inst_addr                                          "0x002B"
#define  set_TIMER_ACPU_CLK90K_LO_reg(data)                                      (*((volatile unsigned int*)TIMER_ACPU_CLK90K_LO_reg)=data)
#define  get_TIMER_ACPU_CLK90K_LO_reg                                            (*((volatile unsigned int*)TIMER_ACPU_CLK90K_LO_reg))
#define  TIMER_ACPU_CLK90K_LO_val_shift                                          (0)
#define  TIMER_ACPU_CLK90K_LO_val_mask                                           (0xFFFFFFFF)
#define  TIMER_ACPU_CLK90K_LO_val(data)                                          (0xFFFFFFFF&(data))
#define  TIMER_ACPU_CLK90K_LO_get_val(data)                                      (0xFFFFFFFF&(data))

#define  TIMER_ACPU_CLK90K_HI                                                   0x1801B6C8
#define  TIMER_ACPU_CLK90K_HI_reg_addr                                           "0xB801B6C8"
#define  TIMER_ACPU_CLK90K_HI_reg                                                0xB801B6C8
#define  TIMER_ACPU_CLK90K_HI_inst_addr                                          "0x002C"
#define  set_TIMER_ACPU_CLK90K_HI_reg(data)                                      (*((volatile unsigned int*)TIMER_ACPU_CLK90K_HI_reg)=data)
#define  get_TIMER_ACPU_CLK90K_HI_reg                                            (*((volatile unsigned int*)TIMER_ACPU_CLK90K_HI_reg))
#define  TIMER_ACPU_CLK90K_HI_val_shift                                          (0)
#define  TIMER_ACPU_CLK90K_HI_val_mask                                           (0x0000FFFF)
#define  TIMER_ACPU_CLK90K_HI_val(data)                                          (0x0000FFFF&(data))
#define  TIMER_ACPU_CLK90K_HI_get_val(data)                                      (0x0000FFFF&(data))

#define  TIMER_VCPU_CLK27M_90K                                                  0x1801B6CC
#define  TIMER_VCPU_CLK27M_90K_reg_addr                                          "0xB801B6CC"
#define  TIMER_VCPU_CLK27M_90K_reg                                               0xB801B6CC
#define  TIMER_VCPU_CLK27M_90K_inst_addr                                         "0x002D"
#define  set_TIMER_VCPU_CLK27M_90K_reg(data)                                     (*((volatile unsigned int*)TIMER_VCPU_CLK27M_90K_reg)=data)
#define  get_TIMER_VCPU_CLK27M_90K_reg                                           (*((volatile unsigned int*)TIMER_VCPU_CLK27M_90K_reg))
#define  TIMER_VCPU_CLK27M_90K_cnt_shift                                         (0)
#define  TIMER_VCPU_CLK27M_90K_cnt_mask                                          (0x000001FF)
#define  TIMER_VCPU_CLK27M_90K_cnt(data)                                         (0x000001FF&(data))
#define  TIMER_VCPU_CLK27M_90K_get_cnt(data)                                     (0x000001FF&(data))

#define  TIMER_VCPU_CLK90K_LO                                                   0x1801B6D0
#define  TIMER_VCPU_CLK90K_LO_reg_addr                                           "0xB801B6D0"
#define  TIMER_VCPU_CLK90K_LO_reg                                                0xB801B6D0
#define  TIMER_VCPU_CLK90K_LO_inst_addr                                          "0x002E"
#define  set_TIMER_VCPU_CLK90K_LO_reg(data)                                      (*((volatile unsigned int*)TIMER_VCPU_CLK90K_LO_reg)=data)
#define  get_TIMER_VCPU_CLK90K_LO_reg                                            (*((volatile unsigned int*)TIMER_VCPU_CLK90K_LO_reg))
#define  TIMER_VCPU_CLK90K_LO_val_shift                                          (0)
#define  TIMER_VCPU_CLK90K_LO_val_mask                                           (0xFFFFFFFF)
#define  TIMER_VCPU_CLK90K_LO_val(data)                                          (0xFFFFFFFF&(data))
#define  TIMER_VCPU_CLK90K_LO_get_val(data)                                      (0xFFFFFFFF&(data))

#define  TIMER_VCPU_CLK90K_HI                                                   0x1801B6D4
#define  TIMER_VCPU_CLK90K_HI_reg_addr                                           "0xB801B6D4"
#define  TIMER_VCPU_CLK90K_HI_reg                                                0xB801B6D4
#define  TIMER_VCPU_CLK90K_HI_inst_addr                                          "0x002F"
#define  set_TIMER_VCPU_CLK90K_HI_reg(data)                                      (*((volatile unsigned int*)TIMER_VCPU_CLK90K_HI_reg)=data)
#define  get_TIMER_VCPU_CLK90K_HI_reg                                            (*((volatile unsigned int*)TIMER_VCPU_CLK90K_HI_reg))
#define  TIMER_VCPU_CLK90K_HI_val_shift                                          (0)
#define  TIMER_VCPU_CLK90K_HI_val_mask                                           (0x0000FFFF)
#define  TIMER_VCPU_CLK90K_HI_val(data)                                          (0x0000FFFF&(data))
#define  TIMER_VCPU_CLK90K_HI_get_val(data)                                      (0x0000FFFF&(data))

#define  TIMER_PCR_CLK90K_CTRL                                                  0x1801B6D8
#define  TIMER_PCR_CLK90K_CTRL_reg_addr                                          "0xB801B6D8"
#define  TIMER_PCR_CLK90K_CTRL_reg                                               0xB801B6D8
#define  TIMER_PCR_CLK90K_CTRL_inst_addr                                         "0x0030"
#define  set_TIMER_PCR_CLK90K_CTRL_reg(data)                                     (*((volatile unsigned int*)TIMER_PCR_CLK90K_CTRL_reg)=data)
#define  get_TIMER_PCR_CLK90K_CTRL_reg                                           (*((volatile unsigned int*)TIMER_PCR_CLK90K_CTRL_reg))
#define  TIMER_PCR_CLK90K_CTRL_en_shift                                          (0)
#define  TIMER_PCR_CLK90K_CTRL_en_mask                                           (0x00000001)
#define  TIMER_PCR_CLK90K_CTRL_en(data)                                          (0x00000001&(data))
#define  TIMER_PCR_CLK90K_CTRL_get_en(data)                                      (0x00000001&(data))

#define  TIMER_PCR_SCPU_CLK27M_90K                                              0x1801B6DC
#define  TIMER_PCR_SCPU_CLK27M_90K_reg_addr                                      "0xB801B6DC"
#define  TIMER_PCR_SCPU_CLK27M_90K_reg                                           0xB801B6DC
#define  TIMER_PCR_SCPU_CLK27M_90K_inst_addr                                     "0x0031"
#define  set_TIMER_PCR_SCPU_CLK27M_90K_reg(data)                                 (*((volatile unsigned int*)TIMER_PCR_SCPU_CLK27M_90K_reg)=data)
#define  get_TIMER_PCR_SCPU_CLK27M_90K_reg                                       (*((volatile unsigned int*)TIMER_PCR_SCPU_CLK27M_90K_reg))
#define  TIMER_PCR_SCPU_CLK27M_90K_cnt_shift                                     (0)
#define  TIMER_PCR_SCPU_CLK27M_90K_cnt_mask                                      (0x000001FF)
#define  TIMER_PCR_SCPU_CLK27M_90K_cnt(data)                                     (0x000001FF&(data))
#define  TIMER_PCR_SCPU_CLK27M_90K_get_cnt(data)                                 (0x000001FF&(data))

#define  TIMER_PCR_SCPU_CLK90K_LO                                               0x1801B6E0
#define  TIMER_PCR_SCPU_CLK90K_LO_reg_addr                                       "0xB801B6E0"
#define  TIMER_PCR_SCPU_CLK90K_LO_reg                                            0xB801B6E0
#define  TIMER_PCR_SCPU_CLK90K_LO_inst_addr                                      "0x0032"
#define  set_TIMER_PCR_SCPU_CLK90K_LO_reg(data)                                  (*((volatile unsigned int*)TIMER_PCR_SCPU_CLK90K_LO_reg)=data)
#define  get_TIMER_PCR_SCPU_CLK90K_LO_reg                                        (*((volatile unsigned int*)TIMER_PCR_SCPU_CLK90K_LO_reg))
#define  TIMER_PCR_SCPU_CLK90K_LO_val_shift                                      (0)
#define  TIMER_PCR_SCPU_CLK90K_LO_val_mask                                       (0xFFFFFFFF)
#define  TIMER_PCR_SCPU_CLK90K_LO_val(data)                                      (0xFFFFFFFF&(data))
#define  TIMER_PCR_SCPU_CLK90K_LO_get_val(data)                                  (0xFFFFFFFF&(data))

#define  TIMER_PCR_SCPU_CLK90K_HI                                               0x1801B6E4
#define  TIMER_PCR_SCPU_CLK90K_HI_reg_addr                                       "0xB801B6E4"
#define  TIMER_PCR_SCPU_CLK90K_HI_reg                                            0xB801B6E4
#define  TIMER_PCR_SCPU_CLK90K_HI_inst_addr                                      "0x0033"
#define  set_TIMER_PCR_SCPU_CLK90K_HI_reg(data)                                  (*((volatile unsigned int*)TIMER_PCR_SCPU_CLK90K_HI_reg)=data)
#define  get_TIMER_PCR_SCPU_CLK90K_HI_reg                                        (*((volatile unsigned int*)TIMER_PCR_SCPU_CLK90K_HI_reg))
#define  TIMER_PCR_SCPU_CLK90K_HI_val_shift                                      (0)
#define  TIMER_PCR_SCPU_CLK90K_HI_val_mask                                       (0x0000FFFF)
#define  TIMER_PCR_SCPU_CLK90K_HI_val(data)                                      (0x0000FFFF&(data))
#define  TIMER_PCR_SCPU_CLK90K_HI_get_val(data)                                  (0x0000FFFF&(data))

#define  TIMER_PCR_ACPU_CLK27M_90K                                              0x1801B6E8
#define  TIMER_PCR_ACPU_CLK27M_90K_reg_addr                                      "0xB801B6E8"
#define  TIMER_PCR_ACPU_CLK27M_90K_reg                                           0xB801B6E8
#define  TIMER_PCR_ACPU_CLK27M_90K_inst_addr                                     "0x0034"
#define  set_TIMER_PCR_ACPU_CLK27M_90K_reg(data)                                 (*((volatile unsigned int*)TIMER_PCR_ACPU_CLK27M_90K_reg)=data)
#define  get_TIMER_PCR_ACPU_CLK27M_90K_reg                                       (*((volatile unsigned int*)TIMER_PCR_ACPU_CLK27M_90K_reg))
#define  TIMER_PCR_ACPU_CLK27M_90K_cnt_shift                                     (0)
#define  TIMER_PCR_ACPU_CLK27M_90K_cnt_mask                                      (0x000001FF)
#define  TIMER_PCR_ACPU_CLK27M_90K_cnt(data)                                     (0x000001FF&(data))
#define  TIMER_PCR_ACPU_CLK27M_90K_get_cnt(data)                                 (0x000001FF&(data))

#define  TIMER_PCR_ACPU_CLK90K_LO                                               0x1801B6EC
#define  TIMER_PCR_ACPU_CLK90K_LO_reg_addr                                       "0xB801B6EC"
#define  TIMER_PCR_ACPU_CLK90K_LO_reg                                            0xB801B6EC
#define  TIMER_PCR_ACPU_CLK90K_LO_inst_addr                                      "0x0035"
#define  set_TIMER_PCR_ACPU_CLK90K_LO_reg(data)                                  (*((volatile unsigned int*)TIMER_PCR_ACPU_CLK90K_LO_reg)=data)
#define  get_TIMER_PCR_ACPU_CLK90K_LO_reg                                        (*((volatile unsigned int*)TIMER_PCR_ACPU_CLK90K_LO_reg))
#define  TIMER_PCR_ACPU_CLK90K_LO_val_shift                                      (0)
#define  TIMER_PCR_ACPU_CLK90K_LO_val_mask                                       (0xFFFFFFFF)
#define  TIMER_PCR_ACPU_CLK90K_LO_val(data)                                      (0xFFFFFFFF&(data))
#define  TIMER_PCR_ACPU_CLK90K_LO_get_val(data)                                  (0xFFFFFFFF&(data))

#define  TIMER_PCR_ACPU_CLK90K_HI                                               0x1801B6F0
#define  TIMER_PCR_ACPU_CLK90K_HI_reg_addr                                       "0xB801B6F0"
#define  TIMER_PCR_ACPU_CLK90K_HI_reg                                            0xB801B6F0
#define  TIMER_PCR_ACPU_CLK90K_HI_inst_addr                                      "0x0036"
#define  set_TIMER_PCR_ACPU_CLK90K_HI_reg(data)                                  (*((volatile unsigned int*)TIMER_PCR_ACPU_CLK90K_HI_reg)=data)
#define  get_TIMER_PCR_ACPU_CLK90K_HI_reg                                        (*((volatile unsigned int*)TIMER_PCR_ACPU_CLK90K_HI_reg))
#define  TIMER_PCR_ACPU_CLK90K_HI_val_shift                                      (0)
#define  TIMER_PCR_ACPU_CLK90K_HI_val_mask                                       (0x0000FFFF)
#define  TIMER_PCR_ACPU_CLK90K_HI_val(data)                                      (0x0000FFFF&(data))
#define  TIMER_PCR_ACPU_CLK90K_HI_get_val(data)                                  (0x0000FFFF&(data))

#define  TIMER_PCR_VCPU_CLK27M_90K                                              0x1801B6F4
#define  TIMER_PCR_VCPU_CLK27M_90K_reg_addr                                      "0xB801B6F4"
#define  TIMER_PCR_VCPU_CLK27M_90K_reg                                           0xB801B6F4
#define  TIMER_PCR_VCPU_CLK27M_90K_inst_addr                                     "0x0037"
#define  set_TIMER_PCR_VCPU_CLK27M_90K_reg(data)                                 (*((volatile unsigned int*)TIMER_PCR_VCPU_CLK27M_90K_reg)=data)
#define  get_TIMER_PCR_VCPU_CLK27M_90K_reg                                       (*((volatile unsigned int*)TIMER_PCR_VCPU_CLK27M_90K_reg))
#define  TIMER_PCR_VCPU_CLK27M_90K_cnt_shift                                     (0)
#define  TIMER_PCR_VCPU_CLK27M_90K_cnt_mask                                      (0x000001FF)
#define  TIMER_PCR_VCPU_CLK27M_90K_cnt(data)                                     (0x000001FF&(data))
#define  TIMER_PCR_VCPU_CLK27M_90K_get_cnt(data)                                 (0x000001FF&(data))

#define  TIMER_PCR_VCPU_CLK90K_LO                                               0x1801B6F8
#define  TIMER_PCR_VCPU_CLK90K_LO_reg_addr                                       "0xB801B6F8"
#define  TIMER_PCR_VCPU_CLK90K_LO_reg                                            0xB801B6F8
#define  TIMER_PCR_VCPU_CLK90K_LO_inst_addr                                      "0x0038"
#define  set_TIMER_PCR_VCPU_CLK90K_LO_reg(data)                                  (*((volatile unsigned int*)TIMER_PCR_VCPU_CLK90K_LO_reg)=data)
#define  get_TIMER_PCR_VCPU_CLK90K_LO_reg                                        (*((volatile unsigned int*)TIMER_PCR_VCPU_CLK90K_LO_reg))
#define  TIMER_PCR_VCPU_CLK90K_LO_val_shift                                      (0)
#define  TIMER_PCR_VCPU_CLK90K_LO_val_mask                                       (0xFFFFFFFF)
#define  TIMER_PCR_VCPU_CLK90K_LO_val(data)                                      (0xFFFFFFFF&(data))
#define  TIMER_PCR_VCPU_CLK90K_LO_get_val(data)                                  (0xFFFFFFFF&(data))

#define  TIMER_PCR_VCPU_CLK90K_HI                                               0x1801B6FC
#define  TIMER_PCR_VCPU_CLK90K_HI_reg_addr                                       "0xB801B6FC"
#define  TIMER_PCR_VCPU_CLK90K_HI_reg                                            0xB801B6FC
#define  TIMER_PCR_VCPU_CLK90K_HI_inst_addr                                      "0x0039"
#define  set_TIMER_PCR_VCPU_CLK90K_HI_reg(data)                                  (*((volatile unsigned int*)TIMER_PCR_VCPU_CLK90K_HI_reg)=data)
#define  get_TIMER_PCR_VCPU_CLK90K_HI_reg                                        (*((volatile unsigned int*)TIMER_PCR_VCPU_CLK90K_HI_reg))
#define  TIMER_PCR_VCPU_CLK90K_HI_val_shift                                      (0)
#define  TIMER_PCR_VCPU_CLK90K_HI_val_mask                                       (0x0000FFFF)
#define  TIMER_PCR_VCPU_CLK90K_HI_val(data)                                      (0x0000FFFF&(data))
#define  TIMER_PCR_VCPU_CLK90K_HI_get_val(data)                                  (0x0000FFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======TIMER register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc0tvr:32;
    };
}timer_tc0tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc1tvr:32;
    };
}timer_tc1tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc2tvr:32;
    };
}timer_tc2tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc3tvr:32;
    };
}timer_tc3tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc4tvr:32;
    };
}timer_tc4tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc5tvr:32;
    };
}timer_tc5tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc6tvr:32;
    };
}timer_tc6tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc7tvr:32;
    };
}timer_tc7tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc8tvr:32;
    };
}timer_tc8tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc9tvr:32;
    };
}timer_tc9tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc10tvr:32;
    };
}timer_tc10tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc11tvr:32;
    };
}timer_tc11tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc0cvr:32;
    };
}timer_tc0cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc1cvr:32;
    };
}timer_tc1cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc2vr:32;
    };
}timer_tc2cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc3cvr:32;
    };
}timer_tc3cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc4cvr:32;
    };
}timer_tc4cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc5vr:32;
    };
}timer_tc5cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc6cvr:32;
    };
}timer_tc6cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc7cvr:32;
    };
}timer_tc7cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc8cvr:32;
    };
}timer_tc8cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc9cvr:32;
    };
}timer_tc9cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc10cvr:32;
    };
}timer_tc10cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc11cvr:32;
    };
}timer_tc11cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc0en:1;
        RBus_UInt32  tc0mode:1;
        RBus_UInt32  tc0pause:1;
        RBus_UInt32  res1:29;
    };
}timer_tc0cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc1en:1;
        RBus_UInt32  tc1mode:1;
        RBus_UInt32  tc1pause:1;
        RBus_UInt32  res1:29;
    };
}timer_tc1cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc2en:1;
        RBus_UInt32  tc2mode:1;
        RBus_UInt32  tc2pause:1;
        RBus_UInt32  res1:29;
    };
}timer_tc2cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc3en:1;
        RBus_UInt32  tc3mode:1;
        RBus_UInt32  tc3pause:1;
        RBus_UInt32  res1:29;
    };
}timer_tc3cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc4en:1;
        RBus_UInt32  tc4mode:1;
        RBus_UInt32  tc4pause:1;
        RBus_UInt32  res1:29;
    };
}timer_tc4cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc5en:1;
        RBus_UInt32  tc5mode:1;
        RBus_UInt32  tc5pause:1;
        RBus_UInt32  res1:29;
    };
}timer_tc5cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc6en:1;
        RBus_UInt32  tc6mode:1;
        RBus_UInt32  tc6pause:1;
        RBus_UInt32  res1:29;
    };
}timer_tc6cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc7en:1;
        RBus_UInt32  tc7mode:1;
        RBus_UInt32  tc7pause:1;
        RBus_UInt32  res1:29;
    };
}timer_tc7cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc8en:1;
        RBus_UInt32  tc8mode:1;
        RBus_UInt32  tc8pause:1;
        RBus_UInt32  res1:29;
    };
}timer_tc8cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc9en:1;
        RBus_UInt32  tc9mode:1;
        RBus_UInt32  tc9pause:1;
        RBus_UInt32  res1:29;
    };
}timer_tc9cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc10en:1;
        RBus_UInt32  tc10mode:1;
        RBus_UInt32  tc10pause:1;
        RBus_UInt32  res1:29;
    };
}timer_tc10cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc11en:1;
        RBus_UInt32  tc11mode:1;
        RBus_UInt32  tc11pause:1;
        RBus_UInt32  res1:29;
    };
}timer_tc11cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:19;
        RBus_UInt32  tc11ie:1;
        RBus_UInt32  tc10ie:1;
        RBus_UInt32  tc9ie:1;
        RBus_UInt32  tc8ie:1;
        RBus_UInt32  tc7ie:1;
        RBus_UInt32  tc6ie:1;
        RBus_UInt32  tc5ie:1;
        RBus_UInt32  tc4ie:1;
        RBus_UInt32  tc3ie:1;
        RBus_UInt32  tc2ie:1;
        RBus_UInt32  tc1ie:1;
        RBus_UInt32  tc0ie:1;
        RBus_UInt32  write_data:1;
    };
}timer_tcicr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:20;
        RBus_UInt32  tc11_int:1;
        RBus_UInt32  tc10_int:1;
        RBus_UInt32  tc9_int:1;
        RBus_UInt32  tc8_int:1;
        RBus_UInt32  tc7_int:1;
        RBus_UInt32  tc6_int:1;
        RBus_UInt32  tc5_int:1;
        RBus_UInt32  tc4_int:1;
        RBus_UInt32  tc3_int:1;
        RBus_UInt32  tc2_int:1;
        RBus_UInt32  tc1_int:1;
        RBus_UInt32  tc0_int:1;
    };
}timer_isr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  en:1;
    };
}timer_clk90k_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  cnt:9;
    };
}timer_scpu_clk27m_90k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:32;
    };
}timer_scpu_clk90k_lo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  val:16;
    };
}timer_scpu_clk90k_hi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  cnt:9;
    };
}timer_acpu_clk27m_90k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:32;
    };
}timer_acpu_clk90k_lo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  val:16;
    };
}timer_acpu_clk90k_hi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  cnt:9;
    };
}timer_vcpu_clk27m_90k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:32;
    };
}timer_vcpu_clk90k_lo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  val:16;
    };
}timer_vcpu_clk90k_hi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  en:1;
    };
}timer_pcr_clk90k_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  cnt:9;
    };
}timer_pcr_scpu_clk27m_90k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:32;
    };
}timer_pcr_scpu_clk90k_lo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  val:16;
    };
}timer_pcr_scpu_clk90k_hi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  cnt:9;
    };
}timer_pcr_acpu_clk27m_90k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:32;
    };
}timer_pcr_acpu_clk90k_lo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  val:16;
    };
}timer_pcr_acpu_clk90k_hi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:23;
        RBus_UInt32  cnt:9;
    };
}timer_pcr_vcpu_clk27m_90k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:32;
    };
}timer_pcr_vcpu_clk90k_lo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:16;
        RBus_UInt32  val:16;
    };
}timer_pcr_vcpu_clk90k_hi_RBUS;

#else //apply LITTLE_ENDIAN

//======TIMER register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc0tvr:32;
    };
}timer_tc0tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc1tvr:32;
    };
}timer_tc1tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc2tvr:32;
    };
}timer_tc2tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc3tvr:32;
    };
}timer_tc3tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc4tvr:32;
    };
}timer_tc4tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc5tvr:32;
    };
}timer_tc5tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc6tvr:32;
    };
}timer_tc6tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc7tvr:32;
    };
}timer_tc7tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc8tvr:32;
    };
}timer_tc8tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc9tvr:32;
    };
}timer_tc9tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc10tvr:32;
    };
}timer_tc10tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc11tvr:32;
    };
}timer_tc11tvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc0cvr:32;
    };
}timer_tc0cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc1cvr:32;
    };
}timer_tc1cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc2vr:32;
    };
}timer_tc2cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc3cvr:32;
    };
}timer_tc3cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc4cvr:32;
    };
}timer_tc4cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc5vr:32;
    };
}timer_tc5cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc6cvr:32;
    };
}timer_tc6cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc7cvr:32;
    };
}timer_tc7cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc8cvr:32;
    };
}timer_tc8cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc9cvr:32;
    };
}timer_tc9cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc10cvr:32;
    };
}timer_tc10cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc11cvr:32;
    };
}timer_tc11cvr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tc0pause:1;
        RBus_UInt32  tc0mode:1;
        RBus_UInt32  tc0en:1;
    };
}timer_tc0cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tc1pause:1;
        RBus_UInt32  tc1mode:1;
        RBus_UInt32  tc1en:1;
    };
}timer_tc1cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tc2pause:1;
        RBus_UInt32  tc2mode:1;
        RBus_UInt32  tc2en:1;
    };
}timer_tc2cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tc3pause:1;
        RBus_UInt32  tc3mode:1;
        RBus_UInt32  tc3en:1;
    };
}timer_tc3cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tc4pause:1;
        RBus_UInt32  tc4mode:1;
        RBus_UInt32  tc4en:1;
    };
}timer_tc4cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tc5pause:1;
        RBus_UInt32  tc5mode:1;
        RBus_UInt32  tc5en:1;
    };
}timer_tc5cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tc6pause:1;
        RBus_UInt32  tc6mode:1;
        RBus_UInt32  tc6en:1;
    };
}timer_tc6cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tc7pause:1;
        RBus_UInt32  tc7mode:1;
        RBus_UInt32  tc7en:1;
    };
}timer_tc7cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tc8pause:1;
        RBus_UInt32  tc8mode:1;
        RBus_UInt32  tc8en:1;
    };
}timer_tc8cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tc9pause:1;
        RBus_UInt32  tc9mode:1;
        RBus_UInt32  tc9en:1;
    };
}timer_tc9cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tc10pause:1;
        RBus_UInt32  tc10mode:1;
        RBus_UInt32  tc10en:1;
    };
}timer_tc10cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:29;
        RBus_UInt32  tc11pause:1;
        RBus_UInt32  tc11mode:1;
        RBus_UInt32  tc11en:1;
    };
}timer_tc11cr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  write_data:1;
        RBus_UInt32  tc0ie:1;
        RBus_UInt32  tc1ie:1;
        RBus_UInt32  tc2ie:1;
        RBus_UInt32  tc3ie:1;
        RBus_UInt32  tc4ie:1;
        RBus_UInt32  tc5ie:1;
        RBus_UInt32  tc6ie:1;
        RBus_UInt32  tc7ie:1;
        RBus_UInt32  tc8ie:1;
        RBus_UInt32  tc9ie:1;
        RBus_UInt32  tc10ie:1;
        RBus_UInt32  tc11ie:1;
        RBus_UInt32  res1:19;
    };
}timer_tcicr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  tc0_int:1;
        RBus_UInt32  tc1_int:1;
        RBus_UInt32  tc2_int:1;
        RBus_UInt32  tc3_int:1;
        RBus_UInt32  tc4_int:1;
        RBus_UInt32  tc5_int:1;
        RBus_UInt32  tc6_int:1;
        RBus_UInt32  tc7_int:1;
        RBus_UInt32  tc8_int:1;
        RBus_UInt32  tc9_int:1;
        RBus_UInt32  tc10_int:1;
        RBus_UInt32  tc11_int:1;
        RBus_UInt32  res1:20;
    };
}timer_isr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  res1:31;
    };
}timer_clk90k_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:9;
        RBus_UInt32  res1:23;
    };
}timer_scpu_clk27m_90k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:32;
    };
}timer_scpu_clk90k_lo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:16;
        RBus_UInt32  res1:16;
    };
}timer_scpu_clk90k_hi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:9;
        RBus_UInt32  res1:23;
    };
}timer_acpu_clk27m_90k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:32;
    };
}timer_acpu_clk90k_lo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:16;
        RBus_UInt32  res1:16;
    };
}timer_acpu_clk90k_hi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:9;
        RBus_UInt32  res1:23;
    };
}timer_vcpu_clk27m_90k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:32;
    };
}timer_vcpu_clk90k_lo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:16;
        RBus_UInt32  res1:16;
    };
}timer_vcpu_clk90k_hi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  en:1;
        RBus_UInt32  res1:31;
    };
}timer_pcr_clk90k_ctrl_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:9;
        RBus_UInt32  res1:23;
    };
}timer_pcr_scpu_clk27m_90k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:32;
    };
}timer_pcr_scpu_clk90k_lo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:16;
        RBus_UInt32  res1:16;
    };
}timer_pcr_scpu_clk90k_hi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:9;
        RBus_UInt32  res1:23;
    };
}timer_pcr_acpu_clk27m_90k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:32;
    };
}timer_pcr_acpu_clk90k_lo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:16;
        RBus_UInt32  res1:16;
    };
}timer_pcr_acpu_clk90k_hi_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  cnt:9;
        RBus_UInt32  res1:23;
    };
}timer_pcr_vcpu_clk27m_90k_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:32;
    };
}timer_pcr_vcpu_clk90k_lo_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  val:16;
        RBus_UInt32  res1:16;
    };
}timer_pcr_vcpu_clk90k_hi_RBUS;




#endif 


#endif 
