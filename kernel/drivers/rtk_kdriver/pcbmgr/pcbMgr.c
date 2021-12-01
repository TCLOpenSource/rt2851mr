#include <linux/module.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/miscdevice.h>
#include <linux/init.h>
#include <linux/ioport.h>
#include <linux/kfifo.h>
#include <linux/fs.h>
#include <linux/poll.h>
#include <linux/bitops.h>
#include <linux/io.h>
#include <linux/ioctl.h>
#include <linux/signal.h>
#include <linux/interrupt.h>
#include <linux/jiffies.h>
#include <linux/device.h>
#include <linux/platform_device.h>
#include <linux/device.h>
#include <linux/string.h>
#include <rtk_kdriver/rtk_gpio.h>
#include <rtk_kdriver/pcbMgr.h>

int rtk_SetIOPinDirection(unsigned long long pininfo, unsigned int value)
{
#ifdef CONFIG_RTK_KDRV_GPIO
    PCB_PIN_TYPE_T pintype;
    RTK_GPIO_ID s_gpio;
    int pinindex = 0;
    int pinparam1 = 0, pinparam2 = 0, pinparam3 = 0;
    if (value != 0x0 && value != 0x1)
    {
        RTK_GPIO_WARNING("[%s] unsupported value = 0x%08x.\n",
            __func__ , value);
        return -1;
    }

    pintype = GET_PIN_TYPE(pininfo);
    pinindex = GET_PIN_INDEX(pininfo);
    RTK_IO_P("[%s] pin=0x%llx value=0x%x, type=%08x, index=%d\n",
        __func__ , (unsigned int)pininfo, value, pintype, pinindex);

    switch (pintype) {
    case PCB_PIN_TYPE_UNUSED:
        return 0;
    case PCB_PIN_TYPE_LSADC:
    case PCB_PIN_TYPE_EMCU_GPIO:
        RTK_GPIO_WARNING("[%s] Function isn't support(%x).\n",
            __func__ , (unsigned int)pininfo);
        return -1;
    case PCB_PIN_TYPE_GPIO:
        {
            pinparam1 = GET_GPIO_TYPE(pininfo);
            pinparam2 = GET_GPIO_INVERT(pininfo);
            pinparam3 = GET_GPIO_INIT_VALUE(pininfo);
            RTK_IO_P("[GPIO-MISC][%s] param1 0x%x param2 0x%x param3 0x%x\n",
                __func__ , pinparam1, pinparam2, pinparam3);
            if (pinparam1 == PCB_GPIO_TYPE_INPUT && value != 0)
            {
                RTK_GPIO_DBG("[GPIO-MISC][%s][PCB_PIN_TYPE_GPIO] Input-Only pin %d is configured to output.\n",
                    __func__ , pinindex);
            }
            else if (pinparam1 == PCB_GPIO_TYPE_OUPUT && value != 1)
            {
                RTK_GPIO_DBG("[GPIO-MISC][%s][PCB_PIN_TYPE_GPIO] Output-Only pin %d is configured config to input.\n",
                    __func__ , pinindex);
            }else if (pinparam1 >= PCB_GPIO_TYPE_UNDEF)
            {
                RTK_GPIO_WARNING ("[GPIO-MISC] wrong GPIO type\n");
				return -1;
            }
            s_gpio = rtk_gpio_id(MIS_GPIO, pinindex);
            rtk_gpio_set_dir(s_gpio, value);
            RTK_IO_P("[GPIO-MISC][%s] config pin %d to %d.\n",
                __func__ , pinindex, (int)value);
            return 0;
        }
    case PCB_PIN_TYPE_ISO_GPIO:
        {
            pinparam1 = GET_GPIO_TYPE(pininfo);
            pinparam2 = GET_GPIO_INVERT(pininfo);
            pinparam3 = GET_GPIO_INIT_VALUE(pininfo);
            RTK_IO_P("[GPIO-ISO][%s] param1 0x%x param2 0x%x param3 0x%x\n",
                __func__, pinparam1, pinparam2, pinparam3);
            if (pinparam1 == PCB_GPIO_TYPE_INPUT && value != 0)
            {
                RTK_GPIO_DBG("[GPIO-ISO][%s][PCB_PIN_TYPE_GPIO] Input-Only pin %d is configured to output.\n",
                    __func__ , pinindex);
            }
            else if (pinparam1 == PCB_GPIO_TYPE_OUPUT&& value != 1)
            {
                RTK_GPIO_DBG("[GPIO-ISO][%s][PCB_PIN_TYPE_GPIO] Output-Only pin %d is configured to input.\n",
                    __func__ , pinindex);
            }
            else if (pinparam1 >= PCB_GPIO_TYPE_UNDEF)
            {
                RTK_GPIO_WARNING("[GPIO-ISO] wrong GPIO type\n");
                return -1;
            }
            s_gpio = rtk_gpio_id(ISO_GPIO, pinindex);
            rtk_gpio_set_dir(s_gpio, value);
            RTK_IO_P("[GPIO-ISO][%s] config pin %d to %d.\n",
                __func__ , pinindex, (int)value);
            return 0;
        }
    case PCB_PIN_TYPE_ISO_UNIPWM:
    case PCB_PIN_TYPE_UNIPWM:
#if 0
        if (pintype == PCB_PIN_TYPE_UNIPWM)
            unipwm_set(pinindex, value);
        else
            iso_unipwm_set(pinindex, value);

        break;
#endif
    case PCB_PIN_TYPE_PWM:
    case PCB_PIN_TYPE_ISO_PWM:
#if 0
        {
            if (pintype == PCB_PIN_TYPE_PWM)
                pwm_set(pinindex, value);
            else
                iso_pwm_set(pinindex, value);

        }
#endif
        break;
    case PCB_PIN_TYPE_AUDIO:
        {
			RTK_GPIO_WARNING("[%s] AUDIO PIN unsupported.\n",__func__);
			break;
        }
    default:
		RTK_GPIO_WARNING("[%s] Error, unkown type.\n", __func__);
		return -1;
    }
#endif
    return -1;
}

