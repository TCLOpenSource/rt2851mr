/**
 * @file hal_dm.c
 * @brief This file is for  DM controller.
 * @date September.12.2014
 * @version V0.0.1
 * @author Martin Yan
 * @par Copyright (C) 2014 Real-Image Co. LTD
 * @par History:
 *			Version: 0.0.1
*/

#include "memc_isr/Common/kw_debug.h"
#include "memc_isr/Common/kw_common.h"
#include "memc_isr/Driver/regio.h"
#include "memc_isr/memc_reg_def.h"
#include "memc_isr/PQL/PQLPlatformDefs.h"
#if (IC_K5LP || IC_K6LP)
#include <rbus/mc_dma_reg.h>
#include <rbus/me_share_dma_reg.h>
#endif

#ifdef CONFIG_ARM64 //ARM32 compatible
// for register dump
#include <tvscalercontrol/io/ioregdrv.h>
#undef rtd_outl
#define rtd_outl(x, y)     								IoReg_Write32(x,y)
#undef rtd_inl
#define rtd_inl(x)     									IoReg_Read32(x)
#undef rtd_maskl
#define rtd_maskl(x, y, z)     							IoReg_Mask32(x,y,z)
#undef rtd_setbits
#define rtd_setbits(offset, Mask) rtd_outl(offset, (rtd_inl(offset) | Mask))
#undef rtd_clearbits
#define rtd_clearbits(offset, Mask) rtd_outl(offset, ((rtd_inl(offset) & ~(Mask))))
#endif

