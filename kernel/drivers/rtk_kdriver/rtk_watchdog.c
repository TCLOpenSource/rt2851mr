#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/ioctl.h>
#include <linux/device.h>
#include <linux/mutex.h>
#include <linux/fs.h>
#include <linux/slab.h>
#include <linux/cdev.h>
#include <linux/uaccess.h>
#include <linux/sched.h>
#include <linux/version.h>
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 14, 0))
#include <linux/sched/types.h>
#endif
#include <linux/sched/rt.h>
#include <linux/delay.h>
#include <asm/io.h>
#include <rbus/iso_misc_reg.h>
#include <rbus/wdog_reg.h>
#include <rbus/stb_reg.h>
#include <linux/freezer.h>
#include <rtk_kdriver/rtd_logger.h>
#include <rbus/sb2_reg.h>
#include <mach/platform.h>
#include <rtk_kdriver/rtk_watchdog.h>
#include <rtd_types.h>
#include <generated/autoconf.h>
#include <rtk_kdriver/io.h>
#include <linux/interrupt.h>
extern u64 (*arch_timer_read_counter)(void);

#define WDOG_DEVICE_NAME			"watchdog"
#define WDOG_FREQUENCY 27000000   //27Mhz
#define WDOG_SECS_TO_TICKS(secs)		((secs) * WDOG_FREQUENCY)
#define WDOG_TICKS_TO_SECS(ticks)		((ticks) / WDOG_FREQUENCY)
#define WDOG_TIMEOUT_MAX            60
#define WDOG_DEFAULT_PRETIMEOUT     2
#define WDOG_STATUS_MAGIC_NUM       0x12348765

#define LAST_BOOT_REASON_SOFTWARE BIT(2)       //last boot reason is software-induced reset
#define LAST_BOOT_REASON_BUTTION  BIT(3)       //last boot reason is reset button press
#define LAST_BOOT_REASON_POWER    BIT(4)       //last boot reason is power cycle  
#define LAST_BOOT_REASON_WATCHDOG BIT(5)       //last boot reason is watchdog expiration  
#define WDIOS_ENABLE_WITH_KERNEL_AUTO_KICK     0x0008          /* Turn on the watchdog timer,and kernel will kick watchdog by itself */

typedef enum{
	RHAL_WDOG_IS_ON_NEED_AP_KICK = 0,
	RHAL_WDOG_IS_OFF,
	RHAL_WDOG_IS_ON_WITH_KERNEL_AUTO_KICK,
	RHAL_WDOG_STATUS_MAX	
}RHAL_WDOG_STATUS_T;
unsigned int wdog_major = 0;
unsigned int wdog_minor = 0;
static unsigned int wdog_software_reboot_status = 0;
static struct wdog_dev *wdog_drv_dev;
static struct class *wdog_class;
static unsigned int rtk_wdog_kick_by_ap = 0;
static unsigned int rtk_wdog_timeout_value = WDOG_TIMEOUT_MAX;
static __kernel_time_t rtk_wdog_expires;
static DEFINE_MUTEX(rtk_wdog_mutex);

static unsigned long    watchdog_task = 0;
extern int is_in_dcmt_isr;
static unsigned int kick_count = 0;
static unsigned int pre_str_watchdogmode = WDIOS_DISABLECARD;

/* From Dora: */
/* Command register: */
/* 0xb8008EB4[24] => 0: off; 1: on */
/* Status register: */
/* 0xb8008EB8[15:0] for error status */
#define CMD_REG (0xb8008EB4)
#define STA_REG (0xb8008EB8)


extern EnumPanicCpuType g_rtdlog_panic_cpu_type;
static __maybe_unused bool rtd_show_log[NORMAL] = {1,1,1,1,1,1,1};

#ifdef CONFIG_REALTEK_UART2RBUS_CONTROL
extern void enable_uart2rbus(unsigned int value);
#endif

extern void handle_sysrq(int key);
void DDR_scan_set_error(int cpu)
{
	unsigned int reg_base = STA_REG;
	unsigned int reg_mask;
	unsigned int reg_shift;
	unsigned int ctrl_reg_base = CMD_REG;
	unsigned int i = 0;

	if (cpu >= DDR_SCAN_STATUS_NUM)
		return;

	if ((rtd_inl(ctrl_reg_base) & _BIT24) == 0x0)
		return;

	switch(cpu) {
		case DDR_SCAN_STATUS_SCPU: // SCPU
			reg_mask = 0x00000001;
			reg_shift = 0;
			break;
		case DDR_SCAN_STATUS_ACPU1: // ACPU1
			reg_mask = 0x00000002;
			reg_shift = 1;
			break;
		case DDR_SCAN_STATUS_ACPU2: // ACPU2
			reg_mask = 0x00000004;
			reg_shift = 2;
			break;
		case DDR_SCAN_STATUS_VCPU1: // VCPU1
			reg_mask = 0x00000008;
			reg_shift = 3;
			break;
		case DDR_SCAN_STATUS_VCPU2: // VCPU2
			reg_mask = 0x00000010;
			reg_shift = 4;
			break;
		case DDR_SCAN_STATUS_KCPU: // KCPU
			reg_mask = 0x00000020;
			reg_shift = 5;
			break;
		case DDR_SCAN_STATUS_GPU: // GPU
			reg_mask = 0x00000040;
			reg_shift = 6;
			break;
		default:
			return;
	}

	// wait and get hw semaphore 2
	while(1) {
		if ((rtd_inl(SB2_HD_SEM_NEW_2_reg) & _BIT0) == 0x1)
			break;

		for(i = 0;i < 1024;i++); //reduce rbus traffic
	}

	rtd_maskl(reg_base, ~(reg_mask), 1 << reg_shift);

	// release hw semaphore 2
	rtd_outl(SB2_HD_SEM_NEW_2_reg, 0x0);

}

