/*
 * $Id: RPCDriver.c,v 1.10 2004/8/4 09:25 Jacky Exp $
 */
#include <generated/autoconf.h>
/*
#if defined(CONFIG_MODVERSIONS) && !defined(MODVERSIONS)
    #define MODVERSIONS
#endif

#ifdef MODVERSIONS
    #include <linux/modversions.h>
#endif

#ifndef MODULE
#define MODULE
#endif
*/
/*#define       CONFIG_RTK_KDRV_AVCPU*/

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>	/* printk() */
#include <linux/slab.h>		/* kmalloc() */
#include <linux/fs.h>		/* everything... */
#include <linux/errno.h>	/* error codes */
#include <linux/types.h>	/* size_t */
#include <linux/proc_fs.h>
#include <linux/fcntl.h>	/* O_ACCMODE */
#include <linux/ioctl.h>	/* needed for the _IOW etc stuff used later */
#include <linux/device.h>
#include <linux/interrupt.h>
#include <linux/device.h>
#include <linux/platform_device.h>
#include <rtk_kdriver/RPCDriver.h>
#include <asm/cacheflush.h>
#ifdef CONFIG_RTK_KDRV_AVCPU
#include <rtk_kdriver/avcpu.h>
#endif

extern u32 gic_irq_find_mapping(u32 hwirq);

#include <linux/sched.h>
#ifdef CONFIG_REALTEK_OF
#include <linux/of_irq.h>
#include <linux/of_address.h>
#endif

#include <asm/io.h>
//#include <asm/system.h>		/* cli(), *_flags */
#include <linux/uaccess.h>	/* copy_to_user() copy_from_user() */

MODULE_LICENSE("Dual BSD/GPL");

static int rpc_event_notify(struct notifier_block *self, unsigned long action,
			    void *data);

static struct notifier_block rpc_event_notifier = {
	.notifier_call = rpc_event_notify,
};

struct file_operations *rpc_fop_array[] = {
	&rpc_poll_fops,		/* poll */
	&rpc_intr_fops		/* intr */
};

void **rpc_data_ptr_array[] = {
	(void **)&rpc_poll_devices,	/* poll */
	(void **)&rpc_intr_devices	/* intr */
};

int rpc_data_size_array[] = {
	sizeof(RPC_POLL_Dev),	/* poll */
	sizeof(RPC_INTR_Dev)	/* intr */
};

int rpc_major = RPC_MAJOR;
const char *rpc_name = "RPC";

/*
 * Finally, the module stuff
 */

#ifdef CONFIG_DEVFS_FS
#ifndef KERNEL2_6
devfs_handle_t rpc_devfs_dir;
static char devname[4];
#endif
#else
static struct class *rpc_class;
#endif

int RPC_init_module(void);

int flush_sync_flag(void)
{
	dmac_flush_range(phys_to_virt(0x000000d0), phys_to_virt(0x000000e0));
	outer_flush_range(0x000000d0, 0x000000e0);
	return 0;
}

static int rpc_event_notify(struct notifier_block *self, unsigned long action,
			    void *data)
{
#ifdef CONFIG_RTK_KDRV_AVCPU

extern int stravnoreload;

	switch (action) {
	case AVCPU_RESET_PREPARE:
		printk("[RPC]: AVCPU_RESET_PREPARE...\n");
		rpc_poll_pause();
		rpc_intr_pause();
		rpc_kern_pause();

		*((int *)phys_to_virt(SYNC_FLAG_ACPU)) = 0x00000000;
		*((int *)phys_to_virt(SYNC_FLAG_V1CPU)) = 0x00000000;
#ifdef CONFIG_REALTEK_RPC_VCPU2
		*((int *)phys_to_virt(SYNC_FLAG_V2CPU)) = 0x00000000;
#endif
		flush_sync_flag();

		break;
	case AVCPU_RESET_DONE:
		printk("[RPC]: AVCPU_RESET_DONE...\n");
		rpc_poll_init();
		rpc_intr_init();
		rpc_kern_init();

		/* clear the inter-processor interrupts */

#ifdef CONFIG_REALTEK_RPC_KCPU	/* for platform support KCPU case */
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_VK);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_V2K);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_AK);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_SK);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_KV);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_KV2);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_KA);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_KS);
		*((int *)phys_to_virt(SYNC_FLAG_SCPU)) = 0xffffffff;
		dmac_flush_range(phys_to_virt(SYNC_FLAG_SCPU), phys_to_virt(SYNC_FLAG_SCPU + 0x4));
		outer_flush_range(SYNC_FLAG_SCPU, SYNC_FLAG_SCPU + 0x4);
