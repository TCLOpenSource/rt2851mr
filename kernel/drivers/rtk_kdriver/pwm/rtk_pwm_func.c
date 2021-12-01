#include <linux/pwm.h>
#include <linux/sched.h>
#include <linux/math64.h>
#include <linux/platform_device.h>
#include <mach/pcbMgr.h>
#include <rbus/pll27x_reg_reg.h>
#include <rbus/ppoverlay_reg.h>
#include <rbus/iso_misc_reg.h>
#include <rtk_kdriver/rtk_pwm-reg.h>
#include <rtk_kdriver/rtk_pwm_crt.h>
#include <rtk_kdriver/rtk_pwm_func.h>
#include <rtk_kdriver/rtk_pwm.h>
#include <rtk_kdriver/rtk_gpio.h>
#include <rtk_kdriver/rtk_gpio-db.h>
#include <rtk_kdriver/pcbMgr.h>
#include <rtk_kdriver/tvscalercontrol/panel/panelapi.h>

#define NEW_PWM_FORMULA 1

#define FREQ_FINIHED(this)   (rtk_pwm_tracking_freq_finish_r(this) == HW_TRACK_FREQ_FINISH)
#define PHASE_FINIHED(this)  (rtk_pwm_tracking_phase_finish_r(this) == HW_TRACK_PHASE_FINISH)
#define LOCK_RTK_PWM(a,b)    spin_lock_irqsave(a, b)
#define UNLOCK_RTK_PWM(a, b) spin_unlock_irqrestore(a, b)
static DEFINE_SPINLOCK(pwm_lock);
extern struct mutex rtk_pwm_mutex;

static int rtk_pwm_panel_mode=0;
static int rtk_pwm_backlight_pin_index = -1;
static int rtk_pwm_index = 0;
static R_CHIP_T rtk_pwm_chip[MAX_PWM_NODE];
static int m_ioctl_printk=0;
static int m_ioctl_disable=0;
static int m_tracking_mode=0;
static unsigned int m_ioctl_counter = 0;
static unsigned long iso_pwm_usage = 0;
static unsigned long misc_pwm_usage = 0;

/*************************************************************************
*** workaround for PWM support full HIGH and full low: change pwm to gpio.
*************************************************************************/
extern void rtd_part_outl(unsigned int reg_addr, unsigned int endBit, unsigned int startBit, unsigned int value);

int rtk_pwm_gpio_value(R_CHIP_T *pchip2)
{    return rtk_gpio_output_get(pchip2->gid);    }

void rtk_change_to_gpio_mode(R_CHIP_T *pchip2, GPIOPOT outputValue)
{
    if(INVALID_GPIO_GID == pchip2->gid || 0 == pchip2->pin_mux_info.addr){
        PWM_ERR("Probably pwm init get pinmux info error by pcbenum!\n");
        PWM_ERR("Change to gpio failed: addr:%ld pwmvalue:%d;Gid:%d;L:%d\n",
                pchip2->pin_mux_info.addr,
                pchip2->pin_mux_info.pwmValue,
                pchip2->gid, __LINE__);
        return;
    }

    pchip2->currentMode = GPIO_MODE;
    rtd_part_outl(pchip2->pin_mux_info.addr,
                  pchip2->pin_mux_info.mask_h,
                  pchip2->pin_mux_info.mask_l,
                  pchip2->pin_mux_info.gpioValue);

    rtk_gpio_output(pchip2->gid, outputValue);
    rtk_gpio_set_dir(pchip2->gid, 1);
}

void rtk_change_to_pwm_mode(R_CHIP_T *pchip2)
{
    if(0 == pchip2->pin_mux_info.addr){
        PWM_ERR("Probably pwm init get pinmux info error by pcbenum!\n");
        PWM_ERR("Change to pwm failed: addr:%ld pwmvalue:%d;Gid:%d;L:%d\n",
                pchip2->pin_mux_info.addr,
                pchip2->pin_mux_info.pwmValue,
                pchip2->gid, __LINE__);
        return;
    }

    pchip2->currentMode = PWM_MODE;
    rtd_part_outl(pchip2->pin_mux_info.addr,
                  pchip2->pin_mux_info.mask_h,
                  pchip2->pin_mux_info.mask_l,
                  pchip2->pin_mux_info.pwmValue);
}

int rtk_pwm_gpio_pinmux_init(R_CHIP_T *pwmPin)
{
    int ret = 0;
    char     pcbNameWithPinmux[128];
    unsigned long long ullPcbPinMuxValue = 0;

    (void)snprintf(pcbNameWithPinmux, sizeof(pcbNameWithPinmux), "%s%s", pwmPin->pcbname, "_GPIO_INFO");
    ret = pcb_mgr_get_enum_info_byname(pcbNameWithPinmux, &ullPcbPinMuxValue);
    if(0 != ret){
        PWM_ERR("Get pcbenum error.enum name:%s\n", pcbNameWithPinmux);
        pwmPin->gid = INVALID_GPIO_GID;
    }
    else{
        pwmPin->pin_mux_info.addr      = GET_PWM_PINMUX_ADDR(ullPcbPinMuxValue);
        pwmPin->pin_mux_info.mask_h    = GET_PWM_PINMUX_REG_ENDBIT(ullPcbPinMuxValue);
        pwmPin->pin_mux_info.mask_l    = GET_PWM_PINMUX_REG_STARTBIT(ullPcbPinMuxValue);
        pwmPin->pin_mux_info.pwmValue  = GET_PWM_PINMUX_PWMVALUE(ullPcbPinMuxValue);
        pwmPin->pin_mux_info.gpioValue = GET_PWM_PINMUX_GPIOVALUE(ullPcbPinMuxValue);
        pwmPin->gid = rtk_gpio_get_gid_by_pintype(GET_PWM_PINMUX_GPIO_PINTYPE(ullPcbPinMuxValue),
                                                  GET_PWM_PINMUX_GPIO_NUM(ullPcbPinMuxValue));
    }
    pwmPin->currentMode = PWM_MODE;
    return 0;
}

//======================================================================
//Backlight EXPORT Function
//======================================================================
int rtk_pwm_backlight_enable(int enable)
{
    int gpioLevel = 0;
    unsigned long long param = 0 ;

    if( enable < 0 )
    {
        gpioLevel = 0;
        PWM_WARN("%s enable = %d , too strange \n", __func__, enable );
    }
    else if( enable > 1 )
    {
        gpioLevel = 1;
    }
    else
    {
        gpioLevel = enable ;
    }

    if (pcb_mgr_get_enum_info_byname("PIN_BL_ON_OFF", &param) != 0)
    {
        PWM_WARN("%s PIN_BL_ON_OFF is not existed , please check pcb parameters = %llx \n", __func__, param);
        return (-1);
    }

    PWM_WARN("%s PIN_BL_ON_OFF gpio_type = %d gpio_num=%d\n", __func__, GET_PIN_TYPE(param) , GET_PIN_INDEX(param) );

    if ( rtk_SetIOPin(param, gpioLevel) != 0 )
    {
        PWM_WARN("%s output operation fail!\n", __func__ );
        return (-1);
    }

    if ( rtk_SetIOPinDirection(param, 1) != 0 )
    {
        PWM_WARN("%s direction operation fail!\n", __func__ );
        return (-1);
    }

    return 0;
}
EXPORT_SYMBOL(rtk_pwm_backlight_enable);

int rtk_pwm_backlight_status(void)
{
    unsigned long long param = 0 ;
    RTK_GPIO_ID BL_pin;

    if (pcb_mgr_get_enum_info_byname("PIN_BL_ON_OFF", &param) != 0) {
        PWM_WARN("%s PIN_BL_ON_OFF is not existed , please check pcb parameters = %llx \n", __func__, param);
        return (-1);
    }

    if (GET_PIN_TYPE(param) == PCB_PIN_TYPE_ISO_GPIO) {
        BL_pin = rtk_gpio_id(ISO_GPIO, GET_PIN_INDEX(param));
        PWM_WARN("%s PIN_BL_ON_OFF PIN_type = %d gpio_type = ISO_GPIO gpio_num=%d\n", __func__, GET_PIN_TYPE(param) , GET_PIN_INDEX(param) );
    }
    else {
        BL_pin = rtk_gpio_id(MIS_GPIO, GET_PIN_INDEX(param));
        PWM_WARN("%s PIN_BL_ON_OFF PIN_type = %d gpio_type = MIS_GPIO gpio_num=%d\n", __func__, GET_PIN_TYPE(param) , GET_PIN_INDEX(param) );
    }
    return rtk_gpio_output_get(BL_pin);
}
EXPORT_SYMBOL(rtk_pwm_backlight_status);

int rtk_pwm_backlight_set_duty( int duty )
{
    R_CHIP_T *pchip2 = NULL;

    pr_debug(KERN_NOTICE "%s():\n", __FUNCTION__);

    if( duty > 255 || duty < 0) {
        PWM_ERR("backlight duty %d error!\n",duty );
        return -1;
    }

    /*get pin index of backlight pwm*/
    if( rtk_pwm_backlight_pin_get() != (-1) ){
        pchip2 = &rtk_pwm_chip[rtk_pwm_backlight_pin_get()];
    }else{
        PWM_WARN("backlight pwm source is missed\n");
    }

    if(pchip2 == NULL){
        PWM_ERR("Get pchip2 NuLL!!\n");
        return (-1);
    }

    pchip2->rtk_duty = duty;
    if(duty == 0){
        if(pchip2->rtk_polarity == 1)
            rtk_pwm_force_mode_w(pchip2,PWM_FORCE_HIGH);
        else
            rtk_pwm_force_mode_w(pchip2,PWM_FORCE_LOW);
    }
    else{
        rtk_pwm_force_mode_w(pchip2,PWM_NON_FORCE);
        rtk_pwm_duty_w(pchip2,pchip2->rtk_duty);
    }
    rtk_pwm_db_wb(pchip2);

    if( m_ioctl_printk_get() > 0 ){

        PWM_WARN("%s set pwm[%d], duty=%d freq=%d lock=%d (pos=%d,%08x) adp = %d  adap_freq=%d mPlus=%d\n",
                __func__ ,
                pchip2->index,
                pchip2->rtk_duty,
                pchip2->rtk_freq,
                pchip2->rtk_vsync,
                pchip2->rtk_pos_start,
                pchip2->rtk_pos_start_clk,
                pchip2->rtk_adpt_en,
                pchip2->rtk_adapt_freq,
                pchip2->rtk_mPlus);
    }

    return 0;
}
EXPORT_SYMBOL(rtk_pwm_backlight_set_duty);

#ifdef CONFIG_DOLBY_BACKLIGHT_CTRL_ADIM_PDIM
/* ------------------------------------
 * Func : rtk_pwm_backlight_set_duty_ex
 * Desc : set pwm duty to register
 * Param: pcbname: setting pwm pin name
 *        duty: settig pwm duty value
 * Retrun: 0: Set pwm duty success.
 *        -1: Set pwm duty failed.
 * ------------------------------------*/
int rtk_pwm_backlight_set_duty_ex(const char *pcbname, int duty )
{
    unsigned long flags = 0;
    R_CHIP_T *pchip2 = NULL;

    LOCK_RTK_PWM(&pwm_lock, flags);
    pchip2 = rtk_pwm_chip_get_by_name((char *)pcbname);
    if(pchip2 == NULL){
        PWM_ERR("Get pchip2 NuLL!!\n");
        goto failed;
    }

    pchip2->rtk_duty = duty;
    if(duty == 0){
        if(pchip2->rtk_polarity == 1)
            rtk_pwm_force_mode_w(pchip2,PWM_FORCE_HIGH);
        else
            rtk_pwm_force_mode_w(pchip2,PWM_FORCE_LOW);
    }
    else{
        rtk_pwm_force_mode_w(pchip2,PWM_NON_FORCE);
        rtk_pwm_duty_w(pchip2,pchip2->rtk_duty);
    }

    if( m_ioctl_printk_get() > 0 ){

        PWM_WARN("%s %s set pwm[%d], duty=%d\n",
                __func__ ,
                pcbname,
                pchip2->index,
                pchip2->rtk_duty);
    }
    UNLOCK_RTK_PWM(&pwm_lock, flags);
    return 0;

failed:
    UNLOCK_RTK_PWM(&pwm_lock, flags);
    return (-1);
}
EXPORT_SYMBOL(rtk_pwm_backlight_set_duty_ex);

/* ------------------------------------
 * Func : rtk_pwm_backlight_apply
 * Desc : Double Buffer write apply
 * Param: pcbname: setting pwm pin name
 *
 * Retrun: 0: Set DB apply success.
 *        -1: Set DB apply failed.
 * ------------------------------------*/
int rtk_pwm_backlight_apply(const char *pcbname)
{
    unsigned long flags = 0;
    R_CHIP_T *pchip2 = NULL;

    LOCK_RTK_PWM(&pwm_lock, flags);
    pchip2 = rtk_pwm_chip_get_by_name((char *)pcbname);
    if(pchip2 == NULL){
        PWM_ERR("Get pchip2 NuLL!!\n");
        goto failed;
    }
    rtk_pwm_db_wb(pchip2);
    UNLOCK_RTK_PWM(&pwm_lock, flags);
    return 0;

failed:
    UNLOCK_RTK_PWM(&pwm_lock, flags);
    return (-1);
}
EXPORT_SYMBOL(rtk_pwm_backlight_apply);
#endif

//======================================================================
//CHIP PCB Fucntion
//======================================================================
int rtk_pwm_pcb_mgr_get(const char *pcbname,int ricindex)
{
    int ret = 0;
    ret = pcb_mgr_get_enum_info_byname((char *)pcbname,
                     &rtk_pwm_chip[ricindex].ullPcbMgrValue);
    return ret;
}

int rtk_pwm_pcb_mgr_get_value(RTK_PCB_ENUM *pcbinfo,int ricindex)
{
    int ret = 0;
    pcbinfo->value = rtk_pwm_chip[ricindex].ullPcbMgrValue;
    return ret;
}

int rtk_pwm_chip_index_get(int ricindex)
{    return rtk_pwm_chip[ricindex].index;    }

unsigned long long rtk_pwm_chip_pcb_mgr_value_get(int ricindex)
{    return rtk_pwm_chip[ricindex].ullPcbMgrValue;    }

const rtk_pwm_reg_map* rtk_pwm_chip_reg_get(int ricindex)
{    return rtk_pwm_chip[ricindex].reg;    }

void rtk_pwm_chip_device_set(struct platform_device *pdev)
{    rtk_pwm_chip[pin_index_get()].pst_rtk_pwm_dev =pwm_get(&pdev->dev, pdev->name);    }

R_CHIP_T* rtk_pwm_chip_get(int m_index)
{    return &rtk_pwm_chip[m_index];    }

R_CHIP_T* rtk_pwm_chip_get_by_index(int m_index,int m_type)
{
    int i = 0;
    R_CHIP_T *pchip2 = NULL;
    int pwm_type = 0;
    for (i = 0; i < MAX_PWM_NODE; i++) {
        pchip2 = &rtk_pwm_chip[i];
        if(GET_PIN_TYPE(pchip2->ullPcbMgrValue) == PCB_PIN_TYPE_PWM)
            pwm_type = PWM_MISC;
        else if (GET_PIN_TYPE(pchip2->ullPcbMgrValue) == PCB_PIN_TYPE_ISO_PWM)
            pwm_type = PWM_ISO;

        if(pchip2->index == m_index && pwm_type == m_type)
            return &rtk_pwm_chip[i];
    }
    return NULL;
}

R_CHIP_T* rtk_pwm_chip_get_by_name(char* pcbname)
{
    int i = 0;
    R_CHIP_T *pchip2 = NULL;
    for (i = 0; i < MAX_PWM_NODE; i++) {
        pchip2 = &rtk_pwm_chip[i];

        if(strcmp(pchip2->pcbname,pcbname) == 0){
            return &rtk_pwm_chip[i];
        }
    }
    return NULL;
}

