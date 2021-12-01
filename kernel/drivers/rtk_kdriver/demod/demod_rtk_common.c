#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/delay.h>
#include <linux/firmware.h>
#include <linux/device.h>
#include <rtk_kdriver/rtk_crt.h>
#include <mach/io.h>
#include <asm/cacheflush.h>
#include "demod_rtk_common.h"
#include "comm.h"
#include "tv_osal.h"
//#include "ifd_analog.h"

//#include "demodrbus/sys_reg_reg.h"
//#include "demodrbus/ifd_108_reg.h"
#include "rbus/tv_sb1_ana_reg.h"
#include "rbus/dtv_frontend_reg.h"
#include "rbus/diseqc_reg.h"
//#include "rbus/img_demod_bus_reg.h"
//#include "rbus/demod_sd_reg.h"
//#include "demodcore/message_func_rtk.h"
#include "rbus/rtk_dtv_demod_8051_reg.h"
#include "rbus/dtv_demod_misc_reg.h"
#include "rbus/rtk_dtv_demod_sys_reg.h"
#include "rbus/hdic_register_bus_reg.h"
#include "rbus/stb_reg.h"

#include <linux/dma-mapping.h>
#include <linux/pageremap.h>

#include <tp/tp_def.h>
#include <tp/tp_drv_api.h>

RTK_DEMOD_MODE m_realtek_TvSys_mode;

unsigned char *pShareMemory = NULL;
unsigned long ShareMemoryPhysicalAddress;

#define DYNAMIC_MEM_ALLOCATE 0
#define TPO_DIVIDEND_CONSTANT 250*1000
#define TPO_DVISOR_CONSTANT   2
// Merlin4 Ver.A bring up
//#define MERLIN4_VER_A


/*------------------------------------------------------------------------------
 * Chip Initialization
 *------------------------------------------------------------------------------*/
//#define rtd_outl(addr, value)   pli_writeReg32(addr, value)
//#define rtd_inl(addr)           pli_readReg32(addr)
//#define rtd_maskl(addr, mask, value)    rtd_outl(addr, ((rtd_inl(addr) & mask) | value))

#define _BIT(x)       (1UL <<x)
#ifndef _BIT0
#define _BIT0          _BIT(0 )
#define _BIT1          _BIT(1 )
#define _BIT2          _BIT(2 )
#define _BIT3          _BIT(3 )
#define _BIT4          _BIT(4 )
#define _BIT5          _BIT(5 )
#define _BIT6          _BIT(6 )
#define _BIT7          _BIT(7 )
#define _BIT8          _BIT(8 )
#define _BIT9          _BIT(9 )
#define _BIT10         _BIT(10)
#define _BIT11         _BIT(11)
#define _BIT12         _BIT(12)
#define _BIT13         _BIT(13)
#define _BIT14         _BIT(14)
#define _BIT15         _BIT(15)
#define _BIT16         _BIT(16)
#define _BIT17         _BIT(17)
#define _BIT18         _BIT(18)
#define _BIT19         _BIT(19)
#define _BIT20         _BIT(20)
#define _BIT21         _BIT(21)
#define _BIT22         _BIT(22)
#define _BIT23         _BIT(23)
#define _BIT24         _BIT(24)
#define _BIT25         _BIT(25)
#define _BIT26         _BIT(26)
#define _BIT27         _BIT(27)
#define _BIT28         _BIT(28)
#define _BIT29         _BIT(29)
#define _BIT30         _BIT(30)
#define _BIT31         _BIT(31)
#endif

//#define REG_RTK_DEMOD_8051_SRAM_WRITE_EN 0xB807223C//Merlin3/Mac5p Demod 8051

//static int DtvDemodInit = 0;
static int DtvDemodReset = 0;
static int pli_ready = 0;
U32BITS RbusAddr = 0;
unsigned char TunerInputMode = 0;//DVBS Demod default use differential+normal mode

int DtvGetChipVersion()
{
	return 0;
}


int DtvGetICVersion()
{
	/*	int ICVersion;

		ICVersion =   STB_SC_VerID_get_vercode(rtd_inl(STB_SC_VerID_reg));

		if (ICVersion == 0x65570000)
			return 1;  //Version A
		else
			return 0;   //Version Unknow
	*/
	return 0;
}


int TvFrontendPowerControl(unsigned char On)
{
	if (On) {
		CRT_CLK_OnOff(TVFRONTEND, CLK_ON, NULL);
		RTK_DEMOD_INFO("demod is power on.\n");
	} else {
		CRT_CLK_OnOff(TVALL, CLK_OFF, NULL);
		RTK_DEMOD_INFO("demod is power down.\n");
		pli_ready = 0;
	}

	return FUNCTION_SUCCESS;
}


int DtvDemodEnable(RTK_DEMOD_MODE mode)
{
	//DTV Demod misc on fisrt then Demod IP
	CRT_CLK_OnOff(DTVDEMOD, CLK_ON, NULL);

	switch (mode) {
	case RTK_DEMOD_MODE_DVBT:
	case RTK_DEMOD_MODE_DVBT2:
		CRT_CLK_OnOff(DTVATB, CLK_ON, NULL);
		RTK_DEMOD_INFO("DtvDemodEnable to DVBT DVBT2\n");
		break;

	case RTK_DEMOD_MODE_DTMB:
		CRT_CLK_OnOff(DTVHDIC, CLK_ON, NULL);
		RTK_DEMOD_INFO("DtvDemodEnable to DTMB\n");
		break;

	case RTK_DEMOD_MODE_DVBC:
	case RTK_DEMOD_MODE_ISDB:
	case RTK_DEMOD_MODE_ATSC:
	case RTK_DEMOD_MODE_QAM:
		CRT_CLK_OnOff(DTVRTK, CLK_ON, NULL);
		RTK_DEMOD_INFO("DtvDemodEnable to DVBC ISDBT ATSC OC\n");
		break;

	case RTK_DEMOD_MODE_DVBS:
	case RTK_DEMOD_MODE_DVBS2:
	case RTK_DEMOD_MODE_DVBS2X:
	case RTK_DEMOD_MODE_SPEC_AN:
		CRT_CLK_OnOff(DISEQC, CLK_ON, NULL);
		CRT_CLK_OnOff(DTVATB, CLK_ON, NULL);
		RTK_DEMOD_INFO("DtvDemodEnable to DVBSx\n");
		break;

	default:
		CRT_CLK_OnOff(DTVATB, CLK_ON, NULL);
		RTK_DEMOD_INFO("DtvDemodEnable mode = %d\n", mode);
		break;
	}

	return 0;
}


int DtvIsDemodClockEnable(RTK_DEMOD_MODE mode)
{
	U32BITS sysclk0 = rtd_inl(SYS_REG_SYS_CLKEN0_reg);
	U32BITS sysclk2 = rtd_inl(SYS_REG_SYS_CLKEN2_reg);
	U32BITS sysrst0 = rtd_inl(SYS_REG_SYS_SRST0_reg);
	U32BITS sysrst1 = rtd_inl(SYS_REG_SYS_SRST1_reg);
	U32BITS sysrst2 = rtd_inl(SYS_REG_SYS_SRST2_reg);
	U32BITS SysRstCheckCom = 0, SysRstCheckMode = 0;
	U32BITS SysClkCheckCom = 0, SysClkCheckMode = 0;

	SysClkCheckCom = SYS_REG_SYS_CLKEN0_get_clken_dtv_frontend(sysclk0)&SYS_REG_SYS_CLKEN0_get_clken_dtv_demod_mb(sysclk0)&SYS_REG_SYS_CLKEN2_get_clken_dtv_demod(sysclk2);
	SysRstCheckCom = SYS_REG_SYS_SRST0_get_rstn_dtv_frontend(sysrst0)&SYS_REG_SYS_SRST1_get_rstn_dtv_demod_mb(sysrst1)&SYS_REG_SYS_SRST2_get_rstn_dtv_demod(sysrst2);

	if (mode == RTK_DEMOD_MODE_DTMB) {
		SysClkCheckMode = SYS_REG_SYS_CLKEN0_get_clken_hdic(sysclk0);
		SysRstCheckMode = SYS_REG_SYS_SRST0_get_rstn_hdic_apb(sysrst0) & SYS_REG_SYS_SRST0_get_rstn_hdic_axi(sysrst0) & SYS_REG_SYS_SRST0_get_rstn_hdic(sysrst0);
	} else if ((mode == RTK_DEMOD_MODE_ATSC) || (mode == RTK_DEMOD_MODE_QAM) || (mode == RTK_DEMOD_MODE_DVBC) || (mode == RTK_DEMOD_MODE_ISDB)) {
		SysClkCheckMode = SYS_REG_SYS_CLKEN0_get_clken_rtk_demod(sysclk0);
		SysRstCheckMode = SYS_REG_SYS_SRST0_get_rstn_rtk_demod(sysrst0);
	} else if ((mode == RTK_DEMOD_MODE_DVBT) || (mode == RTK_DEMOD_MODE_DVBT2)) {
		SysClkCheckMode = SYS_REG_SYS_CLKEN0_get_clken_atb_demod(sysclk0) & SYS_REG_SYS_CLKEN0_get_clken_atb_demod_wrap(sysclk0);
		SysRstCheckMode = SYS_REG_SYS_SRST0_get_rstn_atb_demod(sysrst0) & SYS_REG_SYS_SRST0_get_rstn_atb_demod_wrap(sysrst0);
	} else if ((mode == RTK_DEMOD_MODE_DVBS) || (mode == RTK_DEMOD_MODE_DVBS2)) {
		SysClkCheckMode = SYS_REG_SYS_CLKEN0_get_clken_atb_demod(sysclk0) & SYS_REG_SYS_CLKEN0_get_clken_atb_demod_wrap(sysclk0);
		SysRstCheckMode = SYS_REG_SYS_SRST0_get_rstn_atb_demod(sysrst0) & SYS_REG_SYS_SRST0_get_rstn_atb_demod_wrap(sysrst0);
	} else {
		SysClkCheckMode = 0;
		SysRstCheckMode = 0;
		RTK_DEMOD_WARNING("UNKNOW DTV Standard %d\n", mode);
	}

	if (SysClkCheckCom & SysRstCheckCom & SysClkCheckMode &  SysRstCheckMode) {
		return 1;
	} else {
		RTK_DEMOD_WARNING("Check DTV Demod Clock Off in DtvIsDemodClockEnable; standard = %d, SYS_CLKEN0 = "PT_H32BITS", SYS_CLKEN2 = "PT_H32BITS", SYS_SRST0 ="PT_H32BITS", SYS_SRST2 ="PT_H32BITS"\n", mode, sysclk0, sysclk2, sysrst0, sysrst2);
		return 0;
	}
}

int DtvPGAControl(unsigned char PGAEnable, IFADCGAIN PGAGain)
{
	if (PGAGain < PGAFIX_0DB) {
		RTK_DEMOD_INFO("PGA Control : FIX PGA gain -%d dB\n", PGAGain);
		PGAGain = (-1) * PGAGain;
		//rtd_maskl(TV_SB1_ANA_IQADC_CTRL2_reg, ~(0x7 << 4), (PGAGain << 4));
		//rtd_maskl(TV_SB1_ANA_IQADC_CTRL5_reg, ~(0x7), (0x0));
	} else {
		RTK_DEMOD_INFO("PGA Control : FIX PGA gain %d dB\n", PGAGain);
		//rtd_maskl(TV_SB1_ANA_IQADC_CTRL2_reg, ~(0x7 << 4), (0x0 << 4));
		//rtd_maskl(TV_SB1_ANA_IQADC_CTRL5_reg, ~(0x7), (PGAGain));
	}
	return 0;
}


