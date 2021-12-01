/**
 * @file hal_me.c
 * @brief This file is for kme me register setting
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
#include "memc_isr/HAL/hal_me.h"

/**
 * @brief This function set KME ipme in mode
 * @param [in] UINT32 u32In_mode
 * @retval VOID
*/
VOID HAL_KME_IPME_SetInMode(UINT32 u32In_mode)
{
	//reg_ipme_in_mode
//	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_in_mode),u32In_mode);
}

/**
 * @brief This function set KME ipme h fetch mode
 * @param [in] UINT32 u32HFetch_Mode
 * @retval VOID
*/
VOID HAL_KME_IPME_SetHFetchMode(UINT32 u32HFetch_Mode)
{
	//reg_ipme_h_fetch_mode
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_h_fetch_mode),u32HFetch_Mode);	
}

/**
 * @brief This function set KME ipme v fetch mode
 * @param [in] UINT32 u32VFetch_Mode
 * @retval VOID
*/
VOID HAL_KME_IPME_SetVFetchMode(UINT32 u32VFetch_Mode)
{
	//reg_ipme_v_fetch_mode
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_v_fetch_mode),u32VFetch_Mode);	
}

/**
 * @brief This function set KME ipme2 v fetch mode
 * @param [in] UINT32 u32VFetch_Mode
 * @retval VOID
*/
VOID HAL_KME_IPME2_SetVFetchMode(UINT32 u32VFetch_Mode)
{
	//reg_ipme_v_fetch_mode
//	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME1__ipme_v_480x270_mode),u32VFetch_Mode);	
}

/**
 * @brief This function set KME ipme h center value
 * @param [in] UINT32 u32H_Center_Value
 * @retval VOID
*/
VOID HAL_KME_IPME_SetHCenterValue(UINT32 u32H_Center_Value)
{
	//reg_ipme_h_center_value
//	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_h_center_value),u32H_Center_Value);
}

/**
 * @brief This function set KME ipme v center value
 * @param [in] UINT32 u32V_Center_Value
 * @retval VOID
*/
VOID HAL_KME_IPME_SetVCenterValue(UINT32 u32V_Center_Value)
{
	//reg_ipme_v_center_value
//	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_v_center_value),u32V_Center_Value);
}

/**
 * @brief This function set KME ipme2 v center value
 * @param [in] UINT32 u32V_Center_Value
 * @retval VOID
*/
VOID HAL_KME_IPME2_SetVCenterValue(UINT32 u32V_Center_Value)
{
	//reg_ipme_v_480x270_i_v_center
//	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME1__ipme_v_480x270_i_v_center),u32V_Center_Value);
}

/**
 * @brief This function set KME ipme h scaler active
 * @param [in] UINT32 u32Scaler_Hactive
 * @retval VOID
*/
VOID HAL_KME_IPME_SetScalerHactive(UINT32 u32Scaler_Hactive)
{
	//reg_ipme_scaler_h_active
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_scaler_h_active),u32Scaler_Hactive);
}

/**
 * @brief This function set KME ipme pscaler v active
 * @param [in] UINT32 u32Pscaler_Vactive
 * @retval VOID
*/
VOID HAL_KME_IPME_SetPscalerVactive(UINT32 u32Pscaler_Vactive)
{
	//reg_ipme_pscaler_v_active
	WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_pscaler_v_active),u32Pscaler_Vactive);
}

/**
 * @brief This function set KME LBME total line number
 * @param [in] u32 u32TotalLineNum
 * @retval VOID
*/
VOID HAL_KME_LBME_SetTotalLineNum(UINT32 u32TotalLineNum)
{
	// reg_lbme_total_line_num
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_total_line_num),u32TotalLineNum);	
}

/**
 * @brief This function set KME LBME rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KME_LBME_SetRim(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_rim_y_start),u32Top);
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_rim_y_end),u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_rim_x_start),u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_rim_x_end),u32Right);
}

#if 1  // K4Lp
/**
 * @brief This function set KME LBME meander rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KME_LBME_SetMeanderRim(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_meander_rim_y_start),u32Top);
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_meander_rim_y_end),u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_meander_rim_x_start),u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_meander_rim_x_end),u32Right);
}

/**
 * @brief This function set KME LBME2 rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KME_LBME2_SetRim(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME2_TOP__lbme2_rim_y_start),u32Top);
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME2_TOP__lbme2_rim_y_end),u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME2_TOP__lbme2_rim_x_start),u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME2_TOP__lbme2_rim_x_end),u32Right);
}
#endif

/**
 * @brief This function set KME LBME total pixel number
 * @param [in] u32 u32TotalPixelNum
 * @retval VOID
*/
VOID HAL_KME_LBME_SetTotalPixelNum(UINT32 u32TotalPixelNum)
{
	// reg_lbme_total_pixel_num
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_total_pixel_num),u32TotalPixelNum);	
}

/**
 * @brief This function set KME LBME block number per line
 * @param [in] u32 u32blk_num_perline
 * @retval VOID
*/
VOID HAL_KME_LBME_SetBlkNumPerLine(UINT32 u32blk_num_perline)
{
	// reg_lbme_blk_num_perline
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_blk_num_perline),u32blk_num_perline);
}

/**
 * @brief This function set KME LBME debug hactive
 * @param [in] u32 u32debug_hactive
 * @retval VOID
*/
VOID HAL_KME_LBME_SetDebugHactive(UINT32 u32debug_hactive)
{
	// reg_lbme_debug_hact
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_debug_hact),u32debug_hactive);
}

/**
 * @brief This function set KME LBME total linebuf number
 * @param [in] u32 u32TotalLinebufNum
 * @retval VOID
*/
VOID HAL_KME_LBME_SetTotalLinebufNum(UINT32 u32TotalLinebufNum)
{
	// reg_lbme_total_linebuf_num
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_total_linebuf_num),u32TotalLinebufNum);	
}

/**
 * @brief This function set KME LBME2 total line number
 * @param [in] u32 u32TotalLineNum
 * @retval VOID
*/
VOID HAL_KME2_LBME_SetTotalLineNum(UINT32 u32TotalLineNum)
{
	// reg_me2_lbme_total_line_num
#if 1
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME2_TOP__lbme2_total_line_num),u32TotalLineNum);	
#else
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_total_line_num),u32TotalLineNum);	
#endif
}

/**
 * @brief This function set KME LBME2 total pixel number
 * @param [in] u32 u32TotalPixelNum
 * @retval VOID
*/
VOID HAL_KME2_LBME_SetTotalPixelNum(UINT32 u32TotalPixelNum)
{
	// reg_me2_lbme_total_pixel_num
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME2_TOP__lbme2_total_pixel_num),u32TotalPixelNum);	
}

/**
 * @brief This function set KME2 LBME block number per line
 * @param [in] u32 u32blk_num_perline
 * @retval VOID
*/
VOID HAL_KME2_LBME_SetBlkNumPerLine(UINT32 u32blk_num_perline)
{
	// reg_me2_lbme_blk_num_perline
#if 1
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME2_TOP__lbme2_total_line_num),u32blk_num_perline);
#else
	WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_blk_num_perline),u32blk_num_perline);
#endif
}

/**
 * @brief This function set KME2 LBME debug hactive
 * @param [in] u32 u32debug_hactive
 * @retval VOID
*/
VOID HAL_KME2_LBME_SetDebugHactive(UINT32 u32debug_hactive)
{
	// reg_me2_lbme_debug_hact
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_LBME_TOP__reg_me2_lbme_debug_hact),u32debug_hactive);
}

/**
 * @brief This function set KME2 LBME total linebuf number
 * @param [in] u32 u32TotalLinebufNum
 * @retval VOID
*/
VOID HAL_KME2_LBME_SetTotalLinebufNum(UINT32 u32TotalLinebufNum)
{
	// reg_me2_lbme_total_linebuf_num
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_LBME_TOP__reg_me2_lbme_total_linebuf_num),u32TotalLinebufNum);	
}