//======================================================================
//IOCTL Debug Function
//======================================================================
void m_ioctl_printk_set(int en_printk)         {    m_ioctl_printk = en_printk;    }
int  m_ioctl_printk_get(void)                  {    return m_ioctl_printk;         }
void m_track_mode_set(int enable)              {    m_tracking_mode = enable;      }
int  m_track_mode_get(void)                    {    return m_ioctl_printk;         }
void m_ioctl_disable_set(int disable)          {    m_ioctl_disable = disable;     }
int  m_ioctl_disable_get(void)                 {    return m_ioctl_disable;        }
void m_ioctl_counter_inc(void)                 {    m_ioctl_counter++;             }
void m_ioctl_counter_set(unsigned int counter) {    m_ioctl_counter = counter;     }
unsigned int m_ioctl_counter_get(void)         {    return m_ioctl_counter;        }

//======================================================================
//General Function
//======================================================================
void getHVTotal(int *htotal, int *vtotal)
{
    ppoverlay_dv_total_RBUS dvReg;
#ifdef CONFIG_SUPPORT_SCALER
    *htotal = Get_DISP_HORIZONTAL_TOTAL();
#endif
    dvReg.regValue = rtd_inl(PPOVERLAY_DV_TOTAL_VADDR);
#ifdef NEW_PWM_FORMULA
    *vtotal = dvReg.dv_total*100;
#else
    *vtotal = dvReg.dv_total;
#endif

    if (*htotal == 0) {
        PWM_ERR("Get 0 htotal, use 1 instead of 0\n");
        *htotal = 0x897;
    }

    if (*vtotal == 0) {
        PWM_ERR("Get 0 vtotal, use 0x464 instead of 0\n");
        *vtotal = 0x464;
    }

};

void get_v_delay(R_CHIP_T *pchip2)
{
    int mode = pchip2->rtk_clk_sel;
    int clk_period = 1000000000/rtk_hw_get_clock(mode);
    unsigned long phase_us=(1000000000/pchip2->rtk_freq);

    pchip2->rtk_pos_start_clk = pchip2->rtk_pos_start*phase_us/pchip2->rtk_duty_max / clk_period;
    if(pchip2->rtk_pos_start_clk >=0x1fffff) {

        PWM_ERR("PWM vsync overflow!\n");
        PWM_ERR("adapt_fre (base 0.01Hz) = %d, freq = %d, pos = %d, phase_us = %ld\n",
            pchip2->rtk_adapt_freq, pchip2->rtk_freq,
            pchip2->rtk_pos_start, phase_us);

        pchip2->rtk_pos_start_clk= 1;
    }

};

/*porting from Ben:scalerDisplay.cpp
*/

int getI2Dstatus(void)
{
    ppoverlay_i2d_ctrl_0_RBUS ppoverlay_i2d_ctrl_0_reg;
    ppoverlay_i2d_ctrl_0_reg.regValue = rtd_inl(PPOVERLAY_I2D_CTRL_0_reg);
    return ppoverlay_i2d_ctrl_0_reg.i2d_special_dly_en;
}

void getDClk(UINT64 *dclk)
{
    pll27x_reg_sys_pll_disp1_RBUS pll_disp1_reg;
    pll27x_reg_pll_ssc0_RBUS  pll_ssc0_reg;
    pll27x_reg_sys_pll_disp3_RBUS pll_disp3_reg;
    sys_reg_sys_dispclksel_RBUS disp_clk_reg;
    unsigned int Mcode = 0, Ncode = 0, Fcode = 0, Odiv = 0 ;
    unsigned int temp = 0;

    pll_disp1_reg.regValue = rtd_inl(PLL27X_REG_SYS_PLL_DISP1_reg);
    pll_ssc0_reg.regValue = rtd_inl(PLL27X_REG_PLL_SSC0_reg);
    pll_disp3_reg.regValue = rtd_inl(PLL27X_REG_SYS_PLL_DISP3_reg);
    disp_clk_reg.regValue = rtd_inl(SYS_REG_SYS_DISPCLKSEL_reg);

    Mcode = pll_disp1_reg.dpll_m;
    Ncode = pll_disp1_reg.dpll_n;
    Fcode = pll_ssc0_reg.fcode_t_ssc;

    Odiv = (0x1 << pll_disp3_reg.dpll_o);
    temp = 2700 * (Mcode + 3 + (Fcode/2048)) / ((Ncode + 2)*Odiv);

    //temp = temp/(0x1 << disp_clk_reg.dispd_osd_div);  // fixed me, no this member in header file
    *dclk = ((UINT64)temp * 10000);

}

int rtk_get_pwm_duty_base_change(int duty,int duty_max,int totalcnt)
{
    int base_duty = 0;
    base_duty = DIV_ROUND_CLOSEST(duty*(totalcnt+1),(duty_max));
    return base_duty;
}

unsigned long rtk_hw_get_clock(int mode)
{
    UINT64 dclk = 0;
    unsigned long clock_freq;
    switch(mode){
        case CLK_27MHZ:
            clock_freq = CONFIG_CPU_XTAL_FREQ;
            break;

        case CLK_196MHZ:
            clock_freq = CONFIG_PLL_FREQ;
            break;

        case D_CLK_DIV4:
#ifdef CONFIG_SUPPORT_SCALER
            dclk = Get_DISPLAY_CLOCK_TYPICAL();
#endif
            clock_freq = (unsigned long) dclk >> 2; //Divide 4
            break;

        default:
            clock_freq = CONFIG_CPU_XTAL_FREQ;
    }
    return clock_freq;
}

unsigned long rtk_cpu_ns_get(int mode)
{
    UINT64 dclk = 0;
    UINT64 cpu_ns = CONFIG_CPU_XTAL_NS_27MHZ;
    switch(mode){
        case CLK_27MHZ:
            cpu_ns = CONFIG_CPU_XTAL_NS_27MHZ;
            break;

        case CLK_196MHZ:
            cpu_ns = CONFIG_CPU_PLL_NS_196MHZ;
            break;

        case D_CLK_DIV4:
#ifdef CONFIG_SUPPORT_SCALER
            dclk = Get_DISPLAY_CLOCK_TYPICAL();
#endif
            cpu_ns = div64_u64(1000000000,dclk);//Divide 4
            break;

        default:
            cpu_ns = CONFIG_CPU_XTAL_NS_27MHZ;
    }

    return cpu_ns;
}

void rtk_hw_get_divider(int pwm_freq_hz, int duty_max, int *totalcnt,
                   unsigned short *M_best, unsigned short *N_best,
                   int pwm_freq_min, int mode)
{
    int i = 0,  j = 0,shift = 0;
    unsigned long ftmp = 0, error = 0, error_best = 0;
    unsigned long  N = 0, ftmp_1 = 0, N1 = 0, ftmp_2 = 0;
    unsigned long pwmFreqHz = 0;
    int stop = 0;

    if (pwm_freq_hz == (pwm_freq_min*100)) {
        *M_best = 0x3;
        *N_best = 0xfff;
        *totalcnt = duty_max;
    }else if(pwm_freq_hz > 300 && pwm_freq_hz <= 100000){// For freq = 3~1000Hz,total cnt fixed 255
        pwmFreqHz = pwm_freq_hz;
        ftmp = (duty_max + 1) * pwm_freq_hz + 1;
        error_best = ftmp;
        for (i = 0; i <= M_MAX; i++) {
            shift = (1 << i);
            N1 = (rtk_hw_get_clock(mode) / shift) * 10;
            N = (N1 / ftmp)*10;

            if (N <= 0)
                N = 1;

            if (N > 0x1000)
                continue;

            ftmp_2 = (rtk_hw_get_clock(mode) * 10) / (1 << i);
            ftmp_1 = (ftmp_2 / N)*10;
            error = ABS( ftmp_1, ftmp );

            if (error < error_best) {
                error_best = error;
                *N_best = (unsigned short)N;
                *M_best = i;
            }
        }
        *totalcnt = duty_max;
    }else{
        pwmFreqHz = pwm_freq_hz;
        error_best = pwmFreqHz  + 1;
        for (j=duty_max; j<4097; j++) // Start duty_max=255 to find solution
        {
            for (i=0; i<=3; i++)
            {
                N = ((unsigned long)rtk_hw_get_clock(mode)* 100 / (( 1 << i)*j*pwmFreqHz));
                if (N == 0)
                    N=1;

                if (N > 0x1000)
                    continue;

                ftmp_2 = ((unsigned long)rtk_hw_get_clock(mode) * 100) / ((1 << i)*j);
                ftmp_1 = ftmp_2 / N;
                error = ABS(ftmp_1,pwmFreqHz);

                if(error == 0)
                {
                    error_best = error;
                    *N_best = (unsigned short)N-1;
                    *M_best = i;
                    *totalcnt = j-1;
                    stop = 1;
                    break;
                }

                if (error < error_best)
                {
                    error_best = error;
                    *N_best = (unsigned short)N-1;
                    *M_best = i;
                    *totalcnt = j-1;
                }
            }
            if (stop == 1)
            {
                break;
            }
        }
    }

    if( m_ioctl_printk_get() > 0 )
        PWM_WARN("%s pwm_freq_hz = %d M_best = 0x%X N_best = 0x%X totalcnt:%d duty_max:%d\n", __func__, pwm_freq_hz , *M_best,*N_best ,*totalcnt,duty_max);
}

int calculate_start_end(UINT64 *target,int *n_start,int *n_end)
{
    int i =0;
    UINT64 result = 0;

    for( i = 8; i <= 12 ; ++i){//from duty_max 255 to found solution
        if((div64_u64((*target),(UINT64)(1<< i))) > N_MAX)
            continue;

        if((div64_u64((*target),(UINT64)(1<< i))) < N_MAX)
            break;
    }
    *n_start = (1 << i);
    result=div64_u64((*target),(UINT64)(*n_start));

    for( i = 1;i <= 12 ; ++i){
        if((div64_u64(result,(UINT64)(1<<i))==1) && ((div64_u64(result,(UINT64)(1<<(i+1))))==0))
            break;
    }
    *n_end = (1<<i);
    return 0;
}

int rtk_hw_getMN(int h_total,int v_total,int n_pwm,int last_line,
                 int duty_max, int *totalcnt,
                 unsigned short *M_best, unsigned short *N_best){
    int m = 0;
    int n = 0;
    int total = 0;
    UINT64 pwm_div = 0;
    int error = 0;
    int found = 0;
    int increase = 0;
    int ht_modulo = 0;
    int n_start = 0;
    int total_start = 0;
    UINT64 target = 0;

    target = div64_u64((((UINT64)h_total*(UINT64)v_total)+(UINT64)last_line),(4*(UINT64)n_pwm));

    ht_modulo = h_total % 100;

    while (!(target & 0x1) && m < M_MAX) {
        target >>= 1;
        m++;
    }

    *M_best = m;

    calculate_start_end(&target,&total_start,&n_start);

    for (total = total_start; (total < (total_start << 1)) && (total < TOTAL_MAX ); total++) {
        for (n = n_start; (n < (n_start << 1)) && (n < N_MAX) ; n++){
            pwm_div = (UINT64)(n + 1) * (UINT64)(total + 1);

            error = ABS(target, pwm_div);

            if (likely(!ht_modulo)){
                if (likely(!error)) {
                    *N_best = n;
                    *totalcnt = total;
                    found = 1;
                    goto out_loop;
                }
            } else { // endurable.
                if(error < 5){
                    *N_best = n;
                    *totalcnt = total;
                    increase = 1;
                    goto out_loop;
                }
            }
        }
    }

out_loop:

    if( m_ioctl_printk_get() > 0 ){
        if(found == 1)
            PWM_WARN("[%s]Found M/N Solution H:%d V:%d M:%d N:%d totalcnt:%d error:%d\n", __func__, h_total,v_total,*M_best,*N_best,*totalcnt,error);
        else if(increase == 1)
            PWM_WARN("[%s]Found Increase M/N Solution H:%d V:%d M:%d N:%d totalcnt:%d error:%d\n", __func__,h_total,v_total,*M_best,*N_best,*totalcnt,error);
        else
            PWM_WARN("[%s]NO found M/N Solution H:%d V:%d M:%d N:%d totalcnt:%d error:%d\n", __func__, h_total,v_total,*M_best,*N_best,*totalcnt,error);
    }
    return 0;
}

#ifdef NEW_PWM_FORMULA
int rtk_hw_getMN_ex(int h_total,int v_total,int n_pwm,int last_line,
                 int duty_max, int *totalcnt,
                 unsigned short *M_best, unsigned short *N_best){
    int m = 0;
    int n = 0;
    int total = 0;
    UINT64 pwm_div = 0;
    int error = 0;
    int found = 0;
    int increase = 0;
    int max_increase = 0;
    int ht_modulo = 0;
    int increase_n = 0, increase_total =0;
    int min_error = 0;
    int n_start, n_end;
    UINT64 target = 0;
    UINT64 target_ex = 0;

    target = div64_u64((((UINT64)h_total*(UINT64)v_total)+(UINT64)last_line),(4*(UINT64)n_pwm));

    ht_modulo = h_total % 100;

    while (!(target & 0x1) && m < M_MAX) {
        target >>= 1;
        m++;
        if(m == M_MAX){
            m--;
            target <<= 1;
            break;
        }
    }
    *M_best = m;

    target_ex = div64_u64(target,100);
    calculate_start_end(&target_ex,&n_start,&n_end);

    for (total = n_start; total < 4096; total++) {
        for (n = n_end; n < N_MAX; n++){
            pwm_div = (UINT64)(n + 1) * (UINT64)(total + 1)*100;

            error = ABS(target, pwm_div);

            if(error < 500){
               if( error < min_error || min_error == 0){
                    increase_n = n;
                    increase_total = total;
                    min_error = error;
                }
            }

            if(total == 4095){
                *N_best = increase_n;
                *totalcnt = increase_total;
                max_increase = 1;
                goto out_loop;
            }

            if (likely(!ht_modulo)){
                if (likely(!error)) {
                    *N_best = n;
                    *totalcnt = total;
                    found = 1;
                    goto out_loop;
                }
                else{
                    if(error < 50){
                        *N_best = n;
                        *totalcnt = total;
                        increase = 1;
                        goto out_loop;
                    }
                }
            } else { // endurable.
                if(error < 50){
                    *N_best = n;
                    *totalcnt = total;
                    increase = 1;
                    goto out_loop;
                }
            }
        }
    }

out_loop:

    if( m_ioctl_printk_get() > 0 ){
        if(found == 1)
            PWM_WARN("[%s]Found M/N Solution H:%d V:%d M:%d N:%d totalcnt:%d error:%d\n",__func__, h_total,v_total,*M_best,*N_best,*totalcnt,error);
        else if(increase == 1)
            PWM_WARN("[%s]Found Increase M/N Solution H:%d V:%d M:%d N:%d totalcnt:%d error:%d\n",__func__ ,h_total,v_total,*M_best,*N_best,*totalcnt,error);
        else if(max_increase == 1)
            PWM_WARN("[%s]Found Max Increase M/N Solution H:%d V:%d M:%d N:%d totalcnt:%d min_error:%d\n", __func__,h_total,v_total,*M_best,*N_best,*totalcnt,min_error);
        else
            PWM_WARN("[%s]NO found M/N Solution H:%d V:%d M:%d N:%d totalcnt:%d error:%d\n",__func__, h_total,v_total,*M_best,*N_best,*totalcnt,error);
    }
    return 0;
}
#endif

/*
 * NOTICE: Caller should hold the pchip2->lock
 * to protect critical section.
 * */
