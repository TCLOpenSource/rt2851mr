/******************************************************************************
 *
 *   Realtek Demux driver
 *
 *   Copyright(c) 2014 Realtek Semiconductor Corp. All rights reserved.
 *
 *   @author lciou@realtek.com
 *
 *****************************************************************************/

#include <generated/autoconf.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/device.h>
#include <linux/cdev.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/dma-mapping.h>
#include <linux/platform_device.h>
#include <linux/uaccess.h>
#include <asm/cacheflush.h>
#include <linux/poll.h>
#include <linux/sched.h>
#include <linux/wait.h>
#include <linux/string.h>
#include "rtkdemux.h"
#include "rtkdemux_export.h"
#include "rtkdemux_debug.h"
#include "rtkdemux_buf.h"
#include "rtkdemux_ioctl_ex.h"
#include <rbus/pll_reg_reg.h>
#include <rbus/timer_reg.h>
#include <rtk_kdriver/io.h>

#define DRV_NAME    "rtkdemux"

DECLARE_WAIT_QUEUE_HEAD(demux_read_wait);

#ifdef CONFIG_PM
static int DEMUX_suspend(struct device *dev);
static int DEMUX_resume(struct device *dev);
static int DEMUX_restore(struct device *dev);
#endif

static int demux_major = RTKDEMUX_MAJOR;
static int demux_minor;

module_param(demux_major, int, S_IRUGO);
module_param(demux_minor, int, S_IRUGO);

static const char drv_name[] = DRV_NAME;
demux_dev *demux_device;      /* allocated in demux_init_module */

static demux_snapshot demux_snapshot_data;
static struct class *demux_class;
static struct platform_device *demux_platform_devs;

#ifdef CONFIG_PM
static const struct dev_pm_ops demux_pm_ops =
{
	.suspend    = DEMUX_suspend,
	.resume     = DEMUX_resume,
	.freeze     = DEMUX_suspend,
	.thaw       = DEMUX_restore,
	.poweroff   = DEMUX_suspend,
	.restore    = DEMUX_restore,
};
#endif // CONFIG_PM

static struct platform_driver  demux_device_driver =
{
	.driver = {
		.name       = (char *)drv_name,
		.bus        = &platform_bus_type,
		#ifdef CONFIG_PM
		.pm 	  	= & demux_pm_ops,
		#endif
	},
};

#ifdef CONFIG_PM
static int DEMUX_suspend(struct device *dev)
{
	printk( "Demux suspend/freeze \n");
	demux_snapshot_data.uSysPllDispaSD2 = rtd_inl(PLL_REG_SYS_PLL_DISPA_SD2_reg);
	//printk("func=%s line=%d, addr 0x%x, val 0x%x\n", __FUNCTION__, __LINE__, PLL_REG_SYS_PLL_DISPA_SD2_reg, demux_snapshot_data.uSysPllDispaSD2);
#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	demux_snapshot_data.uSysPllDispbSD2 = rtd_inl(PLL_REG_SYS_PLL_DISPB_SD2_reg);
	//printk("func=%s line=%d, addr 0x%x, val 0x%x\n", __FUNCTION__, __LINE__, PLL_REG_SYS_PLL_DISPB_SD2_reg, demux_snapshot_data.uSysPllDispbSD2);
#endif
	demux_snapshot_data.uSysPllDispaSD1 = rtd_inl(PLL_REG_SYS_PLL_DISPA_SD1_reg);
#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	demux_snapshot_data.uSysPllDispbSD1 = rtd_inl(PLL_REG_SYS_PLL_DISPB_SD1_reg);
#endif
	//printk("func=%s line=%d, addr 0x%x, val 0x%x\n", __FUNCTION__, __LINE__, PLL_REG_SYS_PLL_DISPA_SD1_reg, demux_snapshot_data.uSysPllDispaSD1);
	//printk("func=%s line=%d, addr 0x%x, val 0x%x\n", __FUNCTION__, __LINE__, PLL_REG_SYS_PLL_DISPB_SD1_reg, demux_snapshot_data.uSysPllDispbSD1);
	demux_snapshot_data.uScpuClkHiReg = rtd_inl(TIMER_SCPU_CLK90K_HI_reg);
	demux_snapshot_data.uScpuClkLoReg = rtd_inl(TIMER_SCPU_CLK90K_LO_reg);
	/*printk("func=%s line=%d, addr 0x%x, val 0x%x\n", __FUNCTION__, __LINE__, SCPU_CLK90K_HI_reg, demux_snapshot_data.uScpuClkHiReg);*/
	/*printk("func=%s line=%d, addr 0x%x, val 0x%x\n", __FUNCTION__, __LINE__, SCPU_CLK90K_LO_reg, demux_snapshot_data.uScpuClkLoReg);*/

	return 0;
}

static int DEMUX_resume(struct device *dev)
{
	printk( "Demux resume \n");
	DEMUX_PcrTrkRegRestore();
	return 0;
}

static int DEMUX_restore(struct device *dev)
{
	printk( "Demux restore \n");
	DEMUX_PcrTrkRegRestore();
	IOCTL_STDResetInfoPoll();
	return 0;
}

#endif

int DEMUX_open(struct inode *inode, struct file *filp)
{
	dmx_warn("func %s, line %d, NOT implemented!!, fp= %p\n", __func__, __LINE__, filp);
	return 0;
}