void  DtvDumpShareRegStatus(void)
{
	return;
}


void DemodAdcDefault(void)
{
	//past from script
	//Merlin5 ADC register default
	//rtd_outl(0xb8033100, 0x00010502);					//<bit16=1>IFD MBIAS power on,<bit11:10>REG_I_VCM_SEL=0x1(0.632V),<bit9:8>ADC2X_BG_SEL= 0x1(1.216V),  <bit7:0>REG_IFD_RESERVED=0x02(10u PGA IB20U select)
	//rtd_outl(0xb8033104, 0x00000140);					//<bit24>IQADC input cm power off, <bit9:8>REG_IPGA_BW=0x1(75M), <bit6:4>REG_IFCMP_ISEL=0x4(50uF)
	//rtd_outl(0xb8033118, 0x30200010);					//<bit30:28>IQ ADC calibration input swing=0x11, <bit21:20>REG_IQ_CAL_DIV=0x10, REG_CKOUT_SEL_Q: the default is "1:I_CKOUT" on AIF spec
	//rtd_outl(0xb8033120, 0x00040000);					//<bit18:16>REG_IQCAL_ISEL=0x100(50uA), IF ADC GAIN FIX EN <bit0> = 0(SIF mode)
	//rtd_outl(0xb8033124, 0x00000000);					//PGA/ADC Power Off
	//rtd_outl(0xb8033128, 0x00100022);					//<bit21:20>REG_QPGA_BW=0x1(75M), Default setting(10=20uA), IQ PGA CURRENT  select

	//IFADC+IFPGA power on
	//rtd_maskl(0xb8033104, 0xfefffcff, 0x00000100);	//REG_ADC2X_DIFPOW, IFADC input cm power set to off(b24)=0x0, IPGA_BW<bit9:8>=0x01(75M)
	rtd_maskl(0xb8033124, 0xfffffefe, 0x00000101);		//I_PGA<bit8> power on, <bit0>I_ADC power on
	rtd_maskl(0xb8033128, 0x8ff8ffff, 0x00020000);		//<bit30:28>REG_QPGA_INPUT_SEL=0x0(No input),<bit18:16>REG_IPGA_INPUT_SEL=0x2(IFD input)

	//IQADC+IQPGA power on
	//rtd_outl(0xb803312C, 0x00000400);					//default setting, <bit11:10>REG_Q_VCM_SEL=0x1(0.632V)
	//rtd_outl(0xb8033130, 0x44004000);					//default setting, <bit31:30>REG_QADC_I_VREF_SEL=0x1(1.0X),<bit27:26>REG_IADC_I_VREF_SEL=0x1(1.0X),<bit15:14>REG_QADC_LDO0_SEL=0x1(1.3V)
	//rtd_outl(0xb8033134, 0x11000091);					//default setting, <bit29:28>REG_QADC_VREF_SEL=0x1(1.4V), <bit25:24>REG_IADC_VREF_SEL=0x1(1.4V), <bit8:7>REG_IADC_LDO0_SEL=0x1(1.3V)
	//<bit6:4>REG_QADC_LDO_SEL=0x1(0.961V), <bit2:0>REG_IADC_LDO_SEL=0x1(0.961V)
	//Set IPGA/QPGA GAIN = 0dB
	rtd_maskl(0xb8033120, 0xfffffffe, 0x00000001);		//IF ADC GAIN FIX EN <bit0>= 1(Internal Demod IQ mode)
	rtd_maskl(0xb803312c, 0xffeecc00, 0x00000000);		//<bit20>Q single_end=0x0, <bit16>I single_end=0, <bit13:12>Q_CKIN_Sel=00(from PLL27x_IFADC), <bit9:8>I_CKIN_Sel=00: From PLL27X_IFADC, <bit7:4>reg_qpga_d=0x0(0dB), <bit3:0>reg_ipga_d=0x0(0dB)
}


void DemodAdcSetting(RTK_DEMOD_MODE mode)
{
    rtd_maskl(0xb8033130, 0x33ffffff, 0x88000000);      //<bit31:30>REG_QADC_I_VREF_SEL=0x2(1.5X),<bit27:26>REG_IADC_I_VREF_SEL=0x5(1.5X)
    //ADC power on and set PGA input select
    rtd_maskl(0xb8033124, 0xfffffefe, 0x00000101);		//I_PGA<bit8> power on, <bit0>I_ADC power on
	rtd_maskl(0xb8033128, 0x8ff8ffff, 0x00020000);		//<bit30:28>REG_QPGA_INPUT_SEL=0x0(No input),<bit18:16>REG_IPGA_INPUT_SEL=0x2(IFD input)
    //PGA power on and set PGA gain 0dB
    rtd_maskl(0xb8033120, 0xfffffffe, 0x00000001);		//IF ADC GAIN FIX EN <bit0>= 1(Internal Demod IQ mode)
	rtd_maskl(0xb803312c, 0xffeecc00, 0x00000000);		//<bit20>Q single_end=0x0, <bit16>I single_end=0, <bit13:12>Q_CKIN_Sel=00(from PLL27x_IFADC), <bit9:8>I_CKIN_Sel=00: From PLL27X_IFADC, <bit7:4>reg_qpga_d=0x0(0dB), <bit3:0>reg_ipga_d=0x0(0dB)

	switch (mode) {
	case RTK_DEMOD_MODE_DVBS:
	case RTK_DEMOD_MODE_DVBS2:
	case RTK_DEMOD_MODE_DVBS2X:
	case RTK_DEMOD_MODE_SPEC_AN:
		rtd_maskl(0xb8033124, 0xffffeeee, 0x00001111);	//I_PGA<bit8> power on, I_QGA<bit12> power on, <bit0>I_ADC power on, <bit4>Q_ADC power on
		rtd_outl(0xb8033128, 0x10210022);	                //I PGA input select = I input, Q PGA input select = Q input, REG_IB20U_QPGA_SEL = 10(20uA), REG_IB20U_IPGA_SEL= 10(20uA), <bit21:20>QPGA LPF BW=0x1(75M)
		rtd_maskl(0xb8033104, 0xfffffcff, 0x00000200);	//<bit9:8>IPGA LPF BW=0x10(50M)
		if ((TunerInputMode == 0) || (TunerInputMode == 2)) {
			rtd_maskl(0xb803312c, 0xffeecc00, 0x00000000);	//Select to Differential, Q single_end<bit20>=0x0(disable), I single_end<bit16>=0(disable), Q_CKIN_Sel<bit13:12>=00, I_CKIN_Sel<bit9:8>=00: From PLL27X_IFADC, reg_qpga_d<bit7:4>=0x0(0dB), reg_ipga_d<bit3:0>=0x0(0dB)
			RTK_DEMOD_INFO("DemodAdcSetting to DVBSx(Differential + 0dB)\n");
		} else {
			rtd_maskl(0xb803312c, 0xffeecc00, 0x00110000);	//Select to Single End, Q single_end<bit20>=0x1(Enable), I single_end<bit16>=1(Enable), Q_CKIN_Sel<bit13:12>=00, I_CKIN_Sel<bit9:8>=00: From PLL27X_IFADC, reg_qpga_d<bit7:4>=0x0(0dB), reg_ipga_d<bit3:0>=0x0(0dB)
			RTK_DEMOD_INFO("DemodAdcSetting to DVBSx(Single End + 0dB)\n");
		}

		//rtd_maskl(0xB80004b8, 0xfffffdff, 0x00000000);  			//<bit9>IFADC ATV clk enable turn off
		//rtd_maskl(0xB8000500, 0xffffffef, 0x00000010);  			//<bit4>PLL27X_IFADC_DTV_CKO_EN setup
		//rtd_maskl(0xB80004b8, 0xfffffdff, 0x00000200);  			//<bit9>IFADC ATV clk enable turn on
		tv_osal_msleep(5);
		break;

	case RTK_DEMOD_MODE_ATV:
		RTK_DEMOD_INFO("DemodAdcSetting to ATV\n");
		rtd_maskl(0xb8033124, 0xfffffefe, 0x00000101);		        //I_PGA<bit8> power on, <bit0>I_ADC power on
		rtd_maskl(0xb8033128, 0x8ff8ffff, 0x00020000);		        //<bit30:28>REG_QPGA_INPUT_SEL=0x0(No input),<bit18:16>REG_IPGA_INPUT_SEL=0x2(IFD input)
		rtd_maskl(0xb803312c, 0xffeecc00, 0x00000000);	            //Select to Differential, Q single_end<bit20>=0x0(disable), I single_end<bit16>=0(disable), Q_CKIN_Sel<bit13:12>=00, I_CKIN_Sel<bit9:8>=00: From PLL27X_IFADC, reg_qpga_d<bit7:4>=0x0(0dB), reg_ipga_d<bit3:0>=0x0(0dB)

		//ATV mode, set PLL27X_IFADC_DUTY and ATVADCDIV_RSTB toggle flow
		rtd_maskl(0xb80004b8, 0xfffffdff, 0x00000000);				//<bit9>PLL27X_IFADC_ATV_CKO_EN = 0x0(turn off)
		rtd_maskl(0xB80004dc, 0x9fffffff, 0x40000000); 				//<30:29>PLL27X_IFADC_DUTY setup
		rtd_maskl(0xb80004b8, 0xfffdffff, 0x00000000);				//<bit17>ATVADCDIV_RSTB = 0x0(active reset)
		rtd_maskl(0xb80004b8, 0xfffdffff, 0x00020000);				//<bit17>ATVADCDIV_RSTB = 0x1(release reset)
		rtd_maskl(0xb80004b8, 0xfffffdff, 0x00000200);				//<bit9>PLL27X_IFADC_ATV_CKO_EN = 0x1(turn on)
		tv_osal_msleep(5);                                          //delay 5mS
		break;

	default:
		RTK_DEMOD_INFO("DemodAdcSetting to mode = %d\n", mode);
		rtd_maskl(0xb8033124, 0xfffffefe, 0x00000101);		        //I_PGA<bit8> power on, <bit0>I_ADC power on
		rtd_maskl(0xb8033128, 0x8ff8ffff, 0x00020000);		        //<bit30:28>REG_QPGA_INPUT_SEL=0x0(No input),<bit18:16>REG_IPGA_INPUT_SEL=0x2(IFD input)
		rtd_maskl(0xb803312c, 0xffeecc00, 0x00000000);	            //Select to Differential, Q single_end<bit20>=0x0(disable), I single_end<bit16>=0(disable), Q_CKIN_Sel<bit13:12>=00, I_CKIN_Sel<bit9:8>=00: From PLL27X_IFADC, reg_qpga_d<bit7:4>=0x0(0dB), reg_ipga_d<bit3:0>=0x0(0dB)
		//DTV mode PLL27X_IFADC_CKO_EN toggle flow
		//rtd_maskl(0xB80004b8, 0xfffffdff, 0x00000000);  			//<bit9>IFADC ATV clk enable turn off
		//rtd_maskl(0xB8000500, 0xffffffef, 0x00000010);  			//<bit4>PLL27X_IFADC_DTV_CKO_EN setup
		//rtd_maskl(0xB80004b8, 0xfffffdff, 0x00000200);  			//<bit9>IFADC ATV clk enable turn on
		tv_osal_msleep(5);
		break;
	}
}


int DtvDemodAdcPower(unsigned char on)
{
	return _TRUE;
}


int DtvDemodAdcPowerCheck(void)
{
	int ret = _TRUE;

	if ((rtd_inl(TV_SB1_ANA_IQADC_CTRL3_reg) & 0x1) != 0x1) {
		RTK_DEMOD_INFO("ADC Power Fail!!!!!!!!!\n");
		ret = _FALSE;
	}

	return ret;

}


