/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2012 by Chuck Chen <ycchen@realtek.com>
 *
 */

#ifndef __ASM_ARCH_IRQS_H
#define __ASM_ARCH_IRQS_H

#ifdef NR_IRQS
#undef NR_IRQS
#endif


#define NR_IRQS			256  // sync as hardware gic configuration

#ifndef RTK_USE_SPI_NO
#define RTK_USE_SPI_NO              32
#define SPI_NO(x)                   (RTK_USE_SPI_NO+x)			//spec for spi use from 32, 0-31 is for SGI and PPI

#define SPI_MISC_TIMER2			SPI_NO(2)
#define SPI_MISC_TIMER3			SPI_NO(19)
#define SPI_MISC_TIMER4			SPI_NO(60)
#define SPI_MISC_TIMER5			SPI_NO(19)
#define SPI_MISC_TIMER6			SPI_NO(19)
#define SPI_MISC_TIMER7			SPI_NO(19)
#define SPI_MISC_TIMER8			SPI_NO(19)
#define SPI_MISC_TIMER9			SPI_NO(19)
#define SPI_MISC_TIMER10		SPI_NO(19)
#define SPI_MISC_TIMER11		SPI_NO(19)

#define SPI_DDC				SPI_NO(6)
#define SPI_APLL			SPI_NO(6)
#define SPI_DISPI			SPI_NO(6)
#define SPI_DISPM			SPI_NO(6)
#define SPI_VODMA1			SPI_NO(8)
#define SPI_IF_DEMOD			SPI_NO(15)
#define SPI_VDEC			SPI_NO(9)
#define SPI_VBI				SPI_NO(10)

#define SPI_DISPD_DCTL			SPI_NO(7)
#define SPI_DISPD_DCTL2			SPI_NO(7)
#define SPI_DISPD_UZU			SPI_NO(7)
#define SPI_DISPD_OSD			SPI_NO(7)
#define SPI_PIF				SPI_NO(7)

#define SPI_DCSYS_SECURE		SPI_NO(48)
#define SPI_DCSYS			SPI_NO(4)
#define SPI_DC_PHY_MC			SPI_NO(4)
#define SPI_MC_SECURE			SPI_NO(48)
#define SPI_SB2_KCPU			SPI_NO(49)
#define SPI_SB2_SCPU			SPI_NO(4)

#define SPI_SB2_ACPU_SCPU		SPI_NO(3)
#define SPI_SB2_VCPU_SCPU		SPI_NO(3)
#define SPI_SB2_SCPU_EMCU		SPI_NO(3)

#define SPI_SB2_SW_INT_SCPU		SPI_NO(3)
#define SPI_SW_INT			SPI_SB2_SW_INT_SCPU 
#define SPI_ISO_EMCU_SCPU		SPI_NO(32)

#define SPI_AUDIO			SPI_NO(5)
#define SPI_AUDIO_DMA			SPI_NO(5)
#define SPI_AUDIO_EARC			SPI_NO(5)

#define SPI_SE_SCPU			SPI_NO(11)
#define SPI_SE_SECURE			SPI_NO(50)

#define SPI_CP_MCP			SPI_NO(12)
#define SPI_CP_MCP_SECURE		SPI_NO(51)

#define SPI_MD_KCPU			SPI_NO(52)
#define SPI_MD_SCPU			SPI_NO(13)

#define SPI_NF				SPI_NO(17)
#define SPI_NF_SECURE			SPI_NO(53)
#define SPI_EMMC			SPI_NO(18)
#define SPI_EMMC_SECURE			SPI_NO(54)


#define SPI_GPU_IRQ_GPU			SPI_NO(14)
#define SPI_GPU_IRQ_MMU			SPI_NO(42)
#define SPI_GPU_IRQ_EVENT		SPI_NO(43)
#define SPI_GPU_IRQ_JOB			SPI_NO(44)

#define SPI_CLUSTER_PMU_IRQ		SPI_NO(30)
#define SPI_GICP_PMU_IRQ		SPI_NO(31)

