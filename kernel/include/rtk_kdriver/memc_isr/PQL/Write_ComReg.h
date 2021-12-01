#ifndef _WRITE_COM_REG_H_
#define _WRITE_COM_REG_H_

typedef struct
{
	UBYTE u1_mc_lbmcMode_en;

	UBYTE u1_FBLevelWr_en;

	UBYTE u1_RimCtrl_wrt_en;
	UBYTE u1_dhClose_wrt_en;

	UBYTE u1_LGClr_wrt_en;
	UBYTE u1_LGSC_ctrl_wrt_en;

	UBYTE u1_dynME_acdcBld_wrt_en;
	UBYTE u1_bigFBlvl_dis_SCdet_en;

	UBYTE u1_LGBlkHstyClr_wrt_en;
	UBYTE u1_LGPixHstyClr_wrt_en;

	UBYTE u1_LGHstyClr_ClrLG_wrt_en;

	UBYTE u1_LGRg_dhclr_ctrl_wrt_en;
	UBYTE u1_LGRg_detect_adp_wrt_en;

	UBYTE u1_LGRg_rim_unbalance_wrt_en;
	UBYTE u1_dynamic_obme_sel_wrt_en;

	UBYTE u1_LG_SC_PtClose_wrt_en;

	UBYTE   u8_logo_blksameth_l_bidx0_lg;
	UBYTE   u8_logo_blksameth_l_bidx0_com;

	UBYTE   u8_logo_blksameth_a_bidx0_lg;
	UBYTE   u8_logo_blksameth_a_bidx0_com;

	UBYTE   u8_logo_blksameth_a_bidx10_lg;
	UBYTE   u8_logo_blksameth_a_bidx10_com;

	UBYTE   u8_blksameth_a_bidx4;
	UBYTE   u8_blksameth_h_bidx4;

	UBYTE   u8_logo_blkhsty_pth_bidx10_lg;
	UBYTE   u8_logo_blkhsty_pth_bidx10_com;

	UBYTE   u8_logo_blkhsty_nth_bidx10_lg;
	UBYTE   u8_logo_blkhsty_nth_bidx10_com;

	UBYTE   u8_logo_mv_diff_diff_th_lg;
	UBYTE   u8_logo_mv_diff_sad_th_lg;
	UBYTE   u8_logo_tmv_sad_th_lg;
	UBYTE   u8_logo_tmv_num_th_lg;

	UBYTE   u1_LG_netflix_wrt_en;

	UBYTE   u1_LG_lg16s_patch_wrt_en;

	UBYTE   u1_pql_debug_info_Show_en;

	UBYTE   u1_localfb_wrt_en;//fast motion

	//
	UBYTE  u1_scCtrl_wrt_en;
	UBYTE  u1_MECand_wrt_en;
	UBYTE  u1_MECandOfst_wrt_en;
	UBYTE  u1_MECandPnt_wrt_en;
	UBYTE  u1_GMV_wrt_en;
	UBYTE  u1_ME_ipme_flp_alp_wrt_en;
	UBYTE  u1_ME_mvd_cuv_wrt_en;
	UBYTE  u1_ME_AdptPnt_rnd_wrt_en;
	UBYTE  u1_logoCtrl_wrt_en;
	UBYTE  u1_dh_logo_bypass_en;
	UBYTE  u1_MEacdcBld_wrt_en;
	//

	UBYTE  u1_dh_accord_ctrl_en;

	UBYTE u1_ME1_DRP_en;
	UBYTE u1_ME_vst_en;
	UBYTE u1_Identification_Pattern_en;

	UBYTE u1_ME_Cost_Ctrl;

	UBYTE u1_Wrt_ComReg_Proc_en;

	UBYTE u1_logo_sc_FastDet_wrt_en;
	UBYTE u1_MEUpdStgh_wrt_en;
	UBYTE u1_Unsharp_Mask_wrt_en;
	UBYTE u1_MCSobj_wrt_en;
	UBYTE u1_ME2Sobj_wrt_en;
	UBYTE u1_OcclExt_wrt_en;
	bool  u1_rFB_show_en;
	
	UBYTE u1_DW_fmdet_4region_En;

}_PARAM_WRT_COM_REG;