/**
 * @brief This function get kmc 00 start address 0
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc00StartAddress0(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_00_start_address0
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address0),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function get kmc 00 start address 1
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc00StartAddress1(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_00_start_address1
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address1),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function get kmc 00 start address 2
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc00StartAddress2(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_00_start_address2
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address2),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function get kmc 00 start address 3
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc00StartAddress3(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_00_start_address3
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address3),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function get kmc 00 start address 4
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc00StartAddress4(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_00_start_address4
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address4),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function get kmc 00 start address 5
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc00StartAddress5(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_00_start_address5
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address5),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function get kmc 00 line offset address
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc00LineOffsetAddress(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_00_line_offset_addr
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_line_offset_addr),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function set kmc 00 end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00EndAddress0(UINT32 u32Address)
{
	//reg_kmc_00_end_address0
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mend0_RBUS memc_mc_dma_mc_lf_wdma_mend0_reg;
	memc_mc_dma_mc_lf_wdma_mend0_reg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MEND0_reg);
	memc_mc_dma_mc_lf_wdma_mend0_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MEND0_reg,memc_mc_dma_mc_lf_wdma_mend0_reg.regValue);
	#else
	WriteRegister(KIWI_REG(MC_DMA_MC_LF_WDMA_MEND0_reg),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00EndAddress1(UINT32 u32Address)
{
        //reg_kmc_00_end_address1
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mend1_RBUS memc_mc_dma_mc_lf_wdma_mend1_eg;
	memc_mc_dma_mc_lf_wdma_mend1_eg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MEND1_reg);
	memc_mc_dma_mc_lf_wdma_mend1_eg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MEND1_reg,memc_mc_dma_mc_lf_wdma_mend1_eg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_end_address1),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00EndAddress2(UINT32 u32Address)
{
	//reg_kmc_00_end_address2
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mend2_RBUS memc_mc_dma_mc_lf_wdma_mend2_eg;
	memc_mc_dma_mc_lf_wdma_mend2_eg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MEND2_reg);
	memc_mc_dma_mc_lf_wdma_mend2_eg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MEND2_reg,memc_mc_dma_mc_lf_wdma_mend2_eg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_end_address2),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 3
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00EndAddress3(UINT32 u32Address)
{
	//reg_kmc_00_end_address3
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mend3_RBUS memc_mc_dma_mc_lf_wdma_mend3_eg;
	memc_mc_dma_mc_lf_wdma_mend3_eg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MEND3_reg);
	memc_mc_dma_mc_lf_wdma_mend3_eg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MEND3_reg,memc_mc_dma_mc_lf_wdma_mend3_eg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_end_address3),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 4
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00EndAddress4(UINT32 u32Address)
{
	//reg_kmc_00_end_address4
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mend4_RBUS memc_mc_dma_mc_lf_wdma_mend4_eg;
	memc_mc_dma_mc_lf_wdma_mend4_eg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MEND4_reg);
	memc_mc_dma_mc_lf_wdma_mend4_eg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MEND4_reg,memc_mc_dma_mc_lf_wdma_mend4_eg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_end_address4),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 5
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00EndAddress5(UINT32 u32Address)
{
	//reg_kmc_00_end_address5
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mend5_RBUS memc_mc_dma_mc_lf_wdma_mend5_eg;
	memc_mc_dma_mc_lf_wdma_mend5_eg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MEND5_reg);
	memc_mc_dma_mc_lf_wdma_mend5_eg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MEND5_reg,memc_mc_dma_mc_lf_wdma_mend5_eg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_end_address5),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 6
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00EndAddress6(UINT32 u32Address)
{
	//reg_kmc_00_end_address6
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mend6_RBUS memc_mc_dma_mc_lf_wdma_mend6_eg;
	memc_mc_dma_mc_lf_wdma_mend6_eg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MEND6_reg);
	memc_mc_dma_mc_lf_wdma_mend6_eg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MEND6_reg,memc_mc_dma_mc_lf_wdma_mend6_eg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_end_address6),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 7
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00EndAddress7(UINT32 u32Address)
{
	//reg_kmc_00_end_address7
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mend7_RBUS memc_mc_dma_mc_lf_wdma_mend7_eg;
	memc_mc_dma_mc_lf_wdma_mend7_eg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MEND7_reg);
	memc_mc_dma_mc_lf_wdma_mend7_eg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MEND7_reg,memc_mc_dma_mc_lf_wdma_mend7_eg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_end_address7),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 lr offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00LROffsetAddress(UINT32 u32Address)
{
	//reg_kmc_00_lr_offset_addr
	#if !(IC_K5LP || IC_K6LP)
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_lr_offset_addr),u32Address);
	#endif
}

/**
 * @brief This function set kmc 00 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00LineOffsetAddress(UINT32 u32Address)
{
	//reg_kmc_00_line_offset_addr
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_lstep_RBUS memc_mc_dma_mc_lf_wdma_lstep_reg;
	memc_mc_dma_mc_lf_wdma_lstep_reg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_LSTEP_reg);
	#if IC_K5LP
	u32Address = 0x00000004; //only for k5lp memory bug
	#endif
	memc_mc_dma_mc_lf_wdma_lstep_reg.line_offset_addr=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_LSTEP_reg,memc_mc_dma_mc_lf_wdma_lstep_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_line_offset_addr),u32Address);
	#endif
}

/**
 * @brief This function set kmc 01 start address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01StartAddress0(UINT32 u32Address)
{
	//reg_kmc_00_start_address0
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mstart0_RBUS memc_mc_dma_mc_lf_wdma_mstart0_reg;
	memc_mc_dma_mc_lf_wdma_mstart0_reg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MSTART0_reg);
	memc_mc_dma_mc_lf_wdma_mstart0_reg.regValue=u32Address;   // dma bug   >>4
	rtd_outl(MC_DMA_MC_LF_WDMA_MSTART0_reg,memc_mc_dma_mc_lf_wdma_mstart0_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address0),u32Address);
	#endif
}

/**
 * @brief This function set kmc 01 start address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01StartAddress1(UINT32 u32Address)
{
	//reg_kmc_00_start_address1
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mstart1_RBUS memc_mc_dma_mc_lf_wdma_mstart1_reg;
	memc_mc_dma_mc_lf_wdma_mstart1_reg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MSTART1_reg);
	memc_mc_dma_mc_lf_wdma_mstart1_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MSTART1_reg,memc_mc_dma_mc_lf_wdma_mstart1_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address1),u32Address);
	#endif
}

/**
 * @brief This function set kmc 01 start address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01StartAddress2(UINT32 u32Address)
{
	//reg_kmc_00_start_address2
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mstart2_RBUS memc_mc_dma_mc_lf_wdma_mstart2_reg;
	memc_mc_dma_mc_lf_wdma_mstart2_reg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MSTART2_reg);
	memc_mc_dma_mc_lf_wdma_mstart2_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MSTART2_reg,memc_mc_dma_mc_lf_wdma_mstart2_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address2),u32Address);
	#endif
}

/**
 * @brief This function set kmc 01 start address 3
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01StartAddress3(UINT32 u32Address)
{
	//reg_kmc_00_start_address3
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mstart3_RBUS memc_mc_dma_mc_lf_wdma_mstart3_reg;
	memc_mc_dma_mc_lf_wdma_mstart3_reg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MSTART3_reg);
	memc_mc_dma_mc_lf_wdma_mstart3_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MSTART3_reg,memc_mc_dma_mc_lf_wdma_mstart3_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address3),u32Address);
	#endif
}

/**
 * @brief This function set kmc 01 start address 4
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01StartAddress4(UINT32 u32Address)
{
	//reg_kmc_00_start_address4
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mstart4_RBUS memc_mc_dma_mc_lf_wdma_mstart4_reg;
	memc_mc_dma_mc_lf_wdma_mstart4_reg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MSTART4_reg);
	memc_mc_dma_mc_lf_wdma_mstart4_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MSTART4_reg,memc_mc_dma_mc_lf_wdma_mstart4_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address4),u32Address);
	#endif
}

/**
 * @brief This function set kmc 01 start address 5
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01StartAddress5(UINT32 u32Address)
{
	//reg_kmc_00_start_address5
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mstart5_RBUS memc_mc_dma_mc_lf_wdma_mstart5_reg;
	memc_mc_dma_mc_lf_wdma_mstart5_reg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MSTART5_reg);
	memc_mc_dma_mc_lf_wdma_mstart5_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MSTART5_reg,memc_mc_dma_mc_lf_wdma_mstart5_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address5),u32Address);
	#endif
}

/**
 * @brief This function set kmc 01 start address 5
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01StartAddress6(UINT32 u32Address)
{
	//reg_kmc_00_start_address6
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mstart6_RBUS memc_mc_dma_mc_lf_wdma_mstart6_reg;
	memc_mc_dma_mc_lf_wdma_mstart6_reg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MSTART6_reg);
	memc_mc_dma_mc_lf_wdma_mstart6_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MSTART6_reg,memc_mc_dma_mc_lf_wdma_mstart6_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address6),u32Address);
	#endif
}

/**
 * @brief This function set kmc 01 start address 7
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01StartAddress7(UINT32 u32Address)
{
	//reg_kmc_00_start_address7
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_mstart7_RBUS memc_mc_dma_mc_lf_wdma_mstart7_reg;
	memc_mc_dma_mc_lf_wdma_mstart7_reg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_MSTART7_reg);
	memc_mc_dma_mc_lf_wdma_mstart7_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_LF_WDMA_MSTART7_reg,memc_mc_dma_mc_lf_wdma_mstart7_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_start_address7),u32Address);
	#endif
}

/**
 * @brief This function set kmc 01 lr offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01LROffsetAddress(UINT32 u32Address)
{
	//reg_kmc_01_lr_offset_addr
	#if !(IC_K5LP || IC_K6LP)
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_lr_offset_addr),u32Address);
	#endif
}

/**
 * @brief This function set kmc 01 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01LineOffsetAddress(UINT32 u32Address)
{
	//reg_kmc_01_line_offset_addr
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_lstep_RBUS memc_mc_dma_mc_hf_wdma_lstep_reg;
	memc_mc_dma_mc_hf_wdma_lstep_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_LSTEP_reg);
	#if (IC_K5LP)
	u32Address = 0x00000004; //only for k5lp memory bug
	#endif
	memc_mc_dma_mc_hf_wdma_lstep_reg.line_offset_addr=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_LSTEP_reg,memc_mc_dma_mc_hf_wdma_lstep_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_line_offset_addr),u32Address);
	#endif
}

/**
 * @brief This function set kmc 00 start address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00StartAddress0(UINT32 u32Address)
{
	//reg_kmc_01_start_address0
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mstart0_RBUS memc_mc_dma_mc_hf_wdma_mstart0_reg;
	memc_mc_dma_mc_hf_wdma_mstart0_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MSTART0_reg);
	memc_mc_dma_mc_hf_wdma_mstart0_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MSTART0_reg,memc_mc_dma_mc_hf_wdma_mstart0_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address0),u32Address);
	#endif
}

/**
 * @brief This function set kmc 00 start address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00StartAddress1(UINT32 u32Address)
{
	//reg_kmc_01_start_address1
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mstart1_RBUS memc_mc_dma_mc_hf_wdma_mstart1_reg;
	memc_mc_dma_mc_hf_wdma_mstart1_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MSTART1_reg);
	memc_mc_dma_mc_hf_wdma_mstart1_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MSTART1_reg,memc_mc_dma_mc_hf_wdma_mstart1_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address1),u32Address);
	#endif
}

/**
 * @brief This function set kmc 00 start address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00StartAddress2(UINT32 u32Address)
{
	//reg_kmc_01_start_address1
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mstart2_RBUS memc_mc_dma_mc_hf_wdma_mstart2_reg;
	memc_mc_dma_mc_hf_wdma_mstart2_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MSTART2_reg);
	memc_mc_dma_mc_hf_wdma_mstart2_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MSTART2_reg,memc_mc_dma_mc_hf_wdma_mstart2_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address2),u32Address);
	#endif
}

/**
 * @brief This function set kmc 00 start address 3
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00StartAddress3(UINT32 u32Address)
{
	//reg_kmc_01_start_address3
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mstart3_RBUS memc_mc_dma_mc_hf_wdma_mstart3_reg;
	memc_mc_dma_mc_hf_wdma_mstart3_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MSTART3_reg);
	memc_mc_dma_mc_hf_wdma_mstart3_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MSTART3_reg,memc_mc_dma_mc_hf_wdma_mstart3_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address3),u32Address);
	#endif
}

/**
 * @brief This function set kmc 00 start address 4
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00StartAddress4(UINT32 u32Address)
{
	//reg_kmc_01_start_address4
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mstart4_RBUS memc_mc_dma_mc_hf_wdma_mstart4_reg;
	memc_mc_dma_mc_hf_wdma_mstart4_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MSTART4_reg);
	memc_mc_dma_mc_hf_wdma_mstart4_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MSTART4_reg,memc_mc_dma_mc_hf_wdma_mstart4_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address4),u32Address);
	#endif
}

/**
 * @brief This function set kmc 00 start address 5
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00StartAddress5(UINT32 u32Address)
{
	//reg_kmc_01_start_address5
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mstart5_RBUS memc_mc_dma_mc_hf_wdma_mstart5_reg;
	memc_mc_dma_mc_hf_wdma_mstart5_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MSTART5_reg);
	memc_mc_dma_mc_hf_wdma_mstart5_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MSTART5_reg,memc_mc_dma_mc_hf_wdma_mstart5_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address5),u32Address);
	#endif
}

/**
 * @brief This function set kmc 00 start address 6
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00StartAddress6(UINT32 u32Address)
{
	//reg_kmc_01_start_address6
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mstart6_RBUS memc_mc_dma_mc_hf_wdma_mstart6_reg;
	memc_mc_dma_mc_hf_wdma_mstart6_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MSTART6_reg);
	memc_mc_dma_mc_hf_wdma_mstart6_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MSTART6_reg,memc_mc_dma_mc_hf_wdma_mstart6_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address6),u32Address);
	#endif
}

/**
 * @brief This function set kmc 00 start address 7
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc00StartAddress7(UINT32 u32Address)
{
	//reg_kmc_01_start_address7
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mstart7_RBUS memc_mc_dma_mc_hf_wdma_mstart7_reg;
	memc_mc_dma_mc_hf_wdma_mstart7_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MSTART7_reg);
	memc_mc_dma_mc_hf_wdma_mstart7_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MSTART7_reg,memc_mc_dma_mc_hf_wdma_mstart7_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address7),u32Address);
	#endif
}

/**
 * @brief This function get kmc 01 start address 0
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc01StartAddress0(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_01_start_address0
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address0),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function get kmc 01 start address 1
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc01StartAddress1(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_01_start_address1
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address1),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function get kmc 00 start address 2
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc01StartAddress2(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_01_start_address2
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address2),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function get kmc 00 start address 3
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc01StartAddress3(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_01_start_address3
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address3),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function get kmc 00 start address 4
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc01StartAddress4(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_01_start_address4
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address4),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function get kmc 00 start address 5
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc01StartAddress5(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_01_start_address5
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_start_address5),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function get kmc 00 line offset address
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKmc01LineOffsetAddress(VOID)
{
	UINT32 u32Val = 0;
	//reg_kmc_01_line_offset_addr
	#if !(IC_K5LP || IC_K6LP)
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_line_offset_addr),&u32Val);
	#endif
	return u32Val;
}

/**
 * @brief This function set kmc 00 end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01EndAddress0(UINT32 u32Address)
{
	//reg_kmc_01_end_address0
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mend0_RBUS memc_mc_dma_mc_hf_wdma_mend0_reg;
	memc_mc_dma_mc_hf_wdma_mend0_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MEND0_reg);
	memc_mc_dma_mc_hf_wdma_mend0_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MEND0_reg,memc_mc_dma_mc_hf_wdma_mend0_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_end_address0),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01EndAddress1(UINT32 u32Address)
{
	//reg_kmc_01_end_address1
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mend1_RBUS memc_mc_dma_mc_hf_wdma_mend1_reg;
	memc_mc_dma_mc_hf_wdma_mend1_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MEND1_reg);
	memc_mc_dma_mc_hf_wdma_mend1_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MEND1_reg,memc_mc_dma_mc_hf_wdma_mend1_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_end_address1),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01EndAddress2(UINT32 u32Address)
{
	//reg_kmc_01_end_address2
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mend2_RBUS memc_mc_dma_mc_hf_wdma_mend2_reg;
	memc_mc_dma_mc_hf_wdma_mend2_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MEND2_reg);
	memc_mc_dma_mc_hf_wdma_mend2_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MEND2_reg,memc_mc_dma_mc_hf_wdma_mend2_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_end_address2),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 3
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01EndAddress3(UINT32 u32Address)
{
	//reg_kmc_01_end_address3
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mend3_RBUS memc_mc_dma_mc_hf_wdma_mend3_reg;
	memc_mc_dma_mc_hf_wdma_mend3_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MEND3_reg);
	memc_mc_dma_mc_hf_wdma_mend3_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MEND3_reg,memc_mc_dma_mc_hf_wdma_mend3_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_end_address3),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 4
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01EndAddress4(UINT32 u32Address)
{
	//reg_kmc_01_end_address4
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mend4_RBUS memc_mc_dma_mc_hf_wdma_mend4_reg;
	memc_mc_dma_mc_hf_wdma_mend4_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MEND4_reg);
	memc_mc_dma_mc_hf_wdma_mend4_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MEND4_reg,memc_mc_dma_mc_hf_wdma_mend4_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_end_address4),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 5
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01EndAddress5(UINT32 u32Address)
{
	//reg_kmc_01_end_address5
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mend5_RBUS memc_mc_dma_mc_hf_wdma_mend5_reg;
	memc_mc_dma_mc_hf_wdma_mend5_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MEND5_reg);
	memc_mc_dma_mc_hf_wdma_mend5_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MEND5_reg,memc_mc_dma_mc_hf_wdma_mend5_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_end_address5),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 6
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01EndAddress6(UINT32 u32Address)
{
	//reg_kmc_01_end_address6
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mend6_RBUS memc_mc_dma_mc_hf_wdma_mend6_reg;
	memc_mc_dma_mc_hf_wdma_mend6_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MEND6_reg);
	memc_mc_dma_mc_hf_wdma_mend6_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MEND6_reg,memc_mc_dma_mc_hf_wdma_mend6_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_end_address6),u32Address); 
	#endif
}

/**
 * @brief This function set kmc 00 end address 7
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmc01EndAddress7(UINT32 u32Address)
{
	//reg_kmc_01_end_address7
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_mend7_RBUS memc_mc_dma_mc_hf_wdma_mend7_reg;
	memc_mc_dma_mc_hf_wdma_mend7_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_MEND7_reg);
	memc_mc_dma_mc_hf_wdma_mend7_reg.regValue=u32Address;
	rtd_outl(MC_DMA_MC_HF_WDMA_MEND7_reg,memc_mc_dma_mc_hf_wdma_mend7_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_end_address7),u32Address); 
	#endif
}

/**
 * @brief This function set kmc vtotal
 * @param [in] UINT32 u32Vtotal
 * @retval VOID
*/
VOID HAL_DM_SetKmcVtotal(UINT32 u32Vtotal)
{
	//reg_kmc_vtotal
	#if !(IC_K5LP || IC_K6LP)
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_vtotal),u32Vtotal);
	#endif
}