int rtk_pwm_set_freq(R_CHIP_T *pchip2, int h_total, int v_total, int ifold,bool bEnableDB)
{
    UINT64 result = 0;

    if (unlikely(!pchip2)) {
        return -ENODEV;
    }

    //Skip LED_CURRENT Panel PWM Frequency
    if (rtk_pwm_panel_mode_get() == PWM_DRIVING_LED_CURRENT && pchip2->rtk_freq == 200) {
        return -EPERM;
    }

    if (unlikely(ifold > 20 || ifold <= 0)) {
        PWM_ERR( "PWM %d-fold error!\n",ifold);
        return -EINVAL;
    }
 
    if(pchip2->rtk_adpt_en !=0)
    {
#ifdef CONFIG_SUPPORT_SCALER
        pchip2->dclk = Get_DISPLAY_CLOCK_TYPICAL();
#endif
        pchip2->ht = h_total;
        pchip2->vt = v_total;
        result = div64_u64(pchip2->dclk,(pchip2->ht+1))*10;
#ifdef NEW_PWM_FORMULA
        pchip2->rtk_freq_100times =div64_u64(result*100,(pchip2->vt+1))*ifold*10;
#else
        pchip2->rtk_freq_100times =div64_u64(result,(pchip2->vt+1))*ifold*10;
#endif
        pchip2->rtk_adapt_freq = pchip2->rtk_freq = (pchip2->rtk_freq_100times)/100;
        pchip2->rtk_freq_changed = true;
    }
    else
    {
        pchip2->rtk_adapt_freq = rtk_pwm_get_adapt_freq(pchip2);
        pchip2->rtk_freq_100times = pchip2->rtk_freq * 100;
        if( m_ioctl_printk_get() > 0 ){
            PWM_WARN("%s set pwm[%d], diable pwm Adaptive , duty=%d freq=%d lock=%d , iFreqTemp=%d \n",
            __func__ ,
            pchip2->index,
            pchip2->rtk_duty,
            pchip2->rtk_freq,
            pchip2->rtk_vsync,
            pchip2->rtk_freq_100times);
        }
    }

    /*set timing ctrl , freq */

    rtk_pwm_freq_w(pchip2);


    if(pchip2->rtk_duty == 0){
        if(pchip2->rtk_polarity == 1)
            rtk_pwm_force_mode_w(pchip2,PWM_FORCE_HIGH);
        else
            rtk_pwm_force_mode_w(pchip2,PWM_FORCE_LOW);
    }
    else{
        rtk_pwm_force_mode_w(pchip2,PWM_NON_FORCE);
        rtk_pwm_duty_w(pchip2,pchip2->rtk_duty);
    }

    rtk_pwm_totalcnt_w(pchip2,pchip2->rtk_totalcnt);
    rtk_pwm_vsync_interval_w(pchip2,pchip2->rtk_vsync_interval);

/*set DB */

    rtk_pwm_db_sel_enable(pchip2,0);
    rtk_pwm_db_enable(pchip2,1);

    rtk_pwm_db_wb(pchip2);
 
    if( m_ioctl_printk_get() > 0 ){
        PWM_WARN("%s set pwm[%d], duty=%d freq=%d lock=%d (pos=%d,%08x) adp = %d , adap_freq(base 0.01Hz)=%d mPlus=%d , iFreqTemp=%d\n",
                    __func__ ,
                    pchip2->index,
                    pchip2->rtk_duty,
                    pchip2->rtk_freq,
                    pchip2->rtk_vsync,
                    pchip2->rtk_pos_start,
                    pchip2->rtk_pos_start_clk,
                    pchip2->rtk_adpt_en,
                    pchip2->rtk_adapt_freq,
                    pchip2->rtk_mPlus,
                    pchip2->rtk_freq_100times);
    }

    return 0;
}

int rtk_pwm_get_freq(R_CHIP_T *pchip2,unsigned short M, unsigned short N)
{

    int mode = pchip2->rtk_clk_sel;
    unsigned long clock_freq = rtk_hw_get_clock(mode);
    pchip2->rtk_freq_100times = ((clock_freq/(1 << M)/(N+1))*100)/pchip2->rtk_totalcnt;
    return pchip2->rtk_freq_100times;
}


int rtk_pwm_get_adapt_freq(R_CHIP_T *pchip2)
{
    int retAdapFreq = 0;
    int ht,vt = 0;
    UINT64 dclk = 0;
    if(getI2Dstatus() == 1){
        getHVTotal(&ht, &vt);
#ifdef CONFIG_SUPPORT_SCALER
        dclk = Get_DISPLAY_CLOCK_TYPICAL();
#endif
        retAdapFreq = div64_u64(dclk,ht);
        retAdapFreq = div64_u64(retAdapFreq,vt);
        pchip2->rtk_freq_changed = false;
    }
    else{
        getHVTotal(&ht, &vt);
        if(pchip2->ht == ht && pchip2->vt == vt){
            pchip2->rtk_freq_changed = false;
        }
        else{
            pchip2->rtk_freq_changed = true;
            pchip2->ht = ht;
            pchip2->vt = vt;
        }
#ifdef CONFIG_SUPPORT_SCALER
        pchip2->dclk = Get_DISPLAY_CLOCK_TYPICAL();
#endif
        retAdapFreq = div64_u64(pchip2->dclk,pchip2->ht);
        retAdapFreq = div64_u64(retAdapFreq,pchip2->vt);
    }
    return retAdapFreq;
}

int rtk_get_pos(R_CHIP_T *pchip2,int delay_time,int m_freq)
{
    //Delay clock cycle to unit
    //CONFIG_VSYNC_FREQ default is 60 for boot
    unsigned int phase_us= 0, pos =0, temp=0;
    int mode = pchip2->rtk_clk_sel;
    int clk_period = 1000000000/rtk_hw_get_clock(mode);
    phase_us= 1000000000/m_freq;
    temp = phase_us/pchip2->rtk_duty_max/clk_period;
    pos = delay_time/temp;
        PWM_WARN("%s pos %d, temp:%d\n",__func__, pos,temp);
    return pos;
}

//======================================================================
//Probe Init Function
//======================================================================
int rtk_pwm_hw_type_init(R_CHIP_T *pwmPin)
{
    unsigned long pwm_id;
    pwm_id = GET_PIN_INDEX(pwmPin->ullPcbMgrValue);
    if (GET_PIN_TYPE(pwmPin->ullPcbMgrValue) == PCB_PIN_TYPE_ISO_PWM) {

        if ((iso_pwm_usage &  (1<<pwm_id)))
            return -1;

        iso_pwm_usage |= 1<<pwm_id;

        rtk_pwm_setting_power_on(CRT_PWM_ISO);

        snprintf(pwmPin->nodename, 16, "pwm-I-%d",
             GET_PIN_INDEX(pwmPin->ullPcbMgrValue));

        pwmPin->reg =
            pwm_iso_phy[GET_PIN_INDEX(pwmPin->ullPcbMgrValue)].p_reg_map;

        pwmPin->rtk_db_reg = ISO_PWM_DB_CTRL_VADDR;

    } else if (GET_PIN_TYPE(pwmPin->ullPcbMgrValue) ==  PCB_PIN_TYPE_PWM) {

        if ((misc_pwm_usage &  (1<<pwm_id)))
            return -1;

        misc_pwm_usage |= 1<<pwm_id;

        rtk_pwm_setting_power_on(CRT_PWM_MISC);

        snprintf(pwmPin->nodename, 16, "pwm-M-%d",
                 GET_PIN_INDEX(pwmPin->ullPcbMgrValue));

        pwmPin->reg =pwm_mis_phy[GET_PIN_INDEX(pwmPin->ullPcbMgrValue)].p_reg_map;

        pwmPin->rtk_db_reg = MIS_PWM_DB0_CTRL_VADDR;
    } else {
        pwmPin->index = (-1);
        return -1;
    }

    pwmPin->index = GET_PIN_INDEX(pwmPin->ullPcbMgrValue);
    return 0;
}

void rtk_pwm_hw_chip_init(R_CHIP_T *pwmPin, int ricindex)
{
    //Initial Clock source
    pwmPin->rtk_clk_sel = GET_PWM_CLK_SRC(pwmPin->ullPcbMgrValue);
    if(pwmPin->rtk_clk_sel == D_CLK_DIV4)
        pwmPin->rtk_freq_range = (pwmPin->rtk_totalcnt == 2047) ? (CLK_DIV4_8BIT):(CLK_DIV4_12BIT);
    else
        pwmPin->rtk_freq_range = (pwmPin->rtk_duty_max == 255) ? (CLK_27MHZ_8BIT):(CLK_27MHZ_12BIT);
    rtk_pwm_clock_freq_set(pwmPin);
    rtk_pwm_clock_source(pwmPin);

    pwmPin->index = ricindex;
    pwmPin->mapped = true;
    pwmPin->rtk_force_update = true;
    pwmPin->rtk_duty_max = GET_PWM_DUTY_MAX(pwmPin->ullPcbMgrValue);
    pwmPin->rtk_totalcnt = rtk_pwm_totalcnt_r(pwmPin);
    pwmPin->rtk_freq_100times = rtk_pwm_freq_r(pwmPin);

    pwmPin->rtk_freq = (pwmPin->rtk_freq_100times/100);
    pwmPin->lg_freq48n = 96;
    pwmPin->lg_freq50n = 100;
    pwmPin->lg_freq60n = 120;
    pwmPin->rtk_duty = ((MAX_PWM_DUTY+1)*rtk_pwm_duty_r(pwmPin))/(rtk_pwm_totalcnt_r(pwmPin)+1);
    pwmPin->rtk_vsync = rtk_pwm_vsync_r(pwmPin);
    pwmPin->rtk_enable = rtk_pwm_output_r(pwmPin);
    pwmPin->rtk_polarity = GET_PWM_INVERT(pwmPin->ullPcbMgrValue);
    pwmPin->rtk_mPlus = rtk_pwm_mpluse_r(pwmPin);

    if (pwmPin->rtk_polarity != rtk_pwm_ctrl_polarity_r(pwmPin)) {
        rtk_pwm_ctrl_polarity_w(pwmPin, pwmPin->rtk_polarity);
    } 

    /*rtk_adapt_freq  base is 0.01hz*/
    pwmPin->rtk_adapt_freq =rtk_pwm_get_adapt_freq(pwmPin);

    if( pwmPin->rtk_vsync == PWM_VSYNC_ENABLE ){
        pwmPin->rtk_pos_start_clk = rtk_pwm_vs_delay_r(pwmPin);
        pwmPin->rtk_pos_start = rtk_get_pos(pwmPin,pwmPin->rtk_pos_start_clk,pwmPin->rtk_freq);

    }else{
        pwmPin->rtk_pos_start = 0;
        pwmPin->rtk_pos_start_clk = 1;
    }

    pwmPin->rtk_adpt_en = 0;

    rtk_pwm_ctrl_duty_select_w(pwmPin,(pwmPin->rtk_vsync == PWM_VSYNC_ENABLE ? 0:1));
}

void rtk_pwm_ctrl_probe_init(R_CHIP_T *pchip2,int pwm_mode,int invert)
{
    rtk_pwm_ctrl_duty_select_w(pchip2,(pchip2->rtk_vsync == PWM_VSYNC_ENABLE ? 0:1));
    rtk_pwm_ctrl_polarity_w(pchip2,invert);
    rtk_pwm_vsync_w(pchip2,pchip2->rtk_vsync);
    rtk_pwm_dvs_mux_w(pchip2,PWM_DVS_MUX_FORM_DVS);
    rtk_pwm_output_w(pchip2,PWM_OUTPUT_ENABLE);
    rtk_pwm_mpluse_w(pchip2,(pchip2->rtk_mPlus & pchip2->rtk_adpt_en));

    if(pwm_mode ==PWM_DRIVING_2CH_PHASE_DIFF){
        rtk_pwm_vs_delay_w(pchip2,1);
    }
    else{
        rtk_pwm_vs_delay_w(pchip2,0);
    }
}

void rtk_pwm_timing_probe_init(R_CHIP_T *pchip2,int pwm_freq_hz, int duty_max,int *totalcnt)
{
    pchip2->rtk_clk_sel = GET_PWM_CLK_SRC(pchip2->ullPcbMgrValue);

    if(pchip2->rtk_clk_sel == D_CLK_DIV4)
        pchip2->rtk_freq_range = (pchip2->rtk_totalcnt == 2047) ? (CLK_DIV4_8BIT):(CLK_DIV4_12BIT);
    else
        pchip2->rtk_freq_range = (pchip2->rtk_duty_max == 255) ? (CLK_27MHZ_8BIT):(CLK_27MHZ_12BIT);

    rtk_pwm_clock_freq_set(pchip2);
    rtk_pwm_clock_source(pchip2);
    pchip2->rtk_freq_changed = true;
    pchip2->rtk_freq = pwm_freq_hz;
    pchip2->rtk_freq_100times = pwm_freq_hz * 100;
    rtk_pwm_freq_w(pchip2);
    *totalcnt = pchip2->rtk_totalcnt;
}

void rtk_pwm_duty_probe_init(R_CHIP_T *pchip2,int duty, int duty_max,int totalcnt)
{
    pchip2->rtk_duty = duty;
    rtk_pwm_totalcnt_w(pchip2,totalcnt);

    if(pchip2->rtk_duty == 0 && PWM_MISC_TYPE(pchip2)){
        if(pchip2->rtk_polarity == 1)
            rtk_pwm_force_mode_w(pchip2,PWM_FORCE_HIGH);
        else
            rtk_pwm_force_mode_w(pchip2,PWM_FORCE_LOW);
        }
    else{
        rtk_pwm_force_mode_w(pchip2,PWM_NON_FORCE);
        rtk_pwm_duty_w(pchip2,pchip2->rtk_duty);
    }

}

void rtk_pwm_db_probe_init(R_CHIP_T *pchip2)
{
    rtk_pwm_db_enable(pchip2,1);
    rtk_pwm_db_wb(pchip2);
}

void rtk_pwm_user_setting(R_CHIP_T *pchip2,RTK_PWM_INFO_T *stpwminfo)
{
    unsigned long dvs_count = rtd_inl(DVS_COUNT);
    unsigned long output_vsync = 0;
    int mode = pchip2->rtk_clk_sel;

    pchip2->rtk_enable = stpwminfo->m_run;
    pchip2->rtk_duty = stpwminfo->m_duty;
    pchip2->rtk_vsync = stpwminfo->m_vsync?1:0;
    pchip2->rtk_adpt_en= stpwminfo->m_adpt_en;
    pchip2->rtk_pos_start = stpwminfo->m_pos;

    /*rtk_adapt_freq  base is 0.01hz*/
    if(stpwminfo->m_adpt_en)
    {
        output_vsync = (rtk_hw_get_clock(mode)* 100)/ dvs_count;
        if(pchip2->rtk_adapt_freq == HZ_48)
        {
            if(output_vsync > 4790 && output_vsync < 4800)
                pchip2->rtk_freq_100times = output_vsync + (48*100);
            else
                pchip2->rtk_freq_100times = stpwminfo->m_freq48n * 100;

            pchip2->rtk_freq           = stpwminfo->m_freq48n;
            pchip2->lg_freq48n         = stpwminfo->m_freq48n;
            pchip2->rtk_vsync_interval = 0;
        }
        else if(pchip2->rtk_adapt_freq == HZ_50)
        {
            if(output_vsync > 4990 && output_vsync < 5000)
                pchip2->rtk_freq_100times = output_vsync + (50*100);
            else
                pchip2->rtk_freq_100times = stpwminfo->m_freq50n * 100;

            pchip2->rtk_freq           = stpwminfo->m_freq50n;
            pchip2->lg_freq50n         = stpwminfo->m_freq50n;
            pchip2->rtk_vsync_interval = 0;

        }
        else if(pchip2->rtk_adapt_freq == HZ_60)
        {
            if(output_vsync > 5990 && output_vsync < 6000)
                pchip2->rtk_freq_100times = output_vsync + (60*100);
            else
                pchip2->rtk_freq_100times = stpwminfo->m_freq60n * 100;

            pchip2->rtk_freq           = stpwminfo->m_freq60n;
            pchip2->lg_freq60n         = stpwminfo->m_freq60n;
            pchip2->rtk_vsync_interval = 0;
        }else if(((pchip2->rtk_adapt_freq >= 51)&&(pchip2->rtk_adapt_freq <= 59) )
               ||((pchip2->rtk_adapt_freq >= 45)&&(pchip2->rtk_adapt_freq <= 47))){

            pchip2->rtk_freq_100times =    pchip2->rtk_adapt_freq*2*100;

            pchip2->rtk_freq           = pchip2->rtk_adapt_freq*2;
            pchip2->lg_freq60n         = stpwminfo->m_freq60n;
            pchip2->rtk_vsync_interval = 0;

            if( m_ioctl_printk_get() > 0 )
                PWM_WARN("PWM[%d]  special freq=%d \n",stpwminfo->m_index,pchip2->rtk_adapt_freq);
        }
        else
        {
            if( m_ioctl_printk_get() > 0 )
                PWM_ERR("PWM[%d] illegal freq=%d \n",stpwminfo->m_index,pchip2->rtk_adapt_freq);

            pchip2->rtk_freq           = stpwminfo->m_freq60n;
            pchip2->rtk_freq_100times  = stpwminfo->m_freq60n * 100;
            pchip2->rtk_vsync_interval = 0;
        }
    }
    else
    {
        pchip2->rtk_freq           = stpwminfo->m_freq ;
        pchip2->rtk_freq_100times  = stpwminfo->m_freq * 100;
        pchip2->rtk_vsync_interval = 0;
    }
}

