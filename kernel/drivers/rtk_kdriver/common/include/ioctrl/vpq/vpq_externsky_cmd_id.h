#ifndef _VPQ_EXTERNSKY_CMD_ID_H_
#define _VPQ_EXTERNSKY_CMD_ID_H_

/************************************************************************
 *  Include files
 ************************************************************************/
//#include "vpq/vpq_extern_type.h"

/************************************************************************
 *  IO_CTRL Definitions
 ************************************************************************/
#define VPQ_EXTERNSKY_DEVICE_NAME						"vpqexdev010"
#define VPQ_EXTERNSKY_IOC_MAGIC 's'

enum vpq_extend_sky_ioc_pq_cmd
{
	VPQ_EXTERNSKY_IOC_PQ_CMD_INIT = 0,
	VPQ_EXTERNSKY_IOC_PQ_CMD_UNINIT = 1,/* 1*/
	VPQ_EXTERNSKY_IOC_PQ_CMD_OPEN = 2,/* 2*/
	VPQ_EXTERNSKY_IOC_PQ_CMD_CLOSE = 3,/* 3*/	
	VPQ_EXTERNSKY_IOC_PQ_CMD_GET_COLOR_GAIN = 10,
	VPQ_EXTERNSKY_IOC_PQ_CMD_SET_COLOR_GAIN_EXTERN = 11,
	VPQ_EXTERNSKY_IOC_PQ_CMD_GET_FLESH_TONE = 12,
	VPQ_EXTERNSKY_IOC_PQ_CMD_SET_FLESH_TONE = 13,
	VPQ_EXTERNSKY_IOC_PQ_CMD_GET_GAMMA_NUM = 14,
	VPQ_EXTERNSKY_IOC_PQ_CMD_SET_GAMMA = 15,
	VPQ_EXTERNSKY_IOC_PQ_CMD_GET_PQ_MODULE = 16,
	VPQ_EXTERNSKY_IOC_PQ_CMD_SET_PQ_MODULE = 17,
	VPQ_EXTERNSKY_IOC_PQ_CMD_SET_DEMO = 18,	
	VPQ_EXTERNSKY_IOC_PQ_CMD_GET_SR_LEVEL = 19,
	VPQ_EXTERNSKY_IOC_PQ_CMD_SET_SR_LEVEL = 20,
	VPQ_EXTERNSKY_IOC_PQ_CMD_GET_DE_RINGING = 21,
	VPQ_EXTERNSKY_IOC_PQ_CMD_SET_DE_RINGING = 22,
	VPQ_EXTERNSKY_IOC_PQ_CMD_GET_OD_LEVEL = 23,
	VPQ_EXTERNSKY_IOC_PQ_CMD_SET_OD_READ_ENABLE =24,
	VPQ_EXTERNSKY_IOC_PQ_CMD_GET_notifyPlatformColorTemp = 25,
	
};

#define VPQ_EXTERNSKY_IOC_INIT						_IO(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_INIT)
#define VPQ_EXTERNSKY_IOC_UNINIT						_IO(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_UNINIT)
#define VPQ_EXTERNSKY_IOC_OPEN						_IO(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_OPEN)
#define VPQ_EXTERNSKY_IOC_CLOSE						_IO(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_CLOSE)


/************************************************************************
 *  TV010 External variables
 ************************************************************************/
#define VPQ_EXTERNSKY_IOC_GET_COLOR_GAIN				_IOR(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_GET_COLOR_GAIN, unsigned int)
#define VPQ_EXTERNSKY_IOC_SET_COLOR_GAIN_EXTERN				_IOW(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_SET_COLOR_GAIN_EXTERN, unsigned int)
#define VPQ_EXTERNSKY_IOC_GET_FLESH_TONE				_IOR(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_GET_FLESH_TONE, unsigned int)
#define VPQ_EXTERNSKY_IOC_SET_FLESH_TONE				_IOW(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_SET_FLESH_TONE, unsigned int)
#define VPQ_EXTERNSKY_IOC_GET_GAMMA_NUM			_IOR(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_GET_GAMMA_NUM, unsigned int)
#define VPQ_EXTERNSKY_IOC_SET_GAMMA				_IOW(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_SET_GAMMA, unsigned int)
#define VPQ_EXTERNSKY_IOC_GET_PQ_MODULE				_IOR(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_GET_PQ_MODULE, unsigned int)
#define VPQ_EXTERNSKY_IOC_SET_PQ_MODULE				_IOW(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_SET_PQ_MODULE, unsigned int)
#define VPQ_EXTERNSKY_IOC_SET_DEMO				_IOW(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_SET_DEMO, unsigned int)
#define VPQ_EXTERNSKY_IOC_GET_DE_RINGING				_IOR(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_GET_DE_RINGING, unsigned int)
#define VPQ_EXTERNSKY_IOC_SET_DE_RINGING				_IOW(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_SET_DE_RINGING, unsigned int)
#define VPQ_EXTERNSKY_IOC_GET_SR_LEVEL				_IOR(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_GET_SR_LEVEL, unsigned int)
#define VPQ_EXTERNSKY_IOC_SET_SR_LEVEL				_IOW(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_SET_SR_LEVEL, unsigned int)
#define VPQ_EXTERNSKY_IOC_GET_OD_LEVEL				_IOR(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_GET_OD_LEVEL, unsigned int)
#define VPQ_EXTERNSKY_IOC_SET_OD_READ_ENABLE				_IOW(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_SET_OD_READ_ENABLE, unsigned int)
#define VPQ_EXTERNSKY_IOC_GET_NOTIFY_PLATFORM_COLOT_TEMP  _IOW(VPQ_EXTERNSKY_IOC_MAGIC, VPQ_EXTERNSKY_IOC_PQ_CMD_GET_notifyPlatformColorTemp, unsigned char)


#endif	/* _VPQ_EXTERNSKY_CMD_ID_H_ */