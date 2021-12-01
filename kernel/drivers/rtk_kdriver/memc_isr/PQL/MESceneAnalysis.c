#include "memc_isr/PQL/PQLPlatformDefs.h"
//#include "stdio.h"
//#include "stdlib.h"
#include "memc_isr/PQL/PQLContext.h"
//#include "MESceneAnalysis.h"
#include "memc_isr/PQL/PQLGlobalDefs.h"
#ifndef rtd_inl
#define rtd_inl(offset)		(*(volatile unsigned long *)(offset))
#endif


//////////////////////////////////////////////////////////////////////////

#define FRAME_CHANGE_CNT	5

//////////////////////////////////////////////////////////////////////////

VOID Me_sceneAnalysis_Init(_OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	/* SIS MEMC Initial here */
	MEMC_MiddleWare_StatusInit(pOutput);

	pOutput->u1_RP_detect_true = 0;
	pOutput->u1_Avenger_RP_detect_true =0;

	pOutput->s10_me_GMV_1st_vy_rb_iir = 0;
	pOutput->u6_me_GMV_1st_cnt_rb_iir = 0;
	pOutput->u1_chaos_true = 0;
    pOutput->u8_chaos_apply = 0;
	pOutput->u8_big_apldiff_hold_cnt = 0;
	pOutput->u32_glb_sad_pre = 0;
	pOutput->u32_big_apldiff_saddiff_th = 0;
	pOutput->u8_big_apldiff_sc_hold_cnt = 1;
	pOutput->u32_big_apldiff_sad_pre = 0;
	pOutput->u8_pure_TopDownPan_cnt = 0;

	pOutput->u3_Dynamic_MVx_Step = 0;
	pOutput->u3_Dynamic_MVy_Step = 0;

	pOutput->u2_panning_flag = 0;
}

VOID Me_sceneAnalysis_Proc_OutputIntp(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput, SINT32 iSliceIdx)
{
	MEMC_MiddleWare_StatusUpdate(pParam, pOutput, iSliceIdx);
}



/* SIS MEMC function implement here */
VOID MEMC_MiddleWare_StatusInit(_OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	pOutput->SIS_MEMC.Frame_Couter = 0;

	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_en_ADDR, 4, 4,&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand3_en);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_en_ADDR, 5, 5,&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand4_en);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_en_ADDR, 3, 3,&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand3_en);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_en_ADDR, 4, 4,&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand4_en);

	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_en_ADDR, 12, 12, &pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_update1_en);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_en_ADDR, 13, 13, &pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_update2_en);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_en_ADDR, 11, 11, &pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_update0_en);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_en_ADDR, 11, 11, &pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_update1_en);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_en_ADDR, 12, 12, &pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_update2_en);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_en_ADDR, 10, 10, &pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_update0_en);

	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st3_ADDR, 24, 31, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st3);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st4_ADDR, 0, 7, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st4);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st5_ADDR, 8, 15, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st5);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st6_ADDR, 16, 23, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st6);

	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st3_ADDR, 24, 31, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st3);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st4_ADDR, 0, 7, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st4);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st5_ADDR, 8, 15, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st5);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st6_ADDR, 16, 23, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st6);

	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd0_ADDR, 16, 23, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_rnd0);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd1_ADDR, 24, 31, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_rnd1);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd2_ADDR, 0, 7, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_rnd2);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_ADDR, 16, 23, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_rnd0);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_ADDR, 24, 31, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_rnd1);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_ADDR, 0, 7, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_rnd2);

	ReadRegister(FRC_TOP__KME_ME1_TOP2__me1_gmv_sel_ADDR, 0, 0, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmv_sel);
	ReadRegister(FRC_TOP__PQL_0__pql_me1_gmvd_sel_en_ADDR, 2, 2, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_sel);

	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_x1);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_x2);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_x3);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_y1);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_y2);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_y3);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_slope1);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_slope2);

	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_x1);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_x2);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_x3);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_y1);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_y2);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_y3);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_slope1);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_BITEND, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_slope2);

	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_gmvd_cost_limt_ADDR, 0, 12, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_pi_gmvd_cost_limt);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_gmvd_cost_limt_ADDR, 0, 12, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_ip_gmvd_cost_limt);
	ReadRegister(FRC_TOP__KME_ME2_CALC0__me2_ph_gmvd_cost_limt_ADDR, 15, 27, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me2_ph_gmvd_cost_limt);

	ReadRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp0_ADDR, 0, 8, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp0);
	ReadRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp1_ADDR, 9, 17, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp1);
	ReadRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp2_ADDR, 18, 26, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp2);
	ReadRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp3_ADDR, 0, 8, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp3);
	ReadRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp4_ADDR, 9, 17, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp4);
	ReadRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp5_ADDR, 18, 26, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp5);
	ReadRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp6_ADDR, 0, 8, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp6);

	ReadRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp0_ADDR, 9, 17, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp0);
	ReadRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp1_ADDR, 18, 26, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp1);
	ReadRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp2_ADDR, 0, 8, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp2);
	ReadRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp3_ADDR, 9, 17, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp3);
	ReadRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp4_ADDR, 18, 26, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp4);
	ReadRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp5_ADDR, 0, 8, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp5);
	ReadRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp6_ADDR, 9, 17, &pOutput->SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp6);

	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_x1_ADDR, 0, 9, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_x1);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_x2_ADDR, 10, 19, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_x2);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_x3_ADDR, 20, 29, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_x3);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_y1_ADDR, 0, 9, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_y1);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_y2_ADDR, 10, 19,&pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_y2);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_y3_ADDR, 20, 29, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_y3);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_slope1_ADDR, 0, 12,&pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_slope1);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_slope2_ADDR, 13, 25, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_slope2);

	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y1_ADDR, 0, 5,  &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_y1);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y2_ADDR, 8, 13,  &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_y2);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y3_ADDR, 14, 19, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_y3);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y4_ADDR, 20, 25, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_y4);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_slope2_ADDR, 9, 17, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_slope2);


	ReadRegister(FRC_TOP__MC__mc_scene_change_fb_ADDR, 10, 10, &pOutput->SIS_MEMC.MEMC_STATUS.reg_mc_scene_change_fb);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_saddiff_th_ADDR, 0, 30, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_sc_saddiff_th);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_saddiff_th_ADDR, 0, 30, &pOutput->u32_new_saddiff_th);
	ReadRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_saddiff_th_ADDR, 0, 30, &pOutput->u32_new_saddiff_th_pre);

	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_x1), &pOutput->SIS_MEMC.MEMC_STATUS.u8_dynME_acdc_bld_x_act[0]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_x2), &pOutput->SIS_MEMC.MEMC_STATUS.u8_dynME_acdc_bld_x_act[1]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_x3), &pOutput->SIS_MEMC.MEMC_STATUS.u8_dynME_acdc_bld_x_act[2]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_y1), &pOutput->SIS_MEMC.MEMC_STATUS.u6_dynME_acdc_bld_y_act[0]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_y2), &pOutput->SIS_MEMC.MEMC_STATUS.u6_dynME_acdc_bld_y_act[1]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_y3), &pOutput->SIS_MEMC.MEMC_STATUS.u6_dynME_acdc_bld_y_act[2]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_slope1), (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.s9_dynME_acdc_bld_s_act[0]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_slope2), (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.s9_dynME_acdc_bld_s_act[1]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP0__me1_ip_ac_pix_sad_limt), &pOutput->SIS_MEMC.MEMC_STATUS.u8_dynME_ac_pix_sad_limt_act);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP0__me1_pi_ac_pix_sad_limt), &pOutput->SIS_MEMC.MEMC_STATUS.u8_dynME_ac_pix_sad_limt_act);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP0__me1_mm_psad_norm_shft), &pOutput->SIS_MEMC.MEMC_STATUS.u4_acdc_bld_psad_shift_act);

	#if PQL_DYNAMIC_ADJUST_FIX_ISSUE
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_x1), &pOutput->SIS_MEMC.MEMC_STATUS.u8_dynME2_acdc_bld_x_act[0]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_x2), &pOutput->SIS_MEMC.MEMC_STATUS.u8_dynME2_acdc_bld_x_act[1]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_x3), &pOutput->SIS_MEMC.MEMC_STATUS.u8_dynME2_acdc_bld_x_act[2]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_y1), &pOutput->SIS_MEMC.MEMC_STATUS.u6_dynME2_acdc_bld_y_act[0]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_y2), &pOutput->SIS_MEMC.MEMC_STATUS.u6_dynME2_acdc_bld_y_act[1]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_y3), &pOutput->SIS_MEMC.MEMC_STATUS.u6_dynME2_acdc_bld_y_act[2]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_slope1), (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.s9_dynME2_acdc_bld_s_act[0]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_slope2), (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.s9_dynME2_acdc_bld_s_act[1]);
	#endif
	ReadRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, &pOutput->SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha);
	ReadRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, &pOutput->SIS_MEMC.MEMC_STATUS.reg_kmc_blend_uv_alpha);
	ReadRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, &pOutput->SIS_MEMC.MEMC_STATUS.reg_kmc_blend_logo_y_alpha);
	ReadRegister(FRC_TOP__IPPRE__kmc_blend_logo_uv_alpha_ADDR, 9, 16, &pOutput->SIS_MEMC.MEMC_STATUS.reg_kmc_blend_logo_uv_alpha);
	#if (IC_K5LP || IC_K6LP)
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y2_ADDR, 20, 29, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_drp_cuv_y2);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y1_ADDR, 10, 19, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_drp_cuv_y1);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y0_ADDR, 0, 9, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_drp_cuv_y0);
	#endif
	ReadRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_dh_dtl_curve_y1);
	ReadRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y2_ADDR,0, 7, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_dh_dtl_curve_y2);

	ReadRegister(FRC_TOP__MC__mc_sobj_ymin0_ADDR, 12, 15, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_mc_sobj_ymin0);
	ReadRegister(FRC_TOP__MC__mc_sobj_ymin1_ADDR, 16, 19, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_mc_sobj_ymin1);
	ReadRegister(FRC_TOP__MC__mc_sobj_slop1_ADDR, 8, 13, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_mc_sobj_slop1);

	//=====  me2  small_object
	ReadRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_sad_th_ADDR, 17, 29, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me2_sec_small_object_sad_th);
	ReadRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_sm_mv_th_ADDR, 0, 9, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me2_sec_small_object_sm_mv_th);
	ReadRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_ip_pi_mvdiff_gain_ADDR, 10, 15, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me2_sec_small_object_ip_pi_mvdiff_gain);
	ReadRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_ph_mvdiff_gain_ADDR, 16, 21, &pOutput->SIS_MEMC.MEMC_STATUS.reg_me2_sec_small_object_ph_mvdiff_gain);

	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_x_ADDR, 0, 3, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask0_x);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_y_ADDR, 4, 7, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask0_y);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_x_ADDR, 8,11, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask1_x);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_y_ADDR, 12, 15, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask1_y);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_x_ADDR, 16, 19, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask2_x);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_y_ADDR, 20, 23, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask2_y);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_x_ADDR, 24, 27, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask3_x);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_y_ADDR, 28, 31, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask3_y);

	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_x_ADDR, 0, 3, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask0_x);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_y_ADDR, 4, 7, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask0_y);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_x_ADDR, 8,11, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask1_x);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_y_ADDR, 12, 15, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask1_y);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_x_ADDR, 16, 19, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask2_x);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_y_ADDR, 20, 23, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask2_y);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_x_ADDR, 24, 27, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask3_x);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_y_ADDR, 28, 31, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask3_y);

	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety_BITEND, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand3_offsety);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety_BITEND, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand4_offsety);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety_BITEND, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand5_offsety);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety_BITEND, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand6_offsety);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety_BITEND, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand7_offsety);

	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety_BITEND, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand3_offsety);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety_BITEND, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand4_offsety);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety_BITEND, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand5_offsety);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety_BITEND, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand6_offsety);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety_BITEND, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand7_offsety);

	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_zmv_en_ADDR, 16, 16, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_zmv_en);
	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_zmv_en_ADDR, 15, 15, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_zmv_en);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_zmv_ADDR, 16, 28, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_zmv);
	ReadRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_zmv_ADDR, 16, 28, (UINT32 *)&pOutput->SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_zmv);

	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_invalid_cnt_th_ADDR, 6, 10, &pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_invalid_cnt_th);

/*
	UINT32 u32_rb_data;

	pOutput->SIS_MEMC.MEMC_WIDTH = 3840;
	pOutput->SIS_MEMC.MEMC_HEIGHT = 2160;

	pOutput->SIS_MEMC.MEMC_BLOCK_X = 240;
	pOutput->SIS_MEMC.MEMC_BLOCK_Y = 135;

	pOutput->SIS_MEMC.Frame_Couter = 0;

	// SIS_MEMC initial
	pOutput->SIS_MEMC.MEMC_PAN_STATUS.wrt_idx = 0;

	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP1__reg_metop_smallobj_en),&pOutput->SIS_MEMC.MEMC_PAN_STATUS.reg_metop_smallobj_en);

	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_1st_lfsr_mask_x),&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ph_1st_lfsr_mask_x);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_1st_lfsr_mask_y),&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ph_1st_lfsr_mask_y);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_2nd_lfsr_mask_x),&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ph_2nd_lfsr_mask_x);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_2nd_lfsr_mask_y),&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ph_2nd_lfsr_mask_y);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__MC2__reg_mc_var_lpf_en),&pOutput->SIS_MEMC.MEMC_STATUS.reg_mc_var_lpf_en);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__MC2__reg_mc_var_mvd_x_th),&pOutput->SIS_MEMC.MEMC_STATUS.reg_mc_var_lpf_mvd_x_th);

	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask_x),&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask_x);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask_y),&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask_y);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_2nd_lfsr_mask_x),&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_2nd_lfsr_mask_x);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_2nd_lfsr_mask_y),&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_2nd_lfsr_mask_y);

	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask_x),&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask_x);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask_y),&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask_y);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_2nd_lfsr_mask_x),&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_2nd_lfsr_mask_x);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_2nd_lfsr_mask_y),&pOutput->SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_2nd_lfsr_mask_y);

	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP__reg_metop_ss_ip_update0_penalty),&pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ss_ip_update0_penalty);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP__reg_metop_ss_ip_update1_penalty),&pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ss_ip_update1_penalty);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP__reg_metop_ss_pi_update0_penalty),&pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ss_pi_update0_penalty);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP__reg_metop_ss_pi_update1_penalty),&pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ss_pi_update1_penalty);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP__reg_metop_ss_ph_update0_penalty),&pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ss_ph_update0_penalty);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP__reg_metop_ss_ph_update1_penalty),&pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ss_ph_update1_penalty);

	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP__reg_metop_ds_ip_update0_penalty),&pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ds_ip_update0_penalty);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP__reg_metop_ds_ip_update1_penalty),&pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ds_ip_update1_penalty);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP__reg_metop_ds_pi_update0_penalty),&pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ds_pi_update0_penalty);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP__reg_metop_ds_pi_update1_penalty),&pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ds_pi_update1_penalty);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP__reg_metop_ds_ph_update0_penalty),&pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ds_ph_update0_penalty);
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_ME_TOP__reg_metop_ds_ph_update1_penalty),&pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ds_ph_update1_penalty);

	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand1_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ip_1st_cand1_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ip_1st_cand5_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ip_1st_update1_offsetx = u32_rb_data;

	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand1_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_pi_1st_cand1_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_pi_1st_cand5_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_pi_1st_update1_offsetx = u32_rb_data;

	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_1st_cand1_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ph_1st_cand1_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_1st_cand2_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ph_1st_cand2_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_1st_cand2_offsety), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ph_1st_cand2_offsety = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_1st_cand5_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ph_1st_cand5_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_1st_update1_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ph_1st_update1_offsetx = u32_rb_data;

	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_2nd_cand1_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ip_2nd_cand1_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_2nd_cand5_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ip_2nd_cand5_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_2nd_update1_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ip_2nd_update1_offsetx = u32_rb_data;

	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_2nd_cand1_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_pi_2nd_cand1_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_2nd_cand5_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_pi_2nd_cand5_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_2nd_update1_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_pi_2nd_update1_offsetx = u32_rb_data;

	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_2nd_cand1_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ph_2nd_cand1_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_2nd_cand2_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ph_2nd_cand2_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_2nd_cand2_offsety), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ph_2nd_cand2_offsety = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_2nd_cand5_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ph_2nd_cand5_offsetx = u32_rb_data;
	PQL_ReadHDF(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ph_2nd_update1_offsetx), &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.u3_ph_2nd_update1_offsetx = u32_rb_data;

	PQL_ReadHDF(FRC_TOP__KME_ME_TOP__reg_metop_sad_th_mode_sel_ADDR, 0, 31, &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_sad_th_mode_sel = u32_rb_data&0x3;

	PQL_ReadHDF(FRC_TOP__KME_ME_TOP__reg_metop_ss_ip_penalty_z_ADDR, 0, 31, &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ss_ip_penalty_z = u32_rb_data&0xff;
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ss_ip_penalty_g = (u32_rb_data>>8)&0xff;
	PQL_ReadHDF(FRC_TOP__KME_ME_TOP__reg_metop_ss_pi_penalty_z_ADDR, 0, 31, &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ss_pi_penalty_z = u32_rb_data&0xff;
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ss_pi_penalty_g = (u32_rb_data>>8)&0xff;
	PQL_ReadHDF(FRC_TOP__KME_ME_TOP__reg_metop_ss_ph_penalty_z_ADDR, 0, 31, &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ss_ph_penalty_z = u32_rb_data&0xff;
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ss_ph_penalty_g = (u32_rb_data>>8)&0xff;

	PQL_ReadHDF(FRC_TOP__KME_ME_TOP__reg_metop_ds_ip_penalty_z_ADDR, 0, 31, &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ds_ip_penalty_z = u32_rb_data&0xff;
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ds_ip_penalty_g = (u32_rb_data>>8)&0xff;
	PQL_ReadHDF(FRC_TOP__KME_ME_TOP__reg_metop_ds_pi_penalty_z_ADDR, 0, 31, &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ds_pi_penalty_z = u32_rb_data&0xff;
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ds_pi_penalty_g = (u32_rb_data>>8)&0xff;
	PQL_ReadHDF(FRC_TOP__KME_ME_TOP__reg_metop_ds_ph_penalty_z_ADDR, 0, 31, &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ds_ph_penalty_z = u32_rb_data&0xff;
	pOutput->SIS_MEMC.MEMC_STATUS.reg_metop_ds_ph_penalty_g = (u32_rb_data>>8)&0xff;

	PQL_ReadHDF(FRC_TOP__DEHALO__reg_dh_empty_proc_en_ADDR, 0, 31, &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.reg_dh_empty_proc_en = (u32_rb_data>>13)&0x1;

	PQL_ReadHDF(FRC_TOP__PQL_1__pql_fb_tc_iir_ADDR, 0, 7, &u32_rb_data);
	pOutput->SIS_MEMC.MEMC_STATUS.reg_pql_fb_tc_iir = (u32_rb_data)&0xff;
*/
}

VOID MEMC_MiddleWare_Reg_Status_Cad1(_OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	//register value get when candence is 1

	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE  u8_cadence_phId  = s_pContext->_output_filmDetectctrl.u8_phT_phase_Idx_out[_FILM_ALL];
	UBYTE  u8_cadence_Id    = s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];
	UBYTE  u1_cad_motionSeq    = cadence_seqFlag(frc_cadTable[u8_cadence_Id], cadence_prePhase(frc_cadTable[u8_cadence_Id],u8_cadence_phId, 1));

	UINT32 u32_RB_val;

	if(u1_cad_motionSeq==1)
	{
		pOutput->SIS_MEMC.MEMC_STATUS.u25_rdbk_dtl_all_pre = pOutput->SIS_MEMC.MEMC_STATUS.u25_rdbk_dtl_all;
		ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP6__regr_me1_statis_glb_dtl), &u32_RB_val);
		pOutput->SIS_MEMC.MEMC_STATUS.u25_rdbk_dtl_all = u32_RB_val&0x1ffffff;


		pOutput->SIS_MEMC.MEMC_STATUS.u25_rdbk_dtl_all_intervel5_pre = pOutput->SIS_MEMC.MEMC_STATUS.u25_rdbk_dtl_all_intervel5;
		pOutput->SIS_MEMC.MEMC_STATUS.u25_rdbk_dtl_all_intervel5 = pOutput->SIS_MEMC.MEMC_STATUS.u25_rdbk_dtl_all;




			//WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_0_ADDR, 0, 3, pOutput->SIS_MEMC.MEMC_STATUS.u1_apl_inc);
			//WriteRegister(FRC_TOP__KPOST_TOP__reg_post_seg_disp_data_0_ADDR, 4, 7, pOutput->SIS_MEMC.MEMC_STATUS.u1_apl_dec);

	}
}

VOID MEMC_MiddleWare_StatusUpdate(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput, SINT32 iSliceIdx)
{
	if (pOutput->SIS_MEMC.Frame_Couter > 65535)
		pOutput->SIS_MEMC.Frame_Couter = 0;
	else
		pOutput->SIS_MEMC.Frame_Couter++;

	MEMC_HVDtl_Move_detect(pParam, pOutput);
	if (iSliceIdx == 0)
	{

	}
	else if (iSliceIdx == 1)
	{

	}
	else if (iSliceIdx == 2)
	{
	}
	else if (iSliceIdx == 3)
	{
		MEMC_LightSwordDetect(pParam, pOutput);
	}
	else if (iSliceIdx == 4)
	{
		MEMC_Natural_HighFreq_detect(pParam, pOutput);
		MEMC_Periodic_detect(pParam, pOutput);
	}
	else
	{
		// don't use function put here
	}
	MEMC_Region_Periodic_detect(pParam, pOutput);
	MEMC_Big_APLDiff_Detect(pParam, pOutput);
	MEMC_EPG_Protect(pParam, pOutput);
	MEMC_Simple_Scene_Detect(pParam, pOutput);
	MEMC_PureTopDownPanning_Detect(pParam, pOutput);
	MEMC_DynamicSearchRange_detect(pParam, pOutput);
	MEMC_Over_SearchRange_detect(pParam, pOutput);

	MEMC_Occl_Ext_Detect(pParam, pOutput);
	MEMC_RMV_Detect_DTV_Ch2_1_tv006(pOutput);	
	// MEMC_ME_OFFSET_Proc(pParam, pOutput);
}

static UINT32 frm_cnt = 0;
VOID MEMC_RepeatPattern_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	static UBYTE u6_RP_out_print = 0;
	static UBYTE u6_RP_frm_in_cnt = 0;
	static UBYTE u6_RP_frm_in_cnt_thl = 8;
	static UBYTE u8_RP_frm_hold_cnt = 0;
	static UBYTE u8_RP_frm_hold_cnt_max = 0;
	UINT16 u16_RP_frm_hold_thl = 120;
	UBYTE u1_det_true;
	UBYTE u1_basic_cond_true;
	static UBYTE u1_RP_detect_true_pre = 0;

	UINT16 u16_mcDTL_thmin = 0x180;
	UINT16 u16_mcDTL_th0 = 0x230;
	UINT16 u16_mcDTL_th1 = 0x340;
	UINT16 u16_mcDTL_th2 = 0x3d0;
	UINT16 u16_mcDTL_th3 = 0x400;
	UBYTE u8_mcDTL_offset = 0;
	UBYTE u8_me_aDTL_ShiftBit = 11 ;

	UBYTE u8_GMV_th0 = 0xA;
	UBYTE u8_GMV_th1 =0x18;
	UBYTE u8_GMV_th2 = 0x23;
	UBYTE u8_GMV_diff = 0x6;

	SINT16 s11_maxGMV_x = (s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb)>>2;
	SINT16 s11_secGMV_x = (s_pContext->_output_read_comreg.s11_me_GMV_2nd_vx_rb)>>2;

	SINT16 s10_maxGMV_y = (s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb)>>2;
	SINT16 s10_secGMV_y = (s_pContext->_output_read_comreg.s10_me_GMV_2nd_vy_rb)>>2;

	UINT16 u16_mcHdtl = s_pContext->_output_read_comreg.u16_mc_Hdtl_cnt;
	UINT16 u16_mcVdtl = s_pContext->_output_read_comreg.u16_mc_Vdtl_cnt;

	UINT32 u19_me_statis_glb_prd= s_pContext->_output_read_comreg.u19_me_statis_glb_prd;

//	UBYTE u1_gmv_true = 1, u1_mcDtl_move_true = 1, u1_tc_true = 1, u1_rim_true = 1, u1_dtl_all_cond_true = 1;
	UBYTE u1_gmv_true = 1, u1_mcDtl_move_true = 1, u1_tc_true = 1, u1_rDTL_move_true = 1,u1_rPRD_move_true = 1, u1_dtl_all_cond_true = 1;
	UBYTE u2_mcDtl_HV;	// 0: dtl small, 1: v dtl, 2: h dtl

	UBYTE u1_maxGMV_x_t;
	UBYTE u1_secGMV_x_t;
	UBYTE u1_maxGMV_y_t;
	UBYTE u1_secGMV_y_t;
	UBYTE u1_GMV32_t;

	UBYTE u1_black_sc=0;		//black scene or sc occur
	static UBYTE u8_black_sc_cnt = 0;
	UBYTE u1_det_start=0;

	UBYTE u11_GMV_x_max=0;	// 0: similar, 1:y, 2:x
	UBYTE u10_GMV_y_max=0;	// 0: similar, 1:y, 2:x
	UBYTE u11_GMV_x_sec=0;	// 0: similar, 1:y, 2:x
	UBYTE u10_GMV_y_sec=0;	// 0: similar, 1:y, 2:x
	UBYTE u2_GMV_single_move;	// 0: similar, 1:y, 2:x

//	UINT16 u16_rimUp  = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_TOP];
	//rmv, rdtl
	UINT32 u32_rDTL_th_1 = 70000, u32_rDTL_th_2 = 80000,u32_rPRD_th_1 = 5, u32_rPRD_th_2 = 10;
	UBYTE  u8_rmove_1_cnt= 0, u8_rmove_2_cnt= 0, u8_rmove_3_cnt= 0, u8_rmove_4_cnt = 0,  u8_rmove_cnt_th = 16;
	UBYTE u8_rDTL_RMV_mark[32] = {0},u8_rPRD_RMV_mark[32] = {0}, u8_rmove_rgn1_cnt= 0, u8_rmove_rgn2_cnt= 0, u8_rmove_rgn3_cnt= 0, u8_rmove_rgn4_cnt = 0;
	static SCHAR u2_rDTL_RMV_cnt = 0,u2_rPRD_RMV_cnt = 0;

	int i;

	UBYTE u8_black_sc_cnt_th = 60;
	UINT32 u28_tc_th = 0xe0000;//0xb0000;//0x20000;
	UBYTE  u8_bad_region_cnt = 0;

	//Casino
	static UBYTE casino_frm_cnt = 0;
	static UBYTE casino_frm_hold_cnt = 0;
	UBYTE casino_RP_true;
	static UBYTE casino_start = 0;
	UBYTE casino_region_en[32] = {0};
	UBYTE casino_region_idx;
	UBYTE casino_gmv_cond;
	UINT32 casino_dtl_sum = 0, casino_dtl_avg_cond, casino_dtl_var, casino_dtl_var_sum = 0, casino_dtl_var_avg_cond;
	UBYTE casino_region_en_sum_cond = 10;
	UBYTE casino_cond = 0;
	SINT16 casino_global_GMV_x = s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb;
	SINT16 casino_global_GMV_y = s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb;

	//Avenger
	UBYTE  avenger_rgn_mark_lft[4] = {0}, avenger_rgn_mark_rht[6] = {0};
	UINT32 avenger_th_lft = 12000, avenger_th_rht = 90000;
	UBYTE avenger_rgn_cnt_col1 = 0, avenger_rgn_cnt_col6 = 0, avenger_rgn_cnt_col7 = 0, avenger_RP_true;
	static UBYTE avenger_frm_cnt = 0;
	static UBYTE avenger_frm_hold_cnt = 0;
	static UBYTE avenger_start = 0;

	//ToL10
	UBYTE ToL10_rgn_mark[32] = {0};
	UINT32 ToL10_th = 90000;
	UBYTE ToL10_rgn_cnt_1 = 0, ToL10_rgn_cnt_2 = 0, ToL10_rgn_cnt_3 = 0, ToL10_rgn_cnt_4 = 0, ToL10_rgn_cnt_5 = 0, ToL10_rgn_cnt_6 = 0, ToL10_rgn_cnt_7 = 0, ToL10_RP_true;
	static UBYTE ToL10_frm_cnt = 0;
	static UBYTE ToL10_frm_hold_cnt = 0;
	static UBYTE ToL10_start = 0;
	//UBYTE ToL10_rgnDtl_diff_t = 1;
	UINT32 ToL10_RgnDtl_diff[6];
	UINT32 ToL10_RgnDtl_diff_mark[8] = {0};
	UINT32 ToL10_RgnDtl_diff_sum = 0;
	UINT32 ToL10_RgnDtl_avg[8] = {0};
	UBYTE ToL10_RgnDtl_avg_cnt = 0, ToL10_RgnDtl_avg_true = 0;

	//======= record pre-
	static UBYTE u6_RP_frm_in_cnt_pre,u6_RP_frm_in_cnt_thl_pre,u8_RP_frm_hold_cnt_pre;
	static UBYTE u1_det_true_pre,u1_det_start_pre,u1_basic_cond_true_pre,u1_mcDtl_move_true_pre,u1_rDTL_move_true_pre,u1_rPRD_move_true_pre,u1_dtl_all_cond_true_pre;
	static UBYTE u2_mcDtl_HV_pre,u2_GMV_single_move_pre;
	static SCHAR u2_rDTL_RMV_cnt_pre = 0,u2_rPRD_RMV_cnt_pre = 0;
	static UINT32 u27_me_aTC_rb_pre;
	static UBYTE   u1_maxGMV_x_t_pre,u1_maxGMV_y_t_pre,u1_secGMV_x_t_pre,u1_secGMV_y_t_pre,u1_GMV32_t_pre,u8_bad_region_cnt_pre;
	static UINT32 u19_me_statis_glb_prd_pre;
	static UINT16 u16_mcHdtl_pre,u16_mcVdtl_pre;
	static UBYTE u11_GMV_x_max_pre,u10_GMV_y_max_pre,u11_GMV_x_sec_pre,u10_GMV_y_sec_pre;
	static UBYTE  u8_rmove_1_cnt_pre= 0, u8_rmove_2_cnt_pre= 0, u8_rmove_3_cnt_pre= 0, u8_rmove_4_cnt_pre = 0,u8_rmove_rgn1_cnt_pre= 0, u8_rmove_rgn2_cnt_pre= 0, u8_rmove_rgn3_cnt_pre= 0, u8_rmove_rgn4_cnt_pre = 0;
	static UINT32 u17_me_ZMV_cnt_rb_pre,u25_me_aDTL_rb_ShiftBit_pre;

	//===================

	UINT32 u32_RB_val;
	ReadRegister(FRC_TOP__PQL_0__pql_patch_dummy_e8_ADDR, 0, 31, &u32_RB_val);   //  bit 9~15

	// gmv
	{
		u1_maxGMV_x_t = (_ABS_(s11_maxGMV_x) <= u8_GMV_th0)? 1 : 0;
		u1_maxGMV_y_t = (_ABS_(s10_maxGMV_y) <= u8_GMV_th0)? 1 : 0;

		u11_GMV_x_max = _ABS_(s11_maxGMV_x);
		u10_GMV_y_max = _ABS_(s10_maxGMV_y);

		if(s_pContext->_output_read_comreg.u17_me_GMV_2nd_cnt_rb>0  && (u1_RP_detect_true_pre == 0) )
		{
			u1_secGMV_x_t = (_ABS_(s11_secGMV_x) <= u8_GMV_th1)? 1 : 0;
			u1_secGMV_y_t = (_ABS_(s10_secGMV_y) <= u8_GMV_th1)? 1 : 0;

			u11_GMV_x_sec = _ABS_(s11_secGMV_x);
			u10_GMV_y_sec = _ABS_(s10_secGMV_y);

			u11_GMV_x_max = _MAX_(u11_GMV_x_max, u11_GMV_x_sec);
			u10_GMV_y_max = _MAX_(u10_GMV_y_max, u10_GMV_y_sec);
		}
		else
		{
			u11_GMV_x_sec = _ABS_(s11_secGMV_x);
			u10_GMV_y_sec = _ABS_(s10_secGMV_y);
			u1_secGMV_x_t = 1;
			u1_secGMV_y_t = 1;
		}

		u1_GMV32_t = 1;

		for (i=0; i<32; i++)
		{
			if((_ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i])>u8_GMV_th2)||(_ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i])>u8_GMV_th2))
			{
				u8_bad_region_cnt++;
				//u1_GMV32_t = 0;
			}

			// rDtl move th1
			if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[i]>u32_rDTL_th_1 && (s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i] || s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i])){
		#if 1
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=12 && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=12 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=0))
					u8_rmove_1_cnt++;
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=(-12) && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=12 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=0))
					u8_rmove_2_cnt++;
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=(-12) && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=(-12) && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=0))
					u8_rmove_3_cnt++;
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=12 && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=(-12) && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=0))
					u8_rmove_4_cnt++;
		#else
				if(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=0 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=0)
					u8_rmove_1_cnt++;
				if(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=0 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=0)
					u8_rmove_2_cnt++;
				if(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=0 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=0)
					u8_rmove_3_cnt++;
				if(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=0 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=0)
					u8_rmove_4_cnt++;
		#endif
			}

		#if 1
			// rDtl move th2
			if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[i]>u32_rDTL_th_2 && (s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]!=0 || s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]!=0)){
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=12 && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=(-12)) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=12 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=(-12)))
					u8_rDTL_RMV_mark[i] = 1;
			}
		#endif

		}
		if(u8_bad_region_cnt > 1)
			u1_GMV32_t = 0;

		u1_gmv_true = (u1_maxGMV_x_t && u1_maxGMV_y_t && u1_secGMV_x_t && u1_secGMV_y_t && u1_GMV32_t)? 1 : 0;
	}

	//gmv sigle move
	if(u11_GMV_x_max > u10_GMV_y_max + u8_GMV_diff)
	{
		u2_GMV_single_move = 2;
	}
	else if(u10_GMV_y_max>u11_GMV_x_max+u8_GMV_diff)
	{
		u2_GMV_single_move = 1;
	}
	else
	{
		u2_GMV_single_move = 0;
	}


	// mcDtl

	if(u19_me_statis_glb_prd >= 0x3d4)
		u8_mcDTL_offset = 3;
	else if(u19_me_statis_glb_prd >= 0x384)
		u8_mcDTL_offset = 2;
	else if(u19_me_statis_glb_prd >= 0x320)
		u8_mcDTL_offset = 1;

	if (((u16_mcHdtl > u16_mcDTL_thmin) && (u16_mcHdtl > u16_mcVdtl * (6-u8_mcDTL_offset))) ||\
		((u16_mcHdtl > u16_mcDTL_th0) && (u16_mcHdtl > u16_mcVdtl * (5-u8_mcDTL_offset))) ||\
		((u16_mcHdtl > u16_mcDTL_th1) && (u16_mcHdtl > u16_mcVdtl * (4-u8_mcDTL_offset))) ||\
		((u16_mcHdtl > u16_mcDTL_th2) && (u16_mcHdtl > u16_mcVdtl * (3-u8_mcDTL_offset))) ||\
		((u16_mcHdtl > u16_mcDTL_th3) && (u16_mcHdtl > u16_mcVdtl * (2-u8_mcDTL_offset))))
	{
		u2_mcDtl_HV = 2;	//vertical lines
	}
	else if(((u16_mcVdtl > u16_mcDTL_thmin) && (u16_mcVdtl > u16_mcHdtl * (6-u8_mcDTL_offset)))||\
		((u16_mcVdtl > u16_mcDTL_th0) && (u16_mcVdtl > u16_mcHdtl * (5-u8_mcDTL_offset)))||\
		((u16_mcVdtl > u16_mcDTL_th1) && (u16_mcVdtl > u16_mcHdtl * (4-u8_mcDTL_offset))) ||\
		((u16_mcVdtl > u16_mcDTL_th2) && (u16_mcVdtl > u16_mcHdtl * (3-u8_mcDTL_offset))) ||\
		((u16_mcVdtl > u16_mcDTL_th3) && (u16_mcVdtl > u16_mcHdtl * (2-u8_mcDTL_offset))))

	{
		u2_mcDtl_HV = 1;	//horizantal lines
	}
	else
	{
		u2_mcDtl_HV = 0;
	}

	//mcDtl move
	if(((u2_mcDtl_HV==2)&&(u2_GMV_single_move !=1))||((u2_mcDtl_HV==1)&&(u2_GMV_single_move !=2)))
	{
		u1_mcDtl_move_true = 1;
	}
	else
	{
		u1_mcDtl_move_true = 0;
	}