VOID HAL_DM_SetKmcHVsize(UINT32 u32Hsize,UINT32 u32Vsize)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_kmc_hv_size
	mc_dma_mc_wdma_ctrl1_RBUS memc_mc_dma_mc_wdma_ctrl1_reg;
	memc_mc_dma_mc_wdma_ctrl1_reg.regValue= rtd_inl(MC_DMA_MC_WDMA_CTRL1_reg);
	memc_mc_dma_mc_wdma_ctrl1_reg.width=u32Hsize;
	memc_mc_dma_mc_wdma_ctrl1_reg.height=u32Vsize;
	rtd_outl(MC_DMA_MC_WDMA_CTRL1_reg,memc_mc_dma_mc_wdma_ctrl1_reg.regValue);
	#endif
}
VOID HAL_DM_SetKmc_LF_NUM_BL(UINT32 u32NUM,UINT32 u32BL,UINT32 u32REMAIN)
{
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_wdma_num_bl_RBUS memc_mc_dma_mc_lf_wdma_num_bl_reg;
	memc_mc_dma_mc_lf_wdma_num_bl_reg.regValue= rtd_inl(MC_DMA_MC_LF_WDMA_NUM_BL_reg);
	memc_mc_dma_mc_lf_wdma_num_bl_reg.num=u32NUM;
	memc_mc_dma_mc_lf_wdma_num_bl_reg.bl=u32BL;
	memc_mc_dma_mc_lf_wdma_num_bl_reg.remain=u32REMAIN;
	rtd_outl(MC_DMA_MC_LF_WDMA_NUM_BL_reg,memc_mc_dma_mc_lf_wdma_num_bl_reg.regValue);
	#endif
}
VOID HAL_DM_SetKmc_HF_NUM_BL(UINT32 u32NUM,UINT32 u32BL,UINT32 u32REMAIN)
{
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_wdma_num_bl_RBUS memc_mc_dma_mc_hf_wdma_num_bl_reg;
	memc_mc_dma_mc_hf_wdma_num_bl_reg.regValue= rtd_inl(MC_DMA_MC_HF_WDMA_NUM_BL_reg);
	memc_mc_dma_mc_hf_wdma_num_bl_reg.num=u32NUM;
	memc_mc_dma_mc_hf_wdma_num_bl_reg.bl=u32BL;
	memc_mc_dma_mc_hf_wdma_num_bl_reg.remain=u32REMAIN;
	rtd_outl(MC_DMA_MC_HF_WDMA_NUM_BL_reg,memc_mc_dma_mc_hf_wdma_num_bl_reg.regValue);
	#endif
}

/**
 * @brief This function set kmc input 3d enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmcInput3DEnable(BOOL bEnable)
{
	//reg_kmc_input_3d_enable
	#if !(IC_K5LP || IC_K6LP)  
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_input_3d_enable),(UINT32)bEnable);
	#endif
}

/**
 * @brief This function set kmc input 3d Mode
 * @param [in] UINT32 u32Mode
 * @retval VOID
*/
VOID HAL_DM_SetKmcInput3DMode(UINT32 u32Mode)
{
	//reg_kmc_input_3d_mode
	#if !(IC_K5LP || IC_K6LP)
 	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_input_3d_mode),u32Mode);	
	#endif
}

/**
 * @brief This function set kmc output 3d enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmcOutput3DEnable(BOOL bEnable)
{
	//reg_kmc_output_3d_enable
	#if !(IC_K5LP || IC_K6LP)
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_output_3d_enable),(UINT32)bEnable);	
	#endif
}

/**
 * @brief This function set kmc output 3d Mode
 * @param [in] UINT32 u32Mode
 * @retval VOID
*/
VOID HAL_DM_SetKmcOutput3DMode(UINT32 u32Mode)
{
	//reg_kmc_output_3d_mode
	#if !(IC_K5LP || IC_K6LP)
 	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_output_3d_mode),u32Mode);	
	#endif
}

/**
 * @brief This function set kmc 422 enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmc422Enable(BOOL bEnable)
{
	//reg_kmc_mode422_enable
	#if (IC_K5LP || IC_K6LP)  
	mc_dma_mc_wdma_ctrl0_RBUS memc_mc_dma_mc_wdma_ctrl0_reg;
	mc_dma_mc_rdma_ctrl_RBUS memc_mc_dma_mc_rdma_ctrl_reg;
	memc_mc_dma_mc_wdma_ctrl0_reg.regValue= rtd_inl(MC_DMA_MC_WDMA_CTRL0_reg);
	memc_mc_dma_mc_rdma_ctrl_reg.regValue= rtd_inl(MC_DMA_MC_RDMA_CTRL_reg);
	memc_mc_dma_mc_wdma_ctrl0_reg.dat_fmt=(UINT32)!bEnable;
	memc_mc_dma_mc_rdma_ctrl_reg.dat_fmt=(UINT32)!bEnable;
	rtd_outl(MC_DMA_MC_WDMA_CTRL0_reg,memc_mc_dma_mc_wdma_ctrl0_reg.regValue);
	rtd_outl(MC_DMA_MC_RDMA_CTRL_reg,memc_mc_dma_mc_rdma_ctrl_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_mode422_enable),(UINT32)bEnable);
	#endif
}

/**
 * @brief This function set kmc vflip enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmcVflipEnable(BOOL bEnable)
{
	//reg_kmc_vflip_enable
	#if (IC_K5LP || IC_K6LP)  
	mc_dma_mc_rdma_ctrl_RBUS memc_mc_dma_mc_rdma_ctrl_reg;
	memc_mc_dma_mc_rdma_ctrl_reg.regValue= rtd_inl(MC_DMA_MC_RDMA_CTRL_reg);
	memc_mc_dma_mc_rdma_ctrl_reg.vflip_enable=(UINT32)bEnable;
	rtd_outl(MC_DMA_MC_RDMA_CTRL_reg,memc_mc_dma_mc_rdma_ctrl_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_vflip_enable),(UINT32)bEnable);
	#endif
}

/**
 * @brief This function set dm pr mode
 * @param [in] UINT32 u32Mode
 * @retval VOID
*/
VOID HAL_DM_SetPRMode(UINT32 u32Mode)
{
	//reg_kmc_pr_mode
	#if !(IC_K5LP || IC_K6LP)
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_pr_mode),u32Mode);
	#endif
}

