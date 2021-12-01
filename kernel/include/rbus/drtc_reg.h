/**
* @file Merlin5-DesignSpec-ISO_MISC_DRTC
* RBus systemc program.
*
* @author RS_MM2_SD
* @email mm_mm2_rd_sw_kernel@realtek.com
* @ingroup model_rbus
 * @version { 1.0 }
 **
 */

#ifndef _RBUS_DRTC_REG_H_
#define _RBUS_DRTC_REG_H_

#include "rbus_types.h"



//  DRTC Register Address
#define  DRTC_RTCSEC                                                            0x18061900
#define  DRTC_RTCSEC_reg_addr                                                    "0xB8061900"
#define  DRTC_RTCSEC_reg                                                         0xB8061900
#define  DRTC_RTCSEC_inst_addr                                                   "0x0000"
#define  set_DRTC_RTCSEC_reg(data)                                               (*((volatile unsigned int*)DRTC_RTCSEC_reg)=data)
#define  get_DRTC_RTCSEC_reg                                                     (*((volatile unsigned int*)DRTC_RTCSEC_reg))
#define  DRTC_RTCSEC_rtcsec_shift                                                (0)
#define  DRTC_RTCSEC_rtcsec_mask                                                 (0x0000007F)
#define  DRTC_RTCSEC_rtcsec(data)                                                (0x0000007F&(data))
#define  DRTC_RTCSEC_get_rtcsec(data)                                            (0x0000007F&(data))

#define  DRTC_RTCMIN                                                            0x18061904
#define  DRTC_RTCMIN_reg_addr                                                    "0xB8061904"
#define  DRTC_RTCMIN_reg                                                         0xB8061904
#define  DRTC_RTCMIN_inst_addr                                                   "0x0001"
#define  set_DRTC_RTCMIN_reg(data)                                               (*((volatile unsigned int*)DRTC_RTCMIN_reg)=data)
#define  get_DRTC_RTCMIN_reg                                                     (*((volatile unsigned int*)DRTC_RTCMIN_reg))
#define  DRTC_RTCMIN_rtcmin_shift                                                (0)
#define  DRTC_RTCMIN_rtcmin_mask                                                 (0x0000003F)
#define  DRTC_RTCMIN_rtcmin(data)                                                (0x0000003F&(data))
#define  DRTC_RTCMIN_get_rtcmin(data)                                            (0x0000003F&(data))

#define  DRTC_RTCHR                                                             0x18061908
#define  DRTC_RTCHR_reg_addr                                                     "0xB8061908"
#define  DRTC_RTCHR_reg                                                          0xB8061908
#define  DRTC_RTCHR_inst_addr                                                    "0x0002"
#define  set_DRTC_RTCHR_reg(data)                                                (*((volatile unsigned int*)DRTC_RTCHR_reg)=data)
#define  get_DRTC_RTCHR_reg                                                      (*((volatile unsigned int*)DRTC_RTCHR_reg))
#define  DRTC_RTCHR_rtchr_shift                                                  (0)
#define  DRTC_RTCHR_rtchr_mask                                                   (0x0000001F)
#define  DRTC_RTCHR_rtchr(data)                                                  (0x0000001F&(data))
#define  DRTC_RTCHR_get_rtchr(data)                                              (0x0000001F&(data))

#define  DRTC_RTCDATE1                                                          0x1806190C
#define  DRTC_RTCDATE1_reg_addr                                                  "0xB806190C"
#define  DRTC_RTCDATE1_reg                                                       0xB806190C
#define  DRTC_RTCDATE1_inst_addr                                                 "0x0003"
#define  set_DRTC_RTCDATE1_reg(data)                                             (*((volatile unsigned int*)DRTC_RTCDATE1_reg)=data)
#define  get_DRTC_RTCDATE1_reg                                                   (*((volatile unsigned int*)DRTC_RTCDATE1_reg))
#define  DRTC_RTCDATE1_rtcdate1_shift                                            (0)
#define  DRTC_RTCDATE1_rtcdate1_mask                                             (0x000000FF)
#define  DRTC_RTCDATE1_rtcdate1(data)                                            (0x000000FF&(data))
#define  DRTC_RTCDATE1_get_rtcdate1(data)                                        (0x000000FF&(data))

