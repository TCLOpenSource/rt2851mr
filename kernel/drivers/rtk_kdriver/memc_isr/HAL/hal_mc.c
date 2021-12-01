/**
 * @file hal_mc.c
 * @brief This file is for mc register setting
 * @date Nov.14.2014
 * @version V0.0.1
 * @author Martin Yan
 * @par Copyright (C) 2014 Real-Image Co. LTD
 * @par History:
 *			Version: 0.0.1
*/

#include "memc_isr/Common/kw_debug.h"
#include "memc_isr/Common/kw_common.h"
#include "memc_isr/Driver/regio.h"
#include "memc_isr/Common/memc_type.h"
#include "memc_isr/PQL/PQLPlatformDefs.h"

/**
 * @brief This function set kmc top in interrupt select
 * @param [in] 7 for input
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetInINTSel(UINT32 u32Sel)
{
	//reg_kmc_in_int_sel
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__kmc_in_int_sel),u32Sel);
}

/**
 * @brief This function set kmc top in interrupt source
 * @param [in] 1
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetInINTSource(UINT32 u32Sor)
{
	//reg_kmc_int_source_sel
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__kmc_int_source_sel),u32Sor);
}

/**
 * @brief This function set kmc top in interrupt horizantal number
 * @param [in] H number
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetInINTHNum(UINT32 u32Hnum)
{
	//reg_kmc_in_vtotal_int
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__kmc_in_vtotal_int),u32Hnum);
}


/**
 * @brief This function set kmc top in interrupt enable
 * @param [in] u32IntType: 0 for H sync, 1 for V sync, 2 for Abnormal
 * @param [in] bEnable
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetInINTEnable(UINT32 u32IntType, BOOL bEnable)
{
	UINT32 u32InINT_en = 0;
	ReadRegister(KIWI_REG(FRC_TOP__KMC_TOP__kmc_int_en), &u32InINT_en);

	if(bEnable)
	{
		u32InINT_en = u32InINT_en | (1 << u32IntType);
	}
	else
	{
		u32InINT_en = u32InINT_en & (~(1 << u32IntType));
	}

	//reg_kmc_int_en
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__kmc_int_en),u32InINT_en);
}

BOOL HAL_KMC_TOP_GetInINTEnable(UINT32 u32IntType)
{
       UINT32 v = 0;

       ReadRegister(KIWI_REG(FRC_TOP__KMC_TOP__kmc_int_en),&v);
       return (v >> u32IntType) & 0x1;
}

/**
 * @brief This function set kmc top in interrupt clear
 * @param [in] eIntType: 0 for H sync, 1 for V sync, 2 for Abnormal
 * @param [in] bWclr
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetInINTWclr(INT_TYPE eIntType, BOOL bWclr)
{
	UINT32 u32InINT_Clear = 0;
	ReadRegister(KIWI_REG(FRC_TOP__KMC_TOP__kmc_int_wclr), &u32InINT_Clear);

	if(bWclr)
		u32InINT_Clear = u32InINT_Clear | ( 1 << (UINT32)eIntType);
	else
		u32InINT_Clear = u32InINT_Clear & (~( 1 << (UINT32)eIntType));

	//reg_kmc_int_en
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__kmc_int_wclr), u32InINT_Clear);
}

/**
 * @brief This function get kmc top in interrupt status
 * @retval UINT32
*/
UINT32 HAL_KMC_TOP_GetInINTStatus(VOID)
{
	UINT32 u32InINT_Sts = 0;
	ReadRegister(KIWI_REG(FRC_TOP__KMC_TOP__regr_kmc_int_pending), &u32InINT_Sts);
	return u32InINT_Sts;
}

