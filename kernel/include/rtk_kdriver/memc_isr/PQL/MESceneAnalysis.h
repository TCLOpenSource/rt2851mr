#ifndef _ME_SCENE_ANALYSIS_DEF_H
#define _ME_SCENE_ANALYSIS_DEF_H


typedef struct
{
	UBYTE  u1_RepeatPattern_en;
	UBYTE  u1_Natural_HighFreq_en;
	UBYTE  u1_LightSword_en;
	UBYTE  u1_BigAPLDiff_en;

	// casino
	UINT32 u16_casino_rimLft_th;
	UINT32 u16_casino_rimRht_th;
	UINT32 u16_casino_rimUp_th;
	UINT32 u16_casino_rimDn_th;
	UBYTE  u8_casino_rim_delta;

	UBYTE  u1_EPG_en;

	UBYTE  u1_DSR_en;//DynamicSearchRange_detect, u1_DSR_en

	UBYTE u1_over_searchrange_en;
	UBYTE u1_force_panning;
	UBYTE u8_over_searchrange_thl;

	// occl extension
	UBYTE u1_occl_type2_enable;
	UBYTE u8_occl_ext_bg_mv_diff_thl;
	UBYTE u1_occl_ext_gmv_weight_mode;
	UBYTE u4_occl_ext_2nd_gmv_uconf_en_thl;
	UBYTE u4_occl_ext_2nd_gmv_uconf_dis_thl;
	UBYTE u1_occl_ext_force_protection_off;
	#if 0  // LG TV006 493813 temp mark to sync
	UBYTE u1_occl_ext_force_lvl_enable;
	#else
	UBYTE u1_occl_ext_force_lvl_en;
	#endif
	UBYTE u3_occl_ext_force_lvl;
	UBYTE u4_occl_ext_rgn_thl;
	#if 1  // LG TV006 493813 temp mark to sync
	UBYTE u1_occl_ext_avoidLogo_en;
	UBYTE u8_occl_ext_LogoCount_thr;
	#endif
	// post correction
	UBYTE u1_dh_postcorr_log_en;
	UBYTE u3_dh_postcorr_force_lvl;
	UBYTE u1_dh_postcorr_force_lvl_en;
	UBYTE u1_dh_postcorrt_dyn_calc_en;
	UBYTE u8_dh_postcorr_LogoCount_thr;

	UBYTE u8_dh_postcorr_GmvMvy_thr;
	UBYTE u8_dh_postcorr_y2x_ratio_x0;
	UBYTE u8_dh_postcorr_y2x_ratio_x1;
	UBYTE u8_dh_postcorr_y2x_ratio_y0;
	UBYTE u8_dh_postcorr_y2x_ratio_y1;

	// main object motion
	UBYTE u4_MainObjectMove_bgMv_thl;
	UBYTE u4_MainObjectMove_objBgMvDiff_thl;
	UBYTE u8_MainObjectMove_dtl_thl;
	UBYTE u8_MainObjectMove_thl_1;
	UBYTE u8_MainObjectMove_thl_2;
	UBYTE u8_MainObjectMove_1st_uconf_thr;
	UBYTE u8_MainObjectMove_2nd_uconf_thr;

}_PARAM_ME_SCENE_ANALYSIS;

/*
	SMART INTEGRATION STATUS (SIS) for MEMC ver. by LearnRPG@20150911

	Collection and combination all those status by long time experience.
	We suggest in kernal API don't have below code
	(that's mean kernal API must independent operation)
	1. no global variable, must use function parameter be input.
	2. don't change global status in function, must use middle layer to update status.

*/