extern unsigned int debugMode; // declaire in mach-rtdxxxx/init.c
static int my_panic(const char *fmt, ...)
{
#ifdef CONFIG_REALTEK_UART2RBUS_CONTROL
	enable_uart2rbus(1);
#endif
	if (fmt) {
		struct va_format vaf;
		va_list args;

		va_start(args, fmt);

		vaf.fmt = fmt;
		vaf.va = &args;

		if (debugMode == RELEASE_LEVEL)
			panic("%pV", &vaf);
		else {
#ifdef CONFIG_CUSTOMER_TV010
			panic("%pV", &vaf);
#else

			if(is_in_dcmt_isr)
                                return 0;

			pr_err("%pV", &vaf);
#if defined (CONFIG_REALTEK_LOGBUF)
			if(rtd_show_log[g_rtdlog_panic_cpu_type]){
			        //DumpWork.param = g_rtdlog_panic_cpu_type;
			        //queue_work(p_dumpqueue, &DumpWork.work);
			        rtd_show_log[g_rtdlog_panic_cpu_type] = 0;
			        rtdlog_watchdog_dump_work(g_rtdlog_panic_cpu_type);
			}
#endif //   #if defined (CONFIG_REALTEK_LOGBUF)
#endif
		}

		va_end(args);
	}

	return 0;
}

static int flag_watchdog=0;
static void rtk_watchdog_set_flag(int flag)
{
	flag_watchdog = flag;
}

int rtk_watchdog_get_flag(void)
{
	return flag_watchdog;
}

/* return value: 1 => success, 0 => failure */
int kill_watchdog (void)
{
    watchdog_task = 0;
    return 1;
}

int judge_watchdog (void)
{
    return watchdog_task;
}

/*If hw watchdog enable, return 1, otherwise return 0.*/
int is_watchdog_enable(void)
{
	if((rtd_inl(WDOG_TCWCR_reg) & WDOG_TCWCR_wden_mask) == 0xa5)
		return 0;
	else
		return 1;
}

#ifdef CONFIG_CUSTOMER_TV043
static void rtk_wdog_judge_software_reboot(void)
{
    if(rtd_inl(STB_WDOG_DATA9_reg) == WDOG_STATUS_MAGIC_NUM){
        wdog_software_reboot_status = 1;
        rtd_outl(STB_WDOG_DATA9_reg, 0);
    }            

}
#endif

void SetBootStatus(unsigned int bootmap)
{
    unsigned int bootreason = 0;
    bootreason = rtd_inl(STB_WDOG_DATA4);
    bootreason |= bootmap;
    rtd_outl(STB_WDOG_DATA4, bootreason);
}


extern int panic_timeout;
int wdt_status=1;
int dump_freeze_status=0;
static int __init wdt_setup (char *str)
{
    if(is_watchdog_enable())
        pr_err("bootcode enabled watchdog, WDOG_TCWCR_reg=0x%x\n",rtd_inl(WDOG_TCWCR_reg));
    else
        pr_err("\e[1;31mwarning\e[0m! bootcode NOT enable watchdog, WDOG_TCWCR_reg=0x%x\n",rtd_inl(WDOG_TCWCR_reg));

    if (!strcmp(str,"skip1")) //if wdt=skip, means disable wdog.
    {
        wdt_status=0;
        panic_timeout = 0;
	dump_freeze_status=1;
    }
    else if (!strcmp(str,"skip2")) //if wdt=skip, means disable wdog.
    {
        wdt_status=0;
        panic_timeout = 0;
	dump_freeze_status=2;
    }
    else if (!strcmp(str,"skip3")) //if wdt=skip, means disable wdog.
    {
        wdt_status=0;
        panic_timeout = 0;
	dump_freeze_status=3;
    }
    else if (!strcmp(str,"skip")) //if wdt=skip, means disable wdog.
    {
        wdt_status=0;
        panic_timeout = 0;
    }
    else if (!strcmp(str,"on")) //if wdt=on, means always enable wdog.
    {   
        wdt_status=2; 
    }
    else if (!strcmp(str,"ap")) //if wdt=ap, means enable wdog at beginning, then control by ap
    {   
        wdt_status=1; 
    }
    return 0;
}
__setup("wdt=", wdt_setup);