/**
 * @brief This function set kmc top pattern size
 * @param [in] TIMING_PARA_ST stInputTiming
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetPatternSize(TIMING_PARA_ST stInputTiming)
{
	//reg_top_patt_htotal
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__top_patt_htotal),stInputTiming.u32HTotal/2);
	//reg_top_patt_vtotal
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__top_patt_vtotal),stInputTiming.u32VTotal/2);
	//reg_top_patt_hact
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__top_patt_hact),stInputTiming.u32HActive/2);
	//reg_top_patt_vact
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__top_patt_vact),stInputTiming.u32VActive/2);
}

/**
 * @brief This function set kmc knr 422 to 444 enable
 * @param [in] UINT32 bEnable
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetKnr422to444Enable(BOOL bEnable)
{
	//kmc_top__reg_knr_422to444
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__knr_422to444_en),(UINT32)bEnable);
}

/**
 * @brief This function set kmc knr csc enable
 * @param [in] UINT32 bEnable
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetKnrCSCEnable(BOOL bEnable)
{
	//kmc_top__reg_knr_convert_on
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__knr_convert_on),(UINT32)bEnable);
}

/**
 * @brief This function set kmc knr csc mode
 * @param [in] UINT32 bEnable
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetKnrCSCMode(UINT32 u32Mode)
{
	//kmc_top__reg_knr_convert_mode
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__knr_convert_mode),u32Mode);
}

/**
 * @brief This function set kmc top knr trig gen mode
 * @param [in] UINT32 u32knr_trig_gen_mode
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetKnrTrigGenMode(UINT32 u32knr_trig_gen_mode)
{
	//reg_knr_row_trig_dly
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__knr_trig_gen_mode),u32knr_trig_gen_mode);
}

/**
 * @brief This function set kmc top knr row trig delay
 * @param [in] UINT32 u32knr_row_trig_dly
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetKnrRowTrigDelay(UINT32 u32knr_row_trig_dly)
{
	//reg_knr_row_trig_dly
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__knr_row_trig_dly),u32knr_row_trig_dly);
}

/**
 * @brief This function set kmc top knr half v active
 * @param [in] UINT32 u32knr_half_vactive
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetKnrHalfVactive(UINT32 u32knr_half_vactive)
{
	//reg_knr_half_v_active
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__knr_half_v_active),u32knr_half_vactive);
}

/**
 * @brief This function set kmc top knr h active
 * @param [in] UINT32 u32knr_hactive
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetKnrHactive(UINT32 u32knr_hactive)
{
	//reg_knr_h_active
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__knr_h_active),u32knr_hactive);
}

/**
 * @brief This function set kmc top ipmc hde center value
 * @param [in] UINT32 u32ipmc_hde_center_value
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetIPMCHDECenterValue(UINT32 u32ipmc_hde_center_value)
{
	//reg_kmc_ipmc_hde_center_value
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__kmc_ipmc_hde_center_value),u32ipmc_hde_center_value);
}

/**
 * @brief This function set kmc top ipmc mode
 * @param [in] UINT32 u32ipmc_mode
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetIPMCMode(UINT32 u32ipmc_mode)
{
	//reg_kmc_ipmc_mode
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__kmc_ipmc_mode),u32ipmc_mode);
}

/**
 * @brief This function set kmc top ipmc hde active
 * @param [in] UINT32 u32ipmc_hde_active
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetIPMCHDEActive(UINT32 u32ipmc_hde_active)
{
	//reg_kmc_ipmc_hde_active
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__kmc_ipmc_hde_active),u32ipmc_hde_active);
}

/**
 * @brief This function set kmc top ipmc v active
 * @param [in] UINT32 u32ipmc_v_active
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetIPMCVactive(UINT32 u32ipmc_v_active)
{
	//reg_kmc_ipmc_v_active
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__kmc_ipmc_v_active),u32ipmc_v_active);
}

/**
 * @brief This function set kmc top data mapping
 * @param [in] UINT32 u32Data_Mapping
 * @retval VOID
*/
VOID HAL_KMC_TOP_SetDataMapping(UINT32 u32Data_Mapping)
{
	//reg_knr_convert_map
	WriteRegister(KIWI_REG(FRC_TOP__KMC_TOP__knr_convert_map),(UINT32)u32Data_Mapping);
}

/**
 * @brief This function get kmc top data mapping
 * @param [in] VOID
 * @retval data mapping
*/
UINT32 HAL_KMC_TOP_GetDataMapping(VOID)
{
	UINT32 u32Data_Mapping = 0;
	//reg_knr_convert_map
	ReadRegister(KIWI_REG(FRC_TOP__KMC_TOP__knr_convert_map),&u32Data_Mapping);
	return u32Data_Mapping;
}

/**
 * @brief This function set lbmc fhd mode
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetLBMCFHDMode(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__LBMC__fhd_mod), (UINT32)bEnable);
}

/**
 * @brief This function set lbmc H/V active
 * @param [in] UINT32 u32Hactive
 * @param [in] UINT32 u32Vactive
 * @retval VOID
*/
VOID HAL_MC_SetLBMCActive(UINT32 u32Hactive, UINT32 u32Vactive)
{
	//reg_lbmc_h_act[11:0]
	WriteRegister(KIWI_REG(FRC_TOP__LBMC__lbmc_h_act),u32Hactive);
	//reg_lbmc_v_act[11:0]
	WriteRegister(KIWI_REG(FRC_TOP__LBMC__lbmc_v_act),u32Vactive);
}

/**
 * @brief This function set lbmc 3d mode
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetLBMC3DMode(BOOL bEnable)
{
	//reg_lbmc_3dmode
	WriteRegister(KIWI_REG(FRC_TOP__LBMC__lbmc_3dmode),(UINT32)bEnable);
}

/**
 * @brief This function set lbmc pr mode
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetLBMCPRMode(BOOL bEnable)
{
	//lbmc_pr_mod
	WriteRegister(KIWI_REG(FRC_TOP__LBMC__lbmc_pr_mod),(UINT32)bEnable);
}

/**
 * @brief This function set lbmc pc mode
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetLBMCPCMode(BOOL bEnable)
{
	//reg_lbmcpc_mode
	WriteRegister(KIWI_REG(FRC_TOP__LBMC__lbmcpc_mode),(UINT32)bEnable);
}

/**
 * @brief This function set lbmc vflip enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetLBMCVflipEnable(BOOL bEnable)
{
	//reg_lbmc_vflip
	WriteRegister(KIWI_REG(FRC_TOP__LBMC__lbmc_vflip),(UINT32)bEnable);
}

/**
 * @brief This function set mc h half size
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetMCHhalfsize(BOOL bEnable)
{
	//reg_mc_h_half_size
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_h_half_size),(UINT32)bEnable);
}

/**
 * @brief This function set mc v half size
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetMCVhalfsize(BOOL bEnable)
{
	//reg_mc_v_half_size
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_v_half_size),(UINT32) bEnable);
}

/**
 * @brief This function set mc H/V active
 * @param [in] UINT32 u32Hactive
 * @param [in] UINT32 u32Vactive
 * @retval VOID
*/
VOID HAL_MC_SetMCActive(UINT32 u32Hactive, UINT32 u32Vactive)
{
	//reg_mc_h_act[11:0]
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_h_act),u32Hactive);
	//reg_mc_v_act[11:0]
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_v_act),u32Vactive);
}