/*************************************************
* 1.CRT_IFADC : On                               *
* 2.IFD MBIAS / PLL_LDO_POW /PLL_POW_LDO11V : On *
* 3.ADC/PGA Power : Off                          *
*************************************************/
void IfdMbiasPowAndAdcPow(void)
{
	//Check IFADC CLK turn on
	CRT_CLK_OnOff(TVADC, CLK_ON, NULL);
	RTK_DEMOD_INFO("IFADC_CLK Enable!!\n");

	//MBIAS and PLL_LDO Power turn on
	rtd_maskl(0xb8033100, 0xfffeffff, 0x00010000);  //<bit16>REG_POW_MBIAS turn on (Must be frist turn on)
	tv_osal_usleep(50);
	rtd_maskl(0xb80004d4, 0xffffbbff, 0x00004400);  //<bit14>PLL_POW_LDO11V, <bit10>PLL_POW_LDO turn on
	tv_osal_usleep(50);

	//turn Off ADC/PGA power
	rtd_maskl(0xb8033104, 0xfeffffff, 0x00000000);	//IQADC input cm power off <bit24> = 0
	rtd_outl(0xb8033124, 0x00000000);				//PGA/ADC Power Off
	tv_osal_usleep(50);

}


void DemodPllDefault(void)
{
	//past from script

	//Merlin5 register default setup
	rtd_outl(0xb80004c4, 0x00000000);				//DTV PLLDIF PLLDIF_DIVDIG_SEL = 000(2), PLLDIF_DIVADC_SEL = 00(divide by 8)
	//rtd_outl(0xb80004d0,0x0224000e);				//PLL27X, LFP Setting, M<10>+2=14(VCO=432M)
	//rtd_outl(0xb80004d4,0x00086521);				//<bit23:21>VDD11_PAD_SEL = 0x0,<bit20:19>PLL_LDO_XTAL_SEL=0x1(1.76V),<bit8:9>PLL_LDO_SEL=0x1(0.952V)
	//<bit5:4>PLL27X_PS_54M_DELAY=0x2(VCO=432M),<bit0>PLL27X_PS_DUTY_SEL = larger duty cycle
	//rtd_outl(0xb80004d8,0x00000004);				//Default setting, <bit2>PLL27X_VCORSTB=0x1(normal), <bit1>PLL27X_RSTB=0x0(Active Reset), <bit0>PLL27X_POW=0x0(Off).
	//rtd_outl(0xb80004dc,0x4001c001);				//Default ATV mode, <bit30:29>PLL27X_IFADC_DUTY=0x2,<bit17:16>PLL27X_CK108M_DIV=0x1(DIV=4;VCO=432M) PLL27X setting,<bit0>PLL_CK_IFADC_MUX=0x0(ATV mode)
	rtd_outl(0xb8000514, 0x00000009);				//<bit3>PLL27x 108M clk to digital=0x1(enable), <bit0>write bit used
	rtd_outl(0xb8000500, 0x0000041c);				//<bit11:10>PLL27X_IFADC_CK108M_DIV=0x1(VCO=432M),<bit4>PLL27X_IFADC_DTV_CKO_EN=0x1(enable),<bit3:2>PLL27X_IFADC_ATV_CKO_SEL=0x3(135M or 162M (depend on VCO and REG_PLL27x_IFADC_DIV))
	rtd_outl(0xb8000504, 0x000e0224);				//PLL27X_IFADC VCO M,N, M<10>+2�P=14(VCO=432M)
	rtd_outl(0xb8000508, 0x00000000);				//PLL27X_IFADC Poweroff and VCORSTB reset
	tv_osal_usleep(10);

	//PLL27X
	//rtd_maskl(0xb80004d8, 0xffff00f0, 0x00000104);// <bit15:8>PLL_RESERVE=1(ADC CLK From PLLDIF),<bit2>PLL27X_VCORSTB=0x1(normal), <bit1>PLL27X_RSTB=0x0(Active Reset), <bit0>PLL27X_POW=0x0(Off).
	//rtd_maskl(0xb80004dc, 0xfdfffffe, 0x02000000);	//Set PLL_L2H_CML_POW<bit25> = enable(0x1) and MUX to DTV Mode<bit0>=0x0

	//PLL27X_IFADC
	//rtd_maskl(0xb8000500, 0xfffffff3, 0x0000000C);	//PPLL27X_IFADC_DTV_CKO_SEL = 00(/3), PLL27X_IFADC_ATV_CKO_SEL = 11 (135M or 162M (depend on VCO and REG_PLL27x_IFADC_DIV).
	//rtd_maskl(0xb8000508, 0xfffffff8, 0x00000007);	//IFADC, RSTB and VCORSTB Power on
}


