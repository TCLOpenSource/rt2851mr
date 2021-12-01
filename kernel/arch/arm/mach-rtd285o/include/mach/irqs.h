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

#define SPI_ISO_MISC_OFF_WDOG       SPI_NO(0)
#define SPI_ISO_MISC_RTC            SPI_NO(1)
#define SPI_MISC_TIMER2             SPI_NO(2)

#define SPI_SB2_ACPU_SCPU           SPI_NO(3)
#define SPI_SB2_VCPU_SCPU           SPI_NO(3)
#define SPI_SB2_EMCU_SCPU           SPI_NO(3)

#define SPI_DCSYS                   SPI_NO(4)
#define SPI_DC_PHY                  SPI_NO(4)
#define SPI_SB2_SCPU                SPI_NO(4)
#define SPI_ARM_WRAPPER             SPI_NO(4)

#define SPI_AUDIO                   SPI_NO(5)
#define SPI_AUDIO_DMA               SPI_NO(5)

#define SPI_DDC                     SPI_NO(6)
#define SPI_APLL                    SPI_NO(6)
#define SPI_DISPI                   SPI_NO(6)
#define SPI_DISPM                   SPI_NO(6)

#define SPI_DISPD_DCTL              SPI_NO(7)
#define SPI_DISPD_DCTL2              SPI_NO(7)
#define SPI_DISPD_UZU               SPI_NO(7)
#define SPI_DISPD_OSD               SPI_NO(7)
#define SPI_PIF                     SPI_NO(7)

#define SPI_VDEC                    SPI_NO(9)
#define SPI_VBI                     SPI_NO(10)
#define SPI_SE                      SPI_NO(11)
#define SPI_CP_MCP                  SPI_NO(12)
#define SPI_MD                      SPI_NO(13)
#define SPI_GP_IRQ                  SPI_NO(14)
#define SPI_IF_DEMOD                SPI_NO(15)
#define SPI_GP_PMU_IRQ              SPI_NO(16)
#define SPI_NF			    SPI_NO(17)

#define SPI_CR                      SPI_NO(18)
#define SPI_EMMC                    SPI_NO(18)

#define SPI_SW_INT                  SPI_NO(32)
#define SPI_SW_INT_SECURE           SPI_NO(59)

#define SPI_MISC_TIMER3             SPI_NO(19)
#define SPI_MISC_TIMER4             SPI_NO(60)
#define SPI_MISC_TIMER5             SPI_NO(19)
#define SPI_MISC_TIMER6             SPI_NO(19)
#define SPI_MISC_TIMER7             SPI_NO(19)
#define SPI_MISC_TIMER8             SPI_NO(19)
#define SPI_MISC_TIMER9             SPI_NO(19)
#define SPI_MISC_TIMER10            SPI_NO(19)
#define SPI_MISC_TIMER11            SPI_NO(19)
#define SPI_MISC_SCPU               SPI_NO(19)

#define SPI_ETN                     SPI_NO(20)
#define SPI_HOST_USB0_1             SPI_NO(21)
#define SPI_TP                      SPI_NO(22)
#define SPI_HDMI_RX                 SPI_NO(23)
#define SPI_CEC                     SPI_NO(25)
#define SPI_ISO_MISC                SPI_NO(25)
#define SPI_ISO_MISC_OFF            SPI_NO(25)

#define SPI_CLUSTERPMUIRQ           SPI_NO(30)
#define SPI_GICPMUIRQ               SPI_NO(31)

#define SPI_MISC_PWM                SPI_NO(37)
#define SPI_DTV_DEMOD               SPI_NO(38)
#define SPI_GP_PP2_MMU_IRQ          SPI_NO(39)
#define SPI_GP_PP2_IRQ              SPI_NO(40)
#define SPI_THERMAL                 SPI_NO(41)

#define SPI_GP_MMU_IRQ              SPI_NO(42)
#define SPI_GP_PP0_IRQ              SPI_NO(43)
#define SPI_GP_PP0_MMU_IRQ          SPI_NO(44)
#define SPI_GP_PP1_IRQ              SPI_NO(45)
#define SPI_GP_PP1_MMU_IRQ          SPI_NO(46)
#define SPI_GP_PP_IRQ               SPI_NO(47)

#define SPI_DCSYS_SECURE            SPI_NO(48)
#define SPI_SB2_KCPU                SPI_NO(49)
#define SPI_SE_KCPU                 SPI_NO(50)
#define SPI_CP_MCP_KCPU             SPI_NO(51)
#define SPI_MD_KCPU                 SPI_NO(52)
#define SPI_EMMC_KCPU               SPI_NO(54)
#define SPI_TP_KCPU                 SPI_NO(55)
#define SPI_MISC_KCPU               SPI_NO(56)
#define SPI_THERMAL_KCPU            SPI_NO(57)