//WDOG_TCWOV_reg 0xB8062210
//WDOG_TCWCR_reg 0xB8062204
int watchdog_enable (unsigned char On)
{
    if (!wdt_status)
    {
        pr_err("\e[1;31mwarning\e[0m! watchdog NOT enabled by bootcode setting wdt=skip\n");
    }

    if (On && wdt_status)
    {
        if(rtd_inl(WDOG_TCWOV_reg) == 0x10237980 || rtd_inl(WDOG_TCWOV_reg) == 0x10237880){
            rtd_maskl(WDOG_TCWCR_reg, ~WDOG_TCWCR_wden_mask, 0xa5);
            rtd_outl(WDOG_TCWOV_reg, 0x10237880);
        }else {
        /* enable watchdog */
        rtd_outl(WDOG_TCWTR_reg, 0x01);
        rtd_maskl(WDOG_TCWCR_reg, ~WDOG_TCWCR_wden_mask, 0xa5);
#ifdef CONFIG_CUSTOMER_TV010
        rtd_outl(WDOG_TCWOV_reg, 0xB43EA00);//7.0s // Max: 0x11000000 10.56s
#else
        rtd_outl(WDOG_TCWOV_reg, 0x8000000);//4.97s
#endif
        rtd_clearbits(WDOG_TCWCR_reg, WDOG_TCWCR_wden_mask);
        rtk_watchdog_set_flag(1);
        }
    }
    else
    {
        rtd_outl(WDOG_TCWTR_reg, 0x01); //clear wdog timer.
        /* disable watchdog */
        rtd_maskl(WDOG_TCWCR_reg, ~WDOG_TCWCR_wden_mask, 0xa5);
        rtk_watchdog_set_flag(2);
    }
    pr_err("watchdog_enable(%d),and wdt_status(%d), final WDOG_TCWCR_reg=0x%x\n", (int)On, wdt_status, rtd_inl(WDOG_TCWCR_reg));
    return 1;
}

//used to adjust watchodg max timeout value from 10s to 60s
void rtk_wdog_adjust_timeout_upper_bound(void)
{
	if(!(rtd_inl(WDOG_TCWCR_reg) & WDOG_TCWCR_upper_bound_sel_mask)){
		rtd_setbits(WDOG_TCWCR_reg, WDOG_TCWCR_upper_bound_sel_mask);
	}
}
// SB2_DUMMY_2_reg:
//		[31:24] : audio1
//		[23:16] : audio2
//		[15: 0] : video1
// SB2_DUMMY_3_reg:
//		[31:16] : kcpu
//		[15: 0] : video2

#define ACPU1_WDOG_MAGIC_VALUE	(0x23000000)
#define ACPU1_WDOG_MAGIC_MASK	(0xFF000000)

#ifdef CONFIG_RTK_KDRV_SUPPORT_ACPU2
#define ACPU2_WDOG_MAGIC_VALUE	(0x00790000)
#define ACPU2_WDOG_MAGIC_MASK	(0x00FF0000)
#endif

#define VCPU1_WDOG_MAGIC_VALUE	(0x00002379)
#define VCPU1_WDOG_MAGIC_MASK	(0x0000FFFF)

#ifdef CONFIG_RTK_KDRV_SUPPORT_VCPU2
#define VCPU2_WDOG_MAGIC_VALUE	(0x00002379)
#define VCPU2_WDOG_MAGIC_MASK	(0x0000FFFF)
#endif

#define KCPU_WDOG_MAGIC_VALUE	(0x23790000)
#define KCPU_WDOG_MAGIC_MASK	(0xFFFF0000)

