/* Realtek Power Management Routines
 *
 * Copyright (c) 2013 Realtek Corp.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License.
 *
 * History:
 *
 * 2013-03-11:	XXX Power Management for Magellan.
 */
#include <linux/init.h>
#include <linux/delay.h>
#include <linux/suspend.h>
#include <linux/errno.h>
#include <linux/slab.h>
#ifdef CONFIG_CMA_RTK_ALLOCATOR
#include <linux/pageremap.h>
#endif
#ifdef CONFIG_QUICK_HIBERNATION
#include <linux/sysfs.h>
#include <linux/reboot.h>
#endif
#include <rbus/stb_reg.h>
#include <asm/system_misc.h>
#include <asm/suspend.h>
#include <asm/cacheflush.h>
#ifdef CONFIG_RTK_KDRV_AVCPU
#include <rtk_kdriver/rtk_avcpu_export.h>
#endif
#include <mach/io.h>
#include <mach/common.h>
#ifdef CONFIG_RTK_KDRV_EMCU
#include <rtk_kdriver/rtk_emcu_export.h>
#endif
#include "rtk_kdriver/rtkaudio.h"
#include <linux/console.h>

#define KERNEL_RSV_MEM_MAX_ENTRY_COUNT  4
#define KERNEL_RSV_MEM_SIZE             32*1024*1024

#define KCPU_STD_MAGICTAG               0x6b637075	//'kcpu'
#define KCPU_STD_MAGICTAG_ADDR          0x16000000
#define KCPU_STD_RESUME_ADDR            0x16000004
#ifdef CONFIG_ANDROID_TV
#ifdef CONFIG_RTK_KDRV_IR
#include <linux/input.h>
extern void venus_ir_gen_keyupdown_event(uint32_t);
#endif
#endif


#ifdef CONFIG_RTK_KDRV_OPENBSD
extern int rtk_openbsd_reload(void);
#endif

#if 0
/* Memory information of kernel reserved for bootcode use. */
typedef struct {
	unsigned int dwMagicNumber;     // magic number must be 0x2379beef
	unsigned int dwEntryCount;      // available entries (ex. 2)

	struct {
	    unsigned int address;
	    unsigned int size;
	} entry[KERNEL_RSV_MEM_MAX_ENTRY_COUNT];
} kernel_rsv_mem_info_t;
#endif

#ifdef CONFIG_SUSPEND
extern int suspend_devices_and_enter(suspend_state_t state);
#endif

#ifdef CONFIG_HAVE_ARM_SCU
extern void platform_smp_prepare_cpus(unsigned int max_cpus);
#endif
#ifdef CONFIG_CACHE_L2X0
extern void rtk_l2_cache_init(void);
#endif
extern int rtk_pm_load_8051(int flag);

static bool need_load_av = false;
unsigned int record_suspend_state = 0;
//static kernel_rsv_mem_info_t *rsv_mem_info = NULL;

static int rtk_pm_valid(suspend_state_t state)
{
    return  (state == PM_SUSPEND_STANDBY)      ||
            (state == PM_SUSPEND_MEM);
}

#ifdef LOAD_UBOOT
#define EMMC_BLOCK_SIZE       (PAGE_SIZE / 8)
#define UBOOT_START_BLOCK     0x11c
#define UBOOT_CODE_SIZE       0x6a828
extern int mmc_fast_read(unsigned int, unsigned int, unsigned char *);
#endif

#ifdef LOAD_UBOOT
static int rtk_load_uboot(void)
{
	int blk;

	blk = UBOOT_CODE_SIZE / EMMC_BLOCK_SIZE;
	if (UBOOT_CODE_SIZE % EMMC_BLOCK_SIZE)
		blk++;
	printk("<< %s >>: Ready to load uboot %x @ %x...\n", __FUNCTION__, blk * EMMC_BLOCK_SIZE, UBOOT_START_BLOCK);
	if (mmc_fast_read(UBOOT_START_BLOCK, blk, PAGE_OFFSET + 0x20000) != blk)
		return 1;
	else
		return 0;
}
#endif

#ifdef CONFIG_RTK_KDRV_EMCU
static int notrace rtk_enter_suspend(unsigned long param)
{
	unsigned int count = 0;
	rtd_outl(STB_WDOG_DATA2_reg, virt_to_phys(cpu_resume));

#if 0 // debug purpose, spin until all of secondary CPU wfi rising.
	while  ((rtd_inl(0x1805B45C) & 0x7f7f7f00) != 0);

#ifdef CONFIG_RTK_KDRV_WATCHDOG
		extern int watchdog_enable (unsigned char On);
		watchdog_enable(0);
#endif //#ifdef CONFIG_RTK_KDRV_WATCHDOG

		dsb();
	}