#endif

		rtd_outl(REG_SB2_CPU_INT, RPC_INT_VS);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_VA);		
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_AV);		
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_AS);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_SV);		
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_SA);

#ifdef CONFIG_REALTEK_RPC_VCPU2
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_V2S);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_V2A);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_AV2);
		rtd_outl(REG_SB2_CPU_INT, RPC_INT_SV2);
#endif
		
	/* No need to set RPC sync flag when NO RELOAD AV flow.*/
	/* AV CPU will not check RPC sync flag, and set this will cause send_krpc check sync flag error. */
	if(stravnoreload == 0)//#ifndef SUPPORT_AV_NO_RELOAD
	{
		*((int *)phys_to_virt(SYNC_FLAG_ACPU)) = 0xffffffff;
		*((int *)phys_to_virt(SYNC_FLAG_V1CPU)) = 0xffffffff;
#ifdef CONFIG_REALTEK_RPC_VCPU2
		*((int *)phys_to_virt(SYNC_FLAG_V2CPU)) = 0xffffffff;
#endif
		flush_sync_flag();
	}//endif
		break;
	}
#endif
	return 0;
}

int my_copy_to_user(int *des, int *src, int size)
{
	int *tmp;
	
	if (((long)src & 0x3) || ((long)des & 0x3))
		pr_err("my_copy_to_user: unaligned happen...\n");

	tmp = kmalloc(sizeof(char)*size, GFP_KERNEL);
	if(!tmp)
		pr_err("kmalloc fail...");
	
	memcpy_toio(tmp, (int *)src, sizeof(char)*size);

	if (copy_to_user((void __user *)des, (int *)tmp, sizeof(char)*size)) {
		pr_err("my_copy_to_user: copy error happen...\n");
		kfree(tmp);
		return size;
	}

	kfree(tmp);
	return 0;
}

int my_copy_from_user(int *des, int *src, int size)
{
	int *tmp;
	
	if (((long)src & 0x3) || ((long)des & 0x3))
		pr_err("my_copy_from_user: unaligned happen...\n");

	tmp = kmalloc(sizeof(char)*size, GFP_KERNEL);
	if(!tmp)
		pr_err("kmalloc fail...");

	if (copy_from_user((int *)tmp, (void __user *)src, sizeof(char)*size)) {
		pr_err("my_copy_from_user: copy error happen...\n");
		kfree(tmp);
		return size;
	}

	memcpy_toio((int *)des, tmp, sizeof(char)*size);
	kfree(tmp);
	return 0;
}

int my_copy_user(int *des, int *src, int size)
{
	char *csrc, *cdes;
	int i;

	if (((long)src & 0x3) || ((long)des & 0x3))
		printk("my_copy_user: unaligned happen...\n");

	while (size >= 4) {
		*des++ = *src++;
		size -= 4;
	}

	csrc = (char *)src;
	cdes = (char *)des;
	for (i = 0; i < size; i++)
		cdes[i] = csrc[i];

	return 0;
}