typedef struct _MemcStatus
{
/*
	UINT32 reg_vbuf_ph_1st_lfsr_mask_x;
	UINT32 reg_vbuf_ph_1st_lfsr_mask_y;
	UINT32 reg_vbuf_ph_2nd_lfsr_mask_x;
	UINT32 reg_vbuf_ph_2nd_lfsr_mask_y;

	UINT32 reg_vbuf_ip_1st_lfsr_mask_x;
	UINT32 reg_vbuf_ip_1st_lfsr_mask_y;
	UINT32 reg_vbuf_ip_2nd_lfsr_mask_x;
	UINT32 reg_vbuf_ip_2nd_lfsr_mask_y;

	UINT32 reg_vbuf_pi_1st_lfsr_mask_x;
	UINT32 reg_vbuf_pi_1st_lfsr_mask_y;
	UINT32 reg_vbuf_pi_2nd_lfsr_mask_x;
	UINT32 reg_vbuf_pi_2nd_lfsr_mask_y;

	UINT32 reg_metop_ss_ip_update0_penalty;
	UINT32 reg_metop_ss_ip_update1_penalty;
	UINT32 reg_metop_ss_pi_update0_penalty;
	UINT32 reg_metop_ss_pi_update1_penalty;
	UINT32 reg_metop_ss_ph_update0_penalty;
	UINT32 reg_metop_ss_ph_update1_penalty;

	UINT32 reg_metop_ds_ip_update0_penalty;
	UINT32 reg_metop_ds_ip_update1_penalty;
	UINT32 reg_metop_ds_pi_update0_penalty;
	UINT32 reg_metop_ds_pi_update1_penalty;
	UINT32 reg_metop_ds_ph_update0_penalty;
	UINT32 reg_metop_ds_ph_update1_penalty;

	UBYTE  u3_ip_1st_cand1_offsetx;
	UBYTE  u3_ip_1st_cand5_offsetx;
	UBYTE  u3_ip_1st_update1_offsetx;
	UBYTE  u3_pi_1st_cand1_offsetx;
	UBYTE  u3_pi_1st_cand5_offsetx;
	UBYTE  u3_pi_1st_update1_offsetx;
	UBYTE  u3_ph_1st_cand1_offsetx;
	UBYTE  u3_ph_1st_cand2_offsetx;
	UBYTE  u3_ph_1st_cand2_offsety;
	UBYTE  u3_ph_1st_cand5_offsetx;
	UBYTE  u3_ph_1st_update1_offsetx;

	UBYTE  u3_ip_2nd_cand1_offsetx;
	UBYTE  u3_ip_2nd_cand5_offsetx;
	UBYTE  u3_ip_2nd_update1_offsetx;
	UBYTE  u3_pi_2nd_cand1_offsetx;
	UBYTE  u3_pi_2nd_cand5_offsetx;
	UBYTE  u3_pi_2nd_update1_offsetx;
	UBYTE  u3_ph_2nd_cand1_offsetx;
	UBYTE  u3_ph_2nd_cand2_offsetx;
	UBYTE  u3_ph_2nd_cand2_offsety;
	UBYTE  u3_ph_2nd_cand5_offsetx;
	UBYTE  u3_ph_2nd_update1_offsetx;

	UINT32 reg_mc_var_lpf_en;
	UINT32 reg_mc_var_lpf_mvd_x_th;

	UBYTE reg_metop_sad_th_mode_sel;
	UBYTE reg_metop_ss_ip_penalty_g;
	UBYTE reg_metop_ss_pi_penalty_g;
	UBYTE reg_metop_ss_ph_penalty_g;
	UBYTE reg_metop_ds_ip_penalty_g;
	UBYTE reg_metop_ds_pi_penalty_g;
	UBYTE reg_metop_ds_ph_penalty_g;

	UBYTE reg_metop_ss_ip_penalty_z;
	UBYTE reg_metop_ss_pi_penalty_z;
	UBYTE reg_metop_ss_ph_penalty_z;
	UBYTE reg_metop_ds_ip_penalty_z;
	UBYTE reg_metop_ds_pi_penalty_z;
	UBYTE reg_metop_ds_ph_penalty_z;

	UBYTE reg_dh_empty_proc_en;

	UINT32 reg_metop_sc_clr_saddiff_th;
	UBYTE reg_pql_fb_tc_iir;

        //RO reg
	UINT32 u25_rdbk_dtl_all;
	UINT32 u25_rdbk_dtl_all_pre;
	UINT32 u25_rdbk_dtl_all_intervel5;
	UINT32 u25_rdbk_dtl_all_intervel5_pre;
	UBYTE  u8_rgn_apl_p_rb[32];
	UBYTE  u8_rgn_apl_p_rb_pre[32];

	//analysis result
	UBYTE u1_apl_inc;
	UBYTE u1_apl_dec;
*/
	UINT32 reg_vbuf_ip_1st_cand3_en;
	UINT32 reg_vbuf_ip_1st_cand4_en;
	UINT32 reg_vbuf_pi_1st_cand3_en;
	UINT32 reg_vbuf_pi_1st_cand4_en;

	UINT32 reg_vbuf_ip_1st_update1_en;
	UINT32 reg_vbuf_ip_1st_update2_en;
	UINT32 reg_vbuf_ip_1st_update0_en;

	UINT32 reg_vbuf_pi_1st_update1_en;
	UINT32 reg_vbuf_pi_1st_update2_en;
	UINT32 reg_vbuf_pi_1st_update0_en;

	// candidate position
	UINT32 reg_vbuf_ip_1st_cand3_offsety;
	UINT32 reg_vbuf_ip_1st_cand4_offsety;
	UINT32 reg_vbuf_ip_1st_cand5_offsety;
	UINT32 reg_vbuf_ip_1st_cand6_offsety;
	UINT32 reg_vbuf_ip_1st_cand7_offsety;

	UINT32 reg_vbuf_pi_1st_cand3_offsety;
	UINT32 reg_vbuf_pi_1st_cand4_offsety;
	UINT32 reg_vbuf_pi_1st_cand5_offsety;
	UINT32 reg_vbuf_pi_1st_cand6_offsety;
	UINT32 reg_vbuf_pi_1st_cand7_offsety;

	// candidate penalty
	UINT32 reg_me1_ip_cddpnt_st3;
	UINT32 reg_me1_ip_cddpnt_st4;
	UINT32 reg_me1_ip_cddpnt_st5;
	UINT32 reg_me1_ip_cddpnt_st6;
	UINT32 reg_me1_pi_cddpnt_st3;
	UINT32 reg_me1_pi_cddpnt_st4;
	UINT32 reg_me1_pi_cddpnt_st5;
	UINT32 reg_me1_pi_cddpnt_st6;

	UINT32 reg_me1_ip_cddpnt_rnd0;
	UINT32 reg_me1_ip_cddpnt_rnd1;
	UINT32 reg_me1_ip_cddpnt_rnd2;
	UINT32 reg_me1_pi_cddpnt_rnd0;
	UINT32 reg_me1_pi_cddpnt_rnd1;
	UINT32 reg_me1_pi_cddpnt_rnd2;

       //  h/v  scalar down filter
	UINT32 reg_ipme_h_flp_alp0    ;
	UINT32 reg_ipme_h_flp_alp1     ;
	UINT32 reg_ipme_h_flp_alp2     ;
	UINT32 reg_ipme_h_flp_alp3     ;
	UINT32 reg_ipme_h_flp_alp4     ;
	UINT32 reg_ipme_h_flp_alp5     ;
	UINT32 reg_ipme_h_flp_alp6     ;
	UINT32 reg_ipme_v_flp_alp0     ;
	UINT32 reg_ipme_v_flp_alp1     ;
	UINT32 reg_ipme_v_flp_alp2     ;
	UINT32 reg_ipme_v_flp_alp3     ;
	UINT32 reg_ipme_v_flp_alp4     ;
	UINT32 reg_ipme_v_flp_alp5     ;
	UINT32 reg_ipme_v_flp_alp6     ;

       //me1 mvdiff curve
	UINT32 reg_me1_mvd_cuv_x1   ;
	UINT32 reg_me1_mvd_cuv_x2   ;
	UINT32 reg_me1_mvd_cuv_x3   ;
	UINT32 reg_me1_mvd_cuv_y1   ;
	UINT32 reg_me1_mvd_cuv_y2   ;
	UINT32 reg_me1_mvd_cuv_y3   ;
	UINT32 reg_me1_mvd_cuv_slope1    ;
	UINT32 reg_me1_mvd_cuv_slope2    ;
	 //me1 adptpnt rnd curve
	UINT32 reg_me1_adptpnt_rnd_y1   ;
	UINT32 reg_me1_adptpnt_rnd_y2   ;
	UINT32 reg_me1_adptpnt_rnd_y3   ;
	UINT32 reg_me1_adptpnt_rnd_y4    ;
	UINT32 reg_me1_adptpnt_rnd_slope2    ;

	UINT32 reg_me1_gmv_sel;
	UINT32 reg_me1_gmvd_sel;

	UINT32 reg_me1_gmvd_ucf_x1;
	UINT32 reg_me1_gmvd_ucf_x2;
	UINT32 reg_me1_gmvd_ucf_x3;
	UINT32 reg_me1_gmvd_ucf_y1;
	UINT32 reg_me1_gmvd_ucf_y2;
	UINT32 reg_me1_gmvd_ucf_y3;
	UINT32 reg_me1_gmvd_ucf_slope1;
	UINT32 reg_me1_gmvd_ucf_slope2;

	UINT32 reg_me1_gmvd_cnt_x1;
	UINT32 reg_me1_gmvd_cnt_x2;
	UINT32 reg_me1_gmvd_cnt_x3;
	UINT32 reg_me1_gmvd_cnt_y1;
	UINT32 reg_me1_gmvd_cnt_y2;
	UINT32 reg_me1_gmvd_cnt_y3;
	UINT32 reg_me1_gmvd_cnt_slope1;
	UINT32 reg_me1_gmvd_cnt_slope2;

	UINT32 reg_me1_pi_gmvd_cost_limt;
	UINT32 reg_me1_ip_gmvd_cost_limt;
	UINT32 reg_me2_ph_gmvd_cost_limt;

	UINT32 u25_rdbk_dtl_all;
	UINT32 u25_rdbk_dtl_all_pre;
	UINT32 u25_rdbk_dtl_all_intervel5;
	UINT32 u25_rdbk_dtl_all_intervel5_pre;

	UINT32 reg_mc_scene_change_fb;
	UINT32 reg_me1_sc_saddiff_th;

	UINT32   u8_dynME_acdc_bld_x_act[3];
	UINT32   u6_dynME_acdc_bld_y_act[3];
	int  s9_dynME_acdc_bld_s_act[2];
	UINT32   u8_dynME_ac_pix_sad_limt_act;
	UINT32   u4_acdc_bld_psad_shift_act;

	UINT32   u8_dynME2_acdc_bld_x_act[3];
	UINT32   u6_dynME2_acdc_bld_y_act[3];
	int  s9_dynME2_acdc_bld_s_act[2];

	UINT32 reg_kmc_blend_y_alpha;
	UINT32 reg_kmc_blend_uv_alpha;
	UINT32 reg_kmc_blend_logo_y_alpha;
	UINT32 reg_kmc_blend_logo_uv_alpha;
	//============  me1 drp  k5lp===
	UINT32 reg_me1_drp_cuv_y0   ;
	UINT32 reg_me1_drp_cuv_y1   ;
	UINT32 reg_me1_drp_cuv_y2   ;

	//============  local fb===
	UBYTE reg_dh_dtl_curve_y1;
	UBYTE reg_dh_dtl_curve_y2;
	//==============

	//============  sobj ===
	UBYTE reg_mc_sobj_ymin0;
	UBYTE reg_mc_sobj_ymin1;
	UBYTE reg_mc_sobj_slop1;
	//======================
	//============me2  sobj ===
	UINT32 reg_me2_sec_small_object_sad_th;
	UINT32 reg_me2_sec_small_object_sm_mv_th;
	UINT32 reg_me2_sec_small_object_ip_pi_mvdiff_gain;
	UINT32 reg_me2_sec_small_object_ph_mvdiff_gain;
	//======================

	//============  lfsr_mask ===
	UBYTE reg_vbuf_ip_1st_lfsr_mask0_x ;
	UBYTE reg_vbuf_ip_1st_lfsr_mask0_y ;
	UBYTE reg_vbuf_ip_1st_lfsr_mask1_x ;
	UBYTE reg_vbuf_ip_1st_lfsr_mask1_y ;
	UBYTE reg_vbuf_ip_1st_lfsr_mask2_x ;
	UBYTE reg_vbuf_ip_1st_lfsr_mask2_y ;
	UBYTE reg_vbuf_ip_1st_lfsr_mask3_x ;
	UBYTE reg_vbuf_ip_1st_lfsr_mask3_y ;

	UBYTE reg_vbuf_pi_1st_lfsr_mask0_x ;
	UBYTE reg_vbuf_pi_1st_lfsr_mask0_y ;
	UBYTE reg_vbuf_pi_1st_lfsr_mask1_x ;
	UBYTE reg_vbuf_pi_1st_lfsr_mask1_y ;
	UBYTE reg_vbuf_pi_1st_lfsr_mask2_x ;
	UBYTE reg_vbuf_pi_1st_lfsr_mask2_y ;
	UBYTE reg_vbuf_pi_1st_lfsr_mask3_x ;
	UBYTE reg_vbuf_pi_1st_lfsr_mask3_y ;
	//======================

	//============  zmv control ===
	UBYTE reg_vbuf_ip_1st_zmv_en;
	UBYTE reg_vbuf_pi_1st_zmv_en;
	UINT32 reg_me1_ip_cddpnt_zmv;
	UINT32 reg_me1_pi_cddpnt_zmv;
	//======================

	//=======================
	UINT32 reg_vbuf_invalid_cnt_th;
	//=======================
	
}MemcStatus;