int arm_wrapper_slverr(unsigned long addr, unsigned int fsr, struct pt_regs *regs);
int hw_watchdog (void *p)
{
#define TO_MSEC 2000
//	unsigned long timeout;
	bool enable_check_av_watchgod = true;
	unsigned long to_a, to_v, to_k, to_v2, to_a2;
	unsigned int val_dummy_2, val_dummy_3;
	unsigned int not_tick_cnt_v=0, not_tick_cnt_a =0;
	struct sched_param param = { .sched_priority = MAX_RT_PRIO-1 };
	watchdog_task = (unsigned long)current;
#if 0 // fix me - jinn - kernel porting
	daemonize("hw_watchdog");
#endif
	sched_setscheduler(current, SCHED_FIFO, &param);

	if (wdt_status == 0) {
		watchdog_enable(0);  //always skip
	}
	else if (wdt_status == 2) {  //always on
		watchdog_enable(1);
	}
	else if (wdt_status == 1) {  //control by AP
	    if(is_watchdog_enable())
	        watchdog_enable(1);
	}

	if(is_watchdog_enable())
		pr_err("hw_watchdog: watchdog enabled, wdt_status=%d (0:skip,1:ap,2:on), WDOG_TCWCR_reg=0x%x\n", wdt_status, rtd_inl(WDOG_TCWCR_reg));
	else
		pr_err("\e[1;31mwarning\e[0m! hw_watchdog: NOT enable watchdog, wdt_status=%d (0:skip,1:ap,2:on), WDOG_TCWCR_reg=0x%x\n", wdt_status, rtd_inl(WDOG_TCWCR_reg));

//#if 0 /*no need to turn on watchdog, watchdog on/off control by bootcode.*/
#ifdef CONFIG_CUSTOMER_TV010
	watchdog_enable(1);
	printk("enter hw_watchdog!!!    %x\n",current->flags);
#endif

#ifdef CONFIG_CUSTOMER_TV043
	rtk_wdog_judge_software_reboot();
#endif
	rtk_wdog_adjust_timeout_upper_bound();
	to_a = to_v = to_k = to_v2 = to_a2 = jiffies + msecs_to_jiffies(TO_MSEC);

        strncpy(current->comm,"hw_watchdog",sizeof(current->comm));
	while (1)
	{

#ifdef CONFIG_REALTEK_ARM_WRAPPER
        arm_wrapper_slverr(0,0,NULL);
#endif

		if(rtk_wdog_kick_by_ap == 0)
		{
			//printk("now kernel control kick!!!\n");
			rtd_outl(WDOG_TCWTR_reg, 0x01);
		}
		else
		{
			//printk("now ap control kick!!!\n");
		}
	if(enable_check_av_watchgod)
	{
		val_dummy_2 = rtd_inl(SB2_DUMMY_2_reg);
		val_dummy_3 = rtd_inl(SB2_DUMMY_3_reg);

		if ( (val_dummy_2 & VCPU1_WDOG_MAGIC_MASK) == VCPU1_WDOG_MAGIC_VALUE ) // video1
		{
			local_irq_disable();
			to_v = jiffies + msecs_to_jiffies(TO_MSEC);
			rtd_maskl(SB2_DUMMY_2_reg, ~VCPU1_WDOG_MAGIC_MASK, 0x0000);
			local_irq_enable();
			not_tick_cnt_v = 0;
		}
		else
			not_tick_cnt_v++;
		if ( (val_dummy_2 & ACPU1_WDOG_MAGIC_MASK) == ACPU1_WDOG_MAGIC_VALUE ) // audio1
		{
			local_irq_disable();
			to_a = jiffies + msecs_to_jiffies(TO_MSEC);
			rtd_maskl(SB2_DUMMY_2_reg, ~ACPU1_WDOG_MAGIC_MASK, 0x00);
			local_irq_enable();
			not_tick_cnt_a = 0;
		}
		else
			not_tick_cnt_a++;
#ifdef CONFIG_RTK_KDRV_SUPPORT_ACPU2
		if ( (val_dummy_2 & ACPU2_WDOG_MAGIC_MASK) == ACPU2_WDOG_MAGIC_VALUE ) // audio2
		{
			to_a2 = jiffies + msecs_to_jiffies(TO_MSEC);
			rtd_maskl(SB2_DUMMY_2_reg, ~ACPU2_WDOG_MAGIC_MASK, 0x00);
		}
#endif
#ifdef CONFIG_RTK_KDRV_SUPPORT_VCPU2
		if ( (val_dummy_3 & VCPU2_WDOG_MAGIC_MASK) == VCPU2_WDOG_MAGIC_VALUE ) // video2
		{
			to_v2 = jiffies + msecs_to_jiffies(TO_MSEC);
			rtd_maskl(SB2_DUMMY_3_reg, ~VCPU2_WDOG_MAGIC_MASK, 0x0000);
		}
#endif

#ifndef CONFIG_OPTEE
		if ( (val_dummy_3 & KCPU_WDOG_MAGIC_MASK) == KCPU_WDOG_MAGIC_VALUE ) // kcpu
		{
			to_k = jiffies + msecs_to_jiffies(TO_MSEC);
			rtd_maskl(SB2_DUMMY_3_reg, ~KCPU_WDOG_MAGIC_MASK, 0x0000);
		}
#endif

		if (time_is_before_jiffies(to_a)) {
			set_rtdlog_panic_cpu_type(ACPU1);
			DDR_scan_set_error(DDR_SCAN_STATUS_ACPU1);
			my_panic("[A1DSP] WatchDog does not receive signal for %d seconds, value: %08x, Tick(0x%x) \n", TO_MSEC/1000, val_dummy_2, not_tick_cnt_a);
		}
#ifdef CONFIG_RTK_KDRV_SUPPORT_ACPU2
		if (time_is_before_jiffies(to_a2)) {
			set_rtdlog_panic_cpu_type(ACPU2);
			DDR_scan_set_error(DDR_SCAN_STATUS_ACPU2);
			my_panic("[A2DSP] WatchDog does not receive signal for %d seconds, value: %08x \n", TO_MSEC/1000, val_dummy_2);
		}
#endif
		if (time_is_before_jiffies(to_v)) {
			set_rtdlog_panic_cpu_type(VCPU1);
			DDR_scan_set_error(DDR_SCAN_STATUS_VCPU1);
			my_panic("[V1DSP] WatchDog does not receive signal for %d seconds, value: %08x, Tick(0x%x) \n", TO_MSEC/1000, val_dummy_2, not_tick_cnt_v);
		}
#ifndef CONFIG_OPTEE
		if (time_is_before_jiffies(to_k)) {
			/*ravi_li dump crt info when KCPU not kick watchdog*/
			set_rtdlog_panic_cpu_type(KCPU);
			DDR_scan_set_error(DDR_SCAN_STATUS_KCPU);
			pr_err("read 0x18000100 val == %#x read 0x18000110 val == %#x \n", rtd_inl(0xb8000100), rtd_inl(0xb8000110));
			my_panic("[KDSP] WatchDog does not receive signal for %d seconds, value: %08x \n", TO_MSEC/1000, val_dummy_3);
		}
#endif
#ifdef CONFIG_RTK_KDRV_SUPPORT_VCPU2
		if (time_is_before_jiffies(to_v2)) {
			set_rtdlog_panic_cpu_type(VCPU2);
			DDR_scan_set_error(DDR_SCAN_STATUS_VCPU2);
			my_panic("[V2DSP] WatchDog does not receive signal for %d seconds, value: %08x \n", TO_MSEC/1000, val_dummy_3);
		}
#endif
	}
		do
		{
			msleep(100);
			/* MA6PBU-1437, when system entering freeze state, disable check a/v watchdog.
			 * after system resume, enable check a/v watchdog
			 * Besides, tick HW watchdog register, alyways tick for prevent any system crash during STR suspend/resume flow.
			 */
			if(pm_nosig_freezing && enable_check_av_watchgod)
			{
				pr_notice("Disable check A/V watchdog!!\n");
				enable_check_av_watchgod = false;
			}
			else
			{
				if(!pm_nosig_freezing && !enable_check_av_watchgod)
				{
					pr_err("Enable check A/V watchdog!! str on, pre_str=%d, WDOG_TCWCR_reg=0x%x\n", pre_str_watchdogmode, rtd_inl(WDOG_TCWCR_reg));
					enable_check_av_watchgod = true;
					to_a = to_v = to_k = jiffies + msecs_to_jiffies(TO_MSEC);
					not_tick_cnt_v = not_tick_cnt_a = 0;
					// STR resume
					kick_count = 0;
 					if(pre_str_watchdogmode != WDIOS_DISABLECARD) {
                                            rtk_wdog_kick_by_ap = 0;
                                            watchdog_enable(1); //use fault watchdog value.
                                            rtd_outl(WDOG_TCWTR_reg, 0x01);
					    pr_err("pre_str=%d, (%d), WDOG_TCWCR_reg=0x%x\n", pre_str_watchdogmode, WDIOS_DISABLECARD, rtd_inl(WDOG_TCWCR_reg));
					}
				}
			}

		}
		while(0);

		if (watchdog_task == 0)
		{
			watchdog_enable(0);
			break;
		}

	}

	printk("hw_watchdog: exit...\n");
	do_exit(0);
	return 0;
}