#if 1
	//rgn rDtl move
	u8_rmove_rgn1_cnt = u8_rDTL_RMV_mark[0] + u8_rDTL_RMV_mark[1] + u8_rDTL_RMV_mark[8] + u8_rDTL_RMV_mark[9] + u8_rDTL_RMV_mark[16] + u8_rDTL_RMV_mark[17] + u8_rDTL_RMV_mark[24] + u8_rDTL_RMV_mark[25];
	u8_rmove_rgn2_cnt = u8_rDTL_RMV_mark[2] + u8_rDTL_RMV_mark[3] + u8_rDTL_RMV_mark[10] + u8_rDTL_RMV_mark[11] + u8_rDTL_RMV_mark[18] + u8_rDTL_RMV_mark[19] + u8_rDTL_RMV_mark[26] + u8_rDTL_RMV_mark[27];
	u8_rmove_rgn3_cnt = u8_rDTL_RMV_mark[4] + u8_rDTL_RMV_mark[5] + u8_rDTL_RMV_mark[12] + u8_rDTL_RMV_mark[13] + u8_rDTL_RMV_mark[20] + u8_rDTL_RMV_mark[21] + u8_rDTL_RMV_mark[28] + u8_rDTL_RMV_mark[29];
	u8_rmove_rgn4_cnt = u8_rDTL_RMV_mark[6] + u8_rDTL_RMV_mark[7] + u8_rDTL_RMV_mark[14] + u8_rDTL_RMV_mark[15] + u8_rDTL_RMV_mark[22] + u8_rDTL_RMV_mark[23] + u8_rDTL_RMV_mark[30] + u8_rDTL_RMV_mark[31];

	if((u8_rmove_1_cnt+u8_rmove_2_cnt)>u8_rmove_cnt_th || (u8_rmove_2_cnt+u8_rmove_3_cnt)>u8_rmove_cnt_th || (u8_rmove_3_cnt+u8_rmove_4_cnt)>u8_rmove_cnt_th || (u8_rmove_4_cnt+u8_rmove_1_cnt)>u8_rmove_cnt_th){
		u2_rDTL_RMV_cnt++;
	}
	else if(u8_rmove_rgn1_cnt>1 || u8_rmove_rgn2_cnt>1 || u8_rmove_rgn3_cnt>1 || u8_rmove_rgn4_cnt>1){
		u2_rDTL_RMV_cnt++;
	}
	else{
		u2_rDTL_RMV_cnt--;
	}

	if(u2_rDTL_RMV_cnt>5) u2_rDTL_RMV_cnt = 5;
	if(u2_rDTL_RMV_cnt<0) u2_rDTL_RMV_cnt = 0;

	if(u2_rDTL_RMV_cnt>0){
		u1_rDTL_move_true = 1;
		//u1_gmv_true = 1; // ignore gmv
		u8_black_sc_cnt = u8_black_sc_cnt_th; //quick start
	}
	else{
		u1_rDTL_move_true = 0;
	}
#endif


#if 1    //rgn rPRD move
	u8_rmove_1_cnt= 0; u8_rmove_2_cnt= 0; u8_rmove_3_cnt= 0; u8_rmove_4_cnt = 0;
	for (i=0; i<32; i++)
	{
		// rDtl move th1
		if(s_pContext->_output_read_comreg.u13_me_rPRD_rb[i]>u32_rPRD_th_1 && (s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i] || s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i])){
			if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=12 && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=12 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=0))
				u8_rmove_1_cnt++;
			if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=(-12) && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=12 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=0))
				u8_rmove_2_cnt++;
			if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=(-12) && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=(-12) && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=0))
				u8_rmove_3_cnt++;
			if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=12 && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=(-12) && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=0))
				u8_rmove_4_cnt++;
		}
	#if 1
		// rPRD move th2
		if(s_pContext->_output_read_comreg.u13_me_rPRD_rb[i]>u32_rPRD_th_2 && (s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]!=0 || s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]!=0)){
			if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=12 && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=(-12)) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=12 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=(-12)))
				u8_rPRD_RMV_mark[i] = 1;
		}
	#endif

	}

	//rgn rPRD move
	u8_rmove_rgn1_cnt = u8_rPRD_RMV_mark[0] + u8_rPRD_RMV_mark[1] + u8_rPRD_RMV_mark[8] + u8_rPRD_RMV_mark[9] + u8_rPRD_RMV_mark[16] + u8_rPRD_RMV_mark[17] + u8_rPRD_RMV_mark[24] + u8_rPRD_RMV_mark[25];
	u8_rmove_rgn2_cnt = u8_rPRD_RMV_mark[2] + u8_rPRD_RMV_mark[3] + u8_rPRD_RMV_mark[10] + u8_rPRD_RMV_mark[11] + u8_rPRD_RMV_mark[18] + u8_rPRD_RMV_mark[19] + u8_rPRD_RMV_mark[26] + u8_rPRD_RMV_mark[27];
	u8_rmove_rgn3_cnt = u8_rPRD_RMV_mark[4] + u8_rPRD_RMV_mark[5] + u8_rPRD_RMV_mark[12] + u8_rPRD_RMV_mark[13] + u8_rPRD_RMV_mark[20] + u8_rPRD_RMV_mark[21] + u8_rPRD_RMV_mark[28] + u8_rPRD_RMV_mark[29];
	u8_rmove_rgn4_cnt = u8_rPRD_RMV_mark[6] + u8_rPRD_RMV_mark[7] + u8_rPRD_RMV_mark[14] + u8_rPRD_RMV_mark[15] + u8_rPRD_RMV_mark[22] + u8_rPRD_RMV_mark[23] + u8_rPRD_RMV_mark[30] + u8_rPRD_RMV_mark[31];

	if((u8_rmove_1_cnt+u8_rmove_2_cnt)>u8_rmove_cnt_th || (u8_rmove_2_cnt+u8_rmove_3_cnt)>u8_rmove_cnt_th || (u8_rmove_3_cnt+u8_rmove_4_cnt)>u8_rmove_cnt_th || (u8_rmove_4_cnt+u8_rmove_1_cnt)>u8_rmove_cnt_th){
		u2_rPRD_RMV_cnt++;
	}
	else if(u8_rmove_rgn1_cnt>1 || u8_rmove_rgn2_cnt>1 || u8_rmove_rgn3_cnt>1 || u8_rmove_rgn4_cnt>1){
		u2_rPRD_RMV_cnt++;
	}
	else{
		u2_rPRD_RMV_cnt--;
	}

	if(u2_rPRD_RMV_cnt>5) u2_rPRD_RMV_cnt = 5;
	if(u2_rPRD_RMV_cnt<0) u2_rPRD_RMV_cnt = 0;

	if(u2_rPRD_RMV_cnt>0){
		u1_rPRD_move_true = 1;
		//u8_black_sc_cnt = u8_black_sc_cnt_th; //quick start
	}
	else{
		u1_rPRD_move_true = 0;
	}
#endif

	//black pattern&sc but not static
	u1_black_sc = ((u16_mcHdtl==0)&&(u16_mcVdtl==0))||((s_pContext->_output_read_comreg.u1_sc_status_rb==1)&&(s_pContext->_output_read_comreg.u17_me_ZMV_cnt_rb<0x6000));

	if(u1_black_sc)	// for after black pattern, img dtl not stable
	{
		u8_black_sc_cnt = 0;
	}
	else
	{
		u8_black_sc_cnt += FRAME_CHANGE_CNT;

		if(u8_black_sc_cnt>60)
		{
			u8_black_sc_cnt = 60;
		}
	}

	if(u8_black_sc_cnt>=60)
	{
		u1_det_start = 1;
	}
	else
	{
		u1_det_start = 0;
	}

	u1_tc_true = s_pContext->_output_read_comreg.u27_me_aTC_rb< u28_tc_th;//0x6000;

	//dtl all

//	if(u16_mcVdtl >u16_mcHdtl && u16_mcVdtl >=0x130 && u16_mcHdtl >=  0xd0 )
//		u8_me_aDTL_ShiftBit =12;
//	else
		u8_me_aDTL_ShiftBit =12;

	u1_dtl_all_cond_true = (u16_mcHdtl>(s_pContext->_output_read_comreg.u25_me_aDTL_rb>>u8_me_aDTL_ShiftBit))||(u16_mcVdtl>(s_pContext->_output_read_comreg.u25_me_aDTL_rb>>u8_me_aDTL_ShiftBit) || (u19_me_statis_glb_prd > 0x100));

	//rim
	//u1_rim_true = (u16_rimUp<0x80);

	// result

	u1_basic_cond_true = u1_gmv_true&&u1_tc_true;//&&u1_rim_true;

	u1_det_true = (u1_det_start&&u1_basic_cond_true && (u1_mcDtl_move_true || u1_rDTL_move_true || u1_rPRD_move_true) &&u1_dtl_all_cond_true) ? 1 : 0;

	if(u1_det_true)
	{
		if( u19_me_statis_glb_prd > 0x200)
			u6_RP_frm_in_cnt =u6_RP_frm_in_cnt+2;
		else
		u6_RP_frm_in_cnt++;

		u6_RP_frm_in_cnt = (u6_RP_frm_in_cnt>8)? 8:u6_RP_frm_in_cnt;
	}
	else
	{
		u6_RP_frm_in_cnt = (u6_RP_frm_in_cnt == 0)? 1:u6_RP_frm_in_cnt;
		u6_RP_frm_in_cnt --;
	}
	if( u19_me_statis_glb_prd > 0x300)
	{
		u6_RP_frm_in_cnt_thl =u6_RP_frm_in_cnt_thl-2;
		u6_RP_frm_in_cnt_thl = (u6_RP_frm_in_cnt_thl<2)? 2:u6_RP_frm_in_cnt_thl;
	}
	else if( u19_me_statis_glb_prd > 0x200)
	{
		u6_RP_frm_in_cnt_thl --;
		u6_RP_frm_in_cnt_thl = (u6_RP_frm_in_cnt_thl<3)? 3:u6_RP_frm_in_cnt_thl;
	}
       else if( u19_me_statis_glb_prd > 0x100)
	{
		u6_RP_frm_in_cnt_thl --;
		u6_RP_frm_in_cnt_thl = (u6_RP_frm_in_cnt_thl<4)? 4:u6_RP_frm_in_cnt_thl;
	}
	else
	{
		u6_RP_frm_in_cnt_thl ++ ;
		u6_RP_frm_in_cnt_thl = (u6_RP_frm_in_cnt_thl>8)? 8:u6_RP_frm_in_cnt_thl;
	}

	if((u1_det_start == 0)||(u1_basic_cond_true==0))		//black or sc, basic condition not match, quit
	{
		u8_RP_frm_hold_cnt = 0;
		u8_RP_frm_hold_cnt_max = 0;
	}
	else if( u19_me_statis_glb_prd >= 0x4e0)
	{
		if(u8_RP_frm_hold_cnt>0)
			u8_RP_frm_hold_cnt =  u16_RP_frm_hold_thl*5;

		u8_RP_frm_hold_cnt_max = u8_RP_frm_hold_cnt;
	}
	else if(u6_RP_frm_in_cnt>=u6_RP_frm_in_cnt_thl)
	{
		u8_RP_frm_hold_cnt += FRAME_CHANGE_CNT;

		u8_RP_frm_hold_cnt = (u8_RP_frm_hold_cnt>u16_RP_frm_hold_thl *3)? u16_RP_frm_hold_thl*3:u8_RP_frm_hold_cnt;			//video end not detect protect

		u8_RP_frm_hold_cnt_max = u8_RP_frm_hold_cnt;
	}
	else if((u8_RP_frm_hold_cnt_max>=u16_RP_frm_hold_thl*2)&&(u8_RP_frm_hold_cnt>FRAME_CHANGE_CNT)\
		&&(pOutput->SIS_MEMC.MEMC_STATUS.u25_rdbk_dtl_all_intervel5_pre>pOutput->SIS_MEMC.MEMC_STATUS.u25_rdbk_dtl_all_intervel5))	//hold only when repeat pattern move dispeared
	{
		u8_RP_frm_hold_cnt -= FRAME_CHANGE_CNT;
	}
	else if((s_pContext->_output_read_comreg.u1_sc_status_rb==1) && (u8_RP_frm_hold_cnt_max>=u16_RP_frm_hold_thl*2)&&(u8_RP_frm_hold_cnt>FRAME_CHANGE_CNT*2)&&u1_basic_cond_true)
	{
		u8_RP_frm_hold_cnt -= FRAME_CHANGE_CNT*2;
	}
	else if((u8_RP_frm_hold_cnt_max>=u16_RP_frm_hold_thl*2)&&(u8_RP_frm_hold_cnt>FRAME_CHANGE_CNT*1)&&u1_basic_cond_true)
	{
		u8_RP_frm_hold_cnt -= FRAME_CHANGE_CNT*1;
	}
	else
	{
		u8_RP_frm_hold_cnt = 0;
		u8_RP_frm_hold_cnt_max = 0;
		u6_RP_frm_in_cnt_thl =8;
	}
	if(u8_RP_frm_hold_cnt>0 ||  (u1_det_true && u6_RP_frm_in_cnt ==8))
	{
		pOutput->u1_RP_detect_true = 1;
		u6_RP_out_print = 1;
	}
	else
	{
		pOutput->u1_RP_detect_true = 0;
		if(u6_RP_out_print == 1)
			u6_RP_out_print =2;
	}


	if(((u32_RB_val >>  9) & 0x01) ==1)
		pOutput->u1_RP_detect_true = 1;
	if(((u32_RB_val >>  10) & 0x01) ==1)
		pOutput->u1_RP_detect_true = 0;


	// Casino_patch : write by fanny @20180619
	casino_gmv_cond = (abs(casino_global_GMV_x) + abs(casino_global_GMV_y) < 12) ;

	casino_region_en[8] = 1;
	casino_region_en[9] = 1;
	casino_region_en[10] = 1;
	casino_region_en[14] = 1;
	casino_region_en[15] = 1;
	casino_region_en[16] = 1;
	casino_region_en[17] = 1;
	casino_region_en[18] = 1;
       casino_region_en[22] = 1;
	casino_region_en[23] = 1;

	for(casino_region_idx = 0; casino_region_idx < 32; casino_region_idx++)
	{
		if(casino_region_en[casino_region_idx])
		{
			casino_dtl_sum += s_pContext->_output_read_comreg.u20_me_rDTL_rb[casino_region_idx];
		}
	}
	casino_dtl_avg_cond = casino_dtl_sum/casino_region_en_sum_cond;
	for(casino_region_idx = 0;casino_region_idx < 32;casino_region_idx++)
		{
		if(casino_region_en[casino_region_idx])
			{
			casino_dtl_var = abs(casino_dtl_avg_cond - s_pContext->_output_read_comreg.u20_me_rDTL_rb[casino_region_idx]);
		       casino_dtl_var_sum += casino_dtl_var;
		}
	}
	casino_dtl_var_avg_cond =  casino_dtl_var_sum/casino_region_en_sum_cond;

	casino_cond = (casino_dtl_avg_cond > 34000 && casino_dtl_var_avg_cond < 12000 && casino_gmv_cond);
	//printk("fanny_test : %d,%d,%d,%d,(%d,%d),\n",casino_dtl_avg_cond,casino_dtl_var_avg_cond,(abs(casino_global_GMV_x) + abs(casino_global_GMV_y)),casino_cond,casino_global_GMV_x,casino_global_GMV_y);
	if(casino_cond)
		casino_frm_cnt++;
	else
		casino_frm_cnt = 0;

	if(casino_frm_cnt >= 5)
		casino_frm_cnt = 5;
	if(casino_frm_cnt <= 0)
		casino_frm_cnt = 0;

	if(casino_frm_cnt >= 5)
		casino_start = 1;
	else
		casino_start = 0;

	if((casino_start == 1) && (casino_frm_hold_cnt == 0)){
		casino_frm_hold_cnt++;
		casino_RP_true = 1;
	}
	else if((casino_frm_hold_cnt > 0) && (casino_frm_hold_cnt <= 48)){
		casino_frm_hold_cnt++;
		casino_RP_true = 1;
	}
	else{
		casino_frm_hold_cnt = 0;
		casino_RP_true = 0;
		casino_start = 0;
	}

	if(casino_start == 0)
		casino_RP_true = 0;

	pOutput->u1_casino_RP_detect_true = casino_cond;

	if(((u32_RB_val >>  11) & 0x01) ==1)
		pOutput->u1_casino_RP_detect_true = 1;
	if(((u32_RB_val >>  12) & 0x01) ==1)
		pOutput->u1_casino_RP_detect_true = 0;

	// Avenger_patch : write by Jerry Wang @ 20161018
	//	6	7
	//	14	15
	//	22	23
	if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[6] >= avenger_th_rht)
		avenger_rgn_mark_rht[0] = 1;
	if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[7] >= avenger_th_rht)
		avenger_rgn_mark_rht[1] = 1;
	if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[14] >= avenger_th_rht)
		avenger_rgn_mark_rht[2] = 1;
	if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[15] >= avenger_th_rht)
		avenger_rgn_mark_rht[3] = 1;
	if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[22] >= avenger_th_rht)
		avenger_rgn_mark_rht[4] = 1;
	if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[23] >= avenger_th_rht)
		avenger_rgn_mark_rht[5] = 1;

	if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[1] <= avenger_th_lft)
		avenger_rgn_mark_lft[0] = 1;
	if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[9] <= avenger_th_lft)
		avenger_rgn_mark_lft[1] = 1;
	if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[17] <= avenger_th_lft)
		avenger_rgn_mark_lft[2] = 1;
	if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[25] <= avenger_th_lft)
		avenger_rgn_mark_lft[3] = 1;


	// col1		col6 col7
	//	0		0	1
	//	1		2	3
	//	2		4	5
	//	3

	// 20161202 robin: for prevent sonycam to fall into this patch (Q-10035)
	avenger_rgn_cnt_col1 = avenger_rgn_mark_lft[0] + avenger_rgn_mark_lft[1] + avenger_rgn_mark_lft[2] + avenger_rgn_mark_lft[3];

	avenger_rgn_cnt_col6 = avenger_rgn_mark_rht[0] + avenger_rgn_mark_rht[2] + avenger_rgn_mark_rht[4];
	avenger_rgn_cnt_col7 = avenger_rgn_mark_rht[1] + avenger_rgn_mark_rht[3] + avenger_rgn_mark_rht[5];

	if((avenger_rgn_cnt_col1 >= 2) && ((avenger_rgn_cnt_col6 <= 2 && avenger_rgn_cnt_col7 >= 2) || (avenger_rgn_cnt_col6 >= 2 && avenger_rgn_cnt_col7 <= 2))){
		avenger_frm_cnt++;
	}
	else{
		avenger_frm_cnt = 0;
	}

	if(avenger_frm_cnt >= 5)
		avenger_frm_cnt = 5;
	if(avenger_frm_cnt <= 0)
		avenger_frm_cnt = 0;

	if(avenger_frm_cnt >= 5)
		avenger_start = 1;
	else
		avenger_start = 0;

	if((avenger_start == 1) && (avenger_frm_hold_cnt == 0)){
		avenger_frm_hold_cnt++;
		avenger_RP_true = 1;
	}
	else if((avenger_frm_hold_cnt > 0) && (avenger_frm_hold_cnt <= 48)){
		avenger_frm_hold_cnt++;
		avenger_RP_true = 1;
	}
	else{
		avenger_frm_hold_cnt = 0;
		avenger_RP_true = 0;
		avenger_start = 0;
	}


	// ToL_10_patch : write by Jerry Wang @ 20161108
	for (i=0; i<32; i++){
		if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[i] > ToL10_th){
			ToL10_rgn_mark[i] = 1;
		}
		else{
			ToL10_rgn_mark[i] = 0;
		}
	}

	if((ToL10_rgn_mark[0]+ToL10_rgn_mark[1]+ToL10_rgn_mark[8]+ToL10_rgn_mark[9]+ToL10_rgn_mark[16]+ToL10_rgn_mark[17]+ToL10_rgn_mark[24]+ToL10_rgn_mark[25]) >= 8){
		ToL10_rgn_cnt_1 = 1;
	}
	else{
		ToL10_rgn_cnt_1 = 0;
	}
	if((ToL10_rgn_mark[1]+ToL10_rgn_mark[2]+ToL10_rgn_mark[9]+ToL10_rgn_mark[10]+ToL10_rgn_mark[17]+ToL10_rgn_mark[18]+ToL10_rgn_mark[25]+ToL10_rgn_mark[26]) >= 8){
		ToL10_rgn_cnt_2 = 1;
	}
	else{
		ToL10_rgn_cnt_2 = 0;
	}
	if((ToL10_rgn_mark[2]+ToL10_rgn_mark[3]+ToL10_rgn_mark[10]+ToL10_rgn_mark[11]+ToL10_rgn_mark[18]+ToL10_rgn_mark[19]+ToL10_rgn_mark[26]+ToL10_rgn_mark[27]) >= 8){
		ToL10_rgn_cnt_3 = 1;
	}
	else{
		ToL10_rgn_cnt_3 = 0;
	}
	if((ToL10_rgn_mark[3]+ToL10_rgn_mark[4]+ToL10_rgn_mark[11]+ToL10_rgn_mark[12]+ToL10_rgn_mark[19]+ToL10_rgn_mark[20]+ToL10_rgn_mark[27]+ToL10_rgn_mark[28]) >= 8){
		ToL10_rgn_cnt_4 = 1;
	}
	else{
		ToL10_rgn_cnt_4 = 0;
	}
	if((ToL10_rgn_mark[4]+ToL10_rgn_mark[5]+ToL10_rgn_mark[12]+ToL10_rgn_mark[13]+ToL10_rgn_mark[20]+ToL10_rgn_mark[21]+ToL10_rgn_mark[28]+ToL10_rgn_mark[29]) >= 8){
		ToL10_rgn_cnt_5 = 1;
	}
	else{
		ToL10_rgn_cnt_5 = 0;
	}
	if((ToL10_rgn_mark[5]+ToL10_rgn_mark[6]+ToL10_rgn_mark[13]+ToL10_rgn_mark[14]+ToL10_rgn_mark[21]+ToL10_rgn_mark[22]+ToL10_rgn_mark[29]+ToL10_rgn_mark[30]) >= 8){
		ToL10_rgn_cnt_6 = 1;
	}
	else{
		ToL10_rgn_cnt_6 = 0;
	}
	if((ToL10_rgn_mark[6]+ToL10_rgn_mark[7]+ToL10_rgn_mark[14]+ToL10_rgn_mark[15]+ToL10_rgn_mark[22]+ToL10_rgn_mark[23]+ToL10_rgn_mark[30]+ToL10_rgn_mark[31]) >= 8){
		ToL10_rgn_cnt_7 = 1;
	}
	else{
		ToL10_rgn_cnt_7 = 0;
	}

	// me_rgnDtl_diff
	for (i = 0; i < 8; i ++){
		ToL10_RgnDtl_diff[0] = _ABS_DIFF_(s_pContext->_output_read_comreg.u20_me_rDTL_rb[0+i], s_pContext->_output_read_comreg.u20_me_rDTL_rb[8+i]);
		ToL10_RgnDtl_diff[1] = _ABS_DIFF_(s_pContext->_output_read_comreg.u20_me_rDTL_rb[8+i], s_pContext->_output_read_comreg.u20_me_rDTL_rb[16+i]);
		ToL10_RgnDtl_diff[2] = _ABS_DIFF_(s_pContext->_output_read_comreg.u20_me_rDTL_rb[16+i], s_pContext->_output_read_comreg.u20_me_rDTL_rb[24+i]);
		ToL10_RgnDtl_diff[3] = _ABS_DIFF_(s_pContext->_output_read_comreg.u20_me_rDTL_rb[8+i], s_pContext->_output_read_comreg.u20_me_rDTL_rb[24+i]);
		ToL10_RgnDtl_diff[4] = _ABS_DIFF_(s_pContext->_output_read_comreg.u20_me_rDTL_rb[0+i], s_pContext->_output_read_comreg.u20_me_rDTL_rb[16+i]);
		ToL10_RgnDtl_diff[5] = _ABS_DIFF_(s_pContext->_output_read_comreg.u20_me_rDTL_rb[0+i], s_pContext->_output_read_comreg.u20_me_rDTL_rb[24+i]);

		if((s_pContext->_output_read_comreg.u20_me_rDTL_rb[0+i] > ToL10_th) && (s_pContext->_output_read_comreg.u20_me_rDTL_rb[8+i] > ToL10_th)
			&& (s_pContext->_output_read_comreg.u20_me_rDTL_rb[16+i] > ToL10_th) && (s_pContext->_output_read_comreg.u20_me_rDTL_rb[24+i] > ToL10_th)
			&& (ToL10_RgnDtl_diff[0] < 9000) && (ToL10_RgnDtl_diff[1] < 9000) && (ToL10_RgnDtl_diff[2] < 9000)
			&& (ToL10_RgnDtl_diff[3] < 9000) && (ToL10_RgnDtl_diff[4] < 9000) && (ToL10_RgnDtl_diff[5] < 9000))
		{
			ToL10_RgnDtl_diff_mark[i] = 1;
		}
		ToL10_RgnDtl_diff_sum = ToL10_RgnDtl_diff_sum + ToL10_RgnDtl_diff_mark[i];

		// 20161202 robin: for prevent sonycam to fall into this patch (Q-10035)
		ToL10_RgnDtl_avg[i] = (s_pContext->_output_read_comreg.u20_me_rDTL_rb[0+i] + s_pContext->_output_read_comreg.u20_me_rDTL_rb[8+i]
							+ s_pContext->_output_read_comreg.u20_me_rDTL_rb[16+i] + s_pContext->_output_read_comreg.u20_me_rDTL_rb[24+i]) >> 2;
	}
#if 1

	// 20161202 robin: for prevent sonycam to fall into this patch (Q-10035)
	for (i = 0; i < 8; i ++){
		ToL10_RgnDtl_avg_cnt += (ToL10_RgnDtl_avg[i] > 60000 && ToL10_RgnDtl_avg[i] < 120000) ? 1 : 0;
	}

	ToL10_RgnDtl_avg_true = (ToL10_RgnDtl_avg_cnt > 5) ? 0 : 1;

	if(ToL10_RgnDtl_avg_true && (ToL10_rgn_cnt_1 || ToL10_rgn_cnt_2 || ToL10_rgn_cnt_3 || ToL10_rgn_cnt_4 || ToL10_rgn_cnt_5 || ToL10_rgn_cnt_6 || ToL10_rgn_cnt_7 || ((ToL10_RgnDtl_diff_sum > 0) && (ToL10_RgnDtl_diff_sum < 3)))){
		ToL10_frm_cnt++;
	}
	else{
		ToL10_frm_cnt = 0;
	}

	if(ToL10_frm_cnt >= 10){
		ToL10_frm_cnt = 10;
	}
	if(ToL10_frm_cnt <= 0){
		ToL10_frm_cnt = 0;
	}

	if((ToL10_frm_cnt >= 10) ){
		ToL10_start = 1;
	}
	else{
		ToL10_start = 0;
	}

	if((ToL10_start == 1) && (ToL10_frm_hold_cnt == 0)){
		ToL10_frm_hold_cnt++;
		ToL10_RP_true = 1;
	}
	else if((ToL10_frm_hold_cnt > 0) && (ToL10_frm_hold_cnt <= 60)){
		ToL10_frm_hold_cnt++;
		ToL10_RP_true = 1;
	}
	else{
		ToL10_frm_hold_cnt = 0;
		ToL10_RP_true = 0;
		ToL10_start = 0;
	}