int DEMUX_release(struct inode *inode, struct file *filp)
{
	dmx_function_call();

	if (filp == demux_device->fpInit) {
		if (down_interruptible(&demux_device->sem))
			return -ERESTARTSYS;

		IOCTL_UnInitModule();

		up(&demux_device->sem);
	}

	return 0;
}
unsigned int DEMUX_poll(struct file *filp, poll_table *wait)
{
	poll_wait(filp, &demux_read_wait, wait);

	if (IOCTL_CheckRingBufferData(filp)) {
		demux_device->filter_flag = 0;
		return POLLIN | POLLRDNORM;
	} else {
		return 0;
	}
}

void DEMUX_wakeUpPoll(void)
{
	wake_up_interruptible(&demux_read_wait);
}

void DEMUX_PcrTrkRegRestore()
{
#if 0
	/*
		can refer PCRTRACK_REG_EnableFlags() function
	*/
	//Set PLL CKOUT disable (bit 2)
	rtd_maskl(PLL_REG_SYS_PLL_DISPA_SD2_reg, ~(0x00000004), 0x0);
	#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_maskl(PLL_REG_SYS_PLL_DISPB_SD2_reg, ~(0x00000004), 0x0);
	#endif

	//Set PLL control to normal (bit 1)
	rtd_maskl(PLL_REG_SYS_PLL_DISPA_SD2_reg, ~(0x00000002), 0x2);
	#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_maskl(PLL_REG_SYS_PLL_DISPB_SD2_reg, ~(0x00000002), 0x2);
	#endif

	//Set PLL power to active (bit 0)
	rtd_maskl(PLL_REG_SYS_PLL_DISPA_SD2_reg, ~(0x1), 0x1);
	#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_maskl(PLL_REG_SYS_PLL_DISPB_SD2_reg, ~(0x1), 0x1);
	#endif

	//Set SDM_ORDER to select 1nd-order SDM (bit 2)
	rtd_maskl(PLL_REG_SYS_DVFS_DDSA_reg, ~(0x00000004), 0x0);
	#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_maskl(PLL_REG_SYS_DVFS_DDSB_reg, ~(0x00000004), 0x0);
	#endif

	//Set OC_STEP to 1 (bit4~bit13)
	rtd_maskl(PLL_REG_SYS_DVFS_DDSA_reg, ~(0x00003FF0), 0x10);
	#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_maskl(PLL_REG_SYS_DVFS_DDSB_reg, ~(0x00003FF0), 0X10);
	#endif

	//Set OC_MODE to 0 (Low Speed mode ' each step change "OC_STEP") (bit24~bit25)
	rtd_maskl(PLL_REG_SYS_DVFS_DDSA_reg, ~(0x03000000), 0x0);
	#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_maskl(PLL_REG_SYS_DVFS_DDSB_reg, ~(0x03000000), 0X0);
	#endif

	/*
		can refer PCRTRACK_REG_ResetClock() function
	*/
	//Set PLL OC disable (bit 0)
	rtd_maskl(PLL_REG_SYS_DVFS_DDSA_reg, ~(0x1), 0x0);
	#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_maskl(PLL_REG_SYS_DVFS_DDSB_reg, ~(0x1), 0x0);
	#endif

	//Set FCODE = 0 (bit16~bit26)
	rtd_maskl(PLL_REG_SYS_PLL_DISPA_SD2_reg, ~(0x07FF0000), 0x0);
	#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_maskl(PLL_REG_SYS_PLL_DISPB_SD2_reg, ~(0x07FF0000), 0x0);
	#endif

	//Set NCODE = 61 (bit8~bit15)
	rtd_maskl(PLL_REG_SYS_PLL_DISPA_SD2_reg, ~(0x0000FF00), 0x3D00);
	#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_maskl(PLL_REG_SYS_PLL_DISPB_SD2_reg, ~(0x0000FF00), 0x3D00);
	#endif

	//Pll divided by 4 (bit30~bit31)
	rtd_maskl(PLL_REG_SYS_PLL_DISPA_SD1_reg, ~(0xC0000000), 0xC0000000);
	#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_maskl(PLL_REG_SYS_PLL_DISPB_SD1_reg, ~(0xC0000000), 0xC0000000);
	#endif

	//Set PLL OC enable (bit 0)
	rtd_maskl(PLL_REG_SYS_DVFS_DDSA_reg, ~(0x1), 0x1);
	#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_maskl(PLL_REG_SYS_DVFS_DDSB_reg, ~(0x1), 0x1);
	#endif
#endif
	/*
		recover DispxSD1 and DispxSD2
	*/
	/* reset DispxSD1 and DispxSD2 to init setting */
#if 0
    demux_snapshot_data.uSysPllDispaSD2 = 0x00003d03;
    demux_snapshot_data.uSysPllDispbSD2 = 0x00003d03;
    demux_snapshot_data.uSysPllDispaSD1 = 0xc005c000;
    demux_snapshot_data.uSysPllDispbSD1 = 0xc005c000;
	rtd_outl(PLL_REG_SYS_PLL_DISPA_SD2_reg, demux_snapshot_data.uSysPllDispaSD2);
#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_outl(PLL_REG_SYS_PLL_DISPB_SD2_reg, demux_snapshot_data.uSysPllDispbSD2);
#endif
	rtd_outl(PLL_REG_SYS_PLL_DISPA_SD1_reg, demux_snapshot_data.uSysPllDispaSD1);
#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	rtd_outl(PLL_REG_SYS_PLL_DISPB_SD1_reg, demux_snapshot_data.uSysPllDispbSD1);
#endif
#endif
	dmx_info("func=%s line=%d, addrASD1 0x%x, val 0x%x\n", __FUNCTION__, __LINE__, rtd_inl(PLL_REG_SYS_PLL_DISPA_SD1_reg), demux_snapshot_data.uSysPllDispaSD1);
	dmx_info("func=%s line=%d, addrASD2 0x%x, val 0x%x\n", __FUNCTION__, __LINE__, rtd_inl(PLL_REG_SYS_PLL_DISPA_SD2_reg), demux_snapshot_data.uSysPllDispaSD2);
#ifdef CONFIG_RTK_KDRV_MULTI_TP_CLOCK
	dmx_info("func=%s line=%d, addrBSD1 0x%x, val 0x%x\n", __FUNCTION__, __LINE__, rtd_inl(PLL_REG_SYS_PLL_DISPB_SD1_reg), demux_snapshot_data.uSysPllDispbSD1);
	dmx_info("func=%s line=%d, addrBSD2 0x%x, val 0x%x\n", __FUNCTION__, __LINE__, rtd_inl(PLL_REG_SYS_PLL_DISPB_SD2_reg), demux_snapshot_data.uSysPllDispbSD2);
#endif
	/*
		recover System clk
	*/
	rtd_outl(TIMER_SCPU_CLK90K_HI_reg, demux_snapshot_data.uScpuClkHiReg);
	rtd_outl(TIMER_SCPU_CLK90K_LO_reg, demux_snapshot_data.uScpuClkLoReg);
	/*printk("func=%s line=%d, addr 0x%x, val 0x%x\n", __FUNCTION__, __LINE__, SCPU_CLK90K_HI_reg, demux_snapshot_data.uScpuClkHiReg);*/
	/*printk("func=%s line=%d, addr 0x%x, val 0x%x\n", __FUNCTION__, __LINE__, SCPU_CLK90K_LO_reg, demux_snapshot_data.uScpuClkLoReg);*/

	printk("func=%s line=%d end\n", __FUNCTION__, __LINE__);
}