#if 0
int hw_watchdog(void *p)
{
    struct sched_param param = { .sched_priority = MAX_RT_PRIO-1 };
    //static int tmp=0;
#if 0 // fix me - jinn - kernel porting
    daemonize("hw_watchdog");
#endif
    sched_setscheduler(current, SCHED_FIFO, &param);
    current->flags &= ~PF_NOFREEZE;

    //  printk("************************************\n");
    //  printk("*********watchdog mechanism*********\n");
    //  printk("************************************\n");

    /* enable watchdog */
    #if 0
    rtd_outl(WDOG_TCWTR_reg, 0x01);//outl(0x01, VENUS_MIS_TCWTR);//WDOG_TCWTR_reg
    rtd_outl(WDOG_TCWCR_reg, 0xa5);//outl(0xa5, VENUS_MIS_TCWCR);
    rtd_outl(WDOG_TCWOV_reg, 0xc000000);//outl(0xc000000, VENUS_MIS_TCWOV);
    #endif

    //rtd_outl(WDOG_TCWCR_reg, 0xc000000);//outl(0x00, VENUS_MIS_TCWCR);
    watchdog_task = (unsigned long)current;
    printk("enter hw_watchdog!!!\n");

    while (1)
    {
        msleep_interruptible(1000);
        rtd_outl(WDOG_TCWTR_reg, 0x01);//outl(0x01, VENUS_MIS_TCWTR);

        if (watchdog_task == 0)
        {
            printk("hw_watchdog: exit...\n");
            break;
        }

        /* check if we need to freeze */
#if 0
        if (freezing(current))
        {
            /* disable watchdog */
            outl(0xa5, VENUS_MIS_TCWCR);

            refrigerator();

            /* enable watchdog */
            outl(0xc000000, VENUS_MIS_TCWOV);
            outl(0x00, VENUS_MIS_TCWCR);
        }
#endif

    }
    do_exit(0);
    return 0;
}
#endif

static void rtk_wdog_ping (void)
{
	rtd_outl(WDOG_TCWTR_reg, 0x01);
	rtk_wdog_expires = ktime_to_timespec(ktime_get()).tv_sec + rtk_wdog_timeout_value;
}

