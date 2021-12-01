#include "memc_isr/PQL/PQLPlatformDefs.h"
#include "memc_isr/PQL/PQLContext.h"
#include "memc_isr/PQL/PQLGlobalDefs.h"
#include "memc_isr/PQL/FRC_glb_Context.h"
extern unsigned int vpq_project_id;
extern unsigned int vpqex_project_id;
///////////////////////////////////////////////////////////////////////////////////////////
VOID Dh_close_action(const _PARAM_DH_CLOSE *pParam, _OUTPUT_DH_CLOSE *pOutput)
{
	//const _PQLCONTEXT *s_pContext = GetPQLContext();

	// dh close action
	if(pOutput->u1_closeDh_sig == 1)
	{
		pOutput->u1_closeDh_act    = 1;
		pOutput->u8_dhOff_holdFrm  = pParam->u8_dhOff_holdFrm;
	}
	else if(pOutput->u8_dhOff_holdFrm > 0)
	{
		pOutput->u1_closeDh_act    = 1;
		pOutput->u8_dhOff_holdFrm  = pOutput->u8_dhOff_holdFrm - 1;
	}
	else
	{
		pOutput->u1_closeDh_act    = 0;
		pOutput->u8_dhOff_holdFrm  = 0;
	}

	//need move to ME action
//	if ((pOutput->u1_panning_close == 1) && (pParam->u1_panning_en == 1))
//	{
//		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_TOP_REG__reg_me2_ph_invalid_sel), 1);  //gmv
//		}
//		else
//		{
//		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_TOP_REG__reg_me2_ph_invalid_sel), 3);  //pfv1
//	}
}