/**
 * @brief This function set kme vbuf hactive
 * @param [in] UINT32 u32VBuf_Hactive
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_Hactive(UINT32 u32VBuf_Hactive)
{
	// reg_vbuf_hactive
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_hactive),u32VBuf_Hactive);
}

/**
 * @brief This function set kme vbuf vactive
 * @param [in] UINT32 u32VBuf_Vactive
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_Vactive(UINT32 u32VBuf_Vactive)
{
	// reg_vbuf_vactive
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_vactive),u32VBuf_Vactive);
}

/**
 * @brief This function set lbme update num
 * @param [in] UINT32 u32Lbme_Update_Num
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_LBMEUpdateNum(UINT32 u32Lbme_Update_Num)
{
	// reg_vbuf_lbme_update_num_1row
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_lbme_update_num_1row),u32Lbme_Update_Num);
}

/**
 * @brief This function set lbme trig mid row num
 * @param [in] UINT32 u32Lbme_TrigMidRow_Num
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_LBMETrigMidRowNum(UINT32 u32Lbme_TrigMidRow_Num)
{
	// reg_vbuf_lbme_trig_mid_row_num
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_lbme_trig_mid_row_num),u32Lbme_TrigMidRow_Num);
}

/**
 * @brief This function set lbme h shift bit
 * @param [in] UINT32 u32Lbme_HShift
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_LBMEHShift(UINT32 u32Lbme_HShift)
{
	// reg_vbuf_lbme_h_addr_shift_bit
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_lbme_h_addr_shift_bit),u32Lbme_HShift);
}

/**
 * @brief This function set lbme v shift bit
 * @param [in] UINT32 u32Lbme_VShift
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_LBMEVShift(UINT32 u32Lbme_VShift)
{
	// reg_vbuf_lbme_v_addr_shift_bit
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_lbme_v_addr_shift_bit),u32Lbme_VShift);
}

/**
 * @brief This function set kme2 vbuf pfv hactive
 * @param [in] UINT32 u32VBuf_Hactive
 * @retval VOID
*/
VOID HAL_KME2_VBUF_Set_PFVHactive(UINT32 u32VBuf_Hactive)
{
	// reg_kme_me2_vbuf_pfv_blksize_hact
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pfv_blksize_hact),u32VBuf_Hactive);
}

/**
 * @brief This function set kme vbuf pfv vactive
 * @param [in] UINT32 u32VBuf_Vactive
 * @retval VOID
*/
VOID HAL_KME2_VBUF_Set_PFVVactive(UINT32 u32VBuf_Vactive)
{
	// reg_kme_me2_vbuf_pfv_blksize_vact
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pfv_blksize_vact),u32VBuf_Vactive);
}

#if 1
/**
 * @brief This function set kme2 vbuf phase hactive
 * @param [in] UINT32 u32VBuf_Hactive
 * @retval VOID
*/
VOID HAL_KME2_VBUF_Set_PHHactive(UINT32 u32VBuf_Hactive)
{
	// reg_kme_me2_vbuf_pfv_blksize_hact
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_blksize_hact),u32VBuf_Hactive);
}

/**
 * @brief This function set kme vbuf phase vactive
 * @param [in] UINT32 u32VBuf_Vactive
 * @retval VOID
*/
VOID HAL_KME2_VBUF_Set_PHVactive(UINT32 u32VBuf_Vactive)
{
	// reg_kme_me2_vbuf_ph_blksize_vact
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_blksize_vact),u32VBuf_Vactive);
}
#endif

/**
 * @brief This function set kme2 vbuf 3dpr enable
 * @param [in] UINT32 u32VBuf_Vactive
 * @retval VOID
*/
VOID HAL_KME2_VBUF_Set_3DPREnable(BOOL bEnable)
{
	// reg_kme_me2_vbuf_3dpr_en
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_3dpr_en),(UINT32)bEnable);
}

/**
 * @brief This function set kme logo0 h fetch mode
 * @param [in] UINT32 u32Logo_Hfetch_mode
 * @retval VOID
*/
VOID HAL_KME_LOGO0_Set_HFetchMode(UINT32 u32Logo_Hfetch_mode)
{
	// reg_km_logo_h_fetch_mode   
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_h_fetch_mode),u32Logo_Hfetch_mode);
}

/**
 * @brief This function set kme logo0 v fetch mode
 * @param [in] UINT32 u32Logo_Vfetch_mode
 * @retval VOID
*/
VOID HAL_KME_LOGO0_Set_VFetchMode(UINT32 u32Logo_Vfetch_mode)
{
	// reg_km_logo_v_fetch_mode   
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_v_fetch_mode),u32Logo_Vfetch_mode);	
}

/**
 * @brief This function set kme logo0 pscaler v active
 * @param [in] UINT32 u32Logo_Pscaler_Vactive
 * @retval VOID
*/
VOID HAL_KME_LOGO0_Set_PscalerVactive(UINT32 u32Logo_Pscaler_Vactive)
{
	// reg_km_logo_pscaler_v_active   
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_pscaler_v_active),u32Logo_Pscaler_Vactive);	
}

/**
 * @brief This function set clear MV enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_METOP1_Set_ClearMVEnable(BOOL bEnable)
{
	// reg_metop_sc_clr_sw_control_en   
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME_TOP1__reg_metop_sc_clr_sw_control_en), (UINT32)bEnable);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_sc_sw_ctrl_en), (UINT32)bEnable);	
}

/**
 * @brief This function set me1_sc_en
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_METOP1_Set_SC_en(BOOL bEnable)
{
	// reg_me1_sc_me1_en
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME_TOP1__reg_metop_sc_clr_sw_control_en), (UINT32)bEnable);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_en), (UINT32)bEnable);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_sc_me2_en), (UINT32)bEnable);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_sc_mc_en), (UINT32)bEnable);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_sc_dh_en), (UINT32)bEnable);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_sc_logo_en), (UINT32)bEnable);	
}

/**
 * @brief This function set me1 rmv size
 * @param [in] UINT32 u32RMV_Hact
 * @param [in] UINT32 u32RMV_Vact
 * @retval VOID
*/
VOID HAL_KME_ME1_Set_RMVSize(UINT32 u32RMV_Hact, UINT32 u32RMV_Vact)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP2__me1_rmv_hact), u32RMV_Hact);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP2__me1_rmv_vact), u32RMV_Vact);
}

/**
 * @brief This function set me2 rmv size
 * @param [in] UINT32 u32RMV_Hact
 * @param [in] UINT32 u32RMV_Vact
 * @retval VOID
*/
VOID HAL_KME_ME2_Set_RMVSize(UINT32 u32RMV_Hact, UINT32 u32RMV_Vact)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_rmv_hact), u32RMV_Hact);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_rmv_vact), u32RMV_Vact);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC1__me2_hact),u32RMV_Hact);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC1__me2_vact),u32RMV_Vact);
}

/**
 * @brief This function set me1 static size
 * @param [in] UINT32 u32Statis_Hact
 * @param [in] UINT32 u32Statis_Vact
 * @retval VOID
*/
VOID HAL_KME_ME1_Set_StatisSize(UINT32 u32Statis_Hact, UINT32 u32Statis_Vact)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP6__me1_statis_hact), u32Statis_Hact);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP6__me1_statis_vact), u32Statis_Vact);
}

#if 1
/**
 * @brief This function set ph pfv h ratio
 * @param [in] UINT32 u32ph_pfv_h_ratio
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_PHPFHRatio(UINT32 u32ph_pfv_h_ratio)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_pfv_h_ratio),u32ph_pfv_h_ratio);
}
#endif

/**
 * @brief This function set ph pfv v ratio
 * @param [in] UINT32 u32ph_pfv_v_ratio
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_PHPFVRatio(UINT32 u32ph_pfv_v_ratio)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_pfv_v_ratio),u32ph_pfv_v_ratio);
}

#if 1
/**
 * @brief This function set ph lbme h ratio
 * @param [in] UINT32 u32ph_lbme_h_ratio
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_PHLBMEHRatio(UINT32 u32ph_lbme_h_ratio)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_lbme_h_ratio),u32ph_lbme_h_ratio);
}

/**
 * @brief This function set ph lbme v ratio
 * @param [in] UINT32 u32ph_lbme_v_ratio
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_PHLBMEVRatio(UINT32 u32ph_lbme_v_ratio)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_lbme_v_ratio),u32ph_lbme_v_ratio);
}
#endif

/**
 * @brief This function set pfv mv fetch in 1 row
 * @param [in] UINT32 u32val
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_PFVMVFetchIn1Row(UINT32 u32val)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pfv_mv_fetch_ln_1_row),u32val);
}	

/**
 * @brief This function set ppfv mv fetch in 1 row
 * @param [in] UINT32 u32val
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_PPFVMVFetchIn1Row(UINT32 u32val)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ppfv_mv_fetch_ln_1_row),u32val);
}

/**
 * @brief This function set vbuf blk vact
 * @param [in] UINT32 u32val
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_BlockVact(UINT32 u32val)
{
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__kme_vbuf_blk_vact),u32val);
}

/**
 * @brief This function set vbuf row type
 * @param [in] UINT32 u32val
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_RowType(UINT32 u32val)
{
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__kme_vbuf_row_type),u32val);
}

/**
 * @brief This function set vbuf wait cycle
 * @param [in] UINT32 u32val
 * @retval VOID
*/
VOID HAL_KME_VBUF_Set_WaitCycle(UINT32 u32MV_Trig, UINT32 u32ME_Trig)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_wait_cycle_frame2_mv_trig),u32MV_Trig);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_wait_cycle_frame2_me_trig),u32ME_Trig);
}