void rtk_pwm_timing_freq_set(R_CHIP_T *pchip2,pwm_timing_ctrl_RBUS* pwm_timing_ctrl_reg)
{
#ifdef NEW_PWM_FORMULA
    int rounding = 0;
#endif
    unsigned short M = 0, N = 0;
    int min_freq = pwm_freq_range[pchip2->rtk_freq_range].min_freq;
    int mode = pchip2->rtk_clk_sel;

    if(pchip2->rtk_freq_changed == false && pchip2->rtk_force_update == false)
    {
        ;//Skip M/N Calculation
    }
    else
    {
        if(pchip2->rtk_clk_sel == D_CLK_DIV4 && pchip2->rtk_adpt_en == 1){
#ifdef NEW_PWM_FORMULA
            rounding = (pchip2->vt/100)*100;
            if(pchip2->vt == rounding)
                rtk_hw_getMN(pchip2->ht,(pchip2->vt)/100,2,pchip2->ht,pchip2->rtk_duty_max, &pchip2->rtk_totalcnt,&M,&N);
            else
                rtk_hw_getMN_ex(pchip2->ht,pchip2->vt,2,pchip2->ht,pchip2->rtk_duty_max, &pchip2->rtk_totalcnt,&M,&N);
#else
            rtk_hw_getMN(pchip2->ht,pchip2->vt,2,pchip2->ht,pchip2->rtk_duty_max, &pchip2->rtk_totalcnt,&M,&N);
#endif
        }
        else
            rtk_hw_get_divider(pchip2->rtk_freq_100times ,pchip2->rtk_duty_max, &pchip2->rtk_totalcnt,&M, &N,min_freq ,mode);

        if(PWM_MISC_TYPE(pchip2)){
            pwm_timing_ctrl_reg->m_pwm0_m = M;
            pwm_timing_ctrl_reg->m_pwm0_n = N;
        }
        else{
            pwm_timing_ctrl_reg->i_pwm0_m = M;
            pwm_timing_ctrl_reg->i_pwm0_n = N;
        }
    }
}

int rtk_pwm_duty_get(int duty,int duty_max,int totalcnt)
{    return DIV_ROUND_CLOSEST((duty)*(duty_max),(totalcnt+1));    }

unsigned long pwm_duty_ratio_get(unsigned long duty ,unsigned long pwm0_totalcnt){
    return (duty*1000000)/pwm0_totalcnt;
}

//======================================================================
//Clock Source Function
//======================================================================
#define SET_BIT(x, n) ( (x) |= (1<< (n)) )
#define CLR_BIT(x, n) ( (x) &= (~(1<< (n))))
void rtk_pwm_clock_source(R_CHIP_T *pchip2)
{
    pwm_sys_clk_div_RBUS pwm_sys_clk_reg;
    pwm_timing_ctrl_RBUS pwm_timing_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_SYS_CLKDIV_REG_R(RTK_PWM_INDEX(pchip2),&pwm_sys_clk_reg);
        switch(pchip2->rtk_clk_sel){
            case CLK_27MHZ:
                pchip2->rtk_clk_src = PWM_CRYSTAL;
                SET_BIT(pwm_sys_clk_reg.regValue,(24 + RTK_PWM_INDEX(pchip2)));
                pwm_sys_clk_reg.pwm_pll_clksel = 1;
                break;
            case CLK_196MHZ:
                pchip2->rtk_clk_src = PWM_PLL;
                CLR_BIT(pwm_sys_clk_reg.regValue,(24 + RTK_PWM_INDEX(pchip2)));
                 pwm_sys_clk_reg.pwm_pll_clksel = 0;

                break;

            case D_CLK_DIV4:
                pchip2->rtk_clk_src = PWM_PLL;
                CLR_BIT(pwm_sys_clk_reg.regValue,(24 + RTK_PWM_INDEX(pchip2)));
                pwm_sys_clk_reg.pwm_pll_clksel = 1;
                break;

            default:
                pchip2->rtk_clk_src = PWM_CRYSTAL;
                SET_BIT(pwm_sys_clk_reg.regValue,(24 + RTK_PWM_INDEX(pchip2)));
                break;
        }
        M_PWM_SYS_CLKDIV_REG_W(RTK_PWM_INDEX(pchip2),&pwm_sys_clk_reg);
    }
    else if(PWM_ISO_TYPE(pchip2)){
        I_PWM_TIMING_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
        switch(pchip2->rtk_clk_sel){
            case CLK_27MHZ:
                pwm_timing_ctrl_reg.i_pwm0_clk_sel = PWM_CRYSTAL;
                break;
            case CLK_196MHZ:
                pwm_timing_ctrl_reg.i_pwm0_clk_sel = PWM_PLL;
                break;
            default:
                pwm_timing_ctrl_reg.i_pwm0_clk_sel = PWM_CRYSTAL;
                break;
        }
        I_PWM_TIMING_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
    }
}

void rtk_pwm_clock_freq_set(R_CHIP_T *pchip2)
{
    switch(pchip2->rtk_freq_range){
        case CLK_27MHZ_8BIT:
        case CLK_27MHZ_12BIT:
            pchip2->rtk_clk_sel = CLK_27MHZ;
            pchip2->rtk_clk_src = PWM_CRYSTAL;
            break;

        case CLK_196MHZ_8BIT:
        case CLK_196MHZ_12BIT:
            pchip2->rtk_clk_sel = CLK_196MHZ;
            pchip2->rtk_clk_src = PWM_PLL;
            break;

        case CLK_DIV4_8BIT:
        case CLK_DIV4_12BIT:
            pchip2->rtk_clk_sel = D_CLK_DIV4;
            pchip2->rtk_clk_src = PWM_PLL;
            break;

        default:
            pchip2->rtk_clk_sel = CLK_27MHZ;
            pchip2->rtk_clk_src = PWM_CRYSTAL;
    }
}



//======================================================================
//Global Variable Function
//======================================================================
void rtk_pwm_panel_mode_set(int mode)          {    rtk_pwm_panel_mode = mode;     }
int  rtk_pwm_panel_mode_get(void)              {    return rtk_pwm_panel_mode;     }
void pin_index_count(void)                     {    rtk_pwm_index++;               }
int  pin_index_get(void)                       {    return rtk_pwm_index;          }
void rtk_pwm_backlight_pin_set(int ricindex)   {    rtk_pwm_backlight_pin_index = ricindex;    }
int  rtk_pwm_backlight_pin_get(void)           {    return rtk_pwm_backlight_pin_index;        }
//==================================================================================

/** ISO Interrupt Control Function **/

void rtk_pwm_iso_interrupt_ctrl_enable_w(int enable){
    iso_misc_int_ctrl_RBUS pwm_iso_int_ctrl_reg;
    PWM_ISO_INT_CTR_REG_R(&pwm_iso_int_ctrl_reg);
    pwm_iso_int_ctrl_reg.pwm0_int_to_scpu_en = enable;
    pwm_iso_int_ctrl_reg.pwm1_int_to_scpu_en = enable;
    PWM_ISO_INT_CTR_REG_W(&pwm_iso_int_ctrl_reg);
}

/** VRR Register Function **/
void rtk_pwm_vrr_dvsync_delay_enable_w(int enable){
    ppoverlay_vrr_dvsync_dly_ctrl0_RBUS pwm_vrr_dvsync_ctrl0_reg;
    PWM_VRR_DVSYNC_CTRL0_REG_R(&pwm_vrr_dvsync_ctrl0_reg);
    pwm_vrr_dvsync_ctrl0_reg.pwm_vs_dly_en = enable;
    PWM_VRR_DVSYNC_CTRL0_REG_W(&pwm_vrr_dvsync_ctrl0_reg);
}

void rtk_pwm_vrr_dvsync_delay_init_enable_w(int enable){
    ppoverlay_vrr_dvsync_dly_ctrl0_RBUS pwm_vrr_dvsync_ctrl0_reg;
    PWM_VRR_DVSYNC_CTRL0_REG_R(&pwm_vrr_dvsync_ctrl0_reg);
    pwm_vrr_dvsync_ctrl0_reg.dvsync_dly_int_en = enable;
    PWM_VRR_DVSYNC_CTRL0_REG_W(&pwm_vrr_dvsync_ctrl0_reg);
}

int rtk_pwm_vrr_dvsync_delay_init_update_r(void){
    int dvsync_dly_int_update = 0;
    ppoverlay_vrr_dvsync_dly_ctrl0_RBUS pwm_vrr_dvsync_ctrl0_reg;
    PWM_VRR_DVSYNC_CTRL0_REG_R(&pwm_vrr_dvsync_ctrl0_reg);
    dvsync_dly_int_update = pwm_vrr_dvsync_ctrl0_reg.dvsync_dly_int_update;
    return dvsync_dly_int_update;
}

int rtk_pwm_vrr_dvsync_line_count_r(void){
    int dvsync_line_cnt = 0;
    ppoverlay_vrr_dvsync_dly_ctrl0_RBUS pwm_vrr_dvsync_ctrl0_reg;
    PWM_VRR_DVSYNC_CTRL0_REG_R(&pwm_vrr_dvsync_ctrl0_reg);
    dvsync_line_cnt = pwm_vrr_dvsync_ctrl0_reg.dvsync_line_cnt;
    return dvsync_line_cnt;
}

void rtk_pwm_vrr_dvsync_init_delay_w(int dvsync_int_dly){
    ppoverlay_vrr_dvsync_dly_ctrl1_RBUS pwm_vrr_dvsync_ctrl1_reg;
    PWM_VRR_DVSYNC_CTRL1_REG_R(&pwm_vrr_dvsync_ctrl1_reg);
    pwm_vrr_dvsync_ctrl1_reg.pwm_int_dly = dvsync_int_dly;
    PWM_VRR_DVSYNC_CTRL1_REG_W(&pwm_vrr_dvsync_ctrl1_reg);
}

int rtk_pwm_vrr_dvsync_init_delay_r(void){
    int dvsync_int_dly = 0;
    ppoverlay_vrr_dvsync_dly_ctrl1_RBUS pwm_vrr_dvsync_ctrl1_reg;
    PWM_VRR_DVSYNC_CTRL1_REG_R(&pwm_vrr_dvsync_ctrl1_reg);
    dvsync_int_dly = pwm_vrr_dvsync_ctrl1_reg.pwm_int_dly;
    return dvsync_int_dly;
}

int rtk_pwm_vrr_dvsync_delay_r(void){
    int dvsync_vs_dly = 0;
    ppoverlay_vrr_dvsync_dly_ctrl1_RBUS pwm_vrr_dvsync_ctrl1_reg;
    PWM_VRR_DVSYNC_CTRL1_REG_R(&pwm_vrr_dvsync_ctrl1_reg);
    dvsync_vs_dly = pwm_vrr_dvsync_ctrl1_reg.pwm_vs_dly;
    return dvsync_vs_dly;
}

void rtk_pwm_vrr_dvsync_delay_w(int dvsync_vs_dly){
    ppoverlay_vrr_dvsync_dly_ctrl1_RBUS pwm_vrr_dvsync_ctrl1_reg;
    PWM_VRR_DVSYNC_CTRL1_REG_R(&pwm_vrr_dvsync_ctrl1_reg);
    pwm_vrr_dvsync_ctrl1_reg.pwm_vs_dly = dvsync_vs_dly;
    PWM_VRR_DVSYNC_CTRL1_REG_W(&pwm_vrr_dvsync_ctrl1_reg);
}

/** Register Fucntion**/
//MISC PWM_DB0_CTRL
#define M_GLOBAL_VSYNC_EN_R(reg) reg.global_vsync_en
#define M_PWM_W_DB0_MODE_R(num,reg) reg.pwm##num##_w_db0_mode
#define M_PWM_DB0_RD_SEL_R(num,reg) reg.pwm##num##_db0_rd_sel
#define M_PWM_W_DB0_EN_R(num,reg) reg.pwm##num##_w_db0_en
#define M_GLOBAL_VSYNC_EN_W(reg,val) reg.global_vsync_en = val
#define M_PWM_W_DB0_MODE_W(num,reg,val) reg.pwm##num##_w_db0_mode = val
#define M_PWM_DB0_RD_SEL_W(num,reg,val) reg.pwm##num##_db0_rd_sel = val
#define M_PWM_W_DB0_EN_W(num,reg,val) reg.pwm##num##_w_db0_en = val

void rtk_pwm_global_apply_wr(int enable){
    pwm_db0_ctrl_RBUS pwm_mis_db0_reg;
    M_PWM_DB0_CTRL_REG_R(0,&pwm_mis_db0_reg);
    M_GLOBAL_VSYNC_EN_W(pwm_mis_db0_reg,enable);
    M_PWM_DB0_CTRL_REG_W(0,&pwm_mis_db0_reg);
}

int rtk_pwm_global_enable_mw(R_CHIP_T *pchip2,int enable){
    pwm_db0_ctrl_RBUS pwm_mis_db0_reg;
    M_PWM_DB0_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_db0_reg);
    M_GLOBAL_VSYNC_EN_W(pwm_mis_db0_reg,enable);
    M_PWM_DB0_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_db0_reg);
    return 0;
}

int rtk_pwm_db_sel_enable_mw(R_CHIP_T *pchip2,int enable){
    pwm_db0_ctrl_RBUS pwm_mis_db0_reg;
    M_PWM_DB0_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_db0_reg);
    switch(RTK_PWM_INDEX(pchip2)){
        case PWM0_DB0:
            M_PWM_DB0_RD_SEL_W(0,pwm_mis_db0_reg,enable);
            break;
        case PWM1_DB0:
            M_PWM_DB0_RD_SEL_W(1,pwm_mis_db0_reg,enable);
            break;
        case PWM2_DB0:
            M_PWM_DB0_RD_SEL_W(2,pwm_mis_db0_reg,enable);
            break;
        case PWM3_DB0:
            M_PWM_DB0_RD_SEL_W(3,pwm_mis_db0_reg,enable);
            break;
        case PWM4_DB0:
            M_PWM_DB0_RD_SEL_W(4,pwm_mis_db0_reg,enable);
            break;
        case PWM5_DB0:
            M_PWM_DB0_RD_SEL_W(5,pwm_mis_db0_reg,enable);
            break;
        case PWM6_DB0:
            M_PWM_DB0_RD_SEL_W(6,pwm_mis_db0_reg,enable);
            break;
        case PWM7_DB0:
            M_PWM_DB0_RD_SEL_W(7,pwm_mis_db0_reg,enable);
            break;
        default:
            break;
    }

    M_PWM_DB0_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_db0_reg);
    return 0;
}

