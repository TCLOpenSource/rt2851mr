/******************************************************************************
*
*   Realtek Delivery driver
*
*   Copyright(c) 2019 Realtek Semiconductor Corp. All rights reserved.
*
*   @author 
*
*****************************************************************************/

#ifndef _DELIVERY_EXPORT_H_
#define _DELIVERY_EXPORT_H_
#include <linux/types.h>
#include <linux/ioctl.h>

#include <tp/tp_drv_global.h>

typedef enum {
  DELIVERY_CH_A = 0,
  DELIVERY_CH_B,
  DELIVERY_CH_C,
  DELIVERY_CH_D,
  DELIVERY_CH_NUM
} DELIVERY_CHANNEL_T ;

typedef struct {
  DELIVERY_CHANNEL_T 	ch;
  TPK_INPUT_PORT_T 	portType;
  TPK_INPUT_TYPE_T 	inputType;
  TPK_CAS_TYPE_T	casType;
} DELIVERY_TP_SOURCE_CONFIG_T;

typedef struct {
  DELIVERY_CHANNEL_T ch;
} DELIVERY_DELIVERY_CHANNEL_T;

typedef struct {
  DELIVERY_CHANNEL_T ch;
  UINT32 bbf_buff_phy;
  UINT32 bbf_buff_size;
} DELIVERY_DELIVERY_BBF_BUFFER_INFO_T;

typedef struct {
  DELIVERY_CHANNEL_T ch;
  UINT32 bbframe_address;
  UINT32 count;
} DELIVERY_DELIVERY_GET_BBF_BUFFER_T;

typedef struct {
  DELIVERY_CHANNEL_T ch;
  UINT32 sec;
  UINT32 nsec;
  UINT8  wall_clock;
  UINT8  mode;
} DELIVERY_DELIVERY_TIME_INFO_T;

typedef struct {
  DELIVERY_CHANNEL_T ch;
  UINT8           isNeedRecovery;
} DELIVERY_DELIVERY_CLOCK_RECOVERY_T;

typedef struct {
  DELIVERY_CHANNEL_T ch;
  UINT8  mode;
} DELIVERY_DELIVERY_SET_MODE_T;

typedef struct {
  DELIVERY_CHANNEL_T ch;
  UINT8 *data;
  UINT32 data_size;
} DELIVERY_DELIVERY_READ_DATA_T;

typedef struct {
  DELIVERY_CHANNEL_T ch;
  UINT8		current_utc_offset;
  UINT16		ptp_prepend;
  UINT8
  leap59		: 1,
  leap61		: 1,
  reserved	: 6;
} DELIVERY_DELIVERY_SYSTEM_TIME_INFO_T;

typedef struct {
    DELIVERY_CHANNEL_T ch;
    UINT32             cnt;
    JP4K_DELIVERY_FILTER_T *pfiltet_info_list;
}DELIVERY_DELIVERY_TLV_FILTER_INFO_T;

typedef struct {
  UINT8 isACON;
} DELIVERY_DELIVERY_GET_BOOT_STATUS_T;

typedef struct {
  DELIVERY_CHANNEL_T  ch ;
  signed long long  ntp ;
} DELIVERY_DELIVERY_NTP_T ;

typedef struct {
    DELIVERY_CHANNEL_T  ch ;
    UINT32  count;
    JP4K_DELIVERY_MAPPING_INFO *pMapping_info;
} DELIVERY_DELIVERY_MAPPINT_INFO_T ;

#define DELIVERY_IOC_MAGIC  'z'

