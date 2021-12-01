#ifndef __SCALER_COLOR_TV043_H__
#define __SCALER_COLOR_TV043_H__

#ifdef __cplusplus
extern "C" {
#endif
#if CONFIG_FIRMWARE_IN_KERNEL
#include <tvscalercontrol/vip/scalerColor.h>
#else
#include <Platform_Lib/TVScalerControl/vip/scalerColor.h>
#endif

#ifndef SINT8
typedef	signed char				__SINT8;
#define SINT8 __SINT8
#endif

#ifndef SINT16
typedef	signed short			__SINT16;
#define SINT16 __SINT16
#endif

#if CONFIG_FIRMWARE_IN_KERNEL
#else
#ifndef BOOLEAN
typedef	unsigned int			__BOOLEAN;
#define BOOLEAN __BOOLEAN
#endif
#endif

/*------------- parameter definition ----------*/

/*------------- function prototye ------------*/
void fwif_color_set_color_temp_tv043(unsigned char enable, unsigned short Red_Con, unsigned short Green_Con, unsigned short Blue_Con,
	short Red_Bri, short Green_Bri, short Blue_Bri);




#ifdef __cplusplus
}
#endif

#endif /* __SCALER_COLOR_TV006_H__*/


