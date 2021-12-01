#if CONFIG_FIRMWARE_IN_KERNEL

#include <linux/kernel.h>
#include <linux/delay.h>
#include <linux/types.h>
#include <linux/module.h>
#include <linux/string.h>
#include <linux/device.h>
#include <linux/cdev.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/platform_device.h>
#include <linux/mtd/mtd.h>
#include <linux/uaccess.h>
#include <asm/cacheflush.h>
//#include <mach/RPCDriver.h>
#include <linux/pageremap.h>
/*some include about AP*/
#include <tvscalercontrol/scaler/scalercolorlib.h>
#include <tvscalercontrol/scaler/scalertimer.h>
#include <tvscalercontrol/io/ioregdrv.h>

/*some include about VIP Driver*/
/*#include <tvscalercontrol/vip/scalerColor.h>*/
#include <tvscalercontrol/vip/vip_reg_def.h>
#include <tvscalercontrol/vip/scalerColor_tv006.h>
#include <tvscalercontrol/vip/di_ma.h>
#include <tvscalercontrol/vip/peaking.h>
#include <tvscalercontrol/vip/icm.h>
#include <tvscalercontrol/vip/dcc.h>
#include <tvscalercontrol/vip/ultrazoom.h>
#include <tvscalercontrol/vip/color.h>
#include <tvscalercontrol/vip/xc.h>
#include <tvscalercontrol/vip/intra.h>
#include <tvscalercontrol/vip/nr.h>
#include <tvscalercontrol/vip/film.h>
#include <tvscalercontrol/vip/pq_adaptive.h>
#include <tvscalercontrol/vip/gibi_od.h>
#include <tvscalercontrol/vdc/video.h>
#include <tvscalercontrol/vip/localdimming.h>
#include <tvscalercontrol/vip/localcontrast.h>
#include <tvscalercontrol/vip/fcic.h>
#include <tvscalercontrol/vip/ST2094.h>
/*some include about scaler*/
#include <scaler/scalerDrvCommon.h>
#include <tvscalercontrol/scalerdrv/scalerdisplay.h>
#include <tvscalercontrol/scalerdrv/scalermemory.h>
/*some include about rbus*/
/*some include about device driver*/
#include <tvscalercontrol/hdmirx/hdmifun.h>
//#include <tvscalercontrol/hdmirx/hdmiInternal.h>
#include <mach/rtk_log.h>
//#include <mach/io.h>
#include <rbus/dolby_v_top_reg.h>


#define TAG_NAME "VPQ"

// for register dump
#include <tvscalercontrol/io/ioregdrv.h>
#undef rtd_outl
#define rtd_outl(x, y)     								IoReg_Write32(x,y)
#undef rtd_inl
#define rtd_inl(x)     									IoReg_Read32(x)
#undef rtd_maskl
#define rtd_maskl(x, y, z)     							IoReg_Mask32(x,y,z)
#undef rtd_setbits
#define rtd_setbits(offset, Mask) rtd_outl(offset, (rtd_inl(offset) | Mask))
#undef rtd_clearbits
#define rtd_clearbits(offset, Mask) rtd_outl(offset, ((rtd_inl(offset) & ~(Mask))))

#else

/*some include about AP*/
#include <Platform_Lib/TVScalerControl/scaler/scalerLib.h>
#include <Platform_Lib/TVScalerControl/scaler/scalerColorLib.h>
#include <Platform_Lib/TVScalerControl/scaler/scalerTimer.h>
#include <Platform_Lib/TVScalerControl/io/ioRegDrv.h>

/*some include about VIP Driver*/
/*#include <tvscalercontrol/vip/scalerColor.h>*/
#include <Platform_Lib/TVScalerControl/vip/scalerColor_tv043.h>
#include <Platform_Lib/TVScalerControl/vip/di_ma.h>
#include <Platform_Lib/TVScalerControl/vip/peaking.h>
#include <Platform_Lib/TVScalerControl/vip/icm.h>
#include <Platform_Lib/TVScalerControl/vip/dcc.h>
#include <Platform_Lib/TVScalerControl/vip/ultrazoom.h>
#include <Platform_Lib/TVScalerControl/vip/color.h>
#include <Platform_Lib/TVScalerControl/vip/xc.h>
#include <Platform_Lib/TVScalerControl/vip/intra.h>
#include <Platform_Lib/TVScalerControl/vip/nr.h>
#include <Platform_Lib/TVScalerControl/vip/film.h>
#include <Platform_Lib/TVScalerControl/vip/pq_adaptive.h>
#include <Platform_Lib/TVScalerControl/vip/gibi_od.h>
#include <Platform_Lib/TVScalerControl/vdc/video.h>
#include <Platform_Lib/TVScalerControl/vip/localdimming.h>
#include <Platform_Lib/TVScalerControl/vip/localcontrast.h>

/*some include about scaler*/
#include <scaler/scalerDrvCommon.h>
#include <rbusHistogramReg.h>
/*some include about rbus*/
/*some include about device driver*/
//#include <Platform_Lib/TVScalerControl/hdmiRx/hdmiFun.h>
#endif
#if CONFIG_FIRMWARE_IN_KERNEL
//#define VIPprintf(fmt, args...)	printk(KERN_DEBUG fmt, ##args)	//20150822 roger mark for image release
#define VIPprintf(fmt, args...)
#define	vip_malloc(x)	kmalloc(x, GFP_KERNEL)
#define	vip_free(x)	kfree(x)
#else
//#define VIPprintf(fmt, args...)	printf(fmt, ##args)	//20150822 roger mark for image release
#define VIPprintf(fmt, args...)
#define	vip_malloc(x)	malloc(x)
#define	vip_free(x)	free(x)
#endif
extern unsigned int vpq_project_id; /*pre_id:16 main_id:8 sub1_id:8 sub2_id:8, example->lg=tv006*/


void fwif_color_set_color_temp_tv043(unsigned char enable, unsigned short Red_Con, unsigned short Green_Con, unsigned short Blue_Con,
	short Red_Bri, short Green_Bri, short Blue_Bri)
{

	Red_Bri = Red_Bri - 2048;
	Green_Bri = Green_Bri - 2048;
	Blue_Bri = Blue_Bri - 2048;

	fwif_color_WaitFor_SYNC_START_UZUDTG();
	drvif_color_set_color_temp(enable, Red_Con, Green_Con, Blue_Con, Red_Bri, Green_Bri, Blue_Bri);
}