void DemodPllSetting(RTK_DEMOD_MODE mode)
{
	switch (mode) {
	case RTK_DEMOD_MODE_DTMB:
		//**PLL setting for DTMB_486M_121.5M Setting**//			//VCO and DIV setting : ADC CLK and System CLK setting(ADC=121.5M, Sys=121.5MM)
		rtd_maskl(0xb8000214, 0xFFFFB7FF, 0x00000800); 				//(B14,B11) = 01, Demod Sel = HDIC Demod(DTMB)
		rtd_maskl(0xb80004dc, 0xFDFFFFFE, 0x02000000);				//PLL_L2H_CML_POW <bit25> = 1(on), PLL_CK_IFADC_MUX to DTV Mode, <bit0> = 0(DTV)
		rtd_maskl(0xb80004d8, 0xFFFF00FF, 0x00000100);				//PLL_RESERVE<bit15:8> = 0x1, Select ADC CLK From PLLDIF
		rtd_maskl(0xb8000500, 0xFFFFFFEF, 0x00000010);				//PLL27x_IFADC DTV CLK<bit4>=0x1
		rtd_maskl(0xb8000504, 0xFC80FFF8, 0x00100004);				//VCO = M<6:0>+2 = 16+2, N:00=1, 27 /1 *27=486MHz, PLL27X_IFADC_M<bit22:16> = 0x10(16), PLL27X_IFADC_N<bit25:24>=0x0(1), PLL27X_IFADC PUMP current<bit2:0>=0x4(100:25uF)
		rtd_maskl(0xb80004c4, 0xFFFFFF88, 0x00000064);				//System_CLK : PLLDIF_DIVDIG_SEL<bit6:4> = 0x110/4), sys_clk = 486 / 4 = 121.5 MHz, ADC_CLK : PLLDIF_DIVADC_SEL<2:0> = 0x100(/4), Adc_clk = 486 / 4 =121.5MHz
		rtd_maskl(0xb80004b8, 0xFFFD81FB, 0x00021200);				//<bit17>ATVADCDIV_RSTB=0x1(normal), <bit14>DIF216M_DIV=0x0(div2), <bit13>DIF216M_EN=0x0, <bit11>LDPC_DIV=0x0(div1.75), <bit10>LDPC_EN=0x0, <bit2>PLL27X_IFADC_REF_SEL=XTAL
		RTK_DEMOD_INFO("DemodPllSetting Pll Change to DTMB \n");
		break;

	case RTK_DEMOD_MODE_ISDB:
	case RTK_DEMOD_MODE_ATSC:
		//ADC CLK and System CLK setting(ADC=54M, Sys=216M)
		rtd_maskl(0xb8000214, 0xFFFFB7FF, 0x00004000); 				//(B14,B11) = 10, Demod Sel = RTK Demod(ATSC/DVBC/ISDBT)
		rtd_maskl(0xb80004dc, 0xFDFFFFFE, 0x02000000);				//PLL_L2H_CML_POW <bit25> = 1(on), PLL_CK_IFADC_MUX to DTV Mode, <bit0> = 0(DTV)
		rtd_maskl(0xb80004d8, 0xFFFF00FF, 0x00000100);				//PLL_RESERVE<bit15:8> = 0x1, Select ADC CLK From PLLDIF
		rtd_maskl(0xb8000500, 0xFFFFFFEF, 0x00000010);				//PLL27x_IFADC DTV CLK<bit4>=0x1
		rtd_maskl(0xb8000504, 0xFC80FFF8, 0x000e0004);				//VCO = M<6:0>+2 = 14+2, N:00=1, 27 /1 *16=432MHz, PLL27X_IFADC_M<bit22:16> = 0xE(14), PLL27X_IFADC_N<bit25:24>=0x0(1), PLL27X_IFADC PUMP current<bit2:0>=0x4(100:25uF)
		rtd_maskl(0xb80004c4, 0xFFFFFF88, 0x00000000);				//System_CLK : PLLDIF_DIVDIG_SEL<bit6:4> = 0x0(/2), sys_clk = 432 / 2 = 216MHz, ADC_CLK : PLLDIF_DIVADC_SEL<2:0> = 0x0(/8), Adc_clk = 432 / 8=54MHz
		rtd_maskl(0xb80004b8, 0xFFFD81FB, 0x00021200);				//<bit17>ATVADCDIV_RSTB=0x1(normal), <bit14>DIF216M_DIV=0x0(div2), <bit13>DIF216M_EN=0x0, <bit11>LDPC_DIV=0x0(div1.75), <bit10>LDPC_EN=0x0, <bit2>PLL27X_IFADC_REF_SEL=XTAL
		RTK_DEMOD_INFO("DemodPllSetting to ATSC ISDBT\n");
		break;

	case RTK_DEMOD_MODE_QAM:
		//ADC CLK and System CLK setting(ADC=25.2M, Sys=151.2M)
		rtd_maskl(0xb8000214, 0xFFFFB7FF, 0x00004000); 				//(B14,B11) = 10, Demod Sel = RTK Demod(ATSC/DVBC/ISDBT)
		rtd_maskl(0xb80004dc, 0xFDFFFFFE, 0x02000000);				//PLL_L2H_CML_POW <bit25> = 1(on), PLL_CK_IFADC_MUX to DTV Mode, <bit0> = 0(DTV)
		rtd_maskl(0xb80004d8, 0xFFFF00FF, 0x00000100);				//PLL_RESERVE<bit15:8> = 0x1, Select ADC CLK From PLLDIF
		rtd_maskl(0xb8000500, 0xFFFFFFEF, 0x00000010);				//PLL27x_IFADC DTV CLK<bit4>=0x1
		rtd_maskl(0xb8000504, 0xFC80FFF8, 0x000c0004);				//VCO = M<6:0>+2 = 12+2, N:00=1, 27 /1 *14=378MHz, PLL27X_IFADC_M<bit22:16> = 0xC(12), PLL27X_IFADC_N<bit25:24>=0x0(1), PLL27X_IFADC PUMP current<bit2:0>=0x4(100:25uF)
		rtd_maskl(0xb80004c4, 0xFFFFFF88, 0x00000011);				//System_CLK : PLLDIF_DIVDIG_SEL<bit6:4> = 0x1(/2.5), sys_clk = 378 / 2.5 = 151.2MHz, ADC_CLK : PLLDIF_DIVADC_SEL<2:0> = 0x1(/15), Adc_clk = 378 / 15 = 25.2MHz
		rtd_maskl(0xb80004b8, 0xFFFD81FB, 0x00021200);				//<bit17>ATVADCDIV_RSTB=0x1(normal), <bit14>DIF216M_DIV=0x0(div2), <bit13>DIF216M_EN=0x0, <bit11>LDPC_DIV=0x0(div1.75), <bit10>LDPC_EN=0x0, <bit2>PLL27X_IFADC_REF_SEL=XTAL
		RTK_DEMOD_INFO("DemodPllSetting to J83B\n");
		break;

	case RTK_DEMOD_MODE_DVBC:
		//ADC CLK and System CLK setting(ADC=36M, Sys=216M)
		rtd_maskl(0xb8000214, 0xFFFFB7FF, 0x00004000); 				//(B14,B11) = 10, Demod Sel = RTK Demod(ATSC/DVBC/ISDBT)
		rtd_maskl(0xb80004dc, 0xFDFFFFFE, 0x02000000);				//PLL_L2H_CML_POW <bit25> = 1(on), PLL_CK_IFADC_MUX to DTV Mode, <bit0> = 0(DTV)
		rtd_maskl(0xb80004d8, 0xFFFF00FF, 0x00000100);				//PLL_RESERVE<bit15:8> = 0x1, Select ADC CLK From PLLDIF
		rtd_maskl(0xb8000500, 0xFFFFFFEF, 0x00000010);				//PLL27x_IFADC DTV CLK<bit4>=0x1
		rtd_maskl(0xb8000504, 0xFC80FFF8, 0x00120004);				//VCO = M<6:0>+2 = 18+2, N:00=1, 27 /1 *20=540MHz, PLL27X_IFADC_M<bit22:16> = 0x12(18), PLL27X_IFADC_N<bit25:24>=0x0(1), PLL27X_IFADC PUMP current<bit2:0>=0x4(100:25uF)
		rtd_maskl(0xb80004c4, 0xFFFFFF88, 0x00000011);				//System_CLK : PLLDIF_DIVDIG_SEL<bit6:4> = 0x1(/2.5), sys_clk = 540 / 2.5 = 216MHz,  ADC_CLK : PLLDIF_DIVADC_SEL<2:0> = 0x1(/15), Adc_clk = 540 / 15 = 36MHz
		rtd_maskl(0xb80004b8, 0xFFFD81FB, 0x00021200);				//<bit17>ATVADCDIV_RSTB=0x1(normal), <bit14>DIF216M_DIV=0x0(div2), <bit13>DIF216M_EN=0x0, <bit11>LDPC_DIV=0x0(div1.75), <bit10>LDPC_EN=0x0, <bit2>PLL27X_IFADC_REF_SEL=XTAL
		RTK_DEMOD_INFO("DemodPllSetting to DVBC\n");
		break;

	case RTK_DEMOD_MODE_DVBT:
	case RTK_DEMOD_MODE_DVBT2:
		//ADC CLK and System CLK setting(ADC=144M, Sys=518.4M)
		rtd_maskl(0xb8000214, 0xFFFDB7FF, 0x00020000);				//(B14,B11) = 00, Demod Sel = ATB Demod(DVB-T/T2/S/S2), <bit17> = 1, DVBT2 LDPC clock from system clock
		rtd_maskl(0xb80004dc, 0xFDFFFFFE, 0x02000000);				//PLL_L2H_CML_POW <bit25> = 1(on), PLL_CK_IFADC_MUX to DTV Mode, <bit0> = 0(DTV)
		rtd_maskl(0xb80004d8, 0xFFFF00FF, 0x00000100);				//PLL_RESERVE<bit15:8> = 0x1, Select ADC CLK From PLLDIF
		rtd_maskl(0xb8000500, 0xFFFFFFEF, 0x00000010);				//PLL27x_IFADC DTV CLK<bit4>=0x1
		rtd_maskl(0xb8000504, 0xFC80FFF8, 0x00160004);				//VCO = M<6:0>+2 = 22+2, N:00=1, 27 /1 *24=648MHz, PLL27X_IFADC_M<bit22:16> = 0x16(22), PLL27X_IFADC_N<bit25:24>=0x0(1), PLL27X_IFADC PUMP current<bit2:0>=0x4(100:25uF)
		rtd_maskl(0xb80004c4, 0xFFFFFF88, 0x00000037);				//System_CLK : PLLDIF_DIVDIG_SEL<bit6:4> = 0x3(/1.25), sys_clk = 648 / 1.25 = 518.4 MHz, ADC_CLK : PLLDIF_DIVADC_SEL<2:0> = 0x7(/4.5), Adc_clk = 648 / 4.5 =144MHz
		rtd_maskl(0xb80004b8, 0xFFFC03FB, 0x00027400);				//<bit17>ATVADCDIV_RSTB=0x1(normal), <bit14>DIF216M_DIV=0x1(div3), <bit13>DIF216M_EN=0x1, <bit12>DTVDIG_EN=0x1, <bit11>LDPC_DIV=0x0(div1.75), <bit10>LDPC_EN=0x1, <bit2>PLL27X_IFADC_REF_SEL=0(XTAL)
		RTK_DEMOD_INFO("DemodPllSetting to DVBT DVBT2 \n");
		break;

	case RTK_DEMOD_MODE_DVBS:
	case RTK_DEMOD_MODE_DVBS2:
	case RTK_DEMOD_MODE_DVBS2X:
	case RTK_DEMOD_MODE_SPEC_AN:
		//ADC CLK and System CLK setting(ADC=121.5M, Sys=486M)
		rtd_maskl(0xb8000214, 0xFFFDB7FF, 0x00020000);				//(B14,B11) = 00, Demod Sel = ATB Demod(DVB-T/T2/S/S2), <bit17> = 1, DVBS LDPC clock from system clock
		rtd_maskl(0xb80004dc, 0xFDFFFFFE, 0x02000000);				//PLL_L2H_CML_POW <bit25> = 1(on), PLL_CK_IFADC_MUX to DTV Mode, <bit0> = 0(DTV)
		rtd_maskl(0xb80004d8, 0xFFFF00FF, 0x00000100);				//PLL_RESERVE<bit15:8> = 0x1, Select ADC CLK From PLLDIF
		rtd_maskl(0xb8000500, 0xFFFFFFEF, 0x00000010);				//PLL27x_IFADC DTV CLK<bit4>=0x1
		rtd_maskl(0xb8000504, 0xFC80FFF8, 0x00100004);				//VCO = M<6:0>+2 = 16+2, N:00=1, 27 /1 *18=486MHz, PLL27X_IFADC_M<bit22:16> = 0x10(16), PLL27X_IFADC_N<bit25:24>=0x0(1), PLL27X_IFADC PUMP current<bit2:0>=0x4(100:25uF)
		rtd_maskl(0xb80004c4, 0xFFFFFF88, 0x00000074);				//System_CLK : PLLDIF_DIVDIG_SEL<bit6:4> = 0x7(/1), sys_clk = 486 / 1 = 486 MHz, ADC_CLK : PLLDIF_DIVADC_SEL<2:0> = 0x4(/4), Adc_clk = 486 / 4 =121.5MHz
		rtd_maskl(0xb80004b8, 0xFFFC03FB, 0x00021c00);				//<bit17>ATVADCDIV_RSTB=0x1(normal), <bit14>DIF216M_DIV=0x0(div3), <bit13>DIF216M_EN=0x0, <bit12>DTVDIG_EN=0x1, <bit11>LDPC_DIV=0x1(div1.25), <bit10>LDPC_EN=0x1, <bit2>PLL27X_IFADC_REF_SEL=0(XTAL)
		RTK_DEMOD_INFO("DemodPllSetting to DVBSx\n");
		break;

	case RTK_DEMOD_MODE_ATV:
		//ATV System CLK=108MHz, VCO=432MHz
		//rtd_outl(0xb80004d0, 0x0224000e);           				//VCO = M<6:0>14+2 = 16, N:00=1, 27 /1 *16=432MHz,[9:8]PLL27X_N = 0(1), [6:0]PLL27X_M = 0xe(14)
		//rtd_outl(0xb80004d4, 0x000f6521);							//[18]PLL_XIXO_LOAD=0, [17:16]PLL_XIXO_DRIVE_SEL=0x3,[5:4]PLL27X_PS_54M_DELAY=0x2(VCO=432M)
		rtd_outl(0xb80004dc, 0x4201c001);           				//[30:29]PLL27X_IFADC_DUTY=0x10(vco/4), [25]PLL_L2H_CML_POW=0x1, [17:16]PLL27X_CK108M_DIV=0x1(vco=432M), [11:10]PLL27X_IFADC_CKO_SEL=0x11(162M),[9]PLL27X_IFADC_DIV=0x0(divide 4), [0]PLL_CK_IFADC_MUX=0x1(ATV mode)
		rtd_outl(0xb8000514, 0x0000000b);							//[3]PLL27x 108M clk to digital=0x1, [1]PLL27X_PS_EN=0x1(PLL27x phase swallow enable), [0]write_bit(1 to set, 0 to clear)
		//PLL27X Power On
		//rtd_outl(0xb80004d8, 0x00000000);   						//PLL27X_VCORSTB[2], 1:normal, 0:reset; PLL27X_RSTB[1], 1:normal, 0:reset; PLL27X_POW[0], 0:power down, 1:power on
		//rtd_outl(0xb80004d8, 0x00000006);							//[2]PLL27X_VCORSTB = 0x1, [1]PLL27X_RSTB = 0x1, Reset release
		//rtd_outl(0xb80004d8, 0x00000007);							//[0]PLL27X_POW =0x1, turn on PLL27X_POW

		//ATV ADC CLK=162MHz, VCO=648MHz, VCO and DIV setting//
		rtd_maskl(0xb8000500, 0xFFFFF3E2, 0x00000c1c);				//[11:10]PLL27X_IFADC_CK108M_DIV=0x3(VCO=648M),[4]PLL27X_IFADC_DTV_CKO_EN=0x1(enable),[3:2]PLL27X_IFADC_ATV_CKO_SEL=0x11(162M), [0]PIP_IFADC_ATV_CKO_SEL=0x0(PLL27x_IFADC)
		rtd_maskl(0xb8000504, 0xFC80FFF8, 0x00160004);				//VCO = M<6:0>+2 = 22+2, N:00=1, 27 /1 *24=648MHz, PLL27X_IFADC_M<bit22:16> = 0x16(22), PLL27X_IFADC_N<bit25:24>=0x0(1), PLL27X_IFADC PUMP current<bit2:0>=0x4(100:25uF)
		rtd_outl(0xb80004b8, 0x00024200);							//<bit17>ATVADCDIV_RSTB=0x1(normal), <bit14>DIF216M_DIV=0x1(div3), <bit9>PLL27X_IFADC_ATV_CKO_EN=0x1, <bit2>PLL27X_IFADC_REF_SEL=0(XTAL)
		RTK_DEMOD_INFO("DemodPllSetting to ATV \n");
		break;

	default:
		RTK_DEMOD_INFO("DemodPllSetting wrong mode =%d \n", mode);
		break;
	}

	tv_osal_usleep(50);
	rtd_maskl(0xb8000508, 0xfffffff8, 0x00000000);  			//<2:1>PLL27X_IFADC_VCORSTB, PLL27X_IFADC_RSTB reset = 0(Reset); <0>PLL27X_IFADC_POW turn off
	rtd_maskl(0xb8000508, 0xfffffffe, 0x00000001);  			//<0>PLL27X_IFADC_POW turn On
	rtd_maskl(0xb8000508, 0xfffffff9, 0x00000006);  			//<2:1>PLL27X_IFADC_VCORSTB, PLL27X_IFADC_RSTB reset = 1(release)
	tv_osal_msleep(5);                                           //delay 10mS
}