#define  DRTC_RTCDATE2                                                          0x18061910
#define  DRTC_RTCDATE2_reg_addr                                                  "0xB8061910"
#define  DRTC_RTCDATE2_reg                                                       0xB8061910
#define  DRTC_RTCDATE2_inst_addr                                                 "0x0004"
#define  set_DRTC_RTCDATE2_reg(data)                                             (*((volatile unsigned int*)DRTC_RTCDATE2_reg)=data)
#define  get_DRTC_RTCDATE2_reg                                                   (*((volatile unsigned int*)DRTC_RTCDATE2_reg))
#define  DRTC_RTCDATE2_rtcdate2_shift                                            (0)
#define  DRTC_RTCDATE2_rtcdate2_mask                                             (0x0000003F)
#define  DRTC_RTCDATE2_rtcdate2(data)                                            (0x0000003F&(data))
#define  DRTC_RTCDATE2_get_rtcdate2(data)                                        (0x0000003F&(data))

#define  DRTC_ALMMIN                                                            0x18061914
#define  DRTC_ALMMIN_reg_addr                                                    "0xB8061914"
#define  DRTC_ALMMIN_reg                                                         0xB8061914
#define  DRTC_ALMMIN_inst_addr                                                   "0x0005"
#define  set_DRTC_ALMMIN_reg(data)                                               (*((volatile unsigned int*)DRTC_ALMMIN_reg)=data)
#define  get_DRTC_ALMMIN_reg                                                     (*((volatile unsigned int*)DRTC_ALMMIN_reg))
#define  DRTC_ALMMIN_almmin_shift                                                (0)
#define  DRTC_ALMMIN_almmin_mask                                                 (0x0000003F)
#define  DRTC_ALMMIN_almmin(data)                                                (0x0000003F&(data))
#define  DRTC_ALMMIN_get_almmin(data)                                            (0x0000003F&(data))

#define  DRTC_ALMHR                                                             0x18061918
#define  DRTC_ALMHR_reg_addr                                                     "0xB8061918"
#define  DRTC_ALMHR_reg                                                          0xB8061918
#define  DRTC_ALMHR_inst_addr                                                    "0x0006"
#define  set_DRTC_ALMHR_reg(data)                                                (*((volatile unsigned int*)DRTC_ALMHR_reg)=data)
#define  get_DRTC_ALMHR_reg                                                      (*((volatile unsigned int*)DRTC_ALMHR_reg))
#define  DRTC_ALMHR_almhr_shift                                                  (0)
#define  DRTC_ALMHR_almhr_mask                                                   (0x0000001F)
#define  DRTC_ALMHR_almhr(data)                                                  (0x0000001F&(data))
#define  DRTC_ALMHR_get_almhr(data)                                              (0x0000001F&(data))

#define  DRTC_ALMDATE1                                                          0x1806191C
#define  DRTC_ALMDATE1_reg_addr                                                  "0xB806191C"
#define  DRTC_ALMDATE1_reg                                                       0xB806191C
#define  DRTC_ALMDATE1_inst_addr                                                 "0x0007"
#define  set_DRTC_ALMDATE1_reg(data)                                             (*((volatile unsigned int*)DRTC_ALMDATE1_reg)=data)
#define  get_DRTC_ALMDATE1_reg                                                   (*((volatile unsigned int*)DRTC_ALMDATE1_reg))
#define  DRTC_ALMDATE1_almdate1_shift                                            (0)
#define  DRTC_ALMDATE1_almdate1_mask                                             (0x000000FF)
#define  DRTC_ALMDATE1_almdate1(data)                                            (0x000000FF&(data))
#define  DRTC_ALMDATE1_get_almdate1(data)                                        (0x000000FF&(data))

#define  DRTC_ALMDATE2                                                          0x18061920
#define  DRTC_ALMDATE2_reg_addr                                                  "0xB8061920"
#define  DRTC_ALMDATE2_reg                                                       0xB8061920
#define  DRTC_ALMDATE2_inst_addr                                                 "0x0008"
#define  set_DRTC_ALMDATE2_reg(data)                                             (*((volatile unsigned int*)DRTC_ALMDATE2_reg)=data)
#define  get_DRTC_ALMDATE2_reg                                                   (*((volatile unsigned int*)DRTC_ALMDATE2_reg))
#define  DRTC_ALMDATE2_almdate2_shift                                            (0)
#define  DRTC_ALMDATE2_almdate2_mask                                             (0x0000003F)
#define  DRTC_ALMDATE2_almdate2(data)                                            (0x0000003F&(data))
#define  DRTC_ALMDATE2_get_almdate2(data)                                        (0x0000003F&(data))