#ifdef CONFIG_COMPAT
long DEMUX_compat_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
{
	void __user *compat_arg = compat_ptr(arg);
	return DEMUX_ioctl(filp, cmd,(unsigned long)compat_arg);
}
#endif

long DEMUX_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
{
	int ret = -ENOTTY;

	if (_IOC_TYPE(cmd) != DEMUX_IOC_MAGIC || _IOC_NR(cmd) > DEMUX_IOC_MAXNR)
		return -ENOTTY;

	if (down_interruptible(&demux_device->sem))
		return -ERESTARTSYS;

	if (cmd == DEMUX_IOC_INIT || cmd == DEMUX_IOC_INIT_COMPAT) {
		ret = IOCTL_InitModule();
		if (ret >= 0) {
			demux_device->fpInit = filp;
		}
	}
	else if (cmd == DEMUX_IOC_UNINIT || cmd == DEMUX_IOC_UNINIT_COMPAT) {
		ret = IOCTL_UnInitModule();
	}
	else if (cmd == DEMUX_IOC_GET_BUF_INFO || cmd == DEMUX_IOC_GET_BUF_INFO_COMPAT) {
		DEMUX_BUF_INFO_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_BUF_INFO_T))
				||  IOCTL_GetBufferInfo(&data) < 0
				||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_BUF_INFO_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_BUF_INFO failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_GET_STC || cmd == DEMUX_IOC_GET_STC_COMPAT) {
		DEMUX_STC_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_STC_T))
				||  IOCTL_GetSTC(&data) < 0
				||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_STC_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_STC failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_START_SCRAMBLE_CHECK || cmd == DEMUX_IOC_START_SCRAMBLE_CHECK_COMPAT) {
		DEMUX_SCRAMBLE_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SCRAMBLE_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_START_SCRAMBLE_CHECK failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_StartSCrambleCheck(&data);
	}
	else if (cmd == DEMUX_IOC_STOP_SCRAMBLE_CHECK || cmd == DEMUX_IOC_STOP_SCRAMBLE_CHECK_COMPAT) {
		DEMUX_SCRAMBLE_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SCRAMBLE_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_STOP_SCRAMBLE_CHECK failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_StopSCrambleCheck(&data);
	}
	else if (cmd == DEMUX_IOC_CHECK_SCRAMBLED_STATUS || cmd == DEMUX_IOC_CHECK_SCRAMBLED_STATUS_COMPAT) {
		DEMUX_SCRAMBLE_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SCRAMBLE_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_CHECK_SCRAMBLED_STATUS failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_CheckSCrambledStatus(&data);
	}
	else if (cmd == DEMUX_IOC_GET_PES_HEADER) {
		DEMUX_PES_HEADER_INFO_T pes_header_info;
		if (copy_from_user(&pes_header_info, (void __user *)arg, sizeof(DEMUX_PES_HEADER_INFO_T))) {
			dmx_err("DEMUX_IOC_GET_PES_HEADER, copy parameter from user space failed\n");
			return -EFAULT;
		}

		IOCTL_GetPESHeader(&pes_header_info);

		if (copy_to_user((void __user *)arg, &pes_header_info, sizeof(DEMUX_PES_HEADER_INFO_T))) {
			dmx_err("DEMUX_IOC_GET_PES_HEADER, copy parameter to user space failed\n");
			return -EFAULT;
		}

		ret = 0;
	}
	else if (cmd == DEMUX_IOC_SET_PID || cmd == DEMUX_IOC_SET_PID_COMPAT) {
		DEMUX_SET_PID_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SET_PID_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_PID failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetPID(&data);
	}
	else if (cmd == DEMUX_IOC_GET_PID || cmd == DEMUX_IOC_GET_PID_COMPAT) {
		DEMUX_GET_PID_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_GET_PID_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_PID failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_GetPID(&data);
	}
	else if (cmd == DEMUX_IOC_ADD_SECTION_FILTER) {
		DEMUX_ADD_SEC_FILTER_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_ADD_SEC_FILTER_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_ADD_SECTION_FILTER failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else {
			ret = IOCTL_AddSectionFilter(&data);
			if (ret < 0 || copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_ADD_SEC_FILTER_T))) {
				ret = -EFAULT;
				dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_ADD_SECTION_FILTER failed !!!!!!!!!!!!!!!\n", __LINE__);
			}
		}
	}
