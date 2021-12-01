#ifndef _RTK_KDR_EMCU_H_
#define _RTK_KDR_EMCU_H_

#include <mach/rtk_log.h>
#define DEV_NAME "EMCU"

/************************************************************************
 *  rtk log define
 ************************************************************************/
#define EMCU_EMERG(fmt, args...)      \
    rtd_printk( KERN_EMERG, DEV_NAME, fmt , ## args)

#define EMCU_ALERT(fmt, args...)   \
    rtd_printk( KERN_ALERT, DEV_NAME, fmt , ## args)

#define EMCU_CRIT(fmt, args...)   \
    rtd_printk( KERN_CRIT, DEV_NAME, fmt , ## args)

#define EMCU_ERR(fmt, args...)   \
    rtd_printk( KERN_ERR, DEV_NAME, fmt , ## args)

#define EMCU_WARNING(fmt, args...)   \
    rtd_printk( KERN_WARNING, DEV_NAME, fmt , ## args)

#define EMCU_NOTICE(fmt, args...)   \
    rtd_printk( KERN_NOTICE, DEV_NAME, fmt , ## args)

#define EMCU_INFO(fmt, args...)   \
    rtd_printk( KERN_INFO, DEV_NAME, fmt , ## args)

#define EMCU_DEBUG(fmt, args...)   \
    rtd_printk( KERN_DEBUG, DEV_NAME, fmt , ## args)


//------------------------------------------
// Definitions of Bits
//------------------------------------------
#define _ZERO                           (0x00)
#define _BIT0                           (0x01UL)
#define _BIT1                           (0x02UL)
#define _BIT2                           (0x04UL)
#define _BIT3                           (0x08UL)
#define _BIT4                           (0x10UL)
#define _BIT5                           (0x20UL)
#define _BIT6                           (0x40UL)
#define _BIT7                           (0x80UL)
#define _BIT8                           (0x0100UL)
#define _BIT9                           (0x0200UL)
#define _BIT10                          (0x0400UL)
#define _BIT11                          (0x0800UL)
#define _BIT12                          (0x1000UL)
#define _BIT13                          (0x2000UL)
#define _BIT14                          (0x4000UL)
#define _BIT15                          (0x8000UL)
#define _BIT16                          (0x00010000UL)
#define _BIT17                          (0x00020000UL)
#define _BIT18                          (0x00040000UL)
#define _BIT19                          (0x00080000UL)
#define _BIT20                          (0x00100000UL)
#define _BIT21                          (0x00200000UL)
#define _BIT22                          (0x00400000UL)
#define _BIT23                          (0x00800000UL)
#define _BIT24                          (0x01000000UL)
#define _BIT25                          (0x02000000UL)
#define _BIT26                          (0x04000000UL)
#define _BIT27                          (0x08000000UL)
#define _BIT28                          (0x10000000UL)
#define _BIT29                          (0x20000000UL)
#define _BIT30                          (0x40000000UL)
#define _BIT31                          (0x80000000UL)

#define SHT_KEYPAD      0
#define SHT_CEC         1
#define SHT_PPS         2
#define SHT_WUT         3
#define SHT_WUT_SEC     3
#define SHT_IRDA        4
#define SHT_PWEN        5
#define SHT_STM         7

#define SHT_WOW         6       // use bit0; index bit[24]
#define SHT_MHL         6       // use bit1; index bit[25]
#define SHT_UART        6       // use bit3; index bit[27]

#define loc_wut_sec     (4*SHT_WUT_SEC)
#define loc_keypad      (4*SHT_KEYPAD)
#define loc_cec         (4*SHT_CEC)
#define loc_pps         (4*SHT_PPS)
#define loc_wut         (4*SHT_WUT)
#define loc_irda        (4*SHT_IRDA)
#define loc_pwen        (4*SHT_PWEN)

#define loc_wow         (4*SHT_WOW) // use bit0
#define loc_mhl         (4*SHT_MHL) // use bit1
#define loc_uart        (4*SHT_UART)    // use bit3

/*
 modify size of stm information from 4bits to 2bits.
 Add loc_rtc for RTC wakeup func at bit30, confirm with weihao.
 bit31 for reserved
 */
#define SHT_RTC         SHT_STM     //use bit2
#define SHT_REV         SHT_STM     //use bit3
#define loc_stm         (4*SHT_STM) //use bit0,1, index bit[28:29]
#define loc_rtc         (4*SHT_STM) //use bit2, index bit30
#define loc_wov         (4*SHT_STM) //use bit3, index bit31

#define SHT_GPIO_ADR    0
#define SHT_GPIO_BIT    8
#define SHT_GPIO_IVR    16
#define SHT_GPIO_TYP    20

#define RTD_SHARE_MEM_LEN       32

#define RTD_SHARE_MEM_BASE      0xb8060500
#define PM_EVENT_MSG            RTD_SHARE_MEM_BASE

#define PARAM_LEN_KEYPAD        10
#define PARAM_LEN_PPS           1
#define PARAM_LEN_WUT           1
#define PARAM_LEN_WUT_SEC       1
#ifdef CONFIG_TV030_PLATFORM
#define PARAM_LEN_IRDA          13
#else
#define PARAM_LEN_IRDA          8
#endif
#define PARAM_LEN_PWEN          3
#define PARAM_LEN_WOW           6   //server IP/MAC; host IP/MAC

#define PARAM_LEN_TDUR          2
#define PARAM_LEN_WK_SOR        1
#define PARAM_LEN_WK_STS        1

#define IDX_REG_INDEX           (0)     //reg0 for index
#define IDX_REG_KEYPAD          (1)     //reg1~10
#define IDX_REG_PPS             (11)    //reg11
#define IDX_REG_WUT             (12)    //reg12
#define IDX_REG_WUT_SEC         (12)    //reg12; IDX_REG_WUT_SEC use reg12 too;
                                        //       because we don't need to save min&sec at the same time;
#ifdef CONFIG_TV030_PLATFORM
#define IDX_REG_IRDA            (13)    //reg13~25; TV006 needed 12 sets of IRDA key to wake up.
#define IDX_REG_WIFI_DG         (26)    //reg26
#define IDX_REG_DC_OFF_TIMEOUT  (27)    //reg27
#define IDX_REG_LED_CTL         (28)    //reg28
#else
/* default for TV001 */
#define IDX_REG_IRDA            (13)    //reg13~20
#define IDX_REG_WIFI_DG         (21)    //reg21
#define IDX_REG_DC_OFF_TIMEOUT  (22)    //reg22
/* reserve reg23~28 */
#endif

#define IDX_REG_PWEN            (29)    //reg29~31
#define IDX_REG_WOW             (32)    //reg32~37
#define IDX_REG_WCHKSUM         (38)    //share with IDX_REG_WOW_3 high word

//backward counting
#define IDX_REG_TIME_DUR        (RTD_SHARE_MEM_LEN-PARAM_LEN_TDUR)  //reg30~31
#define IDX_REG_WK_SOR          (IDX_REG_TIME_DUR-PARAM_LEN_WK_SOR) //reg29
#define IDX_REG_WK_STS          (IDX_REG_WK_SOR-PARAM_LEN_WK_STS)   //reg28
#define IDX_REG_CUR_TIME        IDX_REG_PPS                         //reg11 <==this location share with PPS

#define SET_KEYPAD_PARM_H(parm)     (rtd_outl(RTD_SHARE_MEM_BASE+4*IDX_REG_KEYPAD,parm))
#define SET_KEYPAD_PARM_L(parm)     (rtd_outl(RTD_SHARE_MEM_BASE+4*(IDX_REG_KEYPAD+1),parm))
#define SET_KEYPAD_PARM_E(parm)     (rtd_outl(RTD_SHARE_MEM_BASE+4*(IDX_REG_KEYPAD+2),parm))
#define SET_KEYPAD_PARM(num,parm)   (rtd_outl(RTD_SHARE_MEM_BASE+4*(IDX_REG_KEYPAD+num),parm))
#define GET_KEYPAD_PARM(num)        (rtd_inl(RTD_SHARE_MEM_BASE+4*(IDX_REG_KEYPAD+num)))
#define GET_PPS_PARM()              (rtd_inl(RTD_SHARE_MEM_BASE +4*IDX_REG_PPS) & 0x000000FF)
#define GET_CUR_TIME()              (rtd_inl(RTD_SHARE_MEM_BASE +(4*IDX_REG_PPS)) & 0xFFFFFF00)
#define SET_PPS_PARM(parm)          (rtd_outl(RTD_SHARE_MEM_BASE+(4*IDX_REG_PPS),(GET_CUR_TIME()|(parm & 0x000000FF))))
#define SET_CUR_TIME(parm)          (rtd_outl(RTD_SHARE_MEM_BASE+4*IDX_REG_PPS,((parm & 0xFFFFFF00)|GET_PPS_PARM())))
#define SET_WUT_PARM(parm)          (rtd_outl(RTD_SHARE_MEM_BASE+4*IDX_REG_WUT,parm))
#define SET_WUT_PARM_SEC(parm)      (rtd_outl(RTD_SHARE_MEM_BASE+4*IDX_REG_WUT_SEC,parm))
#define GET_WUT_PARM()              (rtd_inl(RTD_SHARE_MEM_BASE+4*IDX_REG_WUT))
#define SET_IRDA_PARM(num,parm)     (rtd_outl(RTD_SHARE_MEM_BASE+4*(IDX_REG_IRDA+num),parm))
#define GET_IRDA_PARM(num)          (rtd_inl(RTD_SHARE_MEM_BASE+4*(IDX_REG_IRDA+num)))
#define SET_WIFI_DG_PARM(parm)      (rtd_outl(RTD_SHARE_MEM_BASE+4*(IDX_REG_WIFI_DG),parm))
#define GET_WIFI_DG_PARM()          (rtd_inl(RTD_SHARE_MEM_BASE+4*(IDX_REG_WIFI_DG)))
#define SET_PWEN_PARM(num,parm)     (rtd_outl(RTD_SHARE_MEM_BASE+4*(IDX_REG_PWEN+num),parm))
#define GET_PWEN_PARM(num)          (rtd_inl(RTD_SHARE_MEM_BASE+4*(IDX_REG_PWEN+num)))

#define CHK_KEYPAD(num)             (num&0xf)
#define CHK_CEC(num)                ((num>>loc_cec)&0xf)
#define CHK_PPS(num)                ((num>>loc_pps)&0xf)
#define CHK_STM(num)                ((num>>loc_stm)&0xf)
#define CHK_WUT(num)                (((num>>loc_wut)&0xf)
#define CHK_IRDA(num)               ((num>>loc_irda)&0xf)
#define CHK_PWEN(num)               ((num>>loc_pwen)&0xf)
#define CHK_WOW(num)                ((num>>loc_wow)&0xf)

#define SET_SVER_IP(parm)           (rtd_outl(RTD_SHARE_MEM_BASE+4*(IDX_REG_WOW+0), \
                                        (*(parm+0)<<24)|(*(parm+1)<<16)|(*(parm+2)<<8)|(*(parm+3))))

#define SET_HOST_IP(parm)           (rtd_outl(RTD_SHARE_MEM_BASE+4*(IDX_REG_WOW+1), \
                                        (*(parm+0)<<24)|(*(parm+1)<<16)|(*(parm+2)<<8)|(*(parm+3))))
#define SET_SVER_MAC(parm)          \
    (rtd_outl(RTD_SHARE_MEM_BASE+4*(IDX_REG_WOW+2), \
        (*(parm+0)<<24)|(*(parm+1)<<16)|(*(parm+2)<<8)|(*(parm+3))));   \
    (rtd_outl(RTD_SHARE_MEM_BASE+4*(IDX_REG_WOW+3), \
        (rtd_inl(RTD_SHARE_MEM_BASE+4*(IDX_REG_WOW+3))&0xffff0000) | \
            (*(parm+4)<<8)|(*(parm+5))))

#define SET_HOST_MAC(parm)          \
    (rtd_outl(RTD_SHARE_MEM_BASE+4*(IDX_REG_WOW+4), \
        (*(parm+0)<<24)|(*(parm+1)<<16)|(*(parm+2)<<8)|(*(parm+3))));   \
    (rtd_outl(RTD_SHARE_MEM_BASE+4*(IDX_REG_WOW+5), \
        (rtd_inl(RTD_SHARE_MEM_BASE+4*(IDX_REG_WOW+3))&0xffff0000) | \
            (*(parm+4)<<8)|(*(parm+5))))

#define REG_WCHKSUM                 (RTD_SHARE_MEM_BASE+(4*IDX_REG_WCHKSUM))
#define SET_WOW_CHKSUM(val)         (rtd_outl(REG_WCHKSUM, \
                                            (rtd_inl(REG_WCHKSUM)& 0x0000ffffUL) | val<<16 ))
#define GET_EVENT_MSG()             rtd_inl(PM_EVENT_MSG)
#define SET_EVENT_MSG(msg)          rtd_outl(PM_EVENT_MSG,msg)
#define SET_EVENT_IDX(msg,loc,idx)  (msg = ((msg & ~(0xf<<loc))|((idx & 0xf)<<loc)))

#define GET_TIME_DUR(x,y)           x = rtd_inl(RTD_SHARE_MEM_BASE+4*IDX_REG_TIME_DUR); \
                                    y = rtd_inl(RTD_SHARE_MEM_BASE+4*(IDX_REG_TIME_DUR+1))

#define GET_WK_SOR()                rtd_inl(RTD_SHARE_MEM_BASE+4*IDX_REG_WK_SOR)
#define GET_WK_STS()                rtd_inl(RTD_SHARE_MEM_BASE+4*IDX_REG_WK_STS)

/*
Note
WAKE_UP_T define at \rtk_kdriver\include\rtk_kdriver\rtk_emcu_export.h
*/


/* API for device driver to check if IP should keep alive while suspend */
/* for suspend event; emcu_suspend_event */
#define CEC_EVENT_SHT       0
#define PPS_EVENT_SHT       1
#define IRDA_EVENT_SHT      2
#define LSADC_EVENT_SHT     3
#define GPIO_EVENT_SHT      4
#define WOV_EVENT_SHT       5
#define NET_EVENT_SHT       6

#define CEC_SSP_EVENT       BIT(CEC_EVENT_SHT)
#define PPS_SSP_EVENT       BIT(PPS_EVENT_SHT)
#define IRDA_SSP_EVENT      BIT(IRDA_EVENT_SHT)
#define LSADC_SSP_EVENT     BIT(LSADC_EVENT_SHT)
#define GPIO_SSP_EVENT      BIT(GPIO_EVENT_SHT)
#define WOV_SSP_EVENT       BIT(WOV_EVENT_SHT)
#define WOL_SSP_EVENT       BIT(NET_EVENT_SHT+0)
#define WOW_SSP_EVENT       BIT(NET_EVENT_SHT+1)
#define WIFI_SSP_EVENT      BIT(NET_EVENT_SHT+2)

/* general reg setting */
#define REG_MAGIC_51                0xb8060110
#define REG_8051_TICK               0xb8060114
#define REG_SCPU_TICK               0xb8060118

/* 8051 magic event */
#define MAGIC_8051                  0x2379beef  /* 8051 is runing but counting RTC only. setting by 8051 only.*/
#define WAKE_8051                   0x9021affe  /* send message to 8051,let 8051 wakeup and handle standby status.. */
#define CHECK_8051                   0           /* set magic reg of 8051 to zero then check 8051 is runing. */

#define GET_MAGIC_PARM()            rtd_inl(REG_MAGIC_51)
#define SET_MAGIC_PARM(num)         rtd_outl(REG_MAGIC_51,num)

#define CHK_KEYPAD(num)             (num&0xf)
#define CHK_CEC(num)                ((num>>loc_cec)&0xf)
#define CHK_PPS(num)                ((num>>loc_pps)&0xf)
#define CHK_STM(num)                ((num>>loc_stm)&0xf)
#define CHK_WUT(num)                (((num>>loc_wut)&0xf)
#define CHK_IRDA(num)               ((num>>loc_irda)&0xf)
#define CHK_PWEN(num)               ((num>>loc_pwen)&0xf)
#define CHK_WOW(num)                ((num>>loc_wow)&0xf)

#define STM_NOEMAL      1
#define STM_WAKEUP      2

/* For HW error status report */
#define HW_ERR_STA  (0xbaad0000)

extern u32 emcu_CEC_event(void);
extern u32 emcu_PPS_event(void);
extern u32 emcu_IRDA_event(void);
extern u32 emcu_LSADC_event(void);
extern u32 emcu_GPIO_event(void);
extern u32 emcu_NET_event(void);
extern u32 emcu_WOL_event(void);

#endif