#define  DRTC_RTCSTOP                                                           0x18061924
#define  DRTC_RTCSTOP_reg_addr                                                   "0xB8061924"
#define  DRTC_RTCSTOP_reg                                                        0xB8061924
#define  DRTC_RTCSTOP_inst_addr                                                  "0x0009"
#define  set_DRTC_RTCSTOP_reg(data)                                              (*((volatile unsigned int*)DRTC_RTCSTOP_reg)=data)
#define  get_DRTC_RTCSTOP_reg                                                    (*((volatile unsigned int*)DRTC_RTCSTOP_reg))
#define  DRTC_RTCSTOP_rtcstop_shift                                              (0)
#define  DRTC_RTCSTOP_rtcstop_mask                                               (0x00000001)
#define  DRTC_RTCSTOP_rtcstop(data)                                              (0x00000001&(data))
#define  DRTC_RTCSTOP_get_rtcstop(data)                                          (0x00000001&(data))

#define  DRTC_ALMHSEC                                                           0x18061928
#define  DRTC_ALMHSEC_reg_addr                                                   "0xB8061928"
#define  DRTC_ALMHSEC_reg                                                        0xB8061928
#define  DRTC_ALMHSEC_inst_addr                                                  "0x000A"
#define  set_DRTC_ALMHSEC_reg(data)                                              (*((volatile unsigned int*)DRTC_ALMHSEC_reg)=data)
#define  get_DRTC_ALMHSEC_reg                                                    (*((volatile unsigned int*)DRTC_ALMHSEC_reg))
#define  DRTC_ALMHSEC_almhsec_shift                                              (0)
#define  DRTC_ALMHSEC_almhsec_mask                                               (0x0000007F)
#define  DRTC_ALMHSEC_almhsec(data)                                              (0x0000007F&(data))
#define  DRTC_ALMHSEC_get_almhsec(data)                                          (0x0000007F&(data))

#define  DRTC_RTCEN                                                             0x1806192C
#define  DRTC_RTCEN_reg_addr                                                     "0xB806192C"
#define  DRTC_RTCEN_reg                                                          0xB806192C
#define  DRTC_RTCEN_inst_addr                                                    "0x000B"
#define  set_DRTC_RTCEN_reg(data)                                                (*((volatile unsigned int*)DRTC_RTCEN_reg)=data)
#define  get_DRTC_RTCEN_reg                                                      (*((volatile unsigned int*)DRTC_RTCEN_reg))
#define  DRTC_RTCEN_rtcen_shift                                                  (0)
#define  DRTC_RTCEN_rtcen_mask                                                   (0x000000FF)
#define  DRTC_RTCEN_rtcen(data)                                                  (0x000000FF&(data))
#define  DRTC_RTCEN_get_rtcen(data)                                              (0x000000FF&(data))

