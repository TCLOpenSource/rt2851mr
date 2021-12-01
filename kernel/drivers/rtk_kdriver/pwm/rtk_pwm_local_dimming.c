#include <rtk_kdriver/rtk_pwm.h>
#include <rtk_kdriver/rtk_pwm_local_dimming.h>
#include <rbus/ldspi_reg.h>
#include <rbus/pinmux_lvdsphy_reg.h>
#include <rbus/ppoverlay_reg.h>
#include <rtk_kdriver/tvscalercontrol/panel/panelapi.h>
#include <mach/rtk_platform.h>

#include <rtk_kdriver/rtk_gpio.h>
#include <rtk_kdriver/rtk_gpio-dev.h>
#include <rtk_kdriver/rtk_gpio-debug.h>
#include <linux/delay.h>

#define GPIO_GP0DATI (0xB801BD30)
#define ld_write_bit(reg, mask)  (rtd_outl(reg, (rtd_inl(reg) | mask)))
#define ld_read_bit(reg, bits)   ((rtd_inl(reg) >> (bits)) & 0x1)

RTK_GPIO_ID ld_vsync_pin;//Local_Dimming_Vsync
int gpio_index, type = 0;

#define LD_TRIGGER_VALID_LINECNT_START 145 //300
#define LD_TRIGGER_VALID_LINECNT_END   1645 //3300

unsigned int ld_time_tick=0;

void rtd_part_outl(unsigned int reg_addr, unsigned int endBit, unsigned int startBit, unsigned int value)
{
    unsigned int X,A,result;
    X=(1<<(endBit-startBit+1))-1;
    A=rtd_inl(reg_addr);
    result = (A & (~(X<<startBit))) | (value<<startBit);
    rtd_outl(reg_addr,result);
}


unsigned char check_vaild_LD_trigger_linecount(void)
{
    ppoverlay_new_meas1_linecnt_real_RBUS ppoverlay_new_meas1_linecnt_real_reg;

    ppoverlay_new_meas1_linecnt_real_reg.regValue = rtd_inl(PPOVERLAY_new_meas1_linecnt_real_reg);
    if((ppoverlay_new_meas1_linecnt_real_reg.memcdtg_line_cnt_rt>=LD_TRIGGER_VALID_LINECNT_START) &&
            (ppoverlay_new_meas1_linecnt_real_reg.memcdtg_line_cnt_rt<=LD_TRIGGER_VALID_LINECNT_END))
        return 1;
    else
        return 0;
}

void rtk_local_dimming_vsync_isr(
    RTK_GPIO_ID     gid,
    unsigned char   assert,
    void*           dev_id
    )
{
	static unsigned char i=0;
	static unsigned int u32Value =0;
	
#ifdef ISR_DEBUG
    RTK_GPIO_WARNING("%s\n",__func__);
#endif
#ifdef ENABLE_PCB_ENUM
    if(rtk_gpio_input(gid) == 1){
#else
    if(ld_read_bit(GPIO_GP0DATI,9) == 1){
#endif
        if(check_vaild_LD_trigger_linecount()) {
			
			u32Value = rtd_inl(LDSPI_LD_CTRL_reg);
            //Do SPI trigger
			if(( u32Value & 0x1) == 0  // check Start enable
				|| ((u32Value >>28 ) & 0x1) == 0)// check IP Start
			{
				//PWM_ERR("********timli SPI not ready,return******\n");
				return;
			}
			 	
            rtd_part_outl(LDSPI_LD_CTRL_reg,2,2,0x0);//send don't need follow V_sync falling
            udelay(130);
			
            if(((u32Value >>1) & 0x1) == 0){
				 if(i>0)
				 	i=0;
           		 rtd_outl(LDSPI_LD_CTRL_reg,u32Value|0x00000002);//When set 0x1, data start to send. When transmission finish,then this bit auto clear.
				 //PWM_ERR("********timli ld trigger bit auto clear success!!!!******\n");
			}else{
				i++;
				//PWM_ERR("********timli ld trigger bit auto clear fail!!!!******\n");
				if(i>2){
					 rtd_outl(LDSPI_LD_CTRL_reg,u32Value&(~0x00000002));
					 //PWM_ERR("********timli ld trigger bit manul clear!!!!******\n");
					 i=0;
				}
            }
		}

    }

}

int rtk_local_dimming_vsync_isr_init(void)
{
#ifdef ENABLE_PCB_ENUM
    int ret = 0;
    unsigned long long ullPcbMgrValue;
    ret = pcb_mgr_get_enum_info_byname("PIN_LD_VSYNC", &ullPcbMgrValue);
    if(ret != 0)
        return -1;
    if (GET_PIN_TYPE(ullPcbMgrValue) == PCB_PIN_TYPE_GPIO) {
        type = MIS_GPIO;
    } else if (GET_PIN_TYPE(ullPcbMgrValue) == PCB_PIN_TYPE_ISO_GPIO) {
        type = ISO_GPIO;
    } else {
        return -1;
    }
    gpio_index = GET_PIN_INDEX(ullPcbMgrValue);
#else
    type = MIS_GPIO;
    gpio_index = 8;
#endif

    ld_vsync_pin = rtk_gpio_id(type, gpio_index);

    rtk_gpio_set_dir(ld_vsync_pin, 0);

    rtk_gpio_set_debounce(ld_vsync_pin, RTK_GPIO_DEBOUNCE_1us);    /* 100 us */

    rtk_gpio_set_irq_polarity(ld_vsync_pin, 1); //Set low level active

    rtk_gpio_request_irq(ld_vsync_pin, rtk_local_dimming_vsync_isr, "rtk_local_dimming_vsync_isr", rtk_local_dimming_vsync_isr);

    rtk_gpio_set_irq_enable(ld_vsync_pin, 1);

    RTK_GPIO_WARNING("ld vsync isr for %s GPIO %d (%x) ready\n",
            gpio_type(gpio_group(ld_vsync_pin)),
            gpio_idx(ld_vsync_pin),
            ld_vsync_pin);

    return 0;
}

int rtk_local_dimming_vsync_isr_exit(void)
{
    rtk_gpio_set_irq_enable(ld_vsync_pin, 0);
    rtk_gpio_clear_isr(ld_vsync_pin);

#ifdef CONFIG_ARM64
    rtk_gpio_free_irq(ld_vsync_pin, (void*)0);
#else
    rtk_gpio_free_irq(ld_vsync_pin, rtk_local_dimming_vsync_isr);
#endif

    return 0;
}

void rtk_local_dimming_enable(void)
{
	rtd_part_outl(LDSPI_LD_CTRL_reg,2,2,0x0);
	rtk_local_dimming_vsync_isr_init();
	
	//for TCL LD panel flicker patch
   // rtd_part_outl(PWM_SYS_CLKDIV,27,27,0x0);//120Hz Set PWM3 clock source to Dclk/4
  //  rtd_part_outl(PWM_SYS_CLKDIV,7,7,0x1);//Set PWM PLL clock select to Dclk/4
   // rtd_outl(MIS_PWM3_TIMING_CTRL_VADDR, 0x000024ae);       // 120Hz
   // rtd_outl(MIS_PWM3_DUTY_SET_VADDR, 0x000f0101);
   // rtd_outl(MIS_PWM3_CTRL_VADDR, 0x20000005);
    
}


