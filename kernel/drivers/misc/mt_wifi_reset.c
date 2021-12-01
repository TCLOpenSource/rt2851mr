#include <linux/kernel.h>
#include <linux/delay.h>
#include <linux/slab.h>

#include "rtk_kdriver/rtk_gpio.h"
#include <mach/rtk_log.h>
#include "mt_wifi_reset.h"

void MT_Wifi_Reset(int mt_delay)
{
	rtd_printk(KERN_WARNING, "WIFI_ON", "===MT7638_Wifi_Reset===mdelay:%d=\n",mt_delay);
	static RTK_GPIO_ID pout = rtk_gpio_id(ISO_GPIO, 45);
#ifdef CONFIG_RTK_KDRV_GPIO
	rtk_gpio_output(pout,  0);
	rtk_gpio_set_dir(pout, 1);
	mdelay(mt_delay);
	rtk_gpio_output(pout,  1);
	rtk_gpio_set_dir(pout, 1);
#endif
}