#ifdef CONFIG_ARM64_RPC
irqreturn_t rpc_isr(int irq, void *dev_id)
{
	int itr;
	PDEBUG("irq number %d...\n", irq);

	itr = rtd_inl((unsigned int)REG_SB2_CPU_INT);

	if (itr & (RPC_INT_AS | RPC_INT_VS | RPC_INT_V2S
#ifdef CONFIG_REALTEK_RPC_KCPU
		   | RPC_INT_KS
#endif
	    )) {
		while (itr & (RPC_INT_AS | RPC_INT_VS | RPC_INT_V2S
#ifdef CONFIG_REALTEK_RPC_KCPU
			      | RPC_INT_KS
#endif
		       )) {

			/* ack the interrupt */
			if (itr & RPC_INT_AS) {
				/*to clear interrupt, set bit[0] to 0 then we can clear A2S int */
				rtd_outl(REG_SB2_CPU_INT, RPC_INT_AS);
#ifdef CONFIG_REALTEK_RPC_MULTIPROCESS
				if (rpc_intr_devices[RPC_INTR_DEV_AS_ID1].dev->ringIn !=rpc_intr_devices[RPC_INTR_DEV_AS_ID1].dev->ringOut)
					tasklet_schedule(&
							 (rpc_intr_extra
							  [RPC_INTR_DEV_AS_ID1].
							  tasklet));
#else
				if (rpc_intr_devices[RPC_INTR_DEV_AS_ID1].dev->ringIn !=
				    rpc_intr_devices[RPC_INTR_DEV_AS_ID1].dev->ringOut)
					wake_up_interruptible(&
							      (rpc_intr_devices
							       [RPC_INTR_DEV_AS_ID1].
							       ptrSync->
							       waitQueue));
#endif
				if (rpc_kern_devices[RPC_KERN_DEV_AS_ID1].dev->ringIn !=
				    rpc_kern_devices[RPC_KERN_DEV_AS_ID1].dev->ringOut)
					wake_up_interruptible(&
							      (rpc_kern_devices
							       [RPC_KERN_DEV_AS_ID1].
							       ptrSync->
							       waitQueue));
			}
			if (itr & RPC_INT_VS) {
				/*to clear interrupt */
				rtd_outl(REG_SB2_CPU_INT, RPC_INT_VS);
#ifdef CONFIG_REALTEK_RPC_MULTIPROCESS
				if (rpc_intr_devices[RPC_INTR_DEV_V1S_ID3].dev->ringIn !=
				    rpc_intr_devices[RPC_INTR_DEV_V1S_ID3].dev->ringOut)
					tasklet_schedule(&
							 (rpc_intr_extra
							  [RPC_INTR_DEV_V1S_ID3].
							  tasklet));
#else
				if (rpc_intr_devices[RPC_INTR_DEV_V1S_ID3].dev->ringIn !=
				    rpc_intr_devices[RPC_INTR_DEV_V1S_ID3].dev->ringOut)
					wake_up_interruptible(&
							      (rpc_intr_devices
							       [RPC_INTR_DEV_V1S_ID3].
							       ptrSync->
							       waitQueue));
#endif
				if (rpc_kern_devices[RPC_KERN_DEV_V1S_ID3].dev->ringIn !=
				    rpc_kern_devices[RPC_KERN_DEV_V1S_ID3].dev->ringOut)
					wake_up_interruptible(&
							      (rpc_kern_devices
							       [RPC_KERN_DEV_V1S_ID3].
							       ptrSync->
							       waitQueue));
			}
#ifdef CONFIG_REALTEK_RPC_VCPU2
			if (itr & RPC_INT_V2S) {
				/*to clear interrupt */
				/*writel(RPC_INT_VS, (void *)REG_SB2_CPU_INT); */
				rtd_outl(REG_SB2_CPU_INT, RPC_INT_V2S);
#ifdef CONFIG_REALTEK_RPC_MULTIPROCESS
				if (rpc_intr_devices[RPC_INTR_DEV_V2S_ID5].dev->ringIn !=
				    rpc_intr_devices[RPC_INTR_DEV_V2S_ID5].dev->ringOut)
					tasklet_schedule(&
							 (rpc_intr_extra
							  [RPC_INTR_DEV_V2S_ID5].
							  tasklet));
#else
				if (rpc_intr_devices[RPC_INTR_DEV_V2S_ID5].dev->ringIn !=
				    rpc_intr_devices[RPC_INTR_DEV_V2S_ID5].dev->ringOut)
					wake_up_interruptible(&
							      (rpc_intr_devices
							       [RPC_INTR_DEV_V2S_ID5].
							       ptrSync->
							       waitQueue));
#endif
				if (rpc_kern_devices[RPC_INTR_DEV_V2S_ID5].dev->ringIn !=
				    rpc_kern_devices[RPC_INTR_DEV_V2S_ID5].dev->ringOut)
					wake_up_interruptible(&
							      (rpc_kern_devices
							       [RPC_INTR_DEV_V2S_ID5].
							       ptrSync->
							       waitQueue));
			}
#endif
#ifdef CONFIG_REALTEK_RPC_KCPU
			if (itr & RPC_INT_KS) {
				/*to clear interrupt */
				/*writel(RPC_INT_KS, (void *)REG_SB2_CPU_INT); */
				rtd_outl(REG_SB2_CPU_INT, RPC_INT_KS);
#ifdef CONFIG_REALTEK_RPC_MULTIPROCESS
				if (rpc_intr_kcpu_devices[RPC_INTR_DEV_KS_ID1].dev->ringIn !=
				    rpc_intr_kcpu_devices[RPC_INTR_DEV_KS_ID1].dev->ringOut)
					tasklet_schedule(&
							 (rpc_intr_kcpu_extra
							  [RPC_INTR_DEV_KS_ID1].
							  tasklet));
#else
				if (rpc_intr_kcpu_devices[RPC_INTR_DEV_KS_ID1].dev->ringIn !=
				    rpc_intr_kcpu_devices[RPC_INTR_DEV_KS_ID1].dev->ringOut)
					wake_up_interruptible(&
							      (rpc_intr_kcpu_devices
							       [RPC_INTR_DEV_KS_ID1].
							       ptrSync->
							       waitQueue));
#endif
				if (rpc_kern_kcpu_devices[RPC_KERN_DEV_KS_ID1].dev->ringIn !=
				    rpc_kern_kcpu_devices[RPC_KERN_DEV_KS_ID1].dev->ringOut)
					wake_up_interruptible(&
							      (rpc_kern_kcpu_devices
							       [RPC_KERN_DEV_KS_ID1].
							       ptrSync->
							       waitQueue));
			}
#endif
			itr = rtd_inl((unsigned int)REG_SB2_CPU_INT);
		}
	} else {
		return IRQ_NONE;
	}

	return IRQ_HANDLED;
}
#endif