static void rtk_wdog_set_timeout(unsigned int timeout)
{
	rtd_outl(WDOG_TCWOV_reg, WDOG_SECS_TO_TICKS(timeout));
	rtk_wdog_timeout_value = timeout;
	pr_err("set watchdog timeout=%d\n", timeout);
}

static unsigned int rtk_wdog_get_timeout(void)
{
	//For The LSB 8 bit is fixed to 0x80 in hardware.(TCWOV_sel 32?¡¥hxxxx_xxxx will map to 32?¡¥hxxxx_xx80.)
	//so need add additional timeout Ticks offset to get the accurate timeout seconds. 
	return WDOG_TICKS_TO_SECS(rtd_inl(WDOG_TCWOV_reg) + 0xff);
}
static int rtk_wdog_set_pretimeout(unsigned int pretimeout)
{
	unsigned int tmp_time;
	if(pretimeout == 0){ //this case means disable watchdog NMI function.
		rtd_clearbits(WDOG_TCWCR_reg, WDOG_TCWCR_wdie_mask);                                     
	}
	tmp_time = rtk_wdog_get_timeout() - pretimeout;
	if(tmp_time <= 0 ){
		pr_err("[%d][%s]ERR:the pretimout value should not larger than the watchdog timeout value. \n",__LINE__ ,__func__);
		return -1;
	}
	rtd_outl(WDOG_TCWNMI_reg, WDOG_SECS_TO_TICKS(tmp_time));
	rtd_setbits(WDOG_TCWCR_reg, WDOG_TCWCR_wdie_mask);   
	return 0;
}
static int rtk_wdog_get_pretimeout(void)
{
	unsigned int tmp_time = WDOG_TICKS_TO_SECS(rtd_inl(WDOG_TCWNMI_reg));
	int pretimeout = rtk_wdog_get_timeout() - tmp_time;
	if(pretimeout < 0){
		pretimeout = 0;
	}
	return pretimeout;
}

