/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2012 by Chuck Chen <ycchen@realtek.com>
 *
 * Time initialization.
 */

#include <linux/interrupt.h>
#include <linux/irq.h>
#include <linux/clockchips.h>
#include <linux/clocksource.h>
#include <asm/io.h>
#include <asm/mach/time.h>
#include <linux/of.h>
#include <linux/sched_clock.h>
#include <mach/timex.h>
#include <mach/io.h>
#include <mach/irqs.h>
#include <rbus/timer_reg.h>
#include <rbus/sys_reg_reg.h>


#ifdef CONFIG_REALTEK_SCHED_LOG
unsigned int sched_log_time_scale;
#endif // CONFIG_REALTEK_SCHED_LOG

struct timer_reg sys_timer[MAX_HWTIMER_NUM] = {
{TIMER_TC0TVR_reg, TIMER_TC0CVR_reg, TIMER_TC0CR_reg},
{TIMER_TC1TVR_reg, TIMER_TC1CVR_reg, TIMER_TC1CR_reg},
{TIMER_TC2TVR_reg, TIMER_TC2CVR_reg, TIMER_TC2CR_reg},
{TIMER_TC3TVR_reg, TIMER_TC3CVR_reg, TIMER_TC3CR_reg},
{TIMER_TC4TVR_reg, TIMER_TC4CVR_reg, TIMER_TC4CR_reg},
{TIMER_TC5TVR_reg, TIMER_TC5CVR_reg, TIMER_TC5CR_reg},
{TIMER_TC6TVR_reg, TIMER_TC6CVR_reg, TIMER_TC6CR_reg},
{TIMER_TC7TVR_reg, TIMER_TC7CVR_reg, TIMER_TC7CR_reg},
{TIMER_TC8TVR_reg, TIMER_TC7CVR_reg, TIMER_TC8CR_reg},
{TIMER_TC9TVR_reg, TIMER_TC8CVR_reg, TIMER_TC9CR_reg},
{TIMER_TC10TVR_reg, TIMER_TC10CVR_reg, TIMER_TC10CR_reg},
{TIMER_TC11TVR_reg, TIMER_TC11CVR_reg, TIMER_TC11CR_reg},
};

static void clear_irq_reason(unsigned int id)
{
    rtd_outl(TIMER_ISR_reg, (1<<id));
}

int create_timer(unsigned char id, unsigned int interval, unsigned char mode)
{
	//Disable Interrupt
	rtk_timer_control(id, HWT_INT_DISABLE);

	//Disable Timer
//	rtk_timer_control(id, HWT_STOP);

	//Set The Initial Value
	rtk_timer_set_value(id, 0);

	//Set The Target Value
	rtk_timer_set_target(id, interval);

	//Enable Timer Mode
	rtk_timer_set_mode(id, mode);

	//Enable Timer
//	rtk_timer_control(id, HWT_START);

	//Enable Interrupt
	rtk_timer_control(id, HWT_INT_ENABLE);

	return 0;
}

int rtk_timer_set_mode(unsigned char id, unsigned char mode)
{
	if (id >= MAX_HWTIMER_NUM)
		BUG();

	switch(mode) {
		case COUNTER:
			rtd_clearbits(sys_timer[id].cr, TIMERINFO_TIMER_MODE);
			break;
		case TIMER:
			rtd_setbits(sys_timer[id].cr, TIMERINFO_TIMER_MODE);
			break;
		default:
			return 1;
	}

	if(id >=6)
	{
		rtd_outl(SYS_REG_INT_CTRL_timer6_11_reg, (0xd) << ((id-6)*4));
	}
	else if(id ==3)
	{
		rtd_outl(SYS_REG_INT_CTRL_timer6_11_reg, (0xd) << SYS_REG_INT_CTRL_timer6_11_timer3_routing_mux_sel_shift);
	}
	else if(id ==5)
	{
		rtd_outl(SYS_REG_INT_CTRL_timer6_11_reg, (0xd) << SYS_REG_INT_CTRL_timer6_11_timer5_routing_mux_sel_shift);
	}

	return 0;
}

int rtk_timer_get_value(unsigned char id)
{
    if (id >= MAX_HWTIMER_NUM)
        return 0;

    // get the current timer's value
    return rtd_inl(sys_timer[id].cvr);
}

int rtk_timer_set_value(unsigned char id, unsigned int value)
{
    if (id >= MAX_HWTIMER_NUM)
        return 1;

    // set the timer's initial value
    rtd_outl(sys_timer[id].cvr, value);
    return 0;
}

int rtk_timer_set_target(unsigned char id, unsigned int value)
{
    if (id >= MAX_HWTIMER_NUM)
        return 1;

    // set the timer's initial value
    rtd_outl(sys_timer[id].tvr, value);
    return 0;
}

int rtk_timer_control(unsigned char id, unsigned int cmd)
{
    if (id >= MAX_HWTIMER_NUM)
        return 1;

    switch(cmd) {
        case HWT_INT_CLEAR:
            clear_irq_reason(id);
            break;
        case HWT_START:
            rtd_setbits(sys_timer[id].cr, TIMERINFO_TIMER_ENABLE);
            // Clear Interrupt Pending (must after enable)
            clear_irq_reason(id);
            break;
        case HWT_STOP:
            rtd_clearbits( sys_timer[id].cr, TIMERINFO_TIMER_ENABLE);
            break;
        case HWT_PAUSE:
            rtd_setbits(sys_timer[id].cr, TIMERINFO_TIMER_PAUSE);
            break;
        case HWT_RESUME:
            rtd_clearbits(sys_timer[id].cr, TIMERINFO_TIMER_PAUSE);
            break;
        case HWT_INT_ENABLE:
		rtd_outl(TIMER_TCICR_reg, (1 <<(id+1) | TIMER_TCICR_write_data_mask));
            break;
        case HWT_INT_DISABLE:
		rtd_outl(TIMER_TCICR_reg, 1 <<(id+1) );
            break;
        default:
            return 1;
    }
    return 0;
}

void rtk_timer_init(void)
{

#ifdef CONFIG_REALTEK_SCHED_LOG
	unsigned int est_freq_hw_timer = 27;
	sched_log_time_scale = est_freq_hw_timer;
#endif // CONFIG_REALTEK_SCHED_LOG

	//enable timer2
	rtk_timer_control(SYSTEM_TIMER, HWT_START);

	//enable SCPU 90K counter timer
	rtd_outl(TIMER_CLK90K_CTRL_reg, TIMER_CLK90K_CTRL_en_mask);
}