//	if(ToL10_start == 0)
//		ToL10_RP_true = 0;
#else
	if(ToL10_rgn_cnt_1 || ToL10_rgn_cnt_2 || ToL10_rgn_cnt_3 || ToL10_rgn_cnt_4 || ToL10_rgn_cnt_5 || ToL10_rgn_cnt_6 || ToL10_rgn_cnt_7 || ((ToL10_RgnDtl_diff_sum > 0) && (ToL10_RgnDtl_diff_sum < 3))){
		ToL10_RP_true = 1;
	}
	else{
		ToL10_RP_true = 0;
	}
#endif

	pOutput->u1_ToL10_RP_true = ToL10_RP_true;


	//printk("detect=%d, casino=%d, avenger=%d, ToL10=%d\n", pOutput->u1_RP_detect_true, pOutput->u1_casino_RP_detect_true, avenger_RP_true, ToL10_RP_true);

	if(pOutput->u1_RP_detect_true == 0 && avenger_RP_true == 1){
		pOutput->u1_RP_detect_true = 1;
	}
	else	if(pOutput->u1_RP_detect_true == 0 && ToL10_RP_true == 1){
		pOutput->u1_RP_detect_true = 1;
	}
	pOutput->u1_Avenger_RP_detect_true = pParam->u1_RepeatPattern_en && avenger_RP_true;
	pOutput->u1_RP_detect_true = pParam->u1_RepeatPattern_en && pOutput->u1_RP_detect_true;



		#if 1
	if ( (frm_cnt % 10 == 0  && ((u32_RB_val >>  13) & 0x01) ==1 ) || (frm_cnt % 1 == 0  && ((u32_RB_val >>  14) & 0x01) ==1  && (u6_RP_out_print ==2))){
		u6_RP_out_print =0;
		printk(KERN_EMERG"[%d  %d  %d ] [%d %d %d (%d %d %d) %d] [%d %d %d %d %d] [%d %d %d %d %d %d][%d %d %d %d %d %d %d, %d %d %d %d, %d %d %d %d][%d  %d]\n",
			u6_RP_frm_in_cnt,u6_RP_frm_in_cnt_thl,u8_RP_frm_hold_cnt,
			u1_det_true, u1_det_start, u1_basic_cond_true, u1_mcDtl_move_true, u1_rDTL_move_true,u1_rPRD_move_true, u1_dtl_all_cond_true,
			u2_mcDtl_HV, u2_GMV_single_move, u2_rDTL_RMV_cnt, u2_rPRD_RMV_cnt,s_pContext->_output_read_comreg.u27_me_aTC_rb,
			u1_maxGMV_x_t, u1_maxGMV_y_t, u1_secGMV_x_t, u1_secGMV_y_t,u1_GMV32_t, u8_bad_region_cnt,
			u19_me_statis_glb_prd,u16_mcHdtl ,u16_mcVdtl, u11_GMV_x_max, u10_GMV_y_max, u11_GMV_x_sec,u10_GMV_y_sec,u8_rmove_1_cnt, u8_rmove_2_cnt, u8_rmove_3_cnt, u8_rmove_4_cnt, u8_rmove_rgn1_cnt, u8_rmove_rgn2_cnt, u8_rmove_rgn3_cnt, u8_rmove_rgn4_cnt,
			s_pContext->_output_read_comreg.u17_me_ZMV_cnt_rb,(s_pContext->_output_read_comreg.u25_me_aDTL_rb>>u8_me_aDTL_ShiftBit));
			//s_pContext->_output_read_comreg.u22_me_rTC_rb[31], s_pContext->_output_read_comreg.u22_me_rSC_rb[31], s_pContext->_output_read_comreg.u25_me_rSAD_rb[31]);
		#if 1
		printk(KERN_EMERG"\n\r$$$   [(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d)]   $$$\n\r$$$   [(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d)]   $$$\n\r$$$   [(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d)]   $$$\n\r$$$   [(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d)]   $$$\n\r",
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[0], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[0], s_pContext->_output_read_comreg.u20_me_rDTL_rb[0],s_pContext->_output_read_comreg.u13_me_rPRD_rb[0],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[1], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[1], s_pContext->_output_read_comreg.u20_me_rDTL_rb[1],s_pContext->_output_read_comreg.u13_me_rPRD_rb[1],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[2], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[2], s_pContext->_output_read_comreg.u20_me_rDTL_rb[2],s_pContext->_output_read_comreg.u13_me_rPRD_rb[2],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[3], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[3], s_pContext->_output_read_comreg.u20_me_rDTL_rb[3],s_pContext->_output_read_comreg.u13_me_rPRD_rb[3],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[4], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[4], s_pContext->_output_read_comreg.u20_me_rDTL_rb[4],s_pContext->_output_read_comreg.u13_me_rPRD_rb[4],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[5], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[5], s_pContext->_output_read_comreg.u20_me_rDTL_rb[5],s_pContext->_output_read_comreg.u13_me_rPRD_rb[5],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[6], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[6], s_pContext->_output_read_comreg.u20_me_rDTL_rb[6],s_pContext->_output_read_comreg.u13_me_rPRD_rb[6],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[7], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[7], s_pContext->_output_read_comreg.u20_me_rDTL_rb[7],s_pContext->_output_read_comreg.u13_me_rPRD_rb[7],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[8], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[8], s_pContext->_output_read_comreg.u20_me_rDTL_rb[8],s_pContext->_output_read_comreg.u13_me_rPRD_rb[8],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[9], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[9], s_pContext->_output_read_comreg.u20_me_rDTL_rb[9],s_pContext->_output_read_comreg.u13_me_rPRD_rb[9],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[10], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[10], s_pContext->_output_read_comreg.u20_me_rDTL_rb[10],s_pContext->_output_read_comreg.u13_me_rPRD_rb[10],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[11], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[11], s_pContext->_output_read_comreg.u20_me_rDTL_rb[11],s_pContext->_output_read_comreg.u13_me_rPRD_rb[11],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[12], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[12], s_pContext->_output_read_comreg.u20_me_rDTL_rb[12],s_pContext->_output_read_comreg.u13_me_rPRD_rb[12],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[13], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[13], s_pContext->_output_read_comreg.u20_me_rDTL_rb[13],s_pContext->_output_read_comreg.u13_me_rPRD_rb[13],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[14], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[14], s_pContext->_output_read_comreg.u20_me_rDTL_rb[14],s_pContext->_output_read_comreg.u13_me_rPRD_rb[14],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[15], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[15], s_pContext->_output_read_comreg.u20_me_rDTL_rb[15],s_pContext->_output_read_comreg.u13_me_rPRD_rb[15],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[16], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[16], s_pContext->_output_read_comreg.u20_me_rDTL_rb[16],s_pContext->_output_read_comreg.u13_me_rPRD_rb[16],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[17], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[17], s_pContext->_output_read_comreg.u20_me_rDTL_rb[17],s_pContext->_output_read_comreg.u13_me_rPRD_rb[17],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[18], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[18], s_pContext->_output_read_comreg.u20_me_rDTL_rb[18],s_pContext->_output_read_comreg.u13_me_rPRD_rb[18],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[19], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[19], s_pContext->_output_read_comreg.u20_me_rDTL_rb[19],s_pContext->_output_read_comreg.u13_me_rPRD_rb[19],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[20], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[20], s_pContext->_output_read_comreg.u20_me_rDTL_rb[20],s_pContext->_output_read_comreg.u13_me_rPRD_rb[20],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[21], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[21], s_pContext->_output_read_comreg.u20_me_rDTL_rb[21],s_pContext->_output_read_comreg.u13_me_rPRD_rb[21],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[22], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[22], s_pContext->_output_read_comreg.u20_me_rDTL_rb[22],s_pContext->_output_read_comreg.u13_me_rPRD_rb[22],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[23], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[23], s_pContext->_output_read_comreg.u20_me_rDTL_rb[23],s_pContext->_output_read_comreg.u13_me_rPRD_rb[23],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[24], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[24], s_pContext->_output_read_comreg.u20_me_rDTL_rb[24],s_pContext->_output_read_comreg.u13_me_rPRD_rb[24],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[25], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[25], s_pContext->_output_read_comreg.u20_me_rDTL_rb[25],s_pContext->_output_read_comreg.u13_me_rPRD_rb[25],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[26], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[26], s_pContext->_output_read_comreg.u20_me_rDTL_rb[26],s_pContext->_output_read_comreg.u13_me_rPRD_rb[26],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[27], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[27], s_pContext->_output_read_comreg.u20_me_rDTL_rb[27],s_pContext->_output_read_comreg.u13_me_rPRD_rb[27],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[28], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[28], s_pContext->_output_read_comreg.u20_me_rDTL_rb[28],s_pContext->_output_read_comreg.u13_me_rPRD_rb[28],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[29], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[29], s_pContext->_output_read_comreg.u20_me_rDTL_rb[29],s_pContext->_output_read_comreg.u13_me_rPRD_rb[29],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[30], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[30], s_pContext->_output_read_comreg.u20_me_rDTL_rb[30],s_pContext->_output_read_comreg.u13_me_rPRD_rb[30],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[31], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[31], s_pContext->_output_read_comreg.u20_me_rDTL_rb[31],s_pContext->_output_read_comreg.u13_me_rPRD_rb[31]);
		#endif
	}
	else if( ((u32_RB_val >>  15) & 0x01) ==1 && u1_RP_detect_true_pre == 0 &&pOutput->u1_RP_detect_true ==1)
	{
		u6_RP_out_print =0;
		printk(KERN_EMERG"[%d  %d  %d ] [%d %d %d (%d %d %d) %d] [%d %d %d %d %d] [%d %d %d %d %d %d][%d %d %d %d %d %d %d, %d %d %d %d, %d %d %d %d][%d  %d]\n",
			u6_RP_frm_in_cnt_pre,u6_RP_frm_in_cnt_thl_pre,u8_RP_frm_hold_cnt_pre,
			u1_det_true_pre, u1_det_start_pre, u1_basic_cond_true_pre, u1_mcDtl_move_true_pre, u1_rDTL_move_true_pre,u1_rPRD_move_true_pre, u1_dtl_all_cond_true_pre,
			u2_mcDtl_HV_pre, u2_GMV_single_move_pre, u2_rDTL_RMV_cnt_pre, u2_rPRD_RMV_cnt_pre,u27_me_aTC_rb_pre,
			u1_maxGMV_x_t_pre, u1_maxGMV_y_t_pre, u1_secGMV_x_t_pre, u1_secGMV_y_t_pre,u1_GMV32_t_pre, u8_bad_region_cnt_pre,
			u19_me_statis_glb_prd_pre,u16_mcHdtl_pre,u16_mcVdtl_pre, u11_GMV_x_max_pre, u10_GMV_y_max_pre, u11_GMV_x_sec_pre,u10_GMV_y_sec_pre,u8_rmove_1_cnt_pre, u8_rmove_2_cnt_pre, u8_rmove_3_cnt_pre, u8_rmove_4_cnt_pre, u8_rmove_rgn1_cnt_pre, u8_rmove_rgn2_cnt_pre, u8_rmove_rgn3_cnt_pre, u8_rmove_rgn4_cnt_pre,
			u17_me_ZMV_cnt_rb_pre,u25_me_aDTL_rb_ShiftBit_pre);
	}
	#if 0
	// casino
 	if (frm_cnt % 10 == 0){
		printk(KERN_EMERG"$$$   [(%d),\t(%d),\t(%d),\t(%d)]   $$$\n\r", casino_RP_true, casino_rim_t, casino_rgnDtl_diff_t, casino_rgn_cnt);
	}
	// ToL_10
 	if (frm_cnt % 10 == 0){
		printk(KERN_EMERG"$$$   [(%d),\t(%d),\t(%d)]   $$$\n\r$$$   [(%d),\t(%d),\t(%d),\t(%d),\t(%d),\t(%d),\t(%d)]   $$$\n\r$$$   [(%d),\t(%d),\t(%d),\t(%d),\t(%d),\t(%d),\t(%d),\t(%d)]   $$$\n\r",
			ToL10_RP_true, ToL10_frm_hold_cnt, ToL10_RgnDtl_diff_sum,
			ToL10_rgn_cnt_1, ToL10_rgn_cnt_2, ToL10_rgn_cnt_3, ToL10_rgn_cnt_4, ToL10_rgn_cnt_5, ToL10_rgn_cnt_6, ToL10_rgn_cnt_7,
			ToL10_RgnDtl_diff_mark[0], ToL10_RgnDtl_diff_mark[1], ToL10_RgnDtl_diff_mark[2], ToL10_RgnDtl_diff_mark[3], ToL10_RgnDtl_diff_mark[4], ToL10_RgnDtl_diff_mark[5], ToL10_RgnDtl_diff_mark[6], ToL10_RgnDtl_diff_mark[7]);
 	}
	#endif
	#endif
	u1_RP_detect_true_pre = pOutput->u1_RP_detect_true;
	u6_RP_frm_in_cnt_pre = u6_RP_frm_in_cnt;
	u6_RP_frm_in_cnt_thl_pre = u6_RP_frm_in_cnt_thl;
	u8_RP_frm_hold_cnt_pre = u8_RP_frm_hold_cnt;
	u1_det_true_pre = u1_det_true;
	u1_det_start_pre=u1_det_start;
	u1_basic_cond_true_pre= u1_basic_cond_true;
	u1_mcDtl_move_true_pre=u1_mcDtl_move_true;
	u1_rDTL_move_true_pre=u1_rDTL_move_true;
	u1_rPRD_move_true_pre=u1_rPRD_move_true;
	u1_dtl_all_cond_true_pre=u1_dtl_all_cond_true;
	u2_mcDtl_HV_pre=u2_mcDtl_HV;
	u2_GMV_single_move_pre=u2_GMV_single_move;
	u2_rDTL_RMV_cnt_pre=u2_rDTL_RMV_cnt;
	u2_rPRD_RMV_cnt_pre=u2_rPRD_RMV_cnt;
	u27_me_aTC_rb_pre = s_pContext->_output_read_comreg.u27_me_aTC_rb;
	u1_maxGMV_x_t_pre=u1_maxGMV_x_t;
	u1_maxGMV_y_t_pre = u1_maxGMV_y_t;
	u1_secGMV_x_t_pre=u1_secGMV_x_t;
	u1_secGMV_y_t_pre=u1_secGMV_y_t;
	u1_GMV32_t_pre=u1_GMV32_t;
	u8_bad_region_cnt_pre=u8_bad_region_cnt;
	u19_me_statis_glb_prd_pre=u19_me_statis_glb_prd;
	u16_mcHdtl_pre=u16_mcHdtl;
	u16_mcVdtl_pre=u16_mcVdtl;
	u11_GMV_x_max_pre=u11_GMV_x_max;
	u10_GMV_y_max_pre=u10_GMV_y_max;
	u11_GMV_x_sec_pre=u11_GMV_x_sec;
	u10_GMV_y_sec_pre=u10_GMV_y_sec;
	u8_rmove_1_cnt_pre=u8_rmove_1_cnt;
	u8_rmove_2_cnt_pre=u8_rmove_2_cnt;
	u8_rmove_3_cnt_pre=u8_rmove_3_cnt;
	u8_rmove_4_cnt_pre=u8_rmove_4_cnt;
	u8_rmove_rgn1_cnt_pre=u8_rmove_rgn1_cnt;
	u8_rmove_rgn2_cnt_pre=u8_rmove_rgn2_cnt;
	u8_rmove_rgn3_cnt_pre=u8_rmove_rgn3_cnt;
	u8_rmove_rgn4_cnt_pre=u8_rmove_rgn4_cnt;
	u17_me_ZMV_cnt_rb_pre=s_pContext->_output_read_comreg.u17_me_ZMV_cnt_rb;
	u25_me_aDTL_rb_ShiftBit_pre=(s_pContext->_output_read_comreg.u25_me_aDTL_rb>>u8_me_aDTL_ShiftBit);



	frm_cnt ++;
	if (frm_cnt >= 100000) frm_cnt = 0;
}
VOID MEMC_Natural_HighFreq_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 u26_aDTL_rb=s_pContext->_output_read_comreg.u25_me_aDTL_rb;
	UINT32 u32_rDTL_th_1 = 100000,u32_rDTL_th_2 = 75000,u32_aDTL_th_1 = 1500000,u32_rDTL_Square_th_1 = 90000,u32_rDTL_Square_th_2 = 70000,u32_rDTL_Square_sum=0,u32_rDTL_Square_agv=0;
	UBYTE  nIdxX,nIdxY,nSquareIdx,nMap0,nMap1,nMap2,nMap3,nMap4,nMap5;
	UINT32 u32_rDTL[6]={0};
	UBYTE u1_rDTL_true = 0,u1_aDTL_true = 0,u1_rDTL_Square_true = 0,u1_rDTL_SixSquare_true,u1_rDTL_Separate_true;
	static UBYTE  u8_Natural_HighFreq_holdFrm=0;
	UBYTE u8_rDTL_cnt = 0,u8_rDTL_ThreeSquare_cnt= 0,u8_rDTL_ThreeSquare_cnt_thl=20;

	//DBG
	UINT32 u32_RB_u32_rDTL_th_1,u32_RB_u32_aDTL_th_1,u32_RB_u32_rDTL_Square_th_1,u32_RB_u32_rDTL_th_2,u32_RB_u32_rDTL_Square_th_2,u32_RB_u8_rDTL_ThreeSquare_cnt_thl;
	ReadRegister(FRC_TOP__software1__reg_software_09_ADDR, 0, 31, &u32_RB_u32_rDTL_th_1);
	ReadRegister(FRC_TOP__software1__reg_software_10_ADDR, 0, 31, &u32_RB_u32_aDTL_th_1);
	ReadRegister(FRC_TOP__software1__reg_software_11_ADDR, 0, 31, &u32_RB_u32_rDTL_Square_th_1);
	ReadRegister(FRC_TOP__software1__reg_software_17_ADDR, 0, 31, &u32_RB_u32_rDTL_th_2);//u32_rDTL_th_2
	ReadRegister(FRC_TOP__software1__reg_software_18_ADDR, 0, 31, &u32_RB_u32_rDTL_Square_th_2);//u32_rDTL_Square_th_2
	ReadRegister(FRC_TOP__software1__reg_software_19_ADDR, 0, 31, &u32_RB_u8_rDTL_ThreeSquare_cnt_thl);//u8_rDTL_ThreeSquare_cnt_thl
	// ===DBG APPLY
	u32_rDTL_th_1 = u32_RB_u32_rDTL_th_1;
	u32_aDTL_th_1 = u32_RB_u32_aDTL_th_1;
	u32_rDTL_Square_th_1 = u32_RB_u32_rDTL_Square_th_1;
	u32_rDTL_th_2=u32_RB_u32_rDTL_th_2;
	u32_rDTL_Square_th_2=u32_RB_u32_rDTL_Square_th_2;
	u8_rDTL_ThreeSquare_cnt_thl=u32_RB_u8_rDTL_ThreeSquare_cnt_thl;
	//============

	//glb
	u1_aDTL_true = (u26_aDTL_rb>=u32_aDTL_th_1) ? 1:0;

	//Square  dtl
	for (nIdxX=0; nIdxX<=5; nIdxX++)
	{
		for (nIdxY=0; nIdxY<=2; nIdxY++)
		{
			// init
			u32_rDTL_Square_sum = 0;
			nMap0 = nIdxY*8+nIdxX;
			nMap1 = nIdxY*8+nIdxX+1;
			nMap2 = nIdxY*8+nIdxX+2;
			nMap3 = (nIdxY+1)*8+nIdxX;
			nMap4 = (nIdxY+1)*8+nIdxX+1;
			nMap5 = (nIdxY+1)*8+nIdxX+2;

			u32_rDTL[0] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap0];
			u32_rDTL[1] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap1];
			u32_rDTL[2] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap2];
			u32_rDTL[3] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap3];
			u32_rDTL[4] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap4];
			u32_rDTL[5] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap5];

			//Square
			for (nSquareIdx=0; nSquareIdx<=5; nSquareIdx++)
			{
				if(u32_rDTL[nSquareIdx] >=u32_rDTL_th_1)
					u32_rDTL_Square_sum +=u32_rDTL[nSquareIdx];
			}

			u32_rDTL_Square_agv = u32_rDTL_Square_sum/6;

			//check  Six Square
			u1_rDTL_SixSquare_true=(u32_rDTL_Square_agv>=u32_rDTL_Square_th_1)  ?1 :0;
			u1_rDTL_Square_true = u1_rDTL_Square_true || u1_rDTL_SixSquare_true;
		}
	}

	//rgn dtl
	for (nIdxX=0; nIdxX<=31; nIdxX++)
	{
		if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[nIdxX] >=u32_rDTL_th_1)
			u8_rDTL_cnt++;
	}
	//check rDtl
	if(u8_rDTL_cnt >=12)
		u1_rDTL_true=1;

	//Separate rgn dtl
	for (nIdxX=0; nIdxX<=5; nIdxX++)
	{
		for (nIdxY=0; nIdxY<=3; nIdxY++)
		{
			// init
			u32_rDTL_Square_sum = 0;
			nMap0 = nIdxY*8+nIdxX;
			nMap1 = nIdxY*8+nIdxX+1;
			nMap2 = nIdxY*8+nIdxX+2;

			u32_rDTL[0] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap0];
			u32_rDTL[1] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap1];
			u32_rDTL[2] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap2];

			//Square
			for (nSquareIdx=0; nSquareIdx<=2; nSquareIdx++)
			{
				if(u32_rDTL[nSquareIdx] >=u32_rDTL_th_2)
					u32_rDTL_Square_sum +=u32_rDTL[nSquareIdx];
			}

			u32_rDTL_Square_agv = u32_rDTL_Square_sum/3;

			//check  three Square
			if(u32_rDTL_Square_agv>=u32_rDTL_Square_th_2)
				u8_rDTL_ThreeSquare_cnt ++;
		}
	}
	//check Separate rgn dtl
	u1_rDTL_Separate_true = (u8_rDTL_ThreeSquare_cnt>=u8_rDTL_ThreeSquare_cnt_thl)  ?1 :0;
	//all
	pOutput->u1_Natural_HighFreq_detect_true = pParam->u1_Natural_HighFreq_en && u1_aDTL_true && ((u1_rDTL_Square_true&&u1_rDTL_true) || u1_rDTL_Separate_true);

	if(pOutput->u1_Natural_HighFreq_detect_true)
	{
		pOutput->u1_Natural_HighFreq_detect_true =1;
		u8_Natural_HighFreq_holdFrm = 8;
	}
	else if(u8_Natural_HighFreq_holdFrm >0)
	{
		pOutput->u1_Natural_HighFreq_detect_true =1;
		u8_Natural_HighFreq_holdFrm--;
	}
	else
	{
		pOutput->u1_Natural_HighFreq_detect_true =0;
		u8_Natural_HighFreq_holdFrm=0;
	}
}
VOID MEMC_Casino_RP_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//Casino
	static UBYTE casino_frm_cnt = 0;
	static UBYTE casino_frm_hold_cnt = 0;
	UBYTE casino_RP_true;
	static UBYTE casino_start = 0;
	UBYTE casino_region_en[32] = {0};
	UBYTE casino_region_idx;
	UBYTE casino_gmv_cond;
	UINT32 casino_dtl_sum = 0, casino_dtl_avg_cond, casino_dtl_var, casino_dtl_var_sum = 0, casino_dtl_var_avg_cond;
	UBYTE casino_region_en_sum_cond = 10;
	UBYTE casino_cond = 0;
	SINT16 casino_global_GMV_x = s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb;
	SINT16 casino_global_GMV_y = s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb;

	// Casino_patch : write by fanny @20180619
	casino_gmv_cond = (abs(casino_global_GMV_x) + abs(casino_global_GMV_y) < 12) ;

	casino_region_en[8] = 1;
	casino_region_en[9] = 1;
	casino_region_en[10] = 1;
	casino_region_en[14] = 1;
	casino_region_en[15] = 1;
	casino_region_en[16] = 1;
	casino_region_en[17] = 1;
	casino_region_en[18] = 1;
       casino_region_en[22] = 1;
	casino_region_en[23] = 1;

	for(casino_region_idx = 0; casino_region_idx < 32; casino_region_idx++)
	{
		if(casino_region_en[casino_region_idx])
		{
			casino_dtl_sum += s_pContext->_output_read_comreg.u20_me_rDTL_rb[casino_region_idx];
		}
	}
	casino_dtl_avg_cond = casino_dtl_sum/casino_region_en_sum_cond;
	for(casino_region_idx = 0;casino_region_idx < 32;casino_region_idx++)
		{
		if(casino_region_en[casino_region_idx])
			{
			casino_dtl_var = abs(casino_dtl_avg_cond - s_pContext->_output_read_comreg.u20_me_rDTL_rb[casino_region_idx]);
		       casino_dtl_var_sum += casino_dtl_var;
		}
	}
	casino_dtl_var_avg_cond =  casino_dtl_var_sum/casino_region_en_sum_cond;

	casino_cond = (casino_dtl_avg_cond > 80000 && casino_dtl_var_avg_cond < 12000 && casino_gmv_cond);
	//printk("fanny_test : %d,%d,%d,%d,(%d,%d),\n",casino_dtl_avg_cond,casino_dtl_var_avg_cond,(abs(casino_global_GMV_x) + abs(casino_global_GMV_y)),casino_cond,casino_global_GMV_x,casino_global_GMV_y);
	if(casino_cond)
		casino_frm_cnt++;
	else
		casino_frm_cnt = 0;

	if(casino_frm_cnt >= 5)
		casino_frm_cnt = 5;
	if(casino_frm_cnt <= 0)
		casino_frm_cnt = 0;

	if(casino_frm_cnt >= 5)
		casino_start = 1;
	else
		casino_start = 0;

	if((casino_start == 1) && (casino_frm_hold_cnt == 0)){
		casino_frm_hold_cnt++;
		casino_RP_true = 1;
	}
	else if((casino_frm_hold_cnt > 0) && (casino_frm_hold_cnt <= 48)){
		casino_frm_hold_cnt++;
		casino_RP_true = 1;
	}
	else{
		casino_frm_hold_cnt = 0;
		casino_RP_true = 0;
		casino_start = 0;
	}

	if(casino_start == 0)
		casino_RP_true = 0;

	pOutput->u1_casino_RP_detect_true = casino_cond;
}
UBYTE MEMC_RepeatBG_detect(VOID)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 u32_rDTL_th_1 = 30000, u32_rDTL_th_2 = 45000,u32_rDTL_th_3 = 60000,u32_rPRD_th_1 = 150;

	UBYTE  nIdxX,nIdxY,nSquareIdx,nMap0,nMap1,nMap2,nMap3;
	UINT32 u32_rDTL[4]={0};
	UINT32 u32_rPRD[4]={0};
	UINT32 u32_mc_rVHdtl[4]={0};
	UBYTE u1_rDTL_true = 0,u1_rPRD_true = 0,u1_mc_rVHdtl_true = 0;
	UBYTE u1_RepeatBG_true = 0;
	UBYTE u1_SquareRepeat_true = 0;
	UBYTE u8_RepeatBG_cnt = 0;


	SINT32 s32_rMV_x[4]={0};
	SINT32 s32_rMV_y[4]={0};
	UINT32 rMV_diff_true=0, u32_RB_u32_rMV_diff_th=0, u32_rMV_diff_th=20, rMV_diff=0,u32_RB_u32_rMV_th_min=0;
	UINT32 rMV_true=0, u32_RB_u32_rMV_th=0, u32_rMV_th=16, rMV_max=0, rMV_min=0, u32_rMV_th_min=2;
	SINT32 rmv_x_max, rmv_x_min, rmv_y_max, rmv_y_min;

	//DBG
	UINT32 u32_RB_u32_rDTL_th_1,u32_RB_u32_rDTL_th_2,u32_RB_u32_rDTL_th_3,u32_RB_u32_rPRD_th_1;
	ReadRegister(FRC_TOP__software1__reg_software_04_ADDR, 0, 31, &u32_RB_u32_rDTL_th_1);
	ReadRegister(FRC_TOP__software1__reg_software_05_ADDR, 0, 31, &u32_RB_u32_rDTL_th_2);
	ReadRegister(FRC_TOP__software1__reg_software_06_ADDR, 0, 31, &u32_RB_u32_rDTL_th_3);
	ReadRegister(FRC_TOP__software1__reg_software_07_ADDR, 0, 31, &u32_RB_u32_rPRD_th_1);
	ReadRegister(FRC_TOP__software1__reg_software_13_ADDR, 0, 31, &u32_RB_u32_rMV_th_min);
	ReadRegister(FRC_TOP__software1__reg_software_14_ADDR, 0, 31, &u32_RB_u32_rMV_diff_th);
	ReadRegister(FRC_TOP__software1__reg_software_15_ADDR, 0, 31, &u32_RB_u32_rMV_th);
	// ===DBG APPLY
	u32_rDTL_th_1 = u32_RB_u32_rDTL_th_1;
	u32_rDTL_th_2 = u32_RB_u32_rDTL_th_2;
	u32_rDTL_th_3 = u32_RB_u32_rDTL_th_3;
	u32_rPRD_th_1 = u32_RB_u32_rPRD_th_1;
	u32_rMV_diff_th = u32_RB_u32_rMV_diff_th;
	u32_rMV_th=u32_RB_u32_rMV_th;
	u32_rMV_th_min = u32_RB_u32_rMV_th_min;

	//============
	for (nIdxX=0; nIdxX<=6; nIdxX++)
	{
		for (nIdxY=0; nIdxY<=2; nIdxY++)
		{
			// init
			rmv_x_max=-2000000; rmv_x_min=2000000; rmv_y_max=-2000000; rmv_y_min=2000000;

			u1_rDTL_true = 0;u1_rPRD_true = 0;u1_mc_rVHdtl_true = 0;rMV_diff_true=0;rMV_true=0;
			u8_RepeatBG_cnt = 0;
			nMap0 = nIdxY*8+nIdxX;
			nMap1 = nIdxY*8+nIdxX+1;
			nMap2 = (nIdxY+1)*8+nIdxX;
			nMap3 = (nIdxY+1)*8+nIdxX+1;

			u32_rDTL[0] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap0];
			u32_rDTL[1] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap1];
			u32_rDTL[2] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap2];
			u32_rDTL[3] = s_pContext->_output_read_comreg.u20_me_rDTL_rb[nMap3];

			u32_rPRD[0] = s_pContext->_output_read_comreg.u13_me_rPRD_rb[nMap0];
			u32_rPRD[1] = s_pContext->_output_read_comreg.u13_me_rPRD_rb[nMap1];
			u32_rPRD[2] = s_pContext->_output_read_comreg.u13_me_rPRD_rb[nMap2];
			u32_rPRD[3] = s_pContext->_output_read_comreg.u13_me_rPRD_rb[nMap3];

			u32_mc_rVHdtl[0] = s_pContext->_output_read_comreg.u10_mc_VHdtl_rb[nMap0];
			u32_mc_rVHdtl[1] = s_pContext->_output_read_comreg.u10_mc_VHdtl_rb[nMap1];
			u32_mc_rVHdtl[2] = s_pContext->_output_read_comreg.u10_mc_VHdtl_rb[nMap2];
			u32_mc_rVHdtl[3] = s_pContext->_output_read_comreg.u10_mc_VHdtl_rb[nMap3];

			s32_rMV_x[0] = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[nMap0];
			s32_rMV_x[1] = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[nMap1];
			s32_rMV_x[2] = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[nMap2];
			s32_rMV_x[3] = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[nMap3];

			s32_rMV_y[0] = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[nMap0];
			s32_rMV_y[1] = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[nMap1];
			s32_rMV_y[2] = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[nMap2];
			s32_rMV_y[3] = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[nMap3];

			// rDtl
			for (nSquareIdx=0; nSquareIdx<=3; nSquareIdx++)
			{
				if(u32_rDTL[nSquareIdx] >=u32_rDTL_th_3)
					u8_RepeatBG_cnt +=3;
				else if(u32_rDTL[nSquareIdx] >=u32_rDTL_th_2)
					u8_RepeatBG_cnt +=2;
				else if(u32_rDTL[nSquareIdx] >=u32_rDTL_th_1)
					u8_RepeatBG_cnt +=1;
			}

			//check rDtl
			if(u8_RepeatBG_cnt >=8)
				u1_rDTL_true=1;

			//rPRD
			u8_RepeatBG_cnt = 0;
			for (nSquareIdx=0; nSquareIdx<=3; nSquareIdx++)
			{
				if(u32_rPRD[nSquareIdx] >=u32_rPRD_th_1)
					u8_RepeatBG_cnt +=1;
			}
			//check rPRD
			if(u8_RepeatBG_cnt ==4)
				u1_rPRD_true=1;

			// mc_rVHdtl
			u8_RepeatBG_cnt = 0;
			for (nSquareIdx=0; nSquareIdx<=3; nSquareIdx++)
			{
				if(u32_mc_rVHdtl[nSquareIdx] <0x3)
					u8_RepeatBG_cnt +=1;
			}

			//check mc_rVHdtl
			if(u8_RepeatBG_cnt ==4)
				u1_mc_rVHdtl_true=1;


			// rMV diff
			for(nSquareIdx=0; nSquareIdx<=3; nSquareIdx++)
			{
				if(rmv_x_max<s32_rMV_x[nSquareIdx])
					rmv_x_max=s32_rMV_x[nSquareIdx];
				if(rmv_x_min>s32_rMV_x[nSquareIdx])
					rmv_x_min=s32_rMV_x[nSquareIdx];
				if(rmv_y_max<s32_rMV_y[nSquareIdx])
					rmv_y_max=s32_rMV_y[nSquareIdx];
				if(rmv_y_min>s32_rMV_y[nSquareIdx])
					rmv_y_min=s32_rMV_y[nSquareIdx];
			}

			rMV_diff =_MAX_(rmv_x_max-rmv_x_min, rmv_y_max-rmv_y_min);
			rMV_max  =_MAX_(_MAX_(_ABS_(rmv_x_max), _ABS_(rmv_x_min)), _MAX_(_ABS_(rmv_y_max), _ABS_(rmv_y_min)));
			rMV_min	 =_MIN_(_MIN_(_ABS_(rmv_x_max), _ABS_(rmv_x_min)), _MAX_(_ABS_(rmv_y_max), _ABS_(rmv_y_min)));

			if(rMV_diff>u32_rMV_diff_th)
				rMV_diff_true=1;
			else if(rMV_diff && rMV_max<u32_rMV_th && rMV_min>u32_rMV_th_min )
				rMV_true=1;

			//check RepeatBG
			//check RepeatBG
			u1_SquareRepeat_true =  (u1_rDTL_true&&u1_rPRD_true &&u1_mc_rVHdtl_true&&(rMV_true || rMV_diff_true))  ? 1 : 0;
			u1_RepeatBG_true =  (u1_SquareRepeat_true||u1_RepeatBG_true) ? 1 : 0;
			WriteRegister(FRC_TOP__software1__reg_software_20_ADDR, nMap0, nMap0, u1_SquareRepeat_true);
		}
	}
	return u1_RepeatBG_true;
}
UBYTE MEMC_BlackSC_detect(VOID)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u1_black_sc=0;		//black scene or sc occur
	static UBYTE u8_black_sc_cnt = 0;
	UINT16 u16_mcHdtl = s_pContext->_output_read_comreg.u16_mc_Hdtl_cnt;
	UINT16 u16_mcVdtl = s_pContext->_output_read_comreg.u16_mc_Vdtl_cnt;

	//black pattern&sc but not static
	u1_black_sc = ((u16_mcHdtl==0)&&(u16_mcVdtl==0))||((s_pContext->_output_read_comreg.u1_sc_status_rb==1)&&(s_pContext->_output_read_comreg.u17_me_ZMV_cnt_rb<0x6000));

	if(u1_black_sc)	// for after black pattern, img dtl not stable
	{
		u8_black_sc_cnt = 0;
	}
	else
	{
		u8_black_sc_cnt += FRAME_CHANGE_CNT;

		if(u8_black_sc_cnt>60)
		{
			u8_black_sc_cnt = 60;
		}
	}
	return u8_black_sc_cnt;
}
UBYTE MEMC_RMV_Consistent_detect(VOID)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	SINT16 s11_maxGMV_x = (s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb)>>1;
	SINT16 s10_maxGMV_y = (s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb)>>1;
	UINT32 u32_i = 0, u32_rmv_cnt_sum = 0, u32_cnt = 0, rmv_cnt_avg = 0;
	UBYTE u1_rmv_consistent_true = 0;
	UINT32 u32_rmv_cnt_avg_th=890;
	ReadRegister(FRC_TOP__software1__reg_software_16_ADDR, 0, 31, &u32_rmv_cnt_avg_th);
	for (u32_i = 0; u32_i < 32; u32_i ++)
	{
		if(s_pContext->_output_read_comreg.u12_me_rMV_1st_unconf_rb[u32_i]<2 && _ABS_(s11_maxGMV_x-(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[u32_i]>>1)) < 2 && _ABS_(s10_maxGMV_y-(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[u32_i]>>1)) < 2 &&( s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[u32_i]!=0 || s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[u32_i] !=0))
		{
			u32_rmv_cnt_sum += s_pContext->_output_read_comreg.u12_me_rMV_1st_cnt_rb[u32_i];
			u32_cnt++;
		}
	}

	if(u32_cnt)
	{
		rmv_cnt_avg = u32_rmv_cnt_sum/32;

		if(rmv_cnt_avg >= u32_rmv_cnt_avg_th)
			u1_rmv_consistent_true = 1;
		else
			u1_rmv_consistent_true = 0;
	}
	return u1_rmv_consistent_true;
}
UBYTE MEMC_GMV_detect(UBYTE * u11_GMV_x_max_rb,UBYTE *u10_GMV_y_max_rb)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u1_gmv_true = 1;
	UBYTE u1_maxGMV_x_t;
	UBYTE u1_secGMV_x_t;
	UBYTE u1_maxGMV_y_t;
	UBYTE u1_secGMV_y_t;
	UBYTE u11_GMV_x_max=0;
	UBYTE u10_GMV_y_max=0;
	UBYTE u11_GMV_x_sec=0;
	UBYTE u10_GMV_y_sec=0;
	UBYTE u8_GMV_th0 = 0xA;//0x96;
	UBYTE u8_GMV_th1 =0x18;//0x96;
	SINT16 s11_maxGMV_x = (s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb)>>2;
	SINT16 s11_secGMV_x = (s_pContext->_output_read_comreg.s11_me_GMV_2nd_vx_rb)>>2;
	SINT16 s10_maxGMV_y = (s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb)>>2;
	SINT16 s10_secGMV_y = (s_pContext->_output_read_comreg.s10_me_GMV_2nd_vy_rb)>>2;

	u1_maxGMV_x_t = (_ABS_(s11_maxGMV_x) <= u8_GMV_th0)? 1 : 0;
	u1_maxGMV_y_t = (_ABS_(s10_maxGMV_y) <= u8_GMV_th0)? 1 : 0;

	u11_GMV_x_max = _ABS_(s11_maxGMV_x);
	u10_GMV_y_max = _ABS_(s10_maxGMV_y);

	if(s_pContext->_output_read_comreg.u17_me_GMV_2nd_cnt_rb>0 )
	{
		u1_secGMV_x_t = (_ABS_(s11_secGMV_x) <= u8_GMV_th1)? 1 : 0;
		u1_secGMV_y_t = (_ABS_(s10_secGMV_y) <= u8_GMV_th1)? 1 : 0;

		u11_GMV_x_sec = _ABS_(s11_secGMV_x);
		u10_GMV_y_sec = _ABS_(s10_secGMV_y);

		u11_GMV_x_max = _MAX_(u11_GMV_x_max, u11_GMV_x_sec);
		u10_GMV_y_max = _MAX_(u10_GMV_y_max, u10_GMV_y_sec);
	}
	else
	{
		u11_GMV_x_sec = _ABS_(s11_secGMV_x);
		u10_GMV_y_sec = _ABS_(s10_secGMV_y);
		u1_secGMV_x_t = 1;
		u1_secGMV_y_t = 1;
	}
	*u11_GMV_x_max_rb=u11_GMV_x_max;
	*u10_GMV_y_max_rb=u10_GMV_y_max;


	u1_gmv_true = (u1_maxGMV_x_t && u1_maxGMV_y_t && u1_secGMV_x_t && u1_secGMV_y_t )? 1 : 0;

	return u1_gmv_true;
}