typedef struct
{
	UBYTE  u8_lf_lbmcMode_pre;
	UBYTE  u8_hf_lbmcMode_pre;

	UBYTE  u8_FB_lvl;
	UBYTE  u1_LG_mb_wrt_en;
	UBYTE  u1_casino_RP_detect_true;

	UBYTE  u1_memc_mute_state_pre;
	UBYTE  u1_IP_preProcess_true;
	UBYTE  u1_IP_wrtAction_true;
	UBYTE  u1_MC_Logo_Close_true;
	UBYTE  u1_ME1_rnd_mask_Slow_Convergence_true;
	UBYTE  u1_ME1_rnd_mask_Fast_Convergence_true;
	UBYTE  u1_ME1_rnd_Slow_Convergence_true;
	UBYTE  u1_ME1_rndCand_Slow_Convergence_type;
	UBYTE  u1_ME1_rndCanddpnt_Slow_Convergence_true;
	UBYTE  u1_ME1_rndCanddpnt_Fast_Convergence_type;
	UBYTE  u1_ME1_adptpnt_rnd_gain_true;
	UBYTE  u1_ME1_adptpnt_rnd_Slow_Convergence_true;
	UBYTE  u1_GFB_specialScene_true;
	UBYTE  u1_MC_SmallObject_type;
	UBYTE  u1_ME2_SmallObject_type;
	UBYTE  u1_LFB_Dtl_weak_type;
	UBYTE  u1_LFB_Dtl_increase_true;
	UBYTE  u1_LFB_force_zero_true;
	UBYTE  u1_GFB_force_weak_type;
	UBYTE  u1_GFB_force_zero_true;
	UBYTE  u1_GFB_force_MAX_true;
	UBYTE  u1_GFB_modify_true;
	UBYTE  u1_FILM_force_mix_true;
	UBYTE  u1_KME_SR_increaseX_true;
	UBYTE  u1_KME_SR_increaseY_true;
	UBYTE  u1_KME_gmvd_cost_type;
	UBYTE  u1_IPME_increase_flp_type;
	UBYTE  u1_ME1_DRP_type;
	UBYTE  u1_GFB_Special_apply;
	UBYTE  u8_01_Black_19YO1_flag ; //YE Test for tv006 01_Black_19YO1 issue 
	UBYTE  u1_Q13722_flag ; //Q-13722 issue 
}_OUTPUT_WRT_COM_REG;

VOID Wrt_ComReg_Init(_OUTPUT_WRT_COM_REG *pOutput);

VOID Wrt_ComReg_Proc_oneFifth_outInterrupt(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput);
VOID Wrt_ComReg_Proc_intputInterrupt(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput);
VOID Wrt_ComReg_Proc_outputInterrupt(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput);

DEBUGMODULE_BEGIN(_PARAM_WRT_COM_REG, _OUTPUT_WRT_COM_REG)
	ADD_PARAM_DES(UBYTE, u1_mc_lbmcMode_en,            1,  "")

	ADD_DUMMY_PARAM()
	ADD_PARAM_DES(UBYTE, u1_FBLevelWr_en,              1,  "")

	ADD_DUMMY_PARAM()
	ADD_PARAM_DES(UBYTE, u1_RimCtrl_wrt_en,            1, "")

	ADD_DUMMY_PARAM()
	ADD_PARAM_DES(UBYTE, u1_dhClose_wrt_en,            1, "")

	ADD_DUMMY_PARAM()
	ADD_PARAM_DES(UBYTE, u1_LGClr_wrt_en,              1, "")
	ADD_PARAM_DES(UBYTE, u1_LGSC_ctrl_wrt_en,          0, "")

	ADD_DUMMY_PARAM()
	ADD_PARAM_DES(UBYTE, u1_dynME_acdcBld_wrt_en,         0, "dynamic ME, fadeInout write acdc bld Enable")

	////////  output  //////////////////////////////////////////////////////////////////

//	ADD_DUMMY_OUTPUT()
	ADD_OUTPUT(UBYTE, u8_lf_lbmcMode_pre)
	ADD_OUTPUT(UBYTE, u8_hf_lbmcMode_pre)

	DEBUGMODULE_END

#endif