#endif // #if 0 //debug purpose


#ifdef CONFIG_REALTEK_SECURE
#if !(defined(CONFIG_RTK_KDRV_OPENBSD) || defined(CONFIG_OPTEE))
	unsigned int kcpu_resume_address = 0;

	flush_cache_all();
	outer_flush_all();

	while(1)
	{
		/*Check KCPU STR suspend flow finish*/
		kcpu_resume_address = rtd_inl(STB_WDOG_DATA6_reg);

		if(kcpu_resume_address == 0x23792379)
		{
			//printk(KERN_ERR "KCPU STR flow not finish\n");
			if(count++ > 200) // wait 2s
				return 0;
		}
		else
		{
			printk( "KCPU STR resume point(%x)\n", kcpu_resume_address);
			break;
		}
		mdelay(10);
	}
#endif
#endif
	printk("<< %s >>: Ready to load 8051 (%lu)...\n", __FUNCTION__, param);
	rtk_pm_load_8051(param);

#if defined (CONFIG_OPTEE)
//        asm volatile ("1: b 1b \n");  //debug of EMCU
	printk("<< %s >>: platform_cpu_die() have CPU itself died. (%lu)...\n", __FUNCTION__, param);
        platform_cpu_die(0);  //cpu 0, will call level-2 suspend to secure world.
#else

	// to compatible to previouse impelment, spin here and wait EMCU turn off.
	asm ("1: b 1b \n");
#endif

//	soft_restart(virt_to_phys(cpu_resume));
//end:
	/* we should not reach here */
	panic("KCPU STR flow not finish(%d)\n",count);
	return 0;
}
#endif

#if 0
static void alloc_uboot_buffer(void)
{
	int i = 0;

	BUG_ON(rsv_mem_info);
	rsv_mem_info = kmalloc(sizeof(kernel_rsv_mem_info_t), GFP_KERNEL);
	if (rsv_mem_info) {
		rsv_mem_info->dwMagicNumber = 0x2379beef;
		rsv_mem_info->dwEntryCount = 0;
		while (i < KERNEL_RSV_MEM_MAX_ENTRY_COUNT) {
			void *virt = dvr_malloc(KERNEL_RSV_MEM_SIZE);
			if (!virt)
				break;
			rsv_mem_info->entry[i].address = (unsigned int)dvr_to_phys(virt);
			rsv_mem_info->entry[i].size = KERNEL_RSV_MEM_SIZE;
			rsv_mem_info->dwEntryCount = ++i;
		}
		rtd_outl(STB_WDOG_DATA3_reg, virt_to_phys(rsv_mem_info));
	} else {
		rtd_outl(STB_WDOG_DATA3_reg, 0);
	}
}

static void free_uboot_buffer(void)
{
	int i = 0;
	if (rsv_mem_info) {
		while (i < rsv_mem_info->dwEntryCount) {
			dvr_free(phys_to_virt(rsv_mem_info->entry[i].address));
			i++;
		}
		kfree(rsv_mem_info);
		rsv_mem_info = 0;
		rtd_outl(STB_WDOG_DATA3_reg, 0);
	}
}
#endif



/*
 *	rtk_pm_begin - Do preliminary suspend work.
 *	@state:		suspend state we're entering.
 *
 */