/**
 * @brief This function set mc block size
 * @param [in] UINT32 u32Block_Size
 * @retval VOID
*/
VOID HAL_MC_SetMCBlockSize(UINT32 u32Block_Size)
{
	//reg_mc_blk_size[3:2]
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_blk_size),u32Block_Size);
}

/**
 * @brief This function get mc block size
 * @param [in] VOID
 * @retval UINT32 u32Block_Size
*/
UINT32 HAL_MC_GetMCBlockSize(VOID)
{
	UINT32 u32Block_Size = 0;
	//reg_mc_blk_size[3:2]
	ReadRegister(KIWI_REG(FRC_TOP__MC__mc_blk_size),&u32Block_Size);
	return u32Block_Size;
}

/**
 * @brief This function set mc mv scaler
 * @param [in] UINT32 u32MV_Scaler
 * @retval VOID
*/
VOID HAL_MC_SetMCMVScaler(UINT32 u32MV_Scaler)
{
	//reg_mc_mv_scale[1:0]
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_mv_scale),u32MV_Scaler);
}

/**
 * @brief This function set mc block number
 * @param [in] UINT32 u32Block_Num
 * @retval VOID
*/
VOID HAL_MC_SetMCBlockNum(UINT32 u32Block_Num)
{
	//reg_mc_blk_num[9:0]
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_blk_num),u32Block_Num);
#if 1
	WriteRegister(KIWI_REG(FRC_TOP__MC__mcdh_mv_blk_num),u32Block_Num);	
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_mv_pat_blk_num),u32Block_Num);		
#endif
}

/**
 * @brief This function set mc row number
 * @param [in] UINT32 u32Block_Num
 * @retval VOID
*/
VOID HAL_MC_SetMCRowNum(UINT32 u32Row_Num)
{
	//reg_mc_row_num[9:0]
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_row_num),u32Row_Num);
#if 1
	WriteRegister(KIWI_REG(FRC_TOP__MC__mcdh_mv_row_num),u32Row_Num);
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_mv_pat_row_num),u32Row_Num);		
#endif
}

#if 1
/**
 * @brief This function set mc mv pattern block size
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_MC_SetMCMVPatBlkSize(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_mv_pat_blk_size),u32Val);
}

/**
 * @brief This function set mc mv pattern Row size
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_MC_SetMCMVPatRowSize(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_mv_pat_row_size),u32Val);
}

/**
 * @brief This function set mc dehalo half v timing
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_MC_SetMCDhHalfVTiming(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__MC__mcdh_dh_half_v_timing),u32Val);
}

/**
 * @brief This function set mc dehalo Row size
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_MC_SetMCDhRowSize(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__MC__mcdh_mv_row_size),u32Val);
}

/**
 * @brief This function set mc mv read interval
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_MC_SetMCMVRDIntval(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__MC__mcdh_mv_rd_intval),u32Val);
}
#endif

/**
 * @brief This function set mc blend mode
 * @param [in] UINT32 u32Mode
 * @retval VOID
*/
VOID HAL_MC_SetMCBlendMode(UINT32 u32Mode)
{
	//reg_mc_bld_bypass[2:0]
	//rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "HAL_MC_SetMCBlendMode=%x\n",u32Mode);
#if IC_K6LP // merlin4_blend_mode
	if(u32Mode == 1){
		//WriteRegister(FRC_TOP__LBMC__lbmc_db_en_ADDR, FRC_TOP__LBMC__lbmc_db_en_BITSTART, FRC_TOP__LBMC__lbmc_db_en_BITEND, 0x1); // lbmc_db_en
		WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_ADDR, FRC_TOP__LBMC__lbmcpc_mode_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_BITEND, 0x1); //0xb8099924[4]
		WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_sel_p_ADDR, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITEND, 0x0); //0xb8099924[13] //IZ mode
		WriteRegister(FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_ADDR, FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_BITSTART, FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_BITEND, 0); //0xb8099924[10]
//		WriteRegister(FRC_TOP__LBMC__lbmc_db_rd_sel_ADDR, FRC_TOP__LBMC__lbmc_db_rd_sel_BITSTART, FRC_TOP__LBMC__lbmc_db_rd_sel_BITEND, 0); // lbmc_db_apply
		WriteRegister(FRC_TOP__LBMC__lbmc_db_rd_sel_ADDR, FRC_TOP__LBMC__lbmc_db_rd_sel_BITSTART, FRC_TOP__LBMC__lbmc_db_rd_sel_BITEND, 1); // lbmc_db_apply
		pr_notice("[HAL_MC_SetMCBlendMode][Repeat mode][IZ][PC mode,%x,][90k=%x]\n\r", rtd_inl(0xB8099924), rtd_inl(0xB801B6B8));
	}
	else if(u32Mode == 2){
		//WriteRegister(FRC_TOP__LBMC__lbmc_db_en_ADDR, FRC_TOP__LBMC__lbmc_db_en_BITSTART, FRC_TOP__LBMC__lbmc_db_en_BITEND, 0x1); // lbmc_db_en
		WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_ADDR, FRC_TOP__LBMC__lbmcpc_mode_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_BITEND, 0x1); //0xb8099924[4]
		WriteRegister(FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_ADDR, FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_BITSTART, FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_BITEND, 0); //0xb8099924[10]
		WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_sel_p_ADDR, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITEND, 0x1); //0xb8099924[13] //PZ mode		