VOID Dh_closeSignal_Detect(const _PARAM_DH_CLOSE *pParam, _OUTPUT_DH_CLOSE *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_PQLPARAMETER *s_pParam       = GetPQLParameter();
	UBYTE u8_cadenceId            = _CAD_VIDEO; //s_pContext->_output_filmDetectctrl.u8_CurCadence;

	UBYTE u1_fblvl_dhClose = 0, u1_meAllDtl_dhClose = 0;
	UBYTE u1_fvconf_dhClose = 0;
	UBYTE u1_lbmc_switch_dhClose=0;
	UBYTE u1_dh_fadeInOut_close = 0;
	UINT32 u25_meAllDtl    = s_pContext->_output_read_comreg.u25_me_aDTL_rb;
	static UINT32  u25_avgDTL_pre,u32_gmv_cnt_pre,u32_gmv2_cnt_pre,u26_avgAPLi_pre;
	UINT32 u25_avgDTL =0;
	UINT32 u32_gmv_cnt = s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb;
	UINT32 u32_gmv2_cnt = s_pContext->_output_read_comreg.u17_me_GMV_2nd_cnt_rb;
	UBYTE u1_Swing_close=0;
	UINT32 u26_aAPLi_rb=s_pContext->_output_read_comreg.u26_me_aAPLi_rb;
	#if PQL_DYNAMIC_ADJUST_FIX_ISSUE
	UBYTE u1_panning_close = 0;
	UINT32 debug_index_check = 0;
	UINT32 debug_flag_check = 0;
	#endif
	u25_avgDTL = (u25_avgDTL_pre*7 + u25_meAllDtl)>>3;
	u32_gmv_cnt = (u32_gmv_cnt_pre*7 + u32_gmv_cnt)>>3;
	u32_gmv2_cnt= (u32_gmv2_cnt_pre*7 + u32_gmv2_cnt)>>3;
	u26_aAPLi_rb=(u26_avgAPLi_pre*7 + u26_aAPLi_rb)>>3;

	if(u8_cadenceId >= _FRC_CADENCE_NUM_){
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]Invalid Cadence:%d,Resume to '_CAD_VIDEO'!\n",__FUNCTION__,u8_cadenceId);
		u8_cadenceId = _CAD_VIDEO;
	}
	// fall back level close dehalo
	if(pParam->u1_fblvl_en == 1)
	{
		UBYTE  u8_dh_fbLvl     = s_pContext->_output_fblevelctrl.u8_Dehalo_FBLevel;
		UBYTE  u8_fbLvl     = s_pContext->_output_fblevelctrl.u8_FBLevel;
		UBYTE  u1_dh_on2off_en = 0;
		UBYTE  u1_dh_off2on_en = 0;
		u8_dh_fbLvl =( u8_dh_fbLvl +u8_fbLvl)>>1;
		u1_dh_on2off_en = u8_dh_fbLvl >= pParam->u8_fbLvl_Th0? 1 : 0;
		u1_dh_off2on_en = u8_dh_fbLvl <= pParam->u8_fbLvl_Th1? 1 : 0;

		// for each frame, if the flbk level drive it to dh-close.
		pOutput->u1_fblvl_1frm_close = (pOutput->u1_fblvl_1frm_close == 0 && u1_dh_on2off_en == 1)? 1 : \
			                           ((pOutput->u1_fblvl_1frm_close == 1 && u1_dh_off2on_en == 1)? 0 : pOutput->u1_fblvl_1frm_close);

		// finally, whether flbk level can do dh-close.
		if(pOutput->u1_fblvl_1frm_close == 1)
		{
			u1_fblvl_dhClose          = 1;
			pOutput->u8_fblvl_holdFrm = pParam->u8_fblvl_holdFrm;
		}
		else if(pOutput->u8_fblvl_holdFrm > 0)
		{
			u1_fblvl_dhClose          = 1;
			pOutput->u8_fblvl_holdFrm = pOutput->u8_fblvl_holdFrm - 1;
		}
		else
		{
			u1_fblvl_dhClose          = 0;
			pOutput->u8_fblvl_holdFrm = 0;
		}
	}

	if(pParam->u1_dh_fadeInOut_en == 1)
	{
	    if(s_pContext->_output_frc_sceneAnalysis.u1_fadeInOut_dh_close == 1)
		{
			u1_dh_fadeInOut_close          = 1;
			if( ( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
				pOutput->u5_dh_fadeInOut_holdfrm = pParam->u5_dh_fadeInOut_holdfrm;
			else
			pOutput->u5_dh_fadeInOut_holdfrm = (pParam->u5_dh_fadeInOut_holdfrm) <<2;
		}
		else if(pOutput->u5_dh_fadeInOut_holdfrm > 0)
		{
			u1_dh_fadeInOut_close          = 1;
			if(s_pParam->_param_frc_sceneAnalysis.u1_fdIO_sc_clear_en == 1)
				pOutput->u5_dh_fadeInOut_holdfrm = (s_pContext->_output_read_comreg.u1_sc_status_dh_rb==1 || s_pContext->_output_read_comreg.u1_sc_status_rb == 1 || s_pContext->_output_me_sceneAnalysis.u2_panning_flag >= 1) ? pOutput->u5_dh_fadeInOut_holdfrm>>2 : pOutput->u5_dh_fadeInOut_holdfrm - 1;
			else
			pOutput->u5_dh_fadeInOut_holdfrm = pOutput->u5_dh_fadeInOut_holdfrm - 1;
		}
		else
		{
		    u1_dh_fadeInOut_close          = 0;
		    pOutput->u5_dh_fadeInOut_holdfrm = 0;
	    }
	}

	// sml rgn action
	if(pParam->u1_dh_sml_rgnAction_en == 1)
	{
	    Dh_close_sml_rgnAction(pParam, pOutput);
	}
	else
	{
		pOutput->u1_dh_sml_rgnAction_close = 0;
	}

	// me_allDtl close dehalo
	if (pParam->u1_meAllDtl_en == 1)
	{
		UINT32 u32_rimRatio = (s_pContext->_output_rimctrl.u32_rimRatio == 0) ? 128 : s_pContext->_output_rimctrl.u32_rimRatio;
		UBYTE  u1_dh_on2off_en = u25_meAllDtl <= ((pParam->u25_meAllDtl_Th0 * u32_rimRatio) >> 7)? 1 : 0;
		UBYTE  u1_dh_off2on_en = u25_meAllDtl >= ((pParam->u25_meAllDtl_Th1 * u32_rimRatio) >> 7)? 1 : 0;

		u1_meAllDtl_dhClose = (pOutput->u1_meAllDtl_close == 0 && u1_dh_on2off_en == 1)? 1 : \
							  ((pOutput->u1_meAllDtl_close == 1 && u1_dh_off2on_en == 1)? 0 : pOutput->u1_meAllDtl_close);
	}

	//bad pfvconf
	if (pParam->u1_dh_pfvconf_en == 1)
	{
		int i;
		int bad_conf_num = 0;
		for (i=0; i<32; i++)
		{
			UINT32 pfvconf = s_pContext->_output_read_comreg.u20_dh_pfvconf[i];
			if (pfvconf > pParam->u20_dh_pfvconf_thrL)
			{
				bad_conf_num++;
			}
		}

		if (bad_conf_num >= pParam->u6_dh_pfvconf_cnt_thr)
		{
			pOutput->u1_pfvconf_close = 1;
		}
		else
		{
			pOutput->u1_pfvconf_close = 0;
		}

		// finally, whether flbk level can do dh-close.
		if(pOutput->u1_pfvconf_close == 1)
		{
			u1_fvconf_dhClose = 1;
			pOutput->u8_pfvconf_holdFrm = pParam->u5_dh_pfvconf_holdfrm;
		}
		else if(pOutput->u8_fblvl_holdFrm > 0)
		{
			u1_fvconf_dhClose           = 1;
			pOutput->u8_pfvconf_holdFrm = pOutput->u8_pfvconf_holdFrm - 1;
		}
		else
		{
			u1_fvconf_dhClose           = 0;
			pOutput->u8_pfvconf_holdFrm = 0;
		}
	}

	//LBMC mode switch
	if (pParam->u1_lbmc_switch_en == 1)
	{
		if(((pOutput->u8_lbmc_mode == _MC_NORMAL_) && (s_pContext->_output_mc_lbmcswitch.u8_lf_lbmcMode == _MC_SINGLE_UP_)) ||
		   ((pOutput->u8_lbmc_mode == _MC_NORMAL_) && (s_pContext->_output_mc_lbmcswitch.u8_lf_lbmcMode == _MC_SINGLE_DOWN_)))
		{
			u1_lbmc_switch_dhClose = 1;
			pOutput->u8_lbmc_switch_holdfrm = pParam->u5_lbmc_switch_holdfrm ;
		}
		else if(pOutput->u8_lbmc_switch_holdfrm > 0)
		{
			u1_lbmc_switch_dhClose = 1;
			pOutput->u8_lbmc_switch_holdfrm = pOutput->u8_lbmc_switch_holdfrm - 1;
		}
		else
		{
			u1_lbmc_switch_dhClose = 0;
			pOutput->u8_lbmc_switch_holdfrm = 0;
		}
	}
	else
	{
			u1_lbmc_switch_dhClose = 0;
			pOutput->u8_lbmc_switch_holdfrm = 0;
	}

	//Panning
	if (pParam->u1_panning_en == 1)
	{
		#if PQL_DYNAMIC_ADJUST_FIX_ISSUE
		//if(s_pContext->_output_frc_sceneAnalysis.u8_is_insidePan == 1)
		if((s_pContext->_output_me_sceneAnalysis.u2_panning_flag== 1 || s_pContext->_output_me_sceneAnalysis.u2_panning_flag== 2 ) && u25_avgDTL <560000)
		{
			u1_panning_close = 1;
			pOutput->u8_panning_holdfrm = 4/*pParam->u5_panning_holdfrm */;
		}
		else if((s_pContext->_output_me_sceneAnalysis.u2_panning_flag== 1 || s_pContext->_output_me_sceneAnalysis.u2_panning_flag== 2 )  && u32_gmv_cnt >20000 && u25_avgDTL >1100000)
		{
			u1_panning_close = 1;
			pOutput->u8_panning_holdfrm = 4/*pParam->u5_panning_holdfrm */;
		}
		else if(s_pContext->_output_me_sceneAnalysis.u2_panning_flag== 1  && u32_gmv_cnt >12000 && u25_avgDTL >1600000)
		{
			u1_panning_close = 1;
			pOutput->u8_panning_holdfrm = 4/*pParam->u5_panning_holdfrm */;
		}
		else if((s_pContext->_output_me_sceneAnalysis.u2_panning_flag== 1 || s_pContext->_output_me_sceneAnalysis.u2_panning_flag== 2 )  && u32_gmv2_cnt >500 && u25_avgDTL >1300000&&u32_gmv_cnt >16000 && u32_gmv_cnt <29000 && u26_aAPLi_rb <2000000 && u26_aAPLi_rb>1200000)
		{
			u1_panning_close = 1;
			pOutput->u8_panning_holdfrm = 4/*pParam->u5_panning_holdfrm */;
		}
		else if(s_pContext->_output_me_sceneAnalysis.u2_panning_flag   && u25_avgDTL >500000 && u25_avgDTL <1300000&&u32_gmv_cnt >16000 && u32_gmv_cnt <29000 && u26_aAPLi_rb<2100000)
		{
			u1_panning_close = 1;
			pOutput->u8_panning_holdfrm = 4/*pParam->u5_panning_holdfrm */;
		}
		else if(pOutput->u8_panning_holdfrm > 0)
		{
			u1_panning_close = 1;
			pOutput->u8_panning_holdfrm = pOutput->u8_panning_holdfrm - 1;
		}
		else
		#endif
		{
			u1_panning_close = 0;
		}
	}
	else
	{
		u1_panning_close = 0;
	}

	//Simple Scene
	if (pParam->u1_simple_scene_en == 1)
	{
		UINT32 simple_scene_score_pre = ((s_pContext->_output_me_sceneAnalysis.u16_simple_scene_score_pre+128)>>8);
		if (simple_scene_score_pre > 160)
		{
			pOutput->u1_dh_simple_scene_close = 1;
		}
		else
		{
			pOutput->u1_dh_simple_scene_close = 0;
		}
	}

	if(s_pContext->_output_frc_sceneAnalysis.u1_Swing_true && u25_avgDTL >2200000)
	{
		u1_Swing_close=1;
	}
	else
	{
		u1_Swing_close=0;
	}

	u25_avgDTL_pre = u25_avgDTL;
	u32_gmv_cnt_pre = u32_gmv_cnt;
	u32_gmv2_cnt_pre = u32_gmv2_cnt;
	u26_avgAPLi_pre = u26_aAPLi_rb;

	pOutput->u1_panning_close	 = (u1_panning_close && s_pContext->_output_me_sceneAnalysis.u1_MainObject_Move == 0);
	pOutput->u8_lbmc_mode        = s_pContext->_output_mc_lbmcswitch.u8_lf_lbmcMode;
	pOutput->u1_lbmc_switch_close= u1_lbmc_switch_dhClose;
	pOutput->u1_fblvl_close      = u1_fblvl_dhClose;
	pOutput->u1_meAllDtl_close   = u1_meAllDtl_dhClose;
	pOutput->u1_pfvconf_close    = u1_fvconf_dhClose;
	pOutput->u1_dh_fadeInOut_close = u1_dh_fadeInOut_close;
	pOutput->u1_closeDh_sig      = pOutput->u1_dh_simple_scene_close ||
   								   pOutput->u1_panning_close ||
   								   pOutput->u1_lbmc_switch_close ||
   								   pOutput->u1_fblvl_close ||
								   pOutput->u1_meAllDtl_close ||
								   pOutput->u1_pfvconf_close ||
								   frc_cadTable[u8_cadenceId].u1_isLowFrameRate ||
								   pOutput->u1_dh_fadeInOut_close == 1 ||
								   pOutput->u1_dh_sml_rgnAction_close == 1 ||
								   s_pContext->_output_frc_sceneAnalysis.u1_fastMotion_det||
								   u1_Swing_close ||
								   s_pContext->_output_frc_phtable.u1_is_inFormat_PureVideo == 1;
	if(pParam->u1_dbg_print_en == 1)
	{
		debug_index_check = (pParam->u1_fblvl_en) + (pParam->u1_dh_fadeInOut_en<<1) + (pParam->u1_dh_sml_rgnAction_en<<2) + (pParam->u1_meAllDtl_en<<3) +
							(pParam->u1_dh_pfvconf_en<<4) + (pParam->u1_lbmc_switch_en<<5) + (pParam->u1_panning_en<<6) + (pParam->u1_simple_scene_en<<7);

		debug_flag_check = (pOutput->u1_dh_simple_scene_close) + (pOutput->u1_panning_close<<1) + (pOutput->u1_lbmc_switch_close<<2) + (pOutput->u1_fblvl_close<<3) +
							(pOutput->u1_meAllDtl_close<<4) + (pOutput->u1_pfvconf_close<<5) + (pOutput->u1_dh_fadeInOut_close<<6) + (pOutput->u1_dh_sml_rgnAction_close<<7) +
							(s_pContext->_output_frc_sceneAnalysis.u1_fastMotion_det<<8) + (u1_Swing_close<<9)+( frc_cadTable[u8_cadenceId].u1_isLowFrameRate <<10)+( s_pContext->_output_frc_phtable.u1_is_inFormat_PureVideo<<11);

		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s][%x,%x]\n",__FUNCTION__,debug_index_check,debug_flag_check);
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s][panning_close][%d,%d]\n",__FUNCTION__,u1_panning_close, s_pContext->_output_me_sceneAnalysis.u1_MainObject_Move);		
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]gmv_cnt=%d,u25_avgDTL=%d \n",__FUNCTION__,u32_gmv_cnt,u25_avgDTL);
	}