static int rtk_pm_begin(suspend_state_t state)
{
    printk("%s\n",__func__);

    need_load_av = false;
    switch (state)
    {
        case PM_SUSPEND_MEM:
#ifdef CONFIG_RTK_KDRV_EMCU
            powerMgr_set_wakeup_source_undef();
#endif

#ifdef CONFIG_REALTEK_SECURE
#ifdef CONFIG_RTK_KDRV_OPENBSD
//reload the openBSD version kcpu fw
        printk(KERN_NOTICE "run suspend reload openBSD flow\n");
        if(rtk_openbsd_reload()){
            panic("KCPU openBSD reload Fail!!!\n");
            return -EINVAL;
        }
        /*set the jump address of kcpu*/
        rtd_outl(STB_WDOG_DATA6_reg, 0x16008000);
#elif defined CONFIG_OPTEE
	// do nothing. bootcode will (and should) start OPTEE from original physical address

#else
        /*Notify KCPU STR suspend flow begin*/
        printk(KERN_NOTICE "Notify KCPU STR suspend flow\n");
        rtd_outl(STB_WDOG_DATA6_reg, 0x23792379);
#endif
#endif

#ifdef CONFIG_RTK_KDRV_AVCPU
		/*Notify SCPU STR suspend flow begin*/
		*((volatile int *)phys_to_virt(SCPU_STR_STATUS_FLAG_ADDR)) = SCPU_STR_STATUS_SUSPEND_BEGIN;
		dmac_flush_range(phys_to_virt(SCPU_STR_STATUS_FLAG_ADDR),phys_to_virt(SCPU_STR_STATUS_FLAG_ADDR+0x4));
		outer_flush_range(SCPU_STR_STATUS_FLAG_ADDR, SCPU_STR_STATUS_FLAG_ADDR+0x4);
#endif
		//alloc_uboot_buffer();
#ifdef LOAD_UBOOT
		if (rtk_load_uboot())
			return -EINVAL;
		else
			return 0;
#else
		return 0;
#endif
        case PM_SUSPEND_ON:
		//alloc_uboot_buffer();
		return 0;
        case PM_SUSPEND_STANDBY:
		printk("rtk_pm_begin: state:%d, fixit!?  \n", state);
#ifdef CONFIG_RTK_KDRV_AUDIO
		halt_acpu();
#endif
#ifdef CONFIG_RTK_KDRV_EMCU
            rtk_pm_load_8051(SUSPEND_NORMAL);
		//spin here and wait EMCU turn off
		while(1);
#endif
            break;
        default:
            return  -EINVAL;
    }
    return 0;
}

extern void rtk_timer_init(void);

static int rtk_pm_enter(suspend_state_t state)
{
    printk("%s\n",__func__);

    switch (state)
    {
        case PM_SUSPEND_MEM:
#ifdef CONFIG_RTK_KDRV_EMCU
		if (!cpu_suspend(SUSPEND_RAM, rtk_enter_suspend)) {
			rtk_timer_init();
#ifdef CONFIG_CACHE_L2X0
			rtk_l2_cache_init();
#endif
		} else
			printk("<< %s >>: Error in cpu_suspend...\n", __FUNCTION__);
		//printk("<< %s >>: Ready to resume from suspend 1...\n", __FUNCTION__);
#endif // CONFIG_RTK_KDRV_EMCU
		return 0;
        case PM_SUSPEND_ON:
		printk("<< %s >>: FOUND PM_SUSPEND_ON, system will shutdown....\n", __FUNCTION__);
#ifdef CONFIG_RTK_KDRV_EMCU
		if (!cpu_suspend(SUSPEND_WAKEUP, rtk_enter_suspend)) {

#ifdef CONFIG_CACHE_L2X0
			rtk_l2_cache_init();
#endif
		} else
			printk("<< %s >>: Error in cpu_suspend...\n", __FUNCTION__);
		printk("<< %s >>: Ready to resume from suspend 2...\n", __FUNCTION__);
#endif // CONFIG_RTK_KDRV_EMCU
		return 0;
        case PM_SUSPEND_STANDBY:
        break;
        default:
            return  -EINVAL;
        break;
    }
    return 0;
}

void pm_send_power_key(void)
{
/*  for Android TV if resume from 8051,
that means wake up source register not zero, then sned a power key for wakeup Android.*/
#ifdef CONFIG_ANDROID_TV
#ifdef CONFIG_RTK_KDRV_IR
	venus_ir_gen_keyupdown_event(KEY_POWER);
#endif
#endif
}

#ifdef CONFIG_SUPPORT_SCALER
extern void vbe_resume_instanboot_Panel_SetBackLight(int);
#endif

void wov_wakeup_finish_operation(void)
{
#ifdef CONFIG_SUPPORT_SCALER
	vbe_resume_instanboot_Panel_SetBackLight(1);
#endif
	pm_send_power_key();
}

static void rtk_pm_end(void)
{
#ifdef CONFIG_RTK_KDRV_EMCU
	int wakeup_reg_row;
	WAKE_UP_T wakeup_src;
#endif
	//free_uboot_buffer();

	printk("%s\n",__func__);
#ifdef CONFIG_REALTEK_SECURE
#if  !((defined CONFIG_RTK_KDRV_OPENBSD) || (defined CONFIG_OPTEE))
	unsigned long timeout = jiffies + HZ*2;
	while(time_before(jiffies, timeout))
	{
		if(rtd_inl(STB_WDOG_DATA6_reg) == 0xcafecafe)
			break;
	}

	/*Check KCPU STR resume flow finish*/
	if(rtd_inl(STB_WDOG_DATA6_reg) != 0xcafecafe)
		panic("KCPU STR resume Fail(%x)\n", rtd_inl(STB_WDOG_DATA6_reg));
	else
		printk(KERN_NOTICE "KCPU STR resume finish\n");
#endif
#endif
#ifdef CONFIG_RTK_KDRV_EMCU
	powerMgr_get_wakeup_source(&wakeup_reg_row, NULL);
	wakeup_src = wakeup_reg_row & 0xff;
	pr_info("wakeup source(%x)\n", wakeup_src);
#ifdef CONFIG_CUSTOMER_TV030
    pr_err("No send power key,ap send for tcl\n");
#else
	if((wakeup_src != WKSOR_UNDEF) && ((wakeup_src != WKSOR_RTC) && (wakeup_src != WKSOR_WOW)))
		pm_send_power_key();
	else
		pr_err("No send power key(%x)\n", wakeup_src);
#endif
#endif
#ifdef CONFIG_RTK_KDRV_AVCPU
    if (need_load_av) {
        resetav_lock(1);
        load_av_image(NULL, 0, NULL, 0, NULL, 0);
        resetav_unlock(1);
    }
#endif
}