#ifdef CONFIG_COMPAT
	else if (cmd == DEMUX_IOC_ADD_SECTION_FILTER_COMPAT) {
		DEMUX_ADD_SEC_FILTER_T data;
		DEMUX_ADD_SEC_FILTER_COMPAT_T compat_data;
		if(copy_from_user((void *)&compat_data, (const void __user *)arg, sizeof(DEMUX_ADD_SEC_FILTER_COMPAT_T))){
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_ADD_SECTION_FILTER_COMPAT failed !!!!!!!!!!!!!!!\n", __LINE__);
		}
		else
		{
			data.ch = compat_data.ch;
			data.size = compat_data.size;
			data.param.PID = compat_data.param.PID;
			data.param.crc_en = compat_data.param.crc_en;
			data.param.one_shoot = compat_data.param.one_shoot;
			data.param.toggle_mode_en = compat_data.param.toggle_mode_en;
			memcpy(data.param.PosVal, compat_data.param.PosVal, sizeof(data.param.PosVal));
			memcpy(data.param.PosMsk, compat_data.param.PosMsk, sizeof(data.param.PosMsk));
			memcpy(data.param.NegVal, compat_data.param.NegVal, sizeof(data.param.NegVal));
			memcpy(data.param.NegMsk, compat_data.param.NegMsk, sizeof(data.param.NegMsk));

			data.param.pContext = compat_ptr(compat_data.param.context_ptr);
			data.param.Complete = compat_ptr(compat_data.param.complete_ptr);
			data.param.Request_buf = compat_ptr(compat_data.param.Request_buf_ptr);

			ret = IOCTL_AddSectionFilter(&data);
			compat_data.baseAddr = data.baseAddr;
			compat_data.baseAllocSize = data.baseAllocSize;
			compat_data.headerPhyAddr = data.headerPhyAddr;
			compat_data.headerSize = data.headerSize;
			compat_data.allocSize = data.allocSize;

			if (ret < 0 || copy_to_user((void __user *)arg, (void *)&compat_data, sizeof(DEMUX_ADD_SEC_FILTER_COMPAT_T))) {
				ret = -EFAULT;
				dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_ADD_SECTION_FILTER_COMAT failed !!!!!!!!!!!!!!!\n", __LINE__);
			}
		}
	}