//		WriteRegister(FRC_TOP__LBMC__lbmc_db_rd_sel_ADDR, FRC_TOP__LBMC__lbmc_db_rd_sel_BITSTART, FRC_TOP__LBMC__lbmc_db_rd_sel_BITEND, 0); // lbmc_db_apply
		WriteRegister(FRC_TOP__LBMC__lbmc_db_rd_sel_ADDR, FRC_TOP__LBMC__lbmc_db_rd_sel_BITSTART, FRC_TOP__LBMC__lbmc_db_rd_sel_BITEND, 1); // lbmc_db_apply
		pr_notice("[HAL_MC_SetMCBlendMode][Repeat mode][PZ][PC mode,%x,][90k=%x]\n\r", rtd_inl(0xB8099924), rtd_inl(0xB801B6B8));
	}
	else{
		//WriteRegister(FRC_TOP__LBMC__lbmc_db_en_ADDR, FRC_TOP__LBMC__lbmc_db_en_BITSTART, FRC_TOP__LBMC__lbmc_db_en_BITEND, 0x1); // lbmc_db_en
		WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_ADDR, FRC_TOP__LBMC__lbmcpc_mode_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_BITEND, 0x0); //0xb8099924[4]
		WriteRegister(FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_ADDR, FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_BITSTART, FRC_TOP__LBMC__force_iz_when_mc_phase_eq0_BITEND, 1); //0xb8099924[10]
//		WriteRegister(FRC_TOP__LBMC__lbmc_db_rd_sel_ADDR, FRC_TOP__LBMC__lbmc_db_rd_sel_BITSTART, FRC_TOP__LBMC__lbmc_db_rd_sel_BITEND, 0); // lbmc_db_apply
		WriteRegister(FRC_TOP__LBMC__lbmc_db_rd_sel_ADDR, FRC_TOP__LBMC__lbmc_db_rd_sel_BITSTART, FRC_TOP__LBMC__lbmc_db_rd_sel_BITEND, 1); // lbmc_db_apply
		pr_notice("[HAL_MC_SetMCBlendMode][Blending mode][PC mode,%x,][90k=%x]\n\r", rtd_inl(0xB8099924), rtd_inl(0xB801B6B8));
	}
#else
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_bld_bypass),u32Mode);
#endif
}

/**
 * @brief This function set mc scene change enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetMCSceneChangeEnable(BOOL bEnable)
{
	//reg_mc_scene_change_fb
	//rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "HAL_MC_SetMCSceneChangeEnable=%d\n",bEnable);
#if 1
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_scene_change_mode),(UINT32)bEnable);
#else
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_scene_change_fb),(UINT32)bEnable);
#endif
}

/**
 * @brief This function set mc scene change enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetMCSceneChange_fb(BOOL bEnable)
{
	//reg_mc_scene_change_fb
	//rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "HAL_MC_SetMCSceneChange_fb=%d\n",bEnable);
#if 1
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_scene_change_fb),(UINT32)bEnable);
#else
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_scene_change_fb),(UINT32)bEnable);
#endif
}

/**
 * @brief This function set MC PT Zero type1
 * @param [in] u32Type: 0: iz; 1: pz; 2: avg; 3: phase blend; 4: I/P by phase; 5: med3
 * @retval VOID
*/
VOID HAL_MC_SetPTZeroType1(UINT32 u32Type)
{
	//reg_mc_pt_z_type1
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_pt_z_type1),u32Type);
}

/**
 * @brief This function set MC PT Zero type2
 * @param [in] u32Type: 0: iz; 1: pz; 2: avg; 3: phase blend; 4: I/P by phase; 5: med3
 * @retval VOID
*/
VOID HAL_MC_SetPTZeroType2(UINT32 u32Type)
{
	//reg_mc_pt_z_type2
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_pt_z_type2),u32Type);
}

/**
 * @brief This function set mc logo mode
 * @param [in] UINT32 u32LogoMode
 * @retval VOID
*/
VOID HAL_MC_SetLogoMode(UINT32 u32LogoMode)
{
	//reg_mc_logo_en
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_logo_en),u32LogoMode);
}

/**
 * @brief This function set mc block logo h size
 * @param [in] UINT32 u32Hsize
 * @retval VOID
*/
VOID HAL_MC_SetBlockLogoHSize(UINT32 u32Hsize)
{
	//reg_mc_blk_logo_h_size
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_blk_logo_h_size),u32Hsize);
}

/**
 * @brief This function set mc pixel logo h size
 * @param [in] UINT32 u32Hsize
 * @retval VOID
*/
VOID HAL_MC_SetPixelLogoHSize(UINT32 u32Hsize)
{
	//reg_mc_pxl_logo_h_size
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_pxl_logo_h_size),u32Hsize);
}

/**
 * @brief This function set mc block logo v size
 * @param [in] UINT32 u32Vsize
 * @retval VOID
*/
VOID HAL_MC_SetBlockLogoVSize(UINT32 u32Vsize)
{
	//reg_mc_blk_logo_v_size
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_blk_logo_v_size),u32Vsize);
}

/**
 * @brief This function set mc pixel logo v size
 * @param [in] UINT32 u32Vsize
 * @retval VOID
*/
VOID HAL_MC_SetPixelLogoVSize(UINT32 u32Vsize)
{
	//reg_mc_pxl_logo_v_size
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_pxl_logo_v_size),u32Vsize);
}

