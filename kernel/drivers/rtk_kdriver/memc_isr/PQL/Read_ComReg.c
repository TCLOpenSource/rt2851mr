#include "memc_isr/PQL/PQLPlatformDefs.h"
#include "memc_isr/PQL/PQLContext.h"

//////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
VOID ReadComReg_Init(_OUTPUT_ReadComReg *pOutput)
{

}

//Input signal and parameters are connected locally

VOID ReadComReg_Proc_oneFifth_OutInterrupt(const _PARAM_ReadComReg *pParam, _OUTPUT_ReadComReg *pOutput)
{
	UINT32 u32_rb_val;

	if (pParam->u1_me_VbufSize_rb_en == 1)
	{
		ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_hactive_ADDR, 0, 31, &u32_rb_val);
		pOutput->u8_me1_Vbuf_Hsize_rb =  u32_rb_val       & 0x1FF;
		pOutput->u8_me1_Vbuf_Vsize_rb = (u32_rb_val >> 9) & 0x1FF;
	}

	if (pParam->u1_BBD_rb_en == 1)
	{
		UBYTE u8_k = 0;
		for (u8_k = 0; u8_k < _RIM_NUM; u8_k ++)
		{
			ReadRegister(FRC_TOP__BBD__regr_BBD_top_sketchy_active_line_ADDR + u8_k * 4, 0, 31, &u32_rb_val);
			pOutput->u12_BBD_roughRim_rb[u8_k]  =  u32_rb_val        & 0x1fff;
			pOutput->u1_BBD_roughValid_rb[u8_k] = (u32_rb_val >> 13) & 0x01;
			pOutput->u12_BBD_fineRim_rb[u8_k]   = (u32_rb_val >> 16) & 0x1fff;
			pOutput->u1_BBD_fineValid_rb[u8_k]  = (u32_rb_val >> 29) & 0x01;
		}
		
        ReadRegister(FRC_TOP__KME_DM_TOP2__mv05_hactive_ADDR, 0, 31, &u32_rb_val);
		pOutput->u12_ME1_blk_size[0] =   u32_rb_val        & 0xfff;
		pOutput->u12_ME1_blk_size[1] =  (u32_rb_val >> 12) & 0xfff;

		ReadRegister(FRC_TOP__KME_DM_TOP0__kme_me_hactive_ADDR, 0, 31, &u32_rb_val);
		pOutput->u12_ME1_pix_size[0] =   u32_rb_val        & 0xfff;
		pOutput->u12_ME1_pix_size[1] =  (u32_rb_val >> 12) & 0xfff;

		ReadRegister(FRC_TOP__KME_DM_TOP2__mv01_hactive_ADDR, 0, 31, &u32_rb_val);
		pOutput->u12_ME2_blk_size[0] =   u32_rb_val        & 0xfff;
		pOutput->u12_ME2_blk_size[1] =  (u32_rb_val >> 12) & 0xfff;

//		ReadRegister(FRC_TOP__KME_DM_TOP2__mv12_hactive_ADDR, 0, 31, &u32_rb_val);
		pOutput->u12_ME2_pix_size[0] =   u32_rb_val        & 0xfff;
		pOutput->u12_ME2_pix_size[1] =  (u32_rb_val >> 12) & 0xfff;
	
	}
}