int DtvDemodPllSettingCheck(RTK_DEMOD_MODE mode)
{
	int ret = _TRUE;

	switch (mode) {
	case RTK_DEMOD_MODE_DTMB:
	case RTK_DEMOD_MODE_DVBT:
	case RTK_DEMOD_MODE_DVBT2:
	case RTK_DEMOD_MODE_DVBC:
	case RTK_DEMOD_MODE_ATSC:
	case RTK_DEMOD_MODE_QAM:
	case RTK_DEMOD_MODE_ISDB:
	case RTK_DEMOD_MODE_DVBS:
	case RTK_DEMOD_MODE_DVBS2:
	case RTK_DEMOD_MODE_DVBS2X:
	case RTK_DEMOD_MODE_SPEC_AN:
		if ((rtd_inl(0xb80004dc) & 0x1) != 0x0) {
			RTK_DEMOD_INFO("DtvDemodPllSettingCheck Fail!!!!!!!!!\n");
			ret = _FALSE;
		}
		break;
	default:
		ret = _TRUE;
		break;
	}

	return ret;
}


int DtvDemodCRTSettingCheck(void)
{
	int ret = _TRUE;

	return ret;
}


void DtvDemodFrontendFilter(RTK_DEMOD_MODE mode)
{
//MERLIN5

	if (mode == RTK_DEMOD_MODE_DTMB) {
		RTK_DEMOD_INFO("Frontend Filter Change : load DTMB !\n");
		// down sample 4 filter setting
		rtd_outl(0xb8033900, 0x00001FFF);//tap0&1
		rtd_outl(0xb8033904, 0x1FFF0000);//tap2&3
		rtd_outl(0xb8033908, 0x00010002);//tap4&5
		rtd_outl(0xb803390C, 0x00020000);//tap6&7
		rtd_outl(0xb8033910, 0x1FFC1FFA);//tap8&9
		rtd_outl(0xb8033914, 0x1FFB0000);//tap10&11
		rtd_outl(0xb8033918, 0x0008000E);//tap12&13
		rtd_outl(0xb803391C, 0x000C0000);//tap14&15
		rtd_outl(0xb8033920, 0x1FEE1FE3);//tap16&17
		rtd_outl(0xb8033924, 0x1FE80000);//tap18&19
		rtd_outl(0xb8033928, 0x00220037);//tap20&21
		rtd_outl(0xb803392C, 0x002C1FFF);//tap22&23
		rtd_outl(0xb8033930, 0x1FC41FA0);//tap24&25
		rtd_outl(0xb8033934, 0x1FB30001);//tap26&27
		rtd_outl(0xb8033938, 0x0064009F);//tap28&29
		rtd_outl(0xb803393C, 0x007F1FFF);//tap30&31
		rtd_outl(0xb8033940, 0x1F5C1EFB);//tap32&33
		rtd_outl(0xb8033944, 0x1F300001);//tap34&35
		rtd_outl(0xb8033948, 0x010E01B3);//tap36&37
		rtd_outl(0xb803394C, 0x01611FFF);//tap38&39
		rtd_outl(0xb8033950, 0x1E1D1CD1);//tap40&41
		rtd_outl(0xb8033954, 0x1D400001);//tap42&43
		rtd_outl(0xb8033958, 0x04BB0A1D);//tap44&45
		rtd_outl(0xb803395C, 0x0E600FFF);//tap46&47
	} else if ((mode == RTK_DEMOD_MODE_DVBT) || (mode == RTK_DEMOD_MODE_DVBT2)) {
		RTK_DEMOD_INFO("Frontend Filter Change : load T/T2 !\n");
		//Set new down sample filter
		rtd_outl(0xb8033900, 0x1ffe1ffc);
		rtd_outl(0xb8033904, 0x00011fff);
		rtd_outl(0xb8033908, 0x00060003);
		rtd_outl(0xb803390c, 0x00070007);
		rtd_outl(0xb8033910, 0x00020006);
		rtd_outl(0xb8033914, 0x1ff81ffd);
		rtd_outl(0xb8033918, 0x1ff31ff4);
		rtd_outl(0xb803391c, 0x1ffb1ff5);
		rtd_outl(0xb8033920, 0x000d0004);
		rtd_outl(0xb8033924, 0x00170015);
		rtd_outl(0xb8033928, 0x000A0014);
		rtd_outl(0xb803392c, 0x1fed1ffc);
		rtd_outl(0xb8033930, 0x1fda1fe0);
		rtd_outl(0xb8033934, 0x1fec1fde);
		rtd_outl(0xb8033938, 0x001a0002);
		rtd_outl(0xb803393c, 0x003a002f);
		rtd_outl(0xb8033940, 0x00230037);
		rtd_outl(0xb8033944, 0x1fde0003);
		rtd_outl(0xb8033948, 0x1faa1fbd);
		rtd_outl(0xb803394c, 0x1fc51fac);
		rtd_outl(0xb8033950, 0x002a1ff3);
		rtd_outl(0xb8033954, 0x007e005d);
		rtd_outl(0xb8033958, 0x005f0080);
		rtd_outl(0xb803395c, 0x1fce001f);
		rtd_outl(0xb8033960, 0x1f4a1f80);
		rtd_outl(0xb8033964, 0x1f661f3e);
		rtd_outl(0xb8033968, 0x00381fbf);
		rtd_outl(0xb803396c, 0x011200b4);
		rtd_outl(0xb8033970, 0x01040133);
		rtd_outl(0xb8033974, 0x1fc30082);
		rtd_outl(0xb8033978, 0x1e351eed);
		rtd_outl(0xb803397c, 0x1dff1dd6);
		rtd_outl(0xb8033980, 0x00401ecd);
		rtd_outl(0xb8033984, 0x0480023b);
		rtd_outl(0xb8033988, 0x08ad06c2);
		rtd_outl(0xb803398c, 0x0a6909f5);
	}
}


int DemodFrontendPathSetting(RTK_DEMOD_MODE mode)
{

	switch (mode) {
	case RTK_DEMOD_MODE_DTMB:
		rtd_outl(0xb8033800, 0x10010010);							//<bit29:28>dtmb_data_valid_delay=0x1(delay data valid), <bit18:16>Dtv_frontend_mode=0x1, <bit8>dtv_idata_sel=0x0(from dn flt), <bit4>Dtv_dnflt_en=0x1(DN6)
		rtd_maskl(0xb8033804, 0xFFFBFBFF, 0x00040400);				//input fifo clr, dtv_input_fifo_clr<bit18>, iq_adc_fifo<bit10> = 0x1, FIFO waddr & raddr clear
		rtd_maskl(0xb8033804, 0xFFFBFBFF, 0x00000000);				//input fifo clr release, dtv_input_fifo_clr<bit18>, iq_adc_fifo<bit10> = 0x0, FIFO waddr & raddr clear
		rtd_maskl(0xb8000858, ~(0xf << 20), (0x4 << 20));           //Set  GPIO_82 to DEMOD_IF_AGC
		DtvDemodFrontendFilter(RTK_DEMOD_MODE_DTMB);
		RTK_DEMOD_INFO("FrontendPathSetting to DTMB\n");
		break;

	case RTK_DEMOD_MODE_ATSC:
	case RTK_DEMOD_MODE_ISDB:
		rtd_outl(0xb8033800, 0x10040000);							//<bit29:28>dtmb_data_valid_delay=0x1(delay data valid), <bit18:16>Dtv_frontend_mode=0x4, <bit8>dtv_idata_sel, <bit4>Dtv_dnflt_en for RTK Demod don't care
		rtd_maskl(0xb8033804, 0xFFFBFBFF, 0x00040400);				//input fifo clr, dtv_input_fifo_clr<bit18>, iq_adc_fifo<bit10> = 0x1, FIFO waddr & raddr clear
		rtd_maskl(0xb8033804, 0xFFFBFBFF, 0x00000000);				//input fifo clr release, dtv_input_fifo_clr<bit18>, iq_adc_fifo<bit10> = 0x0, FIFO waddr & raddr clear
		rtd_maskl(0xb8000858, ~(0xf << 20), (0x4 << 20));           //Set  GPIO_82 to DEMOD_IF_AGC
		DtvDemodFrontendFilter(RTK_DEMOD_MODE_ATSC);
		RTK_DEMOD_INFO("FrontendPathSetting to ATSC ISDBT\n");
		break;

	case RTK_DEMOD_MODE_QAM:
		rtd_outl(0xb8033800, 0x10240000);							//<bit29:28>dtmb_data_valid_delay=0x1(delay data valid),<bit21>rtk_dtv_demod_sel=0x1(OpenCable), <bit18:16>Dtv_frontend_mode=0x4, <bit8>dtv_idata_sel, <bit4>Dtv_dnflt_en for RTK Demod don't care
		rtd_maskl(0xb8033804, 0xFFFBFBFF, 0x00040400);				//input fifo clr, dtv_input_fifo_clr<bit18>, iq_adc_fifo<bit10> = 0x1, FIFO waddr & raddr clear
		rtd_maskl(0xb8033804, 0xFFFBFBFF, 0x00000000);				//input fifo clr release, dtv_input_fifo_clr<bit18>, iq_adc_fifo<bit10> = 0x0, FIFO waddr & raddr clear
		rtd_maskl(0xb8000858, ~(0xf << 20), (0x4 << 20));           //Set  GPIO_82 to DEMOD_IF_AGC
		DtvDemodFrontendFilter(RTK_DEMOD_MODE_QAM);
		RTK_DEMOD_INFO("FrontendPathSetting to J83B\n");
		break;

	case RTK_DEMOD_MODE_DVBC:
		rtd_outl(0xb8033800, 0x10240000);							//<bit29:28>dtmb_data_valid_delay=0x1(delay data valid),<bit21>rtk_dtv_demod_sel=0x1(OpenCable), <bit18:16>Dtv_frontend_mode=0x4, <bit8>dtv_idata_sel, <bit4>Dtv_dnflt_en for RTK Demod don't care
		rtd_maskl(0xb8033804, 0xFFFBFBFF, 0x00040400);				//input fifo clr, dtv_input_fifo_clr<bit18>, iq_adc_fifo<bit10> = 0x1, FIFO waddr & raddr clear
		rtd_maskl(0xb8033804, 0xFFFBFBFF, 0x00000000);				//input fifo clr release, dtv_input_fifo_clr<bit18>, iq_adc_fifo<bit10> = 0x0, FIFO waddr & raddr clear
		rtd_maskl(0xb8000858, ~(0xf << 20), (0x4 << 20));           //Set  GPIO_82 to DEMOD_IF_AGC
		DtvDemodFrontendFilter(RTK_DEMOD_MODE_DVBC);
		RTK_DEMOD_INFO("FrontendPathSetting to DVBC\n");
		break;

	case RTK_DEMOD_MODE_DVBT:
	case RTK_DEMOD_MODE_DVBT2:
		rtd_outl(0xb8033800, 0x10010010);							//<bit29:28>dtmb_data_valid_delay=0x1(delay data valid), <bit18:16>Dtv_frontend_mode=0x1, <bit8>dtv_idata_sel=0x0(from dn flt), <bit4>Dtv_dnflt_en=0x1(DN6)
		rtd_maskl(0xb8033804, 0xFFFBFBFF, 0x00040400);				//input fifo clr, dtv_input_fifo_clr<bit18>, iq_adc_fifo<bit10> = 0x1, FIFO waddr & raddr clear
		rtd_maskl(0xb8033804, 0xFFFBFBFF, 0x00000000);				//input fifo clr release, dtv_input_fifo_clr<bit18>, iq_adc_fifo<bit10> = 0x0, FIFO waddr & raddr clear
		rtd_maskl(0xb8000858, ~(0xf << 20), (0x4 << 20));           //Set  GPIO_82 to DEMOD_IF_AGC
		DtvDemodFrontendFilter(RTK_DEMOD_MODE_DVBT2);
		RTK_DEMOD_INFO("FrontendPathSetting to DVBT DVBT2\n");
		break;

	case RTK_DEMOD_MODE_DVBS:
	case RTK_DEMOD_MODE_DVBS2:
	case RTK_DEMOD_MODE_DVBS2X:
	case RTK_DEMOD_MODE_SPEC_AN:
		if (TunerInputMode <= 1) {
			rtd_outl(0xb8033800, 0x10020100);               //IQ Normal for Tuner Output
			RTK_DEMOD_INFO("DVBS spectrum normal\n");
		} else {
			rtd_outl(0xb8033800, 0x10020102);               //IQ Inversion for Tuner Output
			RTK_DEMOD_INFO("DVBS spectrum inversion\n");
		}
		rtd_maskl(0xb8033804, 0xFFFFFBFF, 0x00000400);	//input fifo clr, dtv_input_fifo_clr<bit10> = 0x1, Iadc Input FIFO waddr & raddr clear
		rtd_maskl(0xb8033804, 0xFFFFFBFF, 0x00000000);	//input fifo clr, dtv_input_fifo_clr<bit10> = 0x1, Iadc Input FIFO waddr & raddr clear
		rtd_maskl(0xb8000844, ~(0xf << 28), (0x4 << 28));           //Set  GPIO_61 to DEMOD_IF_AGC
		DtvDemodFrontendFilter(RTK_DEMOD_MODE_DVBS);
		RTK_DEMOD_INFO("FrontendPathSetting to DVBSx\n");
		break;

	case RTK_DEMOD_MODE_ATV:
		RTK_DEMOD_INFO("FrontendPathSetting to ATV\n");
		rtd_maskl(0xb8000858, ~(0xf << 20), (0x3 << 20));           //Set  GPIO_82 to DEMOD_IF_AGC
		break;

	default:
		RTK_DEMOD_INFO("FrontendPathSetting wrong mode =%d \n", mode);
		break;
	}

	return FUNCTION_SUCCESS;
}