#define SPI_SB2_SW_INT		    SPI_NO(32)

#define SPI_NF_SECURE		    SPI_NO(53)
#define SPI_SB2_SW_INT_SECURE	    SPI_NO(59)
#define SPI_SB2_ACPU_SCPU_SECURE    SPI_NO(58)
#define SPI_SB2_VCPU_SCPU_SECURE    SPI_NO(58)
#define SPI_SB2_KCPU_SCPU_SECURE    SPI_NO(58)
#define SPI_SB2_EMCU_SCPU_SECURE    SPI_NO(58)


#endif

//Redefine SPI to IRQ or FIQ prefix naming which use by modules
#define IRQ_WDOG_NMI                SPI_ISO_MISC_OFF_WDOG
#define IRQ_RTC                     SPI_ISO_MISC_RTC
#define IRQ_MISC_TIMER2             SPI_MISC_TIMER2
#define IRQ_TIMER                   SPI_MISC_TIMER2    //compatible for old source
#define IRQ_CPU2CPU                 SPI_SB2_ACPU_SCPU  //one of SPI_SB2_ACPU_SCPU/SPI_SB2_VCPU_SCPU/SPI_SB2_KCPU_SCPU/SPI_SB2_EMCU_SCPU
#define IRQ_DCSYS                   SPI_DCSYS
#define IRQ_AUDIO_DMA               SPI_AUDIO_DMA
#define IRQ_MISC_TIMER              IRQ_AUDIO_DMA      //compatible only
#define IRQ_IMDOMAIN                SPI_DISPM          //one of SPI_DISPM/SPI_DISPI/SPI_APLL/SPI_DDC
#define IRQ_DDOMAIN                 SPI_DISPD_DCTL
#define IRQ_VDEC                    SPI_VDEC
#define IRQ_VBI                     SPI_VBI
#define IRQ_SE                      SPI_SE

#define IRQ_MCP                     SPI_CP_MCP
#define IRQ_MD                      SPI_MD

#define IRQ_IFDEMOD                 SPI_IF_DEMOD
#define IRQ_CR                      SPI_CR            // CR/EMMC

#define IRQ_MISC                    SPI_MISC_SCPU
#define IRQ_ETH                     SPI_ETN
#define IRQ_USB                     SPI_HOST_USB0_1
#define IRQ_TP                      SPI_TP 
#define IRQ_HDMI                    SPI_HDMI_RX      
#define IRQ_CEC                     SPI_CEC
#define IRQ_DDEMOD                  SPI_DTV_DEMOD     //DDEMOD
#define IRQ_THERMAL                 SPI_THERMAL       //Thermal
#define IRQ_PWM                     SPI_MISC_PWM
//GPU related
#define IRQ_GPU                     SPI_GP_IRQ
#define IRQ_GPU_PMU                 SPI_GP_PMU_IRQ
#define IRQ_GPU_PP2_MMU             SPI_GP_PP2_MMU_IRQ
#define IRQ_GPU_PP2                 SPI_GP_PP2_IRQ
#define IRQ_GPU_MMU                 SPI_GP_MMU_IRQ
#define IRQ_GPU_PP0                 SPI_GP_PP0_IRQ
#define IRQ_GPU_PP0_MMU             SPI_GP_PP0_MMU_IRQ
#define IRQ_GPU_PP1                 SPI_GP_PP1_IRQ
#define IRQ_GPU_PP1_MMU             SPI_GP_PP1_MMU_IRQ
#define IRQ_GPU_PP                  SPI_GP_PP_IRQ

//Secure Int can be irq or fiq of GIC600, here using IRQ 
#define IRQ_SECURE_DCSYS            SPI_DCSYS_SECURE              //DCSYS to KCPU
#define IRQ_SECURE_SB2              SPI_SB2_KCPU              //SB2 to KCPU
#define IRQ_SECURE_SE               SPI_SE_KCPU              //SE to KCPU
#define IRQ_SECURE_MCP              SPI_CP_MCP_KCPU              //MCP to KCPU
#define IRQ_SECURE_MD               SPI_MD_KCPU              //MD to KCPU
#define IRQ_SECURE_EMMC             SPI_EMMC_KCPU              //EMMC to KCPU
#define IRQ_SECURE_TP               SPI_TP_KCPU              //TP to KCPU
#define IRQ_SECURE_MISC             SPI_MISC_KCPU              //I2C1/I2C2/UART1/UART2 to KCPU
#define IRQ_SECURE_THERMAL          SPI_THERMAL_KCPU              //Thermal to KCPU
#define IRQ_SECURE_CPU2CPU          SPI_SB2_ACPU_SCPU_SECURE                                                      //AVK to secureCPU
#endif