/**
 * @brief This function set work mode
 * @param [in] UINT32 u32val
 * @retval VOID
*/
VOID HAL_KME_Set_KME_WorkMode(UINT32 u32val)
{
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__kphase_me_work_mode),u32val);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__kme_me_work_mode),u32val);
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__CRTC1__crtc1_vspll_me_work_mode),u32val);
}

/**
 * @brief This function set work mode
 * @param [in] UINT32 u32val
 * @retval VOID
*/
VOID HAL_KME_Set_Vspll_WorkMode(UINT32 u32val)
{
	WriteRegister(KIWI_REG(FRC_TOP__CRTC1__crtc1_vspll_me_work_mode),u32val);
}

/**
 * @brief This function set meander enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_Set_MeanderEnable(BOOL bEnable)
{
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__frame_meander_enable), (UINT32)bEnable);	
}

/**
 * @brief This function set LBME2 3DPR Enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_Set_LBME23DPREnable(BOOL bEnable)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_LBME_TOP__reg_me2_lbme_3d_en), (UINT32)bEnable);	
}

#if 1
/**
 * @brief This function set ME1 vbuf pixel rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KME_Set_ME1VbufPixelRIM(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pix_rim_top), u32Top);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pix_rim_bot), u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pix_rim_left), u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pix_rim_right), u32Right);	
}
#endif

/**
 * @brief This function set ME1 vbuf block rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KME_Set_ME1VbufBlockRIM(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_blk_rim_top), u32Top);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_blk_rim_bot), u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_blk_rim_left), u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_blk_rim_right), u32Right);	
}

/**
 * @brief This function set ME2 vbuf pfv block rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KME_Set_ME2VbufPFVBlockRIM(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pfv_blk_rim_top), u32Top);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pfv_blk_rim_bot), u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pfv_blk_rim_left), u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pfv_blk_rim_right), u32Right);	
}

#if 1
/**
 * @brief This function set ME2 vbuf phase block rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KME_Set_ME2VbufPHBlockRIM(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_blk_rim_top), u32Top);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_blk_rim_bot), u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_blk_rim_left), u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_blk_rim_right), u32Right);	
}

/**
 * @brief This function set ME2 vbuf pixel rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KME_Set_ME2VbufPixelRIM(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pix_rim_top), u32Top);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pix_rim_bot), u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pix_rim_left), u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pix_rim_right), u32Right);	
}

/**
 * @brief This function set me2 135 to 270
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_SetME2135To270(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_row135to270_en),(UINT32)bEnable);	
}

/**
 * @brief This function set me2 135 to 270 read interval
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_SetME2135To270RDInterval(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_row135to270_rd_interval),u32Val);	
}

/**
 * @brief This function set me2 135 to 270 wait row numbers
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_SetME2135To270WaitRowNum(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_row135to270_wait_row_nums),u32Val);	
}
#endif

/**
 * @brief This function set BBD window
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KME_Set_BBDWindow(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__BBD__BBD_window_y_start), u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__BBD__BBD_window_y_end), u32Right);	
	WriteRegister(KIWI_REG(FRC_TOP__BBD__BBD_window_x_start), u32Top);	
	WriteRegister(KIWI_REG(FRC_TOP__BBD__BBD_window_x_end), u32Bottom);	
}

/**
 * @brief This function set ME2 LR Dec enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_Set_ME2LRDecEnable(BOOL bEnable)
{
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__kphase_me2_lr_dec_en), (UINT32)bEnable);	
}

/**
 * @brief This function set 3d ppfv index
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_Set_3DPPFVIDX(BOOL bEnable)
{
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__kphase_3d_ppfv_wr_idx_position), (UINT32)bEnable);	
}

/**
 * @brief This function set crtc lr enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_SetLREnable(BOOL bEnable)
{
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__kphase_3dsg_llrr_en),(UINT32)bEnable);	
}

/**
 * @brief This function set crtc lr cycle
 * @param [in] UINT32 u32Cycle
 * @retval VOID
*/
VOID HAL_KME_SetLRCycle(UINT32 u32Cycle)
{
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__kphase_me1_llrr_nums),u32Cycle);	
}

/**
 * @brief This function set crtc lr pattern
 * @param [in] UINT32 u32Pattern
 * @retval VOID
*/
VOID HAL_KME_SetLRPattern(UINT32 u32Pattern)
{
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__kphase_me1_llrr_patt),u32Pattern);	
}

/**
 * @brief This function set ME1 HV Ratio
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_Set_ME1HVRatio(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_lbme_hv_ratio), (UINT32)bEnable);	
}

/**
 * @brief This function set meander block rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @retval VOID
*/
VOID HAL_KME_SetMeanderBLKRIM(UINT32 u32Top, UINT32 u32Bottom)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_meander_blk_rim_top),u32Top);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_meander_blk_rim_bot),u32Bottom);	
}

/**
 * @brief This function set meander pixel rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @retval VOID
*/
VOID HAL_KME_SetMeanderPIXRIM(UINT32 u32Top, UINT32 u32Bottom)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_meander_pix_rim_top),u32Top);
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__vbuf_meander_pix_rim_bot),u32Bottom);	
}

/**
 * @brief This function set DM PFV PPFV interval
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_KME_ME2_SetDMPFVPPFVInterval(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_dm_pfv_req_intr_interval),u32Val);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_dm_ppfv_req_intr_interval),u32Val);	
}

#if 1
/**
 * @brief This function set lbme dm number in 1 row
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_KME_ME2_SetVbufLBMEDMNum1Row(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_lbme_dm_num_1row),u32Val);
}

/**
 * @brief This function get 1st GMV offset number
 * @param [in] VOID
 * @retval u32Val
*/
UINT32 HAL_KME_ME2_Get1stGMVOffetNum(VOID)
{
	UINT32 u32Val = 0;
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_gmv_offset_nums), &u32Val);
	return u32Val;
}

/**
 * @brief This function get 1st phase candidate number
 * @param [in] VOID
 * @retval u32Val
*/
UINT32 HAL_KME_ME2_Get1stPHCandiNum(VOID)
{
	UINT32 u32Val = 0;
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_nums), &u32Val);
	return u32Val;
}

/**
 * @brief This function get 1st phase candidate offset number
 * @param [in] VOID
 * @retval u32Val
*/
UINT32 HAL_KME_ME2_Get1stPHCandiOffsetNum(VOID)
{
	UINT32 u32Val = 0;
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_offset_nums), &u32Val);
	return u32Val;
}

/**
 * @brief This function get 1st phv0 candidate number
 * @param [in] VOID
 * @retval u32Val
*/
UINT32 HAL_KME_ME2_Get1stPFV0CandiNum(VOID)
{
	UINT32 u32Val = 0;
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_nums), &u32Val);
	return u32Val;
}

/**
 * @brief This function get 1st phv0 candidate offset number
 * @param [in] VOID
 * @retval u32Val
*/
UINT32 HAL_KME_ME2_Get1stPFV0CandiOffsetNum(VOID)
{
	UINT32 u32Val = 0;
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_offset_nums), &u32Val);
	return u32Val;
}

/**
 * @brief This function get 1st phv1 candidate number
 * @param [in] VOID
 * @retval u32Val
*/
UINT32 HAL_KME_ME2_Get1stPFV1CandiNum(VOID)
{
	UINT32 u32Val = 0;
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_nums), &u32Val);
	return u32Val;
}

/**
 * @brief This function get 1st phv1 candidate offset number
 * @param [in] VOID
 * @retval u32Val
*/
UINT32 HAL_KME_ME2_Get1stPFV1CandiOffsetNum(VOID)
{
	UINT32 u32Val = 0;
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_offset_nums), &u32Val);
	return u32Val;
}

/**
 * @brief This function get 1st update candidate number
 * @param [in] VOID
 * @retval u32Val
*/
UINT32 HAL_KME_ME2_Get1stUpdateCandiNums(VOID)
{
	UINT32 u32Val = 0;
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_nums), &u32Val);
	return u32Val;
}

/**
 * @brief This function set block logo rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KME_LOGO_Set_BlockRim(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blk_rim_v0), u32Top);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blk_rim_v1), u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blk_rim_h0), u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blk_rim_h1), u32Right);	
}

/**
 * @brief This function set pixel pixel rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_KME_LOGO_Set_PixelRim(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrim_v0), u32Top);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrim_v1), u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrim_h0), u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrim_h1), u32Right);	
}

/**
 * @brief This function set ME2 double scan enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_Set_ME2DoubleScanEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_doublescan_en), (UINT32)bEnable);	
}

/**
 * @brief This function set me vflip
 * @param [in] BOOL bVflip
 * @retval VOID
*/
VOID HAL_KME_SetVflip(BOOL bVflip)
{
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__kme_system_vflip_enable),(UINT32)bVflip);
}