/*------------------------------------------------------------------------------
 * FUNC : DTV demod memory mapping
 *------------------------------------------------------------------------------*/
/*
int DtvDemodMemRemapping(RTK_DEMOD_MODE mode)
{

	size_t DdrSize = 0;
	unsigned int AllocateSize = 0 ;

#if DYNAMIC_MEM_ALLOCATE
	unsigned char* nonCachedAddr;
#endif

	switch (mode) {
	case RTK_DEMOD_MODE_DVBT:
	case RTK_DEMOD_MODE_DVBT2:
		DdrSize = RTK_A_DVBT2_DDR_SIZE;
		RTK_DEMOD_INFO("DtvDemodMemRemapping (DVBTX) DDR_SIZE= 0x"PT_HEX_DUADDRESS"\n", DdrSize);
		break;
	case RTK_DEMOD_MODE_DTMB:
		DdrSize = RTK_H_DTMB_DDR_SIZE;
		RTK_DEMOD_INFO("DtvDemodMemRemapping (DTMB) DDR_SIZE= 0x"PT_HEX_DUADDRESS"\n", DdrSize);
		break;

	default:
		RTK_DEMOD_WARNING("TV MODE not support at DtvDemodMemRemapping! TV_MODE = %d \n", mode);
		//return FUNCTION_ERROR; for coverity
		break;

	}

	if (DdrSize) {


#if DYNAMIC_MEM_ALLOCATE

		if (pShareMemory)
			pli_freeContinuousMemoryMesg("DTV_DEMOD", pShareMemory);


		pShareMemory = (unsigned char*)pli_allocContinuousMemoryMesg(
						   "DTV_DEMOD",
						   DdrSize,
						   &nonCachedAddr,
						   &ShareMemoryPhysicalAddress);

		if (pShareMemory == NULL) {
			RTK_DEMOD_WARNING("DtvDemodMemRemapping failed, allocate share memory failed\n");
			return FUNCTION_ERROR;
		}


		RTK_DEMOD_INFO("allocate share memory(dynamic) - catch_addr=%p/%08lx, size=%08x\n",
					   pShareMemory,
					   ShareMemoryPhysicalAddress,
					   DdrSize);


#else

		AllocateSize = CravedoutMemoryQuery(&ShareMemoryPhysicalAddress);

		if (AllocateSize < DdrSize)
			RTK_DEMOD_WARNING("allocate share memory(fix) - allocate DDR size is not enough!!!\n");

		RTK_DEMOD_INFO("allocate share memory(fix) - Physical_addr=0x%08lx, size=0x%08x\n", ShareMemoryPhysicalAddress, AllocateSize);
#endif




	}


	switch (mode) {
	case RTK_DEMOD_MODE_DVBT:
	case RTK_DEMOD_MODE_DVBT2:
		rtd_outl(DTV_DEMOD_MISC_atb_wrapper_addr_offset_reg, ShareMemoryPhysicalAddress);
		break;
	case RTK_DEMOD_MODE_DTMB:
		rtd_outl(HDIC_REGISTER_BUS_hdic_mem_bus_ctrl4_reg, ShareMemoryPhysicalAddress);
		break;

	default:
		RTK_DEMOD_WARNING("TV MODE not support at DtvDemodMemRemapping! TV_MODE = %d \n", mode);
		return FUNCTION_ERROR;
		break;

	}


	return FUNCTION_SUCCESS;
}
*/


int DtvDemodTPOutEn(unsigned char enable)
{
	rtd_maskl(DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_reg, ~DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_demod_tp_out_enable_mask, DTV_DEMOD_MISC_DEMOD_TP_OUT_EN_demod_tp_out_enable(enable));
	RTK_DEMOD_INFO("DtvRDemod TP Output enable = %u !!!\n", enable);
	return FUNCTION_SUCCESS;
}


int DtvDemodInitialization(RTK_DEMOD_MODE mode, int force_rst)
{

	IfdMbiasPowAndAdcPow();                     //20181219 retune initial flow
	TvFrontendPowerControl(0);                    //Turn off TVALL
	DemodPllDefault();
	DemodPllSetting(mode);
	tv_osal_usleep(50);
	//DemodAdcDefault();
	DemodAdcSetting(mode);
	tv_osal_usleep(50);
	TvFrontendPowerControl(1);                    //Turn on TVFrontend
	tv_osal_usleep(50);

	//Frontend Path Setting
	DemodFrontendPathSetting(mode);


	DtvDemodEnable(mode);                       //Turn on DTVDemod
	//tv_osal_msleep(10);
	tv_osal_usleep(50);
	DemodBisrCheck();


	DtvDemodReset = _BIT(mode);

	if (!DtvIsDemodClockEnable(mode)) {
		RTK_DEMOD_WARNING("init demod with demod clock disabled, please enable demod clock first\n");
	}

	m_realtek_TvSys_mode = mode;
	return CheckDemodReset(mode);
}


int GetDemodTvSysMode(TV_SYSTEM_TYPE * mode)
{
	if (m_realtek_TvSys_mode == RTK_DEMOD_MODE_DTMB)
		*mode = TV_SYS_TYPE_DTMB;
	else if (m_realtek_TvSys_mode == RTK_DEMOD_MODE_DVBT)
		*mode = TV_SYS_TYPE_DVBT;
	else if (m_realtek_TvSys_mode == RTK_DEMOD_MODE_DVBT2)
		*mode = TV_SYS_TYPE_DVBT2;
	else if (m_realtek_TvSys_mode == RTK_DEMOD_MODE_DVBC)
		*mode = TV_SYS_TYPE_DVBC;
	else if (m_realtek_TvSys_mode == RTK_DEMOD_MODE_ATSC)
		*mode = TV_SYS_TYPE_ATSC;
	else if (m_realtek_TvSys_mode == RTK_DEMOD_MODE_QAM)
		*mode = TV_SYS_TYPE_OPENCABLE;
	else if (m_realtek_TvSys_mode == RTK_DEMOD_MODE_ISDB)
		*mode = TV_SYS_TYPE_ISDBT;
	else if (m_realtek_TvSys_mode == RTK_DEMOD_MODE_DVBS)
		*mode = TV_SYS_TYPE_DVBS;
	else if (m_realtek_TvSys_mode == RTK_DEMOD_MODE_DVBS2)
		*mode = TV_SYS_TYPE_DVBS2;
	else if (m_realtek_TvSys_mode == RTK_DEMOD_MODE_DVBS2X)
		*mode = TV_SYS_TYPE_DVBS2;
	else if (m_realtek_TvSys_mode == RTK_DEMOD_MODE_SPEC_AN)
		*mode = TV_SYS_TYPE_UNKNOWN;

	return FUNCTION_SUCCESS;
}


int CheckDemodReset(RTK_DEMOD_MODE mode)
{
//	assert(mode < RTK_DEMOD_MODE_MAX);
	if (DtvDemodReset & _BIT(mode)) {
		RTK_DEMOD_INFO("CheckDemodReset: Demod %d has been reset (%x)\n", mode, DtvDemodReset);
		return 1;
	}
	return 0;
}


void ClearDemodReset(RTK_DEMOD_MODE mode)
{
	if (CheckDemodReset(mode)) {
		DtvDemodReset &= ~_BIT(mode);
		RTK_DEMOD_INFO("ClearDemodReset: reset flag of Demod %d has been cleared (%x)\n", mode, DtvDemodReset);
	}
}


int DemodTsOutClkCtrl(unsigned int TsClkKHz)
{
	//tpo_clk(MHz) = 250 / (pre + post + 2)
	//pre + post + 2 = 250 / tpo_clk(MHz)
	//pre + post + 2 = 250 *1000 / tpo_clk(KHz)
	//pre:0~511, post: 0~511
	unsigned int pre_div = 0, post_div = 0, result = 0;
	result = TPO_DIVIDEND_CONSTANT / TsClkKHz;
	if (result < TPO_DVISOR_CONSTANT)
		result = TPO_DVISOR_CONSTANT;
	result = result - TPO_DVISOR_CONSTANT;

	pre_div = (result + 1) / 2;
	if (pre_div > 511)
		pre_div = 511;

	post_div = result - pre_div;
	if (post_div > 511)
		post_div = 511;

	RHAL_TPOUT_SetClockSpeed(0, pre_div, post_div, 0);

	return FUNCTION_SUCCESS;
}


int DemodBisrCheck(void)
{

	int loopcnt = 0;

	rtd_maskl(DTV_DEMOD_MISC_BISR_RSTN_reg, ~DTV_DEMOD_MISC_BISR_RSTN_bisr_rstn_memory_bank_07_2_mask, DTV_DEMOD_MISC_BISR_RSTN_bisr_rstn_memory_bank_07_2(1));

	while (DTV_DEMOD_MISC_BISR_DONE_get_memory_bank_07_2_bisr_done(rtd_inl(DTV_DEMOD_MISC_BISR_DONE_reg)) != 1) {
		loopcnt++;
		tv_osal_usleep(100);
		if (loopcnt > 120)
			break;
	}

	RTK_DEMOD_INFO("BisrCheck done_status= %d (loopcnt=%d) \n", DTV_DEMOD_MISC_BISR_DONE_get_memory_bank_07_2_bisr_done(rtd_inl(DTV_DEMOD_MISC_BISR_DONE_reg)), loopcnt);

	rtd_maskl(DTV_DEMOD_MISC_BISR_HOLD_REMAP_reg, ~DTV_DEMOD_MISC_BISR_HOLD_REMAP_hold_remap_memory_bank_07_2_mask, DTV_DEMOD_MISC_BISR_HOLD_REMAP_hold_remap_memory_bank_07_2(1));

	return FUNCTION_SUCCESS;
}


/*------------------------------------------------------------------------------
 * Analog TV API
 *------------------------------------------------------------------------------*/

int AtvDemodPowerControl(unsigned char On)
{
	if (On) {
		CRT_CLK_OnOff(ATVDEMOD, CLK_ON, NULL);
		RTK_DEMOD_INFO("Analog demod is power on.\n");
	} else {
		CRT_CLK_OnOff(ATVDEMOD, CLK_OFF, NULL);
		RTK_DEMOD_INFO("Analog demod is power off.\n");
	}

	return FUNCTION_SUCCESS;
}