#endif
	else if (cmd == DEMUX_IOC_CANCEL_SECTION_FILTER || cmd == DEMUX_IOC_CANCEL_SECTION_FILTER_COMPAT) {
		DEMUX_CANCEL_SEC_FILTER_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_CANCEL_SEC_FILTER_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_CANCEL_SECTION_FILTER failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_CancelSectionFilter(&data);
	}
	else if (cmd == DEMUX_IOC_ADD_PES_FILTER || cmd == DEMUX_IOC_ADD_PES_FILTER_COMPAT) {
		DEMUX_ADD_PES_FILTER_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_ADD_PES_FILTER_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_ADD_PES_FILTER failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else {
			ret = IOCTL_AddPESFilter(&data);
			if (ret < 0 || copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_ADD_PES_FILTER_T))) {
				ret = -EFAULT;
				dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_ADD_PES_FILTER failed !!!!!!!!!!!!!!!\n", __LINE__);
			}
		}
	}
	else if (cmd == DEMUX_IOC_CANCEL_PES_FILTER || cmd == DEMUX_IOC_CANCEL_PES_FILTER_COMPAT) {
		DEMUX_CANCEL_PES_FILTER_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_CANCEL_PES_FILTER_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_CANCEL_PES_FILTER failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_CancelPESFilter(&data);
	}
	else if (cmd == DEMUX_IOC_FREE_FILTER_BUFFER || cmd == DEMUX_IOC_FREE_FILTER_BUFFER_COMPAT) {
		DEMUX_FREE_FILTER_BUFFER_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_FREE_FILTER_BUFFER_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_FREE_FILTER_BUFFER failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_FreeFilterBuffer(&data);
	}
	else if (cmd == DEMUX_IOC_START_PCR_RECOVERY || cmd == DEMUX_IOC_START_PCR_RECOVERY_COMPAT) {
		DEMUX_CHANNEL_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_CHANNEL_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_START_PCR_RECOVERY failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else {
			dmx_dbg("\033[1;36m [%s %d] DEMUX_StartPCRRecovery(%d)\033[m\n", __func__ , __LINE__ , data )
			ret = IOCTL_StartPCRRecovery(&data);
		}
	}
	else if (cmd == DEMUX_IOC_STOP_PCR_RECOVERY || cmd == DEMUX_IOC_STOP_PCR_RECOVERY_COMPAT) {
		DEMUX_CHANNEL_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_CHANNEL_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_STOP_PCR_RECOVERY failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else {
			dmx_dbg("\033[1;36m [%s %d] DEMUX_StopPCRRecovery(%d)\033[m\n", __func__ , __LINE__ , data );
			ret = IOCTL_StopPCRRecovery(&data);
		}
	}
	else if (cmd == DEMUX_IOC_RESET_FILTERS || cmd == DEMUX_IOC_RESET_FILTERS_COMPAT) {
		DEMUX_RESET_FILTERS_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_RESET_FILTERS_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_RESET_FILTERS failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_ResetFilters(&data);
	}
	else if (cmd == DEMUX_IOC_INIT_DESCRAMBLER || cmd == DEMUX_IOC_INIT_DESCRAMBLER_COMPAT) {
		DEMUX_INIT_DESCRAMBLER_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_INIT_DESCRAMBLER_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_INIT_DESCRAMBLER failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_InitDescrambler(&data);
	}
	else if (cmd == DEMUX_IOC_SET_DESCRAMBLER_MODE || cmd == DEMUX_IOC_SET_DESCRAMBLER_MODE_COMPAT) {
		DEMUX_DESCRAMBLER_MODE_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_DESCRAMBLER_MODE_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_DESCRAMBLER_MODE failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetDescramblerMode(&data);
	}
	else if (cmd == DEMUX_IOC_GET_DESCRAMBLER_CWINFO || cmd == DEMUX_IOC_GET_DESCRAMBLER_CWINFO_COMPAT) {
		DEMUX_DESCRAMBLER_CWINFO_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_DESCRAMBLER_CWINFO_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_DESCRAMBLER_CWINFO copy data failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else{
			if (IOCTL_GetCWInfo(&data) < 0 || copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_DESCRAMBLER_CWINFO_T))) {
				ret = -EFAULT;
				dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_DESCRAMBLER_CWINFO failed !!!!!!!!!!!!!!!\n", __LINE__);
			} else
				ret = 0;
		}
	}
	else if (cmd == DEMUX_IOC_SET_CW || cmd == DEMUX_IOC_SET_CW_COMPAT) {
		DEMUX_SET_CW_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SET_CW_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_CW failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetCW(&data);
	}
	else if (cmd == DEMUX_IOC_GET_PID_FILTER_INDEX || cmd == DEMUX_IOC_GET_PID_FILTER_INDEX_COMPAT) {
		DEMUX_SET_PID_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SET_PID_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_PID_FILTER_INDEX failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_GetPIDFilterIndex(&data);
	}
	else if (cmd == DEMUX_IOC_MTP_FLUSH || cmd == DEMUX_IOC_MTP_FLUSH_COMPAT) {
		DEMUX_MTP_FLUSH_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_MTP_FLUSH_T)))	{
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_MTP_FLUSH failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_MTPFlush(&data);
	}
	else if (cmd == DEMUX_IOC_MTP_GET_BUF || cmd == DEMUX_IOC_MTP_GET_BUF_COMPAT) {
		DEMUX_PVR_BUF_INFO_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_PVR_BUF_INFO_T))
				||  IOCTL_MTPGetBuffer(&data) < 0
				||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_PVR_BUF_INFO_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_MTP_GET_BUF failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_MTP_WRITE_BUF || cmd == DEMUX_IOC_MTP_WRITE_BUF_COMPAT) {
		DEMUX_MTP_WRITE_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_MTP_WRITE_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_MTP_WRITE_BUF failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_MTPWriteBuffer(&data);
	}
	else if (cmd == DEMUX_IOC_MTP_GET_WRITE_STATUS || cmd == DEMUX_IOC_MTP_GET_WRITE_STATUS_COMPAT) {
		DEMUX_MTP_WRITE_STATUS_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_MTP_WRITE_STATUS_T))
				||  IOCTL_MTPGetWriteStatus(&data) < 0
				||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_MTP_WRITE_STATUS_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_MTP_GET_WRITE_STATUS failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_SET_TIMESTAMP_PADDING || cmd == DEMUX_IOC_SET_TIMESTAMP_PADDING_COMPAT) {
		DEMUX_TIMESTAMP_SETTING_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_TIMESTAMP_SETTING_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_TIMESTAMP_PADDING failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetTimeStampPadding(&data);
	}
	else if (cmd == DEMUX_IOC_GET_TP_BUF_STATUS ) {
		DEMUX_TP_BUF_STATUS_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_TP_BUF_STATUS_T))
				||  IOCTL_GetTPBufStatus(&data) < 0
				||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_TP_BUF_STATUS_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_TP_BUF_STATUS_T failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_GET_ES_BUF_STATUS ) {
		DEMUX_ES_BUF_STATUS_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_ES_BUF_STATUS_T))
				||  IOCTL_GetESBufStatus(&data) < 0
				||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_ES_BUF_STATUS_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_ES_BUF_STATUS failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;

	}
	else if (cmd == DEMUX_IOC_SET_UPLOAD_UNITSIZE) {
		DEMUX_UPLOADUNITSIZE_SETTING_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_UPLOADUNITSIZE_SETTING_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_UPLOAD_UNITSIZE failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetUploadUnitSize(&data);
	}
	else if (cmd == DEMUX_IOC_SET_TP_PARAM || cmd == DEMUX_IOC_SET_TP_PARAM_COMPAT) {
		DEMUX_TP_PARAM_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_TP_PARAM_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_TP_PARAM failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetTPParam(&data);
	}
	else if (cmd == DEMUX_IOC_GET_TP_PARAM || cmd == DEMUX_IOC_GET_TP_PARAM_COMPAT) {
		DEMUX_TP_PARAM_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_TP_PARAM_T))
				||  IOCTL_GetTPParam(&data) < 0
				||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_TP_PARAM_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_TP_PARAM failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_SET_TP_DATA_SOURCE || cmd == DEMUX_IOC_SET_TP_DATA_SOURCE_COMPAT) {
		DEMUX_TP_SOURCE_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_TP_SOURCE_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_TP_DATA_SOURCE failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetTPSource(&data);
	}
	else if (cmd == DEMUX_IOC_GET_TP_DATA_SOURCE || cmd == DEMUX_IOC_GET_TP_DATA_SOURCE_COMPAT) {
		DEMUX_TP_SOURCE_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_TP_SOURCE_T))
				||  IOCTL_GetTPSource(&data) < 0
				||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_TP_SOURCE_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_TP_DATA_SOURCE failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_SET_PRIVATE_INFO || cmd == DEMUX_IOC_SET_PRIVATE_INFO_COMPAT) {
		DEMUX_PRIVATE_INFO_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_PRIVATE_INFO_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_PRIVATE_INFO failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetPrivateInfo(&data);
	}
	else if (cmd == DEMUX_IOC_TP_STREAM_CONTROL || cmd == DEMUX_IOC_TP_STREAM_CONTROL_COMPAT) {
		DEMUX_TP_STREAM_CONTROL_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_TP_STREAM_CONTROL_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_TP_STREAM_CONTROL failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetTPStreamControl(&data);
	}
	else if (cmd == DEMUX_IOC_SET_RECORD_STATUS || cmd == DEMUX_IOC_SET_RECORD_STATUS_COMPAT) {
		DEMUX_REC_STATUS_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_REC_STATUS_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_RECORD_STATUS failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetRecStatus(&data);
	}
	else if (cmd == DEMUX_IOC_SET_MTP_STREAMING_STATUS || cmd == DEMUX_IOC_SET_MTP_STREAMING_STATUS_COMPAT) {
		DEMUX_MTP_STREAMING_STATUS_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_MTP_STREAMING_STATUS_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_MTP_STREAMING_STATUS failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetMtpStreaming(&data);
	}
	else if (cmd == DEMUX_IOC_GET_BUF_INFO_EX || cmd == DEMUX_IOC_GET_BUF_INFO_EX_COMPAT) {
		DEMUX_BUF_INFO_EX_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_BUF_INFO_EX_T))
				||  IOCTL_GetBufferInfoEX(&data) < 0
				||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_BUF_INFO_EX_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_BUF_INFO_CB failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_ENABLE_DESCRAMBLER || cmd == DEMUX_IOC_ENABLE_DESCRAMBLER_COMPAT) {
		DEMUX_ENABLE_DESCRAMBLER_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_ENABLE_DESCRAMBLER_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_ENABLE_DESCRAMBLER failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_EnableDescrambler(&data);
	}
	else if (cmd == DEMUX_IOC_IS_PID_ACTIVE || cmd == DEMUX_IOC_IS_PID_ACTIVE_COMPAT) {
		DEMUX_IS_PID_ACTIVE_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_IS_PID_ACTIVE_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_IS_PID_ACTIVE failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_IsPidActive(&data);
	}
	else if (cmd == DEMUX_IOC_CLEAR_DESCRAMBLER || cmd == DEMUX_IOC_CLEAR_DESCRAMBLER_COMPAT) {
		DEMUX_CLEAR_DESCRAMBLER_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_CLEAR_DESCRAMBLER_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_CLEAR_DESCRAMBLER failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_ClearDescrambler(&data);
	}
	else if (cmd == DEMUX_IOC_SWITCH_DESCRAMBLER || cmd == DEMUX_IOC_SWITCH_DESCRAMBLER_COMPAT) {
		DEMUX_SWITCH_DESCRAMBLER_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SWITCH_DESCRAMBLER_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SWITCH_DESCRAMBLER failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SwitchDescrambler(&data);
	}
	else if (cmd == DEMUX_IOC_SET_CI_CHANNEL || cmd == DEMUX_IOC_SET_CI_CHANNEL_COMPAT) {
		DEMUX_SET_CI_CHANNEL_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SET_CI_CHANNEL_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_CI_CHANNEL failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetCIChannel(&data);
	}
	else if (cmd == DEMUX_IOC_GET_TP_HARDWARE_INFO || cmd == DEMUX_IOC_GET_TP_HARDWARE_INFO_COMPAT) {
		DEMUX_GET_TP_HARDWARE_INFO_T data;
		if (IOCTL_GetHardwareInfo(&data) < 0 || copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_GET_TP_HARDWARE_INFO_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_TP_HARDWARE_INFO failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_DEBUG_INFO || cmd == DEMUX_IOC_DEBUG_INFO_COMPAT) {
		DEMUX_DEBUG_INFO_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_DEBUG_INFO_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_DEBUG_INFO failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_DebugInfo(&data);
	}
	else if (cmd == DEMUX_IOC_SET_PID_ACTIVE || cmd == DEMUX_IOC_SET_PID_ACTIVE_COMPAT) {
		DEMUX_SET_MULTI_PID_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SET_MULTI_PID_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_PID_ACTIVE failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetPidActive(&data);
	}
	else if (cmd == DEMUX_IOC_SET_PID_MULTI || cmd == DEMUX_IOC_SET_PID_MULTI_COMPAT) {
		DEMUX_SET_MULTI_PID_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SET_MULTI_PID_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_PID_MULTI failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetPIDs(&data);
	}
	else if (cmd == DEMUX_IOC_REMOVE_PID_MULTI || cmd == DEMUX_IOC_REMOVE_PID_MULTI_COMPAT) {
		DEMUX_REMOVE_PID_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_REMOVE_PID_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_REMOVE_PID_MULTI failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_RemovePIDs(&data);
	}
	else if (cmd == DEMUX_IOC_SET_TP_INPUT_POL || cmd == DEMUX_IOC_SET_TP_INPUT_POL_COMPAT) {
		DEMUX_TP_INPUT_POL_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_TP_INPUT_POL_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_TP_INPUT_POL failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetInputSourcePol(&data);
	}
#ifdef TP_SUPPORT_CI
	else if (cmd == DEMUX_IOC_SET_TP_OUT_DATA_SOURCE || cmd == DEMUX_IOC_SET_TP_OUT_DATA_SOURCE_COMPAT) {
		DEMUX_SET_TP_OUT_SOURCE_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SET_TP_OUT_SOURCE_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_TP_OUT_DATA_SOURCE failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetTPOutDataSource(&data);
	}
	else if (cmd == DEMUX_IOC_SET_TP_OUT_STREAM_CONTROL || cmd == DEMUX_IOC_SET_TP_OUT_STREAM_CONTROL_COMPAT) {
		DEMUX_SET_TP_OUT_STREAM_CONTROL_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SET_TP_OUT_STREAM_CONTROL_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_TP_OUT_STREAM_CONTROL failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetTPOutStreamControl(&data);
	}
	else if (cmd == DEMUX_IOC_SET_TP_OUT_CLOCK_SPEED || cmd == DEMUX_IOC_SET_TP_OUT_CLOCK_SPEED_COMPAT) {
		DEMUX_SET_TP_OUT_CLOCK_SPEED_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SET_TP_OUT_CLOCK_SPEED_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_TP_OUT_CLOCK_SPEED failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetTPOutClockSpeed(&data);
	}
#endif
	else if (cmd == DEMUX_IOC_FREE_DESCRAMBLE_INDEX || cmd == DEMUX_IOC_FREE_DESCRAMBLE_INDEX_COMPAT) {
		DEMUX_FREE_DESCRAMBLE_INDEX_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_FREE_DESCRAMBLE_INDEX_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_FREE_DESCRAMBLE_INDEX failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_FreeAllPIDFilterIndex(&data);
	}
	else if (cmd == DEMUX_IOC_SET_SPEED || cmd == DEMUX_IOC_SET_SPEED_COMPAT) {
		DEMUX_SET_SPEED_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_SET_SPEED_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_SPEED failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_ChangeAvSyncMode(&data);
	}
	else if (cmd == DEMUX_IOC_GET_TP_STATUS || cmd == DEMUX_IOC_GET_TP_STATUS_COMPAT) {
		DEMUX_TP_STATUS_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_TP_STATUS_T))
				||  IOCTL_GetTPStatus(&data) < 0
				||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_TP_STATUS_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_TP_STATUS failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_SET_TP_INPUT_CONFIG || cmd == DEMUX_IOC_SET_TP_INPUT_CONFIG_COMPAT) {
		DEMUX_TP_SOURCE_CONFIG_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_TP_SOURCE_CONFIG_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_TP_INPUT_CONFIG failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_SetTPInputConfig(&data);
	}
	else if (cmd == DEMUX_IOC_GET_FILTERLIST || cmd == DEMUX_IOC_GET_FILTERLIST_COMPAT) {
		const size_t allocate_size = sizeof(DEMUX_GET_FILTERS_T);
		DEMUX_GET_FILTERS_T *data = (DEMUX_GET_FILTERS_T*)kmalloc(allocate_size, GFP_KERNEL);
		if (copy_from_user((void *)data, (const void __user *)arg, allocate_size)
				||  IOCTL_GetFilterList(data) < 0
				||  copy_to_user((void __user *)arg, (void *)data, allocate_size)) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_FILTERLIST failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else {
			ret = 0;
		}

		kfree(data);
		data = NULL;
	}
	else if (cmd == DEMUX_IOC_GET_TP_PACKETSTATUS || cmd == DEMUX_IOC_GET_TP_PACKETSTATUS_COMPAT) {
		DEMUX_TP_PACKETSTATUS_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_TP_PACKETSTATUS_T))
				||  IOCTL_GetTPPacketStatus(&data) < 0
				||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_TP_PACKETSTATUS_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_FILTERLIST failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_COMPENSATE_PCROFFSET ) {
		DEMUX_COMPENSATE_PCROFFSET_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_COMPENSATE_PCROFFSET_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_COMPENSATE_PCROFFSET failed !!!!!!!!!!!!!!!\n", __LINE__);
		}
		else
			ret = IOCTL_CompensatePCROffset(&data);
	}
	else if (cmd == DEMUX_IOC_FREE_MTP || cmd == DEMUX_IOC_FREE_MTP_COMPAT) {
		DEMUX_CHANNEL_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_CHANNEL_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_FREE_MTP failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = IOCTL_FreeMTPBuf(&data);
	}
	else if (cmd == DEMUX_IOC_SET_PATTERN_SEARCH_PID || cmd == DEMUX_IOC_SET_PATTERN_SEARCH_PID_COMPAT) {
		DEMUX_TP_PATTERN_SEARCH_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_TP_PATTERN_SEARCH_T))) {
			ret = -EFAULT;
		} else
			ret = IOCTL_SetTPPatternSearchPID(&data);
	}
	else if (cmd == DEMUX_IOC_GET_INFO_BUF || cmd == DEMUX_IOC_GET_INFO_BUF_COMPAT) {
		DEMUX_PVR_BUF_INFO_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_PVR_BUF_INFO_T))
			||  IOCTL_GetTPInfoBuffer(&data) < 0
			||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_PVR_BUF_INFO_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_INFO_BUF failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_HALLOG || cmd == DEMUX_IOC_HALLOG_COMPAT) {
		unsigned char halLogBuf[256];
		halLogBuf[255] = 0;
		if (copy_from_user((void *)halLogBuf, (const void __user *)arg, 255)) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_HALLOG failed !!!!!!!!!!!!!!!\n", __LINE__);
		}
		else {
			dmx_notice("%s\n", halLogBuf);
			ret = 0;
		}
	}
	else if (cmd == DEMUX_IOC_GET_PCR_ADAPTION_FIELD ) {
		DEMUX_PCR_ADAPTION_FIELD_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_PCR_ADAPTION_FIELD_T))
				||  IOCTL_GetPCRAdaptionField(&data) < 0
				||  copy_to_user((void __user *)arg, (void *)&data, sizeof(DEMUX_PCR_ADAPTION_FIELD_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_GET_PCR_ADAPTION_FIELD failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else
			ret = 0;
	}
	else if (cmd == DEMUX_IOC_SET_AVSYNC_MODE ) {
		DEMUX_AVSYNC_MODE_T data;
		if (copy_from_user((void *)&data, (const void __user *)arg, sizeof(DEMUX_AVSYNC_MODE_T))) {
			ret = -EFAULT;
			dmx_err("RTKDEMUX[%d]: ioctl DEMUX_IOC_SET_AVSYNC_MODE failed !!!!!!!!!!!!!!!\n", __LINE__);
		} else{
			DEMUX_ResetAVSync(&demux_device->pChArray[data.ch], data.avsyncmode);
			ret = 0;
		}
	}
	else {
		ret = IOCTLEX_Handle(filp, cmd, arg);
	}
	up(&demux_device->sem);
	return ret;
}