typedef struct _ScalerMEMCGlobalStatus
{
	MemcStatus MEMC_STATUS;

	UINT32 Frame_Couter;

} ScalerMEMCGlobalStatus;

typedef struct
{
	ScalerMEMCGlobalStatus SIS_MEMC;

	UBYTE u1_RP_detect_true;
	UBYTE u1_Region_Periodic_detect_true;
	UBYTE u1_casino_RP_detect_true;
	UBYTE u1_Avenger_RP_detect_true;
	UBYTE u1_Natural_HighFreq_detect_true;
	UINT32 u32_new_saddiff_th;
	UINT32 u32_new_saddiff_th_pre;
	int   s10_me_GMV_1st_vy_rb_iir;
	UBYTE  u6_me_GMV_1st_cnt_rb_iir;
	UINT32 u12_me_GMV_1st_unconf_rb_iir;
	UBYTE  u1_chaos_true;
	UBYTE  u8_chaos_apply;
	UBYTE   u8_big_apldiff_hold_cnt;
	UBYTE  u1_ToL10_RP_true;
	UINT32  u32_glb_sad_pre;
	UINT32	u32_big_apldiff_saddiff_th;
	UBYTE	u8_big_apldiff_sc_hold_cnt;
	UINT32	u32_big_apldiff_sad_pre;
	UBYTE	u8_EPG_apply;
	UBYTE	u8_EPG_moveROI;
	UINT32	u16_simple_scene_score_pre;

	//panning detect
	UBYTE	u2_panning_flag;
	UBYTE	u8_panning_cnt;

	// general motion dir
	UBYTE	u2_GMV_single_move;
	// general detail dir
	UBYTE	u2_mcDtl_HV;

	// pure vertical panning
	UBYTE   u1_pure_TopDownPan_flag;
	UBYTE   u8_pure_TopDownPan_cnt;

	UBYTE u1_RP_DTLPRD_move_check;

	UBYTE u3_Dynamic_MVx_Step;
	UBYTE u3_Dynamic_MVy_Step;

	UBYTE u1_MainObject_Move;

	// over search range
	UBYTE u1_over_searchrange;

	// LG TV006 493813 temp mark to sync
	UBYTE u3_occl_ext_level;
	UBYTE u3_occl_post_corr_level;

	UINT32 u32_aFrmMot_4Max;
	UINT32 u32_cFrmMot_4Max;
	UBYTE u1_Q13835_flag;
}_OUTPUT_ME_SCENE_ANALYSIS;