static unsigned int rtk_wdog_getbootstatus(void)
{
	int tmp_bootstatus = 0;
	int tmp_wdc = 0;
	//get Watchdog Occurrence Count 
	tmp_wdc = WDOG_TCWCR_get_wdc(rtd_inl(WDOG_TCWCR_reg));
	if(tmp_wdc != 0){
		if(wdog_software_reboot_status == 1){
			tmp_bootstatus = LAST_BOOT_REASON_SOFTWARE;
		}
		else{
			tmp_bootstatus = LAST_BOOT_REASON_WATCHDOG;
		}

		if(tmp_wdc == 0xf){
			rtd_outl(WDOG_TCWCR_reg,WDOG_TCWCR_wdc_mask); //clear Watchdog Occurrence Count to 0 before overflow;           
		}
	}
	else{
		tmp_bootstatus = LAST_BOOT_REASON_POWER;       
	}
	return tmp_bootstatus;
}
int rtk_wdog_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
{
	int timeout = 0;
	int pretimeout = 0;
	int timeout_left = 0;
	int boot_status = 0;
	int option =0;
	RHAL_WDOG_STATUS_T wdog_status = RHAL_WDOG_IS_OFF;
	switch(cmd) {
			case WDIOC_KEEPALIVE:
					rtk_wdog_ping();
					//pr_err("watchdog ioctl:WDIOC_KEEPALIVE, kick_count=%d\n", kick_count);
					if(flag_watchdog==1 && rtk_wdog_kick_by_ap==0) {  // watchdog on and kick by kernel
						kick_count++;
						if(kick_count%60==0) {
							pr_err("watchdog ioctl:WDIOC_KEEPALIVE, kick_count=%d\n", kick_count);
							watchdog_enable(1);
							rtk_wdog_kick_by_ap=1; //change to kick by ap
							kick_count=0;
							rtk_wdog_adjust_timeout_upper_bound();
							rtk_wdog_set_timeout(60);
							rtk_wdog_ping();
						}
					}
					break;

			case WDIOC_SETTIMEOUT:
					/*
					if (arch_timer_read_counter()/27000 < (1000*120)) {
						pr_err("ioctl:WDIOC_SETTIMEOUT: can't set watchdog timeout, < 120sec\n");
						return 0;
					}
					*/
					if (wdt_status==2) {
						pr_err("ioctl:WDIOC_SETTIMEOUT: can't set watchdog timeout, timeout is always 5sec, it set by bootcode setting wdt=on or default\n");
						return 0;
					}
					if (get_user(timeout, (int __user *)arg))
							return -EFAULT;
					if (timeout > WDOG_TIMEOUT_MAX)
					{
							pr_err("[%d][%s]ERR:Set timeout value %d Fail,For timeout value should between: 0 ~ %d seconds!!!\n", __LINE__ ,__func__, timeout, WDOG_TIMEOUT_MAX);
							return -EFAULT;
					}

					if(timeout > 10)
					{
							rtk_wdog_adjust_timeout_upper_bound();
					}
					rtk_wdog_set_timeout(timeout);
					rtk_wdog_ping();
					break;	

			case WDIOC_SETOPTIONS: 
					if (copy_from_user(&option, (int __user *)arg, sizeof(int)))
							return -EFAULT;

					if (option & WDIOS_DISABLECARD) {
						if (wdt_status==2) {
						    pre_str_watchdogmode = WDIOS_ENABLE_WITH_KERNEL_AUTO_KICK;
						}
						else if (wdt_status==0) {
						    pre_str_watchdogmode = WDIOS_DISABLECARD;
						}
						else if (rtk_wdog_timeout_value == 57) {
							if(flag_watchdog==1) {
								if(rtk_wdog_kick_by_ap==1) { // watchdog on and kick by ap
								    pre_str_watchdogmode = WDIOS_ENABLECARD;
								}
								else
								    pre_str_watchdogmode = WDIOS_ENABLE_WITH_KERNEL_AUTO_KICK;
							}
							else
							    pre_str_watchdogmode = WDIOS_DISABLECARD;
							pr_err("watchdog timeout = 57, pre_str=%d\n", pre_str_watchdogmode);
							rtk_wdog_timeout_value = 60;
						}
						else {
							//pr_err("watchdog timeout != 57, pre_str=%d\n", pre_str_watchdogmode);
						}
					}

					if (arch_timer_read_counter()/27000 < (1000*120)) {
						pr_err("ioctl:WDIOC_SETOPTIONS: can't set watchdog, start time < 120sec, option=0x%x, (%d/%d/%d)\n", option, WDIOS_DISABLECARD, WDIOS_ENABLECARD, WDIOS_ENABLE_WITH_KERNEL_AUTO_KICK);
						return 0;
					}
					if (wdt_status==2) {
						pr_err("ioctl:WDIOC_SETOPTIONS: can't disable watchdog, it always enabled by bootcode setting wdt=on.\noption=0x%x, if you still want to control by ap, you can set bootcode setting wdt=ap or default, WDOG_TCWCR_reg=0x%x\n", option, rtd_inl(WDOG_TCWCR_reg));
						if(!is_watchdog_enable())
							watchdog_enable(1);
						return 0;
					}

					if (option & WDIOS_DISABLECARD) {
							rtk_wdog_kick_by_ap = 0;
							watchdog_enable(0);
                                                        pr_err("[%s,%d,%s]watchdog & panic timeout function has been disabled by AP! \n",__FILE__,__LINE__,__FUNCTION__);
					}

					if (option & WDIOS_ENABLECARD) {
							rtk_wdog_kick_by_ap = 1;
							watchdog_enable(1);
							 //Set previous timeout value to watchdog. if this is the first time enable watchdog, We will set max timeout value to watchdog.
							rtk_wdog_set_timeout(rtk_wdog_timeout_value); 
#ifdef CONFIG_CUSTOMER_TV043
							rtk_wdog_set_pretimeout(WDOG_DEFAULT_PRETIMEOUT);
#endif
							rtk_wdog_ping();
                                                        pr_err("[%s,%d,%s]watchdog has been enabled, need AP kick it Periodically! \n",__FILE__,__LINE__,__FUNCTION__);
					}

					if (option & WDIOS_ENABLE_WITH_KERNEL_AUTO_KICK) {
							rtk_wdog_kick_by_ap = 0;
							watchdog_enable(1); //use fault watchdog value.
							rtk_wdog_ping();
                                                        pr_err("[%s,%d,%s]watchdog has been enabled, with kernel kick it Periodically! \n",__FILE__,__LINE__,__FUNCTION__);
					}
					break;

			case WDIOC_GETTIMEOUT:
					timeout = rtk_wdog_get_timeout();
					return put_user(timeout, (int __user *)arg);	

			case WDIOC_GETTIMELEFT: 
					//get the time that's left before rebooting
					timeout_left = rtk_wdog_expires - ktime_to_timespec(ktime_get()).tv_sec;
					if(timeout_left < 0){
							timeout_left = 0;
					}
					return put_user(timeout_left, (int __user *)arg);

			case WDIOC_SETPRETIMEOUT:
					if (get_user(pretimeout, (int __user *)arg))
							return -EFAULT;
					if (pretimeout > WDOG_TIMEOUT_MAX)
							return -EFAULT;	
					rtk_wdog_set_pretimeout(pretimeout);
					break;

			case WDIOC_GETPRETIMEOUT: 
					pretimeout = rtk_wdog_get_pretimeout();
					return put_user(pretimeout, (int __user *)arg);

			case WDIOC_GETBOOTSTATUS:
					boot_status =  rtk_wdog_getbootstatus();
					return put_user(boot_status, (int __user *)arg);

			case WDIOC_GETSTATUS:
					if(is_watchdog_enable()){
							if(rtk_wdog_kick_by_ap == 0){
									wdog_status = RHAL_WDOG_IS_ON_WITH_KERNEL_AUTO_KICK;
							}
							else{
									wdog_status = RHAL_WDOG_IS_ON_NEED_AP_KICK;      
							}
					}
					else{
							wdog_status = RHAL_WDOG_IS_OFF;
					}
					return put_user(wdog_status, (int __user *)arg);

			default:  /* redundant, as cmd was checked against MAXNR */
					pr_err("wdog ioctl code not supported\n");
				        return -ENOTTY;
	}
	return 0;
       
}