EXPORT_SYMBOL(rtk_SetIOPinDirection);

int rtk_GetIOPinDirection(unsigned long long pininfo)
{
#ifdef CONFIG_RTK_KDRV_GPIO
    PCB_PIN_TYPE_T pintype;
    RTK_GPIO_ID s_gpio;
    int pinindex = 0;

    pintype = GET_PIN_TYPE(pininfo);
    pinindex = GET_PIN_INDEX(pininfo);

    switch (pintype) {
    case PCB_PIN_TYPE_LSADC:
    case PCB_PIN_TYPE_UNIPWM:
    case PCB_PIN_TYPE_ISO_UNIPWM:
    case PCB_PIN_TYPE_PWM:
    case PCB_PIN_TYPE_ISO_PWM:
    case PCB_PIN_TYPE_EMCU_GPIO:
    case PCB_PIN_TYPE_AUDIO:
        RTK_GPIO_WARNING("[%s] Function isn't support(%x).\n", __func__ , (unsigned int)pininfo);
        return -1;
    case PCB_PIN_TYPE_GPIO:
        s_gpio = rtk_gpio_id(MIS_GPIO, pinindex);
        return rtk_gpio_get_dir(s_gpio);
    case PCB_PIN_TYPE_ISO_GPIO:
        s_gpio = rtk_gpio_id(ISO_GPIO, pinindex);
        return rtk_gpio_get_dir(s_gpio);
    case PCB_PIN_TYPE_UNUSED:
        return 0;
    default:
        RTK_GPIO_WARNING("[%s] Error, unkown type.\n", __func__);
        return -1;
    }
    return -1;
#else
	return -1;
#endif
}

EXPORT_SYMBOL(rtk_GetIOPinDirection);


int rtk_SetIOPin(unsigned long long pininfo, unsigned int value)
{
#ifdef CONFIG_RTK_KDRV_GPIO
    PCB_PIN_TYPE_T pintype;
    RTK_GPIO_ID s_gpio;
    int pinindex = 0;
    int ret = 0;

    if (rtk_GetIOPinDirection(pininfo) != 0x1)
    {
        RTK_GPIO_WARNING("[%s] set pin 0x%08X error , pinType = %d , pinIndex = %d, this pin isn't output pin.\n",
             __func__ , (unsigned int)pininfo ,GET_PIN_TYPE(pininfo) ,  GET_PIN_INDEX(pininfo) );
        return -1;
    }
    pintype = GET_PIN_TYPE(pininfo);
    pinindex = GET_PIN_INDEX(pininfo);
    switch (pintype) {
    case PCB_PIN_TYPE_LSADC:
    case PCB_PIN_TYPE_UNIPWM:
    case PCB_PIN_TYPE_ISO_UNIPWM:
    case PCB_PIN_TYPE_PWM:
    case PCB_PIN_TYPE_ISO_PWM:
    case PCB_PIN_TYPE_EMCU_GPIO:
    case PCB_PIN_TYPE_AUDIO:
        RTK_GPIO_WARNING("[%s] Function isn't support(0x%X).\n",
                    __func__ , (unsigned int)pininfo);
        return -1;
    case PCB_PIN_TYPE_GPIO:
        s_gpio = rtk_gpio_id(MIS_GPIO, pinindex);
        ret = rtk_gpio_output(s_gpio, value);
        if (ret != 0)
        {
            RTK_GPIO_WARNING("[%s] set MIS GPIO %d error.\n",
                     __func__ , pinindex);
            return -1;
        }
        return 0;
    case PCB_PIN_TYPE_ISO_GPIO:
        s_gpio = rtk_gpio_id(ISO_GPIO, pinindex);
        ret = rtk_gpio_output(s_gpio, value);
        if (ret != 0)
        {
            RTK_GPIO_WARNING("[%s] set ISO GPIO %d error.\n",
                     __func__ , pinindex);
            return -1;
        }
        return 0;
    case PCB_PIN_TYPE_UNUSED:
        return 0;
    default:
        RTK_GPIO_WARNING("[%s] Error, unkown type.\n", __func__);
        return -1;
    }
    return -1;
#else
	return -1;
#endif
}