#define  DRTC_RTCCR                                                             0x18061930
#define  DRTC_RTCCR_reg_addr                                                     "0xB8061930"
#define  DRTC_RTCCR_reg                                                          0xB8061930
#define  DRTC_RTCCR_inst_addr                                                    "0x000C"
#define  set_DRTC_RTCCR_reg(data)                                                (*((volatile unsigned int*)DRTC_RTCCR_reg)=data)
#define  get_DRTC_RTCCR_reg                                                      (*((volatile unsigned int*)DRTC_RTCCR_reg))
#define  DRTC_RTCCR_rtc_alarm_int_status_shift                                   (31)
#define  DRTC_RTCCR_rtc_date_int_status_shift                                    (30)
#define  DRTC_RTCCR_rtc_hour_int_status_shift                                    (29)
#define  DRTC_RTCCR_rtc_min_int_status_shift                                     (28)
#define  DRTC_RTCCR_rtc_hsec_int_status_shift                                    (27)
#define  DRTC_RTCCR_dummy_2_shift                                                (7)
#define  DRTC_RTCCR_rtcrst_shift                                                 (6)
#define  DRTC_RTCCR_dummy_1_shift                                                (5)
#define  DRTC_RTCCR_alarminte_shift                                              (4)
#define  DRTC_RTCCR_dainte_shift                                                 (3)
#define  DRTC_RTCCR_huinte_shift                                                 (2)
#define  DRTC_RTCCR_muinte_shift                                                 (1)
#define  DRTC_RTCCR_hsuinte_shift                                                (0)
#define  DRTC_RTCCR_rtc_alarm_int_status_mask                                    (0x80000000)
#define  DRTC_RTCCR_rtc_date_int_status_mask                                     (0x40000000)
#define  DRTC_RTCCR_rtc_hour_int_status_mask                                     (0x20000000)
#define  DRTC_RTCCR_rtc_min_int_status_mask                                      (0x10000000)
#define  DRTC_RTCCR_rtc_hsec_int_status_mask                                     (0x08000000)
#define  DRTC_RTCCR_dummy_2_mask                                                 (0x00000380)
#define  DRTC_RTCCR_rtcrst_mask                                                  (0x00000040)
#define  DRTC_RTCCR_dummy_1_mask                                                 (0x00000020)
#define  DRTC_RTCCR_alarminte_mask                                               (0x00000010)
#define  DRTC_RTCCR_dainte_mask                                                  (0x00000008)
#define  DRTC_RTCCR_huinte_mask                                                  (0x00000004)
#define  DRTC_RTCCR_muinte_mask                                                  (0x00000002)
#define  DRTC_RTCCR_hsuinte_mask                                                 (0x00000001)
#define  DRTC_RTCCR_rtc_alarm_int_status(data)                                   (0x80000000&((data)<<31))
#define  DRTC_RTCCR_rtc_date_int_status(data)                                    (0x40000000&((data)<<30))
#define  DRTC_RTCCR_rtc_hour_int_status(data)                                    (0x20000000&((data)<<29))
#define  DRTC_RTCCR_rtc_min_int_status(data)                                     (0x10000000&((data)<<28))
#define  DRTC_RTCCR_rtc_hsec_int_status(data)                                    (0x08000000&((data)<<27))
#define  DRTC_RTCCR_dummy_2(data)                                                (0x00000380&((data)<<7))
#define  DRTC_RTCCR_rtcrst(data)                                                 (0x00000040&((data)<<6))
#define  DRTC_RTCCR_dummy_1(data)                                                (0x00000020&((data)<<5))
#define  DRTC_RTCCR_alarminte(data)                                              (0x00000010&((data)<<4))
#define  DRTC_RTCCR_dainte(data)                                                 (0x00000008&((data)<<3))
#define  DRTC_RTCCR_huinte(data)                                                 (0x00000004&((data)<<2))
#define  DRTC_RTCCR_muinte(data)                                                 (0x00000002&((data)<<1))
#define  DRTC_RTCCR_hsuinte(data)                                                (0x00000001&(data))
#define  DRTC_RTCCR_get_rtc_alarm_int_status(data)                               ((0x80000000&(data))>>31)
#define  DRTC_RTCCR_get_rtc_date_int_status(data)                                ((0x40000000&(data))>>30)
#define  DRTC_RTCCR_get_rtc_hour_int_status(data)                                ((0x20000000&(data))>>29)
#define  DRTC_RTCCR_get_rtc_min_int_status(data)                                 ((0x10000000&(data))>>28)
#define  DRTC_RTCCR_get_rtc_hsec_int_status(data)                                ((0x08000000&(data))>>27)
#define  DRTC_RTCCR_get_dummy_2(data)                                            ((0x00000380&(data))>>7)
#define  DRTC_RTCCR_get_rtcrst(data)                                             ((0x00000040&(data))>>6)
#define  DRTC_RTCCR_get_dummy_1(data)                                            ((0x00000020&(data))>>5)
#define  DRTC_RTCCR_get_alarminte(data)                                          ((0x00000010&(data))>>4)
#define  DRTC_RTCCR_get_dainte(data)                                             ((0x00000008&(data))>>3)
#define  DRTC_RTCCR_get_huinte(data)                                             ((0x00000004&(data))>>2)
#define  DRTC_RTCCR_get_muinte(data)                                             ((0x00000002&(data))>>1)
#define  DRTC_RTCCR_get_hsuinte(data)                                            (0x00000001&(data))