int rtk_pwm_db_enable_mw(R_CHIP_T *pchip2,int enable){
    pwm_db0_ctrl_RBUS pwm_mis_db0_reg;
    M_PWM_DB0_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_db0_reg);
    switch(RTK_PWM_INDEX(pchip2)){
        case PWM0_DB0:
            M_PWM_W_DB0_MODE_W(0,pwm_mis_db0_reg,pchip2->rtk_vsync);
            M_PWM_W_DB0_EN_W(0,pwm_mis_db0_reg,enable);
            break;
        case PWM1_DB0:
            M_PWM_W_DB0_MODE_W(1,pwm_mis_db0_reg,pchip2->rtk_vsync);
            M_PWM_W_DB0_EN_W(1,pwm_mis_db0_reg,enable);
            break;
        case PWM2_DB0:
            M_PWM_W_DB0_MODE_W(2,pwm_mis_db0_reg,pchip2->rtk_vsync);
            M_PWM_W_DB0_EN_W(2,pwm_mis_db0_reg,enable);
            break;
        case PWM3_DB0:
            M_PWM_W_DB0_MODE_W(3,pwm_mis_db0_reg,pchip2->rtk_vsync);
            M_PWM_W_DB0_EN_W(3,pwm_mis_db0_reg,enable);
            break;
        case PWM4_DB0:
            M_PWM_W_DB0_MODE_W(4,pwm_mis_db0_reg,pchip2->rtk_vsync);
            M_PWM_W_DB0_EN_W(4,pwm_mis_db0_reg,enable);
            break;
        case PWM5_DB0:
            M_PWM_W_DB0_MODE_W(5,pwm_mis_db0_reg,pchip2->rtk_vsync);
            M_PWM_W_DB0_EN_W(5,pwm_mis_db0_reg,enable);
            break;
        case PWM6_DB0:
            M_PWM_W_DB0_MODE_W(6,pwm_mis_db0_reg,pchip2->rtk_vsync);
            M_PWM_W_DB0_EN_W(6,pwm_mis_db0_reg,enable);
            break;
        case PWM7_DB0:
            M_PWM_W_DB0_MODE_W(7,pwm_mis_db0_reg,pchip2->rtk_vsync);
            M_PWM_W_DB0_EN_W(7,pwm_mis_db0_reg,enable);
            break;
        default:
            break;
    }

    M_PWM_DB0_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_db0_reg);
    return 0;
}

//ISO PWM_DB_CTRL
#define I_GLOBAL_VSYNC_EN_R(reg) reg.i_global_delay_en
#define I_PWM_W_DB_MODE_R(reg) reg.i_pwm_w_db_mode
#define I_PWM_DB_RD_SEL_R(reg) reg.i_db_rd_sel
#define I_PWM_W_DB_EN_R(reg) reg.i_pwm_w_db_en
#define I_GLOBAL_VSYNC_EN_W(reg,val) reg.i_global_delay_en = val
#define I_PWM_W_DB_MODE_W(reg,val) reg.i_pwm_w_db_mode = val
#define I_PWM_DB_RD_SEL_W(reg,val) reg.i_db_rd_sel = val
#define I_PWM_W_DB_EN_W(reg,val) reg.i_pwm_w_db_en = val
int rtk_pwm_global_enable_iw(R_CHIP_T *pchip2,int enable){
    pwm_db0_ctrl_RBUS pwm_iso_db0_reg;
    I_PWM_DB_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_iso_db0_reg);
    I_GLOBAL_VSYNC_EN_W(pwm_iso_db0_reg,enable);
    I_PWM_DB_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_iso_db0_reg);
    return 0;
}

int rtk_pwm_db_enable_iw(R_CHIP_T *pchip2,int enable){
    pwm_db0_ctrl_RBUS pwm_iso_db_reg;
    I_PWM_DB_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_iso_db_reg);
    I_PWM_W_DB_MODE_W(pwm_iso_db_reg,enable);
    I_PWM_W_DB_EN_W(pwm_iso_db_reg,enable);
    I_PWM_DB_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_iso_db_reg);
    return 0;
}

int rtk_pwm_db_sel_enable_iw(R_CHIP_T *pchip2,int enable){
    pwm_db0_ctrl_RBUS pwm_iso_db_reg;
    I_PWM_DB_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_iso_db_reg);
    I_PWM_DB_RD_SEL_W(pwm_iso_db_reg,enable);
    I_PWM_DB_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_iso_db_reg);
    return 0;
}

int rtk_pwm_db_sel_enable(R_CHIP_T *pchip2,int enable){
    if(PWM_MISC_TYPE(pchip2)){
        rtk_pwm_db_sel_enable_mw(pchip2,enable);
    }
    else if(PWM_ISO_TYPE(pchip2)){
        rtk_pwm_db_sel_enable_iw(pchip2,enable);
    }

    return 0;
}

int rtk_pwm_db_enable(R_CHIP_T *pchip2,int enable){
    if(PWM_MISC_TYPE(pchip2)){
        rtk_pwm_db_enable_mw(pchip2,enable);
    }
    else if(PWM_ISO_TYPE(pchip2)){
        rtk_pwm_db_enable_iw(pchip2,enable);
    }

    return 0;
}

int rtk_pwm_global_enable(R_CHIP_T *pchip2,int enable){
    if(PWM_MISC_TYPE(pchip2)){
        rtk_pwm_global_enable_mw(pchip2,enable);
    }
    else if(PWM_ISO_TYPE(pchip2)){
        rtk_pwm_global_enable_iw(pchip2,enable);
    }
    return 0;
}

//Double Buffer Write Bit (DB Apply)
void rtk_pwm_db_wb(R_CHIP_T *pchip2){
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.m_pwm0_w_db0_wr = 1;
        M_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
    else{
        I_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.i_pwm0_w_db_wr = 1;
        I_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
}

//Only MISC PWM
void rtk_pwm_db1_wb(R_CHIP_T *pchip2){
    pwm_ctrl_RBUS pwm_ctrl_reg;
    M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    pwm_ctrl_reg.m_pwm0_w_db1_wr = 1;
    M_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
}

void rtk_pwm_ctrl_polarity_w(R_CHIP_T *pchip2,int enable){
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.m_pwm0l = enable;
        M_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
    else{
        I_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.i_pwm0l = enable;
        I_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
}

int rtk_pwm_ctrl_duty_select_r(R_CHIP_T *pchip2){
    int pwm_duty_select = 0;
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_duty_select = pwm_ctrl_reg.m_pwm0_duty_sel;
    }

    return pwm_duty_select;
}

void rtk_pwm_ctrl_duty_select_w(R_CHIP_T *pchip2,int enable){
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.m_pwm0_duty_sel = enable;
        M_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
}

int rtk_pwm_ctrl_polarity_r(R_CHIP_T *pchip2){
    int polarity = 0;
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        polarity = pwm_ctrl_reg.m_pwm0l;
    }
    else{
        I_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        polarity = pwm_ctrl_reg.i_pwm0l;
    }
    return polarity;
}

void rtk_pwm_freq_w(R_CHIP_T *pchip2){
    pwm_timing_ctrl_RBUS pwm_timing_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TIMING_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
        rtk_pwm_timing_freq_set(pchip2,&pwm_timing_ctrl_reg);
        M_PWM_TIMING_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
    }
    else{
        I_PWM_TIMING_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
        rtk_pwm_timing_freq_set(pchip2,&pwm_timing_ctrl_reg);
        I_PWM_TIMING_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
    }
}

int rtk_pwm_freq_r(R_CHIP_T *pchip2){
    unsigned short M = 0, N = 0;
    pwm_timing_ctrl_RBUS pwm_timing_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TIMING_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
        M = pwm_timing_ctrl_reg.m_pwm0_m;
        N = pwm_timing_ctrl_reg.m_pwm0_n;
    }
    else{
        I_PWM_TIMING_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
        M = pwm_timing_ctrl_reg.i_pwm0_m;
        N = pwm_timing_ctrl_reg.i_pwm0_n;
    }
    return rtk_pwm_get_freq(pchip2,M,N);
}

void rtk_pwm_mn_r(R_CHIP_T *pchip2,unsigned long *M, unsigned long *N){
    pwm_timing_ctrl_RBUS pwm_timing_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TIMING_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
        (*M) = pwm_timing_ctrl_reg.m_pwm0_m;
        (*N) = pwm_timing_ctrl_reg.m_pwm0_n;
    }
    else{
        I_PWM_TIMING_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
        (*M) = pwm_timing_ctrl_reg.i_pwm0_m;
        (*N) = pwm_timing_ctrl_reg.i_pwm0_n;
    }
}

void rtk_pwm_num_w(R_CHIP_T *pchip2,int num){
    pwm_duty_set_RBUS pwm_duty_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        pwm_duty_set_reg.m_pwm0_num = num;
        M_PWM_DUTY_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
    }
    //ISO no this
}

void rtk_pwm_duty_w(R_CHIP_T *pchip2,int duty){
    pwm_duty_set_RBUS pwm_duty_set_reg;
    duty = rtk_get_pwm_duty_base_change(pchip2->rtk_duty,pchip2->rtk_duty_max,pchip2->rtk_totalcnt);

    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        pwm_duty_set_reg.m_pwm0_dut = duty;
        pwm_duty_set_reg.m_pwm0_totalcnt = pchip2->rtk_totalcnt;
        M_PWM_DUTY_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
    }
    else{
        I_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        pwm_duty_set_reg.i_pwm0_dut = duty;
        I_PWM_DUTY_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
    }
}

int rtk_pwm_duty_r(R_CHIP_T *pchip2){
    int duty = 0;
    pwm_duty_set_RBUS pwm_duty_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        duty = pwm_duty_set_reg.m_pwm0_dut;
    }
    else{
        I_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        duty = pwm_duty_set_reg.i_pwm0_dut;
    }
    return duty;
}

void rtk_pwm_totalcnt_w(R_CHIP_T *pchip2,int totalcnt){
    pwm_duty_set_RBUS pwm_duty_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        pwm_duty_set_reg.m_pwm0_totalcnt = totalcnt;
        M_PWM_DUTY_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
    }
    else{
        I_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        pwm_duty_set_reg.i_pwm0_totalcnt = totalcnt;
        I_PWM_DUTY_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
    }
}

int rtk_pwm_totalcnt_r(R_CHIP_T *pchip2){
    int totalcnt = 0;
    pwm_duty_set_RBUS pwm_duty_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        totalcnt = pwm_duty_set_reg.m_pwm0_totalcnt;
    }
    else{
        I_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        totalcnt = pwm_duty_set_reg.i_pwm0_totalcnt;
    }
    return totalcnt;
}

void rtk_pwm_vsync_w(R_CHIP_T *pchip2,int vsync){
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.m_pwm0_vs_rst_en = vsync;
        M_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
    else{
        I_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.i_pwm0_vs_rst_en = vsync;
        I_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
}

int rtk_pwm_dvs_mux_r(R_CHIP_T *pchip2){
    int vsync = 0;
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        vsync = pwm_ctrl_reg.m_pwm0_dvs_mux;
    }
    //ISO no this register
    return vsync;
}

void rtk_pwm_dvs_mux_w(R_CHIP_T *pchip2,int vsync){
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.m_pwm0_dvs_mux = vsync;
        M_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
    //ISO no this register
}

int rtk_pwm_vsync_r(R_CHIP_T *pchip2){
    int vsync = 0;
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        vsync = pwm_ctrl_reg.m_pwm0_vs_rst_en;
    }
    else{
        I_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        vsync = pwm_ctrl_reg.i_pwm0_vs_rst_en;
    }
    return vsync;
}

void rtk_pwm_output_w(R_CHIP_T *pchip2,int output){
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.m_pwm0_en = output;
        M_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
    else{
        I_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.i_pwm0_en = output;
        I_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
}

int rtk_pwm_output_r(R_CHIP_T *pchip2){
    int output = 0;
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        output = pwm_ctrl_reg.m_pwm0_en;
    }
    else{
        I_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        output = pwm_ctrl_reg.i_pwm0_en;
    }
    return  output;
}

void rtk_pwm_vs_delay_w(R_CHIP_T *pchip2,int delay){
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.m_pwm0_vs_delay_thr = delay;
        M_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
    else{
        I_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.i_pwm0_vs_delay_thr = delay;
        I_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
}

unsigned int rtk_pwm_vs_delay_r(R_CHIP_T *pchip2){
    unsigned int vdelay = 0;
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        vdelay = pwm_ctrl_reg.m_pwm0_vs_delay_thr;
    }
    else{
        I_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        vdelay = pwm_ctrl_reg.i_pwm0_vs_delay_thr;
    }
    return vdelay;
}

void rtk_pwm_vsync_interval_w(R_CHIP_T *pchip2,int num){
    pwm_timing_ctrl_RBUS pwm_timing_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TIMING_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
        pwm_timing_ctrl_reg.m_pwm0_vsync_interval_num = num;
        M_PWM_TIMING_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
    }
    else{
        I_PWM_TIMING_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
        pwm_timing_ctrl_reg.i_pwm0_vsync_interval_num = num;
        I_PWM_TIMING_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
    }
}

int rtk_pwm_vsync_interval_r(R_CHIP_T *pchip2){
    int interval = 0;
    pwm_timing_ctrl_RBUS pwm_timing_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TIMING_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
        interval = pwm_timing_ctrl_reg.m_pwm0_vsync_interval_num;
    }
    else{
        I_PWM_TIMING_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
        interval = pwm_timing_ctrl_reg.i_pwm0_vsync_interval_num;
    }
    return  interval;
}

void rtk_pwm_mpluse_w(R_CHIP_T *pchip2,int mpluse){
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.m_pwm0_mplus_dim_duty_en = mpluse;
        M_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
}

int rtk_pwm_mpluse_r(R_CHIP_T *pchip2){
    int mpluse_en = 0;
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        mpluse_en = pwm_ctrl_reg.m_pwm0_mplus_dim_duty_en;
    }

    return mpluse_en;
}

void rtk_pwm_cycle_max_w(R_CHIP_T *pchip2,int cycle_max){
    pwm_duty_set_RBUS pwm_duty_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        pwm_duty_set_reg.m_pwm0_cycle_max = cycle_max;
        M_PWM_DUTY_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
    }
    else{
        I_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        pwm_duty_set_reg.i_pwm0_cycle_max = cycle_max;
        I_PWM_DUTY_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
    }
}

int rtk_pwm_cycle_max_r(R_CHIP_T *pchip2){
    int cycle_max = 0;
    pwm_duty_set_RBUS pwm_duty_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        cycle_max = pwm_duty_set_reg.m_pwm0_cycle_max;
    }
    else{
        I_PWM_DUTY_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_duty_set_reg);
        cycle_max = pwm_duty_set_reg.i_pwm0_cycle_max;
    }
    return cycle_max;
}

void rtk_pwm_force_mode_w(R_CHIP_T *pchip2,int force_mode){
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        pwm_ctrl_reg.m_pwm0_mode = force_mode;
        M_PWM_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
    }
    //ISO PWM No Force mode
}

int rtk_pwm_force_mode_r(R_CHIP_T *pchip2){
    int force_mode = 0;
    pwm_ctrl_RBUS pwm_ctrl_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_ctrl_reg);
        force_mode = pwm_ctrl_reg.m_pwm0_mode;
    }
    //ISO PWM No Force mode
    return force_mode;
}

void rtk_pwm_duty_ratio_w(R_CHIP_T *pchip2,unsigned long ratio){
    pwm_timing_ctrl_RBUS pwm_timing_ctrl_reg;

    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TIMING_CTRL_REG_R(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
        pwm_timing_ctrl_reg.m_pwm0_duty_ratio = ratio;
        M_PWM_TIMING_CTRL_REG_W(RTK_PWM_INDEX(pchip2),&pwm_timing_ctrl_reg);
    }
    //ISO no this
}

//======================================================================
//Vsync Tracking & Predict Register Function
//======================================================================
//Register::PWM0_DVS_PERIOD
void rtk_pwm_dvs_max_period_w(R_CHIP_T *pchip2,unsigned long dvs_max_period){
    pwm_mis_dvs_period_RBUS pwm_dvs_period_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DVS_PERIOD_REG_R(RTK_PWM_INDEX(pchip2),&pwm_dvs_period_reg);
        pwm_dvs_period_reg.pwm0_vs_max_period = dvs_max_period;
        M_PWM_DVS_PERIOD_REG_W(RTK_PWM_INDEX(pchip2),&pwm_dvs_period_reg);
    }
}

unsigned long rtk_pwm_dvs_max_period_r(R_CHIP_T *pchip2){
    unsigned long dvs_max_period = 0;
    pwm_mis_dvs_period_RBUS pwm_dvs_period_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DVS_PERIOD_REG_R(RTK_PWM_INDEX(pchip2),&pwm_dvs_period_reg);
        dvs_max_period = pwm_dvs_period_reg.pwm0_vs_max_period;
    }
    return dvs_max_period;
}