EXPORT_SYMBOL(rtk_SetIOPin);

int rtk_GetIOPin(unsigned long long pininfo)
{
#ifdef CONFIG_RTK_KDRV_GPIO
    PCB_PIN_TYPE_T pintype;
    RTK_GPIO_ID s_gpio;
    int pinindex = 0;

    if (rtk_GetIOPinDirection(pininfo) != 0x0)
    {
        RTK_GPIO_WARNING("[GPIO][%s] get pin %08x error, this pin isn't input pin.\n",
             __func__ , (unsigned int)pininfo);
        return -1;
    }

    pintype = GET_PIN_TYPE(pininfo);
    pinindex = GET_PIN_INDEX(pininfo);

    switch (pintype) {
    case PCB_PIN_TYPE_LSADC:
    case PCB_PIN_TYPE_UNIPWM:
    case PCB_PIN_TYPE_ISO_UNIPWM:
    case PCB_PIN_TYPE_PWM:
    case PCB_PIN_TYPE_ISO_PWM:
    case PCB_PIN_TYPE_EMCU_GPIO:
    case PCB_PIN_TYPE_AUDIO:
        RTK_GPIO_WARNING("[%s] Function isn't support(%x).\n",
                    __func__ , (unsigned int)pininfo);
        return -1;
    case PCB_PIN_TYPE_GPIO:
        s_gpio = rtk_gpio_id(MIS_GPIO, pinindex);
        return rtk_gpio_input(s_gpio);
    case PCB_PIN_TYPE_ISO_GPIO:
        s_gpio = rtk_gpio_id(ISO_GPIO, pinindex);
        return rtk_gpio_input(s_gpio);
    case PCB_PIN_TYPE_UNUSED:
        return 0;
    default:
        RTK_GPIO_WARNING("[%s] Error, unkown type.\n", __func__);
        return -1;
    }
    return -1;
#else
	return -1;
#endif
}

EXPORT_SYMBOL(rtk_GetIOPin);




/* API (porting from AP layer) */

#if 0
/*
  * Function: IO_PWM_SetFreq
  *
  * Description:
  *         given some "PIN_XX"'s value then setup pwm frequency
  *
  *   param:
  *        pin : the value corresponding to some "PIN_XXX"
  *        freq_hz: PWM frequency
  * return :   -1 : means unkwon pin type ...
  *         0: success
  *
*/
int IO_PWM_SetFreq(unsigned long long pin, int freq_hz)
{
    PCB_PIN_TYPE_T type;
    int index;
    int param1, param2, param3, param4, param5;
    type = GET_PIN_TYPE(pin);
    index = GET_PIN_INDEX(pin);
    switch (type) {

    case PCB_PIN_TYPE_ISO_UNIPWM:
    case PCB_PIN_TYPE_UNIPWM:
        {
            param1 = GET_UNIPWM_INVERT(pin);
            param3 = GET_UNIPWM_DUTY_MAX(pin);
            param4 = GET_UNIPWM_INIT_DUTY(pin);
            param5 = GET_UNIPWM_PWM_NUM(pin);
            if (type == PCB_PIN_TYPE_UNIPWM) {
                unipwm_init(index, param5, freq_hz, param3,
                        param4, param1);
            } else {
                iso_unipwm_init(index, param5, freq_hz, param3,
                        param4, param1);
            }
        }
        break;
    case PCB_PIN_TYPE_PWM:
    case PCB_PIN_TYPE_ISO_PWM:
        {
            param1 = GET_PWM_INVERT(pin);
            param3 = GET_PWM_DUTY_MAX(pin);
            param4 = GET_PWM_INIT_DUTY(pin);
            if (type == PCB_PIN_TYPE_PWM) {
                pwm_init(index, freq_hz, param3, param4,
                     param1);
            } else {
                iso_pwm_init(index, freq_hz, param3, param4,
                         param1);
            }

        }
        break;

    case PCB_PIN_TYPE_UNUSED:
        return 0;
    case PCB_PIN_TYPE_LSADC:
    case PCB_PIN_TYPE_EMCU_GPIO:
    case PCB_PIN_TYPE_GPIO:
    case PCB_PIN_TYPE_ISO_GPIO:
        break;
    default:
        break;

    }

    return 0;

}