static void rtk_pm_recover(void)
{
	unsigned int kcpu_resume_address = 0;
	unsigned int count = 0;

	/*Notify KCPU resume under platform recover stage*/
	printk(KERN_NOTICE "Before notify KCPU STR resume under platform recover stage(%x)\n", rtd_inl(STB_WDOG_DATA6_reg));

	while(1)
	{
		/*Check KCPU STR suspend flow finish*/
		kcpu_resume_address = rtd_inl(STB_WDOG_DATA6_reg);

		if(kcpu_resume_address == 0x23792379)
		{
			//printk(KERN_ERR "KCPU STR flow not finish\n");
			if(count++ > 200) // wait 2s
				break;
		}
		else
		{
			printk( "Get KCPU STR resume point(%x), then start to notify KCPU resume\n", kcpu_resume_address);
			rtd_outl(STB_WDOG_DATA6_reg, 0x23992399);
			return;
		}
		mdelay(10);
	}

	/* we should not reach here */
	panic("Can't wait KCPU suspend finish(%x) @%s\n",rtd_inl(STB_WDOG_DATA6_reg), __func__);
}

static struct platform_suspend_ops rtk_pm_ops = {
    .valid = rtk_pm_valid,
    .begin = rtk_pm_begin,
    .enter = rtk_pm_enter,
    .end   = rtk_pm_end,
    .recover   = rtk_pm_recover,
};

//#ifdef CONFIG_QUICK_HIBERNATION
extern int in_suspend;

static int rtk_hibernation_begin(void)
{
#ifdef CONFIG_REALTEK_SECURE
	/*Notify KCPU STD suspend flow begin*/
	printk(KERN_NOTICE "Notify KCPU STD suspend flow\n");
	rtd_outl(STB_WDOG_DATA6_reg, 0x23792379);
#endif
	return 0;
}

static void rtk_hibernation_end(void)
{
#ifdef CONFIG_REALTEK_SECURE
	unsigned long timeout = jiffies + HZ*2;
	while(time_before(jiffies, timeout))
	{
		if(rtd_inl(STB_WDOG_DATA6_reg) == 0xcafecafe)
			break;
	}

	/*Check KCPU STD resume flow finish*/
	if(rtd_inl(STB_WDOG_DATA6_reg) != 0xcafecafe)
		panic("KCPU STD resume Fail\n");
	else
		printk(KERN_NOTICE "KCPU STD resume finish\n");
#endif
}


static int rtk_hibernation_pre_snapshot(void)
{
	int ret = 0;
#ifdef CONFIG_REALTEK_SECURE
	unsigned int kcpu_resume_address = 0;


	unsigned long timeout = jiffies + HZ*2;
	while(time_before(jiffies, timeout))
	{
		if(rtd_inl(STB_WDOG_DATA6_reg) != 0x23792379)
			break;
	}

	/*Check KCPU STD suspend flow finish*/
	kcpu_resume_address = rtd_inl(STB_WDOG_DATA6_reg);

	if(kcpu_resume_address == 0x23792379)
	{
		panic("KCPU make image suspend Fail\n");
		ret = 1;
	}
	else
	{
		*((volatile int *)phys_to_virt(KCPU_STD_MAGICTAG_ADDR)) = KCPU_STD_MAGICTAG;
		*((volatile int *)phys_to_virt(KCPU_STD_RESUME_ADDR)) = kcpu_resume_address;
		printk(KERN_NOTICE "KCPU STD resume point(%x)\n", kcpu_resume_address);
	}
#endif
	return ret;
}