VOID ReadComReg_Proc_inputInterrupt(const _PARAM_ReadComReg *pParam, _OUTPUT_ReadComReg *pOutput)
{
	UINT32 u32_RB_val;
	_PQLPARAMETER *s_pParam       = GetPQLParameter();

	UINT32 u27_ipme_h0Mot_rb = 0;
	UINT32 u27_ipme_h1Mot_rb = 0;
	UINT32 u27_ipme_v0Mot_rb = 0;
	UINT32 u27_ipme_v1Mot_rb = 0;

	//////////////////////////////////////////////////////////////////////////
	// gmv all information
	//////////////////////////////////////////////////////////////////////////
	if (pParam->u1_me_GMV_1st_rb_en == 1)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp0_mvx_ADDR, 0, 31, &u32_RB_val);
		pOutput->s11_me_GMV_1st_vx_rb = ((u32_RB_val >> 10) &1) == 0? (u32_RB_val         & 0x7ff) : ((u32_RB_val         & 0x7ff)  - (1<<11));
		pOutput->s10_me_GMV_1st_vy_rb = ((u32_RB_val >> 20) &1) == 0? ((u32_RB_val >> 11) & 0x3ff) : (((u32_RB_val >> 11) & 0x3ff)  - (1<<10));
		ReadRegister(FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp0_cnt_ADDR, FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp0_cnt_BITSTART, FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp0_cnt_BITEND, &u32_RB_val);
		pOutput->u17_me_GMV_1st_cnt_rb = u32_RB_val;
		ReadRegister(FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp0_unconf_ADDR, FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp0_unconf_BITSTART, FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp0_unconf_BITEND, &u32_RB_val);
		pOutput->u12_me_GMV_1st_unconf_rb = u32_RB_val;
	}

	if (pParam->u1_me_GMV_2nd_rb_en == 1)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp1_mvx_ADDR, 0, 31, &u32_RB_val);
		pOutput->s11_me_GMV_2nd_vx_rb = ((u32_RB_val >> 10) &1) == 0? (u32_RB_val         & 0x7ff) : ((u32_RB_val         & 0x7ff) - (1<<11));
		pOutput->s10_me_GMV_2nd_vy_rb = ((u32_RB_val >> 20) &1) == 0? ((u32_RB_val >> 11) & 0x3ff) : (((u32_RB_val >> 11) & 0x3ff) - (1<<10));
		ReadRegister(FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp1_cnt_ADDR, FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp1_cnt_BITSTART, FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp1_cnt_BITEND, &u32_RB_val);
		pOutput->u17_me_GMV_2nd_cnt_rb = u32_RB_val;
		ReadRegister(FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp1_unconf_ADDR, FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp1_unconf_BITSTART, FRC_TOP__KME_ME1_TOP2__regr_me1_gmv_grp1_unconf_BITEND, &u32_RB_val);
		pOutput->u12_me_GMV_2nd_unconf_rb = u32_RB_val;
	}

	//////////////////////////////////////////////////////////////////////////
	// panning cnt
	//////////////////////////////////////////////////////////////////////////
	if(pParam->u1_me_Hpan_cnt_rb_en)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_hpan_cnt_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_hpan_cnt_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_hpan_cnt_BITEND, &u32_RB_val);
		pOutput->u20_me_Hpan_cnt_rb = u32_RB_val;
	}

	if(pParam->u1_me_Vpan_cnt_rb_en)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_vpan_cnt_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_vpan_cnt_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_vpan_cnt_BITEND, &u32_RB_val);
		pOutput->u20_me_Vpan_cnt_rb = u32_RB_val;
	}
	

	//////////////////////////////////////////////////////////////////////////
	// for LBMC mode switch.
	//////////////////////////////////////////////////////////////////////////
	if (pParam->u1_me_pnMV_cnt_rb_en == 1)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_pcnt0_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_pcnt0_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_pcnt0_BITEND, &u32_RB_val);
		pOutput->u17_me_posCnt_0_rb =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_pcnt1_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_pcnt1_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_pcnt1_BITEND, &u32_RB_val);
		pOutput->u17_me_posCnt_1_rb =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_pcnt2_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_pcnt2_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_pcnt2_BITEND, &u32_RB_val);
		pOutput->u17_me_posCnt_2_rb =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_pcnt3_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_pcnt3_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_pcnt3_BITEND, &u32_RB_val);
		pOutput->u17_me_posCnt_3_rb =  u32_RB_val;

		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_ncnt0_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_ncnt0_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_ncnt0_BITEND, &u32_RB_val);
		pOutput->u17_me_negCnt_0_rb =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_ncnt1_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_ncnt1_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_ncnt1_BITEND, &u32_RB_val);
		pOutput->u17_me_negCnt_1_rb =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_ncnt2_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_ncnt2_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_ncnt2_BITEND, &u32_RB_val);
		pOutput->u17_me_negCnt_2_rb =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_ncnt3_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_ncnt3_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_bvy_ncnt3_BITEND, &u32_RB_val);
		pOutput->u17_me_negCnt_3_rb =  u32_RB_val;
	}

	//////////////////////////////////////////////////////////////////////////
	// ipme, film detect information
	//////////////////////////////////////////////////////////////////////////
	{	
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_h0_rim_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_h0_rim_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_h0_rim_BITEND, &u32_RB_val);
		u27_ipme_h0Mot_rb = u32_RB_val;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_h1_rim_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_h1_rim_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_h1_rim_BITEND, &u32_RB_val);
		u27_ipme_h1Mot_rb = u32_RB_val;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_v0_rim_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_v0_rim_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_v0_rim_BITEND, &u32_RB_val);
		u27_ipme_v0Mot_rb = u32_RB_val;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_v1_rim_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_v1_rim_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_v1_rim_BITEND, &u32_RB_val);
		u27_ipme_v1Mot_rb = u32_RB_val;
	}

	if (pParam->u1_ipme_aMot_rb_en == 1)
	{
		UINT32 u27_ipme_rimMot_rb = 0;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_all_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_all_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_all_BITEND, &u32_RB_val);
		pOutput->u27_ipme_aMot_rb    =  u32_RB_val;

		//minus rim line motion from bad-DI, use 12rgn motion to avoid bad-DI affect, but keep this idea here
		u27_ipme_rimMot_rb = (u27_ipme_h0Mot_rb + u27_ipme_h1Mot_rb + u27_ipme_v0Mot_rb + u27_ipme_v1Mot_rb);
		u27_ipme_rimMot_rb = 0;
		pOutput->u27_ipme_aMot_rb = (pOutput->u27_ipme_aMot_rb < u27_ipme_rimMot_rb) ? 0 : (pOutput->u27_ipme_aMot_rb - u27_ipme_rimMot_rb);
	}
	if(pParam->u1_ipme_5rMot_rb_en == 1)
	{
		UINT16 u16_top_v0 = 0;
		UINT16 u16_top_v1 = 0;
		UINT16 u16_bot_v0 = 0;
		UINT16 u16_bot_v1 = 0;
		UINT16 u16_lft_h0 = 0;
		UINT16 u16_lft_h1 = 0;
		UINT16 u16_rgt_h0 = 0;
		UINT16 u16_rgt_h1 = 0;
		UINT16 u16_ipme_res_x = 960/2;
		UINT16 u16_ipme_res_y = 540;
		UINT16 u16_LR_rimMot_t = 0;
		UINT16 u16_LR_rimMot_b = 0;
		UINT16 u16_TB_rimMot_l = 0;
		UINT16 u16_TB_rimMot_r = 0;

		ReadRegister((FRC_TOP__KME_IPME__ipme_fmdet_5region1_v0_ADDR), 0, 31, &u32_RB_val);//top
		u16_top_v0 = (u32_RB_val) & 0x3ff;
		u16_top_v1 = (u32_RB_val>>10) & 0x3ff;
		ReadRegister((FRC_TOP__KME_IPME__ipme_fmdet_5region2_v0_ADDR), 0, 31, &u32_RB_val);//bottom
		u16_bot_v0 = (u32_RB_val) & 0x3ff;
		u16_bot_v1 = (u32_RB_val>>10) & 0x3ff;
		ReadRegister((FRC_TOP__KME_IPME__ipme_fmdet_5region3_h0_ADDR), 0, 31, &u32_RB_val);//left
		u16_lft_h0 = (u32_RB_val) & 0x3ff;
		u16_lft_h1 = (u32_RB_val>>10) & 0x3ff;
		ReadRegister((FRC_TOP__KME_IPME__ipme_fmdet_5region4_h0_ADDR), 0, 31, &u32_RB_val);//bottom
		u16_rgt_h0 = (u32_RB_val) & 0x3ff;
		u16_rgt_h1 = (u32_RB_val>>10) & 0x3ff;
	
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region1_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region1_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region1_BITEND, &u32_RB_val);//top
		pOutput->u27_ipme_5Mot_rb[0] =  u32_RB_val;
		u16_LR_rimMot_t = (u27_ipme_h0Mot_rb + u27_ipme_h1Mot_rb)*((u16_top_v1<u16_top_v0)?0:(u16_top_v1-u16_top_v0))/u16_ipme_res_y;
		#if !MIX_MODE_REGION_17
		u16_LR_rimMot_t = 0;
		#endif
		pOutput->u27_ipme_5Mot_rb[0]= (pOutput->u27_ipme_5Mot_rb[0] < u16_LR_rimMot_t) ? 0 : (pOutput->u27_ipme_5Mot_rb[0] - u16_LR_rimMot_t);

		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region2_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region2_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region2_BITEND, &u32_RB_val);//bot
		pOutput->u27_ipme_5Mot_rb[1] =  u32_RB_val;
		u16_LR_rimMot_b = (u27_ipme_h0Mot_rb + u27_ipme_h1Mot_rb)*((u16_bot_v1<u16_bot_v0)?0:(u16_bot_v1- u16_bot_v0))/u16_ipme_res_y;
		#if !MIX_MODE_REGION_17
		u16_LR_rimMot_b = 0;
		#endif
		pOutput->u27_ipme_5Mot_rb[1]= (pOutput->u27_ipme_5Mot_rb[1] < u16_LR_rimMot_b) ? 0 : (pOutput->u27_ipme_5Mot_rb[1] - u16_LR_rimMot_b);

		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region3_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region3_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region3_BITEND, &u32_RB_val);//left
		pOutput->u27_ipme_5Mot_rb[2] =  u32_RB_val;
		u16_TB_rimMot_l = (u27_ipme_v0Mot_rb + u27_ipme_v1Mot_rb)*((u16_lft_h1< u16_lft_h0)?0:(u16_lft_h1- u16_lft_h0))/u16_ipme_res_x;
		#if !MIX_MODE_REGION_17
		u16_TB_rimMot_l = 0;
		#endif
		pOutput->u27_ipme_5Mot_rb[2]= (pOutput->u27_ipme_5Mot_rb[2] < u16_TB_rimMot_l) ? 0 : (pOutput->u27_ipme_5Mot_rb[2] - u16_TB_rimMot_l);

		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region4_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region4_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region4_BITEND, &u32_RB_val);//right
		pOutput->u27_ipme_5Mot_rb[3] =  u32_RB_val;
		u16_TB_rimMot_r = (u27_ipme_v0Mot_rb + u27_ipme_v1Mot_rb)*((u16_rgt_h1< u16_rgt_h0)?0:(u16_rgt_h1- u16_rgt_h0))/u16_ipme_res_x;
		#if !MIX_MODE_REGION_17
		u16_TB_rimMot_r = 0;
		#endif
		pOutput->u27_ipme_5Mot_rb[3]= (pOutput->u27_ipme_5Mot_rb[3] < u16_TB_rimMot_r) ? 0 : (pOutput->u27_ipme_5Mot_rb[3] - u16_TB_rimMot_r);

		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region5_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region5_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_5region5_BITEND, &u32_RB_val);//cen
		pOutput->u27_ipme_5Mot_rb[4] =  u32_RB_val;
	}
	if(pParam->u1_ipme_12rMot_rb_en == 1)
	{
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region1_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region1_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region1_BITEND, &u32_RB_val);
		pOutput->u27_ipme_12Mot_rb[0] =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region2_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region2_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region2_BITEND, &u32_RB_val);
		pOutput->u27_ipme_12Mot_rb[1] =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region3_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region3_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region3_BITEND, &u32_RB_val);
		pOutput->u27_ipme_12Mot_rb[2] =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region4_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region4_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region4_BITEND, &u32_RB_val);
		pOutput->u27_ipme_12Mot_rb[3] =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region5_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region5_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region5_BITEND, &u32_RB_val);
		pOutput->u27_ipme_12Mot_rb[4] =  u32_RB_val;

		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region6_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region6_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region6_BITEND, &u32_RB_val);
		pOutput->u27_ipme_12Mot_rb[5] =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region7_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region7_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region7_BITEND, &u32_RB_val);
		pOutput->u27_ipme_12Mot_rb[6] =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region8_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region8_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region8_BITEND, &u32_RB_val);
		pOutput->u27_ipme_12Mot_rb[7] =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region9_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region9_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region9_BITEND, &u32_RB_val);
		pOutput->u27_ipme_12Mot_rb[8] =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region10_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region10_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region10_BITEND, &u32_RB_val);
		pOutput->u27_ipme_12Mot_rb[9] =  u32_RB_val;

		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region11_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region11_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region11_BITEND, &u32_RB_val);
		pOutput->u27_ipme_12Mot_rb[10] =  u32_RB_val;
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region12_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region12_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_mot_12region12_BITEND, &u32_RB_val);
		pOutput->u27_ipme_12Mot_rb[11] =  u32_RB_val;
	}
	#if !MIX_MODE_REGION_17
	{
		//use 12 rgn motion for mixmode to avoid outside of rim
		//top
		UINT32 u27_12rgn_top = 	pOutput->u27_ipme_12Mot_rb[0] + 
								pOutput->u27_ipme_12Mot_rb[1] + 
								pOutput->u27_ipme_12Mot_rb[2] + 
								pOutput->u27_ipme_12Mot_rb[3];
		//bot
		UINT32 u27_12rgn_bot = 	pOutput->u27_ipme_12Mot_rb[8] + 
								pOutput->u27_ipme_12Mot_rb[9] + 
								pOutput->u27_ipme_12Mot_rb[10] + 
								pOutput->u27_ipme_12Mot_rb[11];
		//lft
		UINT32 u27_12rgn_lft = 	pOutput->u27_ipme_12Mot_rb[0] + 
								pOutput->u27_ipme_12Mot_rb[4] + 
								pOutput->u27_ipme_12Mot_rb[8];
		//rgt
		UINT32 u27_12rgn_rgt = 	pOutput->u27_ipme_12Mot_rb[3] + 
								pOutput->u27_ipme_12Mot_rb[7] + 
								pOutput->u27_ipme_12Mot_rb[11];

		pOutput->u27_ipme_5Mot_rb[0]= u27_12rgn_top;
		pOutput->u27_ipme_5Mot_rb[1]= u27_12rgn_bot;
		pOutput->u27_ipme_5Mot_rb[2]= u27_12rgn_lft;
		pOutput->u27_ipme_5Mot_rb[3]= u27_12rgn_rgt;

	}
	#endif
        if(s_pParam->_param_filmDetectctrl.u1_mixMode_en == 0)
	{
                #if MIX_MODE_REGION_17
		pOutput->u27_ipme_aMot_rb	=	pOutput->u27_ipme_5Mot_rb[0]+pOutput->u27_ipme_5Mot_rb[4]+
                                                                                pOutput->u27_ipme_12Mot_rb[0] + 
										pOutput->u27_ipme_12Mot_rb[1] + 
										pOutput->u27_ipme_12Mot_rb[2] + 
										pOutput->u27_ipme_12Mot_rb[3] +
										pOutput->u27_ipme_12Mot_rb[4] + 
										pOutput->u27_ipme_12Mot_rb[5] + 
										pOutput->u27_ipme_12Mot_rb[6] + 
										pOutput->u27_ipme_12Mot_rb[7] +
                                                                                pOutput->u27_ipme_12Mot_rb[8] + 
										pOutput->u27_ipme_12Mot_rb[9] +
                                                                                pOutput->u27_ipme_12Mot_rb[10]+ 
										pOutput->u27_ipme_12Mot_rb[11];
                 #else

                 pOutput->u27_ipme_aMot_rb	=	pOutput->u27_ipme_12Mot_rb[0] + 
										pOutput->u27_ipme_12Mot_rb[1] + 
										pOutput->u27_ipme_12Mot_rb[2] + 
										pOutput->u27_ipme_12Mot_rb[3] +
										pOutput->u27_ipme_12Mot_rb[4] + 
										pOutput->u27_ipme_12Mot_rb[5] + 
										pOutput->u27_ipme_12Mot_rb[6] + 
										pOutput->u27_ipme_12Mot_rb[7];
                #endif
	}

	if (pParam->u1_ipme_filmMode_rb_en == 1)
	{
		ReadRegister(FRC_TOP__KME_IPME__regr_ipme_fdet_film_mode_ADDR, FRC_TOP__KME_IPME__regr_ipme_fdet_film_mode_BITSTART, FRC_TOP__KME_IPME__regr_ipme_fdet_film_mode_BITEND, &u32_RB_val);
		pOutput->u3_ipme_filmMode_rb = u32_RB_val;
	}

	//////////////////////////////////////////////////////////////////////////
	// kphase information
	//////////////////////////////////////////////////////////////////////////
	if (pParam->u1_kphase_rb_en == 1)
	{
		ReadRegister(FRC_TOP__KPHASE__regr_kphase_in_phase_ADDR, FRC_TOP__KPHASE__regr_kphase_in_phase_BITSTART, FRC_TOP__KPHASE__regr_kphase_in_phase_BITEND, &u32_RB_val);
		pOutput->u4_kphase_inPhase   = u32_RB_val;

		ReadRegister(FRC_TOP__KPHASE__regr_kphase_in_lr_ADDR, FRC_TOP__KPHASE__regr_kphase_in_lr_BITSTART, FRC_TOP__KPHASE__regr_kphase_in_lr_BITEND, &u32_RB_val);
		pOutput->u1_kphase_inLR      = u32_RB_val;

		ReadRegister(FRC_TOP__CRTC1__crtc1_n_ADDR, FRC_TOP__CRTC1__crtc1_n_BITSTART, FRC_TOP__CRTC1__crtc1_n_BITEND, &u32_RB_val);
		pOutput->u8_sys_N_rb      =  u32_RB_val;
		ReadRegister(FRC_TOP__CRTC1__crtc1_m_ADDR, FRC_TOP__CRTC1__crtc1_m_BITSTART, FRC_TOP__CRTC1__crtc1_m_BITEND, &u32_RB_val);
		pOutput->u8_sys_M_rb      = u32_RB_val;

		ReadRegister(FRC_TOP__CRTC1__crtc1_ip_vtrig_dly_ADDR, FRC_TOP__CRTC1__crtc1_ip_vtrig_dly_BITSTART, FRC_TOP__CRTC1__crtc1_ip_vtrig_dly_BITEND, &u32_RB_val);
		pOutput->u13_ip_vtrig_dly = u32_RB_val;

		ReadRegister(FRC_TOP__CRTC1__crtc1_me2_org_vtrig_dly_ADDR, FRC_TOP__CRTC1__crtc1_me2_org_vtrig_dly_BITSTART, FRC_TOP__CRTC1__crtc1_me2_org_vtrig_dly_BITEND, &u32_RB_val);
		pOutput->u13_me2_org_vtrig_dly = u32_RB_val;

		ReadRegister(FRC_TOP__CRTC1__crtc1_me2_vtrig_dly_ADDR, FRC_TOP__CRTC1__crtc1_me2_vtrig_dly_BITSTART, FRC_TOP__CRTC1__crtc1_me2_vtrig_dly_BITEND, &u32_RB_val);
		pOutput->u13_me2_vtrig_dly = u32_RB_val;

		ReadRegister(FRC_TOP__CRTC1__crtc1_dec_vtrig_dly_ADDR, FRC_TOP__CRTC1__crtc1_dec_vtrig_dly_BITSTART, FRC_TOP__CRTC1__crtc1_dec_vtrig_dly_BITEND, &u32_RB_val);
		pOutput->u13_dec_vtrig_dly = u32_RB_val;

		ReadRegister(FRC_TOP__CRTC1__regr_crtc1_vspll_finer_v_total_ADDR, FRC_TOP__CRTC1__regr_crtc1_vspll_finer_v_total_BITSTART, FRC_TOP__CRTC1__regr_crtc1_vspll_finer_v_total_BITEND, &u32_RB_val);
		pOutput->u13_vtotal = u32_RB_val;

		ReadRegister(FRC_TOP__IPPRE__patt_htotal_ADDR, FRC_TOP__IPPRE__patt_htotal_BITSTART, FRC_TOP__IPPRE__patt_htotal_BITEND, &u32_RB_val);
		pOutput->u16_inHTotal = u32_RB_val;

		ReadRegister(FRC_TOP__IPPRE__regr_ippre_mute_vact_ADDR, FRC_TOP__IPPRE__regr_ippre_mute_vact_BITSTART, FRC_TOP__IPPRE__regr_ippre_mute_vact_BITEND, &u32_RB_val);
		pOutput->u16_inVAct = u32_RB_val;

		ReadRegister(FRC_TOP__IPPRE__ippre_mute_frm_trig_pos_ADDR, FRC_TOP__IPPRE__ippre_mute_frm_trig_pos_BITSTART, FRC_TOP__IPPRE__ippre_mute_frm_trig_pos_BITEND, &u32_RB_val);
		pOutput->u16_inFrm_Pos = u32_RB_val;
	}

	//////////////////////////////////////////////////////////////////////////
	//Logo cnt readback
	//////////////////////////////////////////////////////////////////////////
	//no enable currently
	if(pParam->u1_lg_blk_cnt_rb_en == 1)
	{
		UINT32 idx;
		for (idx=0; idx < LOGO_RG_32; idx++)
		{
			ReadRegister(FRC_TOP__KME_LOGO2__regr_km_logo_blkrg_idx0_cnt_ADDR + idx * 4,
						FRC_TOP__KME_LOGO2__regr_km_logo_blkrg_idx0_cnt_BITSTART,
						FRC_TOP__KME_LOGO2__regr_km_logo_blkrg_idx0_cnt_BITEND, pOutput->u10_blklogo_rgcnt + idx);
		}
		ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_00_ADDR, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_00_BITSTART, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_00_BITEND, &u32_RB_val);		
		pOutput->u16_blklogo_dh_clrcnt[0] = u32_RB_val     & 0xFF;
		ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_04_ADDR, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_04_BITSTART, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_04_BITEND, &u32_RB_val);		
		pOutput->u16_blklogo_dh_clrcnt[1] = u32_RB_val     & 0xFF;
		ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_20_ADDR, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_20_BITSTART, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_20_BITEND, &u32_RB_val);		
		pOutput->u16_blklogo_dh_clrcnt[2] = u32_RB_val     & 0xFF;
		ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_24_ADDR, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_24_BITSTART, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_24_BITEND, &u32_RB_val);		
		pOutput->u16_blklogo_dh_clrcnt[3] = u32_RB_val     & 0xFF;

		ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_21_ADDR, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_21_BITSTART, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_21_BITEND, &u32_RB_val);		
		pOutput->u16_blklogo_dh_clrcnt_bot[0] = u32_RB_val     & 0xFF;

		ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_22_ADDR, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_22_BITSTART, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_22_BITEND, &u32_RB_val);		
		pOutput->u16_blklogo_dh_clrcnt_bot[1] = u32_RB_val     & 0xFF;

		ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_23_ADDR, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_23_BITSTART, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_23_BITEND, &u32_RB_val);		
		pOutput->u16_blklogo_dh_clrcnt_bot[2] = u32_RB_val     & 0xFF;

		ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_01_ADDR, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_01_BITSTART, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_01_BITEND, &u32_RB_val);		
		pOutput->u16_blklogo_dh_clrcnt_top[0] = u32_RB_val     & 0xFF;

		ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_02_ADDR, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_02_BITSTART, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_02_BITEND, &u32_RB_val);		
		pOutput->u16_blklogo_dh_clrcnt_top[1] = u32_RB_val     & 0xFF;

		ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_03_ADDR, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_03_BITSTART, FRC_TOP__KME_DEHALO3__regr_dh_logo_rdbk_03_BITEND, &u32_RB_val);		
		pOutput->u16_blklogo_dh_clrcnt_top[2] = u32_RB_val     & 0xFF;
		for (idx = 0; idx < 8; idx++)
		{
			ReadRegister(FRC_TOP__KMC_METER_TOP__regr_kmc_meter_rdbk_histo23_ADDR + idx * 4,
						 FRC_TOP__KMC_METER_TOP__regr_kmc_meter_rdbk_histo23_BITSTART,
						 FRC_TOP__KMC_METER_TOP__regr_kmc_meter_rdbk_histo23_BITEND, &u32_RB_val);
			pOutput->u23_sub_histo_meter[idx] = u32_RB_val & 0x00efffff;
		}
	}
}
VOID ReadComReg_Proc_outputInterrupt(const _PARAM_ReadComReg *pParam, _OUTPUT_ReadComReg *pOutput)
{
	UINT32 u32_RB_val;
	UINT32 u32_i;
	#if (IC_K5LP || IC_K6LP)
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	#endif

	// scene change
	if (pParam->u1_sc_status_rb_en == 1)
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_me1_ADDR, FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_me1_BITSTART, FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_me1_BITEND, 0x01);
		ReadRegister(FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_me1_ADDR, FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_me1_BITSTART, FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_me1_BITEND, &u32_RB_val);
		pOutput->u1_sc_status_rb = u32_RB_val;

		WriteRegister(FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_logo_ADDR, FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_logo_BITSTART, FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_logo_BITEND, 0x01);
		ReadRegister(FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_logo_ADDR, FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_logo_BITSTART, FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_logo_BITEND, &u32_RB_val);
		pOutput->u1_sc_status_logo_rb = u32_RB_val;

		WriteRegister(FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_dh_ADDR, FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_dh_BITSTART, FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_dh_BITEND, 0x01);
		ReadRegister(FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_dh_ADDR, FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_dh_BITSTART, FRC_TOP__KME_ME1_TOP1__regr_me1_sc_sync_dh_BITEND, &u32_RB_val);
		pOutput->u1_sc_status_dh_rb = u32_RB_val;
	}

	if (pParam->u1_me_aTC_rb_en == 1)
	{
		UINT32 u32_RB_val1 = 0, u32_RB_val2 = 0, u32_RB_val3 = 0;
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_tcss_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_tcss_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_tcss_BITEND, &u32_RB_val);

		if (pParam->u2_rb_tc_mode == 0)
		{
			pOutput->u27_me_aTC_rb = u32_RB_val;
		}
		else if (pParam->u2_rb_tc_mode == 1)
		{
			ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_cnt1_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_cnt1_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_cnt1_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_cnt2_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_cnt2_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_cnt2_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_cnt3_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_cnt3_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_cnt3_BITEND, &u32_RB_val3);

			pOutput->u27_me_aTC_rb = u32_RB_val1*pParam->u4_rb_tc1_coef + u32_RB_val2*pParam->u4_rb_tc2_coef + u32_RB_val3*pParam->u4_rb_tc3_coef;
		}
		else //if (pParam->u2_rb_tc_mode == 2)
		{
			ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_sum1_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_sum1_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_sum1_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_sum2_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_sum2_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_sum2_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_sum3_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_sum3_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_tcss_th_sum3_BITEND, &u32_RB_val3);

			pOutput->u27_me_aTC_rb = u32_RB_val1*pParam->u4_rb_tc1_coef + u32_RB_val2*pParam->u4_rb_tc2_coef + u32_RB_val3*pParam->u4_rb_tc3_coef;
		}
	}
	if (pParam->u1_me_aSC_rb_en == 1)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_scss_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_scss_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_scss_BITEND, &u32_RB_val);
		pOutput->u27_me_aSC_rb = u32_RB_val;
	}
	if (pParam->u1_me_aSAD_rb_en == 1)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_sad_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_sad_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_sad_BITEND, &u32_RB_val);
		pOutput->u30_me_aSAD_rb = u32_RB_val;
		#if (IC_K5LP || IC_K6LP)
		if(s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_TOP] >= 10 )
			pOutput->u30_me_aSAD_rb = pOutput->u30_me_aSAD_rb -0x3bfe20;  // (0x3bfe2 *0x10)
		#endif
	}
	if (pParam->u1_me_aDTL_rb_en == 1)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_dtl_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_dtl_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_dtl_BITEND, &u32_RB_val);
		pOutput->u25_me_aDTL_rb = u32_RB_val;
	}

	if (pParam->u1_me_aAPLi_rb_en == 1)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_apli_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_apli_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_apli_BITEND, &u32_RB_val);
		pOutput->u26_me_aAPLi_rb = u32_RB_val;
	}
	if (pParam->u1_me_aAPLp_rb_en == 1)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_aplp_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_aplp_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_aplp_BITEND, &u32_RB_val);
		pOutput->u26_me_aAPLp_rb = u32_RB_val;
	}

	// 32 rgn sad, dtl, apl, tc, sc, rmv
	for (u32_i = 0; u32_i < 32; u32_i ++)
	{
		// sad
		if (((pParam->u32_me_rSAD_rb_en >> u32_i)&0x1) == 1)
		{
			ReadRegister(FRC_TOP__KME_ME1_TOP7__regr_me1_statis_rgn00_sad_ADDR + 4 * u32_i, 0, 24, &u32_RB_val);
			pOutput->u25_me_rSAD_rb[u32_i] = u32_RB_val;
			#if (IC_K5LP || IC_K6LP)
			if(s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_TOP] >= 10 )
			{
				if((u32_i < 8) || (u32_i >= 24 && u32_i < 32))
					pOutput->u25_me_rSAD_rb[u32_i] = pOutput->u25_me_rSAD_rb[u32_i] - 0x3bfe2;
			}
			#endif
		}
		else
		{
			pOutput->u25_me_rSAD_rb[u32_i] = 0;
		}

		// detail
		if (((pParam->u32_me_rDTL_rb_en >> u32_i)&0x1) == 1)
		{
			ReadRegister(FRC_TOP__KME_ME1_TOP7__regr_me1_statis_rgn00_dtl_ADDR + 4 * u32_i, 0, 19, &u32_RB_val);
			pOutput->u20_me_rDTL_rb[u32_i] = u32_RB_val;
		}
		else
		{
			pOutput->u20_me_rDTL_rb[u32_i] = 0;
		}

		// apl_i
		if (((pParam->u32_me_rAPLi_rb_en >> u32_i)&0x1) == 1)
		{
			ReadRegister(FRC_TOP__KME_ME1_TOP9__regr_me1_statis_rgn00_apli_ADDR + 4 * u32_i, 0, 19, &u32_RB_val);
			pOutput->u20_me_rAPLi_rb[u32_i] = u32_RB_val;
		}
		else
		{
			pOutput->u20_me_rAPLi_rb[u32_i] = 0;
		}

		// apl_p
		if (((pParam->u32_me_rAPLp_rb_en >> u32_i)&0x1) == 1)
		{
			ReadRegister(FRC_TOP__KME_ME1_TOP9__regr_me1_statis_rgn00_aplp_ADDR + 4 * u32_i, 0, 19, &u32_RB_val);
			pOutput->u20_me_rAPLp_rb[u32_i] = u32_RB_val;
		}
		else
		{
			pOutput->u20_me_rAPLp_rb[u32_i] = 0;
		}

		// prd
		if (((pParam->u32_me_rPRD_rb_en >> u32_i)&0x1) == 1)
		{
			if(u32_i == 0)
			{
				ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_rgn00_prd_ADDR, 0, 25, &u32_RB_val);
				pOutput->u13_me_rPRD_rb[0] = u32_RB_val & 0x1fff;
				pOutput->u13_me_rPRD_rb[1] = (u32_RB_val & 0x3ffe000) >> 13;
			}
			else if((u32_i % 2 == 0) && u32_i < 22)
			{
				ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_rgn02_prd_ADDR + 2 * (u32_i - 2), 0, 25, &u32_RB_val);
				pOutput->u13_me_rPRD_rb[u32_i] = u32_RB_val & 0x1fff;
				pOutput->u13_me_rPRD_rb[u32_i + 1] = (u32_RB_val & 0x3ffe000) >> 13;
			}
			else if(u32_i % 2 == 0)
			{
				ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_rgn22_prd_ADDR + 2 * (u32_i - 22), 0, 25, &u32_RB_val);
				pOutput->u13_me_rPRD_rb[u32_i] = u32_RB_val & 0x1fff;
				pOutput->u13_me_rPRD_rb[u32_i + 1] = (u32_RB_val & 0x3ffe000) >> 13;
			}
		}
		else
		{
			pOutput->u13_me_rPRD_rb[u32_i] = 0;
		}

		// LFB
		if (((pParam->u32_me_rLFB_rb_en >> u32_i)&0x1) == 1)
		{
			if(u32_i < 16)
			{
				ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_fb_cnt_00_ADDR + 4 * u32_i, 20, 31, &u32_RB_val);
				pOutput->u12_me_rLFB_rb[u32_i] = u32_RB_val;
			}
			else if(u32_i % 2 == 0)
			{
				ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_fb_cnt_20_ADDR + 2 * (u32_i - 16), 0, 23, &u32_RB_val);
				pOutput->u12_me_rLFB_rb[u32_i] = u32_RB_val & 0xfff;
				pOutput->u12_me_rLFB_rb[u32_i + 1] = (u32_RB_val & 0xfff000) >> 12;
			}
		}
		else
		{
			pOutput->u12_me_rLFB_rb[u32_i] = 0;
		}

		// temporal consistency
		if (((pParam->u32_me_rTC_rb_en >> u32_i)&0x1) == 1)
		{
			ReadRegister(FRC_TOP__KME_ME1_TOP8__regr_me1_statis_rgn00_tcss_ADDR + 4 * u32_i, 0, 19, &u32_RB_val);
			pOutput->u22_me_rTC_rb[u32_i] = u32_RB_val;
		}
		else
		{
			pOutput->u22_me_rTC_rb[u32_i] = 0;
		}

		// spatial consistency
		if (((pParam->u32_me_rSC_rb_en >> u32_i)&0x1) == 1)
		{
			ReadRegister(FRC_TOP__KME_ME1_TOP8__regr_me1_statis_rgn00_scss_ADDR + 4 * u32_i, 0, 19, &u32_RB_val);
			pOutput->u22_me_rSC_rb[u32_i] = u32_RB_val;
		}
		else
		{
			pOutput->u22_me_rSC_rb[u32_i] = 0;
		}

		// rmv_1st
		if (((pParam->u32_me_rMV_1st_rb_en >> u32_i)&0x1) == 1)
		{
			ReadRegister(FRC_TOP__KME_ME1_TOP4__regr_me1_rgn00_grp0_mvx_ADDR + 8 * u32_i, 0, 20, &u32_RB_val);
			pOutput->s11_me_rMV_1st_vx_rb[u32_i] = ((u32_RB_val >> 10) &1) == 0? (u32_RB_val         & 0x7ff) : ((u32_RB_val & 0x7ff) - (1<<11));
			pOutput->s10_me_rMV_1st_vy_rb[u32_i] = ((u32_RB_val >> 20) &1) == 0? ((u32_RB_val >> 11) & 0x3ff) : (((u32_RB_val >> 11) & 0x3ff) - (1<<10));

			ReadRegister(FRC_TOP__KME_ME1_TOP5__regr_me1_rgn00_grp0_cnt_ADDR + 4 * u32_i, 0, 31, &u32_RB_val);
			pOutput->u12_me_rMV_1st_cnt_rb[u32_i] = u32_RB_val & 0xfff;

			ReadRegister(FRC_TOP__KME_ME1_TOP5__regr_me1_rgn00_grp0_unconf_ADDR + 4 * u32_i, 0, 31, &u32_RB_val);
			pOutput->u12_me_rMV_1st_unconf_rb[u32_i] = u32_RB_val & 0xfff;
		}
		else
		{
			pOutput->s11_me_rMV_1st_vx_rb[u32_i]     = 0;
			pOutput->s10_me_rMV_1st_vy_rb[u32_i]     = 0;
			pOutput->u12_me_rMV_1st_cnt_rb[u32_i]    = 0;
			pOutput->u12_me_rMV_1st_unconf_rb[u32_i] = 0;
		}

		// rmv_2nd
		if (((pParam->u32_me_rMV_2nd_rb_en >> u32_i)&0x1) == 1)
		{
			ReadRegister(FRC_TOP__KME_ME1_TOP4__regr_me1_rgn00_grp1_mvx_ADDR + 8 * u32_i, 0, 20, &u32_RB_val);
			pOutput->s11_me_rMV_2nd_vx_rb[u32_i] = ((u32_RB_val >> 10) &1) == 0? (u32_RB_val         & 0x7ff) : ((u32_RB_val & 0x7ff) - (1<<11));
			pOutput->s10_me_rMV_2nd_vy_rb[u32_i] = ((u32_RB_val >> 20) &1) == 0? ((u32_RB_val >> 11) & 0x3ff) : (((u32_RB_val >> 11) & 0x3ff) - (1<<10));

			ReadRegister(FRC_TOP__KME_ME1_TOP5__regr_me1_rgn00_grp1_cnt_ADDR + 4 * u32_i, 0, 31, &u32_RB_val);
			pOutput->u12_me_rMV_2nd_cnt_rb[u32_i] = (u32_RB_val >> 12) & 0xfff;

			ReadRegister(FRC_TOP__KME_ME1_TOP5__regr_me1_rgn00_grp1_unconf_ADDR + 4 * u32_i, 0, 31, &u32_RB_val);
			pOutput->u12_me_rMV_2nd_unconf_rb[u32_i] = (u32_RB_val >> 12) & 0xfff;
		}
		else
		{
			pOutput->s11_me_rMV_2nd_vx_rb[u32_i]     = 0;
			pOutput->s10_me_rMV_2nd_vy_rb[u32_i]     = 0;
			pOutput->u12_me_rMV_2nd_cnt_rb[u32_i]    = 0;
			pOutput->u12_me_rMV_2nd_unconf_rb[u32_i] = 0;
		}

		//dh readback
		if (pParam->u1_dh_rb_en == 1)
		{
			ReadRegister(FRC_TOP__KME_DEHALO3__regr_dh_pfvconf_00_ADDR + 4 * u32_i, 0, 19, &u32_RB_val);
			pOutput->u20_dh_pfvconf[u32_i] = u32_RB_val & 0xFFFFF;
		}
	}

	//////////////////////////////////////////////////////////////////////////
	//ZMV dc/ac psad, and
	//////////////////////////////////////////////////////////////////////////
	if (pParam->u1_me_ZMV_psad_rb_en)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_sad_dc_sum_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_sad_dc_sum_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_sad_dc_sum_BITEND, &u32_RB_val);
		pOutput->u31_me_ZMV_psad_dc_rb = u32_RB_val;
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_sad_ac_sum_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_sad_ac_sum_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_sad_ac_sum_BITEND, &u32_RB_val);
		pOutput->u31_me_ZMV_psad_ac_rb = u32_RB_val;

		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_sad_dc_cnt_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_sad_dc_cnt_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_sad_dc_cnt_BITEND, &u32_RB_val);
		pOutput->u20_me_ZMV_DcGreatAc_cnt_rb = u32_RB_val;
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_sad_ac_cnt_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_sad_ac_cnt_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_sad_ac_cnt_BITEND, &u32_RB_val);
		pOutput->u20_me_ZMV_AcGreatDc_cnt_rb = u32_RB_val;

	}

	if (pParam->u1_mc_HVdtl_rb_en == 1)
	{		
		ReadRegister(FRC_TOP__KMC_TOP__regr_vhdtl_h_o_ADDR, 0, 31, &u32_RB_val);
		pOutput->u16_mc_Hdtl_cnt = u32_RB_val & 0xFFFF;
		pOutput->u16_mc_Vdtl_cnt = u32_RB_val >> 16;
	}

	//mc rdtl 
	for (u32_i = 0; u32_i < 4; u32_i ++)
	{
		if (pParam->u1_mc_HVdtl_rb_en == 1)
		{		
			ReadRegister(FRC_TOP__KMC_TOP__regr_vhdtl_rgn00_ADDR + 12 * u32_i, 0, 31, &u32_RB_val);
			pOutput->u10_mc_VHdtl_rb[8*u32_i] = u32_RB_val & 0x3FF;
			pOutput->u10_mc_VHdtl_rb[8*u32_i+1] = (u32_RB_val>>10) & 0x3FF;
			pOutput->u10_mc_VHdtl_rb[8*u32_i+2] = (u32_RB_val>>20) & 0x3FF;
			ReadRegister(FRC_TOP__KMC_TOP__regr_vhdtl_rgn00_ADDR + 12 * u32_i + 4, 0, 31, &u32_RB_val);
			pOutput->u10_mc_VHdtl_rb[8*u32_i+3] = u32_RB_val & 0x3FF;
			pOutput->u10_mc_VHdtl_rb[8*u32_i+4] = (u32_RB_val>>10) & 0x3FF;
			pOutput->u10_mc_VHdtl_rb[8*u32_i+5] = (u32_RB_val>>20) & 0x3FF;
			ReadRegister(FRC_TOP__KMC_TOP__regr_vhdtl_rgn00_ADDR + 12 * u32_i + 8, 0, 31, &u32_RB_val);
			pOutput->u10_mc_VHdtl_rb[8*u32_i+6] = u32_RB_val & 0x3FF;
			pOutput->u10_mc_VHdtl_rb[8*u32_i+7] = (u32_RB_val>>10) & 0x3FF;
		}
		else
		{
			pOutput->u10_mc_VHdtl_rb[8*u32_i] = 0;
			pOutput->u10_mc_VHdtl_rb[8*u32_i+1] = 0;
			pOutput->u10_mc_VHdtl_rb[8*u32_i+2] = 0;
			pOutput->u10_mc_VHdtl_rb[8*u32_i+3] = 0;
			pOutput->u10_mc_VHdtl_rb[8*u32_i+4] = 0;
			pOutput->u10_mc_VHdtl_rb[8*u32_i+5] = 0;
			pOutput->u10_mc_VHdtl_rb[8*u32_i+6] = 0;
			pOutput->u10_mc_VHdtl_rb[8*u32_i+7] = 0;
		}
	}

	if (pParam->u1_me_ZMV_cnt_en == 1)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_cnt_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_cnt_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_cnt_BITEND, &u32_RB_val);
		pOutput->u17_me_ZMV_cnt_rb = u32_RB_val;

		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_dtl_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_dtl_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_zmv_dtl_BITEND, &u32_RB_val);		
		pOutput->u17_me_ZMV_dtl_cnt_rb = u32_RB_val & 0xFFFFF;		
	}

	if(pParam->u1_color_amount_rb_en == 1)
	{
		for (u32_i = 0; u32_i < 8; u32_i ++)
		{
			ReadRegister(FRC_TOP__IPPRE1__regr_ippre_rgn0_cnt_u_ADDR + u32_i * 4,  0, 31, &u32_RB_val);
			pOutput->u16_color_amount_u[u32_i] = u32_RB_val         & 0xFFFF;
			pOutput->u16_color_amount_v[u32_i] = (u32_RB_val >> 16) & 0xFFFF;
		}
	}


	if (pParam->u1_me_statis_glb_prd_en == 1)
	{
		ReadRegister(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_prd_ADDR, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_prd_BITSTART, FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_prd_BITEND, &u32_RB_val);
		pOutput->u19_me_statis_glb_prd = u32_RB_val;
	}

	//RMV_blending & regional_fallback
	{
		ReadRegister(FRC_TOP__KMC_BI__bi_mv_fix_en_ADDR, FRC_TOP__KMC_BI__bi_mv_fix_en_BITSTART, FRC_TOP__KMC_BI__bi_mv_fix_en_BITEND, &u32_RB_val);
		pOutput->u8_gmv_blend_en = u32_RB_val;	
		ReadRegister(FRC_TOP__KMC_BI__bi_fb_fix_en_ADDR, FRC_TOP__KMC_BI__bi_fb_fix_en_BITSTART, FRC_TOP__KMC_BI__bi_fb_fix_en_BITEND, &u32_RB_val);
		pOutput->u8_regional_fb_en = u32_RB_val;

		for(u32_i=0; u32_i<8; u32_i++)
		{
			ReadRegister(FRC_TOP__KMC_BI__bi_max_11_ADDR + u32_i*4, 0, 31, &u32_RB_val);
			pOutput->u8_region_fb_max[u32_i*4] = u32_RB_val & 0xff;
			pOutput->u8_region_fb_max[u32_i*4+1] = (u32_RB_val>>8) & 0xff;
			pOutput->u8_region_fb_max[u32_i*4+2] = (u32_RB_val>>16) & 0xff;
			pOutput->u8_region_fb_max[u32_i*4+3] = (u32_RB_val>>24) & 0xff;
		}
		for(u32_i=0; u32_i<16; u32_i++)
		{
			ReadRegister(FRC_TOP__KMC_BI__bifb_cnt_11_ADDR + u32_i*4, 0, 31, &u32_RB_val);
			pOutput->u12_region_fb_cnt[u32_i*2] = u32_RB_val & 0xfff;
			pOutput->u12_region_fb_cnt[u32_i*2+1] = (u32_RB_val>>16) & 0xfff;
		}
		for(u32_i=0; u32_i<32; u32_i++)
		{
			ReadRegister(FRC_TOP__KMC_BI__bifb_sum_11_ADDR + u32_i*4, FRC_TOP__KMC_BI__bifb_sum_11_BITSTART, FRC_TOP__KMC_BI__bifb_sum_11_BITEND, &u32_RB_val);
			pOutput->u32_region_fb_sum[u32_i] = u32_RB_val;
		}
		
	}
}
 