/*
// cyhuang (2011/11/19) +++
//                          Add for new device PM driver.
*/
#ifdef CONFIG_PM
static int venus_rpc_pm_suspend(struct device *dev)
{
	/* Disable the interrupt from system to audio & video */
	printk(KERN_NOTICE "[RPC] suspend\n");
	rtd_outl(REG_SB2_CPU_INT_EN, RPC_INT_SA);
	rtd_outl(REG_SB2_CPU_INT_EN, RPC_INT_SV);
#ifdef CONFIG_REALTEK_RPC_VCPU2
	rtd_outl(REG_SB2_CPU_INT_EN, RPC_INT_SV2);
#endif
#ifdef CONFIG_REALTEK_RPC_KCPU
	rtd_outl(REG_SB2_CPU_INT_EN, RPC_INT_SK);
#endif

	return 0;
}

static int venus_rpc_pm_resume(struct device *dev)
{
	/* Enable the interrupt from system to audio & video */
	printk(KERN_NOTICE "[RPC] resume\n");
	rtd_outl(REG_SB2_CPU_INT_EN, (RPC_INT_SA | RPC_INT_WRITE_1));
	rtd_outl(REG_SB2_CPU_INT_EN, (RPC_INT_SV | RPC_INT_WRITE_1));
#ifdef CONFIG_REALTEK_RPC_VCPU2
	rtd_outl(REG_SB2_CPU_INT_EN, (RPC_INT_SV2 | RPC_INT_WRITE_1));
#endif
#ifdef CONFIG_REALTEK_RPC_KCPU
	rtd_outl(REG_SB2_CPU_INT_EN, (RPC_INT_SK | RPC_INT_WRITE_1));
#endif

	return 0;
}

static const struct dev_pm_ops venus_rpc_pm_ops = {
	.suspend = venus_rpc_pm_suspend,
	.resume = venus_rpc_pm_resume,
#ifdef CONFIG_HIBERNATION
	.freeze = venus_rpc_pm_suspend,
	.thaw = venus_rpc_pm_resume,
	.poweroff = venus_rpc_pm_suspend,
	.restore = venus_rpc_pm_resume,
#endif
};

#endif

#ifdef CONFIG_ARM64
void __iomem *rpc_base;

static
int venus_rpc_probe(struct platform_device *pdev)
{
	rpc_base = of_iomap(pdev->dev.of_node, 0);
	PDEBUG("rpc_base = %p\n",rpc_base);
	WARN(!rpc_base, "unable to map venus_rpc area\n");

	RPC_init_module();
	return 0;
}

static const struct of_device_id venus_rpc_of_match[] = {
	{
		.compatible = "realtek,venus-rpc",
	},
	{},
};
MODULE_DEVICE_TABLE(of, venus_rpc_of_match);
#endif

static struct platform_device *venus_rpc_devs;
/*
// +++ cyhuang (2011/03/23)
//                         Change device_driver to platform_driver.
*/
static struct platform_driver venus_rpc_driver = {
#ifdef CONFIG_ARM64
	.probe		= venus_rpc_probe,
#endif
	.driver = {
		   .name = "Venus_RPC",
		   .bus = &platform_bus_type,
#ifdef CONFIG_ARM64
		   .of_match_table = venus_rpc_of_match,
#endif

#ifdef CONFIG_PM
		   .pm = &venus_rpc_pm_ops,
#endif
		   },
};