extern int rtdlog_resume(void);
static void rtk_hibernation_finish(void)
{
#ifdef CONFIG_REALTEK_SECURE

	/*Notify KCPU STD make image resume*/
	printk(KERN_NOTICE "Notify KCPU STD make image resume\n");
	rtd_outl(STB_WDOG_DATA6_reg, 0x23992399);
#endif
	/* get rtdlog level setting from bootcode */
	rtdlog_resume();
}

static int rtk_hibernation_prepare(void)
{
	return 0;
}

static int rtk_hibernation_enter(void)
{
	return 0;
}

static void rtk_hibernation_leave(void)
{
#ifdef CONFIG_RTC_DRV_RTK
	extern int  rtk_rtc_ip_init(void);
	if (!in_suspend)
		rtk_rtc_ip_init();
#endif
}

static int rtk_hibernation_pre_restore(void)
{
	return 0;
}

static void rtk_hibernation_restore_cleanup(void)
{

}

static void rtk_hibernation_recover(void)
{

}

static struct platform_hibernation_ops rtk_hibernation_ops =
{
	.begin           = rtk_hibernation_begin,
	.end             = rtk_hibernation_end,
	.pre_snapshot    = rtk_hibernation_pre_snapshot,
	.finish          = rtk_hibernation_finish,
	.prepare         = rtk_hibernation_prepare,
	.enter           = rtk_hibernation_enter,
	.leave           = rtk_hibernation_leave,
	.pre_restore     = rtk_hibernation_pre_restore,
	.restore_cleanup = rtk_hibernation_restore_cleanup,
	.recover         = rtk_hibernation_recover,
};
//#endif

//#ifdef CONFIG_QUICK_HIBERNATION
extern struct kobject	*realtek_boards_kobj;
static struct kobject	*std_kobj;

static ssize_t	std_show
(struct kobject *kobj,
 struct kobj_attribute *attr,
 char *buf)
{
	return	snprintf(buf, PAGE_SIZE-1, "1\n");
}
static ssize_t	std_attr_store
(struct kobject *kobj,
 struct attribute *attr,
 const char *buf,
 size_t len)
{
	return	0;
}

static ssize_t	std_attr_show
(struct kobject *kobj,
 struct attribute *attr,
 char *buf)
{
	return	std_show(kobj, (struct kobj_attribute *)attr, buf);
}

static const struct sysfs_ops	std_sysfs_ops = {
	.show = std_attr_show,
	.store = std_attr_store,
};

static struct kobj_attribute	std_kobj_attrs[] = {
	__ATTR_RO(std), 			//std_show()
	__ATTR_NULL,
};

static struct kobj_type	std_ktype = {
	.sysfs_ops = &std_sysfs_ops,
	//.default_attrs = ;
};

#define SYSFS_ERR_CHK(err)	\
do {						\
	if(err) {				\
		printk("ERR!\n");	\
		goto	RETN;		\
	}						\
} while(0);

static int	std_kobj_init
(void)
{
	int	error=1;

	std_kobj=kobject_create();
	if (std_kobj != NULL)
	{
		//kobject_init(std_kobj, &std_ktype);
		std_kobj->ktype=&std_ktype;
		error=kobject_set_name(std_kobj, "STD");
		SYSFS_ERR_CHK(error);
		error = kobject_add(std_kobj, realtek_boards_kobj, "STD");
		SYSFS_ERR_CHK(error);

		if((error=sysfs_create_file(std_kobj, (struct attribute*)&std_kobj_attrs[0])))
			kobject_put(std_kobj);
	}
RETN:
	return	error;
}
//#endif	//CONFIG_QUICK_HIBERNATION

static int suspend_status_pm_event(struct notifier_block *this,
                           unsigned long event, void *ptr)
{
        switch (event) {
	case PM_SUSPEND_PREPARE:
		record_suspend_state = PM_SUSPEND_PREPARE;
		break;
	case PM_POST_SUSPEND:
		record_suspend_state = PM_POST_SUSPEND;
		break;
        default:
                break;
        }
	return NOTIFY_DONE;
}

static struct notifier_block suspend_status_notifier = {
        .notifier_call = suspend_status_pm_event,
};


static int __init rtk_pm_init(void)
{
    printk("Realtek Power Management 2015/08/05 15:00\n");

    //rtk_pm_init_8051(0);
    suspend_set_ops(&rtk_pm_ops);
//#ifdef CONFIG_QUICK_HIBERNATION
    hibernation_set_ops(&rtk_hibernation_ops);
    std_kobj_init();
//#endif
	register_pm_notifier(&suspend_status_notifier);
    return 0;
}

//#ifdef CONFIG_QUICK_HIBERNATION
__initcall(rtk_pm_init);
//#else
//late_initcall(rtk_pm_init);
//#endif