///////////////////////////////////////////////////////////////////////////////////////////
}

VOID Dh_close_Init(_OUTPUT_DH_CLOSE *pOutput)
{
	pOutput->u8_dhOff_holdFrm         = 0;
	pOutput->u8_lbmc_mode             = _MC_NORMAL_;
	pOutput->u8_lbmc_switch_holdfrm   = 0;
	pOutput->u1_lbmc_switch_close     = 0;

	pOutput->u8_panning_holdfrm   	  = 0;
	pOutput->u1_panning_close         = 0;

	pOutput->u8_fblvl_holdFrm         = 0;
	pOutput->u1_fblvl_1frm_close      = 0;
	pOutput->u8_pfvconf_holdFrm       = 0;
	pOutput->u1_fblvl_close           = 0;
	pOutput->u1_meAllDtl_close        = 0;

	pOutput->u1_closeDh_sig           = 0;
	pOutput->u1_closeDh_act           = 0;

	pOutput->u1_dh_fadeInOut_close    = 0;
	pOutput->u5_dh_fadeInOut_holdfrm  = 0;

	pOutput->u1_dh_sml_rgnAction_close    = 0;
	pOutput->u5_dh_sml_rgnAction_holdfrm  = 0;

	pOutput->u5_dh_good_rgn_num = 0;
	pOutput->u5_dh_bad_rgn_num  = 0;
}