#define SPI_DTV_DEMOD			SPI_NO(38)
#define SPI_USB_EX			SPI_NO(21)
#define SPI_USB_TOP			SPI_NO(21)
#define SPI_TP				SPI_NO(22)
#define SPI_TP_SECURE			SPI_NO(55)

#define SPI_HDMI_RX_VIDEO		SPI_NO(23)
#define SPI_HDMI_RX_AUDIO		SPI_NO(23)

#define SPI_MISC_PWM1_PWM2		SPI_NO(37)
#define SPI_MISC			SPI_NO(19)  //GPIO/I2C/UART/SC
#define SPI_MISC_I2C_1_I2C_2		SPI_NO(56)
#define SPI_MISC_UART_1_UART2		SPI_NO(56)

#define SPI_MEMC			SPI_NO(29)
#define SPI_NNIP			SPI_NO(30)
#define SPI_NNIP_SECURE			SPI_NO(58)
#define SPI_THERMAL			SPI_NO(41)
#define SPI_THERMAL_KCPU		SPI_NO(57)

#define SPI_ISO_MISC_RTC		SPI_NO(1)
#define SPI_CEC				SPI_NO(25)
#define SPI_ISO_MISC			SPI_NO(25)
#define SPI_ISO_MISC_OFF		SPI_NO(25)
#define SPI_ISO_MISC_OFF_WDOG		SPI_NO(0)
#define SPI_ETN				SPI_NO(20)

#endif

#define IRQ_WDOG_NMI		SPI_ISO_MISC_OFF_WDOG
#define IRQ_RTC			SPI_RTC
#define IRQ_TIMER		SPI_MISC_TIMER2
#define IRQ_CPU2CPU		SPI_SB2_ACPU_SCPU	// ACPU/VCPU/VCPU2 to SCPU
#define IRQ_DCSYS		SPI_DCSYS		// DCSYS-PHY, DCSYS/TVSB/SB2 to SCPU
#define IRQ_AUDIO_DMA		SPI_AUDIO_DMA

#define IRQ_IMDOMAIN		SPI_APLL		// DDC/APLL/I/M-DOMAIN
#define IRQ_VODMA		SPI_VODMA1		// VODMA1
#define IRQ_DDOMAIN		SPI_DISPD_DCTL		// DCT/UZ/OSD compression/TVE
#define IRQ_VDEC		SPI_VDEC
#define IRQ_VBI			SPI_VBI
#define IRQ_SE			SPI_SE_SCPU
#define IRQ_MCP			SPI_CP_MCP
#define IRQ_MD			SPI_MD_SCPU
#define IRQ_GPU			SPI_GPU_IRQ_GPU
#define IRQ_GPU_JOB		SPI_GPU_IRQ_JOB
#define IRQ_GPU_MMU		SPI_GPU_IRQ_MMU
#define IRQ_GPU_EVENT		SPI_GPU_IRQ_EVENT
#define IRQ_IFDEMOD		SPI_IF_DEMOD
#define IRQ_NF			SPI_NF			// NF
#define IRQ_CR			SPI_EMMC		// CR/EMMC
#define IRQ_MISC		SPI_MISC		// GPIO/I2C/UART/SC/PCMCIA/EFUSE
#define IRQ_ETH			SPI_ETN			// ETH/GETH
#define IRQ_USB			SPI_USB_EX
#define IRQ_TP			SPI_TP
#define IRQ_HDMI		SPI_HDMI_RX_VIDEO
#define IRQ_CEC			SPI_CEC	// CEC/CBUS/MISC_ISO/MISC_ISO_OFF/SYNCP
#define IRQ_MEMC		SPI_MEMC

#define IRQ_DDEMOD		SPI_DTV_DEMOD			//DDEMOD
#define IRQ_THERMAL		SPI_THERMAL     		//Thermal
#define IRQ_PWM         SPI_MISC_PWM1_PWM2

#endif