UBYTE MEMC_RGNDtlPRD_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	int i,j;
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//UINT32 u32_rPRD_th = 100, u32_rDTL_th = 50000;
	UINT32 u32_rPRD_th_2 = 500, u32_rDTL_th_2 = 95000, u32_gDTL_Step_th = 850;//u32_rDTL_th_2 = 80000, u32_gDTL_Step_th = 500;
	//static SCHAR u2_rDtlPRD_RMV_cnt = 0;
	//UBYTE u8_rmove_rgnDtlPRD_H_cnt[4]= {0}, u8_rmove_rgnDtlPRD_V_cnt[8]= {0};
	//UBYTE u8_rDtlPRD_RMV_mark[32] = {0};
	UINT32 u32_gDTL_Step_check = 0;
	UBYTE u8_rDtl_N2H_mark[28] = {0},u8_rPRD_N2H_mark[28] = {0};
	UBYTE u8_rgnDtlPRD_N4V_cnt[7]= {0},u8_rgnDtlPRD_N4by2_cnt[12]= {0};
	SINT16  s16_rgnDtlPRD_N4V_mark_cnt= 0,s16_rgnDtlPRD_N4by2_mark_cnt= 0;
	static SINT16 s16_rDtlPRD_RMV_cnt = 0;
	UINT32 sum_me_rPRD_rb = 0;
	static SINT16 s16_rDtlPRD_RMV_th_cnt = 0;
	//UBYTE u1_RGNDtlPRD_level = 1;
	//SINT16 s11_maxGMV_x = (s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb)>>2;
	//SINT16 s11_secGMV_x = (s_pContext->_output_read_comreg.s11_me_GMV_2nd_vx_rb)>>2;
	//SINT16 s10_maxGMV_y = (s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb)>>2;
	//SINT16 s10_secGMV_y = (s_pContext->_output_read_comreg.s10_me_GMV_2nd_vy_rb)>>2;

	//if(((s11_maxGMV_x+s10_maxGMV_y)==0) && ((s11_secGMV_x+s10_secGMV_y)==0)){
	//u32_rPRD_th_2 = u32_rPRD_th_2+900;
		//s16_rDtlPRD_RMV_th_cnt = 3;
	//}
	UINT32 u32_RB_val;
	ReadRegister(FRC_TOP__PQL_0__pql_patch_dummy_e8_ADDR, 0, 31, &u32_RB_val);

	if(s_pContext->_output_frc_sceneAnalysis.u1_still_frame || s_pContext->_external_info.u1_VIP_Still){// add th for PRD and DTL th of still frame when still image 
		//u32_rPRD_th_2 = u32_rPRD_th_2+900;
		u32_rPRD_th_2 = u32_rPRD_th_2+700;
		u32_rDTL_th_2 = u32_rDTL_th_2+60000;
		s16_rDtlPRD_RMV_th_cnt = 5;

	}
	
	if(s16_rDtlPRD_RMV_th_cnt>0){
		u32_rPRD_th_2 = u32_rPRD_th_2+900;
		u32_rDTL_th_2 = u32_rDTL_th_2+50000;
		//u32_rDTL_th_2 = u32_rDTL_th_2+60000;
		s16_rDtlPRD_RMV_th_cnt--;
	}
	
	if(s16_rDtlPRD_RMV_th_cnt<0) s16_rDtlPRD_RMV_th_cnt = 0;

#if 0
	for (i=0; i<32; i++){
		// rDtlPRD move check
		if( (s_pContext->_output_read_comreg.u20_me_rDTL_rb[i]>u32_rDTL_th)
			&& (s_pContext->_output_read_comreg.u13_me_rPRD_rb[i]>u32_rPRD_th)
			&& (s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]!=0 || s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]!=0)
			/*&& ( _ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i])<=12 || _ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i])<=12)*/){
				u8_rDtlPRD_RMV_mark[i] = 1;
		}

		if(u8_rDtlPRD_RMV_mark[i] == 1 )
			u2_rDtlPRD_RMV_cnt++;
		else
			u2_rDtlPRD_RMV_cnt--;

	}

	for (i=0; i<4; i++){
		u8_rmove_rgnDtlPRD_H_cnt[i] = u8_rDtlPRD_RMV_mark[i*8] + u8_rDtlPRD_RMV_mark[i*8+1] + u8_rDtlPRD_RMV_mark[i*8+2] + u8_rDtlPRD_RMV_mark[i*8+3]
										+ u8_rDtlPRD_RMV_mark[i*8+4]+ u8_rDtlPRD_RMV_mark[i*8+5]+ u8_rDtlPRD_RMV_mark[i*8+6]+ u8_rDtlPRD_RMV_mark[i*8+7];

		if(u8_rmove_rgnDtlPRD_H_cnt[i] >=7 )
			u2_rDtlPRD_RMV_cnt+=15;
		else if(u8_rmove_rgnDtlPRD_H_cnt[i] >= 5 )
			u2_rDtlPRD_RMV_cnt+=10;
		else if(u8_rmove_rgnDtlPRD_H_cnt[i] >= 3)
			u2_rDtlPRD_RMV_cnt+=5;
		else if(u8_rmove_rgnDtlPRD_H_cnt[i] == 0)
			u2_rDtlPRD_RMV_cnt-=5;
	}

	for (i=0; i<8; i++){
		u8_rmove_rgnDtlPRD_V_cnt[i] = u8_rDtlPRD_RMV_mark[i] + u8_rDtlPRD_RMV_mark[i+8] + u8_rDtlPRD_RMV_mark[i+16] + u8_rDtlPRD_RMV_mark[i+24];

		if(u8_rmove_rgnDtlPRD_V_cnt[i] >= 4 )
			u2_rDtlPRD_RMV_cnt+=10;
		else if(u8_rmove_rgnDtlPRD_V_cnt[i] >= 2 )
			u2_rDtlPRD_RMV_cnt+=4;
		else if(u8_rmove_rgnDtlPRD_V_cnt[i] == 0 )
			u2_rDtlPRD_RMV_cnt-=4;
	}
#endif

	for (i=0; i<7; i++){
		for (j=0; j<4; j++){
			sum_me_rPRD_rb = 0;
			
			if((s_pContext->_output_read_comreg.u20_me_rDTL_rb[j*8+i] + s_pContext->_output_read_comreg.u20_me_rDTL_rb[j*8+i+1]) >= u32_rDTL_th_2){
				u8_rDtl_N2H_mark[j*7+i] = 1;
			}else{
				u8_rDtl_N2H_mark[j*7+i] = 0;
			}

			sum_me_rPRD_rb = (s_pContext->_output_read_comreg.u13_me_rPRD_rb[j*8+i])+(s_pContext->_output_read_comreg.u13_me_rPRD_rb[j*8+i+1]);
				
			//if(sum_me_rPRD_rb >=800)
		//		sum_me_rPRD_rb = sum_me_rPRD_rb -800;
		//	else 
		//		sum_me_rPRD_rb = 0;
				
			if( sum_me_rPRD_rb >= u32_rPRD_th_2){
				u8_rPRD_N2H_mark[j*7+i] = 1;
			}else{
				u8_rPRD_N2H_mark[j*7+i] = 0;
			}

#if 0 // debug
			if(((u32_RB_val >>	31) & 0x01) == 1){
				if(u8_rPRD_N2H_mark[j*7+i]==1){
					printk(KERN_EMERG"[MEMC]u8_rPRD_N2H_mark[%d]=%d(%d)(%d) \n",j*7+i,u8_rPRD_N2H_mark[j*7+i],sum_me_rPRD_rb,s_pContext->_output_frc_sceneAnalysis.u1_still_frame);
				}
				
				if(u8_rDtl_N2H_mark[j*7+i] == 1){
					printk(KERN_EMERG"[MEMC]u8_rDtl_N2H_mark[%d]=%d(%d)(%d) \n",j*7+i,u8_rDtl_N2H_mark[j*7+i],(s_pContext->_output_read_comreg.u20_me_rDTL_rb[j*8+i] + s_pContext->_output_read_comreg.u20_me_rDTL_rb[j*8+i+1]),s_pContext->_output_frc_sceneAnalysis.u1_still_frame);
				}
			}
#endif
		}
	}

	for (i=0; i<7; i++){

		u8_rgnDtlPRD_N4V_cnt[i] = (u8_rDtl_N2H_mark[i]+u8_rPRD_N2H_mark[i])+(u8_rDtl_N2H_mark[i+7]+u8_rPRD_N2H_mark[i+7])
									+(u8_rDtl_N2H_mark[i+14]+u8_rPRD_N2H_mark[i+14])+(u8_rDtl_N2H_mark[i+21]+u8_rPRD_N2H_mark[i+21]);


		if(u8_rgnDtlPRD_N4V_cnt[i]>=8)
			s16_rgnDtlPRD_N4V_mark_cnt+=7;
		else if(u8_rgnDtlPRD_N4V_cnt[i]<=3)
			s16_rgnDtlPRD_N4V_mark_cnt--;

	}

#if 1
	for (i=0; i<4; i++){
		for(j=0; j<3; j++){
			u8_rgnDtlPRD_N4by2_cnt[j*4+i] = ((u8_rPRD_N2H_mark[j*7+i]+u8_rPRD_N2H_mark[j*7+i+1]+u8_rPRD_N2H_mark[j*7+i+2]+u8_rPRD_N2H_mark[j*7+i+3])
											+(u8_rPRD_N2H_mark[j*7+7+i]+u8_rPRD_N2H_mark[j*7+7+i+1]+u8_rPRD_N2H_mark[j*7+7+i+2]+u8_rPRD_N2H_mark[j*7+7+i+3]));

			if(u8_rgnDtlPRD_N4by2_cnt[j*4+i]>=7){
				s16_rgnDtlPRD_N4by2_mark_cnt+=7;
			}else if(u8_rgnDtlPRD_N4by2_cnt[j*4+i]<=4){
				s16_rgnDtlPRD_N4by2_mark_cnt--;
			}
		}
	}

	u32_gDTL_Step_check = s_pContext->_external_info.DTL_Step_Hist_sum_ratio[0];

	if(u32_gDTL_Step_check <= u32_gDTL_Step_th)
		s16_rgnDtlPRD_N4by2_mark_cnt = 0;


#else
	for (i=0; i<4; i++){
		for(j=0; j<3; j++){
			u8_rgnDtlPRD_N4by2_cnt[j*4+i] = ((u8_rDtl_N2H_mark[j*7+i]+u8_rDtl_N2H_mark[j*7+i+1]+u8_rDtl_N2H_mark[j*7+i+2]+u8_rDtl_N2H_mark[j*7+i+3])
											+(u8_rDtl_N2H_mark[j*7+7+i]+u8_rDtl_N2H_mark[j*7+7+i+1]+u8_rDtl_N2H_mark[j*7+7+i+2]+u8_rDtl_N2H_mark[j*7+7+i+3]))+
										    ((u8_rPRD_N2H_mark[j*7+i]+u8_rPRD_N2H_mark[j*7+i+1]+u8_rPRD_N2H_mark[j*7+i+2]+u8_rPRD_N2H_mark[j*7+i+3])
											+(u8_rPRD_N2H_mark[j*7+7+i]+u8_rPRD_N2H_mark[j*7+7+i+1]+u8_rPRD_N2H_mark[j*7+7+i+2]+u8_rPRD_N2H_mark[j*7+7+i+3]));

			if(u8_rgnDtlPRD_N4by2_cnt[j*4+i]>=16){
				s16_rgnDtlPRD_N4by2_mark_cnt+=16;
			}else if(u8_rgnDtlPRD_N4by2_cnt[j*4+i]<=14){
				s16_rgnDtlPRD_N4by2_mark_cnt--;
			}
		}
	}
#endif

	if((s16_rgnDtlPRD_N4V_mark_cnt>=1) || s16_rgnDtlPRD_N4by2_mark_cnt>=1)
		s16_rDtlPRD_RMV_cnt++;
	else
		s16_rDtlPRD_RMV_cnt--;

#if 0 // debug
	if(((u32_RB_val >>	31) & 0x01) == 1){

		if(s16_rDtlPRD_RMV_cnt>0){
			printk(KERN_EMERG"[MEMC]DtlPRD_N4V=%d,DtlPRD_N4by2=%d \n",s16_rgnDtlPRD_N4V_mark_cnt,s16_rgnDtlPRD_N4by2_mark_cnt);
			printk(KERN_EMERG"[MEMC]s16_rDtlPRD_RMV_cnt=%d \n",s16_rDtlPRD_RMV_cnt);
		}
	}
#endif

	if(s16_rDtlPRD_RMV_cnt>10) s16_rDtlPRD_RMV_cnt = 10;
	if(s16_rDtlPRD_RMV_cnt<0) s16_rDtlPRD_RMV_cnt = 0;


	return s16_rDtlPRD_RMV_cnt;

}


UBYTE MEMC_RGNDtl_Move_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	int i;
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 u32_rDTL_th_1 = 66000, u32_rDTL_th_2 = 68000,u8_rmove_cnt_th = 1;
	UBYTE u8_GMV_th2 = 0x23;
	static SCHAR u2_rDTL_RMV_cnt = 0;
	UBYTE u8_rDTL_RMV_mark[32] = {0};
	UBYTE u8_rmove_rgn1_cnt= 0, u8_rmove_rgn2_cnt= 0, u8_rmove_rgn3_cnt= 0, u8_rmove_rgn4_cnt = 0;
	UBYTE  u8_rmove_1_cnt= 0, u8_rmove_2_cnt= 0, u8_rmove_3_cnt= 0, u8_rmove_4_cnt = 0,u8_bad_region_cnt = 0;
	UBYTE u1_rDTL_move_true = 1;
	for (i=0; i<32; i++)
		{
			if((_ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i])>u8_GMV_th2)||(_ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i])>u8_GMV_th2))
			{
				u8_bad_region_cnt++;
				//u1_GMV32_t = 0;
			}

			// rDtl move th1
			if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[i]>u32_rDTL_th_1 && (s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i] || s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i])){

				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=8 && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=8 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=0))
					u8_rmove_1_cnt++;
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=(-8) && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=8 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=0))
					u8_rmove_2_cnt++;
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=(-8) && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=(-8) && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=0))
					u8_rmove_3_cnt++;
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=8 && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=(-8) && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=0))
					u8_rmove_4_cnt++;
			}

		#if 1
			// rDtl move th2
			if(s_pContext->_output_read_comreg.u20_me_rDTL_rb[i]>u32_rDTL_th_2 && (s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]!=0 || s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]!=0)){
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=8 && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=(-8)) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=8 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=(-8)))
					u8_rDTL_RMV_mark[i] = 1;
			}
		#endif

		}

	//rgn rDtl move
	u8_rmove_rgn1_cnt = u8_rDTL_RMV_mark[0] + u8_rDTL_RMV_mark[1] + u8_rDTL_RMV_mark[8] + u8_rDTL_RMV_mark[9] + u8_rDTL_RMV_mark[16] + u8_rDTL_RMV_mark[17] + u8_rDTL_RMV_mark[24] + u8_rDTL_RMV_mark[25];
	u8_rmove_rgn2_cnt = u8_rDTL_RMV_mark[2] + u8_rDTL_RMV_mark[3] + u8_rDTL_RMV_mark[10] + u8_rDTL_RMV_mark[11] + u8_rDTL_RMV_mark[18] + u8_rDTL_RMV_mark[19] + u8_rDTL_RMV_mark[26] + u8_rDTL_RMV_mark[27];
	u8_rmove_rgn3_cnt = u8_rDTL_RMV_mark[4] + u8_rDTL_RMV_mark[5] + u8_rDTL_RMV_mark[12] + u8_rDTL_RMV_mark[13] + u8_rDTL_RMV_mark[20] + u8_rDTL_RMV_mark[21] + u8_rDTL_RMV_mark[28] + u8_rDTL_RMV_mark[29];
	u8_rmove_rgn4_cnt = u8_rDTL_RMV_mark[6] + u8_rDTL_RMV_mark[7] + u8_rDTL_RMV_mark[14] + u8_rDTL_RMV_mark[15] + u8_rDTL_RMV_mark[22] + u8_rDTL_RMV_mark[23] + u8_rDTL_RMV_mark[30] + u8_rDTL_RMV_mark[31];

	if((u8_rmove_1_cnt+u8_rmove_2_cnt)>u8_rmove_cnt_th || (u8_rmove_2_cnt+u8_rmove_3_cnt)>u8_rmove_cnt_th || (u8_rmove_3_cnt+u8_rmove_4_cnt)>u8_rmove_cnt_th || (u8_rmove_4_cnt+u8_rmove_1_cnt)>u8_rmove_cnt_th){
		u2_rDTL_RMV_cnt++;
	}
	else if(u8_rmove_rgn1_cnt>=1 || u8_rmove_rgn2_cnt>=1 || u8_rmove_rgn3_cnt>=1 || u8_rmove_rgn4_cnt>=1){
		u2_rDTL_RMV_cnt++;
	}
	else{
		u2_rDTL_RMV_cnt--;
	}

	if(u2_rDTL_RMV_cnt>5) u2_rDTL_RMV_cnt = 5;
	if(u2_rDTL_RMV_cnt<0) u2_rDTL_RMV_cnt = 0;

	if(u2_rDTL_RMV_cnt>0){
		u1_rDTL_move_true = 1;
	}
	else{
		u1_rDTL_move_true = 0;
	}

	return u1_rDTL_move_true;
}

UBYTE MEMC_RGNPRD_Move_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	int i;
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 u32_rPRD_th_1 = 220, u32_rPRD_th_2 = 280,  u8_rmove_cnt_th = 1;
	UBYTE u8_rmove_1_cnt= 0, u8_rmove_2_cnt= 0, u8_rmove_3_cnt= 0, u8_rmove_4_cnt = 0;
	UBYTE u8_rmove_rgn1_cnt= 0, u8_rmove_rgn2_cnt= 0, u8_rmove_rgn3_cnt= 0, u8_rmove_rgn4_cnt = 0;
	UBYTE u8_rPRD_RMV_mark[32] = {0};
	static SCHAR u2_rPRD_RMV_cnt = 0;
	UBYTE u1_rPRD_move_true = 1;
    //rgn rPRD move
		u8_rmove_1_cnt= 0; u8_rmove_2_cnt= 0; u8_rmove_3_cnt= 0; u8_rmove_4_cnt = 0;
		for (i=0; i<32; i++)
		{
			// rDtl move th1
			if(s_pContext->_output_read_comreg.u13_me_rPRD_rb[i]>u32_rPRD_th_1 && (s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i] || s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i])){
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=8 && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=8 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=0))
					u8_rmove_1_cnt++;
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=(-8) && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=8 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=0))
					u8_rmove_2_cnt++;
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=(-8) && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=(-8) && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=0))
					u8_rmove_3_cnt++;
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=8 && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=0) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=(-8) && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=0))
					u8_rmove_4_cnt++;
			}
	#if 1
			// rPRD move th2
			if(s_pContext->_output_read_comreg.u13_me_rPRD_rb[i]>u32_rPRD_th_2 && (s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]!=0 || s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]!=0)){
				if((s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]<=8 && s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]>=(-8)) && (s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]<=8 && s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]>=(-8)))
					u8_rPRD_RMV_mark[i] = 1;
			}
	#endif

		}

		//rgn rPRD move
		u8_rmove_rgn1_cnt = u8_rPRD_RMV_mark[0] + u8_rPRD_RMV_mark[1] + u8_rPRD_RMV_mark[8] + u8_rPRD_RMV_mark[9] + u8_rPRD_RMV_mark[16] + u8_rPRD_RMV_mark[17] + u8_rPRD_RMV_mark[24] + u8_rPRD_RMV_mark[25];
		u8_rmove_rgn2_cnt = u8_rPRD_RMV_mark[2] + u8_rPRD_RMV_mark[3] + u8_rPRD_RMV_mark[10] + u8_rPRD_RMV_mark[11] + u8_rPRD_RMV_mark[18] + u8_rPRD_RMV_mark[19] + u8_rPRD_RMV_mark[26] + u8_rPRD_RMV_mark[27];
		u8_rmove_rgn3_cnt = u8_rPRD_RMV_mark[4] + u8_rPRD_RMV_mark[5] + u8_rPRD_RMV_mark[12] + u8_rPRD_RMV_mark[13] + u8_rPRD_RMV_mark[20] + u8_rPRD_RMV_mark[21] + u8_rPRD_RMV_mark[28] + u8_rPRD_RMV_mark[29];
		u8_rmove_rgn4_cnt = u8_rPRD_RMV_mark[6] + u8_rPRD_RMV_mark[7] + u8_rPRD_RMV_mark[14] + u8_rPRD_RMV_mark[15] + u8_rPRD_RMV_mark[22] + u8_rPRD_RMV_mark[23] + u8_rPRD_RMV_mark[30] + u8_rPRD_RMV_mark[31];

		if((u8_rmove_1_cnt+u8_rmove_2_cnt)>u8_rmove_cnt_th || (u8_rmove_2_cnt+u8_rmove_3_cnt)>u8_rmove_cnt_th || (u8_rmove_3_cnt+u8_rmove_4_cnt)>u8_rmove_cnt_th || (u8_rmove_4_cnt+u8_rmove_1_cnt)>u8_rmove_cnt_th){
			u2_rPRD_RMV_cnt++;
		}
		else if(u8_rmove_rgn1_cnt>=1 || u8_rmove_rgn2_cnt>=1 || u8_rmove_rgn3_cnt>=1 || u8_rmove_rgn4_cnt>=1){
			u2_rPRD_RMV_cnt++;
		}
		else{
			u2_rPRD_RMV_cnt--;
		}

		if(u2_rPRD_RMV_cnt>5) u2_rPRD_RMV_cnt = 5;
		if(u2_rPRD_RMV_cnt<0) u2_rPRD_RMV_cnt = 0;

		if(u2_rPRD_RMV_cnt>0){
			u1_rPRD_move_true = 1;
			//u8_black_sc_cnt = u8_black_sc_cnt_th; //quick start
		}
		else{
			u1_rPRD_move_true = 0;
		}

	return u1_rPRD_move_true;
}