VOID Me_sceneAnalysis_Init(_OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID Me_sceneAnalysis_Proc_OutputIntp(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput, SINT32 iSliceIdx);

VOID MEMC_MiddleWare_StatusInit(_OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_MiddleWare_Reg_Status_Cad1(_OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_MiddleWare_StatusUpdate(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput, SINT32 iSliceIdx);

VOID MEMC_LightSwordDetect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_RepeatPattern_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_Natural_HighFreq_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_Casino_RP_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
UBYTE MEMC_RepeatBG_detect(VOID);
UBYTE MEMC_BlackSC_detect(VOID);
UBYTE MEMC_RMV_Consistent_detect(VOID);
UBYTE MEMC_GMV_detect(UBYTE * u11_GMV_x_max_rb,UBYTE *u10_GMV_y_max_rb);
UBYTE MEMC_RGNDtlPRD_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
UBYTE MEMC_RGNDtl_Move_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
UBYTE MEMC_RGNPRD_Move_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
UBYTE MEMC_HVDtl_Move_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_Periodic_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_Region_Periodic_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_Panning_Detect(_OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_Big_APLDiff_Detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_EPG_Protect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_Simple_Scene_Detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_PureTopDownPanning_Detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_DynamicSearchRange_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_MainObject_Move_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_Over_SearchRange_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_Occl_Ext_Detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_ME_OFFSET_Proc(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput);
VOID MEMC_RMV_Detect_DTV_Ch2_1_tv006(_OUTPUT_ME_SCENE_ANALYSIS *pOutput); 



/////////////////////////////////////////////////////////////////////////////

DEBUGMODULE_BEGIN(_PARAM_ME_SCENE_ANALYSIS,_OUTPUT_ME_SCENE_ANALYSIS)
 //   ADD_DUMMY_PARAM()
	ADD_PARAM_DES(UBYTE,  u1_RepeatPattern_en,         1, "")
	ADD_PARAM_DES(UBYTE,  u1_Natural_HighFreq_en,         1, "")
	ADD_PARAM_DES(UBYTE,  u1_LightSword_en,         1, "")
	ADD_PARAM_DES(UBYTE,  u1_BigAPLDiff_en,		 1, "")
DEBUGMODULE_END

#endif