VOID Dh_close_sml_rgnAction(const _PARAM_DH_CLOSE *pParam, _OUTPUT_DH_CLOSE *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	SINT32 i = 0;
	UINT16 u16_cnt_totalNum1 = (s_pContext->_output_read_comreg.u8_me1_Vbuf_Hsize_rb * s_pContext->_output_read_comreg.u8_me1_Vbuf_Vsize_rb);
	UINT16 u16_cnt_totalNum = u16_cnt_totalNum1 == 0 ? 1 : u16_cnt_totalNum1/32;
	UINT32 u32_rimRatio = (s_pContext->_output_rimctrl.u32_rimRatio == 0) ? 128 : s_pContext->_output_rimctrl.u32_rimRatio;

	pOutput->u5_dh_good_rgn_num = 0;
	pOutput->u5_dh_bad_rgn_num  = 0;

	for(i=0;i<32;i++)
	{
		if( (_ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]) < pParam->u8_dh_sml_rgnAction_gmv_x_thr)&&
			(_ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]) < pParam->u8_dh_sml_rgnAction_gmv_y_thr)&&
			(s_pContext->_output_read_comreg.u12_me_rMV_1st_cnt_rb[i] > pParam->u12_dh_sml_rgnAction_gmv_cnt_thr)&&
			(s_pContext->_output_read_comreg.u12_me_rMV_1st_unconf_rb[i] < pParam->u12_dh_sml_rgnAction_gmv_ucof_thr)&&
			(s_pContext->_output_read_comreg.u25_me_rSAD_rb[i]/u16_cnt_totalNum < pParam->u10_dh_sml_rgnAction_goodrgnsad_thr)&&
			(s_pContext->_output_read_comreg.u20_dh_pfvconf[i] < pParam->u19_dh_sml_rgnAction_good_pfvdiff_thr))
		{
		    pOutput->u5_dh_good_rgn_num++;
		}
		if( (s_pContext->_output_read_comreg.u12_me_rMV_1st_cnt_rb[i] < pParam->u12_dh_sml_rgnAction_bad_gmv_cnt_thr)&&
			(s_pContext->_output_read_comreg.u12_me_rMV_1st_unconf_rb[i] > pParam->u12_dh_sml_rgnAction_bad_gmv_ucof_thr)&&
			(s_pContext->_output_read_comreg.u25_me_rSAD_rb[i]/u16_cnt_totalNum > pParam->u10_dh_sml_rgnAction_badrgnsad_thr)&&
			(s_pContext->_output_read_comreg.u20_dh_pfvconf[i] > pParam->u19_dh_sml_rgnAction_bad_pfvdiff_thr))
		{
			pOutput->u5_dh_bad_rgn_num++;
		}
	}
	if( (pOutput->u5_dh_good_rgn_num >= pParam->u5_dh_sml_rgnAction_goodrgn_cnt_thr) &&
		(pOutput->u5_dh_bad_rgn_num >= pParam->u5_dh_sml_rgnAction_badrgn_cnt_thr)&&
		(((s_pContext->_output_read_comreg.u26_me_aAPLi_rb + s_pContext->_output_read_comreg.u26_me_aAPLp_rb)/2/u16_cnt_totalNum) <
		((pParam->u8_dh_sml_rgnAction_apl_thr * u32_rimRatio) >> 7)))
	{
		pOutput->u1_dh_sml_rgnAction_close = 1;
		pOutput->u5_dh_sml_rgnAction_holdfrm = pParam->u5_dh_sml_rgnAction_holdfrm;

	}
	else if(pOutput->u5_dh_sml_rgnAction_holdfrm >0)
	{
		pOutput->u1_dh_sml_rgnAction_close = 1;
		pOutput->u5_dh_sml_rgnAction_holdfrm = pOutput->u5_dh_sml_rgnAction_holdfrm - 1;
	}
	else
	{
		pOutput->u1_dh_sml_rgnAction_close = 0;
		pOutput->u5_dh_sml_rgnAction_holdfrm = 0;
	}

}


VOID Dh_close_Proc(const _PARAM_DH_CLOSE *pParam, _OUTPUT_DH_CLOSE *pOutput)
{
	// dh close signal detect
	if (pParam->u2_dhClose_bypass == 0)
	{
		Dh_closeSignal_Detect(pParam, pOutput);
	}
	else
	{
		pOutput->u1_closeDh_sig   = pParam->u2_dhClose_bypass - 1;
	}

	// dh close action
	Dh_close_action(pParam, pOutput);
	return;
}