UBYTE MEMC_HVDtl_Move_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u2_mcDtl_HV;	// 0: dtl small, 1: v dtl, 2: h dtl
	UBYTE u2_GMV_single_move;	// 0: similar, 1:y, 2:x
	UBYTE u1_mcDtl_move_true;
	UBYTE u8_GMV_diff = 0x6;
	UBYTE u11_GMV_x_max=0;
	UBYTE u10_GMV_y_max=0;

	UINT16 u16_mcDTL_thmin = 0x180;
	UINT16 u16_mcDTL_th0 = 0x230;
	UINT16 u16_mcDTL_th1 = 0x340;
	UINT16 u16_mcDTL_th2 = 0x3d0;
	UINT16 u16_mcDTL_th3 = 0x400;
	UINT16 u16_mcHdtl = s_pContext->_output_read_comreg.u16_mc_Hdtl_cnt;
	UINT16 u16_mcVdtl = s_pContext->_output_read_comreg.u16_mc_Vdtl_cnt;


	// GMV
	MEMC_GMV_detect(&u11_GMV_x_max,&u10_GMV_y_max);
	//======== mcDtl
	//gmv sigle move
	if(u11_GMV_x_max > u10_GMV_y_max + u8_GMV_diff)
	{
		u2_GMV_single_move = 2;
	}
	else if(u10_GMV_y_max>u11_GMV_x_max+u8_GMV_diff)
	{
		u2_GMV_single_move = 1;
	}
	else
	{
		u2_GMV_single_move = 0;
	}

	if (((u16_mcHdtl > u16_mcDTL_thmin) && (u16_mcHdtl > u16_mcVdtl * (6))) ||\
		((u16_mcHdtl > u16_mcDTL_th0) && (u16_mcHdtl > u16_mcVdtl * (5))) ||\
		((u16_mcHdtl > u16_mcDTL_th1) && (u16_mcHdtl > u16_mcVdtl * (4))) ||\
		((u16_mcHdtl > u16_mcDTL_th2) && (u16_mcHdtl > u16_mcVdtl * (3))) ||\
		((u16_mcHdtl > u16_mcDTL_th3) && (u16_mcHdtl > u16_mcVdtl * (2))))
	{
		u2_mcDtl_HV = 2;	//vertical lines
	}
	else if(((u16_mcVdtl > u16_mcDTL_thmin) && (u16_mcVdtl > u16_mcHdtl * (6)))||\
		((u16_mcVdtl > u16_mcDTL_th0) && (u16_mcVdtl > u16_mcHdtl * (5)))||\
		((u16_mcVdtl > u16_mcDTL_th1) && (u16_mcVdtl > u16_mcHdtl * (4))) ||\
		((u16_mcVdtl > u16_mcDTL_th2) && (u16_mcVdtl > u16_mcHdtl * (3))) ||\
		((u16_mcVdtl > u16_mcDTL_th3) && (u16_mcVdtl > u16_mcHdtl * (2))))
	{
		u2_mcDtl_HV = 1;	//horizantal lines
	}
	else
	{
		u2_mcDtl_HV = 0;
	}

	//mcDtl move
	if(((u2_mcDtl_HV==2)&&(u2_GMV_single_move !=1))||((u2_mcDtl_HV==1)&&(u2_GMV_single_move !=2)))
	{
		u1_mcDtl_move_true = 1;
	}
	else
	{
		u1_mcDtl_move_true = 0;
	}
	//=============

	pOutput->u2_GMV_single_move = u2_GMV_single_move;
	pOutput->u2_mcDtl_HV = u2_mcDtl_HV;

	return u1_mcDtl_move_true;
}
VOID MEMC_Periodic_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	static UBYTE u6_RP_out_print = 0;
	static UBYTE u6_RP_frm_in_cnt = 0;
	static UBYTE u6_RP_frm_in_cnt_thl = 8;
	static UBYTE u8_RP_frm_hold_cnt = 0;
	static UBYTE u8_RP_frm_hold_cnt_max = 0;
	UINT16 u16_RP_frm_hold_thl = 120;
	static UBYTE u1_RP_detect_true_pre = 0;
	UBYTE u1_det_true;
	UBYTE u1_basic_cond_true;
	UBYTE u1_RepeatBG_true = 0;

	// 1.1 gmv
	UBYTE u1_gmv_true = 1;
	UBYTE u11_GMV_x_max=0;
	UBYTE u10_GMV_y_max=0;
	// 1.2 temporally consistency
	UBYTE u1_tc_true = 1;
	UINT32 u28_tc_th = 0x55730;
	UINT32 u27_mv_tempconsis=s_pContext->_output_read_comreg.u27_me_aTC_rb;
	// 1,3  rmv consistent
	UBYTE u1_rmv_consistent_true = 0;

	// 2.0 Dtl
	//UINT32 u26_aDTL_rb=s_pContext->_output_read_comreg.u25_me_aDTL_rb;
	// 2.1 HV Dtl
	UBYTE u1_dtl_all_cond_true = 1;
	UINT32 u32_mc_HVDTL_thl = 0x200 ;
	UINT16 u16_mcHdtl = s_pContext->_output_read_comreg.u16_mc_Hdtl_cnt;
	UINT16 u16_mcVdtl = s_pContext->_output_read_comreg.u16_mc_Vdtl_cnt;

	// 3 glb PRD    // DRP affects the statistical value of PRD
	UINT32 u19_me_statis_glb_prd= s_pContext->_output_read_comreg.u19_me_statis_glb_prd;
	static UINT32 u19_avg_glb_prd=0;
	int diff_glb_prd =0;
	UINT32 u19_PRD_th0 = 0x76c;
	UBYTE u2_glb_PRD_status=0;

	//4. move check for Dtl, regDTL, regPRD
	UBYTE u1_mcDtl_move_true = 0,u1_rDTL_move_true = 0,u1_rPRD_move_true = 0,u1_rDTLPRD_move_cnt = 0, u1_det_DTLPRD_move_check =0;

	// 5.0 black_sc
	UBYTE u1_det_start=0;
	UBYTE u8_black_sc_cnt_th = 60;
	//======= record pre-
	static UBYTE u6_RP_frm_in_cnt_pre,u6_RP_frm_in_cnt_thl_pre,u8_RP_frm_hold_cnt_pre;
	static UBYTE u1_det_true_pre,u1_det_start_pre,u1_basic_cond_true_pre,u1_dtl_all_cond_true_pre,u2_glb_PRD_status_pre,u1_RepeatBG_true_pre;
	static UINT32 u27_me_aTC_rb_pre;
	static UINT32 u19_me_statis_glb_prd_pre;
	static UINT16 u16_mcHdtl_pre,u16_mcVdtl_pre;
	static UBYTE u11_GMV_x_max_pre,u10_GMV_y_max_pre;
	static UINT32 u17_me_ZMV_cnt_rb_pre;
	//===================
	//====rimRatio
	UINT32 u32_rimRatio = (s_pContext->_output_rimctrl.u32_rimRatio == 0) ? 128 : s_pContext->_output_rimctrl.u32_rimRatio;
	//==================
	//====DBG
	UINT32 u32_RB_val;
	UINT32 u32_RB_u28_tc_th,u32_RB_u32_mc_HVDTL_thl;
	UINT32 u32_RB_u19_PRD_th0;
	static SINT16 s16_rDtlPRD_RMV_th_cnt = 0;
	UBYTE u8_i = 0;
	static UINT32 u32_RP_detect_frame_cnt = 0;
	static UINT32 u32_RP_detect_chg_cnt = 0;
	static UINT32 u32_RP_detect_tmp[60] = {0};
	UBYTE u8_RP_detect_change_frequently_flag = 0;
	static UBYTE u8_RP_detect_change_frequently_frame_cnt = 0;
	ReadRegister(FRC_TOP__PQL_0__pql_patch_dummy_e8_ADDR, 0, 31, &u32_RB_val);//bit 25~31

	ReadRegister(FRC_TOP__software1__reg_software_01_ADDR, 0, 31, &u32_RB_u28_tc_th);
	ReadRegister(FRC_TOP__software1__reg_software_02_ADDR, 0, 31, &u32_RB_u19_PRD_th0);
	ReadRegister(FRC_TOP__software1__reg_software_03_ADDR, 0, 31, &u32_RB_u32_mc_HVDTL_thl);
	// ===DBG APPLY
	u28_tc_th=u32_RB_u28_tc_th;
	u19_PRD_th0=u32_RB_u19_PRD_th0;
	u32_mc_HVDTL_thl=u32_RB_u32_mc_HVDTL_thl;
	//==========   Update thl
	//Update glb
	//u26_aDTL_rb = (u26_aDTL_rb * u32_rimRatio) >> 7;
	u28_tc_th = (u28_tc_th * u32_rimRatio) >> 7;
	u32_mc_HVDTL_thl = (u32_mc_HVDTL_thl * u32_rimRatio) >> 7;
	//Update rgn

	//===============   ipme flp   //  mc_HVdtl statis no change
	if(u1_RP_detect_true_pre  && u1_RP_detect_true_pre !=3)
	{
		u19_PRD_th0 = (u19_PRD_th0>>2)*3;
	}

	// gmv
	u1_gmv_true = MEMC_GMV_detect(&u11_GMV_x_max,&u10_GMV_y_max);

	//rmv
	u1_rmv_consistent_true = MEMC_RMV_Consistent_detect();

	//tc all
	u1_tc_true = u27_mv_tempconsis< u28_tc_th;
	//dtl all
	u1_dtl_all_cond_true = (u16_mcHdtl>u32_mc_HVDTL_thl)||(u16_mcVdtl>u32_mc_HVDTL_thl);
	//PRD all

	// for LG Internel NTSC ATSC DTV 33-1 test pattern condition (broken flicker) ---------- start
	diff_glb_prd =(u19_me_statis_glb_prd - u19_avg_glb_prd) ;
	if (_ABS_(diff_glb_prd) < u19_avg_glb_prd / 2)
		u19_avg_glb_prd = (u19_avg_glb_prd * 6 + u19_me_statis_glb_prd * 2 + 4) >>3;
	else
		u19_avg_glb_prd = (u19_avg_glb_prd * 62 + u19_me_statis_glb_prd * 2 + 32) >>6;
	u19_PRD_th0 = u19_PRD_th0 + 0x50;
	// for LG Internel NTSC ATSC DTV 33-1 test pattern condition (broken flicker) ---------- end

	// protection for still image 
	if(s_pContext->_output_frc_sceneAnalysis.u1_still_frame || s_pContext->_external_info.u1_VIP_Still){// add th for PRD and DTL th of still frame when still image 
		u19_PRD_th0 = u19_PRD_th0+2000;
		s16_rDtlPRD_RMV_th_cnt = 5;
	}

	if(s16_rDtlPRD_RMV_th_cnt>0){
		u19_PRD_th0 = u19_PRD_th0+2000;
		s16_rDtlPRD_RMV_th_cnt--;
	}

	if(s16_rDtlPRD_RMV_th_cnt<0) s16_rDtlPRD_RMV_th_cnt = 0;

	if(u19_avg_glb_prd >= u19_PRD_th0)
		u2_glb_PRD_status = 1;
	// move check
	u1_mcDtl_move_true = MEMC_HVDtl_Move_detect(pParam, pOutput);//current non-used , need to check more
	u1_rDTL_move_true = MEMC_RGNDtl_Move_detect(pParam, pOutput);//current non-used , need to check more
	u1_rPRD_move_true = MEMC_RGNPRD_Move_detect(pParam, pOutput);//current non-used , need to check more
	u1_rDTLPRD_move_cnt = MEMC_RGNDtlPRD_detect(pParam, pOutput);

	//   black_sc
	if(MEMC_BlackSC_detect()>=u8_black_sc_cnt_th || u2_glb_PRD_status) //quick start
		u1_det_start = 1;

	// BG HVdtl repeat
	u1_RepeatBG_true = MEMC_RepeatBG_detect();
	// Casino_RP  move to Identification
	//MEMC_Casino_RP_detect(pParam, pOutput);

	if(((u32_RB_val >>  31) & 0x01) ==1 && ((u32_RB_val >>  25) & 0x01) ==1)
		u1_gmv_true =0;
	else if(((u32_RB_val >>  25) & 0x01) ==1)
	{
		u1_gmv_true =1;
	}

	if(((u32_RB_val >>  31) & 0x01) ==1 && ((u32_RB_val >>  26) & 0x01) ==1)
		u1_tc_true =0;
	else if(((u32_RB_val >>  26) & 0x01) ==1)
	{
		u1_tc_true=1;
	}

	if(((u32_RB_val >>  31) & 0x01) ==1 && ((u32_RB_val >>  27) & 0x01) ==1)
		u1_rmv_consistent_true =1;
	else if(((u32_RB_val >>  27) & 0x01) ==1)
	{
		u1_rmv_consistent_true=0;
	}

	if(((u32_RB_val >>  31) & 0x01) ==1 && ((u32_RB_val >>  28) & 0x01) ==1)
		u1_dtl_all_cond_true =0;
	else if(((u32_RB_val >>  28) & 0x01) ==1)
	{
		u1_dtl_all_cond_true=1;
	}

	if(((u32_RB_val >>  31) & 0x01) ==1 && ((u32_RB_val >>  29) & 0x01) ==1)
		u2_glb_PRD_status =0;
	else if(((u32_RB_val >>  29) & 0x01) ==1)
	{
		u2_glb_PRD_status=1;
	}

	if(((u32_RB_val >>  31) & 0x01) ==1 && ((u32_RB_val >>  30) & 0x01) ==1){
		u1_RepeatBG_true =0;
	}else if(((u32_RB_val >>  30) & 0x01) ==1){
		u1_RepeatBG_true=1;
	}
#if 1
	if(((u32_RB_val >>  31) & 0x01) == 1){
		u1_mcDtl_move_true = 1;
		u1_rDTL_move_true = 1;
		u1_rPRD_move_true = 1;
		u1_rDTLPRD_move_cnt = 128;
	}
#endif
	// result
	u1_basic_cond_true = u1_gmv_true&&u1_tc_true&& (!u1_rmv_consistent_true);
	u1_det_true = (u1_det_start&&u1_basic_cond_true &&u1_dtl_all_cond_true&&u2_glb_PRD_status) ? 1 : 0;
	u1_det_true = u1_det_true|u1_RepeatBG_true;
	u1_det_DTLPRD_move_check = u1_rDTLPRD_move_cnt;

	if(u1_det_true)
	{
		u6_RP_frm_in_cnt++;
		u6_RP_frm_in_cnt = (u6_RP_frm_in_cnt>8)? 8:u6_RP_frm_in_cnt;
	}
	else
	{
		u6_RP_frm_in_cnt = (u6_RP_frm_in_cnt == 0)? 1:u6_RP_frm_in_cnt;
		u6_RP_frm_in_cnt --;
	}

	if(u1_det_start == 0)		//black or sc, basic condition not match, quit
	{
		u8_RP_frm_hold_cnt = 0;
		u8_RP_frm_hold_cnt_max = 0;
	}
	else if(u6_RP_frm_in_cnt>=u6_RP_frm_in_cnt_thl)
	{
		u8_RP_frm_hold_cnt += FRAME_CHANGE_CNT;

		u8_RP_frm_hold_cnt = (u8_RP_frm_hold_cnt>u16_RP_frm_hold_thl *2)? u16_RP_frm_hold_thl*2:u8_RP_frm_hold_cnt;			//video end not detect protect

		u8_RP_frm_hold_cnt_max = u8_RP_frm_hold_cnt;
	}
	else if((u8_RP_frm_hold_cnt_max>=u16_RP_frm_hold_thl*1)&&(u8_RP_frm_hold_cnt>FRAME_CHANGE_CNT)&&u1_gmv_true&&u1_tc_true)
	{
		u8_RP_frm_hold_cnt -= FRAME_CHANGE_CNT;
	}
	else if((u8_RP_frm_hold_cnt_max>=u16_RP_frm_hold_thl*1)&&(u8_RP_frm_hold_cnt>FRAME_CHANGE_CNT*2))
	{
		u8_RP_frm_hold_cnt -= FRAME_CHANGE_CNT*2;
	}
	else
	{
		u8_RP_frm_hold_cnt = 0;
		u8_RP_frm_hold_cnt_max = 0;
	}

	if(u8_RP_frm_hold_cnt>0 && pOutput->u1_Natural_HighFreq_detect_true ==1)
	{
		pOutput->u1_RP_detect_true = 3;
		u6_RP_out_print = 1;
	}
	else if(u8_RP_frm_hold_cnt>0 && u1_RepeatBG_true )
	{
		pOutput->u1_RP_detect_true = 2;
		u6_RP_out_print = 1;
	}
	else if(u8_RP_frm_hold_cnt>0 )
	{
		if(u1_det_DTLPRD_move_check>=3){
			pOutput->u1_RP_detect_true = 1;
		}else{
			pOutput->u1_RP_detect_true = 4;
		}
		u6_RP_out_print = 1;
	}
	else
	{
		pOutput->u1_RP_detect_true = 0;
		if(u6_RP_out_print == 1)
			u6_RP_out_print =2;
	}

	if(pOutput->u1_RP_detect_true >=1 ){
		pOutput->u1_RP_DTLPRD_move_check = u1_det_DTLPRD_move_check;
	}else{
		pOutput->u1_RP_DTLPRD_move_check = 0;
	}

	// protection for still image 
	if(u1_RP_detect_true_pre != pOutput->u1_RP_detect_true){
		u32_RP_detect_chg_cnt++;
	}

	for(u8_i = 0; u8_i < 59; u8_i++){
		u32_RP_detect_tmp[u8_i] = u32_RP_detect_tmp[u8_i+1];
	}
	u32_RP_detect_tmp[59] = u32_RP_detect_chg_cnt;

	if(u32_RP_detect_tmp[59] - u32_RP_detect_tmp[0] >= 26){
		u8_RP_detect_change_frequently_flag = 1;
		u32_RP_detect_chg_cnt = 0;
	}
	else if(u32_RP_detect_tmp[59] < u32_RP_detect_tmp[0]){
		for(u8_i = 0; u8_i < 60; u8_i++){
			u32_RP_detect_tmp[u8_i] = 0;
		}
	}

	if(u8_RP_detect_change_frequently_flag>0){
		u8_RP_detect_change_frequently_frame_cnt = 2;
	}

	if(u8_RP_detect_change_frequently_frame_cnt>0){
		if(u8_RP_detect_change_frequently_frame_cnt == 2){
			WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 5, 5, 0);
		}
		else{
			WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 5, 5, 1);
		}
		u8_RP_detect_change_frequently_frame_cnt--;
	}

	u32_RP_detect_frame_cnt++;
	if(u32_RP_detect_frame_cnt > 1000){
		u32_RP_detect_frame_cnt = 1;
	}
	if(u32_RP_detect_chg_cnt > 1000){
		u32_RP_detect_chg_cnt = 1;
	}

	if(((u32_RB_val >>  9) & 0x01) ==1)
		pOutput->u1_RP_detect_true = 0;
	if(((u32_RB_val >>  10) & 0x01) ==1)
		pOutput->u1_RP_detect_true = 1;
	if(((u32_RB_val >>  11) & 0x01) ==1)
		pOutput->u1_RP_detect_true = 2;
	if(((u32_RB_val >>  12) & 0x01) ==1)
		pOutput->u1_RP_detect_true = 3;
	if(((u32_RB_val >>  12) & 0x01) ==1 && ((u32_RB_val >>  9) & 0x01) ==1)
		pOutput->u1_RP_detect_true = 4;

	if(pParam->u1_RepeatPattern_en != 1)
		pOutput->u1_RP_detect_true = 0;

	if ( (frm_cnt % 10 == 0  && ((u32_RB_val >>  13) & 0x01) ==1 ) || (frm_cnt % 1 == 0  && ((u32_RB_val >>  14) & 0x01) ==1  && (u6_RP_out_print ==2))){
		u6_RP_out_print =0;
		pr_notice("[%s][%d][,%d,%d,][,%d,%d,%d,][,%d,%d,]\n\r",
			__FUNCTION__, __LINE__,
			pOutput->u1_RP_detect_true, u32_RP_detect_chg_cnt,
			u19_avg_glb_prd, u19_me_statis_glb_prd, u19_PRD_th0,
			u8_RP_frm_hold_cnt, u1_rDTLPRD_move_cnt);
		printk(KERN_EMERG"[%s][%d][%d  %d  %d ] [%d %d %d %d %d %d] [%d %d][%d %d %d %d %d][%d] [%d,%d,%d,%d][%d,%d,%d,%d,%d]\n",
			__FUNCTION__, __LINE__,
			u6_RP_frm_in_cnt,u6_RP_frm_in_cnt_thl,u8_RP_frm_hold_cnt,
			u1_det_true, u1_det_start, u1_basic_cond_true, u1_dtl_all_cond_true,u2_glb_PRD_status,u1_RepeatBG_true,
			u27_mv_tempconsis,u32_rimRatio,
			u19_me_statis_glb_prd,u16_mcHdtl ,u16_mcVdtl, u11_GMV_x_max, u10_GMV_y_max,
			s_pContext->_output_read_comreg.u17_me_ZMV_cnt_rb,
			u1_mcDtl_move_true,u1_rDTL_move_true,u1_rPRD_move_true,u1_rDTLPRD_move_cnt,
			s_pContext->_external_info.DTL_Step_Hist_sum_ratio[0],s_pContext->_external_info.DTL_Step_Hist_sum_ratio[1],s_pContext->_external_info.DTL_Step_Hist_sum_ratio[2],s_pContext->_external_info.DTL_Step_Hist_sum_ratio[3],s_pContext->_external_info.DTL_Step_Hist_sum_ratio[4]);
			//s_pContext->_output_read_comreg.u22_me_rTC_rb[31], s_pContext->_output_read_comreg.u22_me_rSC_rb[31], s_pContext->_output_read_comreg.u25_me_rSAD_rb[31]);
		#if 1
		if(((u32_RB_val >>  31) & 0x01) == 1){
		printk(KERN_EMERG"\n\r$$$   [(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d)]   $$$\n\r$$$   [(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d)]   $$$\n\r$$$   [(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d)]   $$$\n\r$$$   [(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d),\t(%d %d %d %d)]   $$$\n\r",
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[0], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[0], s_pContext->_output_read_comreg.u20_me_rDTL_rb[0],s_pContext->_output_read_comreg.u13_me_rPRD_rb[0],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[1], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[1], s_pContext->_output_read_comreg.u20_me_rDTL_rb[1],s_pContext->_output_read_comreg.u13_me_rPRD_rb[1],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[2], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[2], s_pContext->_output_read_comreg.u20_me_rDTL_rb[2],s_pContext->_output_read_comreg.u13_me_rPRD_rb[2],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[3], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[3], s_pContext->_output_read_comreg.u20_me_rDTL_rb[3],s_pContext->_output_read_comreg.u13_me_rPRD_rb[3],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[4], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[4], s_pContext->_output_read_comreg.u20_me_rDTL_rb[4],s_pContext->_output_read_comreg.u13_me_rPRD_rb[4],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[5], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[5], s_pContext->_output_read_comreg.u20_me_rDTL_rb[5],s_pContext->_output_read_comreg.u13_me_rPRD_rb[5],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[6], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[6], s_pContext->_output_read_comreg.u20_me_rDTL_rb[6],s_pContext->_output_read_comreg.u13_me_rPRD_rb[6],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[7], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[7], s_pContext->_output_read_comreg.u20_me_rDTL_rb[7],s_pContext->_output_read_comreg.u13_me_rPRD_rb[7],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[8], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[8], s_pContext->_output_read_comreg.u20_me_rDTL_rb[8],s_pContext->_output_read_comreg.u13_me_rPRD_rb[8],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[9], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[9], s_pContext->_output_read_comreg.u20_me_rDTL_rb[9],s_pContext->_output_read_comreg.u13_me_rPRD_rb[9],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[10], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[10], s_pContext->_output_read_comreg.u20_me_rDTL_rb[10],s_pContext->_output_read_comreg.u13_me_rPRD_rb[10],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[11], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[11], s_pContext->_output_read_comreg.u20_me_rDTL_rb[11],s_pContext->_output_read_comreg.u13_me_rPRD_rb[11],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[12], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[12], s_pContext->_output_read_comreg.u20_me_rDTL_rb[12],s_pContext->_output_read_comreg.u13_me_rPRD_rb[12],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[13], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[13], s_pContext->_output_read_comreg.u20_me_rDTL_rb[13],s_pContext->_output_read_comreg.u13_me_rPRD_rb[13],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[14], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[14], s_pContext->_output_read_comreg.u20_me_rDTL_rb[14],s_pContext->_output_read_comreg.u13_me_rPRD_rb[14],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[15], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[15], s_pContext->_output_read_comreg.u20_me_rDTL_rb[15],s_pContext->_output_read_comreg.u13_me_rPRD_rb[15],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[16], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[16], s_pContext->_output_read_comreg.u20_me_rDTL_rb[16],s_pContext->_output_read_comreg.u13_me_rPRD_rb[16],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[17], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[17], s_pContext->_output_read_comreg.u20_me_rDTL_rb[17],s_pContext->_output_read_comreg.u13_me_rPRD_rb[17],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[18], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[18], s_pContext->_output_read_comreg.u20_me_rDTL_rb[18],s_pContext->_output_read_comreg.u13_me_rPRD_rb[18],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[19], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[19], s_pContext->_output_read_comreg.u20_me_rDTL_rb[19],s_pContext->_output_read_comreg.u13_me_rPRD_rb[19],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[20], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[20], s_pContext->_output_read_comreg.u20_me_rDTL_rb[20],s_pContext->_output_read_comreg.u13_me_rPRD_rb[20],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[21], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[21], s_pContext->_output_read_comreg.u20_me_rDTL_rb[21],s_pContext->_output_read_comreg.u13_me_rPRD_rb[21],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[22], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[22], s_pContext->_output_read_comreg.u20_me_rDTL_rb[22],s_pContext->_output_read_comreg.u13_me_rPRD_rb[22],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[23], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[23], s_pContext->_output_read_comreg.u20_me_rDTL_rb[23],s_pContext->_output_read_comreg.u13_me_rPRD_rb[23],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[24], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[24], s_pContext->_output_read_comreg.u20_me_rDTL_rb[24],s_pContext->_output_read_comreg.u13_me_rPRD_rb[24],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[25], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[25], s_pContext->_output_read_comreg.u20_me_rDTL_rb[25],s_pContext->_output_read_comreg.u13_me_rPRD_rb[25],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[26], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[26], s_pContext->_output_read_comreg.u20_me_rDTL_rb[26],s_pContext->_output_read_comreg.u13_me_rPRD_rb[26],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[27], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[27], s_pContext->_output_read_comreg.u20_me_rDTL_rb[27],s_pContext->_output_read_comreg.u13_me_rPRD_rb[27],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[28], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[28], s_pContext->_output_read_comreg.u20_me_rDTL_rb[28],s_pContext->_output_read_comreg.u13_me_rPRD_rb[28],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[29], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[29], s_pContext->_output_read_comreg.u20_me_rDTL_rb[29],s_pContext->_output_read_comreg.u13_me_rPRD_rb[29],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[30], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[30], s_pContext->_output_read_comreg.u20_me_rDTL_rb[30],s_pContext->_output_read_comreg.u13_me_rPRD_rb[30],
			s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[31], s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[31], s_pContext->_output_read_comreg.u20_me_rDTL_rb[31],s_pContext->_output_read_comreg.u13_me_rPRD_rb[31]);
			}
		#endif
	}
	else if( ((u32_RB_val >>  15) & 0x01) ==1 && u1_RP_detect_true_pre == 0 &&pOutput->u1_RP_detect_true ==1)
	{
		u6_RP_out_print =0;
		printk(KERN_EMERG"[%d  %d  %d ] [%d %d %d %d %d %d] [%d][%d %d %d %d %d][%d] [%d %d %d]\n",
			u6_RP_frm_in_cnt_pre,u6_RP_frm_in_cnt_thl_pre,u8_RP_frm_hold_cnt_pre,
			u1_det_true_pre, u1_det_start_pre, u1_basic_cond_true_pre, u1_dtl_all_cond_true_pre,u2_glb_PRD_status_pre,u1_RepeatBG_true_pre,
			u27_me_aTC_rb_pre,
			u19_me_statis_glb_prd_pre,u16_mcHdtl_pre,u16_mcVdtl_pre, u11_GMV_x_max_pre, u10_GMV_y_max_pre,
			u17_me_ZMV_cnt_rb_pre,
			u1_mcDtl_move_true,u1_rDTL_move_true,u1_rPRD_move_true);
	}
	//======= record pre-
	u1_RP_detect_true_pre = pOutput->u1_RP_detect_true;
	u6_RP_frm_in_cnt_pre = u6_RP_frm_in_cnt;
	u6_RP_frm_in_cnt_thl_pre = u6_RP_frm_in_cnt_thl;
	u8_RP_frm_hold_cnt_pre = u8_RP_frm_hold_cnt;
	u1_det_true_pre = u1_det_true;
	u1_det_start_pre=u1_det_start;
	u1_basic_cond_true_pre= u1_basic_cond_true;
	u1_dtl_all_cond_true_pre=u1_dtl_all_cond_true;
	u2_glb_PRD_status_pre=u2_glb_PRD_status;
	u1_RepeatBG_true_pre=u1_RepeatBG_true;
	u27_me_aTC_rb_pre = u27_mv_tempconsis;
	u19_me_statis_glb_prd_pre=u19_me_statis_glb_prd;
	u16_mcHdtl_pre=u16_mcHdtl;
	u16_mcVdtl_pre=u16_mcVdtl;
	u11_GMV_x_max_pre=u11_GMV_x_max;
	u10_GMV_y_max_pre=u10_GMV_y_max;
	u17_me_ZMV_cnt_rb_pre=s_pContext->_output_read_comreg.u17_me_ZMV_cnt_rb;
	//======= record pre-
	frm_cnt ++;
	if (frm_cnt >= 100000) frm_cnt = 0;
}
VOID MEMC_Region_Periodic_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	//const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u1_rDTL_move_true = 0,u1_rPRD_move_true = 0;
	static UBYTE u8_Region_Periodi_hold_cnt = 0;

	u1_rDTL_move_true = MEMC_RGNDtl_Move_detect(pParam, pOutput);
	u1_rPRD_move_true = MEMC_RGNPRD_Move_detect(pParam, pOutput);

	pOutput->u1_Region_Periodic_detect_true = u1_rPRD_move_true |(u1_rDTL_move_true<<1);

	if(pOutput->u1_Region_Periodic_detect_true == 3)
	{
		u8_Region_Periodi_hold_cnt =8;
	}
	else if(u8_Region_Periodi_hold_cnt >0)
	{
		pOutput->u1_Region_Periodic_detect_true=3;
		u8_Region_Periodi_hold_cnt--;
	}
}
VOID MEMC_Panning_Detect(_OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	UINT32 u32_i = 0;
	UINT32 u32_cnt = 0;
	UINT32 u32_rb_val = 0;

	const _PQLCONTEXT *s_pContext = GetPQLContext();

	SINT16 u11_gmv_mvx = (s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb)>>1;
	SINT16 u10_gmv_mvy = (s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb)>>1;
	UINT32 u32_gmv_cnt = s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb;
	UINT32 u32_gmv_unconf = s_pContext->_output_read_comreg.u12_me_GMV_1st_unconf_rb;

	UINT32 u25_me_aDTL = s_pContext->_output_read_comreg.u25_me_aDTL_rb;
	static UINT32 u32_gmv_cnt_pre = 0;
	static UINT32 u25_me_aDTL_pre = 0;
	static UINT32 u26_avgAPLi_pre = 0;
	UINT32 u26_aAPLi_rb = s_pContext->_output_read_comreg.u26_me_aAPLi_rb;
	UBYTE u1_gmv_mode = 0;
	static SINT32 panning_cnt = 0;
	UBYTE panning_mode = 0;

	//pOutput->u32_new_saddiff_th =  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_sc_saddiff_th;
	u32_gmv_cnt = (u32_gmv_cnt_pre*7 + u32_gmv_cnt)>>3;
	u25_me_aDTL = (u25_me_aDTL_pre*7 + u25_me_aDTL)>>3;
	u26_aAPLi_rb=(u26_avgAPLi_pre*7 + u26_aAPLi_rb)>>3;

	// gmv mode
	ReadRegister(FRC_TOP__KME_ME1_TOP2__me1_gmv_mode_ADDR, 2, 2, &u32_rb_val);
	u1_gmv_mode = u32_rb_val;

	if(u1_gmv_mode == 0)
	{
		if ((u32_gmv_cnt>28) && (_ABS_(u11_gmv_mvx) >= 4  || _ABS_(u10_gmv_mvy) >= 4)&& (u25_me_aDTL > 1200000))
		{
			// pOutput->u2_panning_flag = 1;
			panning_mode = 1;
			if (panning_cnt < 32) panning_cnt++;
		}
		else
		{
			// pOutput->u2_panning_flag = 0;
			if (panning_cnt > 0) panning_cnt--;
		}
	}
	else
	{
		if ((u32_gmv_cnt>30000) && ((_ABS_(u11_gmv_mvx) >= 1 && _ABS_(u11_gmv_mvx) <= 3)  || (_ABS_(u10_gmv_mvy) >= 1 && _ABS_(u10_gmv_mvy) <= 3))&& (u25_me_aDTL > 2000000)&& (u32_gmv_unconf<2))  // slow panning
		{
			// pOutput->u2_panning_flag = 2;
			panning_mode = 2;
			if (panning_cnt < 32) panning_cnt++;
		}
		else if ((u32_gmv_cnt>15000) && (_ABS_(u11_gmv_mvx) >= 4 || _ABS_(u10_gmv_mvy) >= 4) && (u25_me_aDTL > 550000) && (u32_gmv_unconf<0x6))  // pure panning
		{
			// pOutput->u2_panning_flag = 1;
			panning_mode = 1;
			if (panning_cnt < 32) panning_cnt++;
		}
		else if ((u32_gmv_cnt>12000) && (_ABS_(u11_gmv_mvx) >= 4 || _ABS_(u10_gmv_mvy) >= 4) && (u25_me_aDTL > 550000) && (u32_gmv_unconf<0xc) && u26_aAPLi_rb>3000000)  // pure panning
		{
			// pOutput->u2_panning_flag = 1;
			panning_mode = 1;
			if (panning_cnt < 32) panning_cnt++;
		}
		else if ((u32_gmv_cnt>30000) && (_ABS_(u11_gmv_mvx) >= 2 || _ABS_(u10_gmv_mvy) >= 2) && (u25_me_aDTL > 800000) && (u32_gmv_unconf<0x6))  //  pure panning
		{
			// pOutput->u2_panning_flag = 1;
			panning_mode = 1;
			if (panning_cnt < 32) panning_cnt++;
		}
		else if ((u32_gmv_cnt>10000) &&   (_ABS_(u11_gmv_mvx) >= 4 || _ABS_(u10_gmv_mvy) >= 4) && (u25_me_aDTL > 2100000 && u25_me_aDTL < 3000000)&& (u32_gmv_unconf<0x7)&& ( u26_aAPLi_rb>3000000 && u26_aAPLi_rb<4000000)) //   pure panning
		{
			// pOutput->u2_panning_flag = 1;
			panning_mode = 1;
			if (panning_cnt < 32) panning_cnt++;
		}
		else if ((u32_gmv_cnt>10000) &&   (_ABS_(u11_gmv_mvx) >= 4 || _ABS_(u10_gmv_mvy) >= 4) && (u25_me_aDTL > 4100000))  //   pure panning
		{
			for (u32_i = 0; u32_i < 32; u32_i ++)
			{
				if( s_pContext->_output_read_comreg.u12_me_rMV_1st_unconf_rb[u32_i] < 2 &&
					_ABS_(u11_gmv_mvx - ( s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[u32_i]>>2) ) < 2 &&
					_ABS_(u10_gmv_mvy - ( s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[u32_i]>>2) ) < 2 &&
					( s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[u32_i]!=0 || s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[u32_i] !=0))
				{
					u32_cnt++;
				}
			}
			if(u32_cnt == 32)
			{
				//  pq sharpness&rtnr&mcnr effect consistent
				// pOutput->u2_panning_flag = 1;
				panning_mode = 1;
				if (panning_cnt < 32) panning_cnt++;
			}
		}
		else if ((u32_gmv_cnt>20000) && (_ABS_(u11_gmv_mvx) >= 4  || _ABS_(u10_gmv_mvy) >= 4)&& (u25_me_aDTL > 550000)&& (u32_gmv_unconf < 0xa))  // revert to k5lp and retunning dtl for normal panning
		{
			// pOutput->u2_panning_flag = 3;
			panning_mode = 3;
			if (panning_cnt < 32) panning_cnt++;
		}
		else if ((u32_gmv_cnt>23000) && (_ABS_(u11_gmv_mvx) >= 4  || _ABS_(u10_gmv_mvy) >= 4)&& (u25_me_aDTL > 800000)&& (u32_gmv_unconf < 0x16) && u26_aAPLi_rb>6000000)  // revert to k5lp and retunning dtl for normal panning
		{
			// pOutput->u2_panning_flag = 3;
			panning_mode = 3;
			if (panning_cnt < 32) panning_cnt++;
		}
		else
		{
			// pOutput->u2_panning_flag = 0;
			if (panning_cnt > 0) panning_cnt--;
		}
	}

	if (panning_cnt > 15)
		pOutput->u2_panning_flag = panning_mode;
	else if (panning_cnt < 5)
		pOutput->u2_panning_flag = 0;
	
	// force value
	ReadRegister(FRC_TOP__PQL_0__pql_patch_dummy_e8_ADDR, 0, 31, &u32_rb_val);//bit 16
	switch( (u32_rb_val >> 16) & 0x3 )
	{
		case 0x0:
			break;
		case 0x1:
			pOutput->u2_panning_flag = 1;
			break;
		case 0x2:
			pOutput->u2_panning_flag = 0;
			break;
		case 0x3:
			pOutput->u2_panning_flag = 3;
			break;
		default:
			break;
	}

	if((u32_rb_val>>31)&0x1)
	{
		if(pOutput->u2_panning_flag==0){
			printk(KERN_EMERG"[MEMC][panning](%d, %d),cnt(%d), unconf(%d), DTL(%d), APL(%d) [(%d)]\n",u11_gmv_mvx,u10_gmv_mvy,u32_gmv_cnt,u32_gmv_unconf,u25_me_aDTL,u26_aAPLi_rb,pOutput->u2_panning_flag);
		}
	}
	// update record
	u32_gmv_cnt_pre = u32_gmv_cnt;
	u25_me_aDTL_pre = u25_me_aDTL;
	u26_avgAPLi_pre = u26_aAPLi_rb;
}

