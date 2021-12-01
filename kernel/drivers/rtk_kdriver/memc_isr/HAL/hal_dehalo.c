/**
 * @file hal_dehalo.c
 * @brief This file is for dehalo register setting
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

/**
 * @brief This function set Dehalo on/off
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetEnable(BOOL bEnable)
{
	//reg_dh_en
	WriteRegister(FRC_TOP__KME_DEHALO__dh_en_ADDR, FRC_TOP__KME_DEHALO__dh_en_BITSTART, FRC_TOP__KME_DEHALO__dh_en_BITEND, (UINT32)bEnable);
}

/**
 * @brief This function set Dehalo row size
 * @param [in] UINT32 u32Row_Size
 * @retval VOID
*/
VOID HAL_Dehalo_SetRowSize(UINT32 u32Row_Size)
{
	//reg_dh_mv_row_size
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_mv_row_size),u32Row_Size);
}

/**
 * @brief This function set Dehalo block size
 * @param [in] UINT32 u32Block_Size
 * @retval VOID
*/
VOID HAL_Dehalo_SetBlockSize(UINT32 u32Block_Size)
{
	//reg_dh_blk_size
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_mv_blk_size),u32Block_Size);
}

/**
 * @brief This function set Dehalo logo row size
 * @param [in] UINT32 u32Row_Size
 * @retval VOID
*/
VOID HAL_Dehalo_SetLogoRowSize(UINT32 u32Row_Size)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_logo_row_size),u32Row_Size);
}

/**
 * @brief This function set Dehalo logo block size
 * @param [in] UINT32 u32Block_Size
 * @retval VOID
*/
VOID HAL_Dehalo_SetLogoBlockSize(UINT32 u32Block_Size)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_logo_blk_size),u32Block_Size);
}

/**
 * @brief This function set Dehalo YX ratio
 * @param [in] UINT32 u32YXRatio
 * @retval VOID
*/
VOID HAL_Dehalo_SetYXRatio(UINT32 u32YXRatio)
{
	//reg_dh_blk_size
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_yx_ratio),u32YXRatio);
}

/**
 * @brief This function set Dehalo block number
 * @param [in] UINT32 u32Block_Num
 * @retval VOID
*/
VOID HAL_Dehalo_SetBlockNum(UINT32 u32Block_Num)
{
	//reg_dh_blk_num[7:0]
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_mv_blk_num),u32Block_Num);
}

/**
 * @brief This function set Dehalo row number
 * @param [in] UINT32 u32Row_Num
 * @retval VOID
*/
VOID HAL_Dehalo_SetRowNum(UINT32 u32Row_Num)
{
	//reg_dh_row_num[7:0]
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_mv_row_num),u32Row_Num);
}

#if 1  // K4Lp
/**
 * @brief This function set Dehalo logo block number
 * @param [in] UINT32 u32Block_Num
 * @retval VOID
*/
VOID HAL_Dehalo_SetLogoBlockNum(UINT32 u32Block_Num)
{
	//reg_dh_blk_num[7:0]
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_logo_blk_num),u32Block_Num);
}

/**
 * @brief This function set Dehalo logo row number
 * @param [in] UINT32 u32Row_Num
 * @retval VOID
*/
VOID HAL_Dehalo_SetLogoRowNum(UINT32 u32Row_Num)
{
	//reg_dh_row_num[7:0]
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_logo_row_num),u32Row_Num);
}
#endif

/**
 * @brief This function set Dehalo vbuf block number
 * @param [in] UINT32 u32Block_Num
 * @retval VOID
*/
VOID HAL_Dehalo_SetVbufBlockNum(UINT32 u32Block_Num)
{
	//reg_dh_vbuf_blk_num
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_vbuf_blk_num),u32Block_Num);
}

/**
 * @brief This function set Dehalo vbuf row number
 * @param [in] UINT32 u32Row_Num
 * @retval VOID
*/
VOID HAL_Dehalo_SetVbufRowNum(UINT32 u32Row_Num)
{
	//reg_dh_vbuf_row_num
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_vbuf_row_num),u32Row_Num);
}

/**
 * @brief This function set Dehalo PR enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetPREnable(BOOL bEnable)
{
	//reg_dh_pr_read
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_pr_read), (UINT32)bEnable);
}

/**
 * @brief This function set Dehalo MV RD intval
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetMVRDIntval(BOOL bEnable)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_mv_rd_intval), (UINT32)bEnable);
}

/**
 * @brief This function set half v timing
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetHalfVTiming(BOOL bEnable)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_half_v_timing), (UINT32)bEnable);
}

/**
 * @brief This function set patt size
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetPattSize(BOOL bEnable)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_pre_patt_blk_size), (UINT32)bEnable);
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_pre_patt_row_size), (UINT32)bEnable);
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_pst_patt_blk_size), (UINT32)bEnable);
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_pst_patt_row_size), (UINT32)bEnable);
}

/**
 * @brief This function set out timing mux
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_Dehalo_SetOutTimimgMux(UINT32 u32Val)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_out_tim_mux), u32Val);
}

/**
 * @brief This function set rd lr flow wr latch
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetRDLRFlowWRLatch(BOOL bEnable)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_rd_lr_flow_wrlatch), (UINT32)bEnable);
}

/**
 * @brief This function set sw reset
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetSWReset(BOOL bEnable)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_sw_reset), (UINT32)bEnable);
}

/**
 * @brief This function set Dehalo patt block / row number
 * @param [in] UINT32 u32Block_Num
 * @param [in] UINT32 u32Row_Num
 * @retval VOID
*/
VOID HAL_Dehalo_SetPatternBlockRow(UINT32 u32Block_Num, UINT32 u32Row_Num)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_patt_blk_num),u32Block_Num);
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_patt_row_num),u32Row_Num);
}