#define  DRTC_RTCDIV                                                            0x18061934
#define  DRTC_RTCDIV_reg_addr                                                    "0xB8061934"
#define  DRTC_RTCDIV_reg                                                         0xB8061934
#define  DRTC_RTCDIV_inst_addr                                                   "0x000D"
#define  set_DRTC_RTCDIV_reg(data)                                               (*((volatile unsigned int*)DRTC_RTCDIV_reg)=data)
#define  get_DRTC_RTCDIV_reg                                                     (*((volatile unsigned int*)DRTC_RTCDIV_reg))
#define  DRTC_RTCDIV_hsec_shift                                                  (0)
#define  DRTC_RTCDIV_hsec_mask                                                   (0x00FFFFFF)
#define  DRTC_RTCDIV_hsec(data)                                                  (0x00FFFFFF&(data))
#define  DRTC_RTCDIV_get_hsec(data)                                              (0x00FFFFFF&(data))

#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

//======DRTC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  rtcsec:7;
    };
}drtc_rtcsec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  rtcmin:6;
    };
}drtc_rtcmin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  rtchr:5;
    };
}drtc_rtchr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rtcdate1:8;
    };
}drtc_rtcdate1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  rtcdate2:6;
    };
}drtc_rtcdate2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  almmin:6;
    };
}drtc_almmin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:27;
        RBus_UInt32  almhr:5;
    };
}drtc_almhr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  almdate1:8;
    };
}drtc_almdate1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:26;
        RBus_UInt32  almdate2:6;
    };
}drtc_almdate2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:31;
        RBus_UInt32  rtcstop:1;
    };
}drtc_rtcstop_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:25;
        RBus_UInt32  almhsec:7;
    };
}drtc_almhsec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:24;
        RBus_UInt32  rtcen:8;
    };
}drtc_rtcen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rtc_alarm_int_status:1;
        RBus_UInt32  rtc_date_int_status:1;
        RBus_UInt32  rtc_hour_int_status:1;
        RBus_UInt32  rtc_min_int_status:1;
        RBus_UInt32  rtc_hsec_int_status:1;
        RBus_UInt32  res1:17;
        RBus_UInt32  dummy_2:3;
        RBus_UInt32  rtcrst:1;
        RBus_UInt32  dummy_1:1;
        RBus_UInt32  alarminte:1;
        RBus_UInt32  dainte:1;
        RBus_UInt32  huinte:1;
        RBus_UInt32  muinte:1;
        RBus_UInt32  hsuinte:1;
    };
}drtc_rtccr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  res1:8;
        RBus_UInt32  hsec:24;
    };
}drtc_rtcdiv_RBUS;

#else //apply LITTLE_ENDIAN

//======DRTC register structure define==========

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rtcsec:7;
        RBus_UInt32  res1:25;
    };
}drtc_rtcsec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rtcmin:6;
        RBus_UInt32  res1:26;
    };
}drtc_rtcmin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rtchr:5;
        RBus_UInt32  res1:27;
    };
}drtc_rtchr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rtcdate1:8;
        RBus_UInt32  res1:24;
    };
}drtc_rtcdate1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rtcdate2:6;
        RBus_UInt32  res1:26;
    };
}drtc_rtcdate2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  almmin:6;
        RBus_UInt32  res1:26;
    };
}drtc_almmin_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  almhr:5;
        RBus_UInt32  res1:27;
    };
}drtc_almhr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  almdate1:8;
        RBus_UInt32  res1:24;
    };
}drtc_almdate1_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  almdate2:6;
        RBus_UInt32  res1:26;
    };
}drtc_almdate2_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rtcstop:1;
        RBus_UInt32  res1:31;
    };
}drtc_rtcstop_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  almhsec:7;
        RBus_UInt32  res1:25;
    };
}drtc_almhsec_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  rtcen:8;
        RBus_UInt32  res1:24;
    };
}drtc_rtcen_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hsuinte:1;
        RBus_UInt32  muinte:1;
        RBus_UInt32  huinte:1;
        RBus_UInt32  dainte:1;
        RBus_UInt32  alarminte:1;
        RBus_UInt32  dummy_1:1;
        RBus_UInt32  rtcrst:1;
        RBus_UInt32  dummy_2:3;
        RBus_UInt32  res1:17;
        RBus_UInt32  rtc_hsec_int_status:1;
        RBus_UInt32  rtc_min_int_status:1;
        RBus_UInt32  rtc_hour_int_status:1;
        RBus_UInt32  rtc_date_int_status:1;
        RBus_UInt32  rtc_alarm_int_status:1;
    };
}drtc_rtccr_RBUS;

typedef union
{
    RBus_UInt32 regValue;
    struct{
        RBus_UInt32  hsec:24;
        RBus_UInt32  res1:8;
    };
}drtc_rtcdiv_RBUS;




#endif 


#endif 