VOID MEMC_LightSwordDetect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{

	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UBYTE  chaos_true = 0, chaos_apply_num = 10;

	// gmv
	UBYTE  gmv_iir = 50;
	int       me_GMV_1st_vy_rb_iir = 0;
	UBYTE me_GMV_1st_cnt_rb_iir  = 0;
	UINT32 me_GMV_1st_unconf_rb_iir = 0;
	UBYTE gmv_true = 0;

	// reiong gmv
	UBYTE rg_idx, rg_cnt = 0, rmv_diff_th = 0x46, rg_cnt_th = 5, rmv_true = 0;

	// rim
	UBYTE rim_delta_H = 20, rim_delta_Up = 40, rim_delta_Dn = 60;
	UINT32 rimLft_th = 0, rimRgt_th = 3840, rimUp_th = 240, rimDn_th = 1940;
	UINT32 rimLft = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_LFT];
	UINT32 rimRht = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_RHT];
	UINT32 rimUp = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_TOP];
	UINT32 rimDn = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_BOT];
	UBYTE rim_true = 1;

	// apl
	UBYTE apl_true, apl_true_con0, apl_true_con1, apl_true_con2;
	UINT32 apl_th =  0xFF00, apl_cnt_th = 3;
	UINT32 max_rgn_apl, min_rgn_apl, rgn_apl,  apl_cnt;

	me_GMV_1st_vy_rb_iir = (gmv_iir * (pOutput->s10_me_GMV_1st_vy_rb_iir) + (256-gmv_iir) * s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb) >> 8;
	me_GMV_1st_cnt_rb_iir  = (gmv_iir * (pOutput->u6_me_GMV_1st_cnt_rb_iir) + (256-gmv_iir) * s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb) >> 8;
	me_GMV_1st_unconf_rb_iir = (gmv_iir * (pOutput->u12_me_GMV_1st_unconf_rb_iir) + (256-gmv_iir) * s_pContext->_output_read_comreg.u12_me_GMV_1st_unconf_rb) >> 8;
	if( _ABS_(me_GMV_1st_vy_rb_iir) < 6 && me_GMV_1st_cnt_rb_iir > 30 && me_GMV_1st_unconf_rb_iir < 50)
	{
		gmv_true = 1;
	}

	for(rg_idx = 8; rg_idx < 24; rg_idx++)
	{
		int vx_1st, vy_1st, cnt_1st;
		int vx_2nd, vy_2nd, cnt_2nd;
		vx_1st = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[rg_idx];
		vy_1st = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[rg_idx];
		cnt_1st = s_pContext->_output_read_comreg.u12_me_rMV_1st_cnt_rb[rg_idx];
		vx_2nd = s_pContext->_output_read_comreg.s11_me_rMV_2nd_vx_rb[rg_idx];
		vy_2nd = s_pContext->_output_read_comreg.s10_me_rMV_2nd_vy_rb[rg_idx];
		cnt_2nd = s_pContext->_output_read_comreg.u12_me_rMV_2nd_cnt_rb[rg_idx];

		if((_ABS_(vx_1st - vx_2nd) + _ABS_(vy_1st - vy_2nd) > rmv_diff_th) && (cnt_1st != 0 && cnt_2nd != 0))
			rg_cnt ++;
	}

	rmv_true = (rg_cnt > rg_cnt_th) ? 1 : 0;

	// rim
	if ((rimLft > rimLft_th + rim_delta_H) || \
	    (rimRht < rimRgt_th -rim_delta_H) || \
	    (rimUp < rimUp_th - rim_delta_Up  || rimUp > rimUp_th + rim_delta_Up) || \
	    (rimDn < rimDn_th - rim_delta_Dn || rimDn > rimDn_th + rim_delta_Dn))
	{
		rim_true = 0;
	}

	// apl
	apl_true = apl_true_con0 = apl_true_con1 = apl_true_con2 = 0;

	apl_cnt= 0;
	if(s_pContext->_output_read_comreg.u20_me_rAPLp_rb[8] < apl_th)
	{
		apl_cnt++;
	}
	if(s_pContext->_output_read_comreg.u20_me_rAPLp_rb[15] < apl_th)
	{
		apl_cnt++;
	}
	if(s_pContext->_output_read_comreg.u20_me_rAPLp_rb[16] < apl_th)
	{
		apl_cnt++;
	}
	if(s_pContext->_output_read_comreg.u20_me_rAPLp_rb[23] < apl_th)
	{
		apl_cnt++;
	}
	if(apl_cnt >= apl_cnt_th)
	{
		apl_true_con0 = 1;
	}

	max_rgn_apl = min_rgn_apl = s_pContext->_output_read_comreg.u20_me_rAPLp_rb[8];
	for(rg_idx = 9; rg_idx < 16; rg_idx++)
	{
		rgn_apl = s_pContext->_output_read_comreg.u20_me_rAPLp_rb[rg_idx];
		if(rgn_apl > max_rgn_apl)
		{
			max_rgn_apl = rgn_apl;
		}
		if(rgn_apl < min_rgn_apl)
		{
			min_rgn_apl = rgn_apl;
		}
	}
	if(max_rgn_apl > (min_rgn_apl * 3 / 2))
	{
		apl_true_con1 = 1;
	}

	max_rgn_apl = min_rgn_apl = s_pContext->_output_read_comreg.u20_me_rAPLp_rb[16];
	for(rg_idx = 17; rg_idx < 24; rg_idx++)
	{
		rgn_apl = s_pContext->_output_read_comreg.u20_me_rAPLp_rb[rg_idx];
		if(rgn_apl > max_rgn_apl)
		{
			max_rgn_apl = rgn_apl;
		}
		if(rgn_apl < min_rgn_apl)
		{
			min_rgn_apl = rgn_apl;
		}
	}
	if(max_rgn_apl > (min_rgn_apl * 3 / 2))
	{
		apl_true_con2 = 1;
	}

	apl_true = ((apl_true_con0 == 1) && ((apl_true_con1 == 1) || (apl_true_con2 == 1))) ? 1 : 0;


	chaos_true = rim_true && rmv_true && gmv_true && apl_true && pParam->u1_LightSword_en;

	// detection
	if(chaos_true)
	{
		pOutput->u8_chaos_apply = chaos_apply_num;
	}
	else if(pOutput->u8_chaos_apply > 0)
	{
		pOutput->u8_chaos_apply = pOutput->u8_chaos_apply - 1;
	}
	else
	{
		pOutput->u8_chaos_apply = 0;
	}

	pOutput->u1_chaos_true = chaos_true;
	pOutput->s10_me_GMV_1st_vy_rb_iir = me_GMV_1st_vy_rb_iir;
	pOutput->u6_me_GMV_1st_cnt_rb_iir = me_GMV_1st_cnt_rb_iir;
	pOutput->u12_me_GMV_1st_unconf_rb_iir = me_GMV_1st_unconf_rb_iir;

/*
	// dump
	UINT32 u32_RB_val;
	ReadRegister(0x000040A8, 25, 25, &u32_RB_val);
	if(u32_RB_val)
	{
		printk("i:(%d,%d,%d,%d,%d,%d,%d,%d); (%d,%d,%d,%d,%d,%d,%d,%d)\n",
			s_pContext->_output_read_comreg.u20_me_rAPLi_rb[9],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[10],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[11],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[12],
			s_pContext->_output_read_comreg.u20_me_rAPLi_rb[12],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[13],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[14],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[15],
			s_pContext->_output_read_comreg.u20_me_rAPLi_rb[16],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[17],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[18],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[19],
			s_pContext->_output_read_comreg.u20_me_rAPLi_rb[20],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[21],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[22],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[23]);
		printk("p:(%d,%d,%d,%d,%d,%d,%d,%d); (%d,%d,%d,%d,%d,%d,%d,%d)\n",
			s_pContext->_output_read_comreg.u20_me_rAPLp_rb[9],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[10],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[11],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[12],
			s_pContext->_output_read_comreg.u20_me_rAPLp_rb[12],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[13],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[14],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[15],
			s_pContext->_output_read_comreg.u20_me_rAPLp_rb[16],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[17],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[18],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[19],
			s_pContext->_output_read_comreg.u20_me_rAPLp_rb[20],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[21],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[22],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[23]);


		//printk("rim:(%d,%d,%d,%d)\n", s_pContext->_output_rimctrl.u12_Rim_Result[0], s_pContext->_output_rimctrl.u12_Rim_Result[1], s_pContext->_output_rimctrl.u12_Rim_Result[2], s_pContext->_output_rimctrl.u12_Rim_Result[3]);
		printk("rim=%d:(%d,%d,%d,%d), (%d,%d,(%d,%d),(%d,%d))\n", rim_true, rimLft, rimRht, rimUp, rimDn, rimLft_th + rim_delta_H, rimRgt_th -rim_delta_H, rimUp_th - rim_delta_V, rimUp_th + rim_delta_V, rimDn_th - rim_delta_V, rimDn_th + rim_delta_V);
	}
*/
}

VOID MEMC_Big_APLDiff_Detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_PQLPARAMETER *s_pParam       = GetPQLParameter();
	UBYTE  u8_cadence_Id = s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];
	PQL_INPUT_FRAME_RATE in_fmRate = s_pContext->_external_data._input_frameRate;
	UBYTE u8_cand_cond_hold_cnt = 0;

	UINT32 apl_diff, big_apldiff_th, big_apldiff_rgn_cnt;//, min_rgn_apl;  // unused
	UINT32 i;//, j;  // unused
	UINT32 ratio = 107;//96;//128;
	UINT32 big_apldiff_rgn_cnt_th = 18;

	//UINT16 rim_lft, rim_rht, rim_top, rim_bot, width, height;  // unused
	//UINT16 h_sta_rgn, h_end_rgn, v_sta_rgn, v_end_rgn;  // unused

	SINT16 gmv0_x, gmv0_y, gmv1_x, gmv1_y;
	UBYTE gmv0_cnt, gmv1_cnt;
	UINT16 gmv0_ucf, gmv1_ucf;
	UINT32 gmv_mv_th = 0x80;//0xA0;
	UBYTE gmv_cnt_th = 0x10;
	UINT16 gmv_ucf_th = 0x10;

	UINT32 glb_sad;
	UINT32 glb_sad_th_h = 0xE00000;
	UINT32 glb_sad_th_l = 0x20;

	UBYTE  u1_big_apldiff_true, u1_big_motion_true, u1_pan_motion_true, u1_sad_zero2big;

	if (u8_cadence_Id == _CAD_22 || (in_fmRate == _PQL_IN_25HZ && u8_cadence_Id == _CAD_VIDEO))
	{
		u8_cand_cond_hold_cnt = 1;
	}
	else
	{
		u8_cand_cond_hold_cnt = 2;
	}

	pOutput->u32_big_apldiff_saddiff_th = s_pParam->_param_frc_sceneAnalysis.u28_dyn_SAD_Diff_sadAll_th_l;

	if(pParam->u1_BigAPLDiff_en)
	{
		pOutput->u32_big_apldiff_saddiff_th = 0x4000;//0xF000;
#if 0
		// find min available rgn_apl
		rim_lft = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_LFT];
	 	rim_rht = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_RHT];
		rim_top = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_TOP];
		rim_bot = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_BOT];
		width = s_pContext->_output_rimctrl.u12_out_resolution[_RIM_RHT] - s_pContext->_output_rimctrl.u12_out_resolution[_RIM_LFT];
		height =  s_pContext->_output_rimctrl.u12_out_resolution[_RIM_BOT] - s_pContext->_output_rimctrl.u12_out_resolution[_RIM_TOP];
		min_rgn_apl = 0xFFFFF;
		width = (width == 0) ? 1 : width;
		height = (height == 0) ? 1 : height;
		h_sta_rgn = (2 * 8 * rim_lft / width + 1) >> 1;
		h_end_rgn = (2 * 8 * rim_rht / width - 1) >> 1;
		v_sta_rgn = (2 * 4 * rim_top / height + 1) >> 1;
		v_end_rgn = (2 * 4 * rim_bot / height - 1) >> 1;

		for(i = v_sta_rgn; i < v_end_rgn; i++)
		{
			for(j = h_sta_rgn; j < h_end_rgn; j++)
			{
				if(s_pContext->_output_read_comreg.u20_me_rAPLi_rb[i * 8 + j] < min_rgn_apl)
				{
					min_rgn_apl = s_pContext->_output_read_comreg.u20_me_rAPLi_rb[i * 8 + j];
				}
				if(s_pContext->_output_read_comreg.u20_me_rAPLp_rb[i * 8 + j] < min_rgn_apl)
				{
					min_rgn_apl = s_pContext->_output_read_comreg.u20_me_rAPLp_rb[i * 8 + j];
				}
			}
		}

		// calc rgn apl th
		//big_apldiff_th = 0x4000;
		big_apldiff_th = min_rgn_apl * ratio >> 8;

		// calc big apldiff rgn cnt
		big_apldiff_rgn_cnt = 0;
		for(i = 0; i < 32; i++)
		{
			if(s_pContext->_output_read_comreg.u20_me_rAPLi_rb[i] > s_pContext->_output_read_comreg.u20_me_rAPLp_rb[i])
			{
				apl_diff = s_pContext->_output_read_comreg.u20_me_rAPLi_rb[i] - s_pContext->_output_read_comreg.u20_me_rAPLp_rb[i];
			}
			else
			{
				apl_diff = s_pContext->_output_read_comreg.u20_me_rAPLp_rb[i] - s_pContext->_output_read_comreg.u20_me_rAPLi_rb[i];
			}
			if(apl_diff >= big_apldiff_th)
			{
				big_apldiff_rgn_cnt++;
			}
		}
#endif

#if 1
	ratio = 0x28;
	{
		// calc big apldiff rgn cnt
		big_apldiff_rgn_cnt = 0;
		for(i = 0; i < 32; i++)
		{
			if(s_pContext->_output_read_comreg.u20_me_rAPLi_rb[i] > s_pContext->_output_read_comreg.u20_me_rAPLp_rb[i])
			{
				apl_diff = s_pContext->_output_read_comreg.u20_me_rAPLi_rb[i] - s_pContext->_output_read_comreg.u20_me_rAPLp_rb[i];
				big_apldiff_th = (s_pContext->_output_read_comreg.u20_me_rAPLp_rb[i] * ratio) >> 8;
			}
			else
			{
				apl_diff = s_pContext->_output_read_comreg.u20_me_rAPLp_rb[i] - s_pContext->_output_read_comreg.u20_me_rAPLi_rb[i];
				big_apldiff_th = (s_pContext->_output_read_comreg.u20_me_rAPLi_rb[i] * ratio) >> 8;
			}
			if(apl_diff >= big_apldiff_th)
			{
				big_apldiff_rgn_cnt++;
			}
		}
	}
#endif

		if(big_apldiff_rgn_cnt >= big_apldiff_rgn_cnt_th)
		{
			u1_big_apldiff_true = 1;
		}
		else
		{
			u1_big_apldiff_true = 0;
		}

		// big motion
		gmv0_x = s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb;
		gmv0_y = s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb;
		gmv0_cnt = s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb;
		gmv0_ucf = s_pContext->_output_read_comreg.u12_me_GMV_1st_unconf_rb;

		gmv1_x = s_pContext->_output_read_comreg.s11_me_GMV_2nd_vx_rb;
		gmv1_y = s_pContext->_output_read_comreg.s10_me_GMV_2nd_vy_rb;
		gmv1_cnt = s_pContext->_output_read_comreg.u17_me_GMV_2nd_cnt_rb;
		gmv1_ucf = s_pContext->_output_read_comreg.u12_me_GMV_2nd_unconf_rb;

		u1_big_motion_true = 0;
		if((_ABS_(gmv0_x) >= gmv_mv_th || _ABS_(gmv0_y) >= gmv_mv_th)
			&& (gmv0_cnt >= gmv_cnt_th) && (gmv0_ucf <= gmv_ucf_th))
		{
			u1_big_motion_true = 1;
		}

		if((_ABS_(gmv1_x) >= gmv_mv_th || _ABS_(gmv1_y) >= gmv_mv_th)
			&& (gmv1_cnt >= gmv_cnt_th) && (gmv1_ucf <= gmv_ucf_th))
		{
			u1_big_motion_true = 1;
		}

		// pan
		gmv_mv_th = 0x3C;
	 	gmv_cnt_th = 0x1E;
		gmv_ucf_th = 0x5;

		u1_pan_motion_true = 0;
		if((_ABS_(gmv0_x) >= gmv_mv_th || _ABS_(gmv0_y) >= gmv_mv_th)
			&& (gmv0_cnt >= gmv_cnt_th) && (gmv0_ucf <= gmv_ucf_th))
		{
			u1_pan_motion_true = 1;
		}

		if((_ABS_(gmv1_x) >= gmv_mv_th || _ABS_(gmv1_y) >= gmv_mv_th)
			&& (gmv1_cnt >= gmv_cnt_th) && (gmv1_ucf <= gmv_ucf_th))
		{
			u1_pan_motion_true = 1;
		}

		// change from still
		glb_sad = s_pContext->_output_read_comreg.u30_me_aSAD_rb;
		if((pOutput->u32_big_apldiff_sad_pre < glb_sad_th_l) && (glb_sad > glb_sad_th_h))
		{
			u1_sad_zero2big = 1;
		}
		else
		{
			u1_sad_zero2big = 0;
		}
		pOutput->u32_big_apldiff_sad_pre = glb_sad;

		if((u1_big_apldiff_true == 1) && (u1_big_motion_true == 0) && (u1_pan_motion_true == 0))
		{
			pOutput->u8_big_apldiff_hold_cnt = 5;
			if(u1_sad_zero2big == 1)
			{
				pOutput->u8_big_apldiff_sc_hold_cnt = 4;// 1;
			}
		}
		else if(pOutput->u8_big_apldiff_hold_cnt != 0)
		{
			pOutput->u8_big_apldiff_hold_cnt--;
			pOutput->u8_big_apldiff_sc_hold_cnt = u8_cand_cond_hold_cnt;
		}
		else
		{
			pOutput->u8_big_apldiff_hold_cnt = 0;
			pOutput->u8_big_apldiff_sc_hold_cnt = u8_cand_cond_hold_cnt;
		}

	}
	else
	{
		pOutput->u8_big_apldiff_hold_cnt = 0;
		pOutput->u8_big_apldiff_sc_hold_cnt = u8_cand_cond_hold_cnt;
	}
#if 0
	// dump
	UINT32 u32_RB_val;
	ReadRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 12, 12, &u32_RB_val);
	if(u32_RB_val)
	{
	/*
		printk("i:(%d,%d,%d,%d,%d,%d,%d,%d); (%d,%d,%d,%d,%d,%d,%d,%d)\n",
			s_pContext->_output_read_comreg.u20_me_rAPLi_rb[9],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[10],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[11],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[12],
			s_pContext->_output_read_comreg.u20_me_rAPLi_rb[12],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[13],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[14],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[15],
			s_pContext->_output_read_comreg.u20_me_rAPLi_rb[16],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[17],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[18],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[19],
			s_pContext->_output_read_comreg.u20_me_rAPLi_rb[20],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[21],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[22],s_pContext->_output_read_comreg.u20_me_rAPLi_rb[23]);
		printk("p:(%d,%d,%d,%d,%d,%d,%d,%d); (%d,%d,%d,%d,%d,%d,%d,%d)\n",
			s_pContext->_output_read_comreg.u20_me_rAPLp_rb[9],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[10],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[11],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[12],
			s_pContext->_output_read_comreg.u20_me_rAPLp_rb[12],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[13],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[14],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[15],
			s_pContext->_output_read_comreg.u20_me_rAPLp_rb[16],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[17],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[18],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[19],
			s_pContext->_output_read_comreg.u20_me_rAPLp_rb[20],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[21],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[22],s_pContext->_output_read_comreg.u20_me_rAPLp_rb[23]);
	*/

		//printk("rim:(%d,%d,%d,%d)\n", s_pContext->_output_rimctrl.u12_Rim_Result[0], s_pContext->_output_rimctrl.u12_Rim_Result[1], s_pContext->_output_rimctrl.u12_Rim_Result[2], s_pContext->_output_rimctrl.u12_Rim_Result[3]);
		printk("GMV0:(%d, %d, %d, %d); GMV1:(%d, %d, %d, %d)\n", gmv0_x, gmv0_y, gmv0_cnt, gmv0_ucf,  gmv1_x, gmv1_y, gmv1_cnt, gmv1_ucf);
		printk("rgn_cnt:%d, saddiff:%d\n", big_apldiff_rgn_cnt, s_pContext->_output_read_comreg.u30_me_aSAD_rb);
	}
#endif

}

VOID MEMC_EPG_Protect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE stillGMV_true = 0;
	UBYTE moveROI_true = 0;
	UBYTE stillNonROI_true = 0;
	UINT32 moveROI_sad = 0;
	UBYTE moveROI_cnt = 0;
	UBYTE dtl_hv_prt_true = 0;
	//UBYTE dtl_all_prt_true = 0;  // unused
	UBYTE dtl_rgn_prt_true = 0;
	UBYTE stillNonROI_cnt = 0;
	UINT32 stillNonROI_sad = 0;
	UBYTE u8_i = 0;
	UBYTE EPG_true = 0;
	static UBYTE EPG_detCnt = 0;

	UINT32 moveROI_aplDiff = 0;
	UINT32 stillNonROI_aplDiff = 0;
	UINT32 u32_rimRatio = (s_pContext->_output_rimctrl.u32_rimRatio == 0) ? 128 : s_pContext->_output_rimctrl.u32_rimRatio;

	stillGMV_true = ((s_pContext->_output_read_comreg.u12_me_GMV_1st_unconf_rb == 0) &&
		          (_ABS_((s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb)>>2) == 0) &&
		          (_ABS_((s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb)>>2) == 0))? 1:0;

	for(u8_i = 0;u8_i < 32; u8_i++)
	{
		if(u8_i >= 9 && u8_i <= 14)
		{
			if(_ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[u8_i]>>2) == 0 &&
				_ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[u8_i]>>2) == 0)
				moveROI_cnt++;

			moveROI_sad += s_pContext->_output_read_comreg.u25_me_rSAD_rb[u8_i] ;
			moveROI_aplDiff = (s_pContext->_output_read_comreg.u25_me_rSAD_rb[u8_i]>moveROI_aplDiff)?s_pContext->_output_read_comreg.u25_me_rSAD_rb[u8_i]:moveROI_aplDiff;
		}
		else
		{
			if(_ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[u8_i]>>2) == 0 &&
				_ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[u8_i]>>2) == 0)
			{
				stillNonROI_cnt++;
				stillNonROI_sad += s_pContext->_output_read_comreg.u25_me_rSAD_rb[u8_i] ;
				stillNonROI_aplDiff = (s_pContext->_output_read_comreg.u25_me_rSAD_rb[u8_i]>stillNonROI_aplDiff)?s_pContext->_output_read_comreg.u25_me_rSAD_rb[u8_i]:stillNonROI_aplDiff;
			}
		}
	}

	if((moveROI_cnt*u32_rimRatio>>7 >= 4) && (moveROI_sad*u32_rimRatio>>7 >= 0x20000))
		moveROI_true = 1;
	else if((moveROI_cnt*u32_rimRatio>>7 >= 4) && (moveROI_sad*u32_rimRatio>>7 <= 0x200))
		moveROI_true = 0;
	 else
	 	moveROI_true = s_pContext->_output_me_sceneAnalysis.u8_EPG_moveROI;

	 pOutput->u8_EPG_moveROI= moveROI_true;

	stillNonROI_true = ((stillNonROI_cnt*u32_rimRatio>>7 >= 25) && (stillNonROI_sad*u32_rimRatio>>7 < 0x12000))? 1:0;

	dtl_hv_prt_true = (s_pContext->_output_read_comreg.u17_me_ZMV_cnt_rb*u32_rimRatio>>7 > 0x7000) && (s_pContext->_output_read_comreg.u17_me_ZMV_dtl_cnt_rb*u32_rimRatio>>7 > 0x3000);

	dtl_rgn_prt_true = ((s_pContext->_output_read_comreg.u20_me_rDTL_rb[17]<s_pContext->_output_read_comreg.u20_me_rDTL_rb[18])
					//&&(s_pContext->_output_read_comreg.u20_me_rDTL_rb[18]<s_pContext->_output_read_comreg.u20_me_rDTL_rb[19])
					&&(s_pContext->_output_read_comreg.u20_me_rDTL_rb[17]*u32_rimRatio>>7 >0xb000));

	EPG_true = (stillGMV_true == 1 && moveROI_true == 1 && stillNonROI_true == 1 && dtl_hv_prt_true == 1 && dtl_rgn_prt_true==1);

	if(EPG_true)
		EPG_detCnt = (EPG_detCnt>=8)?8:(EPG_detCnt+1);
	else
		EPG_detCnt = 0;

	if(EPG_detCnt == 8 && EPG_true)
		pOutput->u8_EPG_apply = 15;
	else if(dtl_hv_prt_true == 0)
		pOutput->u8_EPG_apply = 0;
	else if(s_pContext->_output_me_sceneAnalysis.u8_EPG_apply > 0)
		pOutput->u8_EPG_apply = s_pContext->_output_me_sceneAnalysis.u8_EPG_apply - 1;
	else
		pOutput->u8_EPG_apply = 0;

	if(pParam->u1_EPG_en==0)
		pOutput->u8_EPG_apply = 0;
#if 0
	//UINT32 ip31=0;
	ReadRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR,0,0,&ip31);

	if(ip31)
	printk("%d %d..%d %d %d %d %d %d..%d %x.. %d %x.. %x %x.. %x %x %x %x.. %x %x\n", pOutput->u8_EPG_apply, s_pContext->_output_rimctrl.u32_rimRatio,
	EPG_detCnt, stillGMV_true, moveROI_true, stillNonROI_true, dtl_hv_prt_true, dtl_rgn_prt_true,
	moveROI_cnt*u32_rimRatio>>7 , moveROI_sad*u32_rimRatio>>7 ,
	stillNonROI_cnt*u32_rimRatio>>7, stillNonROI_sad*u32_rimRatio>>7,
	s_pContext->_output_read_comreg.u16_mc_Hdtl_cnt*u32_rimRatio>>7, s_pContext->_output_read_comreg.u16_mc_Vdtl_cnt*u32_rimRatio>>7,
	s_pContext->_output_read_comreg.u20_me_rDTL_rb[17],s_pContext->_output_read_comreg.u20_me_rDTL_rb[18],s_pContext->_output_read_comreg.u20_me_rDTL_rb[19], s_pContext->_output_read_comreg.u20_me_rDTL_rb[17]*u32_rimRatio>>7,
	s_pContext->_output_read_comreg.u17_me_ZMV_cnt_rb*u32_rimRatio>>7, s_pContext->_output_read_comreg.u17_me_ZMV_dtl_cnt_rb*u32_rimRatio>>7);
#endif
}