/**
 * @brief This function set kphase 3d fs enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetKphase3DFSEnable(BOOL bEnable)
{
	//reg_kphase_in_3d_fs_enable
	WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_in_3d_fs_enable),(UINT32)bEnable);
	//reg_kphase_in_lr_ctl_for_index
	WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_in_lr_ctl_for_index),(UINT32)bEnable);
}

/**
 * @brief This function set kphase 3d enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetKphase3DEnable(BOOL bEnable)
{
	//reg_kphase_out_3d_enable
	WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_out_3d_enable),(UINT32)bEnable);
}

/**
 * @brief This function set 3d mode
 * @param [in] UINT32 u32Mode
 * @retval VOID
*/
VOID HAL_MC_SetKphase3DMode(UINT32 u32Mode)
{
	//reg_kphase_3d_mode
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__kphase_3d_mode),u32Mode);
}

/**
 * @brief This function set me1 index bsize
 * @param [in] UINT32 u32Bsize
 * @retval VOID
*/
VOID HAL_MC_SetKphaseME1IndexBsize(UINT32 u32Bsize)
{
	WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_in_me_index_bsize),u32Bsize);
}

/**
 * @brief This function set me2 index bsize
 * @param [in] UINT32 u32Bsize
 * @retval VOID
*/
VOID HAL_MC_SetKphaseME2IndexBsize(UINT32 u32Bsize)
{
	WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_in_me2_index_bsize),u32Bsize);
}

/**
 * @brief This function set mc index bsize
 * @param [in] UINT32 u32Bsize
 * @retval VOID
*/
VOID HAL_MC_SetKphaseMCIndexBsize(UINT32 u32Bsize)
{
	//reg_kphase_in_mc_index_bsize
	WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_in_mc_index_bsize),u32Bsize);
}

/**
 * @brief This function set decode data clear enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetKphaseDecDataClrEnable(BOOL bEnable)
{
	//reg_kphase_dec_data_vs_clr_en
	WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_dec_data_vs_clr_en),(UINT32)bEnable);
}

/**
 * @brief This function set kphase force mc lf index
 * @param [in] UINT32 u32Idx
 * @retval VOID
*/
VOID HAL_MC_SetKphaseForceMCLFIdx(UINT32 u32Idx)
{
	//reg_kphase_force_mc_lf_index
	WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_force_mc_lf_index),u32Idx);
}

/**
 * @brief This function set kphase force mc lf index enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetKphaseForceMCLFIdxEnable(UINT32 u32Idx)
{
	//reg_kphase_force_mc_lf_index_en
	WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_force_mc_lf_index_en),u32Idx);
}

/**
 * @brief This function set kphase force mc hf index
 * @param [in] UINT32 u32Idx
 * @retval VOID
*/
VOID HAL_MC_SetKphaseForceMCHFIdx(UINT32 u32Idx)
{
	//reg_kphase_force_mc_hf_index
	WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_force_mc_hf_index),u32Idx);
}

/**
 * @brief This function set kphase force mc hf index enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetKphaseForceMCHFIdxEnable(UINT32 u32Idx)
{
	//reg_kphase_force_mc_hf_index_en
	WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_force_mc_hf_index_en),u32Idx);
}

/**
 * @brief This function set demo window Enable
 * @param [in] UBYTE ubyWinID
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_MC_SetDemoWindowEnable(UBYTE ubyWinID, BOOL bEnable)
{
	UINT32 u32dw_en = 0;
	ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_en), &u32dw_en);
	if(bEnable)
	{
		u32dw_en = u32dw_en | (1 << ubyWinID);
	}
	else
	{
		u32dw_en = u32dw_en & (~(1 << ubyWinID));
	}
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_en), u32dw_en);
}

/**
 * @brief This function get demo window Enable
 * @param [in] UBYTE ubyWinID
 * @retval BOOL bEnable
*/
BOOL HAL_MC_GetDemoWindowEnable(UBYTE ubyWinID)
{
	UINT32 u32dw_en = 0;
	ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_en), &u32dw_en);
	if(u32dw_en & (1 << ubyWinID))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

/**
 * @brief This function set demo window mode
 * @param [in] BOOL bMode: 0: inside MEMC OFF; 1: outside MEMC OFF
 * @retval VOID
*/
VOID HAL_MC_SetDemoWindowMode(BOOL bMode)
{
	if(bMode == FALSE)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_mode), 0);
	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_mode), 1);
	}
}

/**
 * @brief This function get demo window mode
 * @retval BOOL bMode: 0: inside MEMC OFF; 1: outside MEMC OFF
*/
BOOL HAL_MC_GetDemoWindowMode(VOID)
{
	UINT32 u32dw_mode = 0;
	ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_mode), &u32dw_mode);

	if(u32dw_mode == 0)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

/**
 * @brief This function set demo window
 * @param [in] UBYTE ubyWinID
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @retval VOID
*/
VOID HAL_MC_SetDemoWindowSettings(UBYTE ubyWinID, UINT32 u32Left, UINT32 u32Right, UINT32 u32Top, UINT32 u32Bottom)
{
	if(ubyWinID == 0)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft0), u32Left);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht0), u32Right);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top0), u32Top);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot0), u32Bottom);
	}
	else if(ubyWinID == 1)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft1), u32Left);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht1), u32Right);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top1), u32Top);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot1), u32Bottom);
	}
	else if(ubyWinID == 2)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft2), u32Left);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht2), u32Right);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top2), u32Top);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot2), u32Bottom);
	}
	else if(ubyWinID == 3)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft3), u32Left);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht3), u32Right);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top3), u32Top);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot3), u32Bottom);
	}
	else if(ubyWinID == 4)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft4), u32Left);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht4), u32Right);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top4), u32Top);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot4), u32Bottom);
	}
	else if(ubyWinID == 5)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft5), u32Left);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht5), u32Right);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top5), u32Top);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot5), u32Bottom);
	}
	else if(ubyWinID == 6)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft6), u32Left);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht6), u32Right);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top6), u32Top);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot6), u32Bottom);
	}
	else if(ubyWinID == 7)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft7), u32Left);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht7), u32Right);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top7), u32Top);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot7), u32Bottom);
	}
}