int AtvDemodInitialization(RTK_DEMOD_MODE mode)
{
	RTK_DEMOD_INFO("AtvDemodInitialization : mode %d\n", mode);
	IfdMbiasPowAndAdcPow();                     //20181219 retune initial flow
	TvFrontendPowerControl(0);                    //Turn off TVALL
	DemodPllDefault();
	DemodPllSetting(mode);
	tv_osal_usleep(50);
	//DemodAdcDefault();
	DemodAdcSetting(mode);
	tv_osal_usleep(50);
	TvFrontendPowerControl(1);                    //Turn on TVFrontend
	AtvDemodPowerControl(1);                    //Turn on ATVDemod
	tv_osal_usleep(50);
	DemodFrontendPathSetting(mode);

	return FUNCTION_SUCCESS;
}


/*------------------------------------------------------------------------------
 * DMA function
 *------------------------------------------------------------------------------*/

unsigned char* DemodDmaAddr;
unsigned char* DemodDmaNonCacheAddr;
U32BITS DemodDmaStartAddr, DemodDmaEndAddr;

int DtvDemodDMAAllocateMemory(void)
{
#if 0
	U32BITS phyAddr;
	//unsigned char* nonCachedAddr;

	if (DemodDmaAddr != 0)
		pli_freeContinuousMemoryMesg("DEMOD DMA", DemodDmaAddr);

	DemodDmaAddr = (unsigned char*)pli_allocContinuousMemoryMesg("DEMOD DMA", 0x800000, &DemodDmaNonCacheAddr, &phyAddr);
	DemodDmaStartAddr = phyAddr;
	DemodDmaEndAddr = phyAddr + 0x800000;
	RTK_DEMOD_INFO("DemodDmaAddr=%x, nonCachedAddr=%x, phyAddr=%x\n", DemodDmaAddr, DemodDmaNonCacheAddr, phyAddr);
	RTK_DEMOD_INFO("DemodDmaStartAddr=%x, DemodDmaEndAddr=%x\n", DemodDmaStartAddr, DemodDmaEndAddr);

	if (DemodDmaAddr == 0) return FUNCTION_ERROR;
	return FUNCTION_SUCCESS;
#endif
// ?? need to do 20150819
	return FUNCTION_ERROR;

}
int DtvDemodDMADump(BASE_INTERFACE_MODULE* pBaseInterface, unsigned char DeviceAddr, unsigned char mode)
{
#if 0
	char sFilePath[128];
	unsigned int iSize = 0;//, Width = 0, Height = 0;
	unsigned char *iStartAddr = 0;
	int iFileNum;
#ifdef CONFIG_DTV_DEMOD_USE_RBUSREG
	unsigned char i;
	U32BITS WritingAddr;

	WritingAddr = 0xE429;
	WritingAddr = WritingAddr * 4 + 0xb8040000;
	for (i = 0; i < 4; i++) {
		rtd_outl(WritingAddr + i * 4, (DemodDmaEndAddr >> (i * 8 + 3)) & 0xff);
	}
	WritingAddr = 0xE42D;
	WritingAddr = WritingAddr * 4 + 0xb8040000;
	for (i = 0; i < 4; i++) {
		rtd_outl(WritingAddr + i * 4, (DemodDmaStartAddr >> (i * 8 + 3)) & 0xff);
	}
	WritingAddr = 0xE438;
	WritingAddr = WritingAddr * 4 + 0xb8040000;
	if (mode == 0) //Dump ADC
		rtd_outl(WritingAddr, 0);
	else
		rtd_outl(WritingAddr, 1);

	//Enable DMA
	WritingAddr = 0xE432;
	WritingAddr = WritingAddr * 4 + 0xb8040000;
	rtd_outl(WritingAddr, 1);
#else
	unsigned char WritingBytes[10], WritingNum = 0;

	WritingBytes[0] = 0xE4;
	WritingBytes[1] = 0x29;
	WritingBytes[2] = (DemodDmaEndAddr >> 3) & 0xff;
	WritingBytes[3] = (DemodDmaEndAddr >> 11) & 0xff;
	WritingBytes[4] = (DemodDmaEndAddr >> 19) & 0xff;
	WritingBytes[5] = (DemodDmaEndAddr >> 27) & 0xff;
	WritingNum = 6;
	__realtek_i2c_write(pBaseInterface, DeviceAddr, &WritingBytes[0], WritingNum);
	WritingBytes[0] = 0xE4;
	WritingBytes[1] = 0x2D;
	WritingBytes[2] = (DemodDmaStartAddr >> 3) & 0xff;
	WritingBytes[3] = (DemodDmaStartAddr >> 11) & 0xff;
	WritingBytes[4] = (DemodDmaStartAddr >> 19) & 0xff;
	WritingBytes[5] = (DemodDmaStartAddr >> 27) & 0xff;
	WritingNum = 6;
	__realtek_i2c_write(pBaseInterface, DeviceAddr, &WritingBytes[0], WritingNum);

	if (mode == 0) { //Dump ADC
		WritingBytes[0] = 0xE4;
		WritingBytes[1] = 0x38;
		WritingBytes[2] = 0x0;
		WritingNum = 3;
	} else { //Dump DAGC
		WritingBytes[0] = 0xE4;
		WritingBytes[1] = 0x38;
		WritingBytes[2] = 0x1;
		WritingNum = 3;
	}
	__realtek_i2c_write(pBaseInterface, DeviceAddr, &WritingBytes[0], WritingNum);

	WritingBytes[0] = 0xE4;
	WritingBytes[1] = 0x32;
	WritingBytes[2] = 0x1; //Enable DMA
	WritingNum = 3;
	__realtek_i2c_write(pBaseInterface, DeviceAddr, &WritingBytes[0], WritingNum);

#endif

	iStartAddr = DemodDmaNonCacheAddr;
	iSize = 0x800000;

	system("mount -t vfat -o remount /dev/sda1 /mnt/usbmounts/sda1");
	sprintf(sFilePath, "%s/%s%s", "/mnt/usbmounts/sda1/", "DEMOD_DMA", ".bin"); //Dump to USB

	RTK_DEMOD_INFO("%s\n", sFilePath);

	FILE *pFile = fopen(sFilePath, "w");
	if (pFile == NULL) {
		RTK_DEMOD_INFO("file open fail...\n");
	} else {
		iFileNum = fileno(pFile);
	}

	if (pFile) {
		unsigned int iCnt = 0, iBufIdx = 0;
		unsigned int *iCurAddr = (unsigned int*)iStartAddr;
		unsigned int bufArray[128];
		unsigned int iBuf = 0;

		while (iCnt < iSize) {
			RTK_DEMOD_INFO(".");
			iBuf = *iCurAddr;
			bufArray[iBufIdx] = iBuf;
			iBufIdx ++;

			if (iBufIdx >= 128) {
				fwrite(bufArray, 128 * 4, 1, pFile);
				iBufIdx = 0;
			}

			iCnt += 4;
			iCurAddr += 1; //move pointer 4byte
		}
		RTK_DEMOD_INFO("\n");
		// last
		if (iBufIdx > 0) {
			fwrite(bufArray, iBufIdx * 4, 1, pFile);
			iBufIdx = 0;
		}
		RTK_DEMOD_INFO(".\n");
		if (0 != fflush(pFile))
			RTK_DEMOD_INFO("Flash to file fail\n");

		// Sync to device

		if (0 != fsync(iFileNum)) {
			RTK_DEMOD_INFO("fsync fail\n");
			if (fdatasync(iFileNum) == -1) {
				RTK_DEMOD_INFO("fdatasync error!!\n");
			}
		}

		fclose(pFile);
		RTK_DEMOD_INFO("write to file %s, size = %d\n", sFilePath, iSize);
	} else {
		RTK_DEMOD_INFO("write file Error!\n");
	}
#ifdef CONFIG_DTV_DEMOD_USE_RBUSREG
	//Disable DMA

	WritingAddr = 0xE432;
	WritingAddr = WritingAddr * 4 + 0xb8040000;
	rtd_outl(WritingAddr, 0);
#else
	WritingBytes[0] = 0xE4;
	WritingBytes[1] = 0x32;
	WritingBytes[2] = 0x0; //Disable DMA
	WritingNum = 3;
	__realtek_i2c_write(pBaseInterface, DeviceAddr, &WritingBytes[0], WritingNum);
#endif
#endif
	return FUNCTION_SUCCESS;

}


/*------------------------------------------------------------------------------
 * Base Interface API
 *------------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
 * FUNC : __realtek_wait_ms
 *
 * DESC : wait function for merlin2 baseinterface
 *
 * PARM : pBIF  : Private Data that wants contain in this base class
 *        ms    : time to wait in ms
 *
 * RET  : N/A
 *------------------------------------------------------------------------------*/
void __realtek_wait_ms(BASE_INTERFACE_MODULE* pBIF, unsigned long ms)
{
	tv_osal_msleep(ms);
}



/*------------------------------------------------------------------------------
 * FUNC : __rtd299s_i2c_write
 *
 * DESC : i2c write function for rtd299s base if
 *
 * PARM : pBaseInterface    : handle of rtd299s baseif
 *        DeviceAddr        : device address
 *        pWritingBytes     : data to be written
 *        ByteNum           : number of data to write
 *
 * RET  : FUNCTION_SUCCESS / FUNCTION_ERROR
 *------------------------------------------------------------------------------*/
int __realtek_i2c_write(
	BASE_INTERFACE_MODULE*      pBaseInterface,
	unsigned char               DeviceAddr,
	const unsigned char*        pWritingBytes,
	U32BITS               ByteNum
)
{
	COMM* pComm;
	pBaseInterface->GetUserDefinedDataPointer(pBaseInterface, (void**)&pComm);
	return ENCODE_RET(pComm->SendWriteCommand(pComm, DeviceAddr, (unsigned char*) pWritingBytes, ByteNum, COMM_FLAG_HIGH_SPEED | COMM_FLAG_NO_GUARD_INTERVAL));
}



/*------------------------------------------------------------------------------
 * FUNC : __rtd299s_i2c_read
 *
 * DESC : i2c read function for rtd299s base if
 *
 * PARM : pBaseInterface    : handle of rtd299s baseif
 *        DeviceAddr        : device address
 *        pReadingBytes     : read data buffer
 *        ByteNum           : number of data to read
 *
 * RET  : FUNCTION_SUCCESS / FUNCTION_ERROR
 *------------------------------------------------------------------------------*/
int __realtek_i2c_read(
	BASE_INTERFACE_MODULE*      pBaseInterface,
	unsigned char               DeviceAddr,
	unsigned char*              pReadingBytes,
	U32BITS               ByteNum
)
{

	COMM* pComm ;
	pBaseInterface->GetUserDefinedDataPointer(pBaseInterface, (void**)&pComm);
	return ENCODE_RET(pComm->SendReadCommand(pComm, DeviceAddr, NULL, 0, pReadingBytes, ByteNum, COMM_FLAG_HIGH_SPEED | COMM_FLAG_NO_GUARD_INTERVAL));
}



/*------------------------------------------------------------------------------
 * FUNC : __realtek_rbus_i2c_write
 *
 * DESC : Rbus write function for realtek base if
 *
 * PARM : pBaseInterface    : handle of realtek baseif
 *        DeviceAddr        : device address
 *        pWritingBytes     : data to be written
 *        ByteNum           : number of data to write
 *
 * RET  : FUNCTION_SUCCESS / FUNCTION_ERROR
 *------------------------------------------------------------------------------*/