void rtk_pwm_dvs_min_period_w(R_CHIP_T *pchip2,unsigned long dvs_min_period){
    pwm_mis_dvs_period_RBUS pwm_dvs_period_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DVS_PERIOD_REG_R(RTK_PWM_INDEX(pchip2),&pwm_dvs_period_reg);
        pwm_dvs_period_reg.pwm0_vs_min_period = dvs_min_period;
        M_PWM_DVS_PERIOD_REG_W(RTK_PWM_INDEX(pchip2),&pwm_dvs_period_reg);
    }
}

unsigned long rtk_pwm_dvs_min_period_r(R_CHIP_T *pchip2){
    unsigned long dvs_min_period = 0;
    pwm_mis_dvs_period_RBUS pwm_dvs_period_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DVS_PERIOD_REG_R(RTK_PWM_INDEX(pchip2),&pwm_dvs_period_reg);
        dvs_min_period = pwm_dvs_period_reg.pwm0_vs_min_period;
    }
    return dvs_min_period;
}

//Register::PWM0_DVS_MONITOR (ReadOnly)
unsigned long rtk_pwm_dvs_monitor_period_r(R_CHIP_T *pchip2){
    unsigned long pwm_dvs_period = 0;
    pwm_mis_dvs_monitor_RBUS pwm_dvs_monitor_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DVS_MONITOR_REG_R(RTK_PWM_INDEX(pchip2),&pwm_dvs_monitor_reg);
        pwm_dvs_period = pwm_dvs_monitor_reg.pwm0_vs_period;
    }
    return pwm_dvs_period;
}

unsigned long rtk_pwm_dvs_monitor_realtime_r(R_CHIP_T *pchip2){
    unsigned long pwm_dvs_realtime = 0;
    pwm_mis_dvs_monitor_RBUS pwm_dvs_monitor_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_DVS_MONITOR_REG_R(RTK_PWM_INDEX(pchip2),&pwm_dvs_monitor_reg);
        pwm_dvs_realtime = pwm_dvs_monitor_reg.pwm0_vs_real_time;
    }
    return pwm_dvs_realtime;
}

//Register::PWM0_MONITOR(ReadOnly)
int rtk_pwm_monitor_interrupt_r(R_CHIP_T *pchip2){
    int pwm_dvs_interrupt = 0;
    pwm_mis_monitor_RBUS pwm_monitor_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_MONITOR_REG_R(RTK_PWM_INDEX(pchip2),&pwm_monitor_reg);
        pwm_dvs_interrupt = pwm_monitor_reg.pwm0_int;
    }
    return pwm_dvs_interrupt;
}

unsigned long rtk_pwm_monitor_real_totalcnt_r(R_CHIP_T *pchip2){
    unsigned long pwm_real_totalcnt = 0;
    pwm_mis_monitor_RBUS pwm_monitor_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_MONITOR_REG_R(RTK_PWM_INDEX(pchip2),&pwm_monitor_reg);
        pwm_real_totalcnt = pwm_monitor_reg.pwm0_real_totalcnt;
    }
    return pwm_real_totalcnt;
}

unsigned long rtk_pwm_monitor_real_duty_r(R_CHIP_T *pchip2){
    unsigned long pwm_real_duty = 0;
    pwm_mis_monitor_RBUS pwm_monitor_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_MONITOR_REG_R(RTK_PWM_INDEX(pchip2),&pwm_monitor_reg);
        pwm_real_duty = pwm_monitor_reg.pwm0_real_duty;
    }
    return pwm_real_duty;
}

//Register::PWM0_ERR_STATUS
void rtk_pwm_predict_max_vs_thr_w(R_CHIP_T *pchip2,unsigned long max_thr){
    pwm_mis_err_status_RBUS pwm_mis_err_status_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_ERR_STATUS_R(RTK_PWM_INDEX(pchip2),&pwm_mis_err_status_reg);
        pwm_mis_err_status_reg.pwm0_predict_max_vs_thr = max_thr;
        M_PWM_ERR_STATUS_W(RTK_PWM_INDEX(pchip2),&pwm_mis_err_status_reg);
    }
}

unsigned long rtk_pwm_predict_max_vs_thr_r(R_CHIP_T *pchip2){
    pwm_mis_err_status_RBUS pwm_mis_err_status_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_ERR_STATUS_R(RTK_PWM_INDEX(pchip2),&pwm_mis_err_status_reg);
    }
    return pwm_mis_err_status_reg.pwm0_predict_max_vs_thr;
}

int rtk_pwm_err2_int_r(R_CHIP_T *pchip2){
    pwm_mis_err_status_RBUS pwm_mis_err_status_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_ERR_STATUS_R(RTK_PWM_INDEX(pchip2),&pwm_mis_err_status_reg);
    }
    return pwm_mis_err_status_reg.pwm0_err2int_en;
}

int rtk_pwm_predict_err_r(R_CHIP_T *pchip2){
    pwm_mis_err_status_RBUS pwm_mis_err_status_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_ERR_STATUS_R(RTK_PWM_INDEX(pchip2),&pwm_mis_err_status_reg);
    }
    return pwm_mis_err_status_reg.pwm0_predict_err;
}

int rtk_pwm_unstable_status_r(R_CHIP_T *pchip2){
    pwm_mis_err_status_RBUS pwm_mis_err_status_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_ERR_STATUS_R(RTK_PWM_INDEX(pchip2),&pwm_mis_err_status_reg);
    }
    return pwm_mis_err_status_reg.pwm0_vs_unstable;
}

//Register::PWM0_TRACK_SET
void rtk_pwm_tracking_index_w(R_CHIP_T *pchip2,int track_index){
    pwm_mis_track_set_RBUS pwm_mis_track_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
        pwm_mis_track_set_reg.pwm0_track_index = track_index;
        M_PWM_TRACK_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
    }
}

int rtk_pwm_tracking_index_r(R_CHIP_T *pchip2){
    pwm_mis_track_set_RBUS pwm_mis_track_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
    }
    return pwm_mis_track_set_reg.pwm0_track_index;
}

void rtk_pwm_tracking_sw_init_en_w(R_CHIP_T *pchip2,int enable){
    pwm_mis_track_set_RBUS pwm_mis_track_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
        pwm_mis_track_set_reg.pwm0_track_int_en = enable;
        M_PWM_TRACK_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
    }
}

int rtk_pwm_tracking_sw_init_en_r(R_CHIP_T *pchip2){
    pwm_mis_track_set_RBUS pwm_mis_track_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        if(pchip2->index >=2)
            return 0;

        M_PWM_TRACK_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
    }
    return pwm_mis_track_set_reg.pwm0_track_int_en;
}

void rtk_pwm_tracking_mode_set_w(R_CHIP_T *pchip2,int mode){
    pwm_mis_track_set_RBUS pwm_mis_track_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
        pwm_mis_track_set_reg.pwm0_track_mode = mode;
        M_PWM_TRACK_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
    }
}

void rtk_pwm_tracking_mode_start_w(R_CHIP_T *pchip2,int enable){
    pwm_mis_track_set_RBUS pwm_mis_track_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
        pwm_mis_track_set_reg.pwm0_track_start = enable;
        M_PWM_TRACK_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
    }
}

void rtk_pwm_tracking_mode_stop_w(R_CHIP_T *pchip2,int enable){
    pwm_mis_track_set_RBUS pwm_mis_track_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
        pwm_mis_track_set_reg.pwm0_track_stop = enable;
        M_PWM_TRACK_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
    }
}

void rtk_pwm_tracking_enable_w(R_CHIP_T *pchip2,int enable){
    pwm_mis_track_set_RBUS pwm_mis_track_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_SET_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
        pwm_mis_track_set_reg.pwm0_track_en = enable;
        M_PWM_TRACK_SET_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_track_set_reg);
    }
}

//Register::PWM0_TRACK_FSM
void rtk_pwm_tracking_phase_int_enable_w(R_CHIP_T *pchip2,int enable){
    pwm_mis_track_fsm_RBUS pwm_mis_track_fsm_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_FSM_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_fsm_reg);
        pwm_mis_track_fsm_reg.pwm0_phase_finish_to_int_en = enable;
        M_PWM_TRACK_FSM_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_track_fsm_reg);
    }
}

void rtk_pwm_tracking_freq_int_enable_w(R_CHIP_T *pchip2,int enable){
    pwm_mis_track_fsm_RBUS pwm_mis_track_fsm_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_FSM_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_fsm_reg);
        pwm_mis_track_fsm_reg.pwm0_freq_finish_to_int_en = enable;
        M_PWM_TRACK_FSM_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_track_fsm_reg);
    }
}

int rtk_pwm_tracking_phase_finish_r(R_CHIP_T *pchip2){
    pwm_mis_track_fsm_RBUS pwm_mis_track_fsm_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_FSM_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_fsm_reg);
    }
    return pwm_mis_track_fsm_reg.pwm0_track_phase_finish;
}

void rtk_pwm_tracking_phase_finish_clr(R_CHIP_T *pchip2){
    pwm_mis_track_fsm_RBUS pwm_mis_track_fsm_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_FSM_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_fsm_reg);
        pwm_mis_track_fsm_reg.pwm0_track_phase_finish = HW_TRACK_PHASE_NOT_FINISH;
        M_PWM_TRACK_FSM_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_track_fsm_reg);
    }
}

int rtk_pwm_tracking_freq_finish_r(R_CHIP_T *pchip2){
    pwm_mis_track_fsm_RBUS pwm_mis_track_fsm_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_FSM_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_fsm_reg);
    }
    return pwm_mis_track_fsm_reg.pwm0_track_freq_finish;
}

void rtk_pwm_tracking_freq_finish_clr(R_CHIP_T *pchip2){
    pwm_mis_track_fsm_RBUS pwm_mis_track_fsm_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_FSM_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_fsm_reg);
        pwm_mis_track_fsm_reg.pwm0_track_freq_finish = HW_TRACK_FREQ_NOT_FINISH;
        M_PWM_TRACK_FSM_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_track_fsm_reg);
    }
}

int rtk_pwm_tracking_fsm_r(R_CHIP_T *pchip2){
    pwm_mis_track_fsm_RBUS pwm_mis_track_fsm_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_FSM_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_fsm_reg);
    }
    return pwm_mis_track_fsm_reg.pwm0_track_fsm;
}

//Register::PWM0_TRACK_PTI(Read Only)
unsigned long rtk_pwm_track_pti_phase_r(R_CHIP_T *pchip2){
    pwm_mis_track_pti_RBUS pwm_mis_track_pti_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_PTI_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_pti_set_reg);
    }
    return pwm_mis_track_pti_set_reg.pwm0_pti_phase;
}

unsigned long rtk_pwm_track_pti_period_r(R_CHIP_T *pchip2){
    pwm_mis_track_pti_RBUS pwm_mis_track_pti_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_TRACK_PTI_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_track_pti_set_reg);
    }
    return pwm_mis_track_pti_set_reg.pwm0_pti_period;
}

//Register::PWM0_FREQ_0
void rtk_pwm_freq_debounce_w(R_CHIP_T *pchip2,int debounce){
    pwm_mis_freq_0_RBUS pwm_mis_freq_0_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_FREQ_0_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_freq_0_set_reg);
        pwm_mis_freq_0_set_reg.pwm0_freq_debounce = debounce;
        M_PWM_FREQ_0_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_freq_0_set_reg);
    }
}

void rtk_pwm_freq_max_step_w(R_CHIP_T *pchip2,unsigned long max_step){
    pwm_mis_freq_0_RBUS pwm_mis_freq_0_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_FREQ_0_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_freq_0_set_reg);
        pwm_mis_freq_0_set_reg.pwm0_freq_max_step = max_step;
        M_PWM_FREQ_0_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_freq_0_set_reg);
    }
}

//Register::PWM0_FREQ_1
void rtk_pwm_freq_min_thr_w(R_CHIP_T *pchip2,unsigned long min_thr){
    pwm_mis_freq_1_RBUS pwm_mis_freq_1_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_FREQ_1_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_freq_1_set_reg);
        pwm_mis_freq_1_set_reg.pwm0_freq_min_thr = min_thr;
        M_PWM_FREQ_1_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_freq_1_set_reg);
    }
}

//Register::PWM0_PHASE_0
void rtk_pwm_phase_debounce_w(R_CHIP_T *pchip2,int debounce){
    pwm_mis_phase_0_RBUS pwm_mis_phase_0_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_PHASE_0_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_phase_0_set_reg);
        pwm_mis_phase_0_set_reg.pwm0_phase_debounce = debounce;
        M_PWM_PHASE_0_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_phase_0_set_reg);
    }
}

void rtk_pwm_phase_max_step_w(R_CHIP_T *pchip2,unsigned long max_step){
    pwm_mis_phase_0_RBUS pwm_mis_phase_0_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_PHASE_0_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_phase_0_set_reg);
        pwm_mis_phase_0_set_reg.pwm0_phase_max_step = max_step;
        M_PWM_PHASE_0_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_phase_0_set_reg);
    }
}

//Register::PWM0_PHASE_1
void rtk_pwm_phase_max_thr_w(R_CHIP_T *pchip2,unsigned long threshold){
    pwm_mis_phase_1_RBUS pwm_mis_phase_1_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_PHASE_1_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_phase_1_set_reg);
        pwm_mis_phase_1_set_reg.pwm0_phase_max_thr = threshold;
        M_PWM_PHASE_1_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_phase_1_set_reg);
    }
}

void rtk_pwm_phase_min_thr_w(R_CHIP_T *pchip2,unsigned long threshold){
    pwm_mis_phase_1_RBUS pwm_mis_phase_1_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_PHASE_1_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_phase_1_set_reg);
        pwm_mis_phase_1_set_reg.pwm0_phase_min_thr = threshold;
        M_PWM_PHASE_1_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_phase_1_set_reg);
    }
}

//Register::PWM0_HW_PREDICT
void rtk_pwm_predict_index_w(R_CHIP_T *pchip2,int predict_indx){
    pwm_mis_hw_predict_RBUS pwm_mis_hw_predict_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_HW_PREDICT_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_hw_predict_set_reg);
        pwm_mis_hw_predict_set_reg.pwm0_predict_index = predict_indx;
        M_PWM_HW_PREDICT_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_hw_predict_set_reg);
    }
}

void rtk_pwm_predict_en_w(R_CHIP_T *pchip2,int enable){
    pwm_mis_hw_predict_RBUS pwm_mis_hw_predict_set_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_HW_PREDICT_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_hw_predict_set_reg);
        pwm_mis_hw_predict_set_reg.pwm0_predict_en = enable;
        M_PWM_HW_PREDICT_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_hw_predict_set_reg);
    }
}

//Register::PWM0_SW_PREDICT
void rtk_pwm_sw_next_vsync_period_w(R_CHIP_T *pchip2,unsigned long dvs_period_indx){
    pwm_mis_sw_predict_RBUS pwm_mis_sw_predict_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_SW_PREDICT_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_sw_predict_reg);
        pwm_mis_sw_predict_reg.pwm0_sw_nxt_vw_period = dvs_period_indx;
        M_PWM_SW_PREDICT_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_sw_predict_reg);
    }
}

unsigned long rtk_pwm_sw_next_vsync_period_r(R_CHIP_T *pchip2){
    pwm_mis_sw_predict_RBUS pwm_mis_sw_predict_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_SW_PREDICT_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_sw_predict_reg);
    }
    return pwm_mis_sw_predict_reg.pwm0_sw_nxt_vw_period;
}

//Register::PWM0_PREDICT_RATIO
void rtk_pwm_predict_ratio_w(R_CHIP_T *pchip2,unsigned long ratio){
    pwm_mis_predict_ratio_RBUS pwm_mis_predict_ratio_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_PREDICT_RATIO_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_predict_ratio_reg);
        pwm_mis_predict_ratio_reg.pwm0_d2p_ratio = ratio;
        M_PWM_PREDICT_RATIO_REG_W(RTK_PWM_INDEX(pchip2),&pwm_mis_predict_ratio_reg);
    }
}