/**
 * @brief This function set kmc 00 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmc00WriteEnable(BOOL bEnable)
{
	//reg_kmc_00_write_enable
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_dma_wr_ctrl_RBUS memc_mc_dma_mc_lf_dma_wr_ctrl_reg;
	memc_mc_dma_mc_lf_dma_wr_ctrl_reg.regValue= rtd_inl(MC_DMA_MC_LF_DMA_WR_Ctrl_reg);
	memc_mc_dma_mc_lf_dma_wr_ctrl_reg.dma_enable=(UINT32)bEnable;
	rtd_outl(MC_DMA_MC_LF_DMA_WR_Ctrl_reg,memc_mc_dma_mc_lf_dma_wr_ctrl_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_00_write_enable),(UINT32)bEnable);
	#endif
}

/**
 * @brief This function set kmc 01 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmc01WriteEnable(BOOL bEnable)
{
	//reg_kmc_01_write_enable
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_dma_wr_ctrl_RBUS memc_mc_dma_mc_hf_dma_wr_ctrl_reg;
	memc_mc_dma_mc_hf_dma_wr_ctrl_reg.regValue= rtd_inl(MC_DMA_MC_HF_DMA_WR_Ctrl_reg);
	memc_mc_dma_mc_hf_dma_wr_ctrl_reg.dma_enable=(UINT32)bEnable;
	rtd_outl(MC_DMA_MC_HF_DMA_WR_Ctrl_reg,memc_mc_dma_mc_hf_dma_wr_ctrl_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_01_write_enable),(UINT32)bEnable);
	#endif
}

/**
 * @brief This function set kmc 04 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmc04ReadEnable(BOOL bEnable)
{
	//reg_kmc_04_read_enable
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_dma_wr_ctrl_RBUS memc_mc_dma_mc_hf_dma_wr_ctrl_reg;
	memc_mc_dma_mc_hf_dma_wr_ctrl_reg.regValue= rtd_inl(MC_DMA_MC_LF_I_DMA_RD_Ctrl_reg);
	memc_mc_dma_mc_hf_dma_wr_ctrl_reg.dma_enable=(UINT32)bEnable;
	rtd_outl(MC_DMA_MC_LF_I_DMA_RD_Ctrl_reg,memc_mc_dma_mc_hf_dma_wr_ctrl_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_04_read_enable),(UINT32)bEnable);
	#endif
}

/**
 * @brief This function set kmc 05 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmc05ReadEnable(BOOL bEnable)
{
	//reg_kmc_05_read_enable
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_i_dma_rd_ctrl_RBUS memc_mc_dma_mc_hf_i_dma_rd_ctrl_reg;
	memc_mc_dma_mc_hf_i_dma_rd_ctrl_reg.regValue= rtd_inl(MC_DMA_MC_HF_I_DMA_RD_Ctrl_reg);
	memc_mc_dma_mc_hf_i_dma_rd_ctrl_reg.dma_enable=(UINT32)bEnable;
	rtd_outl(MC_DMA_MC_HF_I_DMA_RD_Ctrl_reg,memc_mc_dma_mc_hf_i_dma_rd_ctrl_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_05_read_enable),(UINT32)bEnable);
	#endif
}

/**
 * @brief This function set kmc 06 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmc06ReadEnable(BOOL bEnable)
{
	//reg_kmc_06_read_enable
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_lf_p_dma_rd_ctrl_RBUS memc_mc_dma_mc_lf_p_dma_rd_ctrl_reg;
	memc_mc_dma_mc_lf_p_dma_rd_ctrl_reg.regValue= rtd_inl(MC_DMA_MC_LF_P_DMA_RD_Ctrl_reg);
	memc_mc_dma_mc_lf_p_dma_rd_ctrl_reg.dma_enable=(UINT32)bEnable;
	rtd_outl(MC_DMA_MC_LF_P_DMA_RD_Ctrl_reg,memc_mc_dma_mc_lf_p_dma_rd_ctrl_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_06_read_enable),(UINT32)bEnable);
	#endif
}

/**
 * @brief This function set kmc 07 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmc07ReadEnable(BOOL bEnable)
{
	//reg_kmc_07_read_enable
	#if (IC_K5LP || IC_K6LP)
	mc_dma_mc_hf_p_dma_rd_ctrl_RBUS memc_mc_dma_mc_hf_p_dma_rd_ctrl_reg;
	memc_mc_dma_mc_hf_p_dma_rd_ctrl_reg.regValue= rtd_inl(MC_DMA_MC_HF_P_DMA_RD_Ctrl_reg);
	memc_mc_dma_mc_hf_p_dma_rd_ctrl_reg.dma_enable=(UINT32)bEnable;
	rtd_outl(MC_DMA_MC_HF_P_DMA_RD_Ctrl_reg,memc_mc_dma_mc_hf_p_dma_rd_ctrl_reg.regValue);
	#else
	WriteRegister(KIWI_REG(FRC_TOP__KMC_DM_TOP__reg_kmc_07_read_enable),(UINT32)bEnable);
	#endif
}

/**
 * @brief This function get kme 00 start address 0
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKme00StartAddress0(VOID)
{
	UINT32 u32Val = 0;
	//reg_kme_00_start_address0
	ReadRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_start_address0),&u32Val);
	return u32Val;
}

/**
 * @brief This function get kme 00 start address 1
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKme00StartAddress1(VOID)
{
	UINT32 u32Val = 0;
	//reg_kme_00_start_address0
	ReadRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_start_address1),&u32Val);
	return u32Val;
}

/**
 * @brief This function get kme 00 start address 2
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKme00StartAddress2(VOID)
{
	UINT32 u32Val = 0;
	//reg_kme_00_start_address0
	ReadRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_start_address2),&u32Val);
	return u32Val;
}

/**
 * @brief This function get kme 00 start address 3
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKme00StartAddress3(VOID)
{
	UINT32 u32Val = 0;
	//reg_kme_00_start_address0
	ReadRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_start_address3),&u32Val);
	return u32Val;
}

/**
 * @brief This function get kme 00 start address 4
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKme00StartAddress4(VOID)
{
	UINT32 u32Val = 0;
	//reg_kme_00_start_address0
	ReadRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_start_address4),&u32Val);
	return u32Val;
}

/**
 * @brief This function get kme 00 start address 5
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKme00StartAddress5(VOID)
{
	UINT32 u32Val = 0;
	//reg_kme_00_start_address0
	ReadRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_start_address5),&u32Val);
	return u32Val;
}

/**
 * @brief This function get kme 00 line offset address
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKme00LineOffsetAddress(VOID)
{
	UINT32 u32Val = 0;
	//reg_kme_00_line_offset_addr
	ReadRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_line_offset_addr),&u32Val);	
	return u32Val;
}

/**
 * @brief This function set kme 00 end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00EndAddress0(UINT32 u32Address)
{
	//reg_kme_00_end_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_end_address0),u32Address);	
}

/**
 * @brief This function set kme 00 end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00EndAddress1(UINT32 u32Address)
{
	//reg_kme_00_end_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_end_address1),u32Address);	
}

/**
 * @brief This function set kme 00 end address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00EndAddress2(UINT32 u32Address)
{
	//reg_kme_00_end_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_end_address2),u32Address);	
}

/**
 * @brief This function set kme 00 end address 3
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00EndAddress3(UINT32 u32Address)
{
	//reg_kme_00_end_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_end_address3),u32Address);	
}

/**
 * @brief This function set kme 00 end address 4
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00EndAddress4(UINT32 u32Address)
{
	//reg_kme_00_end_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_end_address4),u32Address);	
}

/**
 * @brief This function set kme 00 end address 5
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00EndAddress5(UINT32 u32Address)
{
	//reg_kme_00_end_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_end_address5),u32Address);	
}

#if 1  // K4Lp
/**
 * @brief This function set kme 00 end address 6
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00EndAddress6(UINT32 u32Address)
{
	//reg_kme_00_end_address6
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__kme_00_end_address6),u32Address);	
}

/**
 * @brief This function set kme 00 end address 7
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00EndAddress7(UINT32 u32Address)
{
	//reg_kme_00_end_address7
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__kme_00_end_address7),u32Address);	
}
#endif

/**
 * @brief This function set kme 08 end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme08EndAddress0(UINT32 u32Address)
{
	//reg_kme_08_end_address0
	WriteRegister(FRC_TOP__KME_DM_TOP1__kme_08_end_address0_ADDR, FRC_TOP__KME_DM_TOP1__kme_08_end_address0_BITSTART, FRC_TOP__KME_DM_TOP1__kme_08_end_address0_BITEND, u32Address);	
}

/**
 * @brief This function set kme 08 end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme08EndAddress1(UINT32 u32Address)
{
	//reg_kme_08_end_address1
	WriteRegister(FRC_TOP__KME_DM_TOP1__kme_08_end_address1_ADDR, FRC_TOP__KME_DM_TOP1__kme_08_end_address1_BITSTART, FRC_TOP__KME_DM_TOP1__kme_08_end_address1_BITEND, u32Address);	
}

/**
 * @brief This function set kme 10 end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme10EndAddress0(UINT32 u32Address)
{
	//reg_kme_10_end_address0
	WriteRegister(FRC_TOP__KME_DM_TOP1__kme_10_end_address0_ADDR, FRC_TOP__KME_DM_TOP1__kme_10_end_address0_BITSTART, FRC_TOP__KME_DM_TOP1__kme_10_end_address0_BITEND, u32Address);	
}

/**
 * @brief This function set kme 10 end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme10EndAddress1(UINT32 u32Address)
{
	//reg_kme_10_end_address1
	WriteRegister(FRC_TOP__KME_DM_TOP1__kme_10_end_address1_ADDR, FRC_TOP__KME_DM_TOP1__kme_10_end_address1_BITSTART, FRC_TOP__KME_DM_TOP1__kme_10_end_address1_BITEND, u32Address);	
}

/**
 * @brief This function get kme 12 start address 0
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKme12StartAddress0(VOID)
{
	UINT32 u32Val = 0;
	//reg_kme_00_start_address0
	ReadRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_12_start_address0),&u32Val);
	return u32Val;
}

/**
 * @brief This function get kme 12 start address 1
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKme12StartAddress1(VOID)
{
	UINT32 u32Val = 0;
	//reg_kme_00_start_address0
	ReadRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_12_start_address1),&u32Val);
	return u32Val;
}

/**
 * @brief This function get kme 12 line offset address
 * @param [in] VOID
 * @retval Address
*/
UINT32 HAL_DM_GetKme12LineOffsetAddress(VOID)
{
	UINT32 u32Val = 0;
	//reg_kme_00_line_offset_addr
	ReadRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_12_line_offset_addr),&u32Val);	
	return u32Val;
}