/* Destructor of this module. */
void RPC_cleanup_module(void)
{
	int i;

	if (venus_rpc_devs != 0) {
		if (venus_rpc_devs->dev.driver != 0)
			platform_driver_unregister(&venus_rpc_driver);
		platform_device_unregister(venus_rpc_devs);
		venus_rpc_devs = 0;
	}

	/* call the cleanup functions for friend devices */
	rpc_poll_cleanup();
	rpc_intr_cleanup();

#ifdef CONFIG_DEVFS_FS
#ifndef KERNEL2_6
	devfs_unregister(rpc_devfs_dir);
#else
	devfs_remove("rpc");

	/* cleanup_module is never called if registering failed */
	unregister_chrdev(rpc_major, rpc_name);
#endif
#else
	for (i = 0; i < RPC_NR_DEVS; i++) {
		device_destroy(rpc_class, MKDEV(rpc_major, i));
	}
	device_destroy(rpc_class, MKDEV(rpc_major, 100));
#ifdef CONFIG_REALTEK_RPC_DEBUG
       device_destroy(rpc_class, MKDEV(rpc_major, 101));
#endif
	class_destroy(rpc_class);
	/* cleanup_module is never called if registering failed */
	unregister_chrdev(rpc_major, rpc_name);
#endif

#ifdef CONFIG_RTK_KDRV_AVCPU
	unregister_avcpu_notifier(&rpc_event_notifier);
#endif

	free_irq(gic_irq_find_mapping(IRQ_CPU2CPU), (void *)RPC_ID);

	PDEBUG("Goodbye, RPC~\n");
}

static char *rpc_devnode(struct device *dev, umode_t *mode)
{
	*mode = 0666;
	return NULL;
}

