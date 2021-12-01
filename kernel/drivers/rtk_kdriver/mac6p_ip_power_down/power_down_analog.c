#include <rbus/stb_reg.h>
#include <rbus/emcu_reg.h>
#include <rtk_kdriver/io.h>
#include <linux/delay.h>

#if defined ScalerTimer_DelayXms
#undef ScalerTimer_DelayXms
#endif 
#define ScalerTimer_DelayXms(a) mdelay(a)

void ac_on_power_down_analog(void)
{

        printk(KERN_CRIT "%s %d \n", __FILE__, __LINE__);
        
#include "audio_power_down.tbl"

#include "cec_power_down.tbl"

#include "mac6p_ETN_power_down.tbl"
#include "Mac6p_HDMI_power_down.tbl"
#include "Mac6P_IFD_PowerDown_Script.tbl"
#include "Mac6p_PIF_power_down.tbl"
#include "Mac6p_YPP_VGA_ADC_power_down.tbl"
#include "USB_Power_down.tbl"

}