/**
 * @brief This function set kme 12 end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme12EndAddress0(UINT32 u32Address)
{
	//reg_kme_00_end_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_12_end_address0),u32Address);	
}

/**
 * @brief This function set kme 12 end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme12EndAddress1(UINT32 u32Address)
{
	//reg_kme_00_end_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_12_end_address1),u32Address);	
}

/**
 * @brief This function set kme 14 end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme14EndAddress0(UINT32 u32Address)
{
	//reg_kme_14_end_address0
	WriteRegister(FRC_TOP__KME_DM_TOP1__kme_14_end_address0_ADDR, FRC_TOP__KME_DM_TOP1__kme_14_end_address0_BITSTART, FRC_TOP__KME_DM_TOP1__kme_14_end_address0_BITEND, u32Address);	
}

/**
 * @brief This function set kme 14 end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme14EndAddress1(UINT32 u32Address)
{
	//reg_kme_14_end_address1
	WriteRegister(FRC_TOP__KME_DM_TOP1__kme_14_end_address1_ADDR, FRC_TOP__KME_DM_TOP1__kme_14_end_address1_BITSTART, FRC_TOP__KME_DM_TOP1__kme_14_end_address1_BITEND, u32Address);	
}

/**
 * @brief This function set kme 00 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme00WriteEnable(BOOL bEnable)
{
	//reg_kme_00_write_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_write_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 01 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme01ReadEnable(BOOL bEnable)
{
	// reg_kme_01_read_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_01_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 02 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme02ReadEnable(BOOL bEnable)
{
	// reg_kme_02_read_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_02_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 03 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme03ReadEnable(BOOL bEnable)
{
	// reg_kme_03_read_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_03_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 04 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme04WriteEnable(BOOL bEnable)
{
	//reg_kme_04_write_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_04_write_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 05 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme05WriteEnable(BOOL bEnable)
{
	//reg_kme_05_write_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_05_write_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 06 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme06ReadEnable(BOOL bEnable)
{
	// reg_kme_06_read_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_06_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 07 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme07ReadEnable(BOOL bEnable)
{
	// reg_kme_07_read_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_07_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 08 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme08WriteEnable(BOOL bEnable)
{
	// reg_kme_08_write_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_08_write_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 09 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme09ReadEnable(BOOL bEnable)
{
	// reg_kme_09_read_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_09_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 10 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme10WriteEnable(BOOL bEnable)
{
	// reg_kme_10_write_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_10_write_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 11 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme11ReadEnable(BOOL bEnable)
{
	// reg_kme_11_read_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_11_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 12 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme12WriteEnable(BOOL bEnable)
{
	// reg_kme_12_write_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_12_write_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 13 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme13ReadEnable(BOOL bEnable)
{
	// reg_kme_13_read_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_13_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 14 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme14WriteEnable(BOOL bEnable)
{
	// reg_kme_14_write_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_14_write_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 15 read enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKme15ReadEnable(BOOL bEnable)
{
	// reg_kme_15_read_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_15_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme input 3d enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmeInput3DEnable(BOOL bEnable)
{
	//reg_kme_input_3d_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_input_3d_enable),(UINT32)bEnable);	
}

/**
 * @brief This function set kme input 3d Mode
 * @param [in] UINT32 u32Mode
 * @retval VOID
*/
VOID HAL_DM_SetKmeInput3DMode(UINT32 u32Mode)
{
	//reg_kme_input_3d_mode
 	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_input_3d_mode),u32Mode);		
}

/**
 * @brief This function set kme output 3d enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmeOutput3DEnable(BOOL bEnable)
{
	//reg_kme_output_3d_enable
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_output_3d_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme output 3d Mode
 * @param [in] UINT32 u32Mode
 * @retval VOID
*/
VOID HAL_DM_SetKmeOutput3DMode(UINT32 u32Mode)
{
	//reg_kme_output_3d_mode
 	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_output_3d_mode),u32Mode);
}


/**
 * @brief This function set kme ME H/V active
 * @param [in] UINT32 u32Hactive
 * @param [in] UINT32 u32Vactive
 * @retval VOID
*/
VOID HAL_DM_SetKmeMEActive(UINT32 u32Hactive, UINT32 u32Vactive)
{
	// reg_kme_me_hactive
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_me_hactive),u32Hactive);
	// reg_kme_me_vactive
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_me_vactive),u32Vactive);
}

/**
 * @brief This function set kme MV H/V active
 * @param [in] UINT32 u32Hactive
 * @param [in] UINT32 u32Vactive
 * @retval VOID
*/
VOID HAL_DM_SetKmeMVActive(UINT32 u32Hactive, UINT32 u32Vactive)
{
	// reg_kme_mv_hactive
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_mv_hactive),u32Hactive);
	// reg_kme_mv_vactive
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_mv_vactive),u32Vactive);
}

/**
 * @brief This function set kme me hnum
 * @param [in] UINT32 u32Hnum
 * @retval VOID
*/
VOID HAL_DM_SetKmeMEHNum(UINT32 u32Hnum)
{
	// reg_kme_me_hnum
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_me_hnum),u32Hnum);
}

/**
 * @brief This function set kme mv hnum
 * @param [in] UINT32 u32Hnum
 * @retval VOID
*/
VOID HAL_DM_SetKmeMVHNum(UINT32 u32Hnum)
{
	// reg_kme_mv_hnum
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_mv_hnum),u32Hnum);
}

/**
 * @brief This function set kme ppi hnum
 * @param [in] UINT32 u32Hnum
 * @retval VOID
*/
VOID HAL_DM_SetKmePPIHNum(UINT32 u32Hnum)
{
	// reg_kme_ppi_hnum
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_ppi_hnum),u32Hnum);
}