VOID MEMC_Simple_Scene_Detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UINT32 u32_i;
	SINT16 cond_sad_cnt = 0, cond_dtl_cnt = 0, cond_dhconf_cnt = 0;
	SINT16 cond_dtl_zero_cnt = 0, cond_dhconf_zero_cnt = 0;
	SINT16 cond_sad_score = 0, cond_dtl_score = 0, cond_dhconf_score = 0, cond_dhconf_zero_score = 0;

	UINT32 cur_simple_scene_score = 0;

	SINT16 s11_1st_gmv_mvx = (s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb)>>2;
	SINT16 s10_1st_gmv_mvy = (s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb)>>2;
	SCHAR  s6_1st_gmv_cnt  = s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb;

	//SINT16 s11_2nd_gmv_mvx = (s_pContext->_output_read_comreg.s11_me_GMV_2nd_vx_rb)>>2;  // unused
	//SINT16 s10_2nd_gmv_mvy = (s_pContext->_output_read_comreg.s10_me_GMV_2nd_vy_rb)>>2;
	//SCHAR  s6_2nd_gmv_cnt  = s_pContext->_output_read_comreg.u17_me_GMV_2nd_cnt_rb;


	for (u32_i = 0; u32_i < 32; u32_i ++)
	{
		if (s_pContext->_output_read_comreg.u25_me_rSAD_rb[u32_i] < 0x4800)
		{
			cond_sad_cnt++;
		}

		if (s_pContext->_output_read_comreg.u20_me_rDTL_rb[u32_i] < 0x5000)
		{
			cond_dtl_cnt++;
		}

		if (s_pContext->_output_read_comreg.u20_me_rDTL_rb[u32_i] == 0)
		{
			cond_dtl_zero_cnt++;
		}

		if (s_pContext->_output_read_comreg.u20_dh_pfvconf[u32_i] < 0x8000)
		{
			cond_dhconf_cnt++;
		}

		if (s_pContext->_output_read_comreg.u20_dh_pfvconf[u32_i] == 0)
		{
			cond_dhconf_zero_cnt++;
		}
	}

/*
score
    |
64  |---- .  .  .  .
    |      .  |
    |   .16   |
0   |.____________
     24      28      32  cnt
*/
	cond_sad_score = _IncreaseCurveMapping(cond_sad_cnt, 24, 0, 64, 16, 0);
	cond_dtl_score = _IncreaseCurveMapping(cond_dtl_cnt, 24, 0, 64, 16, 0);
	cond_dhconf_score = _IncreaseCurveMapping(cond_dhconf_cnt, 24, 0, 64, 16, 0);

	cond_dhconf_zero_score = _IncreaseCurveMapping(cond_dhconf_zero_cnt, 16, 0, 64, 8, 0);

	if (_ABS_(s11_1st_gmv_mvx) <= 1 && _ABS_(s10_1st_gmv_mvy) <= 1 && s6_1st_gmv_cnt >= 30 && cond_dtl_zero_cnt >= 2)
	{
		cur_simple_scene_score = cond_sad_score + cond_dtl_score + cond_dhconf_score + cond_dhconf_zero_score;
	}
	cur_simple_scene_score = (_CLIP_(cur_simple_scene_score, 0, 256)<<8);

	pOutput->u16_simple_scene_score_pre = ((pOutput->u16_simple_scene_score_pre*248+cur_simple_scene_score*8+128)>>8);

#if 0
	printk("[MEMC]:%2x:%2x(%2x) %2x(%2x):%2x(%2x)%2x:%2x(%2x):%2x(%2x) %2x,%3x\n\r",
		_ABS_(s11_1st_gmv_mvx), _ABS_(s10_1st_gmv_mvy), s6_1st_gmv_cnt,
		cond_sad_cnt, cond_sad_score,
		cond_dtl_cnt, cond_dtl_score, cond_dtl_zero_cnt,
		cond_dhconf_cnt, cond_dhconf_score,
		cond_dhconf_zero_cnt, cond_dhconf_zero_score,
		(cur_simple_scene_score>>8), ((pOutput->u16_simple_scene_score_pre+128)>>8));
#endif
}

VOID MEMC_PureTopDownPanning_Detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	SINT16 s11_1st_GMVy = s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb;
	UINT32 u17_1st_GMVcnt = s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb;
	UINT32 u12_1st_GMVucf = s_pContext->_output_read_comreg.u12_me_GMV_1st_unconf_rb;

	SINT16 s11_2nd_GMVx = s_pContext->_output_read_comreg.s11_me_GMV_2nd_vx_rb;
	SINT16 s10_2nd_GMVy = s_pContext->_output_read_comreg.s10_me_GMV_2nd_vy_rb;
	UINT32 u17_2nd_GMVcnt = s_pContext->_output_read_comreg.u17_me_GMV_2nd_cnt_rb;
	UINT32 u12_2nd_GMVucf = s_pContext->_output_read_comreg.u12_me_GMV_2nd_unconf_rb;

	const UINT32 c_TotalBlks = 240*135;

	UBYTE u1_s1cond[4] = {0};
	UBYTE u1_s2cond[4] = {0};

	// 2 kind of GMV
	u1_s1cond[0] = ( u17_2nd_GMVcnt <= ( (c_TotalBlks*1 ) >> 4 ) );
	u1_s1cond[1] = ( u17_1st_GMVcnt >= ( (c_TotalBlks*11) >> 4 ) );
	u1_s1cond[2] = ( u12_1st_GMVucf < 15 );
	u1_s1cond[3] = ( s10_2nd_GMVy >= -5 );

	// 1 kind of GMV
	u1_s2cond[0] = ( u17_1st_GMVcnt >= ( (c_TotalBlks*4 ) >> 4 ) );
	u1_s2cond[1] = ( u12_1st_GMVucf < 3 );
	u1_s2cond[2] = ( u12_2nd_GMVucf >= 0xfff );
	u1_s2cond[3] = ( s11_2nd_GMVx == 0 && s10_2nd_GMVy == 0 );

	if( ( ( u1_s1cond[0] && u1_s1cond[1] && u1_s1cond[2] /*&& u1_s1cond[3]*/ ) || ( u1_s2cond[0] && u1_s2cond[1] && u1_s2cond[2] && u1_s2cond[3] ) ) && ( s11_1st_GMVy >= 5 ) )
	{
		if( pOutput->u8_pure_TopDownPan_cnt < 64 )
			pOutput->u8_pure_TopDownPan_cnt = pOutput->u8_pure_TopDownPan_cnt + 1;
	}
	else if(pOutput->u8_pure_TopDownPan_cnt > 0)
	{
		pOutput->u8_pure_TopDownPan_cnt = pOutput->u8_pure_TopDownPan_cnt >> 1;
	}
	else
	{
		pOutput->u8_pure_TopDownPan_cnt = 0;
	}

	if( pOutput->u8_pure_TopDownPan_cnt >= 18 )
	{
		pOutput->u1_pure_TopDownPan_flag = 1;
	}
	else
	{
		pOutput->u1_pure_TopDownPan_flag = 0;
	}

}

VOID MEMC_DynamicSearchRange_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{

	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u11_GMV_x_max=0;
	UBYTE u10_GMV_y_max=0;
	SINT16 s11_maxGMV_x = (s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb)>>1;
	SINT16 s10_maxGMV_y = (s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb)>>1;
	UINT32 glb_sad = s_pContext->_output_read_comreg.u30_me_aSAD_rb;

	int i = 0;

	//======= record pre-
	static SINT32 u8_pass_x_cnt = 0,u8_pass_y_cnt = 0;
	static SINT16 pre_maxGMV_x = 0,pre_maxGMV_y = 0;
	//===================

	// threshold setting
	UINT32 _TH_MVX = 8;
	UINT32 _TH_MVY = 6;
	UINT32 _TH_CNT = 4;
	UINT32 _TH_MAX_X = 12;
	UINT32 _TH_MAX_Y = 12;
	UINT32 _TH_TOT = 150;
	UINT32 _TH_SAD = 400000;
	// end

	SINT16 mvx_cnt = 0;
	SINT16 mvy_cnt = 0;
	SINT16 mvx_max = 0;
	SINT16 mvy_max = 0;
	SINT16 mvx_tot = 0;
	SINT16 mvy_tot = 0;
	SINT16 diff_maxGMV_x = 0;
	SINT16 diff_maxGMV_y = 0;

	static UINT32 print_cnt = 0 ;
	UINT32 u32_RB_val = 0;
	print_cnt++;

	u11_GMV_x_max = _ABS_(s11_maxGMV_x);
	u10_GMV_y_max = _ABS_(s10_maxGMV_y);

	for (i=0; i<32; i++)
	{
		//s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]
		if (_ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]) >= _TH_MVX)
		mvx_cnt++;

		if (_ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]) >= _TH_MVY)
		mvy_cnt++;

		if (_ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]) > mvx_max)
		mvx_max = _ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]);

		if (_ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]) > mvy_max)
		mvy_max = _ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]);

		mvx_tot += _ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]);
		mvy_tot += _ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]);
	}

	diff_maxGMV_x = _ABS_(pre_maxGMV_x - s11_maxGMV_x);
	diff_maxGMV_y = _ABS_(pre_maxGMV_y - s10_maxGMV_y);


	if (mvx_cnt < _TH_CNT && mvx_max < _TH_MAX_X && mvx_tot < _TH_TOT && glb_sad < _TH_SAD)
	{
		if (u8_pass_x_cnt < 32) u8_pass_x_cnt++;
	}
	else
	{
		if (u8_pass_x_cnt > 0){
			if(u11_GMV_x_max>=5){
				u8_pass_x_cnt= u8_pass_x_cnt - (u11_GMV_x_max>>1);
			}else{
				u8_pass_x_cnt-= 1;//(1 + mvx_max/_TH_MAX_X);
			}

			u8_pass_x_cnt = u8_pass_x_cnt - diff_maxGMV_x;
		}
	}

	if (mvy_cnt < _TH_CNT && mvy_max < _TH_MAX_Y && mvy_tot < _TH_TOT && glb_sad < _TH_SAD)
	{
		if (u8_pass_y_cnt < 32) u8_pass_y_cnt++;
	}
	else
	{
		if (u8_pass_y_cnt > 0) {
			if(u10_GMV_y_max>=5){
				u8_pass_y_cnt = u8_pass_y_cnt- (u10_GMV_y_max>>1);
			}else{
				u8_pass_y_cnt-= 1;//(1 + mvy_max/_TH_MAX_Y);
			}

			u8_pass_y_cnt = u8_pass_y_cnt - diff_maxGMV_y;
		}
	}

	u8_pass_x_cnt = _CLIP_(u8_pass_x_cnt,0,30);
	u8_pass_y_cnt = _CLIP_(u8_pass_y_cnt,0,30);

	if (u8_pass_x_cnt > 20) pOutput->u3_Dynamic_MVx_Step = 3;// + (mvx_cnt < _TH_CNT && mvx_max < _TH_MAX && mvx_tot < _TH_TOT);
	if (u8_pass_x_cnt < 10) pOutput->u3_Dynamic_MVx_Step = 0; // mean condition fail don't do anything in writecom

	if (u8_pass_y_cnt > 20) pOutput->u3_Dynamic_MVy_Step = 3;// + (mvx_cnt < _TH_CNT && mvx_max < _TH_MAX && mvx_tot < _TH_TOT);
	if (u8_pass_y_cnt < 10) pOutput->u3_Dynamic_MVy_Step = 0; // mean condition fail don't do anything in writecom

	//pOutput->u3_Dynamic_MVx_Step = _CLIP_((3 + (30-u8_pass_x_cnt) / 5), 3, 7);
	//pOutput->u3_Dynamic_MVy_Step = _CLIP_((3 + (30-u8_pass_y_cnt) / 5), 3, 7);


	pre_maxGMV_x = s11_maxGMV_x;
	pre_maxGMV_y = s10_maxGMV_y;

	if (pParam->u1_DSR_en != 1) {
		pOutput->u3_Dynamic_MVy_Step = 0; // for debug check
		pOutput->u3_Dynamic_MVx_Step = 0; // for debug check
	}

	ReadRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 0, 31, &u32_RB_val);

#if 0
	for (i=0; i<32; i++)
    {
		if ( (u32_RB_val>>3)&0x1){
			if(print_cnt%10==0){
				if(i%8 == 0){
					printk(KERN_EMERG "\n");
				}
				printk(KERN_EMERG "(%2d, %2d)", _ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]), _ABS_(s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[i]));
			}
		}
	}
#endif

#if 0
	if ( (u32_RB_val>>3)&0x1){
		if(print_cnt%2==0){

			// printk(KERN_EMERG "RPG_x: %8d, %2d:%2d:%2d => %2d(%d),%d\n", glb_sad, mvx_cnt, mvx_max, mvx_tot, u8_pass_x_cnt, (mvx_cnt < _TH_CNT && mvx_max < _TH_MAX_X && mvx_tot < _TH_TOT && glb_sad < 300000),u11_GMV_x_max);
			// printk(KERN_EMERG "RPG_y: %8d, %2d:%2d:%2d => %2d(%d),%d\n", glb_sad, mvy_cnt, mvy_max, mvy_tot, u8_pass_y_cnt, (mvy_cnt < _TH_CNT && mvy_max < _TH_MAX_Y && mvy_tot < _TH_TOT && glb_sad < _TH_SAD),u11_GMV_x_max);


		}
	}
#endif

}

VOID MEMC_MainObject_Move_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	const _PQLPARAMETER *s_pParam       = GetPQLParameter();

	SINT16 s11_1st_gmv_mvx = (s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb)>>1;
	SINT16 s10_1st_gmv_mvy = (s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb)>>1;
	UINT32 u32_1st_gmv_cnt = s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb;
	UINT32 u32_1st_gmv_unconf = s_pContext->_output_read_comreg.u12_me_GMV_1st_unconf_rb;

	SINT16 s11_2nd_gmv_mvx = (s_pContext->_output_read_comreg.s11_me_GMV_2nd_vx_rb)>>1;
	SINT16 s10_2nd_gmv_mvy = (s_pContext->_output_read_comreg.s10_me_GMV_2nd_vy_rb)>>1;
	UINT32 u32_2nd_gmv_cnt = s_pContext->_output_read_comreg.u17_me_GMV_2nd_cnt_rb;
	UINT32 u32_2nd_gmv_unconf = s_pContext->_output_read_comreg.u12_me_GMV_2nd_unconf_rb;

	UINT16 u16_meTotalBlkNum = (s_pContext->_output_read_comreg.u8_me1_Vbuf_Hsize_rb * s_pContext->_output_read_comreg.u8_me1_Vbuf_Vsize_rb);
	UBYTE u1_objInBG = 0;

	UBYTE u1_cond[6] = {0};

	UINT32 u25_me_aDTL = s_pContext->_output_read_comreg.u25_me_aDTL_rb;
	static SINT16 s5_MainObjectEnergy = 0;
	static UINT32 u25_me_aDTL_pre = 0;
	u25_me_aDTL = (u25_me_aDTL_pre*7 + u25_me_aDTL)>>3;

	// me total block number
	u16_meTotalBlkNum = (u16_meTotalBlkNum == 0)? 1 : u16_meTotalBlkNum;
	// object in background
#if 1
	// method 1
	// [A] 1stGmvCnt [B] 2ndGmvCnt (C)totalBlk
	// implied condition : [A]>[B]
	// cond0 : [A]+[B] >= [C]*Thl_1/32
	// cond1 : [A]-[B] >= [C]*Thl_2/32
	// what if [B] close to 0?
	if( ( ((u32_1st_gmv_cnt + u32_2nd_gmv_cnt) << 8)    >= (u16_meTotalBlkNum * (pParam->u8_MainObjectMove_thl_1 << 3) )) &&
		( (_ABS_(u32_1st_gmv_cnt-u32_2nd_gmv_cnt) << 8) >= (u16_meTotalBlkNum * (pParam->u8_MainObjectMove_thl_2 << 3) )) )
	{
		u1_objInBG = 1;
	}
	else
	{
		u1_objInBG = 0;
	}
#else
	// method 2
	// [A] 1stGmvCnt [B] 2ndGmvCnt (C)totalBlk
	// implied condition : [A]>[B]
	// cond0 : [A]+[B] >= [C]*Thl_1/32
	// cond1 : [B]     >= [C]*Thl_2/32
	if( ( (u32_1st_gmv_cnt + u32_2nd_gmv_cnt) >= ((u16_meTotalBlkNum * pParam->u8_MainObjectMove_thl_1) >> 5 )) &&
		( (u32_2nd_gmv_cnt)                   >= ((u16_meTotalBlkNum * pParam->u8_MainObjectMove_thl_2) >> 10 )) )
	{
		u1_objInBG = 1;
	}
	else
	{
		u1_objInBG = 0;
	}
#endif

	// final decision
	u1_cond[0] = (u1_objInBG == 1)? 1 : 0;
	// dtl
	u1_cond[1] = (u25_me_aDTL > (pParam->u8_MainObjectMove_dtl_thl*10000)/*360000*//*750000*/)? 1 : 0;
	// bg mv not small and correct
	u1_cond[2] = ( _ABS_(s11_1st_gmv_mvx) >= pParam->u4_MainObjectMove_bgMv_thl || _ABS_(s10_1st_gmv_mvy) >= pParam->u4_MainObjectMove_bgMv_thl /*13*/)? 1 : 0;
	u1_cond[3] = ( u32_1st_gmv_unconf < pParam->u8_MainObjectMove_1st_uconf_thr /*0x18*/ )? 1 : 0;
	// (bg, object mv) diff not small and object mv correct
#if 1
	u1_cond[4] = ( ( _ABS_(s11_1st_gmv_mvx-s11_2nd_gmv_mvx) + _ABS_(s10_1st_gmv_mvy-s10_2nd_gmv_mvy) ) >= (pParam->u4_MainObjectMove_objBgMvDiff_thl)/*4*/ )? 1 : 0; //???
	u1_cond[5] = ( u32_2nd_gmv_unconf < pParam->u8_MainObjectMove_2nd_uconf_thr /*0x18*/ )? 1: 0; //???
#else
	if( u32_2nd_gmv_unconf == 4095 )
	{
		u1_cond[4] = u1_cond[4];
		u1_cond[5] = u1_cond[5];
	}
	else if( s_pContext->_output_read_comreg.u1_sc_status_rb )
	{
		u1_cond[4] = 0;
		u1_cond[5] = 0;
	}
	else
	{
		u1_cond[4] = ( ( _ABS_(s11_1st_gmv_mvx-s11_2nd_gmv_mvx) + _ABS_(s10_1st_gmv_mvy-s10_2nd_gmv_mvy) ) >= (pParam->u4_MainObjectMove_objBgMvDiff_thl)/*4*/ )? 1 : 0;
		u1_cond[5] = ( u32_2nd_gmv_unconf < pParam->u8_MainObjectMove_2nd_uconf_thr /*0x18*/ )? 1: 0;
	}
#endif

	if( u1_cond[0]==1 && u1_cond[1]==1 && u1_cond[2]==1 && u1_cond[3]==1 && u1_cond[4]==1 && u1_cond[5]==1 )
	{
		s5_MainObjectEnergy = _MIN_(s5_MainObjectEnergy + 1, 32);
	}
	else
	{
		s5_MainObjectEnergy = _MAX_(s5_MainObjectEnergy - 1, 0);
	}

	if(s_pParam->_param_dh_close.u1_dbg_print_en)
	{
		rtd_printk(KERN_NOTICE, TAG_NAME_MEMC, "[%s]u1_MainObject_Move=%d,(%d,%d,%d,%d,%d,%d)\n",__FUNCTION__,s5_MainObjectEnergy,u1_cond[0],  u1_cond[1], u1_cond[2], u1_cond[3], u1_cond[4], u1_cond[5]);	
	}

	if( s5_MainObjectEnergy >= 18 )
	{
		pOutput->u1_MainObject_Move = 1;
	}
	else if( s5_MainObjectEnergy <= 14 )
	{
		pOutput->u1_MainObject_Move = 0;
	}
	u25_me_aDTL_pre = u25_me_aDTL;
}

VOID MEMC_Over_SearchRange_detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	//SINT16 u11_gmv_mvx = (s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb);
	SINT16 u10_gmv_mvy = (s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb);
	//UINT32 u32_gmv_cnt = s_pContext->_output_read_comreg.u17_me_GMV_1st_cnt_rb;
	//UINT32 u32_gmv_unconf = s_pContext->_output_read_comreg.u12_me_GMV_1st_unconf_rb;

	// pure or normal panning
	if((pOutput->u2_panning_flag == 1 || pOutput->u2_panning_flag == 3 || pParam->u1_force_panning == 1) &&
		(_ABS_(u10_gmv_mvy) >= pParam->u8_over_searchrange_thl))
		pOutput->u1_over_searchrange = 1;
	else
		pOutput->u1_over_searchrange = 0;
}

VOID MEMC_Occl_Ext_Detect(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	SINT16 s11_1st_gmv_mvx = (s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb) >> 1;
	SINT16 s10_1st_gmv_mvy = (s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb) >> 1;
	SINT16 s11_2nd_gmv_mvx = (s_pContext->_output_read_comreg.s11_me_GMV_2nd_vx_rb) >> 1;
	SINT16 s10_2nd_gmv_mvy = (s_pContext->_output_read_comreg.s10_me_GMV_2nd_vy_rb) >> 1;

	UINT16 u16_fb_bg_mvx_diff = 0;
	SINT16 u8_iir_weighting = 0;
	static SINT16 s11_1st_gmv_mvx_iir = 0, s11_2nd_gmv_mvx_iir = 0;
	static SINT16 s10_1st_gmv_mvy_iir = 0, s10_2nd_gmv_mvy_iir = 0;
	static SINT16 s16_bg_fb_dir_x = 0; // [-48~-16] : different dir [-16~16] : transition [16~48] : same dir

	const UINT32 RgnHSize = 3840/8, RgnVSize = 2160/4;
	UINT32 rimLft = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_LFT];
	UINT32 rimRht = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_RHT];
	UINT32 rimUp  = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_TOP];
	UINT32 rimDn  = s_pContext->_output_rimctrl.u12_Rim_Result[_RIM_BOT];
	UBYTE Rim_Pattern[32] = {0};
	UBYTE RimRgnCnt = 0;

	const UBYTE OcclExtLevelMapping[6][2] =
	{		//  low, high
		/*0*/ {   0,   10 },
		/*1*/ {   5,   15 },
		/*2*/ {  10,   25 },
		/*3*/ {  20,   40 },
		/*4*/ {  35,   50 },
		/*5*/ {  45,   99 }
	};

	const UBYTE FG_ObjPos_T1[3][32] =
	{
		{
			/**/ 0, 0, 0, 0, 0, 0, 0, 0,
			/**/ 0, 1, 1, 1, 1, 0, 0, 0,
			/**/ 0, 1, 1, 1, 1, 0, 0, 0,
			/**/ 0, 0, 0, 0, 0, 0, 0, 0
		},
		{
			/**/ 0, 0, 0, 0, 0, 0, 0, 0,
			/**/ 0, 0, 1, 1, 1, 1, 0, 0,
			/**/ 0, 0, 1, 1, 1, 1, 0, 0,
			/**/ 0, 0, 0, 0, 0, 0, 0, 0
		},
		{
			/**/ 0, 0, 0, 0, 0, 0, 0, 0,
			/**/ 0, 0, 0, 1, 1, 1, 1, 0,
			/**/ 0, 0, 0, 1, 1, 1, 1, 0,
			/**/ 0, 0, 0, 0, 0, 0, 0, 0
		}
	};

	const UBYTE FG_ObjPos_T2[5][32] =
	{
		{
			/**/ 0, 1, 1, 0, 0, 0, 0, 0,
			/**/ 0, 1, 1, 0, 0, 0, 0, 0,
			/**/ 0, 1, 1, 0, 0, 0, 0, 0,
			/**/ 0, 1, 1, 0, 0, 0, 0, 0
		},
		{
			/**/ 0, 0, 1, 1, 0, 0, 0, 0,
			/**/ 0, 0, 1, 1, 0, 0, 0, 0,
			/**/ 0, 0, 1, 1, 0, 0, 0, 0,
			/**/ 0, 0, 1, 1, 0, 0, 0, 0
		},
		{
			/**/ 0, 0, 0, 1, 1, 0, 0, 0,
			/**/ 0, 0, 0, 1, 1, 0, 0, 0,
			/**/ 0, 0, 0, 1, 1, 0, 0, 0,
			/**/ 0, 0, 0, 1, 1, 0, 0, 0
		},
		{
			/**/ 0, 0, 0, 0, 1, 1, 0, 0,
			/**/ 0, 0, 0, 0, 1, 1, 0, 0,
			/**/ 0, 0, 0, 0, 1, 1, 0, 0,
			/**/ 0, 0, 0, 0, 1, 1, 0, 0
		},
		{
			/**/ 0, 0, 0, 0, 0, 1, 1, 0,
			/**/ 0, 0, 0, 0, 0, 1, 1, 0,
			/**/ 0, 0, 0, 0, 0, 1, 1, 0,
			/**/ 0, 0, 0, 0, 0, 1, 1, 0
		}
	};

	SINT16 i=0, j=0;

	UINT32 T1_bg_mvx_avg[3] = {0}; // 4x2 center with offset
	UINT32 T1_RgnCnt[3] = {0};
	UINT32 T1_Debounce[3] = {0};
	static UINT32 T1_Debounce_pre[3] = {0};

	UINT32 T2_bg_mvx_avg[5] = {0}; // 4x2 center with offset
	UINT32 T2_RgnCnt[5] = {0};
	UINT32 T2_Debounce[5] = {0};
	static UINT32 T2_Debounce_pre[5] = {0};

	UINT32 MaxRgn_T1 = 0, MaxRgn_T2 = 0, MaxRgn_All = 0;
	#if 1 // LG TV006 493813 temp mark to sync
	const UINT32 TotalCenLogoBlks = 60*34*8; // 16320
	UINT32 CenRgnLogoBlks = 0;
	#endif
	UINT32 Ratio_Mvy2Mvx = 0;
	UINT32 Ratio_x0 = 0, Ratio_x1 = 0, Ratio_y0 = 0, Ratio_y1 = 0;

	// Generate the rim pattern
	for(i = 0; i < 4; i++) // veritcal
	{
		for(j = 0; j < 8; j++)
		{
			if( rimLft >= (RgnHSize/3)+RgnHSize*j || rimRht <= (2*RgnHSize/3)+RgnHSize*j || rimUp >= (RgnVSize/3)+RgnVSize*i || rimDn <= (2*RgnVSize/3)+RgnVSize*i )
			{
				Rim_Pattern[i*8+j] = 1;
				RimRgnCnt += 1;
			}
			else
			{
				Rim_Pattern[i*8+j] = 0;
			}
		}
	}
	#if 1 // LG TV006 493813 temp mark to sync
	// Caclulate the center logo count
	for(i = 8; i < 24; i++)
	{
		CenRgnLogoBlks = CenRgnLogoBlks + s_pContext->_output_read_comreg.u10_blklogo_rgcnt[i];
	}
	#endif

	// Caclulate the background average mv
	for(i = 0; i < 32; i++)
	{
		UINT32 mvx = _ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]);
		for( j = 0; j < 3; j++ )
		{
			if( FG_ObjPos_T1[j][i] == 0 && Rim_Pattern[i] == 0)
			{
				T1_bg_mvx_avg[j] += mvx;
				T1_RgnCnt[j] += 1;
			}
		}
		for( j = 0; j < 5; j++ )
		{
			if( FG_ObjPos_T2[j][i] == 0 && Rim_Pattern[i] == 0)
			{
				T2_bg_mvx_avg[j] += mvx;
				T2_RgnCnt[j] += 1;
			}
		}
	}
	for( i = 0; i < 3; i++ )
		T1_bg_mvx_avg[i] /= T1_RgnCnt[i];
	for( i = 0; i < 5; i++ )
		T2_bg_mvx_avg[i] /= T2_RgnCnt[i];

	// Debounce
	for( i = 0; i < 3; i++ )
		T1_Debounce[i] = 0 ;
	for( i = 0; i < 5; i++ )
		T2_Debounce[i] = 0 ;

	for(i = 0; i < 32; i++)
	{
		UINT32 mvx = _ABS_(s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[i]);
		for( j = 0; j < 3; j++ )
		{
			if( FG_ObjPos_T1[j][i] == 0 && Rim_Pattern[i] == 0)
			{
				SINT32 mv_diff = mvx - T1_bg_mvx_avg[j];
				if (_ABS_(mv_diff) < pParam->u8_occl_ext_bg_mv_diff_thl)
					T1_Debounce[j]++;
			}
		}
		for( j = 0; j < 5; j++ )
		{
			if( FG_ObjPos_T2[j][i] == 0 && Rim_Pattern[i] == 0)
			{
				SINT32 mv_diff = mvx - T2_bg_mvx_avg[j];
				if (_ABS_(mv_diff) < pParam->u8_occl_ext_bg_mv_diff_thl)
					T2_Debounce[j]++;
			}
		}
	}

	for(i = 0; i < 3; i++)
	{
		T1_Debounce[i] = (T1_Debounce[i]+RimRgnCnt) * _MIN_(16, T1_bg_mvx_avg[i]) / 16;
		T1_Debounce_pre[i] = (32*T1_Debounce_pre[i] + 32*T1_Debounce[i] + 32)/64;
	}
	for(i = 0; i < 5; i++)
	{
		T2_Debounce[i] = (T2_Debounce[i]+RimRgnCnt) * _MIN_(16, T2_bg_mvx_avg[i]) / 16;
		T2_Debounce_pre[i] = (32*T2_Debounce_pre[i] + 32*T2_Debounce[i] + 32)/64;
	}

	// mv iir and determin the extension level by fb/bg x mv diff
	/*y dir*/
	s10_1st_gmv_mvy_iir = (s10_1st_gmv_mvy + s10_1st_gmv_mvy_iir + 1) >> 1;
	s10_2nd_gmv_mvy_iir = (s10_2nd_gmv_mvy + s10_2nd_gmv_mvy_iir + 1) >> 1;

	/*x dir*/
	if( pParam->u1_occl_ext_gmv_weight_mode == 0 )
		u8_iir_weighting = 16;
	else
		u8_iir_weighting = _MIN_(_ABS_( s11_1st_gmv_mvx_iir - s11_1st_gmv_mvx ), 31);

	s11_1st_gmv_mvx_iir = (s11_1st_gmv_mvx_iir * u8_iir_weighting + s11_1st_gmv_mvx * (32-u8_iir_weighting) + 16) / 32;

	if( pParam->u1_occl_ext_gmv_weight_mode == 0 )
		u8_iir_weighting = 16;
	else
		u8_iir_weighting = _MIN_(_ABS_( s11_2nd_gmv_mvx_iir - s11_2nd_gmv_mvx ), 31);

	s11_2nd_gmv_mvx_iir = (s11_2nd_gmv_mvx_iir * u8_iir_weighting + s11_2nd_gmv_mvx * (32-u8_iir_weighting) + 16) / 32;

	u16_fb_bg_mvx_diff = _ABS_(s11_1st_gmv_mvx_iir - s11_2nd_gmv_mvx_iir);

	// sc
	if( s_pContext->_output_read_comreg.u1_sc_status_rb )
	{
		s16_bg_fb_dir_x = 0;
		s11_1st_gmv_mvx_iir = 0;
		s10_1st_gmv_mvy_iir = 0;
		s11_2nd_gmv_mvx_iir = 0;
		s10_2nd_gmv_mvy_iir = 0;
	}
	// 1st and 2nd both zero, close to zero
	else if( (s11_1st_gmv_mvx_iir == 0 ) && ( s11_2nd_gmv_mvx_iir == 0 ) )
	{
		if( s16_bg_fb_dir_x > 0 )
			s16_bg_fb_dir_x = s16_bg_fb_dir_x - 1;
		else if( s16_bg_fb_dir_x < 0 )
			s16_bg_fb_dir_x = s16_bg_fb_dir_x + 1;
	}
	/*
	// special condition, currently don't change the value
	else if( (s11_1st_gmv_mvx_iir == 0 ) || ( s11_2nd_gmv_mvx_iir == 0 ) )
	{
		s16_bg_fb_dir_x = s16_bg_fb_dir_x;
	}
	*/
	else if( (s11_1st_gmv_mvx_iir > 0  && s11_2nd_gmv_mvx_iir > 0 ) || (s11_1st_gmv_mvx_iir < 0  && s11_2nd_gmv_mvx_iir < 0 ) )
	{
		s16_bg_fb_dir_x = _MIN_(s16_bg_fb_dir_x + 1, 48);
	}
	else if( (s11_1st_gmv_mvx_iir > 0  && s11_2nd_gmv_mvx_iir < 0 ) || (s11_1st_gmv_mvx_iir < 0  && s11_2nd_gmv_mvx_iir > 0 ) )
	{
		s16_bg_fb_dir_x = _MAX_(s16_bg_fb_dir_x - 1, -48);
	}
	/*
	else
	{
		s16_bg_fb_dir_x = s16_bg_fb_dir_x;
	}
	*/

	MaxRgn_T1 = 0;
	for(j = 0; j < 3; j++)
	{
		if( T1_Debounce_pre[j] > MaxRgn_T1 )
			MaxRgn_T1 = T1_Debounce_pre[j];
	}
	MaxRgn_T2 = 0;
	for(j = 0; j < 5; j++)
	{
		if( T2_Debounce_pre[j] > MaxRgn_T2 )
			MaxRgn_T2 = T2_Debounce_pre[j];
	}
	// consider type 2 or not
	MaxRgn_All = ( pParam->u1_occl_type2_enable == 1 )? _MAX_(MaxRgn_T1, MaxRgn_T2) : MaxRgn_T1;

	if( MaxRgn_All >= (pParam->u4_occl_ext_rgn_thl + 8) /*20*/ &&
		s_pContext->_output_me_sceneAnalysis.u1_MainObject_Move == 1 &&
		s16_bg_fb_dir_x > -16 )
	{

		// mapping the level according to the mv diff
		if( pOutput->u3_occl_ext_level == 0 )
		{
			if( u16_fb_bg_mvx_diff >= OcclExtLevelMapping[pOutput->u3_occl_ext_level][1] )
				pOutput->u3_occl_ext_level++;
		}
		else if( pOutput->u3_occl_ext_level == 1 )
		{
			if( u16_fb_bg_mvx_diff <= OcclExtLevelMapping[pOutput->u3_occl_ext_level][0] )
				pOutput->u3_occl_ext_level--;
			else if( u16_fb_bg_mvx_diff >= OcclExtLevelMapping[pOutput->u3_occl_ext_level][1] )
				pOutput->u3_occl_ext_level++;
		}
		else if( pOutput->u3_occl_ext_level == 2 )
		{
			if( u16_fb_bg_mvx_diff <= OcclExtLevelMapping[pOutput->u3_occl_ext_level][0] )
				pOutput->u3_occl_ext_level--;
			else if( u16_fb_bg_mvx_diff >= OcclExtLevelMapping[pOutput->u3_occl_ext_level][1] )
				pOutput->u3_occl_ext_level++;
		}
		else if( pOutput->u3_occl_ext_level == 3 )
		{
			if( u16_fb_bg_mvx_diff <= OcclExtLevelMapping[pOutput->u3_occl_ext_level][0] )
				pOutput->u3_occl_ext_level--;
			else if( u16_fb_bg_mvx_diff >= OcclExtLevelMapping[pOutput->u3_occl_ext_level][1] )
				pOutput->u3_occl_ext_level++;
		}
		else if( pOutput->u3_occl_ext_level == 4 )
		{
			if( u16_fb_bg_mvx_diff <= OcclExtLevelMapping[pOutput->u3_occl_ext_level][0] )
				pOutput->u3_occl_ext_level--;
			else if( u16_fb_bg_mvx_diff >= OcclExtLevelMapping[pOutput->u3_occl_ext_level][1] )
				pOutput->u3_occl_ext_level++;
		}
		else if( pOutput->u3_occl_ext_level == 5 )
		{
			if( u16_fb_bg_mvx_diff <= OcclExtLevelMapping[pOutput->u3_occl_ext_level][0] )
				pOutput->u3_occl_ext_level--;
		}
		else
		{
			pOutput->u3_occl_ext_level = 0;
		}

	}
	else if( MaxRgn_All < (pParam->u4_occl_ext_rgn_thl + 3) )
	{
		pOutput->u3_occl_ext_level = 0;
	}

