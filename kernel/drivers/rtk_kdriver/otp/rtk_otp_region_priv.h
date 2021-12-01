#ifndef __RTK_OTP_REGION_PRIV_H__
#define __RTK_OTP_REGION_PRIV_H__
#include <rtk_kdriver/rtk_otp_region.h>

#define OTP_BIT_MASK(i)       (0xFFFFFFFF >> (32-(i)))


typedef struct _OTP_REGION_INFO
{
	OTP_REGION_ID region_id;
	int ofst; /*bit*/
	int len; /*bit*/
	const char *region_name;
}OTP_REGION_INFO;



#endif