/**
 * @brief This function set kme vflip enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmeVflipEnable(BOOL bEnable)
{
	//reg_kme_vflip_enable
#if 1  // K4Lp
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_vflip_enable),(UINT32)bEnable);	
#else
	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__reg_kme_system_vflip_enable),(UINT32)bEnable);	
#endif
}

/**
 * @brief This function set kme logo vflip enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmeLogoVflipEnable(BOOL bEnable)
{
	//reg_km_logo_vflip_en
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_vflip_en),(UINT32)bEnable);
}

/**
 * @brief This function set kme 00 start address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00StartAddress0(UINT32 u32Address)
{
	//reg_kme_00_start_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_start_address0),u32Address);	
}

/**
 * @brief This function set kme 00 start address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00StartAddress1(UINT32 u32Address)
{
	//reg_kme_00_start_address1
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_start_address1),u32Address);	
}

/**
 * @brief This function set kme 00 start address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00StartAddress2(UINT32 u32Address)
{
	//reg_kme_00_start_address2
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_start_address2),u32Address);	
}

/**
 * @brief This function set kme 00 start address 3
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00StartAddress3(UINT32 u32Address)
{
	//reg_kme_00_start_address3
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_start_address3),u32Address);	
}

/**
 * @brief This function set kme 00 start address 4
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00StartAddress4(UINT32 u32Address)
{
	//reg_kme_00_start_address4
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_start_address4),u32Address);	
}

/**
 * @brief This function set kme 00 start address 5
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00StartAddress5(UINT32 u32Address)
{
	//reg_kme_00_start_address5
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_start_address5),u32Address);	
}

/**
 * @brief This function set kme 00 start address 6
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00StartAddress6(UINT32 u32Address)
{
	//reg_kme_00_start_address6
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__kme_00_start_address6),u32Address);	
}

/**
 * @brief This function set kme 00 start address 7
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00StartAddress7(UINT32 u32Address)
{
	//reg_kme_00_start_address7
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__kme_00_start_address7),u32Address);	
}

/**
 * @brief This function set kme 04 start address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme04StartAddress0(UINT32 u32Address)
{
	//reg_kme_04_start_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_04_start_address0),u32Address);	
}

/**
 * @brief This function set kme 04 start address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme04StartAddress1(UINT32 u32Address)
{
	//reg_kme_04_start_address1
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_04_start_address1),u32Address);	
}

/**
 * @brief This function set kme 05 start address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme05StartAddress0(UINT32 u32Address)
{
	//reg_kme_05_start_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_05_start_address0),u32Address);	
}

/**
 * @brief This function set kme 05 start address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme05StartAddress1(UINT32 u32Address)
{
	//reg_kme_05_start_address1
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_05_start_address1),u32Address);	
}

/**
 * @brief This function set kme 08 start address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme08StartAddress0(UINT32 u32Address)
{
	//reg_kme_08_start_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_08_start_address0),u32Address);	
}

/**
 * @brief This function set kme 08 start address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme08StartAddress1(UINT32 u32Address)
{
	//reg_kme_08_start_address1
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_08_start_address1),u32Address);	
}

/**
 * @brief This function set kme 10 start address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme10StartAddress0(UINT32 u32Address)
{
	//reg_kme_10_start_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_10_start_address0),u32Address);	
}

/**
 * @brief This function set kme 10 start address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme10StartAddress1(UINT32 u32Address)
{
	//reg_kme_10_start_address1
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_10_start_address1),u32Address);	
}

/**
 * @brief This function set kme 12 start address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme12StartAddress0(UINT32 u32Address)
{
	//reg_kme_12_start_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_12_start_address0),u32Address);	
}

/**
 * @brief This function set kme 12 start address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme12StartAddress1(UINT32 u32Address)
{
	//reg_kme_12_start_address1
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_12_start_address1),u32Address);	
}

/**
 * @brief This function set kme 14 start address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme14StartAddress0(UINT32 u32Address)
{
	//reg_kme_14_start_address0
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_14_start_address0),u32Address);	
}

/**
 * @brief This function set kme 14 start address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme14StartAddress1(UINT32 u32Address)
{
	//reg_kme_14_start_address1
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_14_start_address1),u32Address);	
}

/**
 * @brief This function set kmv 01 start address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv01StartAddress0(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv01_start_address0),u32Address);	
}

/**
 * @brief This function set kmv 02 start address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv02StartAddress0(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv02_start_address0),u32Address);	
}

/**
 * @brief This function set kmv 04 start address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv04StartAddress0(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv04_start_address0),u32Address);	
}

/**
 * @brief This function set kmv 04 start address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv04StartAddress1(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv04_start_address1),u32Address);	
}

/**
 * @brief This function set kmv 04 start address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv04StartAddress2(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__mv04_start_address2),u32Address);	
}

/**
 * @brief This function set kmv 05 start address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv05StartAddress0(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv05_start_address0),u32Address);	
}

/**
 * @brief This function set kmv 05 start address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv05StartAddress1(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv05_start_address1),u32Address);	
}

#ifdef LBME2_DM_BUF
/**
 * @brief This function set kmv 12 start address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12StartAddress0(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_start_address0),u32Address);	
}

/**
 * @brief This function set kmv 12 start address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12StartAddress1(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_start_address1),u32Address);	
}

/**
 * @brief This function set kmv 12 start address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12StartAddress2(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_start_address2),u32Address);	
}

/**
 * @brief This function set kmv 12 start address 3
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12StartAddress3(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_start_address3),u32Address);	
}

/**
 * @brief This function set kmv 12 start address 4
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12StartAddress4(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_start_address4),u32Address);	
}

/**
 * @brief This function set kmv 12 start address 5
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12StartAddress5(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_start_address5),u32Address);	
}

/**
 * @brief This function set kmv 12 start address 6
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12StartAddress6(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_start_address6),u32Address);	
}

/**
 * @brief This function set kmv 12 start address 7
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12StartAddress7(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_start_address7),u32Address);	
}
#endif

/**
 * @brief This function set kmv 01 end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv01EndAddress0(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv01_end_address0),u32Address);	
}

/**
 * @brief This function set kmv 02 end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv02EndAddress0(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv02_end_address0),u32Address);	
}

/**
 * @brief This function set kmv 04 end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv04EndAddress0(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv04_end_address0),u32Address);	
}

/**
 * @brief This function set kmv 04 end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv04EndAddress1(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv04_end_address1),u32Address);	
}

/**
 * @brief This function set kmv 04 end address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv04EndAddress2(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__mv04_end_address2),u32Address);	
}

/**
 * @brief This function set kmv 05 end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv05EndAddress0(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv05_end_address0),u32Address);	
}

/**
 * @brief This function set kmv 05 end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv05EndAddress1(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv05_end_address1),u32Address);	
}

#ifdef LBME2_DM_BUF
/**
 * @brief This function set kmv 12 end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12EndAddress0(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_end_address0),u32Address);	
}

/**
 * @brief This function set kmv 12 end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12EndAddress1(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_end_address1),u32Address);	
}

/**
 * @brief This function set kmv 12 end address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12EndAddress2(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_end_address2),u32Address);	
}

/**
 * @brief This function set kmv 12 end address 3
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12EndAddress3(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_end_address3),u32Address);	
}

/**
 * @brief This function set kmv 12 end address 4
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12EndAddress4(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_end_address4),u32Address);	
}

/**
 * @brief This function set kmv 12 end address 5
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12EndAddress5(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_end_address5),u32Address);	
}

/**
 * @brief This function set kmv 12 end address 6
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12EndAddress6(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_end_address6),u32Address);	
}

/**
 * @brief This function set kmv 12 end address 7
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12EndAddress7(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_end_address7),u32Address);	
}
#endif

/**
 * @brief This function set kmv 01 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv01LineOffsetAddress(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv01_line_offset_addr),u32Address);	
}

/**
 * @brief This function set kmv 01 LR offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv01LROffsetAddress(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv01_lr_offset_addr),u32Address);	
}

/**
 * @brief This function set kmv 02 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv02LineOffsetAddress(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv02_line_offset_addr),u32Address);	
}

/**
 * @brief This function set kmv 02 LR offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv02LROffsetAddress(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv02_lr_offset_addr),u32Address);	
}

/**
 * @brief This function set kmv 04 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv04LineOffsetAddress(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv04_line_offset_addr),u32Address);	
}

/**
 * @brief This function set kmv 04 LR offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv04LROffsetAddress(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv04_lr_offset_addr),u32Address);	
}

/**
 * @brief This function set kmv 05 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv05LineOffsetAddress(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv05_line_offset_addr),u32Address);	
}

/**
 * @brief This function set kmv 05 LR offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv05LROffsetAddress(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv05_lr_offset_addr),u32Address);	
}

#ifdef LBME2_DM_BUF
/**
 * @brief This function set kmv 12 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12LineOffsetAddress(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_line_offset_addr),u32Address);	
}

/**
 * @brief This function set kmv 12 LR offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKmv12LROffsetAddress(UINT32 u32Address)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_lr_offset_addr),u32Address);	
}
#endif


/**
 * @brief This function set ME1RPT_ppfv start address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetME1RPT_ppfv_StartAddress0(UINT32 u32Address)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_ME1RPT_ppfv_start_address0
	me_share_dma_me1_wdma0_mstart0_RBUS me_share_dma_me1_wdma0_mstart0_reg;
	me_share_dma_me1_wdma0_mstart0_reg.regValue= rtd_inl(ME_SHARE_DMA_ME1_WDMA0_MSTART0_reg);
	me_share_dma_me1_wdma0_mstart0_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_ME1_WDMA0_MSTART0_reg,me_share_dma_me1_wdma0_mstart0_reg.regValue);
	#endif
}
/**
 * @brief This function set ME1RPT_ppfv end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetME1RPT_ppfv_EndAddress0(UINT32 u32Address)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_ME1RPT_ppfv_end_address0
	me_share_dma_me1_wdma0_mend0_RBUS me_share_dma_me1_wdma0_mend0_reg;
	me_share_dma_me1_wdma0_mend0_reg.regValue= rtd_inl(ME_SHARE_DMA_ME1_WDMA0_MEND0_reg);
	me_share_dma_me1_wdma0_mend0_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_ME1_WDMA0_MEND0_reg,me_share_dma_me1_wdma0_mend0_reg.regValue);
	#endif
}
/**
 * @brief This function set ME1RPT_ppfv start address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetME1RPT_ppfv_StartAddress1(UINT32 u32Address)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_ME1RPT_ppfv_start_address1
	me_share_dma_me1_wdma0_mstart1_RBUS me_share_dma_me1_wdma0_mstart1_reg;
	me_share_dma_me1_wdma0_mstart1_reg.regValue= rtd_inl(ME_SHARE_DMA_ME1_WDMA0_MSTART1_reg);
	me_share_dma_me1_wdma0_mstart1_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_ME1_WDMA0_MSTART1_reg,me_share_dma_me1_wdma0_mstart1_reg.regValue);
	#endif
}
/**
 * @brief This function set ME1RPT_ppfv end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetME1RPT_ppfv_EndAddress1(UINT32 u32Address)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_ME1RPT_ppfv_end_address1
	me_share_dma_me1_wdma0_mend1_RBUS me_share_dma_me1_wdma0_mend1_reg;
	me_share_dma_me1_wdma0_mend1_reg.regValue= rtd_inl(ME_SHARE_DMA_ME1_WDMA0_MEND1_reg);
	me_share_dma_me1_wdma0_mend1_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_ME1_WDMA0_MEND1_reg,me_share_dma_me1_wdma0_mend1_reg.regValue);
	#endif
}
/**
 * @brief This function set ME1RPT_pfv start address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetME1RPT_pfv_StartAddress0(UINT32 u32Address)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_ME1RPT_pfv_start_address0
	me_share_dma_me1_wdma1_mstart0_RBUS me_share_dma_me1_wdma1_mstart0_reg;
	me_share_dma_me1_wdma1_mstart0_reg.regValue= rtd_inl(ME_SHARE_DMA_ME1_WDMA1_MSTART0_reg);
	me_share_dma_me1_wdma1_mstart0_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_ME1_WDMA1_MSTART0_reg,me_share_dma_me1_wdma1_mstart0_reg.regValue);
	#endif
}
/**
 * @brief This function set ME1RPT_pfv end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetME1RPT_pfv_EndAddress0(UINT32 u32Address)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_ME1RPT_pfv_end_address0
	me_share_dma_me1_wdma1_mend0_RBUS me_share_dma_me1_wdma1_mend0_reg;
	me_share_dma_me1_wdma1_mend0_reg.regValue= rtd_inl(ME_SHARE_DMA_ME1_WDMA1_MEND0_reg);
	me_share_dma_me1_wdma1_mend0_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_ME1_WDMA1_MEND0_reg,me_share_dma_me1_wdma1_mend0_reg.regValue);
	#endif
}
/**
 * @brief This function set ME1RPT_pfv start address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetME1RPT_pfv_StartAddress1(UINT32 u32Address)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_ME1RPT_pfv_start_address1
	me_share_dma_me1_wdma1_mstart1_RBUS me_share_dma_me1_wdma1_mstart1_reg;
	me_share_dma_me1_wdma1_mstart1_reg.regValue= rtd_inl(ME_SHARE_DMA_ME1_WDMA1_MSTART1_reg);
	me_share_dma_me1_wdma1_mstart1_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_ME1_WDMA1_MSTART1_reg,me_share_dma_me1_wdma1_mstart1_reg.regValue);
	#endif
}
/**
 * @brief This function set ME1RPT_pfv end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetME1RPT_pfv_EndAddress1(UINT32 u32Address)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_ME1RPT_pfv_end_address1
	me_share_dma_me1_wdma1_mend1_RBUS me_share_dma_me1_wdma1_mend1_reg;
	me_share_dma_me1_wdma1_mend1_reg.regValue= rtd_inl(ME_SHARE_DMA_ME1_WDMA1_MEND1_reg);
	me_share_dma_me1_wdma1_mend1_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_ME1_WDMA1_MEND1_reg,me_share_dma_me1_wdma1_mend1_reg.regValue);
	#endif
}
/**
 * @brief This function set ME1RPT_pfv start address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetME1RPT_pfv_StartAddress2(UINT32 u32Address)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_ME1RPT_pfv_start_address2
	me_share_dma_me1_wdma1_mstart2_RBUS me_share_dma_me1_wdma1_mstart2_reg;
	me_share_dma_me1_wdma1_mstart2_reg.regValue= rtd_inl(ME_SHARE_DMA_ME1_WDMA1_MSTART2_reg);
	me_share_dma_me1_wdma1_mstart2_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_ME1_WDMA1_MSTART2_reg,me_share_dma_me1_wdma1_mstart2_reg.regValue);	
	#endif
}
/**
 * @brief This function set ME1RPT_pfv end address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetME1RPT_pfv_EndAddress2(UINT32 u32Address)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_ME1RPT_pfv_end_address2
	me_share_dma_me1_wdma1_mend2_RBUS me_share_dma_me1_wdma1_mend2_reg;
	me_share_dma_me1_wdma1_mend2_reg.regValue= rtd_inl(ME_SHARE_DMA_ME1_WDMA1_MEND2_reg);
	me_share_dma_me1_wdma1_mend2_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_ME1_WDMA1_MEND2_reg,me_share_dma_me1_wdma1_mend2_reg.regValue);	
	#endif
}

/**
 * @brief This function set ME1RPT_ppfv line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetME1RPT_ppfv_LineOffsetAddress(UINT32 u32Address)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_kme_00_line_offset_addr
	me_share_dma_me1_wdma0_lstep_RBUS me_share_dma_me1_wdma0_lstep_reg;
	me_share_dma_me1_wdma0_lstep_reg.regValue= rtd_inl(ME_SHARE_DMA_ME1_WDMA0_LSTEP_reg);
	me_share_dma_me1_wdma0_lstep_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_ME1_WDMA0_LSTEP_reg,me_share_dma_me1_wdma0_lstep_reg.regValue);
	#endif
}
/**
 * @brief This function set ME1RPT_pfv line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetME1RPT_pfv_LineOffsetAddress(UINT32 u32Address)
{
	#if (IC_K5LP || IC_K6LP)
	//reg_kme_00_line_offset_addr
	me_share_dma_me1_wdma1_lstep_RBUS me_share_dma_me1_wdma1_lstep_reg;
	me_share_dma_me1_wdma1_lstep_reg.regValue= rtd_inl(ME_SHARE_DMA_ME1_WDMA1_LSTEP_reg);
	me_share_dma_me1_wdma1_lstep_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_ME1_WDMA1_LSTEP_reg,me_share_dma_me1_wdma1_lstep_reg.regValue);
	#endif
}


/**
 * @brief This function set IPME start address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEStartAddress0(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address0
	me_share_dma_ipme_wdma_mstart0_RBUS me_share_dma_ipme_wdma_mstart0_reg;
	me_share_dma_ipme_wdma_mstart0_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MSTART0_reg);
	me_share_dma_ipme_wdma_mstart0_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MSTART0_reg,me_share_dma_ipme_wdma_mstart0_reg.regValue);
	#endif

}
/**
 * @brief This function set IPME start address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEStartAddress1(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address1
	me_share_dma_ipme_wdma_mstart1_RBUS me_share_dma_ipme_wdma_mstart1_reg;
	me_share_dma_ipme_wdma_mstart1_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MSTART1_reg);
	me_share_dma_ipme_wdma_mstart1_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MSTART1_reg,me_share_dma_ipme_wdma_mstart1_reg.regValue);
	#endif

}

/**
 * @brief This function set IPME start address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEStartAddress2(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address2
	me_share_dma_ipme_wdma_mstart2_RBUS me_share_dma_ipme_wdma_mstart2_reg;
	me_share_dma_ipme_wdma_mstart2_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MSTART2_reg);
	me_share_dma_ipme_wdma_mstart2_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MSTART2_reg,me_share_dma_ipme_wdma_mstart2_reg.regValue);
	#endif

}

/**
 * @brief This function set IPME start address 3
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEStartAddress3(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address3
	me_share_dma_ipme_wdma_mstart3_RBUS me_share_dma_ipme_wdma_mstart3_reg;
	me_share_dma_ipme_wdma_mstart3_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MSTART3_reg);
	me_share_dma_ipme_wdma_mstart3_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MSTART3_reg,me_share_dma_ipme_wdma_mstart3_reg.regValue);
	#endif

}

/**
 * @brief This function set IPME start address 4
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEStartAddress4(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address4
	me_share_dma_ipme_wdma_mstart4_RBUS me_share_dma_ipme_wdma_mstart4_reg;
	me_share_dma_ipme_wdma_mstart4_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MSTART4_reg);
	me_share_dma_ipme_wdma_mstart4_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MSTART4_reg,me_share_dma_ipme_wdma_mstart4_reg.regValue);
	#endif

}

/**
 * @brief This function set IPME start address 5
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEStartAddress5(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address5
	me_share_dma_ipme_wdma_mstart5_RBUS me_share_dma_ipme_wdma_mstart5_reg;
	me_share_dma_ipme_wdma_mstart5_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MSTART5_reg);
	me_share_dma_ipme_wdma_mstart5_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MSTART5_reg,me_share_dma_ipme_wdma_mstart5_reg.regValue);
	#endif
}

/**
 * @brief This function set IPME start address 6
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEStartAddress6(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address6
	me_share_dma_ipme_wdma_mstart6_RBUS me_share_dma_ipme_wdma_mstart6_reg;
	me_share_dma_ipme_wdma_mstart6_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MSTART6_reg);
	me_share_dma_ipme_wdma_mstart6_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MSTART6_reg,me_share_dma_ipme_wdma_mstart6_reg.regValue);
	#endif
}

/**
 * @brief This function set IPME start address 7
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEStartAddress7(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address7
	me_share_dma_ipme_wdma_mstart7_RBUS me_share_dma_ipme_wdma_mstart7_reg;
	me_share_dma_ipme_wdma_mstart7_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MSTART7_reg);
	me_share_dma_ipme_wdma_mstart7_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MSTART7_reg,me_share_dma_ipme_wdma_mstart7_reg.regValue);	
	#endif
}
/**
 * @brief This function set IPME end address 0
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEEndAddress0(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address0
	me_share_dma_ipme_wdma_mend0_RBUS me_share_dma_ipme_wdma_mend0_reg;
	me_share_dma_ipme_wdma_mend0_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MEND0_reg);
	me_share_dma_ipme_wdma_mend0_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MEND0_reg,me_share_dma_ipme_wdma_mend0_reg.regValue);
	#endif
}
/**
 * @brief This function set IPME end address 1
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEEndAddress1(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address1
	me_share_dma_ipme_wdma_mend1_RBUS me_share_dma_ipme_wdma_mend1_reg;
	me_share_dma_ipme_wdma_mend1_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MEND1_reg);
	me_share_dma_ipme_wdma_mend1_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MEND1_reg,me_share_dma_ipme_wdma_mend1_reg.regValue);
	#endif
}

/**
 * @brief This function set IPME end address 2
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEEndAddress2(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address2
	me_share_dma_ipme_wdma_mend2_RBUS me_share_dma_ipme_wdma_mend2_reg;
	me_share_dma_ipme_wdma_mend2_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MEND2_reg);
	me_share_dma_ipme_wdma_mend2_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MEND2_reg,me_share_dma_ipme_wdma_mend2_reg.regValue);
	#endif
}

/**
 * @brief This function set IPME end address 3
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEEndAddress3(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address3
	me_share_dma_ipme_wdma_mend3_RBUS me_share_dma_ipme_wdma_mend3_reg;
	me_share_dma_ipme_wdma_mend3_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MEND3_reg);
	me_share_dma_ipme_wdma_mend3_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MEND3_reg,me_share_dma_ipme_wdma_mend3_reg.regValue);
	#endif
}

/**
 * @brief This function set IPME end address 4
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEEndAddress4(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address4
	me_share_dma_ipme_wdma_mend4_RBUS me_share_dma_ipme_wdma_mend4_reg;
	me_share_dma_ipme_wdma_mend4_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MEND4_reg);
	me_share_dma_ipme_wdma_mend4_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MEND4_reg,me_share_dma_ipme_wdma_mend4_reg.regValue);
	#endif
}

/**
 * @brief This function set IPME end address 5
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEEndAddress5(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address5
	me_share_dma_ipme_wdma_mend5_RBUS me_share_dma_ipme_wdma_mend5_reg;
	me_share_dma_ipme_wdma_mend5_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MEND5_reg);
	me_share_dma_ipme_wdma_mend5_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MEND5_reg,me_share_dma_ipme_wdma_mend5_reg.regValue);
	#endif
}

/**
 * @brief This function set IPME end address 6
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEEndAddress6(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address6
	me_share_dma_ipme_wdma_mend6_RBUS me_share_dma_ipme_wdma_mend6_reg;
	me_share_dma_ipme_wdma_mend6_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MEND6_reg);
	me_share_dma_ipme_wdma_mend6_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MEND6_reg,me_share_dma_ipme_wdma_mend6_reg.regValue);
	#endif
}

/**
 * @brief This function set IPME end address 7
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMEEndAddress7(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_start_address7
	me_share_dma_ipme_wdma_mend7_RBUS me_share_dma_ipme_wdma_mend7_reg;
	me_share_dma_ipme_wdma_mend7_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_MEND7_reg);
	me_share_dma_ipme_wdma_mend7_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_MEND7_reg,me_share_dma_ipme_wdma_mend7_reg.regValue);	
	#endif
}
/**
 * @brief This function set IPME line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetIPMELineOffsetAddress(UINT32 u32Address)
{
	#if (IC_K5LP)
	//reg_IPME_line_offset_addr
	me_share_dma_ipme_wdma_lstep_RBUS me_share_dma_ipme_wdma_lstep_reg;
	me_share_dma_ipme_wdma_lstep_reg.regValue= rtd_inl(ME_SHARE_DMA_IPME_WDMA_LSTEP_reg);
	me_share_dma_ipme_wdma_lstep_reg.regValue=u32Address;
	rtd_outl(ME_SHARE_DMA_IPME_WDMA_LSTEP_reg,me_share_dma_ipme_wdma_lstep_reg.regValue);
	#endif
}

/**
 * @brief This function set kme 01 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmv01WriteEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv01_write_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 02 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmv02WriteEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv02_write_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 04 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmv04WriteEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv04_write_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 05 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmv05WriteEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv05_write_enable),(UINT32)bEnable);
}

#ifdef LBME2_DM_BUF
/**
 * @brief This function set kme 12 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmv12WriteEnable(BOOL bEnable)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_write_enable),(UINT32)bEnable);
}
#endif

/**
 * @brief This function set kme 03 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmv03ReadEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv03_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 06 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmv06ReadEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv06_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 07 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmv07ReadEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv07_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 08 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmv08ReadEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv08_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 09 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmv09ReadEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv09_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 10 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmv10ReadEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv10_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kme 11 write enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmv11ReadEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv11_read_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kmv 01 hnum
 * @param [in] UINT32 u32Hnum
 * @retval VOID
*/
VOID HAL_DM_SetKmv01Hnum(UINT32 u32Hnum)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv01_hnum),u32Hnum);
}