/**
 * @brief This function get demo window
 * @param [in] UBYTE ubyWinID
 * @param [out] UINT32 u32Left
 * @param [out] UINT32 u32Right
 * @param [out] UINT32 u32Top
 * @param [out] UINT32 u32Bottom
 * @retval VOID
*/
VOID HAL_MC_GetDemoWindowSettings(UBYTE ubyWinID, UINT32 *pu32Left, UINT32 *pu32Right, UINT32 *pu32Top, UINT32 *pu32Bottom)
{
	if(ubyWinID == 0)
	{
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft0), pu32Left);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht0), pu32Right);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top0), pu32Top);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot0), pu32Bottom);
	}
	else if(ubyWinID == 1)
	{
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft1), pu32Left);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht1), pu32Right);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top1), pu32Top);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot1), pu32Bottom);
	}
	else if(ubyWinID == 2)
	{
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft2), pu32Left);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht2), pu32Right);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top2), pu32Top);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot2), pu32Bottom);
	}
	else if(ubyWinID == 3)
	{
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft3), pu32Left);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht3), pu32Right);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top3), pu32Top);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot3), pu32Bottom);
	}
	else if(ubyWinID == 4)
	{
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft4), pu32Left);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht4), pu32Right);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top4), pu32Top);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot4), pu32Bottom);
	}
	else if(ubyWinID == 5)
	{
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft5), pu32Left);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht5), pu32Right);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top5), pu32Top);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot5), pu32Bottom);
	}
	else if(ubyWinID == 6)
	{
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft6), pu32Left);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht6), pu32Right);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top6), pu32Top);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot6), pu32Bottom);
	}
	else if(ubyWinID == 7)
	{
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_lft7), pu32Left);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_rht7), pu32Right);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_top7), pu32Top);
		ReadRegister(KIWI_REG(FRC_TOP__MC__mc_dw_bot7), pu32Bottom);
	}
}

/**
 * @brief This function set lbmc normal lf prefetch number
 * @param [in] BOOL bType: 0 for i, 1 for p
 * @param [in] ubyIdx(0~8)
 * @param [in] ubyPreFetch_Num
 * @retval VOID
*/
VOID HAL_MC_SetLBMCNormalLFPreFetchNum(BOOL bType, UBYTE ubyIdx, UBYTE ubyPreFetch_Num)
{
	if(!bType)	// i
	{
		switch(ubyIdx)
		{
			case 0:
				//nor_ilf_idx0_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_ilf_idx0_prefetch_num),ubyPreFetch_Num);
				break;
			case 1:
				//nor_ilf_idx1_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_ilf_idx1_prefetch_num),ubyPreFetch_Num);
				break;
			case 2:
				//nor_ilf_idx2_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_ilf_idx2_prefetch_num),ubyPreFetch_Num);
				break;
			case 3:
				//nor_ilf_idx3_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_ilf_idx3_prefetch_num),ubyPreFetch_Num);
				break;
			case 4:
				//nor_ilf_idx4_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_ilf_idx4_prefetch_num),ubyPreFetch_Num);
				break;
			case 5:
				//nor_ilf_idx5_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_ilf_idx5_prefetch_num),ubyPreFetch_Num);
				break;
			case 6:
				//nor_ilf_idx6_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_ilf_idx6_prefetch_num),ubyPreFetch_Num);
				break;
			case 7:
				//nor_ilf_idx7_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_ilf_idx7_prefetch_num),ubyPreFetch_Num);
				break;
			case 8:
				//nor_ilf_idx8_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_ilf_idx8_prefetch_num),ubyPreFetch_Num);
				break;
			default:
				break;
		}
	}
	else	//	p
	{
		switch(ubyIdx)
		{
			case 0:
				//nor_plf_idx0_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_plf_idx0_prefetch_num),ubyPreFetch_Num);
				break;
			case 1:
				//nor_plf_idx1_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_plf_idx1_prefetch_num),ubyPreFetch_Num);
				break;
			case 2:
				//nor_plf_idx2_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_plf_idx2_prefetch_num),ubyPreFetch_Num);
				break;
			case 3:
				//nor_plf_idx3_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_plf_idx3_prefetch_num),ubyPreFetch_Num);
				break;
			case 4:
				//nor_plf_idx4_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_plf_idx4_prefetch_num),ubyPreFetch_Num);
				break;
			case 5:
				//nor_plf_idx5_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_plf_idx5_prefetch_num),ubyPreFetch_Num);
				break;
			case 6:
				//nor_plf_idx6_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_plf_idx6_prefetch_num),ubyPreFetch_Num);
				break;
			case 7:
				//nor_plf_idx7_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_plf_idx7_prefetch_num),ubyPreFetch_Num);
				break;
			case 8:
				//nor_plf_idx8_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_plf_idx8_prefetch_num),ubyPreFetch_Num);
				break;
			default:
				break;
		}
	}
}