int IO_PWM_SetFreq1(unsigned long long pin, int freq_hz)
{
    PCB_PIN_TYPE_T type;
    int index;
    int param1, param2, param3, param4, param5;
    type = GET_PIN_TYPE(pin);
    index = GET_PIN_INDEX(pin);
    
    switch (type) {        
    case PCB_PIN_TYPE_ISO_UNIPWM:
    case PCB_PIN_TYPE_UNIPWM:
        {
            param1 = GET_UNIPWM_INVERT(pin);
            param3 = GET_UNIPWM_DUTY_MAX(pin);
            param4 = GET_UNIPWM_INIT_DUTY(pin);
            param5 = GET_UNIPWM_PWM_NUM(pin);
            if (type == PCB_PIN_TYPE_UNIPWM) {
                unipwm_init(index, param5, freq_hz, param3,
                        param4, param1);
            } else {
                iso_unipwm_init(index, param5, freq_hz, param3,
                        param4, param1);
            }
        }
        break;
    case PCB_PIN_TYPE_PWM:
    case PCB_PIN_TYPE_ISO_PWM:
        {
            param1 = GET_PWM_INVERT(pin);
            param3 = GET_PWM_DUTY_MAX(pin);
            param4 = GET_PWM_INIT_DUTY(pin);
            if (type == PCB_PIN_TYPE_PWM) {
                pwm_init1(index, freq_hz, param3, param4,
                      param1);
            } else {
                iso_pwm_init(index, freq_hz, param3, param4,
                         param1);
            }

        }
        break;

    case PCB_PIN_TYPE_UNUSED:
        return 0;
    case PCB_PIN_TYPE_LSADC:
    case PCB_PIN_TYPE_EMCU_GPIO:
    case PCB_PIN_TYPE_GPIO:
    case PCB_PIN_TYPE_ISO_GPIO:
        break;
    default:
        break;

    }

    return 0;

}

/*
  * Function: IO_PWM_SetDuty
  *
  * Description:
  *         given some "PIN_XX"'s value then setup pwm duty
  *
  *   param:
  *        pin : the value corresponding to some "PIN_XXX"
  *             pin include duty_max function
  *        freq_hz: PWM frequency
  * return :   -1 : means unkwon pin type ...
  *         0: success
  *
*/

int IO_PWM_SetDuty(unsigned long long pin, int duty)
{

    PCB_PIN_TYPE_T type;
    int index;
    int param1, param2, param3, param4, param5;
    type = GET_PIN_TYPE(pin);
    index = GET_PIN_INDEX(pin);
    switch (type) {

    case PCB_PIN_TYPE_ISO_UNIPWM:
    case PCB_PIN_TYPE_UNIPWM:
        {
            if (type == PCB_PIN_TYPE_UNIPWM)
                unipwm_set(index, duty);
            else
                iso_unipwm_set(index, duty);

        }
        break;
    case PCB_PIN_TYPE_PWM:
    case PCB_PIN_TYPE_ISO_PWM:
        {
            if (type == PCB_PIN_TYPE_PWM)
                pwm_set(index, duty);
            else
                iso_pwm_set(index, duty);


        }
        break;

    case PCB_PIN_TYPE_UNUSED:
        return 0;
    case PCB_PIN_TYPE_LSADC:
    case PCB_PIN_TYPE_EMCU_GPIO:
    case PCB_PIN_TYPE_GPIO:
    case PCB_PIN_TYPE_ISO_GPIO:
        break;
    default:
        break;

    }

    return 0;
}

int IO_Direct_SetPWMFreq(char *enum_name, int freq_hz)
{
    unsigned long long info;
    if (pcb_mgr_get_enum_info_byname(enum_name, &info) == 0)
        IO_PWM_SetFreq(info, freq_hz);
}

int IO_Direct_SetPWMFreq1(char *enum_name, int freq_hz)
{
    unsigned long long info;
    if (pcb_mgr_get_enum_info_byname(enum_name, &info) == 0)
        IO_PWM_SetFreq1(info, freq_hz);
}

#endif