unsigned long rtk_pwm_predict_ratio_r(R_CHIP_T *pchip2){
    pwm_mis_predict_ratio_RBUS pwm_mis_predict_ratio_reg;
    if(PWM_MISC_TYPE(pchip2)){
        M_PWM_PREDICT_RATIO_REG_R(RTK_PWM_INDEX(pchip2),&pwm_mis_predict_ratio_reg);
    }
    return pwm_mis_predict_ratio_reg.pwm0_d2p_ratio;
}

void pwm_duty_ratio_set(int index, unsigned long ratio){
    int i = 0;
    unsigned int duty_ratio_flag = 0;
    unsigned long ratio_check = 0;
    unsigned long duty_ratio_array = 1000000;
    R_CHIP_T *pchip2 = rtk_pwm_chip_get(index);
    if( ratio == duty_ratio_array)
    {
        rtk_pwm_duty_ratio_w(pchip2,DUTY_RATIO_BIT9);
    }
    else
    {
        ratio_check = ratio;
        for(i = 8; i> 0; i--)
        {
            duty_ratio_array = (duty_ratio_array >> 1);
            if( ratio_check >= duty_ratio_array)
            {
                ratio_check = ratio_check - duty_ratio_array;
                duty_ratio_flag |= (1 << i );
            }
        }
        rtk_pwm_duty_ratio_w(pchip2,duty_ratio_flag);
    }
}

void rtk_pwm_vsync_thr_get(R_CHIP_T *pchip2,int M, int N,unsigned long *thr_max,unsigned long *thr_min){
    unsigned long vsync_thr = 0;
    vsync_thr = (pchip2->ht+1)*(pchip2->vt+1)/(4*(1<<M)*(N+1));
    (*thr_max) = vsync_thr+20;
    (*thr_min) = vsync_thr-20;
}

int pwm_vsync_disable(int index){
    R_CHIP_T *pchip2 = NULL;
    pchip2 = rtk_pwm_chip_get(index);
    if(rtk_pwm_panel_mode_get() == PWM_DRIVING_LED_CURRENT && pchip2->rtk_freq == 200){
        return 0;
    }
    pchip2->rtk_vsync = PWM_VSYNC_DISABLE;
    rtk_pwm_vsync_w(pchip2,PWM_VSYNC_DISABLE);
    rtk_pwm_db_wb(pchip2);
    rtk_pwm_db1_wb(pchip2);
    return 0;
}

#define PWM_FREQ_MIN_THR 2
#define PWM_FREQ_MAX_STEP 2
#define PWM_FREQ_DEBOUNCE 2
#define PWM_PHASE_MAX_STEP 4
#define PWM_PHASE_MIN_THR (-4)
#define PWM_PHASE_MAX_THR 4
#define PWM_PHASE_DEBOUNCE 2

int pwm_hw_tracking_init(int index){
    unsigned long M,N = 0;
    unsigned long vsync_max_thr, vsync_min_thr = 0;
    unsigned long duty = 0;
    unsigned long pwm0_totalcnt = 0;
    unsigned long ratio = 0;
    //int Hz = 0;
    R_CHIP_T *pchip2 = NULL;
    pchip2 = rtk_pwm_chip_get(index);
    if(rtk_pwm_panel_mode_get() == PWM_DRIVING_LED_CURRENT && pchip2->rtk_freq == 200){
        return 0;
    }

    //PWM_WARN("Step1: Set Cycle_Max = 0 & Predict_mode Disable\n");
    //pchip2->rtk_vsync = PWM_VSYNC_DISABLE;
    //rtk_pwm_vsync_w(pchip2,PWM_VSYNC_DISABLE);
    rtk_pwm_num_w(pchip2,2);
    rtk_pwm_cycle_max_w(pchip2,0);
    rtk_pwm_predict_en_w(pchip2,HW_PREDICT_DISABLE);

    //PWM_WARN("Step2: Set Duty Ratio\n");
    duty = rtk_pwm_duty_r(pchip2);
    pwm0_totalcnt = rtk_pwm_totalcnt_r(pchip2);
    ratio = pwm_duty_ratio_get(duty,pwm0_totalcnt);
    pwm_duty_ratio_set(index,ratio);

    rtk_pwm_mn_r(pchip2,&M,&N);
    rtk_pwm_vsync_thr_get(pchip2,M,N,&vsync_max_thr,&vsync_min_thr);
    rtk_pwm_dvs_max_period_w(pchip2,vsync_max_thr);//DB1 apply
    rtk_pwm_dvs_min_period_w(pchip2,vsync_min_thr);//DB1 apply

    //Set Freq Debounce
    rtk_pwm_freq_debounce_w(pchip2,PWM_FREQ_DEBOUNCE);//DB0 apply
    //Set Freq Max Step
    rtk_pwm_freq_max_step_w(pchip2,PWM_FREQ_MAX_STEP);//DB0 apply
    //Set Freq min threshold
    rtk_pwm_freq_min_thr_w(pchip2,PWM_FREQ_MIN_THR);//DB0 apply
    //Set Phase Debounce
    rtk_pwm_phase_debounce_w(pchip2,PWM_PHASE_DEBOUNCE);//DB0 apply
    //Set Phase Max Step
    rtk_pwm_phase_max_step_w(pchip2,PWM_PHASE_MAX_STEP);//DB0 apply
    //Set Phase min threshold
    rtk_pwm_phase_max_thr_w(pchip2,PWM_PHASE_MAX_THR);//DB0 apply
    //Set Phase Max threshold
    rtk_pwm_phase_min_thr_w(pchip2,PWM_PHASE_MIN_THR);//DB0 apply
    //PWM_WARN("Step3: Set Track mode & Track Enable\n");
    rtk_pwm_tracking_mode_set_w(pchip2,HW_ONE_TIME); // Set Track mode //DB0 apply
    rtk_pwm_db_wb(pchip2);
    rtk_pwm_db1_wb(pchip2);
    return 0;
}
EXPORT_SYMBOL(pwm_hw_tracking_init);

#define TRACK_FSM_FINISH(this)    (this->fsm_state == HW_TRACK_FSM_FINISH)
#define TRACK_FSM_IDLE_SET(this)  (this->fsm_state = HW_TRACK_FSM_IDLE)
int pwm_hw_tracking_start(int index){
    R_CHIP_T *pchip2 = NULL;
    pchip2 = rtk_pwm_chip_get(index);

    if(rtk_pwm_panel_mode_get() == PWM_DRIVING_LED_CURRENT && pchip2->rtk_freq == 200){
        if( m_ioctl_printk_get() > 0 )
            PWM_WARN("[%d]SKIP Tracking\n",pchip2->index);

        return 0;
    }

    /* Need to hold lock to prevent race condition,
     * then cancel unfinished HW tracking. */
    spin_lock(&pchip2->lock);
    pwm_hw_tracking_stop(index);
    spin_unlock(&pchip2->lock);

    /* Need to wait pending ISR,
     * in order to prevent next HW track job from being cancelled */
    synchronize_irq(pchip2->irq);

    pchip2->track_priv.track_freq_complete = false;
    pchip2->track_priv.track_phase_complete = false;

    /* Enable interrupt of tracking freq and phase */
    rtk_pwm_tracking_freq_int_enable_w(pchip2, HW_TRACK_FREQ_INT_ENABLE);
    rtk_pwm_tracking_phase_int_enable_w(pchip2, HW_TRACK_PHASE_INT_ENABLE);

    //PWM_WARN("Step4: HW Tracking Start index:%d PCB_index:%d\n",index,RTK_PWM_INDEX(pchip2));
    pchip2->vsync_mode = TRACKING;
    TRACK_FSM_IDLE_SET(pchip2);
    rtk_pwm_tracking_mode_start_w(pchip2,HW_TRACK_START);
    rtk_pwm_db_wb(pchip2);
    rtk_pwm_db1_wb(pchip2);

    rtk_pwm_tracking_enable_w(pchip2,HW_TRACK_ENABLE);// Track enable //DB0 apply
    rtk_pwm_db_wb(pchip2);
    rtk_pwm_db1_wb(pchip2);

    return 0;
}
EXPORT_SYMBOL(pwm_hw_tracking_start);

int pwm_hw_tracking_stop(int index){
    R_CHIP_T *pchip2 = rtk_pwm_chip_get(index);
    rtk_pwm_tracking_freq_int_enable_w(pchip2,HW_TRACK_FREQ_INT_DISABLE);
    rtk_pwm_tracking_phase_int_enable_w(pchip2,HW_TRACK_PHASE_INT_DISABLE);
    rtk_pwm_tracking_mode_start_w(pchip2,HW_TRACK_START_DONE);
    rtk_pwm_tracking_enable_w(pchip2,HW_TRACK_DISABLE);
    rtk_pwm_db_wb(pchip2);
    rtk_pwm_db1_wb(pchip2);
    return 0;
}
EXPORT_SYMBOL(pwm_hw_tracking_stop);

//======================================================================
//PWM ISR Function
//======================================================================
irqreturn_t rtk_pwm_isr(int this_irq, void *dev_id)
{
    struct RTK_CHIP_T *pchip2 = (struct RTK_CHIP_T *)dev_id;
    unsigned long flags;

    pchip2->fsm_state = HW_TRACK_FSM_IDLE;

    LOCK_RTK_PWM(&pchip2->lock, flags);

    switch(pchip2->vsync_mode){
        case TRACKING:
            if(FREQ_FINIHED(pchip2)){
                pchip2->track_priv.real_duty = rtk_pwm_monitor_real_duty_r(pchip2);
                pchip2->track_priv.real_totalcnt = rtk_pwm_monitor_real_totalcnt_r(pchip2);

                rtk_pwm_tracking_freq_int_enable_w(pchip2, HW_TRACK_FREQ_INT_DISABLE);

                pchip2->track_priv.track_freq_complete = true;
            }

            if (PHASE_FINIHED(pchip2)){
                rtk_pwm_tracking_phase_int_enable_w(pchip2, HW_TRACK_PHASE_INT_DISABLE);

                pchip2->track_priv.track_phase_complete = true;
            }

            if (pchip2->track_priv.track_freq_complete &&
                    pchip2->track_priv.track_phase_complete) {
                /* write to DB1 to apply track */
                rtk_pwm_tracking_enable_w(pchip2, HW_TRACK_DISABLE);
                rtk_pwm_db1_wb(pchip2);

                /* Update duty & totalcnt, then write DB0 to apply */
                rtk_pwm_duty_w(pchip2, pchip2->track_priv.real_duty);
                rtk_pwm_totalcnt_w(pchip2, pchip2->track_priv. real_totalcnt);
                rtk_pwm_db_wb(pchip2);

                pwm_hw_tracking_stop(pchip2->index);
                pchip2->vsync_mode = IDLE;
                pchip2->fsm_state = HW_TRACK_FSM_FINISH;

                /* Enable Vsync reset (lock mode) */
                rtk_pwm_vsync_w(pchip2, PWM_VSYNC_ENABLE);
                pchip2->rtk_vsync = PWM_VSYNC_ENABLE;

                /* Finally, set freq again to promise pwm sync to vsync */
                rtk_pwm_set_freq(pchip2, pchip2->ht, pchip2->vt, 2, 1);
                rtk_pwm_db_wb(pchip2);
                rtk_pwm_db1_wb(pchip2);
            }

            break;
        case PHASE:
            break;
        case IDLE:
            goto failed;
            break;
    }
    UNLOCK_RTK_PWM(&pchip2->lock, flags);
    return IRQ_HANDLED;

failed:
    UNLOCK_RTK_PWM(&pchip2->lock, flags);
    return IRQ_NONE;
}

//======================================================================
//Parameter Function
//======================================================================
int rtk_pwm_polarity_param_set(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    if((param->val != 0) && (param->val != 1)){
        PWM_ERR("SET %s  POLARITY INVALID param_val:%d\n",pchip2->nodename,param->val);
        return (-PWM_POLARITY_INVALID);
    }

    pchip2->rtk_polarity = param->val;
    rtk_pwm_ctrl_polarity_w(pchip2,pchip2->rtk_polarity);

    if( m_ioctl_printk_get() > 0 )
        PWM_ERR("SET %s POLARITY param_val:%d\n",pchip2->nodename,param->val);

    return 0;
}

void rtk_pwm_polarity_param_get(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->rtk_polarity = rtk_pwm_ctrl_polarity_r(pchip2);
    param->val = pchip2->rtk_polarity;

    if( m_ioctl_printk_get() > 0 )
        PWM_WARN("GET %s POLARITY param_val:%d\n",pchip2->nodename,param->val);

}

int rtk_pwm_frequency_param_set(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    if((param->val < 4) || (param->val > MAX_PWM_FREQ)){
        PWM_ERR("SET %s  FREQEUNCY INVALID param_val:%d\n",pchip2->nodename,param->val);
        return (-PWM_FREQEUNCY_INVALID);
    }

    pchip2->rtk_freq = param->val;
    pchip2->rtk_freq_100times = pchip2->rtk_freq * 100;
    rtk_pwm_freq_w(pchip2);

    if(pchip2->rtk_duty == 0 && PWM_MISC_TYPE(pchip2)){
        if(pchip2->rtk_polarity == 1)
            rtk_pwm_force_mode_w(pchip2,PWM_FORCE_HIGH);
        else
            rtk_pwm_force_mode_w(pchip2,PWM_FORCE_LOW);
    }
    else{
        rtk_pwm_force_mode_w(pchip2,PWM_NON_FORCE);
        rtk_pwm_duty_w(pchip2,pchip2->rtk_duty);
    }

//    rtk_pwm_duty_w(pchip2,pchip2->rtk_duty);//If frequency change, duty need re-calculate
    rtk_pwm_totalcnt_w(pchip2,pchip2->rtk_totalcnt);

    if( m_ioctl_printk_get() > 0 )
        PWM_ERR("SET %s FREQUENCY param_val:%d\n",pchip2->nodename,param->val);

    return 0;
}

void rtk_pwm_frequency_param_get(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->rtk_freq = rtk_pwm_freq_r(pchip2);
    param->val = pchip2->rtk_freq;

    if( m_ioctl_printk_get() > 0 )
        PWM_WARN("GET %s FREQUENCY param_val:%d\n",pchip2->nodename,param->val);
}

int rtk_pwm_duty_param_set(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    if((param->val < 0) || (param->val > (pchip2->rtk_duty_max+1))){
        PWM_ERR("SET %s  DUTY INVALID param_val:%d\n",pchip2->nodename,param->val);
        return (-PWM_DUTY_INVALID);
    }

    pchip2->rtk_duty = param->val;
    if(pchip2->rtk_duty == 0 && PWM_MISC_TYPE(pchip2)){
        if(pchip2->rtk_polarity == 1)
            rtk_pwm_force_mode_w(pchip2,PWM_FORCE_HIGH);
        else
            rtk_pwm_force_mode_w(pchip2,PWM_FORCE_LOW);
    }
    else{
        rtk_pwm_force_mode_w(pchip2,PWM_NON_FORCE);
        rtk_pwm_duty_w(pchip2,pchip2->rtk_duty);
    }
    if( m_ioctl_printk_get() > 0 )
        PWM_ERR("SET %s DUTY param_val:%d\n",pchip2->nodename,param->val);

    return 0;
}

void rtk_pwm_duty_param_get(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    int duty = rtk_pwm_duty_r(pchip2);
    int duty_max = pchip2->rtk_duty_max;
    int totalcnt = rtk_pwm_totalcnt_r(pchip2);
    pchip2->rtk_duty = rtk_pwm_duty_get(duty,duty_max,totalcnt);

    param->val = pchip2->rtk_duty;

    if( m_ioctl_printk_get() > 0 )
        PWM_WARN("GET %s DUTY param_val:%d\n",pchip2->nodename,param->val);
}

int rtk_pwm_totalcnt_param_set(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->rtk_totalcnt = param->val;
    rtk_pwm_totalcnt_w(pchip2,pchip2->rtk_totalcnt);
    if( m_ioctl_printk_get() > 0 )
        PWM_WARN("SET %s TOTALCNT param_val:%d\n",pchip2->nodename,param->val);

    return 0;
}