struct file_operations demux_fops = {
	.owner              = THIS_MODULE,
	.unlocked_ioctl     = DEMUX_ioctl,
	.open               = DEMUX_open,
	.release            = DEMUX_release,
	.poll               = DEMUX_poll,
	#ifdef CONFIG_COMPAT
	.compat_ioctl       = DEMUX_compat_ioctl,
	#endif
};

static char *DEMUX_devnode(struct device *dev, mode_t *mode)
{
	return NULL;
}

void DEMUX_exit_module(void)
{
	dev_t dev;
	demux_uninit_debug_proc();

	dev = MKDEV(demux_major, demux_minor);

	if (demux_platform_devs == NULL)
		BUG();

	IOCTL_UnInitModule();

	DEMUX_BUF_FreeBuffer(&demux_device->bufPoll);

	device_destroy(demux_class, dev);
	cdev_del(&demux_device->cdev);
	platform_driver_unregister(&demux_device_driver);
	platform_device_unregister(demux_platform_devs);
	kfree(demux_device);
	demux_platform_devs = NULL;
	class_destroy(demux_class);
	demux_class = NULL;
	unregister_chrdev_region(dev, 1);
}

int DEMUX_init_module(void)
{
	int result;
	dev_t dev = 0;
	demux_dev *demux = NULL;

	printk("\n\n\n\n *****************    demux init module  *********************\n\n\n\n");

	if (demux_major) {
		dev = MKDEV(RTKDEMUX_MAJOR, 0);
		result = register_chrdev_region(dev, 1, DRV_NAME);
	} else {
		result = alloc_chrdev_region(&dev, demux_minor, 1, DRV_NAME);
		demux_major = MAJOR(dev);
	}
	if (result < 0) {
		printk("demux: can not get chrdev region...\n");
		return result;
	}

	demux_class = class_create(THIS_MODULE, DRV_NAME);
	if (IS_ERR(demux_class)) {
		printk("demux: can not create class...\n");
		result = PTR_ERR(demux_class);
		goto fail_class_create;
	}

	demux_class->devnode = (void *)DEMUX_devnode;
	
	demux_device = kmalloc(sizeof(demux_dev), GFP_KERNEL);
	if (!demux_device) {
		DEMUX_exit_module();
		return -ENOMEM;
	}

	demux_platform_devs = platform_device_register_simple(DRV_NAME, -1, NULL, 0);
	if (platform_driver_register(&demux_device_driver) != 0) {
		printk("demux: can not register platform driver...\n");
		result = -EINVAL;
		goto fail_platform_driver_register;
	}

	memset(demux_device, 0, sizeof(demux_dev));
	demux = demux_device;
	cdev_init(&demux->cdev, &demux_fops);
	demux->cdev.owner = THIS_MODULE;
	demux->cdev.ops   = &demux_fops;
	if (cdev_add(&demux->cdev, dev, 1) < 0) {
		printk("demux: can not add character device...\n");
		goto fail_cdev_init;
	}
	device_create(demux_class, NULL, dev, NULL, DRV_NAME);

	sema_init(&demux->sem, 1);

	demux_init_debug_proc();
	if(IOCTL_InitModule() ==-1)
		printk("demux: Demux init fail!! \n");
	return 0;

fail_cdev_init:
	platform_driver_unregister(&demux_device_driver);
fail_platform_driver_register:
	platform_device_unregister(demux_platform_devs);
	demux_platform_devs = NULL;
	class_destroy(demux_class);
fail_class_create:
	demux_class = NULL;
	unregister_chrdev_region(dev, 1);
	return result;
}

module_init(DEMUX_init_module);
module_exit(DEMUX_exit_module);


MODULE_AUTHOR("bonds.lu <bonds.lu@realtek.com>");
MODULE_DESCRIPTION("Realtek Demux Driver");
MODULE_ALIAS("platform:rtk-dmx");
MODULE_LICENSE("GPL");