static long rtk_wdog_unlocked_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
	int ret;

	mutex_lock(&rtk_wdog_mutex);
	ret = rtk_wdog_ioctl(file, cmd, arg);
	mutex_unlock(&rtk_wdog_mutex);

	return ret;
}

struct file_operations wdog_fops = {
        .owner                 =    THIS_MODULE,
        .unlocked_ioctl        =    rtk_wdog_unlocked_ioctl,
};
#ifdef CONFIG_CUSTOMER_TV043
irqreturn_t wdog_NMI_intr (int irq, void *dev_id)
{
    	int value = rtd_inl(WDOG_MSK_ISR_reg);

    	//struct task_struct *p;
    	if(!(value & WDOG_MSK_ISR_wdog_int_mask)) { //TODO:ALL CPU INTR BIT
        	return IRQ_NONE;
    	}
    	//clear wdog interrupt pending bit.Write ?¡ã1?¡À to clear. 
    	rtd_setbits(WDOG_MSK_ISR_reg, WDOG_MSK_ISR_wdog_int_mask);
        //disable wdog interrupt function to avoid multiple print pretimeout log.
        rtd_clearbits(WDOG_TCWCR_reg, WDOG_TCWCR_wdie_mask);

        dump_stack();
        handle_sysrq('m'); /* dump memory stats */

#if 0 //following flow need wait for is_roku_application() ready.        
        rcu_read_lock();
        for_each_process(p) {
            task_lock(p);
            if (is_roku_application(p))
            { 
                send_sig(SIGKILL, p, 1); 
                task_unlock(p); 
                break;
            }
            task_unlock(p);
        }
        rcu_read_unlock();        
#endif        
        handle_sysrq('t'); /* dump scheduler state */
        return IRQ_HANDLED;
}
#endif

#define WDOG_NMI_IRQ_NUM    31
static __init int rtk_wdog_init_module(void)
{
	int result = -1;
	dev_t dev = 0;

	if (wdog_major) {
			dev = MKDEV(wdog_major, wdog_minor);
			result = register_chrdev_region(dev, 1, WDOG_DEVICE_NAME);
	} else {
			result = alloc_chrdev_region(&dev, wdog_minor, 1, WDOG_DEVICE_NAME);
			wdog_major = MAJOR(dev);
	}
	if (result < 0) {
			pr_err("wdog: can't get major %d\n", wdog_major);
			return result;
	}
	pr_info("wdog:get result:%d,get dev:0x%08x,major:%d\n", result, dev, wdog_major);

	wdog_class = class_create(THIS_MODULE, WDOG_DEVICE_NAME);
	if (IS_ERR(wdog_class))
			return PTR_ERR(wdog_class);

	wdog_drv_dev = kmalloc(sizeof(struct wdog_dev), GFP_KERNEL);
	if (!wdog_drv_dev) {
			device_destroy(wdog_class, dev);
			result = -ENOMEM;
			pr_err("wdog: alloc memory Failed, result = %d\n", result);
			return result;
	}
	memset(wdog_drv_dev, 0, sizeof(struct wdog_dev));

	cdev_init(&wdog_drv_dev->cdev, &wdog_fops);
	wdog_drv_dev->cdev.owner = THIS_MODULE;
	wdog_drv_dev->cdev.ops = &wdog_fops;

	result = cdev_add(&wdog_drv_dev->cdev, dev, 1);
	if (result) {
			device_destroy(wdog_class, dev);
			pr_err("wdog: add cdev Failed, result = %d\n", result);
			goto fail;
	}

	device_create(wdog_class, NULL, dev, NULL, WDOG_DEVICE_NAME);

#ifdef CONFIG_CUSTOMER_TV043
    if(request_irq(WDOG_NMI_IRQ_NUM,
                   wdog_NMI_intr,
                   IRQF_SHARED,
                   "wdog",
                   wdog_NMI_intr)) {
            printk(KERN_ERR "wdog: cannot register NMI IRQ %d\n", IRQ_CEC);
            return -1;
    }
#endif   
	pr_info("rtk_wdog_init_module successfully!! \n");

	return 0;
fail:
	kfree(wdog_drv_dev);
	wdog_drv_dev = NULL;
	return result;
}

static __exit void rtk_wdog_cleanup_module(void)
{
    	dev_t devno = MKDEV(wdog_major, wdog_minor);
    	if (wdog_drv_dev) {
			cdev_del(&(wdog_drv_dev->cdev));
			device_destroy(wdog_class, MKDEV(wdog_major, wdog_minor));
			kfree(wdog_drv_dev);
	}
    	class_destroy(wdog_class);
    	unregister_chrdev_region(devno, 1);	
}
EXPORT_SYMBOL(rtk_wdog_init_module);
EXPORT_SYMBOL(rtk_wdog_cleanup_module);

module_init(rtk_wdog_init_module);
module_exit(rtk_wdog_cleanup_module);
MODULE_AUTHOR("Realtek.com");
MODULE_LICENSE("GPL");