/**
 * @brief This function set lbmc normal hf prefetch number
 * @param [in] BOOL bType: 0 for i, 1 for p
 * @param [in] ubyIdx(0~2)
 * @param [in] ubyPreFetch_Num
 * @retval VOID
*/
VOID HAL_MC_SetLBMCNormalHFPreFetchNum(BOOL bType, UBYTE ubyIdx, UBYTE ubyPreFetch_Num)
{
	if(!bType)	// i
	{
		switch(ubyIdx)
		{
			case 0:
				//nor_ihf_idx0_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_ihf_idx0_prefetch_num),ubyPreFetch_Num);
				break;
			case 1:
				//nor_ihf_idx1_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_ihf_idx1_prefetch_num),ubyPreFetch_Num);
				break;
			case 2:
				//nor_ihf_idx2_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_ihf_idx2_prefetch_num),ubyPreFetch_Num);
				break;
			default:
				break;
		}
	}
	else	//	p
	{
		switch(ubyIdx)
		{
			case 0:
				//nor_phf_idx0_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_phf_idx0_prefetch_num),ubyPreFetch_Num);
				break;
			case 1:
				//nor_phf_idx1_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_phf_idx1_prefetch_num),ubyPreFetch_Num);
				break;
			case 2:
				//nor_phf_idx2_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__nor_phf_idx2_prefetch_num),ubyPreFetch_Num);
				break;
			default:
				break;
		}
	}
}

/**
 * @brief This function set lbmc single lf prefetch number
 * @param [in] BOOL bType: 0 for i, 1 for p
 * @param [in] ubyIdx(0~2)
 * @param [in] ubyPreFetch_Num
 * @retval VOID
*/
VOID HAL_MC_SetLBMCSingleLFPreFetchNum(BOOL bType, UBYTE ubyIdx, UBYTE ubyPreFetch_Num)
{
	if(!bType)	// i
	{
		switch(ubyIdx)
		{
			case 0:
				//sing_ilf_idx0_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_ilf_idx0_prefetch_num),ubyPreFetch_Num);
				break;
			case 1:
				//sing_ilf_idx1_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_ilf_idx1_prefetch_num),ubyPreFetch_Num);
				break;
			case 2:
				//sing_ilf_idx2_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_ilf_idx2_prefetch_num),ubyPreFetch_Num);
				break;
			case 3:
				//sing_ilf_idx3_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_ilf_idx3_prefetch_num),ubyPreFetch_Num);
				break;
			case 4:
				//sing_ilf_idx4_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_ilf_idx4_prefetch_num),ubyPreFetch_Num);
				break;
			case 5:
				//sing_ilf_idx5_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_ilf_idx5_prefetch_num),ubyPreFetch_Num);
				break;
			case 6:
				//sing_ilf_idx6_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_ilf_idx6_prefetch_num),ubyPreFetch_Num);
				break;
			case 7:
				//sing_ilf_idx7_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_ilf_idx7_prefetch_num),ubyPreFetch_Num);
				break;
			case 8:
				//sing_ilf_idx8_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_ilf_idx8_prefetch_num),ubyPreFetch_Num);
				break;
			default:
				break;
		}
	}
	else	//	p
	{
		switch(ubyIdx)
		{
			case 0:
				//sing_plf_idx0_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_plf_idx0_prefetch_num),ubyPreFetch_Num);
				break;
			case 1:
				//sing_plf_idx1_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_plf_idx1_prefetch_num),ubyPreFetch_Num);
				break;
			case 2:
				//sing_plf_idx2_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_plf_idx2_prefetch_num),ubyPreFetch_Num);
				break;
			case 3:
				//sing_plf_idx3_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_plf_idx3_prefetch_num),ubyPreFetch_Num);
				break;
			case 4:
				//sing_plf_idx4_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_plf_idx4_prefetch_num),ubyPreFetch_Num);
				break;
			case 5:
				//sing_plf_idx5_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_plf_idx5_prefetch_num),ubyPreFetch_Num);
				break;
			case 6:
				//sing_plf_idx6_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_plf_idx6_prefetch_num),ubyPreFetch_Num);
				break;
			case 7:
				//sing_plf_idx7_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_plf_idx7_prefetch_num),ubyPreFetch_Num);
				break;
			case 8:
				//sing_plf_idx8_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_plf_idx8_prefetch_num),ubyPreFetch_Num);
				break;
			default:
				break;
		}
	}
}

/**
 * @brief This function set lbmc single hf prefetch number
 * @param [in] BOOL bType: 0 for i, 1 for p
 * @param [in] ubyIdx(0~2)
 * @param [in] ubyPreFetch_Num
 * @retval VOID
*/
VOID HAL_MC_SetLBMCSingleHFPreFetchNum(BOOL bType, UBYTE ubyIdx, UBYTE ubyPreFetch_Num)
{
	if(!bType)	// i
	{
		switch(ubyIdx)
		{
			case 0:
				//sing_ihf_idx0_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_ihf_idx0_prefetch_num),ubyPreFetch_Num);
				break;
			case 1:
				//sing_ihf_idx1_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_ihf_idx1_prefetch_num),ubyPreFetch_Num);
				break;
			case 2:
				//sing_ihf_idx2_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_ihf_idx2_prefetch_num),ubyPreFetch_Num);
				break;
			default:
				break;
		}
	}
	else	//	p
	{
		switch(ubyIdx)
		{
			case 0:
				//sing_phf_idx0_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_phf_idx0_prefetch_num),ubyPreFetch_Num);
				break;
			case 1:
				//sing_phf_idx1_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_phf_idx1_prefetch_num),ubyPreFetch_Num);
				break;
			case 2:
				//sing_phf_idx2_prefetch_num
				WriteRegister(KIWI_REG(FRC_TOP__LBMC__sing_phf_idx2_prefetch_num),ubyPreFetch_Num);
				break;
			default:
				break;
		}
	}
}