#if 1 // LG TV006 493813 temp mark to sync
	pOutput->u3_occl_ext_level = _MIN_(pOutput->u3_occl_ext_level, 5);

	if( (pParam->u1_occl_ext_avoidLogo_en != 0) && (CenRgnLogoBlks*100 >= TotalCenLogoBlks*pParam->u8_occl_ext_LogoCount_thr) )
		pOutput->u3_occl_post_corr_level = 0;
	else
		pOutput->u3_occl_post_corr_level = pOutput->u3_occl_ext_level;
#else
	pOutput->u3_occl_ext_level = _MIN_(pOutput->u3_occl_ext_level, 5);
#endif
	// decide whether to decrease post correction strength
	/*
	Ratio
	  |
	y0|--.
	  |  |  .
	y1|  |_____.___
	  |  |     |
	  |___________
	     x0    x1  CenRgnLogoCnt
	*/

	Ratio_x0 = pParam->u8_dh_postcorr_y2x_ratio_x0;
	Ratio_x1 = pParam->u8_dh_postcorr_y2x_ratio_x1*16;
	Ratio_x1 = _MAX_(Ratio_x0, Ratio_x1);
	Ratio_y0 = pParam->u8_dh_postcorr_y2x_ratio_y0;
	Ratio_y1 = pParam->u8_dh_postcorr_y2x_ratio_y1;
	Ratio_y0 = _MAX_(Ratio_y0, Ratio_y1);

	if( CenRgnLogoBlks < Ratio_x0 )
		Ratio_Mvy2Mvx = Ratio_y0;
	else if( CenRgnLogoBlks > Ratio_x1 )
		Ratio_Mvy2Mvx = Ratio_y1;
	else
		Ratio_Mvy2Mvx = ( (Ratio_x1-Ratio_x0)*Ratio_y0 - (CenRgnLogoBlks-Ratio_x0)*(Ratio_y0-Ratio_y1) + ((Ratio_x1-Ratio_x0)>>1) ) / (Ratio_x1-Ratio_x0);

	if( (pParam->u1_dh_postcorrt_dyn_calc_en != 0) &&
		( (CenRgnLogoBlks<<11) >= TotalCenLogoBlks*pParam->u8_dh_postcorr_LogoCount_thr) &&
		(
			( (_ABS_(s10_1st_gmv_mvy_iir) >= pParam->u8_dh_postcorr_GmvMvy_thr) && ( _ABS_(s10_1st_gmv_mvy_iir)*64 >= _ABS_(s11_1st_gmv_mvx_iir)*Ratio_Mvy2Mvx ) ) ||
			( (_ABS_(s10_2nd_gmv_mvy_iir) >= pParam->u8_dh_postcorr_GmvMvy_thr) && ( _ABS_(s10_2nd_gmv_mvy_iir)*64 >= _ABS_(s11_2nd_gmv_mvx_iir)*Ratio_Mvy2Mvx ) )
		)
	  )
		pOutput->u3_occl_post_corr_level = 0;
	else
		pOutput->u3_occl_post_corr_level = pOutput->u3_occl_ext_level;

	if( pParam->u1_dh_postcorr_log_en )
	{
		/*
		printk(KERN_EMERG "%d %d %d %d %d %d %d\n",
			pParam->u1_dh_postcorrt_dyn_calc_en,
			Ratio_x0, Ratio_x1, Ratio_y0, Ratio_y1,
			pParam->u8_dh_postcorr_GmvMvy_thr, pParam->u8_dh_postcorr_LogoCount_thr
		);
		*/
		printk(KERN_EMERG "Ratio = %3d, LogoCount = %5d, mvIIR = (%4d %4d) (%4d %4d) %5d, oLv = %1d %1d\n",
			Ratio_Mvy2Mvx, CenRgnLogoBlks,
			s11_1st_gmv_mvx_iir, s10_1st_gmv_mvy_iir,
			s11_2nd_gmv_mvx_iir, s10_2nd_gmv_mvy_iir,
			s16_bg_fb_dir_x,
			pOutput->u3_occl_ext_level, pOutput->u3_occl_post_corr_level);
	}

}

VOID MEMC_ME_OFFSET_Proc(const _PARAM_ME_SCENE_ANALYSIS *pParam, _OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	static int count = 0;
	UINT32 posX[8], posY[8];
	UINT32 tmpX[8], tmpY[8];
	int strIdx;
	int i;

	count++;
	if (count > 10000) count = 0;

	posX[0] = 7;
	posY[0] = 7;
	posX[1] = 0;
	posY[1] = 7;
	posX[2] = 1;
	posY[2] = 7;
	posX[3] = 7;
	posY[3] = 0;
	posX[4] = 1;
	posY[4] = 0;
	posX[5] = 6;
	posY[5] = 2;
	posX[6] = 0;
	posY[6] = 2;
	posX[7] = 2;
	posY[7] = 2;

	strIdx = count % 8;
	for (i=0; i<8; i++)
	{
		int idx = strIdx + i;
		if (idx > 7) idx -= 8;
		tmpX[idx] = posX[i];
		tmpY[idx] = posY[i];
	}
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand0_offsety), tmpY[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand0_offsetx), tmpX[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand1_offsety), tmpY[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand1_offsetx), tmpX[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand2_offsety), tmpY[2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand2_offsetx), tmpX[2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety), tmpY[3]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsetx), tmpX[3]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety), tmpY[4]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsetx), tmpX[4]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety), tmpY[5]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsetx), tmpX[5]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety), tmpY[6]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsetx), tmpX[6]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety), tmpY[7]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsetx), tmpX[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand8_offsety), tmpY[9]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand8_offsetx), tmpX[9]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand9_offsety), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand9_offsetx), tmpX[0]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_offsety), tmpY[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand0_offsetx), tmpX[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand1_offsety), tmpY[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand1_offsetx), tmpX[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand2_offsety), tmpY[2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand2_offsetx), tmpX[2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety), tmpY[3]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsetx), tmpX[3]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety), tmpY[4]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsetx), tmpX[4]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety), tmpY[5]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsetx), tmpX[5]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety), tmpY[6]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsetx), tmpX[6]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety), tmpY[7]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsetx), tmpX[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand8_offsety), tmpY[9]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand8_offsetx), tmpX[9]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand9_offsety), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand9_offsetx), tmpX[0]);

	strIdx = count % 3;
	for (i=0; i<8; i++)
	{
		int idx = strIdx + i;
		if (idx > 2) idx -= 3;
		tmpX[idx] = posX[i];
		tmpY[idx] = posY[i];
	}

	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_offsety), tmpY[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_offsetx), tmpX[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_offsety), tmpY[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_offsetx), tmpX[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_offsety), tmpY[2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_offsetx), tmpX[2]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update3_offsety), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update3_offsetx), tmpX[0]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_offsety), tmpY[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_offsetx), tmpX[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_offsety), tmpY[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_offsetx), tmpX[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_offsety), tmpY[2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_offsetx), tmpX[2]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update3_offsety), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update3_offsetx), tmpX[0]);

	posX[0] = 7;
	posY[0] = 7;
	posX[1] = 0;
	posY[1] = 7;
	posX[2] = 1;
	posY[2] = 7;
	posX[3] = 6;
	posY[3] = 2;
	posX[4] = 0;
	posY[4] = 2;
	posX[5] = 2;
	posY[5] = 2;

	strIdx = count % 5;
	for (i=0; i<5; i++)
	{
		int idx = strIdx + i;
		if (idx > 4) idx -= 5;
		tmpX[idx] = posX[i];
		tmpY[idx] = posY[i];
	}

	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_0_y_offset), tmpY[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_0_x_offset), tmpX[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_1_y_offset), tmpY[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_1_x_offset), tmpX[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_2_y_offset), tmpY[2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_2_x_offset), tmpX[2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_3_y_offset), tmpY[3]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_3_x_offset), tmpX[3]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_4_y_offset), tmpY[4]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_4_x_offset), tmpX[4]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_5_y_offset), tmpY[6]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_5_x_offset), tmpX[6]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_6_y_offset), tmpY[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_6_x_offset), tmpX[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_7_y_offset), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ph_candi_7_x_offset), tmpX[0]);

	posX[0] = 1;
	posY[0] = 1;
	posX[1] = 0;
	posY[1] = 0;

	strIdx = count % 2;
	for (i=0; i<2; i++)
	{
		int idx = strIdx + i;
		if (idx > 1) idx -= 2;
		tmpX[idx] = posX[i];
		tmpY[idx] = posY[i];
	}

	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_0_y_offset), tmpY[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_0_x_offset), tmpX[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_1_y_offset), tmpY[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_1_x_offset), tmpX[1]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_2_y_offset), tmpY[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_2_x_offset), tmpX[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_3_y_offset), tmpY[4]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_3_x_offset), tmpX[4]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_4_y_offset), tmpY[5]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_4_x_offset), tmpX[5]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_5_y_offset), tmpY[6]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_5_x_offset), tmpX[6]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_6_y_offset), tmpY[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_6_x_offset), tmpX[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_7_y_offset), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_7_x_offset), tmpX[0]);

	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_0_y_offset), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_0_x_offset), tmpX[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_1_y_offset), tmpY[2]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_1_x_offset), tmpX[2]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_2_y_offset), tmpY[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_2_x_offset), tmpX[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_3_y_offset), tmpY[4]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_3_x_offset), tmpX[4]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_4_y_offset), tmpY[5]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_4_x_offset), tmpX[5]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_5_y_offset), tmpY[6]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_5_x_offset), tmpX[6]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_6_y_offset), tmpY[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_6_x_offset), tmpX[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_7_y_offset), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_7_x_offset), tmpX[0]);

	posX[0] = 7;
	posY[0] = 7;
	posX[1] = 0;
	posY[1] = 7;
	posX[2] = 1;
	posY[2] = 7;
	posX[3] = 6;
	posY[3] = 2;
	posX[4] = 0;
	posY[4] = 2;

	strIdx = count % 4;
	for (i=0; i<4; i++)
	{
		int idx = strIdx + i;
		if (idx > 3) idx -= 4;
		tmpX[idx] = posX[i];
		tmpY[idx] = posY[i];
	}

	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_0_y_offset), tmpY[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_0_x_offset), tmpX[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_1_y_offset), tmpY[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_1_x_offset), tmpX[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_2_y_offset), tmpY[2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_2_x_offset), tmpX[2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_3_y_offset), tmpY[3]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_3_x_offset), tmpX[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_4_y_offset), tmpY[5]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_4_x_offset), tmpX[5]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_5_y_offset), tmpY[6]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_5_x_offset), tmpX[6]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_6_y_offset), tmpY[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_6_x_offset), tmpX[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_7_y_offset), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ph_candi_7_x_offset), tmpX[0]);

	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_0_y_offset), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_0_x_offset), tmpX[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_1_y_offset), tmpY[2]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_1_x_offset), tmpX[2]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_2_y_offset), tmpY[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_2_x_offset), tmpX[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_3_y_offset), tmpY[4]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_3_x_offset), tmpX[4]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_4_y_offset), tmpY[5]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_4_x_offset), tmpX[5]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_5_y_offset), tmpY[6]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_5_x_offset), tmpX[6]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_6_y_offset), tmpY[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_6_x_offset), tmpX[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_7_y_offset), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv0_candi_7_x_offset), tmpX[0]);

	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_0_y_offset), tmpY[1]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_0_x_offset), tmpX[1]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_1_y_offset), tmpY[2]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_1_x_offset), tmpX[2]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_2_y_offset), tmpY[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_2_x_offset), tmpX[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_3_y_offset), tmpY[4]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_3_x_offset), tmpX[4]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_4_y_offset), tmpY[5]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_4_x_offset), tmpX[5]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_5_y_offset), tmpY[6]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_5_x_offset), tmpX[6]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_6_y_offset), tmpY[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_6_x_offset), tmpX[7]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_7_y_offset), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_pfv1_candi_7_x_offset), tmpX[0]);

/*
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_0_y_offset), &tmpY[0]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_0_x_offset), &tmpX[0]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_1_y_offset), &tmpY[1]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_1_x_offset), &tmpX[1]);
	//ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_2_y_offset), &tmpY[2]);
	//ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_2_x_offset), &tmpX[2]);
	//ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_3_y_offset), &tmpY[3]);
	//ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_3_x_offset), &tmpX[3]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_0_y_offset), tmpY[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_0_x_offset), tmpX[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_1_y_offset), tmpY[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_1_x_offset), tmpX[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_2_y_offset), tmpY[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_2_x_offset), tmpX[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_3_y_offset), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_updt_candi_3_x_offset), tmpX[0]);

	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_0_y_offset), &tmpY[0]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_0_x_offset), &tmpX[0]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_1_y_offset), &tmpY[1]);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_1_x_offset), &tmpX[1]);
	//ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_2_y_offset), &tmpY[2]);
	//ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_2_x_offset), &tmpX[2]);
	//ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_3_y_offset), &tmpY[3]);
	//ReadRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_3_x_offset), &tmpX[3]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_0_y_offset), tmpY[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_0_x_offset), tmpX[1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_1_y_offset), tmpY[0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_1_x_offset), tmpX[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_2_y_offset), tmpY[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_2_x_offset), tmpX[3]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_3_y_offset), tmpY[0]);
	//WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_updt_candi_3_x_offset), tmpX[0]);
*/
}

VOID MEMC_MotionInfo_SLD(_OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE u8_Idx = 0;
	UINT32 cFrmMot = 0;
	UINT32 u32_maxAFrmMot = 0, u32_maxCFrmMot = 0;
	static UINT32 u32_aFrmMot[4] = {0};
	static UINT32 u32_cFrmMot[4] = {0};
	static UBYTE u8_FrmIdx = 0;

	// all motion
	u32_aFrmMot[u8_FrmIdx] = s_pContext->_output_read_comreg.u27_ipme_aMot_rb;

	// center motion
	for(u8_Idx=0; u8_Idx<12; u8_Idx++)
	{
		cFrmMot = cFrmMot + s_pContext->_output_read_comreg.u27_ipme_12Mot_rb[u8_Idx];
	}
	u32_cFrmMot[u8_FrmIdx] = cFrmMot;

	// store the max value
	for(u8_Idx=0; u8_Idx<4; u8_Idx++)
	{
		u32_maxAFrmMot = ( u32_aFrmMot[u8_Idx] >= u32_maxAFrmMot)? u32_aFrmMot[u8_Idx] : u32_maxAFrmMot;
		u32_maxCFrmMot = ( u32_cFrmMot[u8_Idx] >= u32_maxCFrmMot)? u32_cFrmMot[u8_Idx] : u32_maxCFrmMot;
	}

	u8_FrmIdx = ((u8_FrmIdx + 1)>=4)? 0 : u8_FrmIdx + 1;

	pOutput->u32_aFrmMot_4Max = u32_maxAFrmMot;
	pOutput->u32_cFrmMot_4Max = u32_maxCFrmMot;

}


VOID MEMC_RMV_Detect_DTV_Ch2_1_tv006(_OUTPUT_ME_SCENE_ANALYSIS *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UINT16 u16_vip_source_type = 0;
	#if 0
	SINT32 u32_RMV_0x=0,u32_RMV_0y=0,u32_RMV_1x=0,u32_RMV_1y=0,u32_RMV_8x=0,u32_RMV_8y=0,u32_RMV_9x=0,u32_RMV_9y=0,
				u32_RMV_16x=0,u32_RMV_16y=0,u32_RMV_17x=0,u32_RMV_17y=0,
				u32_RMV_24x=0,u32_RMV_24y=0,u32_RMV_25x=0,u32_RMV_25y=0,u32_RMV_26x=0,u32_RMV_26y=0,u32_RMV_27x=0,u32_RMV_27y=0,
				u32_RMV_28x=0,u32_RMV_28y=0,u32_RMV_29x=0,u32_RMV_29y=0,u32_RMV_30x=0,u32_RMV_30y=0,u32_RMV_31x=0,u32_RMV_31y=0	;
	#endif
	
	SINT16 u11_rmv_00_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[0],
		    u10_rmv_00_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[0],
		  //   u11_rmv_01_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[1],
		  //   u10_rmv_01_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[1],
		  //  u11_rmv_08_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[8],
		  //  u10_rmv_08_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[8],
		  // u11_rmv_09_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[9],
		  // u10_rmv_09_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[9],
		    u11_rmv_16_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[16],
		    u10_rmv_16_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[16],
		  // u11_rmv_17_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[17],
		  //u10_rmv_17_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[17],
		  // u11_rmv_24_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[24],
		  // u10_rmv_24_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[24],
		    u11_rmv_25_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[25],
		    u10_rmv_25_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[25],
		    u11_rmv_26_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[26],
		    u10_rmv_26_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[26],
		    u11_rmv_27_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[27],
		    u10_rmv_27_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[27],
		    u11_rmv_28_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[28],
		    u10_rmv_28_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[28],
		    u11_rmv_29_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[29],
		    u10_rmv_29_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[29],
		    u11_rmv_30_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[30],
		    u10_rmv_30_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[30],
		    u11_rmv_31_mvx = s_pContext->_output_read_comreg.s11_me_rMV_1st_vx_rb[31],
		    u10_rmv_31_mvy = s_pContext->_output_read_comreg.s10_me_rMV_1st_vy_rb[31];

	#if 0
	static UINT32 log_en=0;
	static UINT32 log_en_2=0;
	static UINT32 log_en_3=0;
	static UINT32 log_en_4=0;
	static UINT32 log_en_6=0;
	#endif

	
	static UINT32 RMV_zero_cnt=0;
	static UINT32 RMV_Con_OK_cnt=0;

	
	#if 0
	ReadRegister(FRC_TOP__software1__reg_software_22_ADDR, 0, 0, &log_en);		// YE Test for test_bit0
	ReadRegister(FRC_TOP__software1__reg_software_22_ADDR, 2, 2, &log_en_2);		// YE Test for test_bit0
	ReadRegister(FRC_TOP__software1__reg_software_22_ADDR, 3, 3, &log_en_3);		// YE Test for test_bit0
	ReadRegister(FRC_TOP__software1__reg_software_22_ADDR, 4, 4, &log_en_4);		// YE Test for test_bit0
	ReadRegister(FRC_TOP__software1__reg_software_22_ADDR, 6, 6, &log_en_6);		// YE Test for test_bit0
	
	
	if(log_en==1){
	printk("0=[%d,%d], 1=[%d,%d], 8=[%d,%d], 9=[%d,%d], 16=[%d,%d], 17=[%d,%d],  24=[%d,%d], 25=[%d,%d]   26=[%d,%d], 27=[%d,%d],   28=[%d,%d], 29=[%d,%d]   30=[%d,%d], 31=[%d,%d] \n", 
		u11_rmv_00_mvx, u10_rmv_00_mvy, u11_rmv_01_mvx, u10_rmv_01_mvy,u11_rmv_08_mvx, u10_rmv_08_mvy,u11_rmv_09_mvx, u10_rmv_09_mvy,
		u11_rmv_16_mvx, u10_rmv_16_mvy,u11_rmv_17_mvx, u10_rmv_17_mvy,
		u11_rmv_24_mvx, u10_rmv_24_mvy,u11_rmv_25_mvx, u10_rmv_25_mvy,u11_rmv_26_mvx, u10_rmv_26_mvy,u11_rmv_27_mvx, u10_rmv_27_mvy,
		u11_rmv_28_mvx, u10_rmv_28_mvy,u11_rmv_29_mvx, u10_rmv_29_mvy,u11_rmv_30_mvx, u10_rmv_30_mvy,u11_rmv_31_mvx, u10_rmv_31_mvy);
	}
	#endif



	u16_vip_source_type = s_pContext->_external_info.u16_source_type;
	
	//for DTV boundary gabage.
	//only apply in DTV

	#if 1
	if(((u16_vip_source_type >= 24) && (u16_vip_source_type<=33))
		   &&((((u11_rmv_00_mvx==0)&&(u10_rmv_00_mvy==0))
		   &&((u11_rmv_16_mvx==0)&&(u10_rmv_16_mvy==0)))
		   &&(((u11_rmv_25_mvx== -1)&&(u10_rmv_25_mvy==0))||((u11_rmv_26_mvx== -1)&&(u10_rmv_26_mvy==0))
		   ||((u11_rmv_27_mvx== -1)&&(u10_rmv_27_mvy==0))||(((u11_rmv_28_mvx== -1)&&(u10_rmv_28_mvy==0))
		   ||((u11_rmv_29_mvx== -1)&&(u10_rmv_29_mvy==0))||((u11_rmv_30_mvx== -1)&&(u10_rmv_30_mvy==0))
		   ||((u11_rmv_31_mvx== -1)&&(u10_rmv_31_mvy==0))))))  {


		RMV_Con_OK_cnt++;
		if(RMV_Con_OK_cnt>=2){
		
		pOutput->u1_Q13835_flag=1;
		RMV_Con_OK_cnt=0;
		
			}
		RMV_zero_cnt=0;
				#if 0
				if(log_en_2==1){
				printk("AAA 0=[%d,%d], 1=[%d,%d], 8=[%d,%d], 9=[%d,%d], 16=[%d,%d], 17=[%d,%d],  24=[%d,%d], 25=[%d,%d]   26=[%d,%d], 27=[%d,%d],   28=[%d,%d], 29=[%d,%d]   30=[%d,%d], 31=[%d,%d] \n", 
					u11_rmv_00_mvx, u10_rmv_00_mvy, u11_rmv_01_mvx, u10_rmv_01_mvy,u11_rmv_08_mvx, u10_rmv_08_mvy,u11_rmv_09_mvx, u10_rmv_09_mvy,
					u11_rmv_16_mvx, u10_rmv_16_mvy,u11_rmv_17_mvx, u10_rmv_17_mvy,
					u11_rmv_24_mvx, u10_rmv_24_mvy,u11_rmv_25_mvx, u10_rmv_25_mvy,u11_rmv_26_mvx, u10_rmv_26_mvy,u11_rmv_27_mvx, u10_rmv_27_mvy,
					u11_rmv_28_mvx, u10_rmv_28_mvy,u11_rmv_29_mvx, u10_rmv_29_mvy,u11_rmv_30_mvx, u10_rmv_30_mvy,u11_rmv_31_mvx, u10_rmv_31_mvy);
					
				}
				#endif
			}
	else if(((u16_vip_source_type >= 24) && (u16_vip_source_type<=33))
		   &&((((u11_rmv_00_mvx==0)&&(u10_rmv_00_mvy==0))
		   &&((u11_rmv_16_mvx==0)&&(u10_rmv_16_mvy==0)))
		   &&(((u11_rmv_25_mvx==0)&&(u10_rmv_25_mvy==0))&&((u11_rmv_26_mvx==0)&&(u10_rmv_26_mvy==0))
		   &&((u11_rmv_27_mvx==0)&&(u10_rmv_27_mvy==0))&&(((u11_rmv_28_mvx==0)&&(u10_rmv_28_mvy==0))
		   &&((u11_rmv_29_mvx==0)&&(u10_rmv_29_mvy==0))&&((u11_rmv_30_mvx==0)&&(u10_rmv_30_mvy==0))
		   &&((u11_rmv_31_mvx==0)&&(u10_rmv_31_mvy==0))))))  {

                RMV_zero_cnt++;
		   
		   //RMV_Con_OK_cnt=0;
		   		#if 0
				if(log_en_3==1){
				printk("BBB 0=[%d,%d], 1=[%d,%d], 8=[%d,%d], 9=[%d,%d], 16=[%d,%d], 17=[%d,%d],  24=[%d,%d], 25=[%d,%d]   26=[%d,%d], 27=[%d,%d],   28=[%d,%d], 29=[%d,%d]   30=[%d,%d], 31=[%d,%d] \n", 
					u11_rmv_00_mvx, u10_rmv_00_mvy, u11_rmv_01_mvx, u10_rmv_01_mvy,u11_rmv_08_mvx, u10_rmv_08_mvy,u11_rmv_09_mvx, u10_rmv_09_mvy,
					u11_rmv_16_mvx, u10_rmv_16_mvy,u11_rmv_17_mvx, u10_rmv_17_mvy,
					u11_rmv_24_mvx, u10_rmv_24_mvy,u11_rmv_25_mvx, u10_rmv_25_mvy,u11_rmv_26_mvx, u10_rmv_26_mvy,u11_rmv_27_mvx, u10_rmv_27_mvy,
					u11_rmv_28_mvx, u10_rmv_28_mvy,u11_rmv_29_mvx, u10_rmv_29_mvy,u11_rmv_30_mvx, u10_rmv_30_mvy,u11_rmv_31_mvx, u10_rmv_31_mvy);
					
				}		
				#endif

		}
	else if(RMV_zero_cnt>=7){

		pOutput->u1_Q13835_flag=0;
		// RMV_Con_OK_cnt=0;
		RMV_zero_cnt=0;
				#if 0
				if(log_en_4==1){
				printk("CCC 0=[%d,%d], 1=[%d,%d], 8=[%d,%d], 9=[%d,%d], 16=[%d,%d], 17=[%d,%d],  24=[%d,%d], 25=[%d,%d]   26=[%d,%d], 27=[%d,%d],   28=[%d,%d], 29=[%d,%d]   30=[%d,%d], 31=[%d,%d] \n", 
					u11_rmv_00_mvx, u10_rmv_00_mvy, u11_rmv_01_mvx, u10_rmv_01_mvy,u11_rmv_08_mvx, u10_rmv_08_mvy,u11_rmv_09_mvx, u10_rmv_09_mvy,
					u11_rmv_16_mvx, u10_rmv_16_mvy,u11_rmv_17_mvx, u10_rmv_17_mvy,
					u11_rmv_24_mvx, u10_rmv_24_mvy,u11_rmv_25_mvx, u10_rmv_25_mvy,u11_rmv_26_mvx, u10_rmv_26_mvy,u11_rmv_27_mvx, u10_rmv_27_mvy,
					u11_rmv_28_mvx, u10_rmv_28_mvy,u11_rmv_29_mvx, u10_rmv_29_mvy,u11_rmv_30_mvx, u10_rmv_30_mvy,u11_rmv_31_mvx, u10_rmv_31_mvy);
				
				}
				#endif
		}
	 else{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_invalid_cnt_th_ADDR, 6, 10, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_invalid_cnt_th);

		pOutput->u1_Q13835_flag=0;
		 RMV_Con_OK_cnt=0;
		RMV_zero_cnt=0;
		RMV_zero_cnt=0;		

		#if 0
		if(log_en_6==1){
				printk("DDD 0=[%d,%d], 1=[%d,%d], 8=[%d,%d], 9=[%d,%d], 16=[%d,%d], 17=[%d,%d],  24=[%d,%d], 25=[%d,%d]   26=[%d,%d], 27=[%d,%d],   28=[%d,%d], 29=[%d,%d]   30=[%d,%d], 31=[%d,%d] \n", 
					u11_rmv_00_mvx, u10_rmv_00_mvy, u11_rmv_01_mvx, u10_rmv_01_mvy,u11_rmv_08_mvx, u10_rmv_08_mvy,u11_rmv_09_mvx, u10_rmv_09_mvy,
					u11_rmv_16_mvx, u10_rmv_16_mvy,u11_rmv_17_mvx, u10_rmv_17_mvy,
					u11_rmv_24_mvx, u10_rmv_24_mvy,u11_rmv_25_mvx, u10_rmv_25_mvy,u11_rmv_26_mvx, u10_rmv_26_mvy,u11_rmv_27_mvx, u10_rmv_27_mvy,
					u11_rmv_28_mvx, u10_rmv_28_mvy,u11_rmv_29_mvx, u10_rmv_29_mvy,u11_rmv_30_mvx, u10_rmv_30_mvy,u11_rmv_31_mvx, u10_rmv_31_mvy);
					
				}
		#endif
	 	}


	if(RMV_Con_OK_cnt>=10)
	RMV_Con_OK_cnt=0;

	if(RMV_zero_cnt>=10)
	RMV_zero_cnt=0;
	
	 #endif
}


