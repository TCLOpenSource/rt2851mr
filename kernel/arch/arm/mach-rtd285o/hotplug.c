/*
 *
 *  Copyright (C) 2011, Realtek
 *  All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/smp.h>
#include <asm/cacheflush.h>
#include <asm/cp15.h>
#include <mach/common.h>
#include <mach/platform.h>
#include <mach/io.h>
#include <linux/console.h>

static inline void cpu_enter_lowpower(void)
{
	{
		flush_cache_all();
		asm volatile(	"	mrc	p15, 0, r3, c1, c0, 0\n"
				"	bic	r3, r3, #4\n"
				"	mcr	p15, 0, r3, c1, c0, 0\n" ::: "r3");
	}

}

static inline void cpu_leave_lowpower(void)
{
	unsigned int v;

	asm volatile(
	"	mrc	p15, 0, %0, c1, c0, 0\n"
	"	orr	%0, %0, %1\n"
	"	mcr	p15, 0, %0, c1, c0, 0\n"
	  : "=&r" (v)
	  : "Ir" (CR_C), "Ir" (0x40)
	  : "cc");
}

static inline void platform_do_lowpower(unsigned int cpu, int *spurious)
{
	/*
	 * there is no power-control hardware on this platform, so all
	 * we can do is put the core into WFI; this is safe as the calling
	 * code will have already disabled interrupts
	 */
	for (;;) {
		/*
		 * here's the WFI
		 */
		asm(".word	0xe320f003\n"
		    :
		    :
		    : "memory", "cc");

		if (pen_release == cpu) {
			/*
			 * OK, proper wakeup, we're done
			 */
			break;
		}

		/*
		 * Getting here, means that we have come out of WFI without
		 * having been woken up - this shouldn't happen
		 *
		 * Just note it happening - when we're woken, we can report
		 * its occurrence.
		 */
		(*spurious)++;
	}
}


/* p-channel implement */
#define P_OFF     (0)
#define P_OFF_EMU (1)
#define P_ON      (8)
#define P_DENIED  (0b10)
#define P_ACCPETED (0b01)


unsigned int  PACTIVE_GET(int cpu)
{
	const unsigned long reg[] = {0xb805B460, 0xb805B464, 0xb805B468, 0xb805B46C};
	unsigned int val;

	val = rtd_inl(reg[cpu]);

	return (val & 0x3ffff);
}


unsigned int PSTATE_GET(int cpu)
{
	const unsigned int reg = 0xb805B45C;
	unsigned int data;

	data = rtd_inl(reg);
	data = (data >> (cpu*8)) & 0x3f;

	return data;
}

unsigned int PSTATE_SET_PREQ(int cpu, int val)
{
	const unsigned int reg = 0xb805B45C;
	unsigned int data;
	const unsigned int preq = (1<<6);

	data = rtd_inl(reg);
	data = (data & ~(0x7f << (cpu*8))) | ((preq | val) << (cpu*8));

	rtd_outl(reg, data);

	return data;
}

unsigned int  DENY_ACCEPT(int cpu)
{
	const unsigned long reg[] = {0xb805B460, 0xb805B464, 0xb805B468, 0xb805B46C};
	unsigned int val;

	val = rtd_inl(reg[cpu]);

	return ((val >> 20) & 0x3);
}


unsigned int PREQ_RELEASE(int cpu)
{
	const unsigned int reg = 0xb805B45C;
	unsigned int data;
	const unsigned int preq = (1<<6);

	data = rtd_inl(reg);
	data = data & ~preq;
	rtd_outl(reg, data);

	return data;
}

unsigned int nCPUPORESET_SET(int cpu)
{
	const unsigned int reg = 0xb805B054;
	const int offset[] = {10, 9, 4, 3};
	unsigned int data;
	
	data = rtd_inl(reg);
	data = data | (1<<offset[cpu]) ;
	rtd_outl(reg, data);

	return data;
}


/* secondary CPUPORESET */
/* return non-zero, if successful */
int platform_cpu_kill(unsigned int cpu)
{
	unsigned int status;
	int retry_count = 0;
	
	while (PACTIVE_GET(cpu) != P_OFF) {
		cpu_relax();
	}

	
retry:
	PSTATE_SET_PREQ(cpu, 0);

	/* query denied or accepted */
	while ((status = DENY_ACCEPT(cpu)) == 0)
		cpu_relax();
	
	/* release request */
	PREQ_RELEASE(cpu); 
	
	
	if ((status == P_DENIED) && (retry_count++ < 10))
		goto retry;

	BUG_ON(status == 3);

	/* accepted, OFF */
	if (PSTATE_GET(cpu) == P_OFF) {
		nCPUPORESET_SET(cpu);
		return !0;
	}
	
	/* other state */
	BUG_ON (PSTATE_GET(cpu) != P_OFF_EMU);

	printk("keep CPU(%d) as OFF_EMU state \n", cpu);
			
	return !0;
}

int rtk_optee_cpu_suspend(int level);
/*
 * platform-specific code to shutdown a CPU
 *
 * Called with IRQs disabled
 */
void platform_cpu_die(unsigned int cpu)
{
	int spurious = 0;


#if  defined(CONFIG_OPTEE) || defined(CONFIG_RTK_ATF_BOOTING)
	int ret;
	
	/** level:
	 * 0, core
	 * 1, cluster
	 * 2, system/platform. if success, smc do not return.
	 **/
	
	printk("optee_cpu_suspend: cpu: 0x%x \n", cpu);
	ret = rtk_optee_cpu_suspend((cpu != 0) ? 0 : 2);
	resume_console();
	printk("optee_cpu_suspend: ERROR!! should not return 0x%x \n", ret);
	asm ("1: b 1b \n");  //CPU is offline, should not do panic.
	
#else
	/*
	 * we're ready for shutdown now, so do it
	 */
	cpu_enter_lowpower();
	platform_do_lowpower(cpu, &spurious);
#endif
	
	/*
	 * bring this CPU back into the world of cache
	 * coherency, and then restore interrupts
	 */
	cpu_leave_lowpower();

	if (spurious)
		pr_warn("CPU%u: %u spurious wakeup calls\n", cpu, spurious);
}

int platform_cpu_disable(unsigned int cpu)
{
	/*
	 * we don't allow CPU 0 to be shutdown (it is still too special
	 * e.g. clock tick interrupts)
	 */
	return cpu == 0 ? -EPERM : 0;
}