/**
 * @brief This function set mc rim 0
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_MC_SetMCRim0(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	//reg_mc_top_rim0
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_top_rim0), u32Top);
	//reg_mc_bot_rim0
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_bot_rim0), u32Bottom);
	//reg_mc_lft_rim0
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_lft_rim0), u32Left);
	//reg_mc_rht_rim0
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_rht_rim0), u32Right);
}

/**
 * @brief This function set mc rim 1
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_MC_SetMCRim1(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	//reg_mc_top_rim1
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_top_rim1), u32Top);
	//reg_mc_bot_rim1
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_bot_rim1), u32Bottom);
	//reg_mc_lft_rim1
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_lft_rim1), u32Left);
	//reg_mc_rht_rim1
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_rht_rim1), u32Right);
}

/**
 * @brief This function set mc var lp enable
 * @param [in] UINT32 u32En
 * @retval VOID
*/
VOID HAL_MC_SetVarLPFEn(UINT32 u32En)
{
	//reg_mc_var_lpf_en
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var_lpf_en),u32En);
}

/**
 * @brief This function set mc var lp 17 tap enable
 * @param [in] UINT32 BOOL
 * @retval VOID
*/
VOID HAL_MC_SetVar17TapEn(BOOL bEnable)
{
	//reg_mc_var17tap_en
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var17tap_en),(UINT32)bEnable);
}

/**
 * @brief This function set mc pr mode
 * @param [in] UINT32 u32Mode
 * @retval VOID
*/
VOID HAL_MC_SetPRMode(UINT32 u32Mode)
{
	//reg_mc_v_l_r
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_v_l_r),u32Mode);
}

/**
 * @brief This function set mc poly enable
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_MC_SetPolyEnable(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_poly_intp_en),u32Val);
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_mvd_intp_en),u32Val);
}

#if 1
/**
 * @brief This function set block logo rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KMC_LOGO_Set_BlockRim(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_blk_logo_db_rim_top), u32Top);	
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_blk_logo_db_rim_bot), u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_blk_logo_db_rim_left), u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_blk_logo_db_rim_righ), u32Right);	
}

/**
 * @brief This function set pixel pixel rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KMC_LOGO_Set_PixelRim(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_pix_logo_db_rim_top), u32Top);	
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_pix_logo_db_rim_bot), u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_pix_logo_db_rim_left), u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_pix_logo_db_rim_righ), u32Right);	
}

/**
 * @brief This function set mc block logo htotal
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_MC_SetMCBLKLogoHtotal(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_blklogo_htotal),u32Val);
}

/**
 * @brief This function set mc block logo hact
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_MC_SetMCBLKLogoHact(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_blklogo_hact),u32Val);
}

/**
 * @brief This function set mc block logo row num
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_MC_SetMCBLKLogoRowNum(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_blklogo_row_num),u32Val);
}

/**
 * @brief This function set mc block logo row type
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_MC_SetMCBLKLogoRowType(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_blklogo_mc_de_size),u32Val);
}

/**
 * @brief This function set lbmc share hf enable
 * @param [in] UINT32 BOOL
 * @retval VOID
*/
VOID HAL_MC_SetLBMCShareHFEn(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__LBMC__lbmc_share_hf_en),(UINT32)bEnable);
	WriteRegister(KIWI_REG(FRC_TOP__LBMC__lbmc_single_hf_mode),(UINT32)bEnable);
}
#endif

UINT32 HAL_MC_GetMC04_06_total_data_cnt(VOID)
{
	#if (IC_K4LP || IC_K3LP)
	UINT32 u32InINT_Sts = 0;
	ReadRegister(KIWI_REG(FRC_TOP__KMC_DM_METER_TOP__regr_kmc04_06_total_data_cnt), &u32InINT_Sts);
	return u32InINT_Sts;
	#else

	return FALSE;

	#endif
}

/**
 * @brief This function enable  local fallback
 * @param [in] BOOL bEnalbe
 * @retval VOID
*/
VOID HAL_MC_SetLFBEnable(BOOL bEnalbe)
{
	if(!bEnalbe)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_value), 0);	
	}	
	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_en), (UINT32)(!bEnalbe));	
}

VOID HAL_PQL_TOP_SetInputIntp_en(BOOL bEnalbe)
{
	WriteRegister(KIWI_REG(FRC_TOP__PQL_0__pql_input_intp_en), (UINT32)bEnalbe);
}

VOID HAL_PQL_TOP_SetOnefiftIntp_en(BOOL bEnalbe)
{
	WriteRegister(KIWI_REG(FRC_TOP__PQL_0__pql_onefifth_intp_en), (UINT32)bEnalbe);
}

VOID HAL_PQL_TOP_SetOutputIntp_en(BOOL bEnalbe)
{
	WriteRegister(KIWI_REG(FRC_TOP__PQL_0__pql_output_intp_en), (UINT32)bEnalbe);
}



