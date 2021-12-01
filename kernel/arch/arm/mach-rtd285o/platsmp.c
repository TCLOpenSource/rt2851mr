/*
 *  linux/arch/arm/bsp/mach/platsmp.c
 *
 *  Copyright (C) 2012 Realtek
 *  All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/init.h>
#include <linux/errno.h>
#include <linux/delay.h>
#include <linux/device.h>
#include <linux/jiffies.h>
#include <linux/smp.h>
#include <linux/io.h>
#include <linux/cpu.h>

#include <asm/cacheflush.h>
//#include <asm/localtimer.h>
#include <asm/smp_scu.h>
#include <asm/smp.h>
#include <asm/unified.h>
#include <mach/system.h>
#include <mach/common.h>
#include <mach/smp.h>
#include <linux/vmalloc.h>
#include <mach/platform.h>

#define cluster_power_down_flush()
#define cluster_power_down_top()
#define enable_cpu2()
#define enable_cpu3()
#define disable_cpu2()
#define disable_cpu3()
#define cluster_top_power_on()

/*
 * Write pen_release in a way that is guaranteed to be visible to all
 * observers, irrespective of whether they're taking part in coherency
 * or not.  This is necessary for the hotplug code to work reliably.
 */
static void write_pen_release(int cpu)
{
	pen_release = cpu;
	smp_wmb();
	__cpuc_flush_dcache_area((void *)&pen_release, sizeof(pen_release));
	outer_clean_range(__pa(&pen_release), __pa(&pen_release + 1));
}

static void write_sync_tag(unsigned int phy_tag, unsigned int addr)
{
	void *virt_tag = phys_to_virt(phy_tag);

	rtd_outl((long unsigned int)virt_tag, addr);
	smp_wmb();
	__cpuc_flush_dcache_area(virt_tag, sizeof(virt_tag));
	outer_clean_range(phy_tag, phy_tag + 4);
}

#if 0
static void __iomem *scu_base_addr(void)
{
	return (void __iomem *)(SYSTEM_SCU_BASE);
}
#endif

static DEFINE_SPINLOCK(boot_lock);

void platform_secondary_init(unsigned int cpu)
{
	/*
	 * if any interrupts are already enabled for the primary
	 * core (e.g. timer irq), then they will not have been enabled
	 * for us: do so
	 */

	/*
	 * let the primary processor know we're out of the
	 * pen, then head off into the C entry point
	 */
	write_pen_release(-1);

	/*
	 * Synchronise with the boot thread.
	 */
	spin_lock(&boot_lock);
	spin_unlock(&boot_lock);
}

void write_sync_tag_by_cpuid(int cpu, unsigned int addr)
{
	unsigned int iMageTag[] = { DUMMY_REG_FOR_2ND_CPU_JUMPADDRESS,
		DUMMY_REG_FOR_3RD_CPU_JUMPADDRESS,
		DUMMY_REG_FOR_4TH_CPU_JUMPADDRESS };
	write_sync_tag(iMageTag[cpu-1], addr);
}

static int cpu_dev_pm_unset_is_prepared(unsigned int cpu)
{
       struct device *cpu_dev = get_cpu_device(cpu);

       if(cpu_dev)
               cpu_dev->power.is_prepared = false;
       return 0;
}

int platform_boot_secondary(unsigned int cpu, struct task_struct *idle)
{
	unsigned long timeout;

	/*
	 * Set synchronisation state between this boot processor
	 * and the secondary one
	 */
	spin_lock(&boot_lock);

	/*
	 * This is really belt and braces; we hold unintended secondary
	 * CPUs in the holding pen until we're ready for them.  However,
	 * since we haven't sent them a soft interrupt, they shouldn't
	 * be there.
	 */
	write_pen_release(cpu);

	// Send signal to 2nd CPU to perform wake-up process
	// add your code here ( note** )
	cpu_dev_pm_unset_is_prepared(cpu);
	write_sync_tag_by_cpuid(cpu,virt_to_phys(rtk_secondary_startup));

	/*
	 * Send the secondary CPU a soft interrupt, thereby causing
	 * the boot monitor to read the system wide flags register,
	 * and branch to the address found there.
	 *
	 * Note : depend on your platform design
	 */
	// echo 0 > /sys/devices/system/cpu/cpu1/online
	// echo 1 > /sys/devices/system/cpu/cpu1/online
	sev();
	arch_send_wakeup_ipi_mask(cpumask_of(cpu));
//		smp_cross_call(cpumask_of(cpu), 2);

	timeout = jiffies + (1 * HZ);
	while (time_before(jiffies, timeout)) {
		smp_rmb();
		if (pen_release == -1) {
			break;
		}
		udelay(10);
	}

	/*
	 * now the secondary core is starting up let it run its
	 * calibrations, then wait for it to finish
	 */
	spin_unlock(&boot_lock);

	return pen_release != -1 ? -ENOSYS : 0;
}

/*
 * Initialise the CPU possible map early - this describes the CPUs
 * which may be present or become present in the system.
 */
#if defined(CONFIG_QUICK_HIBERNATION) || defined(CONFIG_SUSPEND)
void platform_smp_init_cpus(void)
#else
void __init platform_smp_init_cpus(void)
#endif
{
//	void __iomem *scu_base = scu_base_addr();
	unsigned int i, ncores;

#if (0)	//TODO
	ncores = scu_base ? scu_get_core_count(scu_base) : 1;

	/* sanity check */
	if (ncores > NR_CPUS) {
		printk(KERN_WARNING
		       "rtd299s : no. of cores (%d) greater than configured "
		       "maximum of %d - clipping\n",
		       ncores, NR_CPUS);
		ncores = NR_CPUS;
	}
#else
	ncores = NR_CPUS;
#endif

	for (i = 0; i < ncores; i++)
		set_cpu_possible(i, true);

//     set_smp_cross_call(gic_raise_softirq);
}

#if defined(CONFIG_QUICK_HIBERNATION) || defined(CONFIG_SUSPEND)
void platform_smp_prepare_cpus(unsigned int max_cpus)
#else
void __init platform_smp_prepare_cpus(unsigned int max_cpus)
#endif
{
	int i;

	for (i = 0; i < max_cpus; i++) {
		set_cpu_present(i, true);
	}

	//scu_enable(scu_base_addr());

	//smp_wmb();

	// Send signal to 2nd CPU to perform wake-up process
	// add your code here ( note** )
}


#define rtk_cpu_kill(A)
#define rtk_cpu_up(A)

#if defined(CONFIG_QUICK_HIBERNATION) || defined(CONFIG_SUSPEND)
struct smp_operations rtk_smp_ops = {
#else
struct smp_operations mwelin2_smp_ops __initdata = {
#endif
	.smp_init_cpus      = platform_smp_init_cpus,
	.smp_prepare_cpus   = platform_smp_prepare_cpus,
	.smp_secondary_init = platform_secondary_init,
	.smp_boot_secondary = platform_boot_secondary,
#ifdef CONFIG_HOTPLUG_CPU
	.cpu_die            = platform_cpu_die,
	.cpu_disable        = platform_cpu_disable,
#if !defined(CONFIG_RTK_ATF_BOOTING)
	/*after merlin4 and mac6p, NS kernel cannot kill CPU,
	 * because p-channel is secure registers.
	 */
	.cpu_kill           = platform_cpu_kill,
#endif
#endif
};