/**
 * @brief This function set Dehalo vbuf block / row number
 * @param [in] UINT32 u32Block_Num
 * @param [in] UINT32 u32Row_Num
 * @retval VOID
*/
VOID HAL_Dehalo_SetVbufBlockRow(UINT32 u32Block_Num, UINT32 u32Row_Num)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_vbuf_blk_num),u32Block_Num);
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_vbuf_row_num),u32Row_Num);
}

/**
 * @brief This function set Dehalo show enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetShowEnable(BOOL bEnable)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_show_en),(UINT32)bEnable);
}

/**
 * @brief This function set Dehalo show select
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetShowSelect(UINT32 u32Select)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_show_sel),u32Select);
}

/**
 * @brief This function set Dehalo erosion mode
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetErosionMode(BOOL bEnable)
{
//	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_ero_mod),(BOOL)bEnable);
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_rt1_ersion_en),(UINT32)bEnable);
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_phbv0_ersion_en),(UINT32)bEnable);
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_phbv1_ersion_en),(UINT32)bEnable);
}

/**
 * @brief This function set Dehalo pre-filter dummy number
 * @param [in] UINT32 u32Block_dummy_Num
 * @param [in] UINT32 u32Row_dummy_Num
 * @retval VOID
*/
VOID HAL_Dehalo_SetPreFltDummyNum(UINT32 u32Block_dummy_Num, UINT32 u32Row_dummy_Num)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_phflt_blk_dumy_num), u32Block_dummy_Num);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_phflt_row_dumy_num), u32Row_dummy_Num);
}

/**
 * @brief This function set Dehalo post-filter dummy number
 * @param [in] UINT32 u32Block_dummy_Num
 * @param [in] UINT32 u32Row_dummy_Num
 * @retval VOID
*/
VOID HAL_Dehalo_SetPostFltDummyNum(UINT32 u32Block_dummy_Num, UINT32 u32Row_dummy_Num)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_blk_dumy_num), u32Block_dummy_Num);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_row_dumy_num), u32Row_dummy_Num);
}

/**
 * @brief This function set me2 in 480x270 mode
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetME2in480x270Mode(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_me2cal_in_480x270_mod),(UINT32)bEnable);
}

/**
 * @brief This function set pre pattern block size
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetPrePattBlockSize(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pre_patt_blk_size), (UINT32)bEnable);
}

/**
 * @brief This function set pre pattern row size
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetPrePattRowSize(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pre_patt_row_size), (UINT32)bEnable);
}

/**
 * @brief This function set middle pattern block size
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetMedPattBlockSize(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_med_patt_blk_size), (UINT32)bEnable);
}

/**
 * @brief This function set middle pattern row size
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetMedPattRowSize(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_med_patt_row_size), (UINT32)bEnable);
}

/**
 * @brief This function set post pattern block size
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetPstPattBlockSize(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pst_patt_blk_size), (UINT32)bEnable);
}

/**
 * @brief This function set post pattern row size
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetPstPattRowSize(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pst_patt_row_size), (UINT32)bEnable);
}

/**
 * @brief This function set phase mv erosion timing enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetPHMVErosionTimingEnable(BOOL bEnable)
{
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_phmv_ero_timg_en), (UINT32)bEnable);
}

/**
 * @brief This function set RT1 erosion enable
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetRT1ErosionEnable(BOOL bEnable)
{
// MEMC_K6L_BRING_UP //	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_rt1_ero_en), (UINT32)bEnable);
}

/**
 * @brief This function set cross board erosion enable only for FPGA
 * @param [in] BOOL bEnable
 * @retval VOID
*/
VOID HAL_Dehalo_SetCrossBDErosionEnable(BOOL bEnable)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_cross_bd_erosion_mode), (UINT32)bEnable);
}

/**
 * @brief This function set disable dehalo occl rim
 * @param [in] UINT32 u32Top
 * @param [in] UINT32 u32Bottom
 * @param [in] UINT32 u32Left
 * @param [in] UINT32 u32Right
 * @retval VOID
*/
VOID HAL_Dehalo_SetDisableOCCLRim(UINT32 u32Top, UINT32 u32Bottom, UINT32 u32Left, UINT32 u32Right)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_disable_occl_top_rim), u32Top);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_disable_occl_bot_rim), u32Bottom);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_disable_occl_left_rim), u32Left);	
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_disable_occl_righ_rim), u32Right);	
}

/**
 * @brief This function enable dehalo region interval x
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_Dehalo_SetRegionIntervalX(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_bv0_bv1_blk_x_intv), u32Val);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_glb_gain_blk_x_intv), u32Val);
}

/**
 * @brief This function enable dehalo region interval y
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_Dehalo_SetRegionIntervalY(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_bv0_bv1_blk_y_intv), u32Val);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_glb_gain_blk_y_intv), u32Val);
}

/**
 * @brief This function set dehalo logo row mask
 * @param [in] UINT32 u32Val
 * @retval VOID
*/
VOID HAL_Dehalo_SetLogoRowMask(UINT32 u32Val)
{
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_vbuf_row_mask), u32Val);
}