/**
 * @brief This function set kmv 02 hnum
 * @param [in] UINT32 u32Hnum
 * @retval VOID
*/
VOID HAL_DM_SetKmv02Hnum(UINT32 u32Hnum)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv02_hnum),u32Hnum);
}

/**
 * @brief This function set kmv 04 hnum
 * @param [in] UINT32 u32Hnum
 * @retval VOID
*/
VOID HAL_DM_SetKmv04Hnum(UINT32 u32Hnum)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv04_hnum),u32Hnum);
}

/**
 * @brief This function set kmv 05 hnum
 * @param [in] UINT32 u32Hnum
 * @retval VOID
*/
VOID HAL_DM_SetKmv05Hnum(UINT32 u32Hnum)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv05_hnum),u32Hnum);
}

#ifdef LBME2_DM_BUF
/**
 * @brief This function set kmv 12 hnum
 * @param [in] UINT32 u32Hnum
 * @retval VOID
*/
VOID HAL_DM_SetKmv12Hnum(UINT32 u32Hnum)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_hnum),u32Hnum);
}
#endif

/**
 * @brief This function set kmv 01 Active
 * @param [in] UINT32 u32Hactive
 * @param [in] UINT32 u32Vactive
 * @retval VOID
*/
VOID HAL_DM_SetKmv01Active(UINT32 u32Hactive, UINT32 u32Vactive)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv01_hactive),u32Hactive);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv01_vactive),u32Vactive);
}