int __realtek_rbus_i2c_write(
	BASE_INTERFACE_MODULE*      pBaseInterface,
	unsigned char               DeviceAddr,
	const unsigned char*        pWritingBytes,
	U32BITS               ByteNum
)
{
	unsigned char i = 0;
	unsigned char RbusData;
	U32BITS DemodAddrMsb, DemodAddrLsb;
	U32BITS DemodAddr;

	DemodAddrMsb = pWritingBytes[0];
	DemodAddrLsb = pWritingBytes[1];
	DemodAddr = DemodAddrMsb * 256 + DemodAddrLsb;

	if (DemodAddr >= 0x3000 && DemodAddr <= 0x3fff) {
		//Demod 8051 RAM Address to Rbus Mapping: 0x3000~0x3FFF(RAM 4K) = 0xB814C000~0xB814FFFC
		RbusAddr = (DemodAddr & 0x00003fff) * 4 + 0xb8140000;
	} else {
		//Demod/8051 Controll Signal Address to Rbus Mapping: 0xD000~0xDFFF = 0xB8154000~B8157FFC
		RbusAddr = (DemodAddr & 0x00003fff) * 4 + 0xb8150000;
	}

	//printk("===(Write)DemodAddrMsb = 0x%x, DemodAddrLsb = 0x%x===\n", DemodAddrMsb, DemodAddrLsb);
	//printk("===(Write)RbusAddr = 0x%x, ByteNum = 0x%x===\n", RbusAddr, ByteNum);

	if (RbusAddr == 0xb814c000) { //8051 SRAM Start: 0x3000
		rtd_maskl(RTK_DTV_DEMOD_8051_GP_INT0_N_reg, ~RTK_DTV_DEMOD_8051_GP_INT0_N_bootcode_en_mask, RTK_DTV_DEMOD_8051_GP_INT0_N_bootcode_en(0x1));//Merlin4/Mac6p
		//rtd_maskl(REG_RTK_DEMOD_8051_SRAM_WRITE_EN, 0xFFFFFFFE, 0x00000001);//Merlin3/Mac5p
		//printk("[8051_SRAM_S]0xB815C004 = 0x%x\n", rtd_inl(0xB815C004));
	}

	//If ByteNum<2, Only record RbusAddr.
	if (ByteNum > 2) {
		for (i = 2; i < ByteNum; i++) {
			RbusData = pWritingBytes[i];
			//printk("RbusAddr = 0x%8x, RbusData = 0x%x, 0xB815C004 = 0x%x\n", RbusAddr + (i - 2) * 4, RbusData, rtd_inl(0xB815C004));

			rtd_outl(RbusAddr + (i - 2) * 4, RbusData);
			tv_osal_usleep(10);
		}
	}

	if ((RbusAddr + (i - 3) * 4) == 0xb814effc) { //0x3BFF (only use RAM 3K (3072) for ATSC)
		rtd_maskl(RTK_DTV_DEMOD_8051_GP_INT0_N_reg, ~RTK_DTV_DEMOD_8051_GP_INT0_N_bootcode_en_mask, RTK_DTV_DEMOD_8051_GP_INT0_N_bootcode_en(0x0));//Merlin4/Mac6p
		//rtd_maskl(REG_RTK_DEMOD_8051_SRAM_WRITE_EN, 0xFFFFFFFE, 0x00000000);//Merlin3/Mac5p
		//printk("[8051_SRAM_E]i = %u, 0xB815C004 = 0x%x\n", i, rtd_inl(0xB815C004));
	}
	return FUNCTION_SUCCESS;

}



/*------------------------------------------------------------------------------
 * FUNC : __realtek_rbus_i2c_read
 *
 * DESC : Rbus read function for realtek base if
 *
 * PARM : pBaseInterface    : handle of realtek baseif
 *        DeviceAddr        : device address
 *        pReadingBytes     : read data buffer
 *        ByteNum           : number of data to read
 *
 * RET  : FUNCTION_SUCCESS / FUNCTION_ERROR
 *------------------------------------------------------------------------------*/
int __realtek_rbus_i2c_read(
	BASE_INTERFACE_MODULE*      pBaseInterface,
	unsigned char               DeviceAddr,
	unsigned char*              pReadingBytes,
	U32BITS               ByteNum
)
{
	unsigned char i;
	unsigned char RbusData;
	//printk("===(Read)RbusAddr = 0x%8x, ByteNum = 0x%x===\n", RbusAddr, ByteNum);

	for (i = 0; i < ByteNum; i++) {
		RbusData = rtd_inl(RbusAddr + (i * 4));
		pReadingBytes[i] = RbusData;
		tv_osal_usleep(10);

		//printk("===(Read)pReadingBytes[%u] = 0x%8x\n", i,  RbusData);
	}
	return FUNCTION_SUCCESS;
}

/*------------------------------------------------------------------------------
 * FUNC : __realtek_a_rbus_i2c_write
 *
 * DESC : Rbus write function for realtek base if
 *
 * PARM : pBaseInterface    : handle of realtek baseif
 *        DeviceAddr        : device address
 *        pWritingBytes     : data to be written
 *        ByteNum           : number of data to write
 *
 * RET  : FUNCTION_SUCCESS / FUNCTION_ERROR
 *------------------------------------------------------------------------------*/

int __realtek_a_rbus_i2c_write(
	BASE_INTERFACE_MODULE*      pBaseInterface,
	unsigned char               DeviceAddr,
	const unsigned char*        pWritingBytes,
	U32BITS               ByteNum
)
{
	unsigned char RbusData = 0;
	unsigned char DemodBaseAddr, DemodOffsetAddr;

	if (ByteNum > 3) {
		RTK_DEMOD_WARNING("__realtek_a_rbus_i2c_write fail : do not support ByteNum = "PT_U32BITS" >3\n", ByteNum);
		return FUNCTION_ERROR;
	}

	RbusAddr = 0xb8160000;
	DemodBaseAddr = pWritingBytes[0];
	DemodOffsetAddr = pWritingBytes[1];

	if (DemodBaseAddr == 0x66)
		RbusAddr = RbusAddr | (0x30 << 10) | ((DemodOffsetAddr & 0xff) << 2);
	else if (DemodBaseAddr == 0x67)
		RbusAddr = RbusAddr | (0x31 << 10) | ((DemodOffsetAddr & 0xff) << 2);
	else if (DemodBaseAddr == 0x68)
		RbusAddr = RbusAddr | (0x32 << 10) | ((DemodOffsetAddr & 0xff) << 2);
	else if (DemodBaseAddr == 0x69)
		RbusAddr = RbusAddr | (0x33 << 10) | ((DemodOffsetAddr & 0xff) << 2);
	else if (DemodBaseAddr == 0x70)
		RbusAddr = RbusAddr | (0x34 << 10) | ((DemodOffsetAddr & 0xff) << 2);
	else if (DemodBaseAddr == 0x71)
		RbusAddr = RbusAddr | (0x35 << 10) | ((DemodOffsetAddr & 0xff) << 2);
	else if (DemodBaseAddr == 0x72)
		RbusAddr = RbusAddr | (0x36 << 10) | ((DemodOffsetAddr & 0xff) << 2);
	else if (DemodBaseAddr == 0x88)
		RbusAddr = RbusAddr | (0x37 << 10) | ((DemodOffsetAddr & 0xff) << 2);
	else if (DemodBaseAddr == 0x8a)
		RbusAddr = RbusAddr | (0x38 << 10) | ((DemodOffsetAddr & 0xff) << 2);
	else if (DemodBaseAddr == 0x95)
		RbusAddr = RbusAddr | (0x39 << 10) | ((DemodOffsetAddr & 0xff) << 2);
	else
		RbusAddr = RbusAddr | ((DemodBaseAddr & 0x3f) << 10) | ((DemodOffsetAddr & 0xff) << 2);


	//printk("===(Write)DemodAddrMsb = 0x%x, DemodAddrLsb = 0x%x===\n", DemodAddrMsb, DemodAddrLsb);
	//printk("===(Write)RbusAddr = 0x%x, ByteNum = 0x%x===\n", RbusAddr, ByteNum);

	//If ByteNum<2, Only record RbusAddr.

	if (ByteNum == 3) {
		RbusData = pWritingBytes[2];
		rtd_outl(RbusAddr, RbusData);
		tv_osal_usleep(10);
	}



	return FUNCTION_SUCCESS;

}



/*------------------------------------------------------------------------------
 * FUNC : __realtek_rbus_i2c_read
 *
 * DESC : Rbus read function for realtek base if
 *
 * PARM : pBaseInterface    : handle of realtek baseif
 *        DeviceAddr        : device address
 *        pReadingBytes     : read data buffer
 *        ByteNum           : number of data to read
 *
 * RET  : FUNCTION_SUCCESS / FUNCTION_ERROR
 *------------------------------------------------------------------------------*/
int __realtek_a_rbus_i2c_read(
	BASE_INTERFACE_MODULE*      pBaseInterface,
	unsigned char               DeviceAddr,
	unsigned char*              pReadingBytes,
	U32BITS               ByteNum
)
{
	unsigned char RbusData;

	if (ByteNum > 1) {
		RTK_DEMOD_WARNING("__realtek_a_rbus_i2c_read fail : do not support ByteNum = "PT_U32BITS">1\n", ByteNum);
		return FUNCTION_ERROR;
	}


	//printk("===(Read)RbusAddr = 0x%8x, ByteNum = 0x%x===\n", RbusAddr, ByteNum);

	RbusData = rtd_inl(RbusAddr);
	*pReadingBytes = RbusData;
	tv_osal_usleep(10);

	//printk("===(Read)pReadingBytes[%u] = 0x%8x\n", i,  RbusData);

	return FUNCTION_SUCCESS;
}




void*   pli_allocContinuousMemoryMesg(char *str, size_t size, unsigned char** nonCachedAddr, unsigned long *phyAddr)
{

	void *CachedAddr_local = NULL;
	void *nonCachedAddr_local = NULL;
	DUADDRESS phyAddr_local = 0;

	if (size <= 0)
		return 0;

	size &= 0x0fffffff;


	CachedAddr_local = dvr_malloc_uncached(size, &nonCachedAddr_local);


	if (!CachedAddr_local) {
		RTK_DEMOD_WARNING("[PLI] allocation failure... Allocate size = "PT_DEC_DUADDRESS"\n", size);
		return 0;
	}


	phyAddr_local = dvr_to_phys(CachedAddr_local);

	RTK_DEMOD_INFO("realtek_demod pli_allocContinuousMemoryMesg size=0x"PT_HEX_DUADDRESS" ptr=0x%p nonCachedAddr_local=0x%p phyAddr_local=0x"PT_HEX_DUADDRESS" \n", size, CachedAddr_local, nonCachedAddr_local, phyAddr_local);

	if (nonCachedAddr)
		*nonCachedAddr = (unsigned char*)nonCachedAddr_local;
	if (phyAddr)
		*phyAddr = (unsigned long) phyAddr_local;

	return CachedAddr_local;

}



unsigned int CravedoutMemoryQuery(unsigned long *pPhyAddr)
{

	unsigned int AllocateSize = 0;

	//*pPhyAddr = DEMOD_MEM_START_PHYS;
	//AllocateSize = DEMOD_MEM_LENGTH;

	AllocateSize = (unsigned int)carvedout_buf_query(CARVEDOUT_DEMOD, (void *)pPhyAddr);
	return AllocateSize;

}



void    pli_freeContinuousMemoryMesg(char *str, void *ptr)
{
	// ^^^^^^^^^^^^^^^^^^^^^^^^^^  ERROR   need to modify
	kfree(ptr);
}