/**
 * @brief This function set me vbuf_en
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_KME_Set_Vbuf_Enable(BOOL bEnable)
{
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_en_BITEND, (UINT32)bEnable);
}

VOID HAL_ME2_cand_wrtDriver( _str_ME2_Candidate_table *CandiTbl)
{
	UINT32 u8_candiNum_me2_1st = 0, u8_candiNum_me2_2nd = 0;

	u8_candiNum_me2_1st = 	(CandiTbl->_cand_num._1st_zmv_en) + (CandiTbl->_cand_num._1st_gmv_en) +
							(CandiTbl->_cand_num._1st_ph_cand_num * CandiTbl->_cand_num._1st_ph_offset_cand_num) +
							(CandiTbl->_cand_num._1st_update_cand_num) +
							(CandiTbl->_cand_num._1st_pfv0_cand_num * CandiTbl->_cand_num._1st_pfv0_offset_cand_num) +
							(CandiTbl->_cand_num._1st_pfv1_cand_num * CandiTbl->_cand_num._1st_pfv1_offset_cand_num);

	u8_candiNum_me2_2nd = 	(CandiTbl->_cand_num._2nd_zmv_en) + (CandiTbl->_cand_num._2nd_gmv_en) +
							(CandiTbl->_cand_num._2nd_ph_cand_num * CandiTbl->_cand_num._2nd_ph_offset_cand_num) +
							(CandiTbl->_cand_num._2nd_update_cand_num) +
							(CandiTbl->_cand_num._2nd_pfv0_cand_num * CandiTbl->_cand_num._2nd_pfv0_offset_cand_num) +
							(CandiTbl->_cand_num._2nd_pfv1_cand_num * CandiTbl->_cand_num._2nd_pfv1_offset_cand_num);

	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s] me2 : %d %d\n", __func__ , u8_candiNum_me2_1st, u8_candiNum_me2_2nd);

//======== for _str_cand_num	========
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_nums_ADDR, 21, 25, 			CandiTbl->_cand_num._1st_ph_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_offset_nums_ADDR, 26, 28, 	CandiTbl->_cand_num._1st_ph_offset_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_nums_ADDR, 18, 23, 		CandiTbl->_cand_num._1st_update_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_nums_ADDR, 0, 4, 			CandiTbl->_cand_num._1st_pfv0_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_offset_nums_ADDR, 5, 7, 	CandiTbl->_cand_num._1st_pfv0_offset_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_nums_ADDR, 8, 12, 			CandiTbl->_cand_num._1st_pfv1_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_offset_nums_ADDR, 13, 15, 	CandiTbl->_cand_num._1st_pfv1_offset_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_dediff_en_ADDR, 1, 1, 		CandiTbl->_cand_num._1st_ph_cand_dediff_en);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_dediff_en_ADDR, 3, 3, 		CandiTbl->_cand_num._1st_pfv0_cand_dediff_en);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_dediff_en_ADDR, 5, 5, 		CandiTbl->_cand_num._1st_pfv1_cand_dediff_en);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_zmv_en_ADDR, 16, 16, 					CandiTbl->_cand_num._1st_zmv_en);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_gmv_en_ADDR, 17, 17, 					CandiTbl->_cand_num._1st_gmv_en);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_nums_ADDR, 27, 31, 			CandiTbl->_cand_num._2nd_ph_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_offset_nums_ADDR, 0, 2, 		CandiTbl->_cand_num._2nd_ph_offset_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_nums_ADDR, 21, 26, 		CandiTbl->_cand_num._2nd_update_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_nums_ADDR, 3, 7, 			CandiTbl->_cand_num._2nd_pfv0_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_offset_nums_ADDR, 8, 10, 	CandiTbl->_cand_num._2nd_pfv0_offset_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_nums_ADDR, 11, 15, 		CandiTbl->_cand_num._2nd_pfv1_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_offset_nums_ADDR, 16, 18, 	CandiTbl->_cand_num._2nd_pfv1_offset_cand_num);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_dediff_en_ADDR, 1, 1, 		CandiTbl->_cand_num._2nd_ph_cand_dediff_en);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_dediff_en_ADDR, 3, 3, 		CandiTbl->_cand_num._2nd_pfv0_cand_dediff_en);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_dediff_en_ADDR, 5, 5, 		CandiTbl->_cand_num._2nd_pfv1_cand_dediff_en);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_zmv_en_ADDR, 19, 19, 					CandiTbl->_cand_num._2nd_zmv_en);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_gmv_en_ADDR, 20, 20, 					CandiTbl->_cand_num._2nd_gmv_en);

//======= for _str_cand_location ========
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_0_x_offset_ADDR, 8, 10, 		CandiTbl->_cand_location._1st_ph_cand._ph_cand0.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_0_y_offset_ADDR, 11, 13, 	CandiTbl->_cand_location._1st_ph_cand._ph_cand0.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_1_x_offset_ADDR, 14, 16, 	CandiTbl->_cand_location._1st_ph_cand._ph_cand1.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_1_y_offset_ADDR, 17, 19, 	CandiTbl->_cand_location._1st_ph_cand._ph_cand1.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_2_x_offset_ADDR, 20, 22, 	CandiTbl->_cand_location._1st_ph_cand._ph_cand2.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_2_y_offset_ADDR, 23, 25, 	CandiTbl->_cand_location._1st_ph_cand._ph_cand2.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_3_x_offset_ADDR, 26, 28, 	CandiTbl->_cand_location._1st_ph_cand._ph_cand3.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_3_y_offset_ADDR, 29, 31, 	CandiTbl->_cand_location._1st_ph_cand._ph_cand3.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_4_x_offset_ADDR, 0, 2, 		CandiTbl->_cand_location._1st_ph_cand._ph_cand4.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_4_y_offset_ADDR, 3, 5, 		CandiTbl->_cand_location._1st_ph_cand._ph_cand4.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_5_x_offset_ADDR, 6, 8, 		CandiTbl->_cand_location._1st_ph_cand._ph_cand5.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_5_y_offset_ADDR, 9, 11, 		CandiTbl->_cand_location._1st_ph_cand._ph_cand5.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_6_x_offset_ADDR, 12, 14, 	CandiTbl->_cand_location._1st_ph_cand._ph_cand6.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_6_y_offset_ADDR, 15, 17, 	CandiTbl->_cand_location._1st_ph_cand._ph_cand6.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_7_x_offset_ADDR, 18, 20, 	CandiTbl->_cand_location._1st_ph_cand._ph_cand7.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_7_y_offset_ADDR, 21, 23, 	CandiTbl->_cand_location._1st_ph_cand._ph_cand7.offset_y);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_0_x_offset_ADDR, 0, 2, 	CandiTbl->_cand_location._1st_update_cand._update_cand0.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_0_y_offset_ADDR, 3, 5,		CandiTbl->_cand_location._1st_update_cand._update_cand0.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_1_x_offset_ADDR, 6, 8,		CandiTbl->_cand_location._1st_update_cand._update_cand1.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_1_y_offset_ADDR, 9, 11,	CandiTbl->_cand_location._1st_update_cand._update_cand1.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_2_x_offset_ADDR, 12, 14, 	CandiTbl->_cand_location._1st_update_cand._update_cand2.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_2_y_offset_ADDR, 15, 17, 	CandiTbl->_cand_location._1st_update_cand._update_cand2.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_3_x_offset_ADDR, 18, 20, 	CandiTbl->_cand_location._1st_update_cand._update_cand3.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_3_y_offset_ADDR, 21, 23, 	CandiTbl->_cand_location._1st_update_cand._update_cand3.offset_y);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_0_x_offset_ADDR, 24, 26, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand0.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_0_y_offset_ADDR, 27, 29, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand0.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_1_x_offset_ADDR, 0, 2, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand1.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_1_y_offset_ADDR, 3, 5, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand1.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_2_x_offset_ADDR, 6, 8, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand2.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_2_y_offset_ADDR, 9, 11, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand2.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_3_x_offset_ADDR, 12, 14, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand3.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_3_y_offset_ADDR, 15, 17, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand3.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_4_x_offset_ADDR, 18, 20, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand4.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_4_y_offset_ADDR, 21, 23, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand4.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_5_x_offset_ADDR, 24, 26, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand5.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_5_y_offset_ADDR, 27, 29, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand5.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_6_x_offset_ADDR, 0, 2, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand6.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_6_y_offset_ADDR, 3, 5, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand6.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_7_x_offset_ADDR, 6, 8, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand7.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_7_y_offset_ADDR, 9, 11, 	CandiTbl->_cand_location._1st_pfv0_cand._pfv0_cand7.offset_y);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_0_x_offset_ADDR, 12, 14, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand0.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_0_y_offset_ADDR, 15, 17, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand0.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_1_x_offset_ADDR, 18, 20, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand1.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_1_y_offset_ADDR, 21, 23, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand1.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_2_x_offset_ADDR, 24, 26, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand2.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_2_y_offset_ADDR, 27, 29, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand2.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_3_x_offset_ADDR, 0, 2, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand3.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_3_y_offset_ADDR, 3, 5, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand3.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_4_x_offset_ADDR, 6, 8, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand4.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_4_y_offset_ADDR, 9, 11, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand4.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_5_x_offset_ADDR, 12, 14, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand5.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_5_y_offset_ADDR, 15, 17, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand5.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_6_x_offset_ADDR, 18, 20, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand6.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_6_y_offset_ADDR, 21, 23, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand6.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_7_x_offset_ADDR, 24, 26, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand7.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_7_y_offset_ADDR, 27, 29, 	CandiTbl->_cand_location._1st_pfv1_cand._pfv1_cand7.offset_y);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_0_x_offset_ADDR, 7, 9, 		CandiTbl->_cand_location._2nd_ph_cand._ph_cand0.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_0_y_offset_ADDR, 10, 12, 	CandiTbl->_cand_location._2nd_ph_cand._ph_cand0.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_1_x_offset_ADDR, 13, 15, 	CandiTbl->_cand_location._2nd_ph_cand._ph_cand1.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_1_y_offset_ADDR, 16, 18, 	CandiTbl->_cand_location._2nd_ph_cand._ph_cand1.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_2_x_offset_ADDR, 19, 21, 	CandiTbl->_cand_location._2nd_ph_cand._ph_cand2.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_2_y_offset_ADDR, 22, 24, 	CandiTbl->_cand_location._2nd_ph_cand._ph_cand2.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_3_x_offset_ADDR, 25, 27, 	CandiTbl->_cand_location._2nd_ph_cand._ph_cand3.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_3_y_offset_ADDR, 28, 30, 	CandiTbl->_cand_location._2nd_ph_cand._ph_cand3.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_4_x_offset_ADDR, 0, 2, 		CandiTbl->_cand_location._2nd_ph_cand._ph_cand4.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_4_y_offset_ADDR, 3, 5, 		CandiTbl->_cand_location._2nd_ph_cand._ph_cand4.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_5_x_offset_ADDR, 6, 8, 		CandiTbl->_cand_location._2nd_ph_cand._ph_cand5.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_5_y_offset_ADDR, 9, 11, 		CandiTbl->_cand_location._2nd_ph_cand._ph_cand5.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_6_x_offset_ADDR, 12, 14, 	CandiTbl->_cand_location._2nd_ph_cand._ph_cand6.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_6_y_offset_ADDR, 15, 17, 	CandiTbl->_cand_location._2nd_ph_cand._ph_cand6.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_7_x_offset_ADDR, 18, 20, 	CandiTbl->_cand_location._2nd_ph_cand._ph_cand7.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_7_y_offset_ADDR, 21, 23, 	CandiTbl->_cand_location._2nd_ph_cand._ph_cand7.offset_y);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_0_x_offset_ADDR, 0, 2, 	CandiTbl->_cand_location._2nd_update_cand._update_cand0.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_0_y_offset_ADDR, 3, 5,		CandiTbl->_cand_location._2nd_update_cand._update_cand0.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_1_x_offset_ADDR, 6, 8,		CandiTbl->_cand_location._2nd_update_cand._update_cand1.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_1_y_offset_ADDR, 9, 11,	CandiTbl->_cand_location._2nd_update_cand._update_cand1.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_2_x_offset_ADDR, 12, 14, 	CandiTbl->_cand_location._2nd_update_cand._update_cand2.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_2_y_offset_ADDR, 15, 17, 	CandiTbl->_cand_location._2nd_update_cand._update_cand2.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_3_x_offset_ADDR, 18, 20, 	CandiTbl->_cand_location._2nd_update_cand._update_cand3.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_3_y_offset_ADDR, 21, 23, 	CandiTbl->_cand_location._2nd_update_cand._update_cand3.offset_y);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_0_x_offset_ADDR, 24, 26, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand0.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_0_y_offset_ADDR, 27, 29, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand0.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_1_x_offset_ADDR, 0, 2, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand1.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_1_y_offset_ADDR, 3, 5, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand1.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_2_x_offset_ADDR, 6, 8, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand2.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_2_y_offset_ADDR, 9, 11, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand2.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_3_x_offset_ADDR, 12, 14, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand3.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_3_y_offset_ADDR, 15, 17, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand3.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_4_x_offset_ADDR, 18, 20, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand4.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_4_y_offset_ADDR, 21, 23, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand4.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_5_x_offset_ADDR, 24, 26, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand5.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_5_y_offset_ADDR, 27, 29, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand5.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_6_x_offset_ADDR, 0, 2, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand6.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_6_y_offset_ADDR, 3, 5, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand6.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_7_x_offset_ADDR, 6, 8, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand7.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_7_y_offset_ADDR, 9, 11, 	CandiTbl->_cand_location._2nd_pfv0_cand._pfv0_cand7.offset_y);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_0_x_offset_ADDR, 12, 14, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand0.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_0_y_offset_ADDR, 15, 17, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand0.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_1_x_offset_ADDR, 18, 20, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand1.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_1_y_offset_ADDR, 21, 23, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand1.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_2_x_offset_ADDR, 24, 26, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand2.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_2_y_offset_ADDR, 27, 29, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand2.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_3_x_offset_ADDR, 0, 2, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand3.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_3_y_offset_ADDR, 3, 5, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand3.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_4_x_offset_ADDR, 6, 8, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand4.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_4_y_offset_ADDR, 9, 11, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand4.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_5_x_offset_ADDR, 12, 14, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand5.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_5_y_offset_ADDR, 15, 17, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand5.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_6_x_offset_ADDR, 18, 20, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand6.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_6_y_offset_ADDR, 21, 23, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand6.offset_y);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_7_x_offset_ADDR, 24, 26, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand7.offset_x);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_7_y_offset_ADDR, 27, 29, 	CandiTbl->_cand_location._2nd_pfv1_cand._pfv1_cand7.offset_y);

//======== _str_cand_pnt ==========
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_st_pnt0_ADDR, 8, 15, 	CandiTbl->_cand_pnt._1st_ph_pnt.ph_pnt0);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_st_pnt1_ADDR, 16, 23, 	CandiTbl->_cand_pnt._1st_ph_pnt.ph_pnt1);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_st_pnt2_ADDR, 24, 31, 	CandiTbl->_cand_pnt._1st_ph_pnt.ph_pnt2);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_st_pnt3_ADDR, 0, 7, 		CandiTbl->_cand_pnt._1st_ph_pnt.ph_pnt3);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_st_pnt4_ADDR, 8, 15, 	CandiTbl->_cand_pnt._1st_ph_pnt.ph_pnt4);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_st_pnt5_ADDR, 16, 23, 	CandiTbl->_cand_pnt._1st_ph_pnt.ph_pnt5);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_st_pnt6_ADDR, 24, 31, 	CandiTbl->_cand_pnt._1st_ph_pnt.ph_pnt6);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_st_pnt7_ADDR, 0, 7, 		CandiTbl->_cand_pnt._1st_ph_pnt.ph_pnt7);
	
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_candi_updt_pnt0_ADDR, 0, 7, 		CandiTbl->_cand_pnt._1st_update_pnt.update_pnt0);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_candi_updt_pnt1_ADDR, 8, 15, 		CandiTbl->_cand_pnt._1st_update_pnt.update_pnt1);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_candi_updt_pnt2_ADDR, 16, 23, 	CandiTbl->_cand_pnt._1st_update_pnt.update_pnt2);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_candi_updt_pnt3_ADDR, 24, 31, 	CandiTbl->_cand_pnt._1st_update_pnt.update_pnt3);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_st_pnt0_ADDR, 16, 23, 	CandiTbl->_cand_pnt._1st_pfv0_pnt.pfv0_pnt0);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_st_pnt1_ADDR, 24, 31, 	CandiTbl->_cand_pnt._1st_pfv0_pnt.pfv0_pnt1);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_st_pnt2_ADDR, 0, 7, 	CandiTbl->_cand_pnt._1st_pfv0_pnt.pfv0_pnt2);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_st_pnt3_ADDR, 8, 15, 	CandiTbl->_cand_pnt._1st_pfv0_pnt.pfv0_pnt3);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_st_pnt4_ADDR, 16, 23, 	CandiTbl->_cand_pnt._1st_pfv0_pnt.pfv0_pnt4);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_st_pnt5_ADDR, 24, 31, 	CandiTbl->_cand_pnt._1st_pfv0_pnt.pfv0_pnt5);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_st_pnt6_ADDR, 0, 7, 	CandiTbl->_cand_pnt._1st_pfv0_pnt.pfv0_pnt6);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_st_pnt7_ADDR, 8, 15, 	CandiTbl->_cand_pnt._1st_pfv0_pnt.pfv0_pnt7);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_st_pnt0_ADDR, 24, 31, 	CandiTbl->_cand_pnt._1st_pfv1_pnt.pfv1_pnt0);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_st_pnt1_ADDR, 0, 7, 	CandiTbl->_cand_pnt._1st_pfv1_pnt.pfv1_pnt1);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_st_pnt2_ADDR, 8, 15, 	CandiTbl->_cand_pnt._1st_pfv1_pnt.pfv1_pnt2);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_st_pnt3_ADDR, 16, 23, 	CandiTbl->_cand_pnt._1st_pfv1_pnt.pfv1_pnt3);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_st_pnt4_ADDR, 24, 31, 	CandiTbl->_cand_pnt._1st_pfv1_pnt.pfv1_pnt4);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_st_pnt5_ADDR, 0, 7, 	CandiTbl->_cand_pnt._1st_pfv1_pnt.pfv1_pnt5);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_st_pnt6_ADDR, 8, 15, 	CandiTbl->_cand_pnt._1st_pfv1_pnt.pfv1_pnt6);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_st_pnt7_ADDR, 16, 23, 	CandiTbl->_cand_pnt._1st_pfv1_pnt.pfv1_pnt7);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_dediff_pnt_ADDR, 8, 15, 		CandiTbl->_cand_pnt._1st_others_pnt._1st_ph_cand_dediff_pnt);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_dediff_pnt_ADDR, 16, 23, 	CandiTbl->_cand_pnt._1st_others_pnt._1st_pfv0_cand_dediff_pnt);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_dediff_pnt_ADDR, 24, 31, 	CandiTbl->_cand_pnt._1st_others_pnt._1st_pfv1_cand_dediff_pnt);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_candi_zmv_pnt_ADDR, 24, 31, 			CandiTbl->_cand_pnt._1st_others_pnt._1st_zmv_pnt);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_candi_gmv_pnt_ADDR, 0, 7, 			CandiTbl->_cand_pnt._1st_others_pnt._1st_gmv_pnt);
	
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_gain0_ADDR, 7, 12, 		CandiTbl->_ph_index_setting._ph_index0.gain);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_gain1_ADDR, 13, 18, 	CandiTbl->_ph_index_setting._ph_index1.gain);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_gain2_ADDR, 19, 24, 	CandiTbl->_ph_index_setting._ph_index2.gain);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_gain3_ADDR, 25, 30, 	CandiTbl->_ph_index_setting._ph_index3.gain);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_offset0_ADDR, 0, 6, 	CandiTbl->_ph_index_setting._ph_index0.offset);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_offset1_ADDR, 7, 13, 	CandiTbl->_ph_index_setting._ph_index1.offset);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_offset2_ADDR, 14, 20, 	CandiTbl->_ph_index_setting._ph_index2.offset);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_offset3_ADDR, 21, 27, 	CandiTbl->_ph_index_setting._ph_index3.offset);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_st_pnt0_ADDR, 16, 23, 	CandiTbl->_cand_pnt._2nd_ph_pnt.ph_pnt0);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_st_pnt1_ADDR, 24, 31, 	CandiTbl->_cand_pnt._2nd_ph_pnt.ph_pnt1);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_st_pnt2_ADDR, 0, 7, 		CandiTbl->_cand_pnt._2nd_ph_pnt.ph_pnt2);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_st_pnt3_ADDR, 8, 15, 	CandiTbl->_cand_pnt._2nd_ph_pnt.ph_pnt3);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_st_pnt4_ADDR, 16, 23, 	CandiTbl->_cand_pnt._2nd_ph_pnt.ph_pnt4);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_st_pnt5_ADDR, 24, 31, 	CandiTbl->_cand_pnt._2nd_ph_pnt.ph_pnt5);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_st_pnt6_ADDR, 0, 7, 		CandiTbl->_cand_pnt._2nd_ph_pnt.ph_pnt6);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_st_pnt7_ADDR, 8, 15, 	CandiTbl->_cand_pnt._2nd_ph_pnt.ph_pnt7);
	
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_candi_updt_pnt0_ADDR, 8, 15, 		CandiTbl->_cand_pnt._2nd_update_pnt.update_pnt0);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_candi_updt_pnt1_ADDR, 16, 23, 	CandiTbl->_cand_pnt._2nd_update_pnt.update_pnt1);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_candi_updt_pnt2_ADDR, 24, 31, 	CandiTbl->_cand_pnt._2nd_update_pnt.update_pnt2);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_candi_updt_pnt3_ADDR, 0, 7, 		CandiTbl->_cand_pnt._2nd_update_pnt.update_pnt3);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_st_pnt0_ADDR, 24, 31, 	CandiTbl->_cand_pnt._2nd_pfv0_pnt.pfv0_pnt0);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_st_pnt1_ADDR, 0, 7, 	CandiTbl->_cand_pnt._2nd_pfv0_pnt.pfv0_pnt1);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_st_pnt2_ADDR, 8, 15, 	CandiTbl->_cand_pnt._2nd_pfv0_pnt.pfv0_pnt2);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_st_pnt3_ADDR, 16, 23, 	CandiTbl->_cand_pnt._2nd_pfv0_pnt.pfv0_pnt3);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_st_pnt4_ADDR, 24, 31, 	CandiTbl->_cand_pnt._2nd_pfv0_pnt.pfv0_pnt4);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_st_pnt5_ADDR, 0, 7, 	CandiTbl->_cand_pnt._2nd_pfv0_pnt.pfv0_pnt5);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_st_pnt6_ADDR, 8, 15, 	CandiTbl->_cand_pnt._2nd_pfv0_pnt.pfv0_pnt6);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_st_pnt7_ADDR, 16, 23, 	CandiTbl->_cand_pnt._2nd_pfv0_pnt.pfv0_pnt7);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_st_pnt0_ADDR, 0, 7, 	CandiTbl->_cand_pnt._2nd_pfv1_pnt.pfv1_pnt0);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_st_pnt1_ADDR, 8, 15, 	CandiTbl->_cand_pnt._2nd_pfv1_pnt.pfv1_pnt1);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_st_pnt2_ADDR, 16, 23, 	CandiTbl->_cand_pnt._2nd_pfv1_pnt.pfv1_pnt2);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_st_pnt3_ADDR, 24, 31, 	CandiTbl->_cand_pnt._2nd_pfv1_pnt.pfv1_pnt3);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_st_pnt4_ADDR, 0, 7, 	CandiTbl->_cand_pnt._2nd_pfv1_pnt.pfv1_pnt4);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_st_pnt5_ADDR, 8, 15, 	CandiTbl->_cand_pnt._2nd_pfv1_pnt.pfv1_pnt5);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_st_pnt6_ADDR, 16, 23, 	CandiTbl->_cand_pnt._2nd_pfv1_pnt.pfv1_pnt6);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_st_pnt7_ADDR, 24, 31, 	CandiTbl->_cand_pnt._2nd_pfv1_pnt.pfv1_pnt7);

	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_dediff_pnt_ADDR, 16, 23, 	CandiTbl->_cand_pnt._2nd_others_pnt._2nd_ph_cand_dediff_pnt);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_dediff_pnt_ADDR, 24, 31, 	CandiTbl->_cand_pnt._2nd_others_pnt._2nd_pfv0_cand_dediff_pnt);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_dediff_pnt_ADDR, 0, 7, 	CandiTbl->_cand_pnt._2nd_others_pnt._2nd_pfv1_cand_dediff_pnt);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_candi_zmv_pnt_ADDR, 0, 7, 			CandiTbl->_cand_pnt._2nd_others_pnt._2nd_zmv_pnt);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_candi_gmv_pnt_ADDR, 8, 15, 			CandiTbl->_cand_pnt._2nd_others_pnt._2nd_gmv_pnt);

//======== _str_ph_index_setting ==========	
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_gain0_ADDR, 7, 12, 		CandiTbl->_ph_index_setting._ph_index0.gain);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_gain1_ADDR, 13, 18, 	CandiTbl->_ph_index_setting._ph_index1.gain);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_gain2_ADDR, 19, 24, 	CandiTbl->_ph_index_setting._ph_index2.gain);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_gain3_ADDR, 25, 30, 	CandiTbl->_ph_index_setting._ph_index3.gain);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_offset0_ADDR, 0, 6, 	CandiTbl->_ph_index_setting._ph_index0.offset);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_offset1_ADDR, 7, 13, 	CandiTbl->_ph_index_setting._ph_index1.offset);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_offset2_ADDR, 14, 20, 	CandiTbl->_ph_index_setting._ph_index2.offset);
	WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_phase_offset3_ADDR, 21, 27, 	CandiTbl->_ph_index_setting._ph_index3.offset);

}

VOID HAL_ME1_cand_wrtDriver( _str_ME1_Candidate_table *CandiTbl)
{
	UINT32 u8_candiNum_me_ip = 0, u8_candiNum_me_pi = 0;

	u8_candiNum_me_ip = CandiTbl->_cand_ip_num._zmv_en + CandiTbl->_cand_ip_num._gmv_en +
						CandiTbl->_cand_ip_num._cand_en[0] + CandiTbl->_cand_ip_num._cand_en[1] +
						CandiTbl->_cand_ip_num._cand_en[2] + CandiTbl->_cand_ip_num._cand_en[3] +
						CandiTbl->_cand_ip_num._cand_en[4] + CandiTbl->_cand_ip_num._cand_en[5] +
						CandiTbl->_cand_ip_num._cand_en[6] + CandiTbl->_cand_ip_num._cand_en[7] +
						CandiTbl->_cand_ip_num._cand_en[8] + CandiTbl->_cand_ip_num._cand_en[9] +
						CandiTbl->_cand_ip_num._upt_cand_en[0] + CandiTbl->_cand_ip_num._upt_cand_en[1] +
						CandiTbl->_cand_ip_num._upt_cand_en[2] + CandiTbl->_cand_ip_num._upt_cand_en[3];

	u8_candiNum_me_pi = CandiTbl->_cand_pi_num._zmv_en + CandiTbl->_cand_pi_num._gmv_en +
						CandiTbl->_cand_pi_num._cand_en[0] + CandiTbl->_cand_pi_num._cand_en[1] +
						CandiTbl->_cand_pi_num._cand_en[2] + CandiTbl->_cand_pi_num._cand_en[3] +
						CandiTbl->_cand_pi_num._cand_en[4] + CandiTbl->_cand_pi_num._cand_en[5] +
						CandiTbl->_cand_pi_num._cand_en[6] + CandiTbl->_cand_pi_num._cand_en[7] +
						CandiTbl->_cand_pi_num._cand_en[8] + CandiTbl->_cand_pi_num._cand_en[9] +
						CandiTbl->_cand_pi_num._upt_cand_en[0] + CandiTbl->_cand_pi_num._upt_cand_en[1] +
						CandiTbl->_cand_pi_num._upt_cand_en[2] + CandiTbl->_cand_pi_num._upt_cand_en[3];

	rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s] me1 ip %d pi %d\n", __func__ , u8_candiNum_me_ip, u8_candiNum_me_ip);

	// ip cand enable
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_zmv_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_zmv_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_zmv_en_BITEND, CandiTbl->_cand_ip_num._zmv_en);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_gmv_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_gmv_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_gmv_en_BITEND, CandiTbl->_cand_ip_num._gmv_en);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand0_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand0_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand0_en_BITEND, CandiTbl->_cand_ip_num._cand_en[0]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand1_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand1_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand1_en_BITEND, CandiTbl->_cand_ip_num._cand_en[1]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand2_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand2_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand2_en_BITEND, CandiTbl->_cand_ip_num._cand_en[2]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_en_BITEND, CandiTbl->_cand_ip_num._cand_en[3]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_en_BITEND, CandiTbl->_cand_ip_num._cand_en[4]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_en_BITEND, CandiTbl->_cand_ip_num._cand_en[5]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_en_BITEND, CandiTbl->_cand_ip_num._cand_en[6]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_en_BITEND, CandiTbl->_cand_ip_num._cand_en[7]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand8_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand8_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand8_en_BITEND, CandiTbl->_cand_ip_num._cand_en[8]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand9_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand9_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand9_en_BITEND, CandiTbl->_cand_ip_num._cand_en[9]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_en_BITEND, CandiTbl->_cand_ip_num._upt_cand_en[0]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_en_BITEND, CandiTbl->_cand_ip_num._upt_cand_en[1]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_en_BITEND, CandiTbl->_cand_ip_num._upt_cand_en[2]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update3_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update3_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update3_en_BITEND, CandiTbl->_cand_ip_num._upt_cand_en[3]);

	// pi cand enable
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_en_BITEND, CandiTbl->_cand_pi_num._cand_en[0]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand1_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand1_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand1_en_BITEND, CandiTbl->_cand_pi_num._cand_en[1]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand2_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand2_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand2_en_BITEND, CandiTbl->_cand_pi_num._cand_en[2]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_en_BITEND, CandiTbl->_cand_pi_num._cand_en[3]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_en_BITEND, CandiTbl->_cand_pi_num._cand_en[4]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_en_BITEND, CandiTbl->_cand_pi_num._cand_en[5]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_en_BITEND, CandiTbl->_cand_pi_num._cand_en[6]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_en_BITEND, CandiTbl->_cand_pi_num._cand_en[7]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand8_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand8_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand8_en_BITEND, CandiTbl->_cand_pi_num._cand_en[8]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand9_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand9_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand9_en_BITEND, CandiTbl->_cand_pi_num._cand_en[9]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_en_BITEND, CandiTbl->_cand_pi_num._upt_cand_en[0]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_en_BITEND, CandiTbl->_cand_pi_num._upt_cand_en[1]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_en_BITEND, CandiTbl->_cand_pi_num._upt_cand_en[2]);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update3_en_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update3_en_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update3_en_BITEND, CandiTbl->_cand_pi_num._upt_cand_en[3]);

	// ip offset
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand0_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand0_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand0_offsetx_BITEND, CandiTbl->_cand_ip_location._cand[0].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand0_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand0_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand0_offsety_BITEND, CandiTbl->_cand_ip_location._cand[0].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand1_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand1_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand1_offsetx_BITEND, CandiTbl->_cand_ip_location._cand[1].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand1_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand1_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand1_offsety_BITEND, CandiTbl->_cand_ip_location._cand[1].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand2_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand2_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand2_offsetx_BITEND, CandiTbl->_cand_ip_location._cand[2].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand2_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand2_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand2_offsety_BITEND, CandiTbl->_cand_ip_location._cand[2].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsetx_BITEND, CandiTbl->_cand_ip_location._cand[3].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety_BITEND, CandiTbl->_cand_ip_location._cand[3].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsetx_BITEND, CandiTbl->_cand_ip_location._cand[4].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety_BITEND, CandiTbl->_cand_ip_location._cand[4].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsetx_BITEND, CandiTbl->_cand_ip_location._cand[5].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety_BITEND, CandiTbl->_cand_ip_location._cand[5].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsetx_BITEND, CandiTbl->_cand_ip_location._cand[6].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety_BITEND, CandiTbl->_cand_ip_location._cand[6].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsetx_BITEND, CandiTbl->_cand_ip_location._cand[7].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety_BITEND, CandiTbl->_cand_ip_location._cand[7].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand8_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand8_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand8_offsetx_BITEND, CandiTbl->_cand_ip_location._cand[8].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand8_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand8_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand8_offsety_BITEND, CandiTbl->_cand_ip_location._cand[8].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand9_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand9_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand9_offsetx_BITEND, CandiTbl->_cand_ip_location._cand[9].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand9_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand9_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand9_offsety_BITEND, CandiTbl->_cand_ip_location._cand[9].offset_y);

	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_offsetx_BITEND, CandiTbl->_cand_ip_location._upt[0].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_offsety_BITEND, CandiTbl->_cand_ip_location._upt[0].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_offsetx_BITEND, CandiTbl->_cand_ip_location._upt[1].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_offsety_BITEND, CandiTbl->_cand_ip_location._upt[1].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_offsetx_BITEND, CandiTbl->_cand_ip_location._upt[2].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_offsety_BITEND, CandiTbl->_cand_ip_location._upt[2].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update3_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update3_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update3_offsetx_BITEND, CandiTbl->_cand_ip_location._upt[3].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update3_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update3_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update3_offsety_BITEND, CandiTbl->_cand_ip_location._upt[3].offset_y);

	// pi offset
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_offsetx_BITEND, CandiTbl->_cand_pi_location._cand[0].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_offsety_BITEND, CandiTbl->_cand_pi_location._cand[0].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand1_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand1_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand1_offsetx_BITEND, CandiTbl->_cand_pi_location._cand[1].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand1_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand1_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand1_offsety_BITEND, CandiTbl->_cand_pi_location._cand[1].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand2_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand2_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand2_offsetx_BITEND, CandiTbl->_cand_pi_location._cand[2].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand2_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand2_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand2_offsety_BITEND, CandiTbl->_cand_pi_location._cand[2].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsetx_BITEND, CandiTbl->_cand_pi_location._cand[3].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety_BITEND, CandiTbl->_cand_pi_location._cand[3].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsetx_BITEND, CandiTbl->_cand_pi_location._cand[4].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety_BITEND, CandiTbl->_cand_pi_location._cand[4].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsetx_BITEND, CandiTbl->_cand_pi_location._cand[5].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety_BITEND, CandiTbl->_cand_pi_location._cand[5].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsetx_BITEND, CandiTbl->_cand_pi_location._cand[6].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety_BITEND, CandiTbl->_cand_pi_location._cand[6].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsetx_BITEND, CandiTbl->_cand_pi_location._cand[7].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety_BITEND, CandiTbl->_cand_pi_location._cand[7].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand8_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand8_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand8_offsetx_BITEND, CandiTbl->_cand_pi_location._cand[8].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand8_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand8_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand8_offsety_BITEND, CandiTbl->_cand_pi_location._cand[8].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand9_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand9_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand9_offsetx_BITEND, CandiTbl->_cand_pi_location._cand[9].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand9_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand9_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand9_offsety_BITEND, CandiTbl->_cand_pi_location._cand[9].offset_y);

	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_offsetx_BITEND, CandiTbl->_cand_pi_location._upt[0].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_offsety_BITEND, CandiTbl->_cand_pi_location._upt[0].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_offsetx_BITEND, CandiTbl->_cand_pi_location._upt[1].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_offsety_BITEND, CandiTbl->_cand_pi_location._upt[1].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_offsetx_BITEND, CandiTbl->_cand_pi_location._upt[2].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_offsety_BITEND, CandiTbl->_cand_pi_location._upt[2].offset_y);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update3_offsetx_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update3_offsetx_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update3_offsetx_BITEND, CandiTbl->_cand_pi_location._upt[3].offset_x);
	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update3_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update3_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update3_offsety_BITEND, CandiTbl->_cand_pi_location._upt[3].offset_y);

	// ip pnt
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_gmv_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_gmv_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_gmv_BITEND, CandiTbl->_cand_ip_pnt._cand_gmv_pnt);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_zmv_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_zmv_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_zmv_BITEND, CandiTbl->_cand_ip_pnt._cand_zmv_pnt);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_ppi_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_ppi_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_ppi_BITEND, CandiTbl->_cand_ip_pnt._cand_ppi_pnt);

	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st0_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st0_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st0_BITEND, CandiTbl->_cand_ip_pnt._cand_pnt[0]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st1_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st1_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st1_BITEND, CandiTbl->_cand_ip_pnt._cand_pnt[1]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st2_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st2_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st2_BITEND, CandiTbl->_cand_ip_pnt._cand_pnt[2]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st3_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st3_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st3_BITEND, CandiTbl->_cand_ip_pnt._cand_pnt[3]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st4_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st4_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st4_BITEND, CandiTbl->_cand_ip_pnt._cand_pnt[4]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st5_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st5_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st5_BITEND, CandiTbl->_cand_ip_pnt._cand_pnt[5]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st6_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st6_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st6_BITEND, CandiTbl->_cand_ip_pnt._cand_pnt[6]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st7_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st7_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st7_BITEND, CandiTbl->_cand_ip_pnt._cand_pnt[7]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st8_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st8_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st8_BITEND, CandiTbl->_cand_ip_pnt._cand_pnt[8]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st9_ADDR, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st9_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st9_BITEND, CandiTbl->_cand_ip_pnt._cand_pnt[9]);

	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_BITEND, CandiTbl->_cand_ip_pnt._cand_upt_pnt[0]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_BITEND, CandiTbl->_cand_ip_pnt._cand_upt_pnt[1]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_BITEND, CandiTbl->_cand_ip_pnt._cand_upt_pnt[2]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd3_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd3_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd3_BITEND, CandiTbl->_cand_ip_pnt._cand_upt_pnt[3]);

	// ip pnt meander
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st0_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st0_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st0_BITEND, CandiTbl->_cand_ip_meander_pnt._cand_pnt[0]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st1_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st1_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st1_BITEND, CandiTbl->_cand_ip_meander_pnt._cand_pnt[1]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st2_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st2_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st2_BITEND, CandiTbl->_cand_ip_meander_pnt._cand_pnt[2]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st3_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st3_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st3_BITEND, CandiTbl->_cand_ip_meander_pnt._cand_pnt[3]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st4_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st4_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st4_BITEND, CandiTbl->_cand_ip_meander_pnt._cand_pnt[4]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st5_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st5_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st5_BITEND, CandiTbl->_cand_ip_meander_pnt._cand_pnt[5]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st6_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st6_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st6_BITEND, CandiTbl->_cand_ip_meander_pnt._cand_pnt[6]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st7_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st7_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st7_BITEND, CandiTbl->_cand_ip_meander_pnt._cand_pnt[7]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st8_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st8_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st8_BITEND, CandiTbl->_cand_ip_meander_pnt._cand_pnt[8]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st9_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st9_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_ip_cddpnt_st9_BITEND, CandiTbl->_cand_ip_meander_pnt._cand_pnt[9]);

	// pi pnt
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_gmv_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_gmv_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_gmv_BITEND, CandiTbl->_cand_pi_pnt._cand_gmv_pnt);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_zmv_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_zmv_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_zmv_BITEND, CandiTbl->_cand_pi_pnt._cand_zmv_pnt);

	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st0_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st0_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st0_BITEND, CandiTbl->_cand_pi_pnt._cand_pnt[0]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st1_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st1_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st1_BITEND, CandiTbl->_cand_pi_pnt._cand_pnt[1]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st2_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st2_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st2_BITEND, CandiTbl->_cand_pi_pnt._cand_pnt[2]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st3_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st3_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st3_BITEND, CandiTbl->_cand_pi_pnt._cand_pnt[3]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st4_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st4_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st4_BITEND, CandiTbl->_cand_pi_pnt._cand_pnt[4]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st5_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st5_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st5_BITEND, CandiTbl->_cand_pi_pnt._cand_pnt[5]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st6_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st6_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st6_BITEND, CandiTbl->_cand_pi_pnt._cand_pnt[6]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st7_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st7_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st7_BITEND, CandiTbl->_cand_pi_pnt._cand_pnt[7]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st8_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st8_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st8_BITEND, CandiTbl->_cand_pi_pnt._cand_pnt[8]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st9_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st9_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st9_BITEND, CandiTbl->_cand_pi_pnt._cand_pnt[9]);

	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_BITEND, CandiTbl->_cand_pi_pnt._cand_upt_pnt[0]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_BITEND, CandiTbl->_cand_pi_pnt._cand_upt_pnt[1]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_BITEND, CandiTbl->_cand_pi_pnt._cand_upt_pnt[2]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd3_ADDR, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd3_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd3_BITEND, CandiTbl->_cand_pi_pnt._cand_upt_pnt[3]);

	// pi pnt meander
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st0_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st0_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st0_BITEND, CandiTbl->_cand_pi_meander_pnt._cand_pnt[0]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st1_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st1_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st1_BITEND, CandiTbl->_cand_pi_meander_pnt._cand_pnt[1]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st2_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st2_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st2_BITEND, CandiTbl->_cand_pi_meander_pnt._cand_pnt[2]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st3_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st3_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st3_BITEND, CandiTbl->_cand_pi_meander_pnt._cand_pnt[3]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st4_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st4_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st4_BITEND, CandiTbl->_cand_pi_meander_pnt._cand_pnt[4]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st5_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st5_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st5_BITEND, CandiTbl->_cand_pi_meander_pnt._cand_pnt[5]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st6_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st6_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st6_BITEND, CandiTbl->_cand_pi_meander_pnt._cand_pnt[6]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st7_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st7_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st7_BITEND, CandiTbl->_cand_pi_meander_pnt._cand_pnt[7]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st8_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st8_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st8_BITEND, CandiTbl->_cand_pi_meander_pnt._cand_pnt[8]);
	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st9_ADDR, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st9_BITSTART, FRC_TOP__KME_ME1_TOP0__me1_meander_pi_cddpnt_st9_BITEND, CandiTbl->_cand_pi_meander_pnt._cand_pnt[9]);

}

#endif