/**
 * @brief This function set kmv 02 Active
 * @param [in] UINT32 u32Hactive
 * @param [in] UINT32 u32Vactive
 * @retval VOID
*/
VOID HAL_DM_SetKmv02Active(UINT32 u32Hactive, UINT32 u32Vactive)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv02_hactive),u32Hactive);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv02_vactive),u32Vactive);
}

/**
 * @brief This function set kmv 04 Active
 * @param [in] UINT32 u32Hactive
 * @param [in] UINT32 u32Vactive
 * @retval VOID
*/
VOID HAL_DM_SetKmv04Active(UINT32 u32Hactive, UINT32 u32Vactive)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv04_hactive),u32Hactive);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv04_vactive),u32Vactive);
}

/**
 * @brief This function set kmv 05 Active
 * @param [in] UINT32 u32Hactive
 * @param [in] UINT32 u32Vactive
 * @retval VOID
*/
VOID HAL_DM_SetKmv05Active(UINT32 u32Hactive, UINT32 u32Vactive)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv05_hactive),u32Hactive);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv05_vactive),u32Vactive);
}

#ifdef LBME2_DM_BUF
/**
 * @brief This function set kmv 12 Active
 * @param [in] UINT32 u32Hactive
 * @param [in] UINT32 u32Vactive
 * @retval VOID
*/
VOID HAL_DM_SetKmv12Active(UINT32 u32Hactive, UINT32 u32Vactive)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_hactive),u32Hactive);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv12_vactive),u32Vactive);
}
#endif

/**
 * @brief This function set kmv input 3d enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmvInput3DEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv_input_3d_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kmv output 3d enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_DM_SetKmvOutput3DEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv_output_3d_enable),(UINT32)bEnable);
}

/**
 * @brief This function set kmv me1 output 3d mode
 * @param [in] UINT32 u32Mode
 * @retval VOID
*/
VOID HAL_DM_SetKmvME1Output3DMode(UINT32 u32Mode)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv03_output_3d_mode),u32Mode);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv06_output_3d_mode),u32Mode);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv07_output_3d_mode),u32Mode);
}

/**
 * @brief This function set kmv me2 output 3d mode
 * @param [in] UINT32 u32Mode
 * @retval VOID
*/
VOID HAL_DM_SetKmvME2Output3DMode(UINT32 u32Mode)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv08_output_3d_mode),u32Mode);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv09_output_3d_mode),u32Mode);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv10_output_3d_mode),u32Mode);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP2__mv11_output_3d_mode),u32Mode);
}

/**
 * @brief This function set kme 00 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00LROffsetAddress(UINT32 u32Address)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_lr_offset_addr),u32Address);	
}

/**
 * @brief This function set kme 00 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme00LineOffsetAddress(UINT32 u32Address)
{
	//reg_kme_00_line_offset_addr
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP0__kme_00_line_offset_addr),u32Address);
}

/**
 * @brief This function set kme 08 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme08LineOffsetAddress(UINT32 u32Address)
{
	//reg_kme_08_line_offset_addr
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_08_line_offset_addr),u32Address);
}

/**
 * @brief This function set kme 10 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme10LineOffsetAddress(UINT32 u32Address)
{
	//reg_kme_10_line_offset_addr
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_10_line_offset_addr),u32Address);
}

/**
 * @brief This function set kme 12 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme12LineOffsetAddress(UINT32 u32Address)
{
	//reg_kme_12_line_offset_addr
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_12_line_offset_addr),u32Address);
}

/**
 * @brief This function set kme 14 line offset address
 * @param [in] UINT32 u32Address
 * @retval VOID
*/
VOID HAL_DM_SetKme14LineOffsetAddress(UINT32 u32Address)
{
	//reg_kme_14_line_offset_addr
	WriteRegister(KIWI_REG(FRC_TOP__KME_DM_TOP1__kme_14_line_offset_addr),u32Address);
}