void rtk_pwm_totalcnt_param_get(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->rtk_totalcnt = rtk_pwm_totalcnt_r(pchip2);
    param->val = pchip2->rtk_totalcnt;

    if( m_ioctl_printk_get() > 0 )
        PWM_WARN("GET %s TOTALCNT param_val:%d\n",pchip2->nodename,param->val);
}

int rtk_pwm_vsync_param_set(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    if((param->val != 0) && (param->val != 1)){
        PWM_ERR("SET %s VSYNC INVALID param_val:%d\n",pchip2->nodename,param->val);
        return (-PWM_VSYNC_INVALID);
    }
    pchip2->rtk_vsync = param->val;
    rtk_pwm_vsync_w(pchip2,pchip2->rtk_vsync);
    if( m_ioctl_printk_get() > 0 )
        PWM_WARN("SET %s VSYNC param_val:%d\n",pchip2->nodename,param->val);

    return 0;
}

void rtk_pwm_vsync_param_get(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->rtk_vsync = rtk_pwm_vsync_r(pchip2);
    param->val = pchip2->rtk_vsync;

    if( m_ioctl_printk_get() > 0 )
        PWM_WARN("GET %s VSYNC param_val:%d\n",pchip2->nodename,param->val);
}

int rtk_pwm_output_param_set(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    if((param->val != 0) && (param->val != 1)){
        PWM_ERR("SET %s OUTPUT INVALID param_val:%d\n",pchip2->nodename,param->val);
        return (-PWM_OUTPUT_INVALID);
    }

    pchip2->rtk_enable = param->val;
    rtk_pwm_output_w(pchip2,pchip2->rtk_enable);

    if( m_ioctl_printk_get() > 0 )
        PWM_WARN("SET %s OUTPUT param_val:%d\n",pchip2->nodename,param->val);

    return 0;
}

void rtk_pwm_output_param_get(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->rtk_enable = rtk_pwm_output_r(pchip2);
    param->val = pchip2->rtk_enable;

    if( m_ioctl_printk_get() > 0 )
        PWM_WARN("GET %s OUTPUT param_val:%d\n",pchip2->nodename,param->val);
}

int rtk_pwm_vs_delay_param_set(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    if((param->val < 0) || (param->val > pchip2->rtk_totalcnt)){
        PWM_ERR("SET %s  VSYNC_DELAY INVALID param_val:%d\n",pchip2->nodename,param->val);
        return (-PWM_VSYNC_INVALID);
    }

    pchip2->rtk_pos_start = param->val;
    get_v_delay(pchip2);
    rtk_pwm_vs_delay_w(pchip2,pchip2->rtk_pos_start_clk);
    if( m_ioctl_printk_get() > 0 )
        PWM_ERR("SET %s VSYNC_DELAY param_val:%d\n",pchip2->nodename,param->val);

    return 0;
}

void rtk_pwm_vs_delay_param_get(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    //pchip2->rtk_pos_start_clk = rtk_pwm_vs_delay_r(pchip2);
    param->val = pchip2->rtk_pos_start;

    if( m_ioctl_printk_get() > 0 )
        PWM_ERR("GET %s VSYNC_DELAY param_val:%d\n",pchip2->nodename,param->val);
}

void rtk_pwm_vs_ineterval_param_set(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->rtk_vsync_interval = param->val;
    rtk_pwm_vsync_interval_w(pchip2,pchip2->rtk_vsync_interval);
}

void rtk_pwm_vs_ineterval_param_get(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->rtk_vsync_interval = rtk_pwm_vsync_interval_r(pchip2);
    param->val = pchip2->rtk_vsync_interval;

}

void rtk_pwm_mpluse_param_set(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->rtk_mPlus = param->val;
    rtk_pwm_mpluse_w(pchip2,pchip2->rtk_mPlus);

}

void rtk_pwm_mpluse_param_get(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->rtk_mPlus = rtk_pwm_mpluse_r(pchip2);
    param->val = pchip2->rtk_mPlus;

}

void rtk_pwm_cycle_max_param_set(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->cycle_max = param->val;
    rtk_pwm_cycle_max_w(pchip2,pchip2->cycle_max);
}

void rtk_pwm_cycle_max_param_get(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->cycle_max = rtk_pwm_cycle_max_r(pchip2);
    param->val = pchip2->cycle_max;
}

void rtk_pwm_force_mode_param_set(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->force_mode = param->val;
    rtk_pwm_force_mode_w(pchip2,pchip2->force_mode);

}

void rtk_pwm_force_mode_param_get(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    pchip2->force_mode = rtk_pwm_force_mode_r(pchip2);
    param->val = pchip2->force_mode;

}

int rtk_pwm_set_param_ex(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    int ret = PWM_SUCCESS;

    switch (param->id) {
        case PWM_PARAM_POLARITY:
            rtk_pwm_polarity_param_set(pchip2,param);
            break;
        case PWM_PARAM_FREQUENCY:
            rtk_pwm_frequency_param_set(pchip2,param);
            break;
        case PWM_PARAM_DUTY:
            rtk_pwm_duty_param_set(pchip2,param);
            break;
        case PWM_PARAM_VSYNC_RESET:
            rtk_pwm_vsync_param_set(pchip2,param);
            break;
        case PWM_PARAM_OUTPUT:
            rtk_pwm_output_param_set(pchip2,param);
            break;
        case PWM_PARAM_TOTALCNT:
            rtk_pwm_totalcnt_param_set(pchip2,param);
            break;
        case PWM_PARAM_VSYNC_DELAY:
            rtk_pwm_vs_delay_param_set(pchip2,param);
            break;
        case PWM_PARAM_VSYNC_INTERVAL:
            rtk_pwm_vs_ineterval_param_set(pchip2,param);
            break;
        case PWM_PARAM_MPLUS:
            rtk_pwm_mpluse_param_set(pchip2,param);
            break;
        case PWM_PARAM_CYCLE_MAX:
            rtk_pwm_cycle_max_param_set(pchip2,param);
            break;
        case PWM_PARAM_FORCE_MODE:
            rtk_pwm_force_mode_param_set(pchip2,param);
            break;
        default:
            ret = PWM_FAIL;
    }

    //DB Write
    rtk_pwm_db_wb(pchip2);

    return ret;
}

int rtk_pwm_get_param_ex(R_CHIP_T *pchip2,RTK_PWM_PARAM_EX_T* param)
{
    int ret = PWM_SUCCESS;

    switch (param->id) {
        case PWM_PARAM_POLARITY:
            rtk_pwm_polarity_param_get(pchip2,param);
            break;
        case PWM_PARAM_FREQUENCY:
            rtk_pwm_frequency_param_get(pchip2,param);
            break;
        case PWM_PARAM_DUTY:
            rtk_pwm_duty_param_get(pchip2,param);
            break;
        case PWM_PARAM_VSYNC_RESET:
            rtk_pwm_vsync_param_get(pchip2,param);
            break;
        case PWM_PARAM_OUTPUT:
            rtk_pwm_output_param_get(pchip2,param);
            break;
        case PWM_PARAM_TOTALCNT:
            rtk_pwm_totalcnt_param_get(pchip2,param);
            break;
        case PWM_PARAM_VSYNC_DELAY:
            rtk_pwm_vs_delay_param_get(pchip2,param);
            break;
        case PWM_PARAM_VSYNC_INTERVAL:
            rtk_pwm_vs_ineterval_param_get(pchip2,param);
            break;
        case PWM_PARAM_MPLUS:
            rtk_pwm_mpluse_param_get(pchip2,param);
            break;
        case PWM_PARAM_CYCLE_MAX:
            rtk_pwm_cycle_max_param_get(pchip2,param);
            break;
        case PWM_PARAM_FORCE_MODE:
            rtk_pwm_force_mode_param_get(pchip2,param);
	    break;
        default:
            ret = PWM_FAIL;
    }

    //DB Write
    rtk_pwm_db_wb(pchip2);

    return ret;
}

int rtk_pwm_set_all_param_ex(R_CHIP_T *pchip2,RTK_PWM_INFO_EX_T* param_info)
{
    int ret = PWM_SUCCESS;
    RTK_PWM_PARAM_EX_T param_all;
    strncpy(param_all.pcbname, param_info->pcbname, sizeof(param_info->pcbname)-1);
    //Set Polarity
    if((param_info->m_polarity != 0) && (param_info->m_polarity != 1)){
        PWM_ERR("SET %s  POLARITY INVALID param_val:%d\n",pchip2->nodename,param_info->m_polarity);
        return (-PWM_POLARITY_INVALID);
    }
    param_all.id = PWM_PARAM_POLARITY;
    param_all.val = param_info->m_polarity;
    //rtk_pwm_polarity_param_set(pchip2,&param_all);
    rtk_pwm_set_param_ex(pchip2,&param_all);

    //Set Frequency
    if((param_info->m_freq < 1) || (param_info->m_freq > MAX_PWM_FREQ)){
        PWM_ERR("SET %s FREQEUNCY INVALID param_val:%d\n",pchip2->nodename,param_info->m_freq);
        return (-PWM_FREQEUNCY_INVALID);
    }
    param_all.id = PWM_PARAM_FREQUENCY;
    param_all.val = param_info->m_freq;
    //rtk_pwm_frequency_param_set(pchip2,&param_all);
    rtk_pwm_set_param_ex(pchip2,&param_all);

    //Set Duty
    if(param_info->m_duty > pchip2->rtk_duty_max){
        PWM_ERR("SET %s  DUTY INVALID param_val:%d\n",pchip2->nodename,param_info->m_duty);
        return (-PWM_DUTY_INVALID);
    }
    param_all.id = PWM_PARAM_DUTY;
    param_all.val = param_info->m_duty;
    //rtk_pwm_duty_param_set(pchip2,&param_all);
    rtk_pwm_set_param_ex(pchip2,&param_all);

    //Set Vsync
    if((param_info->m_vsync != 0) && (param_info->m_vsync != 1)){
        PWM_ERR("SET %s  VSYNC INVALID param_val:%d\n",pchip2->nodename,param_info->m_vsync);
        return (-PWM_VSYNC_INVALID);
    }
    param_all.id = PWM_PARAM_VSYNC_RESET;
    param_all.val = param_info->m_vsync;
    //rtk_pwm_vsync_param_set(pchip2,&param_all);
    rtk_pwm_set_param_ex(pchip2,&param_all);

    //Set Output
    if((param_info->m_run != 0) && (param_info->m_run != 1)){
        PWM_ERR("SET %s  OUTPUT INVALID param_val:%d\n",pchip2->nodename,param_info->m_run);
        return (-PWM_OUTPUT_INVALID);
    }
    param_all.id = PWM_PARAM_OUTPUT;
    param_all.val = param_info->m_run;
    //rtk_pwm_output_param_set(pchip2,&param_all);
    rtk_pwm_set_param_ex(pchip2,&param_all);

    //DB Write
    rtk_pwm_db_wb(pchip2);

    return ret;
}

int rtk_pwm_get_all_param_ex(R_CHIP_T *pchip2,RTK_PWM_INFO_EX_T* param_info)
{
    int ret = PWM_SUCCESS;
    RTK_PWM_PARAM_EX_T param_all;
    strncpy(param_all.pcbname, param_info->pcbname,sizeof(param_info->pcbname)-1);
    param_all.id = PWM_PARAM_POLARITY;
    rtk_pwm_polarity_param_get(pchip2,&param_all);
    param_info->m_polarity = param_all.val;

    param_all.id = PWM_PARAM_FREQUENCY;
    rtk_pwm_frequency_param_get(pchip2,&param_all);
    param_info->m_freq = param_all.val;

    param_all.id = PWM_PARAM_DUTY;
    rtk_pwm_duty_param_get(pchip2,&param_all);
    param_info->m_duty = param_all.val;

    param_all.id = PWM_PARAM_VSYNC_RESET;
    rtk_pwm_vsync_param_get(pchip2,&param_all);
    param_info->m_vsync = param_all.val;

    param_all.id = PWM_PARAM_OUTPUT;
    rtk_pwm_output_param_get(pchip2,&param_all);
    param_info->m_run = param_all.val;

    return ret;
}

int rtk_pwm_set_info(RTK_PWM_INFO_T* stpwminfo)
{
    unsigned long flags;
    int ret = PWM_SUCCESS;
    R_CHIP_T *pchip2 = NULL;
    RTK_PWM_PARAM_EX_T param;
    LOCK_RTK_PWM(&pwm_lock, flags);
    pchip2 = rtk_pwm_chip_get(stpwminfo->m_index);
    strncpy(param.pcbname, pchip2->pcbname, sizeof(pchip2->pcbname)-1);

    /*rtk_adapt_freq  base is 0.01hz*/
    pchip2->rtk_adapt_freq = rtk_pwm_get_adapt_freq(pchip2);
    rtk_pwm_user_setting(pchip2,stpwminfo);

    if(pchip2->rtk_adapt_freq != 0)
        get_v_delay(pchip2);

    /*set timing ctrl , freq */
    param.id = PWM_PARAM_FREQUENCY;
    param.val = pchip2->rtk_freq;
    rtk_pwm_set_param_ex(pchip2,&param);

    param.id = PWM_PARAM_VSYNC_INTERVAL;
    param.val = pchip2->rtk_vsync_interval;
    rtk_pwm_set_param_ex(pchip2,&param);

    /*set duty */
    param.id = PWM_PARAM_DUTY;
    param.val = pchip2->rtk_duty;
    rtk_pwm_set_param_ex(pchip2,&param);

    param.id = PWM_PARAM_TOTALCNT;
    param.val = pchip2->rtk_totalcnt;
    rtk_pwm_set_param_ex(pchip2,&param);

    /*set CTRL */
    param.id = PWM_PARAM_POLARITY;
    param.val = pchip2->rtk_polarity;
    rtk_pwm_set_param_ex(pchip2,&param);

    param.id = PWM_PARAM_OUTPUT;
    param.val = pchip2->rtk_enable;
    rtk_pwm_set_param_ex(pchip2,&param);

    param.id = PWM_PARAM_VSYNC_RESET;
    param.val = pchip2->rtk_vsync;
    rtk_pwm_set_param_ex(pchip2,&param);

    param.id = PWM_PARAM_MPLUS;
    param.val = (pchip2->rtk_mPlus & pchip2->rtk_adpt_en);
    rtk_pwm_set_param_ex(pchip2,&param);

    /*vsync delay*/
    param.id = PWM_PARAM_VSYNC_DELAY;
    param.val = pchip2->rtk_pos_start_clk;
    rtk_pwm_set_param_ex(pchip2,&param);

    /*set DB */
    rtk_pwm_db_wb(pchip2);

    UNLOCK_RTK_PWM(&pwm_lock, flags);
    if( m_ioctl_printk_get() > 0 ){
        PWM_WARN("%s set pwm[%d], duty=%d freq=%d lock=%d (pos=%d,%08x) adp = %d  adap_freq(base 0.01Hz)=%d mPlus=%d , tempFreq = %d \n",
        __func__ ,
        stpwminfo->m_index,
        pchip2->rtk_duty,
        pchip2->rtk_freq,
        pchip2->rtk_vsync,
        pchip2->rtk_pos_start,
        pchip2->rtk_pos_start_clk,
        pchip2->rtk_adpt_en,
        pchip2->rtk_adapt_freq,
        pchip2->rtk_mPlus,
        pchip2->rtk_freq_100times);
    }
    return ret;

}

void rtk_pwm_vsync_debug_testpin(int en)
{
    if(en ==1){
        PWM_WARN("Enable Vsync Test Pin !!\n");
        //Change Pin mux to test_bit14(GPIO114)
        rtd_part_outl(0xb8000890,7,4,0xE);
        //Debug_mux
        rtd_part_outl(0xb8028228,15,13,0x0);
        //Dispd_testpin_sel
        rtd_part_outl(0xb80282f4,5,0,0x4);
        //Apr_testpin_mux
        rtd_part_outl(0xb80008f8,23,20,0x0);
        //Testpin_mux
        rtd_part_outl(0xb80008f8,31,24,0x20);
    }
    else{
        PWM_WARN("Disable Vsync Test Pin !!\n");
        //Change Pin mux to PCMCIA PC_IOWR_N
        rtd_part_outl(0xb8000890,7,4,0x1);
    }
}