/* Constructor of this module.*/
int RPC_init_module(void)
{
	int result;
	int Virq=0;
#ifdef CONFIG_DEVFS_FS
	int i, j, k;
#ifndef KERNEL2_6
	devfs_handle_t *ptr;
#endif
#else
	int i;
#endif
	printk("size of RPC_POLL_Dev %d and RPC_INTR_Dev %d...\n", (int)sizeof(RPC_POLL_Dev), (int)sizeof(RPC_INTR_Dev));
/*
    SET_MODULE_OWNER(&rpc_poll_fops);
    SET_MODULE_OWNER(&rpc_intr_fops);
*/
	PDEBUG("Hello, RPC~\n");
#ifdef CONFIG_DEVFS_FS
#ifndef KERNEL2_6
	/* If we have devfs, create /dev/rpc to put files in there */
	rpc_devfs_dir = devfs_mk_dir(NULL, "rpc", NULL);
	if (!rpc_devfs_dir)
		return -EBUSY;	/* problem */
#else
	/* create /dev/rpc to put files in there */
	devfs_mk_dir("rpc");

	/* register rpc_poll_fops as default file operation */
	result = register_chrdev(rpc_major, rpc_name, &rpc_poll_fops);
	if (result < 0) {
		PDEBUG("Can't get major %d\n", RPC_MAJOR);
		return result;
	}
	if (rpc_major == 0)
		rpc_major = result;	/* dynamic */
	PDEBUG("RPC major number: %d\n", rpc_major);
#endif
#else /* no devfs, do it the "classic" way */
	/* register rpc_poll_fops as default file operation */
	result = register_chrdev(rpc_major, rpc_name, &rpc_poll_fops);
	if (result < 0) {
		PDEBUG("Can't get major %d\n", RPC_MAJOR);
		return result;
	}
	if (rpc_major == 0)
		rpc_major = result;	/* dynamic */
	PDEBUG("RPC major number: %d\n", rpc_major);
#endif /* CONFIG_DEVFS_FS */

	/* At this point call the init function for any kind device */
	if ((result = rpc_poll_init()))
		goto fail;
	if ((result = rpc_intr_init()))
		goto fail;
	if ((result = rpc_kern_init()))
		goto fail;

#ifdef CONFIG_DEVFS_FS
#ifndef KERNEL2_6
	/* Create corresponding node in device file system */
	for (i = 0; i < RPC_NR_DEVS; i++) {
		j = i / RPC_NR_PAIR;	/* ordinal number */
		k = i % RPC_NR_PAIR;	/* device kind*/
		sprintf(devname, "%i", i);
		ptr =
		    (devfs_handle_t *) (*rpc_data_ptr_array[k] +
					rpc_data_size_array[k] * j);
/*      PDEBUG("   ***ptr[%d] = 0x%8x\n", i, (int)ptr); */
		*ptr = devfs_register(rpc_devfs_dir, devname,
				      DEVFS_FL_AUTO_DEVNUM,
				      0, 0, S_IFCHR | S_IRUGO | S_IWUGO,
				      rpc_fop_array[k], ptr);
	}
#else
	/* Create corresponding node in device file system */
	for (i = 0; i < RPC_NR_DEVS; i++) {
		devfs_mk_cdev(MKDEV(rpc_major, i), S_IFCHR | S_IRUSR | S_IWUSR,
			      "rpc/%d", i);
	}
	devfs_mk_cdev(MKDEV(rpc_major, 100), S_IFCHR | S_IRUSR | S_IWUSR,
		      "rpc/100");
#ifdef CONFIG_REALTEK_RPC_DEBUG
	devfs_mk_cdev(MKDEV(rpc_major, 101), S_IFCHR|S_IRUSR|S_IWUSR, "rpc/debug");
#endif
#endif
#else
	rpc_class = class_create(THIS_MODULE, "rpc");
	if (IS_ERR(rpc_class))
		return PTR_ERR(rpc_class);

	rpc_class->devnode = rpc_devnode;
	for (i = 0; i < RPC_NR_DEVS; i++) {
		device_create(rpc_class, NULL, MKDEV(rpc_major, i), NULL,
			      "rpc%d", i);
	}
#ifdef CONFIG_REALTEK_RPC_KCPU
	for (i = 0; i < RPC_NR_KCPU_DEVS; i++) {
		device_create(rpc_class, NULL,
			      MKDEV(rpc_major, i + RPC_NR_DEVS), NULL, "rpc%d",
			      i + RPC_NR_DEVS);
	}
#endif
	device_create(rpc_class, NULL, MKDEV(rpc_major, 100), NULL, "rpc100");
#ifdef CONFIG_REALTEK_RPC_DEBUG
    device_create(rpc_class, NULL, MKDEV(rpc_major, 101), NULL, "rpcdebug");
#endif
#endif

	Virq=gic_irq_find_mapping(IRQ_CPU2CPU);
	PDEBUG("PRC Virq is %d...\n",Virq);
	if (request_irq
	    (Virq, rpc_isr, IRQF_SHARED, "rpc", (void *)RPC_ID) != 0)

		printk("PRC :Can't get assigned irq...\n");
#ifndef CONFIG_ARM64
	venus_rpc_devs =
	    platform_device_register_simple("Venus_RPC", -1, NULL, 0);

 
	if ((result = platform_driver_register(&venus_rpc_driver)) != 0) {
		printk("Can't register RPC device driver...\n");
		goto fail;
	}
#endif
	/* Enable the interrupt from system to audio & video */

	rtd_outl(REG_SB2_CPU_INT_EN, (RPC_INT_SA | RPC_INT_WRITE_1));
	rtd_outl(REG_SB2_CPU_INT_EN, (RPC_INT_SV | RPC_INT_WRITE_1));
#ifdef CONFIG_REALTEK_RPC_VCPU2
	rtd_outl(REG_SB2_CPU_INT_EN, (RPC_INT_SV2 | RPC_INT_WRITE_1));
#endif
#ifdef CONFIG_REALTEK_RPC_KCPU
	rtd_outl(REG_SB2_CPU_INT_EN, (RPC_INT_SK | RPC_INT_WRITE_1));

	*((int *)phys_to_virt(SYNC_FLAG_SCPU)) = 0xffffffff;
#endif

	*((int *)phys_to_virt(SYNC_FLAG_ACPU)) = 0xffffffff;
	*((int *)phys_to_virt(SYNC_FLAG_V1CPU)) = 0xffffffff;
#ifdef CONFIG_REALTEK_RPC_VCPU2
	*((int *)phys_to_virt(SYNC_FLAG_V2CPU)) = 0xffffffff;
#endif

	flush_sync_flag();
#ifdef CONFIG_RTK_KDRV_AVCPU
	register_avcpu_notifier(&rpc_event_notifier);
#endif

	return 0;		/* succeed */

fail:
	PDEBUG("RPC error number: %d\n", result);
	RPC_cleanup_module();
	return result;
}

#ifdef CONFIG_ARM64
module_platform_driver(venus_rpc_driver);
#else
module_init(RPC_init_module);
module_exit(RPC_cleanup_module);
#endif