#define DELIVERY_IOC_DELIVERY_INIT                  (_IOWR(DELIVERY_IOC_MAGIC, 85, int))
#define DELIVERY_IOC_DELIVERY_UNINIT                (_IOR (DELIVERY_IOC_MAGIC, 86, int))
#define DELIVERY_IOC_DELIVERY_OPEN                  (_IOWR(DELIVERY_IOC_MAGIC, 87, DELIVERY_DELIVERY_CHANNEL_T))
#define DELIVERY_IOC_DELIVERY_CLOSE                 (_IOR (DELIVERY_IOC_MAGIC, 88, DELIVERY_DELIVERY_CHANNEL_T))
#define DELIVERY_IOC_DELIVERY_SET_TP_INPUT_CONFIG   (_IOR (DELIVERY_IOC_MAGIC, 89, DELIVERY_TP_SOURCE_CONFIG_T))
#define DELIVERY_IOC_DELIVERY_REQUEST_BBFRAME       (_IOR (DELIVERY_IOC_MAGIC, 90, DELIVERY_DELIVERY_CHANNEL_T))
#define DELIVERY_IOC_DELIVERY_CANCEL_BBFRAME        (_IOR (DELIVERY_IOC_MAGIC, 91, DELIVERY_DELIVERY_CHANNEL_T))
#define DELIVERY_IOC_DELIVERY_GET_BBFRAME_BUFFER    (_IOR (DELIVERY_IOC_MAGIC, 92, DELIVERY_DELIVERY_GET_BBF_BUFFER_T))
#define DELIVERY_IOC_DELIVERY_RETURN_BBFRAME_BUFFER (_IOR (DELIVERY_IOC_MAGIC, 93, DELIVERY_DELIVERY_GET_BBF_BUFFER_T))
#define DELIVERY_IOC_DELIVERY_GET_BBFRAME_BUFF_INFO (_IOR (DELIVERY_IOC_MAGIC, 94, DELIVERY_DELIVERY_BBF_BUFFER_INFO_T))
#define DELIVERY_IOC_VTP_VDEC_CONNECT               (_IOR (DELIVERY_IOC_MAGIC, 95, DELIVERY_VTP_VDEC_MAP_T))
#define DELIVERY_IOC_VTP_VDEC_DISCONNECT            (_IOR (DELIVERY_IOC_MAGIC, 96, DELIVERY_VTP_VDEC_MAP_T))

#define DELIVERY_IOC_DELIVERY_GET_CURRENT_TIME_INFO (_IOR (DELIVERY_IOC_MAGIC, 97, DELIVERY_DELIVERY_TIME_INFO_T))
#define DELIVERY_IOC_DELIVERY_SET_CURRENT_TIME_INFO (_IOR (DELIVERY_IOC_MAGIC, 98, DELIVERY_DELIVERY_TIME_INFO_T))
#define DELIVERY_IOC_DELIVERY_SET_SYSTEM_TIME_INFO  (_IOR (DELIVERY_IOC_MAGIC, 99, DELIVERY_DELIVERY_SYSTEM_TIME_INFO_T))
#define DELIVERY_IOC_DELIVERY_SET_CLOCK_RECOVERY    (_IOR (DELIVERY_IOC_MAGIC, 100, DELIVERY_DELIVERY_CLOCK_RECOVERY_T))

#define DELIVERY_IOC_DELIVERY_SET_MODE              (_IOR  (DELIVERY_IOC_MAGIC, 101, DELIVERY_DELIVERY_SET_MODE_T))
#define DELIVERY_IOC_DELIVERY_REQUEST_DATA          (_IOR  (DELIVERY_IOC_MAGIC, 102, DELIVERY_DELIVERY_CHANNEL_T))
#define DELIVERY_IOC_DELIVERY_CANCEL_DATA           (_IOR  (DELIVERY_IOC_MAGIC, 103, DELIVERY_DELIVERY_CHANNEL_T))
#define DELIVERY_IOC_DELIVERY_GET_DATA              (_IOWR (DELIVERY_IOC_MAGIC, 104, DELIVERY_DELIVERY_READ_DATA_T))
#define DELIVERY_IOC_DELIVERY_GET_BOOT_STATUS       (_IOWR (DELIVERY_IOC_MAGIC, 106, DELIVERY_DELIVERY_GET_BOOT_STATUS_T))
#define DELIVERY_IOC_DELIVERY_SET_TLV_FILTER        (_IOWR (DELIVERY_IOC_MAGIC, 107, DELIVERY_DELIVERY_TLV_FILTER_INFO_T))
#define DELIVERY_IOC_DELIVERY_GET_NTP               (_IOWR (DELIVERY_IOC_MAGIC, 108, DELIVERY_DELIVERY_NTP_T ))
#define DELIVERY_IOC_DELIVERY_GET_MAPPINF_INFO      (_IOWR (DELIVERY_IOC_MAGIC, 109, DELIVERY_DELIVERY_MAPPINT_INFO_T ))
#define DELIVERY_IOC_DELIVERY_FLUSH                 (_IOWR (DELIVERY_IOC_MAGIC, 110, DELIVERY_DELIVERY_CHANNEL_T ))

#define DELIVERY_IOC_MAXNR           111

#endif
