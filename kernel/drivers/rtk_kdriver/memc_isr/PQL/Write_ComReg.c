#include "memc_isr/PQL/PQLPlatformDefs.h"
#include "memc_isr/PQL/PQLContext.h"
#include "memc_isr/PQL/PQLGlobalDefs.h"
#include "memc_isr/Common/memc_type.h"
#include "memc_isr/HAL/hal_ip.h"
#include "memc_isr/HAL/hal_post.h"
#include <tvscalercontrol/scaler/scalerstruct.h>

#define TAG_NAME "MEMC"
extern int LowDelay_mode;
extern UBYTE u8_MEMCMode;
extern UINT32 dejudder;
extern UINT32 g_cur_cadence_id;
extern UINT32 g_cur_cadence_out;
extern unsigned int vpq_project_id;
extern unsigned int vpqex_project_id;
UINT32 mc_fb_lvl_force_en_tmp = 0;
UINT32 mc_logo_phase_fb_phase_en = 0;
UINT32 mc_pre_phase_fb_phase_en = 0;
UINT32 mc_pt_phase_fb_phase_en = 0;
UINT32 mc_fb_lvl_force_value = 0;
unsigned char g_Q13722_flag = 0;
extern UBYTE scalerVIP_Get_MEMCPatternFlag_Identification(UINT16 nNumber);
extern VOID MEMC_Lib_MC_IndexCheck(VOID);
extern VOID MEMC_LibResetFlow(VOID);
extern VOID MEMC_Lib_VR360_Flow(VOID);
extern VOID MEMC_Lib_CadenceChangeCtrl(VOID);
extern VOID MEMC_LibSet_MCDMA_DB_apply(VOID);
extern VOID MEMC_Lib_Freeze(unsigned char enable);
extern VOID MEMC_Lib_SetLineMode(unsigned char u1_enable);
extern unsigned char MEMC_Lib_get_LineMode_flag(VOID);
extern VOID MEMC_LibSet_PQC_DB_en(unsigned int u1_enable);
extern VOID MEMC_LibSet_MCDMA_DB_en(unsigned int u1_enable);

VOID Wrt_7segment_show(const _PARAM_WRT_COM_REG *pParam)
{

#if 0 // AI_PQ_DEMO, lesley 0812
#if defined(CONFIG_RTK_AI_DRV)
	extern int show_ai_sc;
	extern int scene_nn;
	extern int scene_pq;
	UINT32  u32_wrt_data;//, u32_wrt_data2;
	extern unsigned int debug_draw_cnt;
	// =======================================================================================================================
	// 7seg_0 [0~15]

	u32_wrt_data = ((rtd_inl(0xb802a47c)&0x00000001)||((rtd_inl(0xb802a4bc)&0x80000000)>>31))||(rtd_inl(0xb802e500)&0x00000001)||((rtd_inl(0xB802b740)&0x10000000)>>28);//shp
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 0, 3, u32_wrt_data);
	u32_wrt_data = show_ai_sc;
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 4, 7, u32_wrt_data);
	u32_wrt_data = 0;
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 8, 15, u32_wrt_data);

	/*u32_wrt_data = (rtd_inl(0xB802b740)&0x10000000)>>28;//shp
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 0, 3, u32_wrt_data);
	u32_wrt_data = (rtd_inl(0xb802e500)&0x00000001);//dcc
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 4, 7, u32_wrt_data);
	u32_wrt_data = (rtd_inl(0xb802a47c)&0x00000001)&&((rtd_inl(0xb802a4bc)&0x80000000)>>31);//icm
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 8, 11, u32_wrt_data);
	u32_wrt_data = 0;
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 12, 15, u32_wrt_data);*/
	// =======================================================================================================================

	// =======================================================================================================================
	// 7seg_1 [16~31]
	u32_wrt_data = scene_nn;
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 16, 31, u32_wrt_data);
	rtd_outl(0xb809d0b0, 0x041f4000);// change position

	// =======================================================================================================================

	// =======================================================================================================================
	// 7seg_2 [0~15]

	u32_wrt_data = debug_draw_cnt;
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 0, 15, u32_wrt_data);

	// =======================================================================================================================

	// =======================================================================================================================
	// 7seg_3 [16~31]
	u32_wrt_data = scene_pq;
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 31, u32_wrt_data);
	rtd_outl(0xb809d0b8, 0x00258000);// change position

	// =======================================================================================================================

	// for scene_detection


#endif
#endif // end AI_PQ_DEMO


#if 1 //#ifdef RES_DET_DEMO set #if 0
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32  u32_wrt_data = 0;//, u32_wrt_data2;

	// =======================================================================================================================
	// 7seg_0 [0~15]
	UINT32 u32_cad_data = 0;
	u32_cad_data = ((s_pContext->_output_filmDetectctrl.u1_mixMode == 1) ? 0xF : s_pContext->_output_filmDetectctrl.u8_cur_cadence_Id[_FILM_ALL])&0xF;
	u32_wrt_data = ((u32_cad_data<<4) | (s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL]&0xF)) & 0xFF;
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 0, 7, u32_wrt_data);

	//u32_wrt_data = _MIN_(s_pContext->_output_frc_phtable.u8_deblur_lvl_pre >> 3, 0x0F);
	u32_wrt_data = ((rtd_inl(0xb800011c)>>30)&0x1)|
				   (((rtd_inl(0xb8099924)>>4)&0x1)<<1)|
				   (((rtd_inl(0xb8099924)>>13)&0x1)<<2)|
				   (LowDelay_mode<<3);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 8, 11, u32_wrt_data);

	u32_wrt_data = _MIN_(s_pContext->_output_frc_phtable.u8_dejudder_lvl_pre >> 3, 0x0F);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 12, 15, u32_wrt_data);
	// =======================================================================================================================

	// =======================================================================================================================
	// 7seg_1 [16~31]
	u32_wrt_data = s_pContext->_output_wrt_comreg.u8_FB_lvl;
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 16, 23, u32_wrt_data);

	//u32_wrt_data = s_pContext->_output_mc_lbmcswitch.u8_lf_lbmcMode;
	u32_wrt_data = s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true|
	  			(s_pContext->_output_wrt_comreg.u1_casino_RP_detect_true<< 3);
	//u32_wrt_data = s_pContext->_output_fblevelctrl.u8_pan_scene_hold_cnt;
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 24, 27, u32_wrt_data);

	u32_wrt_data = s_pContext->_output_dh_close.u1_closeDh_act|
				  ((s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVx_Step!=0)?0x2:0)|
				  ((s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVy_Step!=0)?0x4:0);
	//u32_wrt_data = s_pContext->_output_frc_sceneAnalysis.u1_RgRotat_true;
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 28, 31, u32_wrt_data);
	// =======================================================================================================================

	// =======================================================================================================================
	// 7seg_2 [0~15]
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 0, 3, s_pContext->_output_dh_close.u5_dh_bad_rgn_num);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 4, 7, s_pContext->_output_dh_close.u5_dh_good_rgn_num);

	//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 8, 15, s_pContext->_output_FRC_LgDet.u8_logo_sc_FastDet_cntholdfrm);

	u32_wrt_data = s_pContext->_output_dh_close.u1_meAllDtl_close |
				   (s_pContext->_output_dh_close.u1_lbmc_switch_close << 1) |
				   (s_pContext->_output_dh_close.u1_fblvl_close << 2) |
				   (s_pContext->_output_dh_close.u1_pfvconf_close << 3) |
				   (frc_cadTable[s_pContext->_output_filmDetectctrl.u8_cur_cadence_Id[_FILM_ALL]].u1_isLowFrameRate << 4) |
				   (s_pContext->_output_dh_close.u1_dh_fadeInOut_close << 5) |
				   (s_pContext->_output_dh_close.u1_dh_sml_rgnAction_close << 6)|
				   (s_pContext->_output_dh_close.u1_panning_close<<7);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 8, 15, u32_wrt_data);

	//gmv SR
	//u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u8_ME1_searchRange_x,0,255);  //x
	//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 0, 7, u32_wrt_data);
	//u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u8_ME1_searchRange_y,0,255);  //y
	//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 8, 15, u32_wrt_data);
	// =======================================================================================================================


	// =======================================================================================================================
	// 7seg_3 [16~31]
	//u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u4_fadeInOut_apl_diff_alpha,0,15);
	//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 28, 31, u32_wrt_data);

	// 7seg_3, //// logo clear flag.
	//u32_wrt_data = s_pContext->_output_FRC_LgDet.u1_blkclr_glbstatus;
	//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 16, u32_wrt_data);
	RTKReadRegister(0xB80282E4, &u32_wrt_data);
	u32_wrt_data = (270000000/(u32_wrt_data+1))+5;

	//output timing
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 24, 27, (u32_wrt_data/10)%10);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 28, 31, (u32_wrt_data/10)/10);

	// motion dir and dtl dir
	//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 24, 27, s_pContext->_output_me_sceneAnalysis.u2_GMV_single_move);
	//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 28, 31, s_pContext->_output_me_sceneAnalysis.u2_mcDtl_HV);

	//zoom[0],swing[1],RgRotat[2],EPG[3]
	u32_wrt_data = s_pContext->_output_frc_sceneAnalysis.u1_Zoom_true  |
				   ((s_pContext->_output_wrt_comreg.u1_IP_preProcess_true|s_pContext->_output_wrt_comreg.u1_IP_wrtAction_true )<< 1) |
				   (s_pContext->_output_frc_sceneAnalysis.u1_RgRotat_true<<2) |
				   ((s_pContext->_output_me_vst_ctrl.u1_detect_blackBG_VST_trure)<<3);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 20, 23, u32_wrt_data);

	// panning[0-1], logo clear flag[2], logo sc status[3]
	u32_wrt_data = (s_pContext->_output_me_sceneAnalysis.u2_panning_flag) |
				   (s_pContext->_output_FRC_LgDet.u1_blkclr_glbstatus << 2) |
	               (s_pContext->_output_FRC_LgDet.u1_logo_sc_status << 3);


	if(pParam->u1_rFB_show_en)
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 19, (s_pContext->_output_bRMV_rFB_ctrl.u1_rFB_panning));
	else
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 19, (s_pContext->_output_me_sceneAnalysis.u2_panning_flag));
	
	// =======================================================================================================================

#endif
#if 0
	// arrange from left to right
	// =======================================================================================================================
	// 7seg_0 [0~15]
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 12, 15, s_pContext->_output_me_sceneAnalysis.u2_panning_flag);
	u32_wrt_data = ( s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true + (s_pContext->_output_wrt_comreg.u1_casino_RP_detect_true << 3) );
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 8, 11, u32_wrt_data);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 4, 7, s_pContext->_output_dh_close.u1_closeDh_act);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 0, 3, 0x0);
	// =======================================================================================================================
	// 7seg_1 [16~31]
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 28, 31, 0x0);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 24, 27, 0x0);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 20, 23, 0x0);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 16, 19, 0x0);
	// =======================================================================================================================

	// =======================================================================================================================
	// 7seg_2 [0~15]
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 12, 15, 0x0);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR,  8, 11, 0x0);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR,  4,  7, 0x0);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR,  0,  3, 0x0);
	// =======================================================================================================================

	// =======================================================================================================================
	// 7seg_3 [16~31]
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 28, 31, 0x0);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 24, 27, 0x0);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 20, 23, s_pContext->_output_me_sceneAnalysis.u1_MainObject_Move);
	u32_wrt_data = (scalerVIP_Get_MEMCPatternFlag_Identification(100) || scalerVIP_Get_MEMCPatternFlag_Identification(101))? 3 : s_pContext->_output_me_sceneAnalysis.u3_occl_ext_level;
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 19, u32_wrt_data);
	// =======================================================================================================================
#endif

#if 0
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 u32_wrt_data = 0;
	//UINT32 u32_RB_val;

	// =======================================================================================================================
	// 7seg_0 [0~15]
	u32_wrt_data = (s_pContext->_output_dh_close.u1_closeDh_act) + (s_pContext->_output_frc_sceneAnalysis.u6_mv_accord_hold_cnt  << 4);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 0, 15, u32_wrt_data);
	u32_wrt_data = 0;
	// =======================================================================================================================

	// =======================================================================================================================
	// 7seg_1 [16~31]
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 16, 31, 0);
	// =======================================================================================================================

	// =======================================================================================================================
	// 7seg_2 [0~15]
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 0, 3,
		(s_pContext->_output_me_sceneAnalysis.u1_pure_TopDownPan_flag ) &&
		(s_pContext->_output_me_sceneAnalysis.u2_panning_flag) );
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 4, 7, s_pContext->_output_me_sceneAnalysis.u1_pure_TopDownPan_flag);
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 8, 15, s_pContext->_output_me_sceneAnalysis.u8_pure_TopDownPan_cnt);
	// =======================================================================================================================

	// =======================================================================================================================
	// 7seg_3 [16~31]
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 19, (s_pContext->_output_me_sceneAnalysis.u2_panning_flag) );
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 20, 23, (s_pContext->_output_me_sceneAnalysis.u1_Natural_HighFreq_detect_true) );
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 24, 27, (s_pContext->_output_me_sceneAnalysis.s10_me_GMV_1st_vy_rb_iir > 5) );
	WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 28, 31,
		( (s_pContext->_output_me_sceneAnalysis.u2_panning_flag != 0) &&
		  (s_pContext->_output_me_sceneAnalysis.u1_Natural_HighFreq_detect_true != 0) &&
		  (s_pContext->_output_me_sceneAnalysis.s10_me_GMV_1st_vy_rb_iir > 5)
		 )
	);
	// =======================================================================================================================
#endif

	//SE_Film
	//u32_wrt_data = g_cur_cadence_id;
	//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 19, u32_wrt_data);

	//u32_wrt_data = g_cur_cadence_out;
	//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 20, 23, u32_wrt_data);
#if 0

	if (pParam->u8_show7seg_mode == 0)  //common show
	{
		// 7seg_0

	//	u32_wrt_data = (s_pContext->_output_read_comreg.u3_ipme_filmMode_rb >> 1);
		UINT32 u32_cad_data = 0;
		u32_cad_data = ((s_pContext->_output_filmDetectctrl.u1_mixMode == 1) ? 0xF : s_pContext->_output_filmDetectctrl.u8_cur_cadence_Id[_FILM_ALL])&0xF;
	    	u32_wrt_data = ((u32_cad_data<<4) | (s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL]&0xF)) & 0xFF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 0, 7, u32_wrt_data);

		u32_wrt_data = _MIN_(s_pContext->_output_frc_phtable.u8_deblur_lvl_pre >> 3, 0x0F);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 8, 11, u32_wrt_data);

		u32_wrt_data = _MIN_(s_pContext->_output_frc_phtable.u8_dejudder_lvl_pre >> 3, 0x0F);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 12, 15, u32_wrt_data);

		// 7seg_1
			u32_wrt_data = s_pContext->_output_wrt_comreg.u8_FB_lvl;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 16, 23, u32_wrt_data);

		u32_wrt_data = s_pContext->_output_mc_lbmcswitch.u8_lf_lbmcMode;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 24, 27, u32_wrt_data);

		u32_wrt_data = s_pContext->_output_dh_close.u1_closeDh_act;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 28, 31, u32_wrt_data);

		// 7seg_2 SceneAnalysis
		//  fadeIn/out
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u4_fadeInOut_cnt_alpha,0,15);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 0, 3, u32_wrt_data);
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u4_fadeInOut_acdc_sad_alpha,0,15);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 4, 7, u32_wrt_data);
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u4_fadeInOut_bv_sad_alpha,0,15);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 8, 11, u32_wrt_data);
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u4_fadeInOut_conf,0,15);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 12, 15, u32_wrt_data);

		//gmv SR
		//u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u8_ME1_searchRange_x,0,255);  //x
		//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 0, 7, u32_wrt_data);
		//u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u8_ME1_searchRange_y,0,255);  //y
		//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 8, 15, u32_wrt_data);

		// 7seg_3, //// logo clear flag.
		u32_wrt_data = s_pContext->_output_FRC_LgDet.u1_blkclr_glbstatus;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 16, u32_wrt_data);

		//u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u4_fadeInOut_apl_diff_alpha,0,15);
		//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 28, 31, u32_wrt_data);

		RTKReadRegister(0xB80282E4, &u32_wrt_data);
		u32_wrt_data = (270000000/(u32_wrt_data+1))+5;

		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 24, 27, (u32_wrt_data/10)%10);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 28, 31, (u32_wrt_data/10)/10);

		//u32_wrt_data = s_pContext->_output_FRC_LgDet.u1_blkclr_glbstatus;
		//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 16, u32_wrt_data);   //x
		//u32_wrt_data = _CLIP_UBOUND_(s_pContext->_output_frc_sceneAnalysis.u2_searchRange_x_status,15);
		//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 24, 27, u32_wrt_data);
		//u32_wrt_data = _CLIP_UBOUND_(s_pContext->_output_frc_sceneAnalysis.u2_searchRange_y_status,15);  //y
		//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 28, 31, u32_wrt_data);

		//dehalo close
		u32_wrt_data = s_pContext->_output_dh_close.u1_panning_close;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 20, 23, u32_wrt_data);

		//logo
		u32_wrt_data = s_pContext->_output_FRC_LgDet.u1_blkclr_glbstatus;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 19, u32_wrt_data);

	}
	else if (pParam->u8_show7seg_mode == 1) // for boundary
	{
		// 7seg_0
		//avgSC
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u32_insidePan_avgSc/32, 0, 255)  & 0xFF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 0, 7, u32_wrt_data);
		//avgTc
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u32_insidePan_avgTc/32,0,255) & 0xFF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 8, 15, u32_wrt_data);

		//boundary small
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u8_BdySmall_lft_cnt,0,15) & 0x0F;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 16, 19, u32_wrt_data);
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u8_BdySmall_rht_cnt,0,15) & 0x0F;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 20, 23, u32_wrt_data);
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u8_dynSAD_Diff_Gain,0,255) & 0xFF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 24, 31, u32_wrt_data);

		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u8_is_insidePan,0,1);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 0, 3, u32_wrt_data);

		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u1_is_saddiff_large,0,1);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 4, 7, u32_wrt_data);

		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u32_insidePan_avgAbsMVY/8,0,15);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 8, 11,  u32_wrt_data);

		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u32_insidePan_avgAbsMVX/8,0,15);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 12, 15, u32_wrt_data);


		u32_wrt_data =  s_pContext->_output_dh_close.u1_closeDh_act;
		//u32_wrt_data = u32_wrt_data == 1 ? 0 : 1;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 28, 31,u32_wrt_data);

		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u1_is_BdySmall_MV,0,1);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 24, 27,u32_wrt_data);

		u32_wrt_data = s_pContext->_output_dh_close.u1_panning_close;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 20, 23, u32_wrt_data);

		//logo
		u32_wrt_data = s_pContext->_output_FRC_LgDet.u1_blkclr_glbstatus;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 19,u32_wrt_data);

	}
	else if(pParam->u8_show7seg_mode == 2)  //fade in out
	{
		// 7seg_0 SceneAnalysis
		u32_wrt_data = s_pContext->_output_me_sceneAnalysis.u1_casino_RP_detect_true;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 0, 3, u32_wrt_data);

		u32_wrt_data = s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 4, 7, u32_wrt_data);

		u32_wrt_data = s_pContext->_output_me_sceneAnalysis.u1_ToL10_RP_true;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 8, 11, u32_wrt_data);

		u32_wrt_data = s_pContext->_external_info.u1_PictureMode_Chg;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 12, 15, u32_wrt_data);

		// 7seg_1 SceneAnalysis

		// 7seg_2 SceneAnalysis
		//  fadeIn/out
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u4_fadeInOut_cnt_alpha,0,15);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 0, 3, u32_wrt_data);
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u4_fadeInOut_cnt_Thr_alpha,0,15);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 4, 7, u32_wrt_data);
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u4_fadeInOut_apl_diff_alpha,0,15);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 8, 11, u32_wrt_data);
		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u4_fadeInOut_conf_iir,0,15);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 12, 15, u32_wrt_data);

		// 7seg_3, //// logo clear flag.
		u32_wrt_data = s_pContext->_output_FRC_LgDet.u1_blkclr_glbstatus;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 16, u32_wrt_data);     //x

		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u2_searchRange_y_status,0,15);  //y
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 28, 31, u32_wrt_data);

		//u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u2_searchRange_x_status,0,15);
		//WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 24, 27, u32_wrt_data);

		u32_wrt_data = _CLIP_(s_pContext->_output_frc_sceneAnalysis.u5_dc_ac_bld_alpha,0,15);
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 24, 27, u32_wrt_data);

		u32_wrt_data = s_pContext->_output_dh_close.u1_closeDh_act;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 20, 23, u32_wrt_data);
	}
	else if (pParam->u8_show7seg_mode == 3)
	{
		u32_wrt_data = s_pContext->_output_frc_sceneAnalysis.s2m_12_cnt_iir  & 0xFF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 0, 7, u32_wrt_data);

		u32_wrt_data = _MIN_(_ABS_(s_pContext->_output_frc_sceneAnalysis.s2m_1st_mvx)/4, 255) & 0xFF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_0_ADDR, 8, 15, u32_wrt_data);

		u32_wrt_data = _MIN_(_ABS_(s_pContext->_output_frc_sceneAnalysis.s2m_1st_mvy)/4, 255) & 0xFF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 16, 23, u32_wrt_data);

		u32_wrt_data = _MIN_(_ABS_(s_pContext->_output_frc_sceneAnalysis.s2m_2nd_mvx)/8, 15) & 0xF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 24, 27, u32_wrt_data);

		u32_wrt_data = _MIN_(_ABS_(s_pContext->_output_frc_sceneAnalysis.s2m_2nd_mvy)/8, 15) & 0xF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_1_ADDR, 28, 31, u32_wrt_data);

		//goodGMVcnt
		u32_wrt_data = _CLIP_UBOUND_(s_pContext->_output_frc_sceneAnalysis.u8_goodGmv_cnt, 255)  & 0xFF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 0, 7, u32_wrt_data);
		//diffGMVcnt
		u32_wrt_data = _CLIP_UBOUND_(s_pContext->_output_frc_sceneAnalysis.u8_diffGmv_cnt,255) & 0xFF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_2_ADDR, 8, 15, u32_wrt_data);

		//
		u32_wrt_data = _CLIP_UBOUND_(s_pContext->_output_frc_sceneAnalysis.s2m_1st_cnt, 255)  & 0xFF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 23, u32_wrt_data);

		u32_wrt_data = _CLIP_UBOUND_(s_pContext->_output_frc_sceneAnalysis.s2m_2nd_cnt, 255)  & 0xFF;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 24, 31, u32_wrt_data);
	}
	else if(pParam->u8_show7seg_mode == 4)
	{

		u32_wrt_data = s_pContext->_output_me_sceneAnalysis.u8_EPG_apply>0;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 28, 31, u32_wrt_data);

		u32_wrt_data = s_pContext->_output_Patch_Manage.u1_patch_highFreq_rp_true;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 24, 27,u32_wrt_data);

		u32_wrt_data = s_pContext->_output_Patch_Manage.u1_patch_highFreq_zmv_true;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 20, 23, u32_wrt_data);

		u32_wrt_data = s_pContext->_output_FRC_LgDet.u1_lg_UXN_patch_det;
		WriteRegister(FRC_TOP__KPOST_TOP__post_seg_disp_data_3_ADDR, 16, 19, u32_wrt_data);
	}
#endif
}

//extern BOOL MEMC_LibSetMEMCFrameRepeatEnable(BOOL bEnable, BOOL bForce);
VOID FB_PureVideo_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	PQL_INPUT_FRAME_RATE in_fmRate = s_pContext->_external_data._input_frameRate;
	UINT32 Repeat_PureVideo_wrtAction_en = 0;
	UBYTE  u8_bPCMode_flag =  (s_pContext->_external_data._output_mode == _PQL_OUT_PC_MODE) ? 1 : 0;
	ReadRegister(FRC_TOP__software1__reg_software_00_ADDR, 24, 24, &Repeat_PureVideo_wrtAction_en);

	//rtd_printk(KERN_NOTICE, TAG_NAME, "[FB_PureVideo_wrtAction][%d, %d]\n", in_fmRate, s_pContext->_output_frc_phtable.u1_is_inFormat_PureVideo);

	if(Repeat_PureVideo_wrtAction_en) // cadence / tru-motion / in frame rate
	{
		if(in_fmRate >= _PQL_IN_48HZ){
			if(s_pContext->_output_frc_phtable.u1_is_inFormat_PureVideo){

				WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_en_ADDR, 14, 14,0x1);
				WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_value_ADDR, 15, 22,0x0);
				WriteRegister(FRC_TOP__MC2__mc_var_lpf_en_ADDR, 0, 1, 0x0);
				WriteRegister(FRC_TOP__MC__mc_bld_flbk_bypass_ADDR, 6, 7,0x2);
				WriteRegister(FRC_TOP__MC__mc_bld_z_type_flbk_ADDR, 12, 14,0x1);
			}else{

				if(!(( u8_MEMCMode == 0) || (u8_MEMCMode == 4 && dejudder == 0)|| u8_bPCMode_flag )){

					 WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_en_ADDR, 14, 14,0x0);
					 WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_value_ADDR, 15, 22,0x0);
					 WriteRegister(FRC_TOP__MC2__mc_var_lpf_en_ADDR, 0, 1, 0x3);
				}

				WriteRegister(FRC_TOP__MC__mc_bld_flbk_bypass_ADDR, 6, 7,0x0);
				WriteRegister(FRC_TOP__MC__mc_bld_z_type_flbk_ADDR, 12, 14,0x3);
			}
		}else{

			WriteRegister(FRC_TOP__MC__mc_bld_flbk_bypass_ADDR, 6, 7,0x0);
			WriteRegister(FRC_TOP__MC__mc_bld_z_type_flbk_ADDR, 12, 14,0x3);

		}
	}
}

VOID FB_NoNeedToDoFRC_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	UINT32 NoNeedToDoFRC_wrtAction_en = 0;
	UBYTE  u8_NoNeedToDoFRC = (u8_MEMCMode == 4 && dejudder == 0) ? 1 : 0;
	static UBYTE  NoNeedToDoFRC_wrtAction_status = 0;
	ReadRegister(FRC_TOP__software1__reg_software_00_ADDR, 24, 24, &NoNeedToDoFRC_wrtAction_en);

	//rtd_printk(KERN_NOTICE, TAG_NAME, "[FB_PureVideo_wrtAction][%d, %d]\n", in_fmRate, s_pContext->_output_frc_phtable.u1_is_inFormat_PureVideo);

	if(NoNeedToDoFRC_wrtAction_en && u8_NoNeedToDoFRC) // cadence / tru-motion / in frame rate
	{
		WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_en_ADDR, 14, 14,0x1);
		WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_value_ADDR, 15, 22,0x0);
		WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 17, 17, 0x0);//u1_mc2_var_lpf_wrt_en
		WriteRegister(FRC_TOP__MC2__mc_var_lpf_en_ADDR, 0, 1, 0x0);
		//WriteRegister(FRC_TOP__MC__mc_bld_flbk_bypass_ADDR, 6, 7,0x2);
		//WriteRegister(FRC_TOP__MC__mc_bld_z_type_flbk_ADDR, 12, 14,0x1);
		NoNeedToDoFRC_wrtAction_status = 1;
	}
	else{
		if(NoNeedToDoFRC_wrtAction_status == 1){
			WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_en_ADDR, 14, 14,0x0);
			WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_value_ADDR, 15, 22,0x0);
			WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e4_ADDR, 17, 17, 0x1);//u1_mc2_var_lpf_wrt_en
			//WriteRegister(FRC_TOP__MC__mc_bld_flbk_bypass_ADDR, 6, 7,0x0);
			//WriteRegister(FRC_TOP__MC__mc_bld_z_type_flbk_ADDR, 12, 14,0x3);
		}
		NoNeedToDoFRC_wrtAction_status = 0;
	}
}

VOID mc_lbmcMode_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UBYTE u8_lf_lbmcMode = s_pContext->_output_mc_lbmcswitch.u8_lf_lbmcMode;
	UBYTE u8_hf_lbmcMode = s_pContext->_output_mc_lbmcswitch.u8_hf_lbmcMode;
	UBYTE lbmc_mode_from_offset = 8;//enable_lbmc_mode_from

	if (pParam->u1_mc_lbmcMode_en == 1)
	{
		if (u8_lf_lbmcMode != pOutput->u8_lf_lbmcMode_pre)
		{
			//WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_force_mc_mode), u8_lf_lbmcMode);
			WriteRegister(KIWI_REG(FRC_TOP__LBMC__lbmc_mode_lf), u8_lf_lbmcMode+lbmc_mode_from_offset);
			pOutput->u8_lf_lbmcMode_pre = u8_lf_lbmcMode;
		}

		if (u8_hf_lbmcMode != pOutput->u8_hf_lbmcMode_pre)
		{
			//WriteRegister(KIWI_REG(FRC_TOP__KPHASE__kphase_force_mc_mode_hf), u8_hf_lbmcMode);
			WriteRegister(KIWI_REG(FRC_TOP__LBMC__lbmc_mode_hf),  u8_hf_lbmcMode+lbmc_mode_from_offset);
			WriteRegister(KIWI_REG(FRC_TOP__LBMC__lbmc_mode_lfh), u8_hf_lbmcMode+lbmc_mode_from_offset);
			pOutput->u8_hf_lbmcMode_pre = u8_hf_lbmcMode;
		}

	}
}


VOID scCtrl_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	static UBYTE u1_ori_sc_me1_en = 0;
	static BOOL u1_sc_me1_en_chg = 0;
	//static SINT32 SC_hold_panning_cnt = 0;
	UINT32 u32_RB_val;
	
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UBYTE  u8_cadence_Id = s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];
	PQL_INPUT_FRAME_RATE in_fmRate = s_pContext->_external_data._input_frameRate;

	UINT32 u32_RB_debug;
	ReadRegister(FRC_TOP__software1__reg_software_25_ADDR, 31, 31, &u32_RB_debug);

	if(pParam->u1_scCtrl_wrt_en == 0)
		return;

	if(s_pContext->_external_info.s16_speed == 256 || s_pContext->_external_info.s16_speed == -256)  // normal speed
	{
		if(u1_sc_me1_en_chg  == 1) //need to recovery
		{
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_en),  u1_ori_sc_me1_en);
			u1_sc_me1_en_chg = 0;
		}
	}
	else
	{
		if(u1_sc_me1_en_chg  == 0)
		{
			ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_en), &u32_RB_val);
			u1_ori_sc_me1_en = u32_RB_val;
			u1_sc_me1_en_chg = 1;
		}
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_en), 0);
	}

	//if(SC_hold_panning_cnt>0) SC_hold_panning_cnt--;
	
	if(s_pContext->_external_data._output_mode != _PQL_OUT_PC_MODE)
	{		
	//	if(u32_RB_debug == 1){
	//		printk(KERN_EMERG"(%d, %d),%d,%d, %d, %d\n", s_pContext->_output_me_sceneAnalysis.u2_panning_flag, s_pContext->_output_frc_sceneAnalysis.u1_specialscfb_true,SC_hold_panning_cnt 
	//			, s_pContext->_output_me_sceneAnalysis.u8_big_apldiff_hold_cnt, s_pContext->_output_frc_sceneAnalysis.u32_new_saddiff_th, s_pContext->_output_me_sceneAnalysis.u32_big_apldiff_saddiff_th);
	//	}
		if(s_pContext->_output_frc_sceneAnalysis.u8_VOSeek_prt_apply>0)// add by LRL for VO_seek SC blending ghost @20161124
		{
	                WriteRegister(FRC_TOP__MC__mc_scene_change_fb_ADDR, 10, 10, 0x0);
		}
		else if ((s_pContext->_output_frc_phtable.u1_is_inFormat_PureVideo) ||(s_pContext->_output_filmDetectctrl.u1_mixMode == 1) )// video cadence case use large threshold to prevent easy scene change for moving video text
		{
			WriteRegister(FRC_TOP__MC__mc_scene_change_fb_ADDR, 10, 10, 0x0);
			WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_saddiff_th_ADDR, 0, 30, 0x980000);
			WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_hold_cnt_ADDR, 0, 7, 0x2);
		}
		//else if (( (s_pContext->_output_me_sceneAnalysis.u2_panning_flag == 1) || (s_pContext->_output_me_sceneAnalysis.u1_SC_sim_scenes_hold_panning_flag == 1)) && s_pContext->_output_frc_sceneAnalysis.u1_specialscfb_true)
		else if (( s_pContext->_output_me_sceneAnalysis.u2_panning_flag == 1) && s_pContext->_output_frc_sceneAnalysis.u1_specialscfb_true)
		{
			//SC_hold_panning_cnt = 18;
			WriteRegister(FRC_TOP__MC__mc_scene_change_fb_ADDR, 10, 10, 0x0);
			WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_saddiff_th_ADDR, 0, 30, s_pContext->_output_frc_sceneAnalysis.u32_new_saddiff_th + 0x400000);
		}
		else if(s_pContext->_output_frc_sceneAnalysis.u1_specialscfb_true)
		{
				WriteRegister(FRC_TOP__MC__mc_scene_change_fb_ADDR, 10, 10, 0x0);
				WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_saddiff_th_ADDR, 0, 30, s_pContext->_output_frc_sceneAnalysis.u32_new_saddiff_th);
		}
		else if(s_pContext->_output_me_sceneAnalysis.u8_big_apldiff_hold_cnt != 0)
		{
			WriteRegister(FRC_TOP__MC__mc_scene_change_fb_ADDR, 10, 10, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_mc_scene_change_fb);
			WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_saddiff_th_ADDR, 0, 30, s_pContext->_output_me_sceneAnalysis.u32_big_apldiff_saddiff_th);
			WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_hold_cnt_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.u8_big_apldiff_sc_hold_cnt);
		}
		else
		{
			
			//if( SC_hold_panning_cnt>3){
		//		WriteRegister(FRC_TOP__MC__mc_scene_change_fb_ADDR, 10, 10, 0x0);
		//		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_saddiff_th_ADDR, 0, 30, s_pContext->_output_frc_sceneAnalysis.u32_new_saddiff_th + 0x500000);
		//	}else{
				WriteRegister(FRC_TOP__MC__mc_scene_change_fb_ADDR, 10, 10, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_mc_scene_change_fb);
				WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_saddiff_th_ADDR, 0, 30, s_pContext->_output_frc_sceneAnalysis.u32_new_saddiff_th);
		//	}
			
			if (u8_cadence_Id == _CAD_22 || (in_fmRate == _PQL_IN_25HZ && u8_cadence_Id == _CAD_VIDEO))
			{
				WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_hold_cnt_ADDR, 0, 7, 0x1);
			}
			else
			{
				WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_hold_cnt_ADDR, 0, 7, 0x3);
			}
		}
		
		
		
	}
	else
	{
		ReadRegister(FRC_TOP__MC__mc_scene_change_fb_ADDR, 10, 10, &u32_RB_val);
		if(u32_RB_val)
		{
			LogPrintf(DBG_ERROR, "err: PC mode but sc fb not disable.\n");
			WriteRegister(FRC_TOP__MC__mc_scene_change_fb_ADDR, 10, 10, 0x0);
		}
	}
	
}

VOID sc_enCtrl_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	static UBYTE  cur_cadence;
	static UBYTE  pre_cadence;
	static UBYTE  sc_cad_chg_frame_hold_cnt;	

	
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	cur_cadence  = s_pContext ->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];
	if((cur_cadence == _CAD_2224)&&(pre_cadence ==_CAD_VIDEO))
	{ 
			sc_cad_chg_frame_hold_cnt = 16; 			
	}

	if(sc_cad_chg_frame_hold_cnt>0)
	{			
			WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_hold_cnt_ADDR, 0, 7, 0xf);
			sc_cad_chg_frame_hold_cnt--;
	}
	else 
	{
			WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_sc_me1_hold_cnt_ADDR, 0, 7, 0x3);
			
	}
	pre_cadence = cur_cadence;	
}

VOID fbCtrl_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UINT32 u8_flbk_lvl_wrt = (UINT32)(s_pContext->_output_fblevelctrl.u8_FBLevel);
	UBYTE  u8_flbk_system = s_pContext->_output_fblevelctrl.u8_FBSystem;

	UBYTE  u8_flbk_lvl_FB_FF_Speed = (s_pContext->_external_info.s16_speed != 256 && s_pContext->_external_info.s16_speed != -256) ? _FB_LEVEL_MAX_ : 0;
	UBYTE  u8_flbk_lvl_zoom = (s_pContext->_output_frc_sceneAnalysis.u8_zoom_force_fb_cnt != 0) ? _FB_LEVEL_MAX_ : 0;
	UBYTE  u8_inFormat_PureVideo =  (s_pContext->_external_data._output_frameRate > _PQL_OUT_60HZ) ? 0 :
									(s_pContext->_output_frc_phtable.u1_is_inFormat_PureVideo != 0) ? _FB_LEVEL_MAX_ : 0;
	UBYTE  u8_NoNeedToDoFRC = (s_pContext->_external_data._output_frameRate > _PQL_OUT_60HZ) ? 0 :
								((u8_MEMCMode == 4 && dejudder == 0)||u8_MEMCMode ==5 ) ? _FB_LEVEL_MAX_ : 0; // FallBack to P_frame to avoid judder

	u8_flbk_lvl_wrt = _MAX_(_MAX_(_MAX_(_MAX_(_MAX_(u8_flbk_lvl_FB_FF_Speed
						, u8_flbk_lvl_zoom)
						, u8_flbk_system)
						, u8_flbk_lvl_wrt)
						, u8_inFormat_PureVideo)
						, u8_NoNeedToDoFRC);

	if(s_pContext->_output_wrt_comreg.u1_GFB_force_weak_type==1)
		u8_flbk_lvl_wrt=0x40;
	else if(s_pContext->_output_wrt_comreg.u1_GFB_force_weak_type==2)
		u8_flbk_lvl_wrt=0x60;
	else if(s_pContext->_output_frc_sceneAnalysis.u1_Swing_true)
		u8_flbk_lvl_wrt=0x00;
	else if(s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true==1)
		u8_flbk_lvl_wrt=0x00;
	else if(s_pContext->_output_wrt_comreg.u1_GFB_force_MAX_true ==1)
		u8_flbk_lvl_wrt=0xff;

	if(s_pContext->_output_wrt_comreg.u1_GFB_modify_true==0)
		pOutput->u8_FB_lvl = u8_flbk_lvl_wrt;

	if (pParam->u1_FBLevelWr_en == 1)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_bld_flbk_lvl),  pOutput->u8_FB_lvl);
	}

	if(pParam->u1_bigFBlvl_dis_SCdet_en == 1)
	{
		UBYTE u1_disable_saddiff_sc = s_pContext->_output_fblevelctrl.u3_FbLvl_dSCclr_wrt;
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_sc_saddiff_en), u1_disable_saddiff_sc);
	}
}
VOID RimCtrl_wrtAction(const _PARAM_WRT_COM_REG *pParam)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	if ((pParam->u1_RimCtrl_wrt_en == 1) && (s_pContext->_output_rimctrl.u1_RimChange == 1))
	{
		// MC
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_top_rim1), s_pContext->_output_rimctrl.u12_mc_rim1[_RIM_TOP]); // Rim1
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_bot_rim1), s_pContext->_output_rimctrl.u12_mc_rim1[_RIM_BOT]);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_lft_rim1), s_pContext->_output_rimctrl.u12_mc_rim1[_RIM_LFT]);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_rht_rim1), s_pContext->_output_rimctrl.u12_mc_rim1[_RIM_RHT]);

		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_top_rim0), s_pContext->_output_rimctrl.u12_mc_rim0[_RIM_TOP]); // Rim0
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_bot_rim0), s_pContext->_output_rimctrl.u12_mc_rim0[_RIM_BOT]);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_lft_rim0), s_pContext->_output_rimctrl.u12_mc_rim0[_RIM_LFT]);
		WriteRegister(KIWI_REG(FRC_TOP__MC__mc_rht_rim0), s_pContext->_output_rimctrl.u12_mc_rim0[_RIM_RHT]);

		// LOGO
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blk_rim_h0), s_pContext->_output_rimctrl.u8_LogoRim_Blk[_RIM_LFT]); // BLOCK
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blk_rim_h1), s_pContext->_output_rimctrl.u8_LogoRim_Blk[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blk_rim_v0), s_pContext->_output_rimctrl.u8_LogoRim_Blk[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blk_rim_v1), s_pContext->_output_rimctrl.u8_LogoRim_Blk[_RIM_BOT]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrim_h0), s_pContext->_output_rimctrl.u12_LogoRim_Pxl[_RIM_LFT]); // PIXEL
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrim_h1), s_pContext->_output_rimctrl.u12_LogoRim_Pxl[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrim_v0), s_pContext->_output_rimctrl.u12_LogoRim_Pxl[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrim_v1), s_pContext->_output_rimctrl.u12_LogoRim_Pxl[_RIM_BOT]);

		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_blk_logo_db_rim_left), s_pContext->_output_rimctrl.u8_LogoRim_Blk[_RIM_LFT]); // BLOCK
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_blk_logo_db_rim_righ), s_pContext->_output_rimctrl.u8_LogoRim_Blk[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_blk_logo_db_rim_top), s_pContext->_output_rimctrl.u8_LogoRim_Blk[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_blk_logo_db_rim_bot), s_pContext->_output_rimctrl.u8_LogoRim_Blk[_RIM_BOT]);

		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_pix_logo_db_rim_left), s_pContext->_output_rimctrl.u12_LogoRim_Pxl[_RIM_LFT]); // PIXEL
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_pix_logo_db_rim_righ), s_pContext->_output_rimctrl.u12_LogoRim_Pxl[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_pix_logo_db_rim_top), s_pContext->_output_rimctrl.u12_LogoRim_Pxl[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_pix_logo_db_rim_bot), s_pContext->_output_rimctrl.u12_LogoRim_Pxl[_RIM_BOT]);

		// Dehalo
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_disable_occl_left_rim),  s_pContext->_output_rimctrl.u9_dh_blk_rim[_RIM_LFT]); // Dehalo rim.
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_disable_occl_righ_rim),  s_pContext->_output_rimctrl.u9_dh_blk_rim[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_disable_occl_top_rim),   s_pContext->_output_rimctrl.u9_dh_blk_rim[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_disable_occl_bot_rim),   s_pContext->_output_rimctrl.u9_dh_blk_rim[_RIM_BOT]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_left_ofst),  s_pContext->_output_rimctrl.u9_dh_blk_oftrim[_RIM_LFT]); // Dehalo retimer rim.
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_right_ofst), s_pContext->_output_rimctrl.u9_dh_blk_oftrim[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_top_ofst),   s_pContext->_output_rimctrl.u9_dh_blk_oftrim[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_bot_ofst),   s_pContext->_output_rimctrl.u9_dh_blk_oftrim[_RIM_BOT]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_rt1_left_ofst),  s_pContext->_output_rimctrl.u9_dh_blk_oftrim[_RIM_LFT]); // Dehalo retimer1 rim.
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_rt1_right_ofst), s_pContext->_output_rimctrl.u9_dh_blk_oftrim[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_rt1_top_ofst),   s_pContext->_output_rimctrl.u9_dh_blk_oftrim[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_rt1_bot_ofst),   s_pContext->_output_rimctrl.u9_dh_blk_oftrim[_RIM_BOT]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_rt2_left_ofst),  s_pContext->_output_rimctrl.u9_dh_blk_oftrim[_RIM_LFT]); // Dehalo retimer2 rim.
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_rt2_right_ofst), s_pContext->_output_rimctrl.u9_dh_blk_oftrim[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_rt2_top_ofst),   s_pContext->_output_rimctrl.u9_dh_blk_oftrim[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_rt2_bot_ofst),   s_pContext->_output_rimctrl.u9_dh_blk_oftrim[_RIM_BOT]);

		// IPME
		WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_rim_v0), s_pContext->_output_rimctrl.u12_ipme_rim[_RIM_TOP]); // IPME
		WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_rim_v1), s_pContext->_output_rimctrl.u12_ipme_rim[_RIM_BOT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_rim_h0), s_pContext->_output_rimctrl.u12_ipme_rim[_RIM_LFT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_IPME__ipme_fmdet_rim_h1), s_pContext->_output_rimctrl.u12_ipme_rim[_RIM_RHT]);

		// ME1
		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_blk_rim_top),   s_pContext->_output_rimctrl.u12_me1_vbuf_blk_rim[_RIM_TOP]); //blk rim
		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_blk_rim_bot),   s_pContext->_output_rimctrl.u12_me1_vbuf_blk_rim[_RIM_BOT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_blk_rim_left),  s_pContext->_output_rimctrl.u12_me1_vbuf_blk_rim[_RIM_LFT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_blk_rim_right), s_pContext->_output_rimctrl.u12_me1_vbuf_blk_rim[_RIM_RHT]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pix_rim_top),  s_pContext->_output_rimctrl.u12_me1_vbuf_pix_rim[_RIM_TOP]); //pixel rim
		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pix_rim_bot),  s_pContext->_output_rimctrl.u12_me1_vbuf_pix_rim[_RIM_BOT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pix_rim_left), s_pContext->_output_rimctrl.u12_me1_vbuf_pix_rim[_RIM_LFT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pix_rim_right),s_pContext->_output_rimctrl.u12_me1_vbuf_pix_rim[_RIM_RHT]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_rim_x_start),  s_pContext->_output_rimctrl.u12_me1_lbme_rim[_RIM_LFT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_rim_x_end),    s_pContext->_output_rimctrl.u12_me1_lbme_rim[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_rim_y_start),  s_pContext->_output_rimctrl.u12_me1_lbme_rim[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_rim_y_end),    s_pContext->_output_rimctrl.u12_me1_lbme_rim[_RIM_BOT]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_meander_rim_x_start),  s_pContext->_output_rimctrl.u12_me1_lbme_rim[_RIM_LFT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_meander_rim_x_end),    s_pContext->_output_rimctrl.u12_me1_lbme_rim[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_meander_rim_y_start),  s_pContext->_output_rimctrl.u12_me1_vbuf_meander_pix_rim[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LBME_TOP__lbme_meander_rim_y_end),    s_pContext->_output_rimctrl.u12_me1_vbuf_meander_pix_rim[_RIM_BOT]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_meander_blk_rim_top), s_pContext->_output_rimctrl.u12_me1_vbuf_meander_blk_rim[_RIM_TOP]); //meander rim
		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_meander_blk_rim_bot), s_pContext->_output_rimctrl.u12_me1_vbuf_meander_blk_rim[_RIM_BOT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_meander_pix_rim_top), s_pContext->_output_rimctrl.u12_me1_vbuf_meander_pix_rim[_RIM_TOP]);
// MEMC_K6L_BRING_UP //		WriteRegister(KIWI_REG(FRC_TOP__KME_TOP__vbuf_meander_pix_rim_bot), s_pContext->_output_rimctrl.u12_me1_vbuf_meander_pix_rim[_RIM_BOT]);

		// ME2
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pfv_blk_rim_left),  s_pContext->_output_rimctrl.u12_me2_vbuf_pfv_blk_rim[_RIM_LFT]); // pfv blk rim
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pfv_blk_rim_right), s_pContext->_output_rimctrl.u12_me2_vbuf_pfv_blk_rim[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pfv_blk_rim_top),   s_pContext->_output_rimctrl.u12_me2_vbuf_pfv_blk_rim[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pfv_blk_rim_bot),   s_pContext->_output_rimctrl.u12_me2_vbuf_pfv_blk_rim[_RIM_BOT]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_blk_rim_left),  s_pContext->_output_rimctrl.u12_me2_vbuf_ph_blk_rim[_RIM_LFT]); // ph blk rim
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_blk_rim_right), s_pContext->_output_rimctrl.u12_me2_vbuf_ph_blk_rim[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_blk_rim_top),   s_pContext->_output_rimctrl.u12_me2_vbuf_ph_blk_rim[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_ph_blk_rim_bot),   s_pContext->_output_rimctrl.u12_me2_vbuf_ph_blk_rim[_RIM_BOT]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pix_rim_left),  s_pContext->_output_rimctrl.u12_me2_vbuf_pix_rim[_RIM_LFT]); // pixel
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pix_rim_right), s_pContext->_output_rimctrl.u12_me2_vbuf_pix_rim[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pix_rim_top),   s_pContext->_output_rimctrl.u12_me2_vbuf_pix_rim[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_pix_rim_bot),   s_pContext->_output_rimctrl.u12_me2_vbuf_pix_rim[_RIM_BOT]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_LBME2_TOP__lbme2_rim_x_start), s_pContext->_output_rimctrl.u12_me2_lbme_rim[_RIM_LFT]); // lbme2
		WriteRegister(KIWI_REG(FRC_TOP__KME_LBME2_TOP__lbme2_rim_x_end),   s_pContext->_output_rimctrl.u12_me2_lbme_rim[_RIM_RHT]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LBME2_TOP__lbme2_rim_y_start), s_pContext->_output_rimctrl.u12_me2_lbme_rim[_RIM_TOP]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LBME2_TOP__lbme2_rim_y_end),   s_pContext->_output_rimctrl.u12_me2_lbme_rim[_RIM_BOT]);
		#if PQL_DYNAMIC_ADJUST_FIX_ISSUE
		if (s_pContext->_output_rimctrl.u1_RimTwoSide_balancing)
		{
			WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_mm_invalid_sel_ADDR, 0, 0, 0x1);
			WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_mm_invalid_sel_ADDR, 0, 0, 0x1);
		}
		else
		{
			WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_mm_invalid_sel_ADDR, 0, 0, 0x0);
			WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_mm_invalid_sel_ADDR, 0, 0, 0x0);
		}
		#endif
	}
}
#if 0
VOID dhLocalFbLvl_wrtAction(const _PARAM_WRT_COM_REG *pParam)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_PQLPARAMETER *s_pParam       = GetPQLParameter();

	UBYTE u6_localfallback_lvl = s_pParam->_param_frc_sceneAnalysis.u6_localfallback_lvl;//((U32_DATA>>24) & 0x3f);
	UBYTE u1_fastMotion_lfb_en = s_pParam->_param_frc_sceneAnalysis.u1_fastMotion_lfb_en; //((U32_DATA>>31) & 0x1);

	if (pParam->u1_localfb_wrt_en == 0)
		return;

	if(s_pContext->_output_frc_sceneAnalysis.u1_fastMotion_det == 1)
	{
		if(u1_fastMotion_lfb_en == 1)
		{
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pfv_gen_force_dehalo_level2), u6_localfallback_lvl);
		}
	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pfv_gen_force_dehalo_level2), 0x20);

		
	}


}
#endif

VOID dhClose_wrtAction(const _PARAM_WRT_COM_REG *pParam)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//_PQLPARAMETER *s_pParam       = GetPQLParameter();

	UINT32 u1_dehalo_en = (s_pContext->_output_dh_close.u1_closeDh_act == 1)? 0 : 1;

	if (pParam->u1_dhClose_wrt_en == 1)
	{
		if (u1_dehalo_en == 0)
		{
			//WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_glb_gain_switch_en), 1);	//regional gain
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pst_occl_type_thr), 0x3F);
		}
		else
		{
			//WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_glb_gain_switch_en), 0);	//global gain
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pst_occl_type_thr), 0x10);
		}
	}
}

VOID ME_obmeSelection_wrtAction(const _PARAM_WRT_COM_REG *pParam)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_PQLPARAMETER *s_pParam       = GetPQLParameter();

	UINT32 u1_dehalo_en = (s_pContext->_output_dh_close.u1_closeDh_act == 1)? 0 : 1;

	if (pParam->u1_dynamic_obme_sel_wrt_en == 1)
	{
		if (u1_dehalo_en == 0)
		{
			if( s_pContext->_output_me_sceneAnalysis.u2_panning_flag == 1 && s_pContext->_output_FRC_LgDet.u1_logo_rgn_distribute[LOGO_RGN_BOT] == 1 )
			{
				WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_dc_obme_mode_sel), 1);
				WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_dc_obme_mode), 0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_ac_obme_mode), 2);

				WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_dc_obme_mode_sel), 1);
				WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_dc_obme_mode), 0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_ac_obme_mode), 2);

				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_dc_obme_mode_sel), 1);
				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_dc_obme_mode), 0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ac_obme_mode), 2);

				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_dc_obme_mode_sel), 1);
				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_dc_obme_mode), 0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ac_obme_mode), 2);
			}
			else
			{
				WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_dc_obme_mode_sel), 0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_dc_obme_mode), s_pParam->_param_dh_close.u2_dh_me1_ip_dc_obme_mode_off); // 3
				WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_ac_obme_mode), s_pParam->_param_dh_close.u2_dh_me1_ip_ac_obme_mode_off); // 0

				WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_dc_obme_mode_sel), 0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_dc_obme_mode), s_pParam->_param_dh_close.u2_dh_me1_pi_dc_obme_mode_off); // 3
				WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_ac_obme_mode), s_pParam->_param_dh_close.u2_dh_me1_pi_ac_obme_mode_off); // 0

				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_dc_obme_mode_sel), 1);
				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_dc_obme_mode), 3);
				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ac_obme_mode), 0);

				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_dc_obme_mode_sel), 1);
				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_dc_obme_mode), 3);
				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ac_obme_mode), 0);
			}
		}
		else
		{
			WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_dc_obme_mode_sel), 0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_dc_obme_mode), s_pParam->_param_dh_close.u2_dh_me1_ip_dc_obme_mode_on); // 1
			WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_ip_ac_obme_mode), s_pParam->_param_dh_close.u2_dh_me1_ip_ac_obme_mode_on); // 1

			WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_dc_obme_mode_sel), 0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_dc_obme_mode), s_pParam->_param_dh_close.u2_dh_me1_pi_dc_obme_mode_on); // 1
			WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_pi_ac_obme_mode), s_pParam->_param_dh_close.u2_dh_me1_pi_ac_obme_mode_on); // 1

			WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_dc_obme_mode_sel), s_pContext->_output_FRC_LgDet.DefaultVal.me2_1st_dc_obme_mode_sel);
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_dc_obme_mode), s_pContext->_output_FRC_LgDet.DefaultVal.me2_1st_dc_obme_mode);
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_ac_obme_mode), s_pContext->_output_FRC_LgDet.DefaultVal.me2_1st_ac_obme_mode);

			WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_dc_obme_mode_sel), s_pContext->_output_FRC_LgDet.DefaultVal.me2_2nd_dc_obme_mode_sel);
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_dc_obme_mode), s_pContext->_output_FRC_LgDet.DefaultVal.me2_2nd_dc_obme_mode);
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_2nd_ac_obme_mode), s_pContext->_output_FRC_LgDet.DefaultVal.me2_2nd_ac_obme_mode);
		}
	}

}

VOID mv_accord_wrtAction(const _PARAM_WRT_COM_REG *pParam)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 u1_dehalo_en = (s_pContext->_output_dh_close.u1_closeDh_act == 1)? 0 : 1;

	if (pParam->u1_dh_accord_ctrl_en == 1)
	{
		if(s_pContext->_output_frc_sceneAnalysis.u6_mv_accord_hold_cnt > 0)
		{
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_occl_mv_accord), 1);
		}
		else if(u1_dehalo_en == 0)
		{
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_occl_mv_accord), 1);
		}
		else
		{
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO__dh_pstflt_occl_mv_accord), 0);
		}
	}
}


VOID ME_acdcBld_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	if(pParam->u1_MEacdcBld_wrt_en== 0)
		return;
	if (pParam->u1_dynME_acdcBld_wrt_en == 1  )
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_x1), s_pContext->_output_frc_sceneAnalysis.u8_dynME_acdc_bld_x_act[0]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_x2), s_pContext->_output_frc_sceneAnalysis.u8_dynME_acdc_bld_x_act[1]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_x3), s_pContext->_output_frc_sceneAnalysis.u8_dynME_acdc_bld_x_act[2]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_y1), s_pContext->_output_frc_sceneAnalysis.u6_dynME_acdc_bld_y_act[0]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_y2), s_pContext->_output_frc_sceneAnalysis.u6_dynME_acdc_bld_y_act[1]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_y3), s_pContext->_output_frc_sceneAnalysis.u6_dynME_acdc_bld_y_act[2]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_slope1), s_pContext->_output_frc_sceneAnalysis.s9_dynME_acdc_bld_s_act[0]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_slope2), s_pContext->_output_frc_sceneAnalysis.s9_dynME_acdc_bld_s_act[1]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP0__me1_ip_ac_pix_sad_limt), s_pContext->_output_frc_sceneAnalysis.u8_dynME_ac_pix_sad_limt_act);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP0__me1_pi_ac_pix_sad_limt), s_pContext->_output_frc_sceneAnalysis.u8_dynME_ac_pix_sad_limt_act);

		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP0__me1_mm_psad_norm_shft), s_pContext->_output_frc_sceneAnalysis.u4_acdc_bld_psad_shift_act);

		#if PQL_DYNAMIC_ADJUST_FIX_ISSUE
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_x1), s_pContext->_output_frc_sceneAnalysis.u8_dynME2_acdc_bld_x_act[0]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_x2), s_pContext->_output_frc_sceneAnalysis.u8_dynME2_acdc_bld_x_act[1]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_x3), s_pContext->_output_frc_sceneAnalysis.u8_dynME2_acdc_bld_x_act[2]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_y1), s_pContext->_output_frc_sceneAnalysis.u6_dynME2_acdc_bld_y_act[0]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_y2), s_pContext->_output_frc_sceneAnalysis.u6_dynME2_acdc_bld_y_act[1]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_y3), s_pContext->_output_frc_sceneAnalysis.u6_dynME2_acdc_bld_y_act[2]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_slope1), s_pContext->_output_frc_sceneAnalysis.s9_dynME2_acdc_bld_s_act[0]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_slope2), s_pContext->_output_frc_sceneAnalysis.s9_dynME2_acdc_bld_s_act[1]);
		#endif
	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_x1), s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS .u8_dynME_acdc_bld_x_act[0]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_x2), s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS .u8_dynME_acdc_bld_x_act[1]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_x3), s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS .u8_dynME_acdc_bld_x_act[2]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_y1), s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS .u6_dynME_acdc_bld_y_act[0]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_y2), s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS .u6_dynME_acdc_bld_y_act[1]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_y3), s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS .u6_dynME_acdc_bld_y_act[2]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_slope1), s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS .s9_dynME_acdc_bld_s_act[0]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_psad_alp_slope2), s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS .s9_dynME_acdc_bld_s_act[1]);

		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP0__me1_ip_ac_pix_sad_limt), s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS .u8_dynME_ac_pix_sad_limt_act);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP0__me1_pi_ac_pix_sad_limt), s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS .u8_dynME_ac_pix_sad_limt_act);

		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP0__me1_mm_psad_norm_shft), s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS .u4_acdc_bld_psad_shift_act);
		#if PQL_DYNAMIC_ADJUST_FIX_ISSUE
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_x1),  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.u8_dynME2_acdc_bld_x_act[0]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_x2),  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.u8_dynME2_acdc_bld_x_act[1]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_x3),  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.u8_dynME2_acdc_bld_x_act[2]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_y1),  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.u6_dynME2_acdc_bld_y_act[0]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_y2),  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.u6_dynME2_acdc_bld_y_act[1]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_y3),  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.u6_dynME2_acdc_bld_y_act[2]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_slope1),  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.s9_dynME2_acdc_bld_s_act[0]);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_CALC0__me2_psad_alp_slope2),  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.s9_dynME2_acdc_bld_s_act[1]);
		#endif
	}
}


VOID ME_dynSR_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_PQLPARAMETER *s_pParam       = GetPQLParameter();

	if (s_pParam->_param_frc_sceneAnalysis.u1_dynSR_en == 0)
		return;

	if(s_pContext->_output_frc_sceneAnalysis.u1_still_frame || s_pContext->_output_Patch_Manage.u1_patch_highFreq_zmv_true)
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_mvx_range_ADDR, 0,8,0);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_mvy_range_ADDR,9,15, 0);
		#if (IC_K5LP || IC_K6LP)
		WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvx_clip_range_ADDR,0,7,0);
		WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvy_clip_range_ADDR,8,14,0);
		#endif
	}
	else if(s_pContext->_output_wrt_comreg.u1_KME_SR_increaseX_true ==1)
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_mvx_range_ADDR, 0,8,0x60);
		#if (IC_K5LP || IC_K6LP)
		WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvx_clip_range_ADDR,0,7,0x60);
		#endif
	}
	else if(s_pContext->_output_wrt_comreg.u1_KME_SR_increaseY_true ==1)
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_mvy_range_ADDR,9,15, 0x70);
		#if (IC_K5LP || IC_K6LP)
		WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvy_clip_range_ADDR,8,14,0x70);
		#endif
	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_mvx_range),
								s_pContext->_output_frc_sceneAnalysis.u8_ME1_searchRange_x);
		WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_mvy_range),
								s_pContext->_output_frc_sceneAnalysis.u8_ME1_searchRange_y);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvx_clip_range),
								s_pContext->_output_frc_sceneAnalysis.u8_ME1_searchRange_x);
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvy_clip_range),
								s_pContext->_output_frc_sceneAnalysis.u8_ME1_searchRange_y);
	}
}


VOID ME_dynSAD_Diff_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_PQLPARAMETER *s_pParam       = GetPQLParameter();
	if (s_pParam->_param_frc_sceneAnalysis.u1_dyn_SAD_Diff_en == 1)
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_sc_saddiff_th),
			          (0xE0000 * s_pContext->_output_frc_sceneAnalysis.u8_dynSAD_Diff_Gain) / 255);
	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_sc_saddiff_th), 0xE0000);
	}
}

VOID ME_cand_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
 	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_PQLPARAMETER *s_pParam       = GetPQLParameter();

	if(pParam->u1_MECand_wrt_en == 0)
		return;

	 if(s_pParam->_param_read_comreg.u1_powerSaving_en && s_pContext->_external_data.u1_powerSaving == 1 )
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_en_ADDR, 12, 12, 0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_en_ADDR, 13, 13,0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_en_ADDR, 11, 11,0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_en_ADDR, 11, 11, 0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_en_ADDR, 12, 12,0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_en_ADDR, 10, 10, 0x00);
	}
	 else if(s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type==1)
	 {
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_en_ADDR, 13, 13,0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_en_ADDR, 11, 11,0x00);

		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_en_ADDR, 12, 12,0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_en_ADDR, 10, 10, 0x00);
	}
	 else if(s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type==2)
	 {
	 	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_en_ADDR, 12, 12, 0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_en_ADDR, 13, 13,0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_en_ADDR, 11, 11, 0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_en_ADDR, 12, 12,0x00);
	}
	else if(s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type==3)
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_en_ADDR, 12, 12, 0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_en_ADDR, 13, 13,0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_en_ADDR, 11, 11,0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_en_ADDR, 11, 11, 0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_en_ADDR, 12, 12,0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_en_ADDR, 10, 10, 0x00);
	}
#if IC_K4LP
	else if(s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true == 1 )
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_en_ADDR, 4, 4,0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_en_ADDR, 5, 5,0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_en_ADDR, 3, 3,0x00);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_en_ADDR, 4, 4,0x00);
	}
#endif
	else
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_en_ADDR, 4, 4,s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand3_en);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_en_ADDR, 5, 5,s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand4_en);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_en_ADDR, 3, 3,s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand3_en);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_en_ADDR, 4, 4,s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand4_en);

		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update1_en_ADDR, 12, 12, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_update1_en);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update2_en_ADDR, 13, 13, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_update2_en);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_update0_en_ADDR, 11, 11, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_update0_en);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update1_en_ADDR, 11, 11, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_update1_en);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update2_en_ADDR, 12, 12, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_update2_en);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_update0_en_ADDR, 10, 10, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_update0_en);
	}
}

VOID ME_candOfst_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 u25_me_aDTL = s_pContext->_output_read_comreg.u25_me_aDTL_rb;
	static UINT32  u25_me_aDTL_pre;

	if(pParam->u1_MECandOfst_wrt_en == 0)
		return;
	u25_me_aDTL = (u25_me_aDTL_pre*7 + u25_me_aDTL)>>3;

	if( (s_pContext->_output_me_sceneAnalysis.u1_pure_TopDownPan_flag != 0) && (s_pContext->_output_me_sceneAnalysis.u2_panning_flag != 0)&&(u25_me_aDTL > 2800000))
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety_BITEND, 0x6);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety_BITEND, 0x6);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety_BITEND, 0x6);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety_BITEND, 0x6);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety_BITEND, 0x6);

		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety_BITEND, 0x6);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety_BITEND, 0x6);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety_BITEND, 0x6);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety_BITEND, 0x6);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety_BITEND, 0x6);
	}
	else
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand3_offsety_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand3_offsety);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand4_offsety_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand4_offsety);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand5_offsety_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand5_offsety);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand6_offsety_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand6_offsety);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_cand7_offsety_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_cand7_offsety);

		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand3_offsety_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand3_offsety);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand4_offsety_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand4_offsety);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand5_offsety_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand5_offsety);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand6_offsety_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand6_offsety);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety_ADDR, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety_BITSTART, FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_cand7_offsety_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_cand7_offsety);
	}
	u25_me_aDTL_pre = u25_me_aDTL;
}

VOID ME_caddpnt_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
 	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//_PQLPARAMETER *s_pParam       = GetPQLParameter();

	if(pParam->u1_MECandPnt_wrt_en == 0)
		return;

	if(s_pContext->_output_me_sceneAnalysis.u1_Avenger_RP_detect_true == 1 )
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd0_ADDR, 16, 23, 0xFF);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd1_ADDR, 24, 31, 0xFF);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd2_ADDR, 0, 7, 0xFF);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_ADDR, 16, 23, 0xFF);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_ADDR, 24, 31, 0xFF);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_ADDR, 0, 7, 0xFF);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st3_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st3);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st4_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st5_ADDR, 8, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st6_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st5);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st3_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st3);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st4_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st5_ADDR, 8, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st5);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st6_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st6);
	}
	else if(s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Fast_Convergence_type ==1)
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd0_ADDR, 16, 23, 0x23);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd1_ADDR, 24, 31, 0x23);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd2_ADDR, 0, 7, 0x23);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_ADDR, 16, 23, 0x23);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_ADDR, 24, 31, 0x23);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_ADDR, 0, 7, 0x23);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st3_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st3);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st4_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st5_ADDR, 8, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st6_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st5);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st3_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st3);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st4_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st5_ADDR, 8, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st5);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st6_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st6);
	}
	else if(s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Fast_Convergence_type ==2)
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd0_ADDR, 16, 23, 0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd1_ADDR, 24, 31, 0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd2_ADDR, 0, 7, 0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_ADDR, 16, 23, 0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_ADDR, 24, 31, 0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_ADDR, 0, 7, 0);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st3_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st3);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st4_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st5_ADDR, 8, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st6_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st5);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st3_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st3);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st4_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st5_ADDR, 8, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st5);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st6_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st6);
	}
	else if(s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true|| s_pContext->_output_me_sceneAnalysis.u2_panning_flag ==2) // pure slow pan | Slow Convergence
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd0_ADDR, 16, 23, 0xFF);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd1_ADDR, 24, 31, 0xFF);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd2_ADDR, 0, 7, 0xFF);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_ADDR, 16, 23, 0xFF);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_ADDR, 24, 31, 0xFF);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_ADDR, 0, 7, 0xFF);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st3_ADDR, 24, 31, 0x90);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st4_ADDR, 0, 7, 0x90);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st5_ADDR, 8, 15, 0x60);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st6_ADDR, 16, 23, 0x60);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st3_ADDR, 24, 31, 0x90);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st4_ADDR, 0, 7, 0x90);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st5_ADDR, 8, 15, 0x60);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st6_ADDR, 16, 23, 0x60);
	}
	else if(s_pContext->_output_me_sceneAnalysis.u1_Region_Periodic_detect_true == 3 &&(s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVx_Step!=0)&& (s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVy_Step!=0) )
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd0_ADDR, 16, 23, 0xc0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd1_ADDR, 24, 31, 0xc0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd2_ADDR, 0, 7, 0xc0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_ADDR, 16, 23, 0xc0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_ADDR, 24, 31, 0xc0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_ADDR, 0, 7, 0xc0);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st3_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st3);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st4_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st5_ADDR, 8, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st6_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st5);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st3_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st3);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st4_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st5_ADDR, 8, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st5);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st6_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st6);
	}
	else
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd0_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_rnd0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd1_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_rnd1);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd2_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_rnd2);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_rnd0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_rnd1);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_rnd2);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st3_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st3);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st4_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st5_ADDR, 8, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_st6_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_st5);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st3_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st3);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st4_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st4);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st5_ADDR, 8, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st5);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_st6_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_st6);
	}
}
VOID ME_Vbuf_LFSR_updStgh_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//_PQLPARAMETER *s_pParam       = GetPQLParameter();

	static UINT32 print_cnt = 0 ;
	print_cnt++;

	if(pParam->u1_MEUpdStgh_wrt_en== 0)
		return;

	if(s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true || s_pContext->_output_me_sceneAnalysis.u2_panning_flag ==2 || s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true ) // pure slow pan | Slow Convergence
	{
		//  lfsr_mask
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_x_ADDR, 0, 3, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_y_ADDR, 4, 7, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_x_ADDR, 8,11, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_y_ADDR, 12, 15, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_x_ADDR, 16, 19, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_y_ADDR, 20, 23, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_x_ADDR, 24, 27, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_y_ADDR, 28, 31, 3);

		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_x_ADDR, 0, 3, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_y_ADDR, 4, 7, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_x_ADDR, 8,11, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_y_ADDR, 12, 15, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_x_ADDR, 16, 19, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_y_ADDR, 20, 23, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_x_ADDR, 24, 27, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_y_ADDR, 28, 31, 3);
	}
	else if(s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Fast_Convergence_true ==1)
	{
		//  lfsr_mask
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_x_ADDR, 0, 3, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_y_ADDR, 4, 7, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_x_ADDR, 8,11, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_y_ADDR, 12, 15, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_x_ADDR, 16, 19, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_y_ADDR, 20, 23, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_x_ADDR, 24, 27, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_y_ADDR, 28, 31, 0xf);

		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_x_ADDR, 0, 3, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_y_ADDR, 4, 7, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_x_ADDR, 8,11, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_y_ADDR, 12, 15, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_x_ADDR, 16, 19, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_y_ADDR, 20, 23, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_x_ADDR, 24, 27, 0xf);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_y_ADDR, 28, 31, 0xf);
	}
	else
	{
		//  lfsr_mask
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_x_ADDR, 0, 3, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask0_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_y_ADDR, 4, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask0_y);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_x_ADDR, 8,11, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask1_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_y_ADDR, 12, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask1_y);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_x_ADDR, 16, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask2_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_y_ADDR, 20, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask2_y);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_x_ADDR, 24, 27, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask3_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_y_ADDR, 28, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask3_y);

		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_x_ADDR, 0, 3, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask0_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_y_ADDR, 4, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask0_y);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_x_ADDR, 8,11, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask1_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_y_ADDR, 12, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask1_y);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_x_ADDR, 16, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask2_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_y_ADDR, 20, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask2_y);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_x_ADDR, 24, 27, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask3_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_y_ADDR, 28, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask3_y);

		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_zmv_en_ADDR, 16, 16, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_zmv_en);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_zmv_en_ADDR, 15, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_zmv_en);

		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_zmv_ADDR, 16, 28, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_zmv);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_zmv_ADDR, 16, 28, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_zmv);
	
		if (s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVx_Step != 0)
		{
			//if (print_cnt%4 == 0)
			//printk(KERN_EMERG "TEST2\n");
			//	lfsr_mask
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_x_ADDR, 0, 3, 3);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_x_ADDR, 8, 11, 3);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_x_ADDR, 16, 19, 3);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_x_ADDR, 24, 27, 3);
		
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_x_ADDR, 0, 3, 3);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_x_ADDR, 8, 11, 3);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_x_ADDR, 16, 19, 3);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_x_ADDR, 24, 27, 3);
		
			/*if (s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVx_Step == 4)
			{
				WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_zmv_en_ADDR, 16, 16, 0x1);
				WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_zmv_en_ADDR, 15, 15, 0x1);
		
				WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_zmv_ADDR, 16, 28, 0x16);
				WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_zmv_ADDR, 16, 28, 0x16);
			}*/
		}
		if (s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVy_Step != 0)
		{
			//if (print_cnt%4 == 0)
			//printk(KERN_EMERG "TEST3\n");
			//  lfsr_mask
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_y_ADDR, 4, 7, 3);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_y_ADDR, 12, 15, 3);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_y_ADDR, 20, 23, 3);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_y_ADDR, 28, 31, 3);

			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_y_ADDR, 4, 7, 3);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_y_ADDR, 12, 15, 3);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_y_ADDR, 20, 23, 3);
			WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_y_ADDR, 28, 31, 3);

			/*if (s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVy_Step == 4)
			{
			   	WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_zmv_en_ADDR, 16, 16, 0x1);
				WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_zmv_en_ADDR, 15, 15, 0x1);

				WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_zmv_ADDR, 16, 28, 0x16);
				WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_zmv_ADDR, 16, 28, 0x16);
			}*/
		}
		
	}
}
VOID ME_cost_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
 	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//_PQLPARAMETER *s_pParam       = GetPQLParameter();

	if(pParam->u1_ME_Cost_Ctrl== 0)
		return;

	if( s_pContext->_output_wrt_comreg.u1_casino_RP_detect_true == 1 )
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_gmvcost_sel_ADDR, 0, 31, 0xffffffff);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_gmvd_gain_ADDR, 0, 5, 0xa);
		WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_gmvcost_sel_ADDR, 0, 31, 0xffffffff);
		WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_gmvd_gain_ADDR, 0, 5, 0xa);

		WriteRegister(FRC_TOP__PQL_0__pql_me1_gmvd_sel_en_ADDR, 2, 2, 0x1);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_gmvd_cost_limt_ADDR, 0, 12, 0x100);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_gmvd_cost_limt_ADDR, 0, 12, 0x100);
		WriteRegister(FRC_TOP__KME_ME2_CALC0__me2_ph_gmvd_cost_limt_ADDR, 15, 27, 0x100);

		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_BITEND, 0x4);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_BITEND, 0x41);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_BITEND, 0xc);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_BITEND, 0x3);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_BITEND, 0x7fb);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_BITEND, 0x7fe);

		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_BITEND, 0x1e4);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_BITEND, 0x39c);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_BITEND, 0x5);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_BITEND, 0x33);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_BITEND, 0x0);
}
	else if(s_pContext->_output_wrt_comreg.u1_KME_gmvd_cost_type == 1 )
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_gmvcost_sel_ADDR, 0, 31, 0x3e); // sony Glee
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_gmvd_gain_ADDR, 0, 5, 0x3);
		WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_gmvcost_sel_ADDR, 0, 31, 0x0);
		WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_gmvd_gain_ADDR, 0, 5, 0x1);

		WriteRegister(FRC_TOP__PQL_0__pql_me1_gmvd_sel_en_ADDR, 2, 2, 0x1);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_gmvd_cost_limt_ADDR, 0, 12, 0x88); // sony Glee
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_gmvd_cost_limt_ADDR, 0, 12, 0x88); // sony Glee
		WriteRegister(FRC_TOP__KME_ME2_CALC0__me2_ph_gmvd_cost_limt_ADDR, 15, 27, 0x24);

		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_BITEND, 0x4);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_BITEND, 0x41);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_BITEND, 0xc);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_BITEND, 0x3);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_BITEND, 0x7fb);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_BITEND, 0x7fe);

		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_BITEND, 0x1e4);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_BITEND, 0x39c);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_BITEND, 0x5);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_BITEND, 0x33);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_BITEND, 0x0);
	}
	else if(s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true >= 1 )
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_gmvcost_sel_ADDR, 0, 31, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_gmvd_gain_ADDR, 0, 5, 0xf);
		WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_gmvcost_sel_ADDR, 0, 31, 0x0);
		WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_gmvd_gain_ADDR, 0, 5, 0x1);

		WriteRegister(FRC_TOP__PQL_0__pql_me1_gmvd_sel_en_ADDR, 2, 2, 0x1);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_gmvd_cost_limt_ADDR, 0, 12, 0xa);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_gmvd_cost_limt_ADDR, 0, 12, 0xa);
		WriteRegister(FRC_TOP__KME_ME2_CALC0__me2_ph_gmvd_cost_limt_ADDR, 15, 27, 0x24);

		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_BITEND, 0x4);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_BITEND, 0x41);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_BITEND, 0xc);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_BITEND, 0x3);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_BITEND, 0x7fb);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_BITEND, 0x7fe);

		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_BITEND, 0x1e4);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_BITEND, 0x39c);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_BITEND, 0x5);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_BITEND, 0x33);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_BITEND, 0x0);
	}
	else
	{
	    WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_gmvcost_sel_ADDR, 0, 31, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_gmvd_gain_ADDR, 0, 5, 0x1);
		WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_gmvcost_sel_ADDR, 0, 31, 0x0);
		WriteRegister(FRC_TOP__KME_ME2_CALC1__me2_gmvd_gain_ADDR, 0, 5, 0x1);

		WriteRegister(FRC_TOP__PQL_0__pql_me1_gmvd_sel_en_ADDR, 2, 2, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_sel);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_gmvd_cost_limt_ADDR, 0, 12, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_gmvd_cost_limt);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_gmvd_cost_limt_ADDR, 0, 12, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_gmvd_cost_limt);
		WriteRegister(FRC_TOP__KME_ME2_CALC0__me2_ph_gmvd_cost_limt_ADDR, 15, 27, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me2_ph_gmvd_cost_limt);

		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x1_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_x1);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x2_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_x2);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_x3_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_x3);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y1_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_y1);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y2_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_y2);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_y3_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_y3);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope1_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_slope1);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_ucf_slope2_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_ucf_slope2);

		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x1_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_x1);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x2_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_x2);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_x3_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_x3);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y1_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_y1);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y2_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_y2);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_y3_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_y3);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope1_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_slope1);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_ADDR, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_BITSTART, FRC_TOP__KME_ME1_TOP1__me1_gmvd_cnt_slope2_BITEND, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmvd_cnt_slope2);
	}
}
VOID ME_gmv_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
 	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//_PQLPARAMETER *s_pParam       = GetPQLParameter();

	if(pParam->u1_GMV_wrt_en== 0)
		return;

	if(s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true == 1 || s_pContext->_output_Patch_Manage.u1_patch_highFreq_rp_true)
	{
		//k4lp RP_detect no need
		//WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP2__me1_gmv_sel), 0x0);

	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP2__me1_gmv_sel), s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_gmv_sel);
	}
}
VOID ME_ipme_flp_alp_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
 	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//_PQLPARAMETER *s_pParam       = GetPQLParameter();

	if(pParam->u1_ME_ipme_flp_alp_wrt_en== 0)
		return;

	if(s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type==2)
	{
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp0_ADDR, 0, 8, 0x16);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp1_ADDR, 9, 17, 0x16);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp2_ADDR, 18, 26, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp3_ADDR, 0, 8, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp4_ADDR, 9, 17, 0x12);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp5_ADDR, 18, 26, 0x12);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp6_ADDR, 0, 8, 0x10);

		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp0_ADDR, 9, 17, 0x16);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp1_ADDR, 18, 26, 0x16);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp2_ADDR, 0, 8, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp3_ADDR, 9, 17, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp4_ADDR, 18, 26, 0x12);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp5_ADDR, 0, 8, 0x12);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp6_ADDR, 9, 17, 0x10);
	}
	else if((s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true >= 1 && s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true !=3)|| s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type==1 )
	{
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp0_ADDR, 0, 8, 0x20);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp1_ADDR, 9, 17, 0x1c);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp2_ADDR, 18, 26, 0x18);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp3_ADDR, 0, 8, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp4_ADDR, 9, 17, 0x10);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp5_ADDR, 18, 26, 0xe);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp6_ADDR, 0, 8, 0xa);

		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp0_ADDR, 9, 17, 0x20);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp1_ADDR, 18, 26, 0x1c);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp2_ADDR, 0, 8, 0x18);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp3_ADDR, 9, 17, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp4_ADDR, 18, 26, 0x10);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp5_ADDR, 0, 8, 0xe);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp6_ADDR, 9, 17, 0xa);
	}
	else
	{
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp0_ADDR, 0, 8, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp0);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp1_ADDR, 9, 17, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp1);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp2_ADDR, 18, 26, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp2);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp3_ADDR, 0, 8, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp3);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp4_ADDR, 9, 17, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp4);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp5_ADDR, 18, 26, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp5);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp6_ADDR, 0, 8, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp6);

		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp0_ADDR, 9, 17, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp0);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp1_ADDR, 18, 26, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp1);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp2_ADDR, 0, 8, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp2);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp3_ADDR, 9, 17, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp3);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp4_ADDR, 18, 26, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp4);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp5_ADDR, 0, 8, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp5);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp6_ADDR, 9, 17, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp6);
	}
}

VOID ME_mvd_cuv_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
 	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//_PQLPARAMETER *s_pParam       = GetPQLParameter();

	if(pParam->u1_ME_mvd_cuv_wrt_en== 0)
		return;

	if(s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true >= 1 || s_pContext->_output_Patch_Manage.u1_patch_highFreq_rp_true)
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_x1_ADDR, 0, 9, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_x2_ADDR, 10, 19, 0x1e5);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_x3_ADDR, 20, 29, 0x321);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_y1_ADDR, 0, 9, 0x0);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_y2_ADDR, 10, 19, 0x26);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_y3_ADDR, 20, 29, 0x4e);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_slope1_ADDR, 0, 12, 0x5);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_slope2_ADDR, 13, 25, 0x8);
	}
	else
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_x1_ADDR, 0, 9, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_x1);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_x2_ADDR, 10, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_x2);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_x3_ADDR, 20, 29, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_x3);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_y1_ADDR, 0, 9, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_y1);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_y2_ADDR, 10, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_y2);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_y3_ADDR, 20, 29, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_y3);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_slope1_ADDR, 0, 12, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_slope1);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_mvd_cuv_slope2_ADDR, 13, 25, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_mvd_cuv_slope2);
	}
}
VOID ME_DRP_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
 	const _PQLCONTEXT *s_pContext = GetPQLContext();

	if(pParam->u1_ME1_DRP_en == 0)
		return;
	#if (IC_K5LP || IC_K6LP)
	if(s_pContext->_output_wrt_comreg.u1_ME1_DRP_type == 1)
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_en_ADDR, 31, 31, 0x1);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y2_ADDR, 20, 29, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_drp_cuv_y2);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y1_ADDR, 10, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_drp_cuv_y1);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y0_ADDR, 0, 9, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_drp_cuv_y0);
	}
	else if(s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true >= 1 ) {
		 WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_en_ADDR, 31, 31, 0x1);

		 if(s_pContext->_output_me_sceneAnalysis.u1_RP_DTLPRD_move_check >= 3){
			WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y2_ADDR, 20, 29, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_drp_cuv_y2);
			WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y1_ADDR, 10, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_drp_cuv_y1);
			WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y0_ADDR, 0, 9, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_drp_cuv_y0);
		 }else{
			WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y2_ADDR, 20, 29, 0x384);
		 	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y1_ADDR, 10, 19, 0x110);
		 	WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y0_ADDR, 0, 9, 0xF8);
		 }
	}
	else if(s_pContext->_output_me_sceneAnalysis.u1_Region_Periodic_detect_true == 3 &&(s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVx_Step!=0)&& (s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVy_Step!=0) )
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_en_ADDR, 31, 31, 0x1);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y2_ADDR, 20, 29, 0x384);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y1_ADDR, 10, 19, 0x110);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y0_ADDR, 0, 9, 0xF8);
	}
	else {
		 WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_en_ADDR, 31, 31, 0x0);
		 //WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y2_ADDR, 20, 29, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_drp_cuv_y2);
		 //WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y1_ADDR, 10, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_drp_cuv_y1);
		 //WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_drp_y0_ADDR, 0, 9, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_drp_cuv_y0);
	}
	#endif
}
VOID ME_adptpnt_rnd_cuv_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
 	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//_PQLPARAMETER *s_pParam       = GetPQLParameter();

	if(pParam->u1_ME_AdptPnt_rnd_wrt_en == 0)
		return;

	if(s_pContext->_output_me_sceneAnalysis.u2_panning_flag == 2){   // pure slow pan
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y1_ADDR, 0, 5, 0x30);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y2_ADDR, 8, 13, 0x28);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y3_ADDR, 14, 19,0x24);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y4_ADDR, 20, 25, 0x22);
	}
	else if(s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_Slow_Convergence_true==1)
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y1_ADDR, 0, 5, 0x3f);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y2_ADDR, 8, 13, 0x3f);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y3_ADDR, 14, 19,0x3f);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y4_ADDR, 20, 25, 0x3f);
	}
	else if(s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_gain_true==1)
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y1_ADDR, 0, 5, 0x24);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y2_ADDR, 8, 13, 0x1e);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y3_ADDR, 14, 19,0x10);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y4_ADDR, 20, 25, 0xe);
	}
	else if(s_pContext->_output_me_sceneAnalysis.u1_Avenger_RP_detect_true == 1 )
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y1_ADDR, 0, 5, 0x24);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y2_ADDR, 8, 13, 0x1e);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y3_ADDR, 14, 19,0x0a);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y4_ADDR, 20, 25, 0x1);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_slope2_ADDR, 9, 17, 0x1fc);
	}
	else
	{
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y1_ADDR, 0, 5,  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_y1);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y2_ADDR, 8, 13,  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_y2);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y3_ADDR, 14, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_y3);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y4_ADDR, 20, 25, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_y4);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_slope2_ADDR, 9, 17, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_slope2);
	}
}
VOID Dh_Local_FB_wrtAction(const _PARAM_WRT_COM_REG * pParam, _OUTPUT_WRT_COM_REG * pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//UINT32 u32_rb_val = 0;
	//static UBYTE u1_panning_state;
	if(pParam->u1_localfb_wrt_en == 0)
		return;

	#if 0
	if((s_pContext->_output_me_sceneAnalysis.u2_panning_flag == 1)){
		if(u1_panning_state == 0){
			ReadRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_en), &u32_rb_val);
			mc_fb_lvl_force_en_tmp = u32_rb_val;
			ReadRegister(KIWI_REG(FRC_TOP__MC__mc_logo_phase_fb_phase_en), &u32_rb_val);
			mc_logo_phase_fb_phase_en = u32_rb_val;
			ReadRegister(KIWI_REG(FRC_TOP__MC__mc_pre_phase_fb_phase_en), &u32_rb_val);
			mc_pre_phase_fb_phase_en = u32_rb_val;
			ReadRegister(KIWI_REG(FRC_TOP__MC__mc_pt_phase_fb_phase_en), &u32_rb_val);
			mc_pt_phase_fb_phase_en = u32_rb_val;
			ReadRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_value), &u32_rb_val);
			mc_fb_lvl_force_value = u32_rb_val;

			WriteRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_en), 1);
			WriteRegister(KIWI_REG(FRC_TOP__MC__mc_logo_phase_fb_phase_en), 0);
			WriteRegister(KIWI_REG(FRC_TOP__MC__mc_pre_phase_fb_phase_en), 0);
			WriteRegister(KIWI_REG(FRC_TOP__MC__mc_pt_phase_fb_phase_en), 0);
			WriteRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_value), 0);

			u1_panning_state = 1;
		}
	}else{
		if(u1_panning_state == 1){
			WriteRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_en), mc_fb_lvl_force_en_tmp);
			WriteRegister(KIWI_REG(FRC_TOP__MC__mc_logo_phase_fb_phase_en), mc_logo_phase_fb_phase_en);
			WriteRegister(KIWI_REG(FRC_TOP__MC__mc_pre_phase_fb_phase_en), mc_pre_phase_fb_phase_en);
			WriteRegister(KIWI_REG(FRC_TOP__MC__mc_pt_phase_fb_phase_en), mc_pt_phase_fb_phase_en);
			WriteRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_value), mc_fb_lvl_force_value);
			u1_panning_state = 0;
		}
	}
	#else

	#endif

	if(s_pContext->_output_me_vst_ctrl.u1_detect_blackBG_VST_trure)
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0x0);
	}
	else if(s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true== 1)
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y2_ADDR,0, 7, 0x0);
	}
	else if((s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL]&0xF) == _CAD_55)
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0x60);
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y2_ADDR,0, 7, 0xff);
	}
	else if(s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type ==1)
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0x20);
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y2_ADDR,0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_dh_dtl_curve_y2);
	}
	else if(s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type ==2)
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0x40);
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y2_ADDR,0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_dh_dtl_curve_y2);
	}
	else if(s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type ==3)
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0x60);
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y2_ADDR,0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_dh_dtl_curve_y2);
	}
	else if(s_pContext->_output_wrt_comreg.u1_LFB_Dtl_increase_true==1)
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y2_ADDR,0, 7, 0x40);
	}
	else if(s_pContext->_output_wrt_comreg.u8_FB_lvl >0x60)
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0x0);
	}
	else if(s_pContext->_output_frc_sceneAnalysis.u1_Swing_true )
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y2_ADDR,0, 7, 0x0);
	}
	else if(s_pContext->_output_dh_close.u1_dh_sml_rgnAction_close && s_pContext->_output_wrt_comreg.u8_FB_lvl ==0)
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0x30);
	}
	else if(s_pContext->_output_me_sceneAnalysis.u2_panning_flag == 1)
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y2_ADDR,0, 7, 0x0);
	}
	else if(s_pContext->_output_me_sceneAnalysis.u2_panning_flag == 3)
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y2_ADDR,0, 7, 0x12);
	}
	else
	{
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y1_ADDR,24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_dh_dtl_curve_y1);
		WriteRegister(FRC_TOP__KME_DEHALO__dh_dtl_curve_y2_ADDR,0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_dh_dtl_curve_y2);
	}
}
VOID dynamicME_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	//const _PQLCONTEXT *s_pContext = GetPQLContext();
	ME_dynSR_wrtAction(pParam,pOutput);

	//ME_dynSAD_Diff_wrtAction(pParam,pOutput);
	#if PQL_DYNAMIC_ADJUST_FIX_ISSUE
	ME_acdcBld_wrtAction(pParam,pOutput);
	ME_cand_wrtAction(pParam,pOutput);
	ME_caddpnt_wrtAction(pParam,pOutput);
	ME_candOfst_wrtAction(pParam,pOutput);
	//ME_gmv_wrtAction(pParam,pOutput);
	ME_ipme_flp_alp_wrtAction(pParam,pOutput);
	ME_mvd_cuv_wrtAction(pParam,pOutput);
	ME_adptpnt_rnd_cuv_wrtAction(pParam,pOutput);
	ME_cost_wrtAction(pParam,pOutput);
	ME_Vbuf_LFSR_updStgh_wrtAction(pParam,pOutput);
	#if (IC_K5LP || IC_K6LP)
	ME_DRP_wrtAction(pParam,pOutput);
	#endif
	#endif
}

VOID logoDetect_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 u26_aDTL_rb=s_pContext->_output_read_comreg.u25_me_aDTL_rb;
	UINT32 u25_avgDTL =0;
	static UINT32  u25_avgDTL_pre;
	static UBYTE u1_pre_dh_logo_bypass_en = 0;
	pOutput->u1_LG_mb_wrt_en = 0;

	//UBYTE u1_logo_blkgrd_th_set_flg = 0; // hard to clarify all setting... need to fix when K4.2016/12/09

	if(pParam->u1_logoCtrl_wrt_en == 0)
		return;

	if(u1_pre_dh_logo_bypass_en == 0 && pParam->u1_dh_logo_bypass_en == 1)
	{
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg1_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg1_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg1_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg2_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg2_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg2_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg2_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg2_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg3_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg3_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg3_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg3_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg3_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg4_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg4_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg4_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg4_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg4_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg5_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg5_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg5_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg5_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg5_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg6_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg6_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg6_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg6_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg6_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg7_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg7_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg7_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg7_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg7_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg8_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg8_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg8_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg8_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg8_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg9_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg9_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg9_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg9_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg9_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rga_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rga_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rga_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rga_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rga_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rgb_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rgb_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rgb_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rgb_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rgb_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rgc_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rgc_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rgc_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rgc_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rgc_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rgd_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rgd_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rgd_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rgd_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rgd_BITEND, 0x1);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rge_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rge_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rge_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rge_BITEND, 0x7);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rge_BITEND, 0x1);

		u1_pre_dh_logo_bypass_en = 1;

	}

	if(u1_pre_dh_logo_bypass_en == 1 && pParam->u1_dh_logo_bypass_en == 0)
	{
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[0][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[0][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg0_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[0][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[0][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[0][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg1_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[1][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg1_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[1][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_smv_bypass_rg1_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[1][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[1][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1_ADDR, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1_BITSTART, FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[1][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg2_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[2][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg2_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[2][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg2_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[2][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg2_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[2][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg2_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg2_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg2_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[2][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg3_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[3][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg3_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[3][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg3_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[3][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg3_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[3][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg3_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg3_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg3_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[3][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg4_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[4][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg4_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[4][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg4_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[4][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg4_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[4][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg4_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg4_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg4_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[4][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg5_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[5][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg5_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[5][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg5_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[5][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg5_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[5][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg5_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg5_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg5_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[5][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg6_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[6][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg6_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[6][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg6_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[6][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg6_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[6][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg6_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg6_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg6_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[6][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg7_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[7][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg7_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[7][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg7_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[7][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg7_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[7][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg7_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg7_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg7_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[7][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg8_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[8][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg8_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[8][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg8_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[8][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg8_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[8][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg8_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg8_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg8_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[8][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rg9_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[9][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rg9_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[9][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rg9_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[9][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rg9_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[9][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg9_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rg9_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rg9_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[9][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rga_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[10][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rga_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[10][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rga_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[10][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rga_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[10][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rga_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rga_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rga_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[10][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rgb_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[11][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rgb_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[11][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rgb_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[11][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rgb_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[11][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgb_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rgb_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rgb_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[11][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rgc_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[12][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rgc_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[12][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rgc_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[12][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rgc_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[12][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgc_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rgc_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rgc_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[12][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rgd_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[13][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rgd_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[13][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rgd_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[13][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rgd_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[13][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgd_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rgd_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rgd_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[13][4]);

		WriteRegister(FRC_TOP__KME_DEHALO2__hor_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__hor_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__hor_bypass_rge_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[14][0]);
		WriteRegister(FRC_TOP__KME_DEHALO2__ver_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__ver_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__ver_bypass_rge_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[14][1]);
		WriteRegister(FRC_TOP__KME_DEHALO2__smv_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__smv_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__smv_bypass_rge_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[14][2]);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__mvd_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__mvd_bypass_rge_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[14][3]);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rge_ADDR, FRC_TOP__KME_DEHALO2__tmv_bypass_rge_BITSTART, FRC_TOP__KME_DEHALO2__tmv_bypass_rge_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.dh_logo_bypass[14][4]);

		u1_pre_dh_logo_bypass_en = 0;
	}

	u25_avgDTL = (u25_avgDTL_pre*7 + u26_aDTL_rb)>>3;

	if (s_pContext->_output_FRC_LgDet.u32_logo_closeVar_hold_cnt > 0)
	{
	    WriteRegister(FRC_TOP__MC2__mc_logo_vlpf_en_ADDR, FRC_TOP__MC2__mc_logo_vlpf_en_BITSTART, FRC_TOP__MC2__mc_logo_vlpf_en_BITEND, 0x0);
	}
	else
	{
	    WriteRegister(FRC_TOP__MC2__mc_logo_vlpf_en_ADDR, FRC_TOP__MC2__mc_logo_vlpf_en_BITSTART, FRC_TOP__MC2__mc_logo_vlpf_en_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.reg_mc_logo_vlpf_en);
	}

	//clear write action
	if (pParam->u1_LGClr_wrt_en == 1)
	{
		//sw ctrl
		//UINT32 logo_clr_idx = s_pContext->_output_FRC_LgDet.u32_blklogo_clr_idx | s_pContext->_output_frc_sceneAnalysis.u32_RgPan_idx | s_pContext->_output_FRC_LgDet.u32_Rg_unstatic_idx;
		UINT32 logo_clr_idx = s_pContext->_output_FRC_LgDet.u32_blklogo_clr_idx;

		// logo hsty clear clear logo
		if ((pParam->u1_LGPixHstyClr_wrt_en == 1 || pParam->u1_LGBlkHstyClr_wrt_en == 1) && pParam->u1_LGHstyClr_ClrLG_wrt_en == 1)
		{
			logo_clr_idx = logo_clr_idx | s_pContext->_output_FRC_LgDet.u32_logo_hsty_clr_lgclr_idx;
		}

		WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlrgclr_hw_en_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlrgclr_hw_en_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlrgclr_hw_en_BITEND, (1-s_pContext->_output_FRC_LgDet.u1_sw_clr_en_out));
#if 0
		// logo hsty clear clear logo
		if ((pParam->u1_LGPixHstyClr_wrt_en == 1 || pParam->u1_LGBlkHstyClr_wrt_en == 1) && pParam->u1_LGHstyClr_ClrLG_wrt_en == 1)
		{
			logo_clr_idx = logo_clr_idx | s_pContext->_output_FRC_LgDet.u32_logo_hsty_clr_lgclr_idx;
		}
		// logo 14 region patch close clear
		if (pParam->u1_LG_lg16s_patch_wrt_en == 1 && s_pContext->_output_FRC_LgDet.u1_logo_lg16s_patch_status == 1)
		{
			logo_clr_idx = logo_clr_idx & 0x7FFFFFFF;
		}

		if (pParam->u1_LGRg_dhclr_ctrl_wrt_en == 1 && pParam->u1_LGRg_rim_unbalance_wrt_en == 1 )
		{
			if (s_pContext->_output_FRC_LgDet.u1_RgDhadp_Rimunbalance_status == 1 && s_pContext->_output_rimctrl.u1_LogoRim_unbalace == 1)
			{
				logo_clr_idx = logo_clr_idx & 0xC3FFFFFF;
			}
		}
		else if (pParam->u1_LGRg_rim_unbalance_wrt_en == 1 && s_pContext->_output_rimctrl.u1_LogoRim_unbalace == 1)
		{
			logo_clr_idx = logo_clr_idx & 0xC3FFFFFF;
		}

		if (logo_clr_idx > 0)  //if clear
		{
			//WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_logo_merge_type), 0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclr_en), logo_clr_idx);
		}
		else
		{
			//WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_logo_merge_type), s_pContext->_output_FRC_LgDet.u4_blk_pix_merge_type_out);
			WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclr_en), logo_clr_idx);
		}
#else

// Merlin4, original setting, CSFC
		WriteRegister(FRC_TOP__KME_LOGO1__km_logo_pxlrgclr_en_ADDR, FRC_TOP__KME_LOGO1__km_logo_pxlrgclr_en_BITSTART, FRC_TOP__KME_LOGO1__km_logo_pxlrgclr_en_BITEND, logo_clr_idx);
#endif

	}

	if (pParam->u1_LGSC_ctrl_wrt_en == 1)
	{
		if(s_pContext->_output_me_sceneAnalysis.u2_panning_flag ==2)
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_iir_alpha_ADDR, FRC_TOP__KME_LOGO0__km_logo_iir_alpha_BITSTART, FRC_TOP__KME_LOGO0__km_logo_iir_alpha_BITEND, 0x1f);
		else
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_iir_alpha_ADDR, FRC_TOP__KME_LOGO0__km_logo_iir_alpha_BITSTART, FRC_TOP__KME_LOGO0__km_logo_iir_alpha_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.reg_km_logo_iir_alpha);
	}
	else
	{
		// pql adjust
		WriteRegister(FRC_TOP__KME_LOGO0__km_logo_iir_alpha_ADDR, FRC_TOP__KME_LOGO0__km_logo_iir_alpha_BITSTART, FRC_TOP__KME_LOGO0__km_logo_iir_alpha_BITEND, s_pContext->_output_FRC_LgDet.u5_iir_alpha_out);
	}


	if(s_pContext->_output_frc_sceneAnalysis.u1_fadeInOut_logo_clr)
	{
		WriteRegister(FRC_TOP__MC2__mc_logo_en_ADDR, FRC_TOP__MC2__mc_logo_en_BITSTART, FRC_TOP__MC2__mc_logo_en_BITEND, 0x0);
	}
	else if(s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true)  // use force disable mc logo
	{
		WriteRegister(FRC_TOP__MC2__mc_logo_en_ADDR, FRC_TOP__MC2__mc_logo_en_BITSTART, FRC_TOP__MC2__mc_logo_en_BITEND, 0x0);
	}
	else if(s_pContext->_output_frc_sceneAnalysis.u1_Swing_true )  // need refine
	{
		WriteRegister(FRC_TOP__MC2__mc_logo_en_ADDR, FRC_TOP__MC2__mc_logo_en_BITSTART, FRC_TOP__MC2__mc_logo_en_BITEND, 0x0);
	}
	else if (pParam->u1_LG_SC_PtClose_wrt_en)
	{
		if (s_pContext->_output_FRC_LgDet.u1_logo_sc_status == 1)
		{
			WriteRegister(FRC_TOP__MC2__mc_logo_en_ADDR, FRC_TOP__MC2__mc_logo_en_BITSTART, FRC_TOP__MC2__mc_logo_en_BITEND, 0x1);
		}
		else
		{
			WriteRegister(FRC_TOP__MC2__mc_logo_en_ADDR, FRC_TOP__MC2__mc_logo_en_BITSTART, FRC_TOP__MC2__mc_logo_en_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.reg_mc_logo_en);
		}
	}
	else
	{
		WriteRegister(FRC_TOP__MC2__mc_logo_en_ADDR, FRC_TOP__MC2__mc_logo_en_BITSTART, FRC_TOP__MC2__mc_logo_en_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.reg_mc_logo_en);
	}

	if(pParam->u1_logo_sc_FastDet_wrt_en == 1)
	{
		if(s_pContext->_output_FRC_LgDet.u1_logo_sc_FastDet_status == 1)
		{
			// right top corner
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4_BITEND, 0x32);
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4_BITEND, 0x55);
			// left bot corner
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10_BITEND, 0x32);
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx10_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx10_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx10_BITEND, 0x55);
			// mid bot
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx12_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx12_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx12_BITEND, 0x30);
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx12_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx12_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx12_BITEND, 0x55);
		}
		else
		{
			// right top corner
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.blksamethr_a[4]);
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.blksamethr_h[4]);
			// left bot corner
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.blksamethr_a[10]);
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx10_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx10_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx10_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.blksamethr_h[10]);
			// mid bot
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx12_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx12_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx12_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.blksamethr_a[12]);
			WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx12_ADDR,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx12_BITSTART,  FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx12_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.blksamethr_h[12]);
		}
	}

	// adjust logo threshold to decrease the hsty energy when seek
	if(s_pContext->_output_frc_sceneAnalysis.u8_VOSeek_prt_logo_apply > 0)
	{
		WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkgrdsum2_th_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkgrdsum2_th_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkgrdsum2_th_BITEND, 0x800);
		WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkadphstystep_en_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkadphstystep_en_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkadphstystep_en_BITEND, 0x0);
		WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_BITEND, 0xf);
		WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_BITEND, 0x0);
	}
	else
	{
		WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkgrdsum2_th_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkgrdsum2_th_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkgrdsum2_th_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.reg_km_logo_blkgrdsum2_th);
		WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkadphstystep_en_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkadphstystep_en_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkadphstystep_en_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.reg_km_logo_blkadphstystep_en);
		WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_nstep_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.reg_km_logo_blkhsty_nstep);
		WriteRegister(FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_ADDR, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_BITSTART, FRC_TOP__KME_LOGO0__km_logo_blkhsty_pstep_BITEND, s_pContext->_output_FRC_LgDet.DefaultVal.reg_km_logo_blkhsty_pstep);
	}

#if 0
	// bai  clear blk hsty write action
	if( pParam->u1_LGBlkHstyClr_wrt_en == 1 )
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclrblkhsty_en), s_pContext->_output_FRC_LgDet.u32_logo_hsty_clr_idx);
		//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclrblkhsty_en), s_pContext->_output_FRC_LgDet.u32_blklogo_clr_idx);
	}
	//else
	//{
	//	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclrblkhsty_en), 0);
	//}

	// bai clear  pix hsty write action
	if( pParam->u1_LGPixHstyClr_wrt_en == 1 )
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclrpxlhsty_en), s_pContext->_output_FRC_LgDet.u32_logo_hsty_clr_idx);
		//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclrpxlhsty_en), s_pContext->_output_FRC_LgDet.u32_blklogo_clr_idx);
	}
	//else
	//{
	//	WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxlrgclrpxlhsty_en), 0);
	//}


	if (pParam->u1_LG_netflix_wrt_en == 1  && s_pContext->_output_FRC_LgDet.u1_logo_netflix_status == 1)
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0), 7);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0), 7);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0), 7);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0), 1);

	}
	else if (pParam->u1_LG_lg16s_patch_wrt_en == 1 && s_pContext->_output_FRC_LgDet.u1_logo_lg16s_patch_status == 1)
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0), 7);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0), 7);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0), 7);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0), 1);
	}
	else
	{

		if (pParam->u1_LGRg_dhclr_ctrl_wrt_en == 1 && pParam->u1_LGRg_rim_unbalance_wrt_en == 1 )
		{
			if (s_pContext->_output_FRC_LgDet.u1_RgDhadp_Rimunbalance_status == 1 && s_pContext->_output_rimctrl.u1_LogoRim_unbalace == 1)
			{
				pOutput->u1_LG_mb_wrt_en = 1;

				// mv diff
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_diff_th_rg0), pParam->u8_logo_mv_diff_diff_th_lg);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_d_th_rg0),     pParam->u8_logo_mv_diff_sad_th_lg);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_t_th_rg0),     pParam->u8_logo_tmv_sad_th_lg);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_num_rg0),      pParam->u8_logo_tmv_num_th_lg);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_iir_alpha),         0x18);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_th_rg0), 2);

				// dh region partition
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_v2), 0x6E);

				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h1), 0xC4);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h2), 0x40);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h3), 0xC4);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h4), 0x40);

				// logo base coring
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdhor_th),  0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdp45_th),  0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdver_th),  0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdn45_th),  0);
				u1_logo_blkgrd_th_set_flg = 1;

				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0), 4);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0), 7);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0), 7);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0), 0);

			}
			else
			{
				pOutput->u1_LG_mb_wrt_en = 0;
				// 4 region
				if (s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg0 == 1 ||
					s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg1 == 1 ||
					s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg2 == 1 ||
					s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg3 == 1
					)
				{
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0), 4);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0), 7);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0), 7);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0), 0);
					//mvd setting
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_diff_th_rg0), 1);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_th_rg0), 3);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_d_th_rg0), 1);

					//tmv setting
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_t_th_rg0), 2);

				}
				else
				{
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0), 4);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0), 4);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0), 4);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0), 0);

					//mvd setting
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_diff_th_rg0), 0x10);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_th_rg0), 2);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_d_th_rg0), 5);

					//tmv setting
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_t_th_rg0), 5);
				}

				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_num_rg0),      0x99);
				//SC write action
				if (pParam->u1_LGSC_ctrl_wrt_en == 1)
				{
					WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_iir_alpha), s_pContext->_output_FRC_LgDet.u5_iir_alpha_out);
				}
				else
				{
					WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_iir_alpha),         0x1F);
				}


				// dh region partition
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_v2), 0x74);

				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h1), 0x40);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h2), 0x77);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h3), 0x90);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h4), 0xC4);

				// logo base coring
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdhor_th),  3);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdp45_th),  3);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdver_th),  3);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdn45_th),  3);

			}
		}
		else
		{
			if ((pParam->u1_LGRg_dhclr_ctrl_wrt_en == 1 && s_pContext->_output_FRC_LgDet.u1_RgDhadp_Rimunbalance_status == 1)||
				(pParam->u1_LGRg_rim_unbalance_wrt_en == 1 && s_pContext->_output_rimctrl.u1_LogoRim_unbalace == 1))
			{
				pOutput->u1_LG_mb_wrt_en = 1;
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_diff_th_rg0), pParam->u8_logo_mv_diff_diff_th_lg);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_d_th_rg0),     pParam->u8_logo_mv_diff_sad_th_lg);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_t_th_rg0),     pParam->u8_logo_tmv_sad_th_lg);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_num_rg0),      pParam->u8_logo_tmv_num_th_lg);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_iir_alpha),         0x18);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_th_rg0), 2);

				// dh region partition
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_v2), 0x6E);

				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h1), 0xC4);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h2), 0x40);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h3), 0xC4);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h4), 0x40);

				// logo base coring
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdhor_th),  0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdp45_th),  0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdver_th),  0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdn45_th),  0);
				u1_logo_blkgrd_th_set_flg = 1;

				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0), 4);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0), 7);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0), 7);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0), 0);
			}
			else
			{
				pOutput->u1_LG_mb_wrt_en = 0;
				// 4 region
				if (s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg0 == 1 ||
					s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg1 == 1 ||
					s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg2 == 1 ||
					s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg3 == 1
					)
				{
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0), 4);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0), 7);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0), 7);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0), 0);
					//mvd setting
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_diff_th_rg0), 1);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_th_rg0), 3);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_d_th_rg0), 1);

					//tmv setting
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_t_th_rg0), 2);

				}
				else
				{
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg0), 4);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_hor_bypass_rg0), 4);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_ver_bypass_rg0), 4);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg0), 0);

					//mvd setting
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_diff_th_rg0), 0x10);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_mv_d_th_rg0), 2);
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_d_th_rg0), 5);

					//tmv setting
					WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_sad_t_th_rg0), 5);
				}

				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_tmv_num_rg0),      0x99);
				//SC write action
				if (pParam->u1_LGSC_ctrl_wrt_en == 1)
				{
					WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_iir_alpha), s_pContext->_output_FRC_LgDet.u5_iir_alpha_out);
				}
				else
				{
					WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_iir_alpha),     0x1F);
				}

				// dh region partition
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_v2), 0x74);

				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h1), 0x40);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h2), 0x77);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h3), 0x90);
				WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_logo_rgn_h4), 0xC4);

				// logo base coring
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdhor_th),  3);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdp45_th),  3);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdver_th),  3);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdn45_th),  3);
			}
		}

	}
#endif
#if 0
	if (pParam->u1_LG_netflix_wrt_en  && s_pContext->_output_FRC_LgDet.u1_logo_netflix_status == 1)
	{
		// bai test
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0), pParam->u8_logo_blksameth_l_bidx0_lg);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0), pParam->u8_logo_blksameth_a_bidx0_lg);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10), pParam->u8_logo_blksameth_a_bidx10_lg);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx10), pParam->u8_logo_blkhsty_pth_bidx10_lg);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx10), pParam->u8_logo_blkhsty_nth_bidx10_lg);

		//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0), 0x1A);
		//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0), 0x4A);
		//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10), 0x50);
		//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx10), 6);
		//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx10), 6);

		//////
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx14), 0x45);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx14), 0x20);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx14), 6);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx14), 6);

		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO2__reg_km_logo_blklogopostdlt_th), 3);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx14), 0x30);
	}
	else if (pParam->u1_LG_lg16s_patch_wrt_en == 1 && s_pContext->_output_FRC_LgDet.u1_logo_lg16s_patch_status == 1)
	{
		// bai test
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0), pParam->u8_logo_blksameth_l_bidx0_com);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0), pParam->u8_logo_blksameth_a_bidx0_com);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10), pParam->u8_logo_blksameth_a_bidx10_com);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx10), pParam->u8_logo_blkhsty_pth_bidx10_com);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx10), pParam->u8_logo_blkhsty_nth_bidx10_com);

		//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0), 0x20);
		//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0), 0x64);
		//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10), 0x64);
		//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx10), 7);
		//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx10), 7);
		////// region 14
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx14), 0x45);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx14), 0x20);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx14), 6);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx14), 6);

		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO2__reg_km_logo_blklogopostdlt_th), 1);

		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx14), 0x45);

	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_pxldf_th_a_pidx14), 0x30);
		if (pParam->u1_LGRg_detect_adp_wrt_en)
		{
			if (s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg0 == 1 || s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg2 == 1 || s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg3 == 1)
			{
			// bai test
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0), pParam->u8_logo_blksameth_l_bidx0_lg);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0), pParam->u8_logo_blksameth_a_bidx0_lg);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10), pParam->u8_logo_blksameth_a_bidx10_lg);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx10), pParam->u8_logo_blkhsty_pth_bidx10_lg);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx10), pParam->u8_logo_blkhsty_nth_bidx10_lg);

				//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0), 0x1A);
				//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0), 0x4A);
				//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10), 0x50);
				//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx10), 6);
				//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx10), 6);

				//////
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx14), 0x45);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx14), 0x20);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx14), 6);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx14), 6);
			}
			else
			{
					// bai test
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0), pParam->u8_logo_blksameth_l_bidx0_com);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0), pParam->u8_logo_blksameth_a_bidx0_com);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10), pParam->u8_logo_blksameth_a_bidx10_com);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx10), pParam->u8_logo_blkhsty_pth_bidx10_com);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx10), pParam->u8_logo_blkhsty_nth_bidx10_com);


				//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx0), 0x20);
				//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx0), 0x64);
				//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx10), 0x64);
				//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx10), 7);
				//WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx10), 7);
				//////
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx14), 0x64);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx14), 0x64);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_pth_bidx14), 7);
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO1__km_logo_blkhsty_nth_bidx14), 7);
			}
			if ((s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg0 +
				s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg1  +
				s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg2  +
				s_pContext->_output_FRC_LgDet.u1_rg_dh_clr_rg3)>=1)
			{
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO2__reg_km_logo_blklogopostdlt_th), 3);
			}
			else
			{
				WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO2__reg_km_logo_blklogopostdlt_th), 4);
			}
		}

	}
#endif

#if 0 // some condiction move up !
	if(s_pContext->_output_frc_sceneAnalysis.u1_fadeInOut_logo_clr)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_logo_en), 0x0);
	}
	else if (pParam->u1_LG_SC_PtClose_wrt_en)
	{
		// 14 region patch open logo pt
		if (pParam->u1_LG_lg16s_patch_wrt_en == 1 && s_pContext->_output_FRC_LgDet.u1_logo_lg16s_patch_status == 1)
		{
			WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_logo_en), 3);
		}
		else if (s_pContext->_output_FRC_LgDet.u1_logo_sc_status == 1)
		{
			WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_logo_en), 1);
		}
		else
		{
			WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_logo_en), 3);
		}
	}
	else
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_logo_en), 0x3);
	}
#endif
#if 0
        #if PQL_DYNAMIC_ADJUST_FIX_ISSUE
	// 20170705 robin
	// disable mc logo
	WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_logo_en), 0x0);
        #endif

	if(s_pContext->_output_FRC_LgDet.u1_lg_UXN_patch_det == 1)// too hard to merge with above code if least modify...
	{
		//UINT32 U32_DATA = 0;
		//ReadRegister(KIWI_REG(FRC_TOP__PQL_1__pql_rb_ctrl_dummy_b4), &U32_DATA);
		UBYTE u8_blksameth_a_bidx4 = _CLIP_(pParam->u8_blksameth_a_bidx4/*(U32_DATA&0xff)*/, 0x20, 0x64);
		UBYTE u8_blksameth_l_bidx4 = u8_blksameth_a_bidx4;
		UBYTE u8_blksameth_h_bidx4 = _CLIP_(pParam->u8_blksameth_h_bidx4/*((U32_DATA>>8)&0xff)*/, 0x35, 0xBE);
		u8_blksameth_h_bidx4 = _MAX_(u8_blksameth_a_bidx4, u8_blksameth_h_bidx4);

		// logo base coring
		if(u1_logo_blkgrd_th_set_flg == 0)
		{
			WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdhor_th),  1);
			WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdp45_th),  1);
			WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdver_th),  1);
			WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdn45_th),  1);
		}
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdsum2_th),  2);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdsum_pth),  2);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdsum_cth),  2);

		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4), u8_blksameth_a_bidx4);// 0x20
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx4), u8_blksameth_l_bidx4);// 0x20
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4), u8_blksameth_h_bidx4);// 0x35

		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO2__reg_km_logo_blklogopost_eroen),  0);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blklogohstydlt_eroen),  0);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blklogocurdlt_eroen),  0);

		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO2__reg_km_logo_blklogopostdlt_th),  3);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blklogodlthsty_th),  3);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blklogodltcur_th),  3);


	}
	else{

		if(	(pParam->u1_LG_netflix_wrt_en == 1  && s_pContext->_output_FRC_LgDet.u1_logo_netflix_status == 1) ||
	 		(pParam->u1_LG_lg16s_patch_wrt_en == 1 && s_pContext->_output_FRC_LgDet.u1_logo_lg16s_patch_status == 1))
		{
			WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdhor_th),  3);
			WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdp45_th),  3);
			WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdver_th),  3);
			WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdn45_th),  3);
		}
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdsum2_th),  6);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdsum_pth),  3);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blkgrdsum_cth),  3);

		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_a_bidx4), 0x64);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_l_bidx4), 0x64);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blksameth_h_bidx4), 0xBE);

		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO2__reg_km_logo_blklogopost_eroen),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blklogohstydlt_eroen),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blklogocurdlt_eroen),  1);

		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blklogodlthsty_th),  5);
		WriteRegister(KIWI_REG(FRC_TOP__KME_LOGO0__km_logo_blklogodltcur_th),  4);

	}
#endif
	u25_avgDTL_pre = u25_avgDTL;
}


VOID Mc2_var_lpf_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_PQLPARAMETER *s_pParam       = GetPQLParameter();
	PQL_INPUT_FRAME_RATE in_fmRate = s_pContext->_external_data._input_frameRate;
	UBYTE  u8_cadence_Id = s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];

	if(s_pParam->_param_frc_sceneAnalysis.u1_mc2_var_lpf_wrt_en == 0) // 0906,lisa,temporal use, can be change if sync all dynamicPQ from K2
	{

	}
	else if(s_pContext->_external_data.u8_InputVSXral_FrameRepeatMode > 0)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var_lpf_en), 0x0);
	}
	else if(s_pContext->_output_frc_sceneAnalysis.u8_HDR_PicChg_prt_apply > 0)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var_lpf_en), 0x0);
	}
	else if(s_pContext->_output_frc_sceneAnalysis.u8_OSDBrightnessBigChg_prt_apply > 0)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var_lpf_en), 0x0);
	}
	else if(s_pContext->_output_frc_sceneAnalysis.u8_OSDContrastBigChg_prt_apply> 0)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var_lpf_en), 0x0);
	}
	else 	if(s_pContext->_output_filmDetectctrl.u8_flbk_lvl_cad_cnt > 0)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var_lpf_en), 0x0);
	}
	else if(s_pContext->_external_info.u16_MEMCMode == 3)  // MEMC OFF
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var_lpf_en), 0x0);
	}
	else if((in_fmRate == _PQL_IN_60HZ || in_fmRate == _PQL_IN_50HZ ) && u8_cadence_Id == _CAD_VIDEO)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var_lpf_en), 0x0);
	}
	else if(s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true >= 1  && s_pContext->_output_frc_sceneAnalysis.u1_still_frame == 0)
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var_lpf_en), 0x0);
	}
	else if(s_pContext->_output_me_sceneAnalysis.u2_panning_flag ==2)  // pure slow pan
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var_lpf_en), 0x0);
	}
	else if(s_pContext->_output_frc_sceneAnalysis.u1_Swing_true )
	{
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var_lpf_en), 0x0);
	}	
	else
	{
		UBYTE u1_ori_reg_mc_var_lpf_en = 0x3;
		if(s_pContext->_external_data._output_mode == _PQL_OUT_VIDEO_MODE)//sync from Mid_Mode_SetInOutMode() setting
			u1_ori_reg_mc_var_lpf_en = 0x3;
		if(s_pContext->_external_data._output_mode == _PQL_OUT_PC_MODE)
			u1_ori_reg_mc_var_lpf_en = 0x0;
		WriteRegister(KIWI_REG(FRC_TOP__MC2__mc_var_lpf_en), u1_ori_reg_mc_var_lpf_en);
	}	
}
VOID MC_Unsharp_Mask_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//_PQLPARAMETER *s_pParam       = GetPQLParameter();
	PQL_INPUT_FRAME_RATE in_fmRate = s_pContext->_external_data._input_frameRate;
	UBYTE  u8_cadence_Id = s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];
	static  UINT32 u5_Unsharp_Mask_holdfrm =0x0;

	if(pParam->u1_Unsharp_Mask_wrt_en== 0)
		return;

	if(s_pContext->_external_data._output_mode == _PQL_OUT_VIDEO_MODE)
	{
		if(s_pContext->_output_me_sceneAnalysis.u2_panning_flag || s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true)
		{
			WriteRegister(FRC_TOP__MC__mc_poly_intp_en_ADDR,0,1, 0x0);
			WriteRegister(FRC_TOP__MC__mc_mvd_intp_en_ADDR,6,7, 0x0);
			u5_Unsharp_Mask_holdfrm=0X10;
		}
		else if((in_fmRate == _PQL_IN_60HZ || in_fmRate == _PQL_IN_50HZ ) && u8_cadence_Id == _CAD_VIDEO)
		{
			WriteRegister(FRC_TOP__MC__mc_poly_intp_en_ADDR,0,1, 0x0);
			WriteRegister(FRC_TOP__MC__mc_mvd_intp_en_ADDR,6,7, 0x0);
			u5_Unsharp_Mask_holdfrm=0X10;
		}
		else if(s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true >= 1  && s_pContext->_output_frc_sceneAnalysis.u1_still_frame == 0)
		{
			WriteRegister(FRC_TOP__MC__mc_poly_intp_en_ADDR,0,1, 0x0);
			WriteRegister(FRC_TOP__MC__mc_mvd_intp_en_ADDR,6,7, 0x0);
			u5_Unsharp_Mask_holdfrm=0X10;
		}
		else if(u5_Unsharp_Mask_holdfrm >0)
		{
			u5_Unsharp_Mask_holdfrm--;
		}
		else
		{
			WriteRegister(FRC_TOP__MC__mc_poly_intp_en_ADDR,0,1, 0x3);
			WriteRegister(FRC_TOP__MC__mc_mvd_intp_en_ADDR,6,7, 0x3);
		}
	}
}
VOID MC_SObj_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//_PQLPARAMETER *s_pParam       = GetPQLParameter();

	if(pParam->u1_MCSobj_wrt_en== 0)
		return;

	if(s_pContext->_output_me_sceneAnalysis.u2_panning_flag == 2){   // pure slow pan
		WriteRegister(FRC_TOP__MC__mc_sobj_slop1_ADDR, 8, 13, 0x8);//0x3f
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin0_ADDR, 12, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_mc_sobj_ymin0);
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin1_ADDR, 16, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_mc_sobj_ymin1);
	}
	#if Pro_TCL
	else if(s_pContext->_output_me_sceneAnalysis.u2_panning_flag == 1){   //  normal pan
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin0_ADDR, 12, 15, 0xa);//0x2
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin1_ADDR, 16, 19, 0xa);//0x0
		WriteRegister(FRC_TOP__MC__mc_sobj_slop1_ADDR, 8, 13, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_mc_sobj_slop1);
	}
	#endif
	else if(s_pContext->_output_wrt_comreg.u1_MC_SmallObject_type==1)
	{
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin0_ADDR, 12, 15, 0xa);//0x2
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin1_ADDR, 16, 19, 0xa);//0x0
		WriteRegister(FRC_TOP__MC__mc_sobj_slop1_ADDR, 8, 13, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_mc_sobj_slop1);
	}
	else{
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin0_ADDR, 12, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_mc_sobj_ymin0);
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin1_ADDR, 16, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_mc_sobj_ymin1);
		WriteRegister(FRC_TOP__MC__mc_sobj_slop1_ADDR, 8, 13, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_mc_sobj_slop1);
	}
}
VOID ME2_SObj_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//_PQLPARAMETER *s_pParam       = GetPQLParameter();

	if(pParam->u1_ME2Sobj_wrt_en== 0)
		return;

	if(s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type==1)  // more me1
	{
		WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_sm_mv_th_ADDR, 0, 9, 0x80);
	}
	else if(s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type==2)  // more me2
	{
		WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_ph_mvdiff_gain_ADDR, 16, 21, 0x20);
	}
	else if(s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type==3)  // more me2
	{
		WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_sm_mv_th_ADDR, 0, 9, 0x10);
		WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_ph_mvdiff_gain_ADDR, 16, 21, 0x20);
	}
	else if(s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type==4)  // force me1
	{
		WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_sad_th_ADDR, 17, 29, 0x1c00);
		WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_sm_mv_th_ADDR, 0, 9, 0x380);
		WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_ip_pi_mvdiff_gain_ADDR, 10, 15,0x38);
		WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_ph_mvdiff_gain_ADDR, 16, 21, 0x0);
	}
	else{
		WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_sad_th_ADDR, 17, 29, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me2_sec_small_object_sad_th);
		WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_sm_mv_th_ADDR, 0, 9, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me2_sec_small_object_sm_mv_th);
		WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_ip_pi_mvdiff_gain_ADDR, 10, 15,s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me2_sec_small_object_ip_pi_mvdiff_gain);
		WriteRegister(FRC_TOP__KME_ME2_CALC0__kme_me2_sec_small_object_ph_mvdiff_gain_ADDR, 16, 21, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me2_sec_small_object_ph_mvdiff_gain);
	}
}
VOID MC_blend_alpha_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	static  UINT32 u32_debounce =0x0,u5_blend_alpha_holdfrm =0x0;
	UINT32 u26_aAPL_th,u26_aDTL_th;
	UINT32 u26_aAPLi_rb=s_pContext->_output_read_comreg.u26_me_aAPLi_rb;
	UINT32 u26_aAPLp_rb=s_pContext->_output_read_comreg.u26_me_aAPLp_rb;
	UINT32 u26_aDTL_rb=s_pContext->_output_read_comreg.u25_me_aDTL_rb;
	UINT32 u32_rimRatio = (s_pContext->_output_rimctrl.u32_rimRatio == 0) ? 128 : s_pContext->_output_rimctrl.u32_rimRatio;



	if(u32_debounce ==0x0)
	{
		u26_aAPL_th = 0x140000;
		u26_aDTL_th = 0x60000;
	}
	else
	{
		u26_aAPL_th = 0x1e0000;  // 0x140000 *3/2
		u26_aDTL_th = 0x40000;  // 0x60000 *2/3
	}
	u26_aAPL_th = (u26_aAPL_th * u32_rimRatio) >> 7;

	if(((u26_aAPLi_rb+ u26_aAPLp_rb)/2  < (u26_aAPL_th+u32_debounce)) && (u26_aDTL_rb >u26_aDTL_th))
	{
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, 0xf0);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, 0x30);
		u32_debounce = 0x30000;
		u5_blend_alpha_holdfrm =0x10;
	}
	else if(u5_blend_alpha_holdfrm >0)
	{
		u5_blend_alpha_holdfrm = u5_blend_alpha_holdfrm -1;
	}
	else
	{
		u32_debounce = 0x0;
		u5_blend_alpha_holdfrm = 0x0;
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_uv_alpha);
	}
}

VOID Identification_Pattern_preProcess(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	_PQLCONTEXT *s_pContext = GetPQLContext_m();
	static UBYTE u5_blend_holdfrm_preProcess_a[255] = {0};
	static UBYTE nIdentifiedNum_preProcess_a[255] = {0};
	UBYTE u8_Index;
	UINT32 u32_RB_val;
	UBYTE u1_still_frame=s_pContext->_output_frc_sceneAnalysis.u1_still_frame;
	SINT16 u11_gmv_mvx = s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb;
	SINT16 u10_gmv_mvy = s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb;
	UINT32 u25_me_aDTL = s_pContext->_output_read_comreg.u25_me_aDTL_rb;

	#if Pro_TCL
	//UBYTE  u8_cadence_Id = s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];
	//PQL_INPUT_FRAME_RATE in_fmRate = s_pContext->_external_data._input_frameRate;
	UBYTE nblend_y_alpha_Target=0xa0;
	UINT32 u32_RB_kmc_blend_y_alpha;
	UINT32 u25_rgnSad_rb12 = s_pContext->_output_read_comreg.u25_me_rSAD_rb[12];
	UINT32 u25_rgnSad_rb23 = s_pContext->_output_read_comreg.u25_me_rSAD_rb[23];

	
	ReadRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, &u32_RB_kmc_blend_y_alpha);
	#endif
	ReadRegister(FRC_TOP__PQL_0__pql_patch_dummy_e8_ADDR, 0, 31, &u32_RB_val);   //  bit0

	//reset
	pOutput->u1_IP_preProcess_true=0;

	if(pParam->u1_Identification_Pattern_en== 0)
		return;

	if(s_pContext->_output_me_vst_ctrl.u1_detect_blackBG_VST_trure)
	{
		pOutput->u1_casino_RP_detect_true =0;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
	}

	if(scalerVIP_Get_MEMCPatternFlag_Identification(3) == TRUE  )
	{
		pOutput->u1_casino_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[0] = 8;
		nIdentifiedNum_preProcess_a[0]=3;
	}
	else if(u5_blend_holdfrm_preProcess_a[0] >0)
	{
		pOutput->u1_casino_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[0]--;
	}
	else if(nIdentifiedNum_preProcess_a[0] == 3 )
	{
		pOutput->u1_casino_RP_detect_true =0;
		nIdentifiedNum_preProcess_a[0] = 0;
	}
	//=============================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(5) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		if(s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true >= 3){
			pOutput->u1_casino_RP_detect_true =1;
			u5_blend_holdfrm_preProcess_a[1] = 3;
			nIdentifiedNum_preProcess_a[1]=5;

		}
	}
	else if(u5_blend_holdfrm_preProcess_a[1] >0)
	{
		pOutput->u1_casino_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[1]--;
	}
	else if(nIdentifiedNum_preProcess_a[1] == 5 )
	{
		pOutput->u1_casino_RP_detect_true =0;
		nIdentifiedNum_preProcess_a[1] = 0;
	}
	//=============================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(6) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =3;
		u5_blend_holdfrm_preProcess_a[2] = 16;
		nIdentifiedNum_preProcess_a[2]=6;
	}
	else if(u5_blend_holdfrm_preProcess_a[2] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =3;
		u5_blend_holdfrm_preProcess_a[2]--;
	}
	else if(nIdentifiedNum_preProcess_a[2] == 6 )
	{
		nIdentifiedNum_preProcess_a[2] = 0;
	}
	//=============================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(7) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
		u5_blend_holdfrm_preProcess_a[3] = 16;
		nIdentifiedNum_preProcess_a[3]=7;
	}
	else if(u5_blend_holdfrm_preProcess_a[3] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
		u5_blend_holdfrm_preProcess_a[3]--;
	}
	else if(nIdentifiedNum_preProcess_a[3] == 7 )
	{
		nIdentifiedNum_preProcess_a[3] = 0;
	}
	//=============================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(22) == TRUE  )
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[3] = 5;
		nIdentifiedNum_preProcess_a[3]=22;
	}
	else if(u5_blend_holdfrm_preProcess_a[3] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[3]--;
	}
	else if(nIdentifiedNum_preProcess_a[3] == 22 )
	{
		nIdentifiedNum_preProcess_a[3] = 0;
	}
	#if Pro_TCL
	//=============================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(8) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, (u32_RB_kmc_blend_y_alpha+nblend_y_alpha_Target)/2);
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type =1;  // more me1
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =2;
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_clearbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[4] = 4;
		nIdentifiedNum_preProcess_a[4]=8;
	}
	else if(u5_blend_holdfrm_preProcess_a[4] >0)
	{
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, (u32_RB_kmc_blend_y_alpha+nblend_y_alpha_Target)/2);
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type =1;  // more me1
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =2;
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_clearbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[4]--;
	}
	else if(nIdentifiedNum_preProcess_a[4] == 8 && (u32_RB_kmc_blend_y_alpha !=s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha))
	{
		if(u32_RB_kmc_blend_y_alpha <(s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha))
		{
			if((s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha) -u32_RB_kmc_blend_y_alpha >1)
				WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11,(u32_RB_kmc_blend_y_alpha+1));
			else
				WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11,s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha);
		}
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type =0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =0;
		rtd_setbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_setbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
	}
	else if(nIdentifiedNum_preProcess_a[4] == 8 )
	{
		nIdentifiedNum_preProcess_a[4] = 0;
	}
	//============================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(9) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		u5_blend_holdfrm_preProcess_a[5] = 16;
		nIdentifiedNum_preProcess_a[5]=9;
	}
	else if(u5_blend_holdfrm_preProcess_a[5] >0)
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		u5_blend_holdfrm_preProcess_a[5]--;
	}
	else if(nIdentifiedNum_preProcess_a[5] == 9 )
	{
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=0;
		nIdentifiedNum_preProcess_a[5] = 0;
	}
	//===========================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(10) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_clearbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;
		u5_blend_holdfrm_preProcess_a[6] = 16;
		nIdentifiedNum_preProcess_a[6]=10;
	}
	else if(u5_blend_holdfrm_preProcess_a[6] >0)
	{
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_clearbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;
		u5_blend_holdfrm_preProcess_a[6]--;
	}
	else if(nIdentifiedNum_preProcess_a[6] == 10 )
	{
		rtd_setbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_setbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=0;
		nIdentifiedNum_preProcess_a[6] = 0;
	}
	//===========================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(11) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[7] = 8;
		nIdentifiedNum_preProcess_a[7]=11;
	}
	else if(u5_blend_holdfrm_preProcess_a[7] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[7]--;
	}
	else if(nIdentifiedNum_preProcess_a[7] == 11 )
	{
		nIdentifiedNum_preProcess_a[7] = 0;
	}
	//===================================================

	if(scalerVIP_Get_MEMCPatternFlag_Identification(13) == TRUE &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ) )
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
		s_pContext->_output_frc_sceneAnalysis.u1_Swing_true = 1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[8] = 16;
		nIdentifiedNum_preProcess_a[8]=13;
	}
	else if(u5_blend_holdfrm_preProcess_a[8] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
		s_pContext->_output_frc_sceneAnalysis.u1_Swing_true = 1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[8]--;
	}
	else if(nIdentifiedNum_preProcess_a[8] == 13 )
	{
		s_pContext->_output_frc_sceneAnalysis.u1_Swing_true = 0;
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_preProcess_a[8] = 0;
	}
	//==============================================
	#endif
	//==============================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(15) == TRUE  )
	{
		//s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[9] = 8;
		nIdentifiedNum_preProcess_a[9]=15;
	}
	else if(u5_blend_holdfrm_preProcess_a[9] >0)
	{
		//s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[9]--;
	}
	else if(nIdentifiedNum_preProcess_a[9] == 15 )
	{
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_preProcess_a[9] = 0;
	}
	//=====================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(16) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))    //  can't use motion or dtl info condition
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, 0x10);
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		u5_blend_holdfrm_preProcess_a[10] = 8;
		nIdentifiedNum_preProcess_a[10]=16;
	}
	else if(u5_blend_holdfrm_preProcess_a[10] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, 0x10);
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		u5_blend_holdfrm_preProcess_a[10]--;
	}
	else if(nIdentifiedNum_preProcess_a[10] == 16 )
	{
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_logo_y_alpha);
		rtd_setbits(0xb802b500, _BIT0);//  sharpness peaking
		nIdentifiedNum_preProcess_a[10] = 0;
	}
	//==================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(17) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))  //  can't use motion or dtl info condition
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
		u5_blend_holdfrm_preProcess_a[11] = 8;
		nIdentifiedNum_preProcess_a[11]=17;
	}
	else if(u5_blend_holdfrm_preProcess_a[11] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
		u5_blend_holdfrm_preProcess_a[11]--;
	}
	else if(nIdentifiedNum_preProcess_a[11] == 17 )
	{
		nIdentifiedNum_preProcess_a[11] = 0;
	}
	//==================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(20) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[12] = 16;
		nIdentifiedNum_preProcess_a[12]=20;
	}
	else if(u5_blend_holdfrm_preProcess_a[12] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[12]--;
	}
	else if(nIdentifiedNum_preProcess_a[12] == 20 )
	{
		nIdentifiedNum_preProcess_a[12] = 0;
	}
	//=================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(23) == TRUE  )
	{
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =1;
		s_pContext->_output_me_sceneAnalysis.u2_panning_flag =2;
		u5_blend_holdfrm_preProcess_a[13] = 16;
		nIdentifiedNum_preProcess_a[13]=23;
	}
	else if(u5_blend_holdfrm_preProcess_a[13] >0)
	{
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u2_panning_flag =2;
		u5_blend_holdfrm_preProcess_a[13]--;
	}
	else if(nIdentifiedNum_preProcess_a[13] == 23 )
	{
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true =0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[13] = 0;
	}
	//========================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(24) == TRUE )
	{
		if((_ABS_(u11_gmv_mvx>>1) <=1   && _ABS_(u10_gmv_mvy>>1) <=1)&& (u25_me_aDTL > 1100000)&&( u1_still_frame == 0))
		{
			s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =1;
			s_pContext->_output_me_sceneAnalysis.u2_panning_flag =2;
			u5_blend_holdfrm_preProcess_a[14] = 16;
			nIdentifiedNum_preProcess_a[14]=24;
		}

		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;

	}
	else if(u5_blend_holdfrm_preProcess_a[14] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =1;
		s_pContext->_output_me_sceneAnalysis.u2_panning_flag =2;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[14]--;
	}
	else if(nIdentifiedNum_preProcess_a[14] == 24 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =0;
		nIdentifiedNum_preProcess_a[14] = 0;
	}
	//===============================================
	#if Pro_TCL
	if(scalerVIP_Get_MEMCPatternFlag_Identification(25) == TRUE &&( u1_still_frame == 0)&&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, (u32_RB_kmc_blend_y_alpha+0x50)/2);
		s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVx_Step=0;
		s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVy_Step=0;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =3;
		u5_blend_holdfrm_preProcess_a[15] = 8;
		nIdentifiedNum_preProcess_a[15]=25;
	}
	else if(u5_blend_holdfrm_preProcess_a[15] >0)
	{
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, (u32_RB_kmc_blend_y_alpha+0x50)/2);
		s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVx_Step=0;
		s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVy_Step=0;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =3;
		u5_blend_holdfrm_preProcess_a[15]--;
	}
	else if(nIdentifiedNum_preProcess_a[15] == 25 )
	{
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha);
		nIdentifiedNum_preProcess_a[15] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(26) == TRUE  &&( u1_still_frame == 0)&&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =1;
		u5_blend_holdfrm_preProcess_a[16] = 8;
		nIdentifiedNum_preProcess_a[16]=26;
	}
	else if(u5_blend_holdfrm_preProcess_a[16] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =1;
		u5_blend_holdfrm_preProcess_a[16]--;
	}
	else if(nIdentifiedNum_preProcess_a[16] == 26 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =0;
		nIdentifiedNum_preProcess_a[16] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(27) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[17] = 8;
		nIdentifiedNum_preProcess_a[17]=27;
	}
	else if(u5_blend_holdfrm_preProcess_a[17] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[17]--;
	}
	else if(nIdentifiedNum_preProcess_a[17] == 27 )
	{
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_preProcess_a[17] = 0;
	}
	#endif
	if(scalerVIP_Get_MEMCPatternFlag_Identification(28) == TRUE  && (u25_me_aDTL > 800000)&&( u1_still_frame == 0))
	{
		if(((u32_RB_val >>  0) & 0x01) ==1){
			s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =1;
			s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=1;
		}
		else
			s_pContext->_output_wrt_comreg.u1_GFB_specialScene_true=1;
		u5_blend_holdfrm_preProcess_a[18] = 8;
		nIdentifiedNum_preProcess_a[18]=28;
	}
	else if(u5_blend_holdfrm_preProcess_a[18] >0)
	{
		if(((u32_RB_val >>  0) & 0x01) ==1){
			s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =1;
			s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=1;
		}
		else
			s_pContext->_output_wrt_comreg.u1_GFB_specialScene_true=1;
		u5_blend_holdfrm_preProcess_a[18]--;
	}
	else if(nIdentifiedNum_preProcess_a[18] == 28 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_Slow_Convergence_true =0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=0;

		s_pContext->_output_wrt_comreg.u1_GFB_specialScene_true=0;
		nIdentifiedNum_preProcess_a[18] = 0;
	}
	#if Pro_TCL
	if(scalerVIP_Get_MEMCPatternFlag_Identification(29) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[19] = 8;
		nIdentifiedNum_preProcess_a[19]=29;
	}
	else if(u5_blend_holdfrm_preProcess_a[19] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[19]--;
	}
	else if(nIdentifiedNum_preProcess_a[19] == 29 )
	{
		nIdentifiedNum_preProcess_a[19] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(31) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_GFB_specialScene_true=1;
		u5_blend_holdfrm_preProcess_a[20] = 8;
		nIdentifiedNum_preProcess_a[20]=31;
	}
	else if(u5_blend_holdfrm_preProcess_a[20] >0)
	{
		s_pContext->_output_wrt_comreg.u1_GFB_specialScene_true=1;
		u5_blend_holdfrm_preProcess_a[20]--;
	}
	else if(nIdentifiedNum_preProcess_a[20] == 31 )
	{
		s_pContext->_output_wrt_comreg.u1_GFB_specialScene_true=0;
		nIdentifiedNum_preProcess_a[20] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(32) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u2_panning_flag =1;
		s_pContext->_output_wrt_comreg.u1_MC_SmallObject_type=1;
		u5_blend_holdfrm_preProcess_a[21] = 8;
		nIdentifiedNum_preProcess_a[21]=32;
	}
	else if(u5_blend_holdfrm_preProcess_a[21] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u2_panning_flag =1;
		s_pContext->_output_wrt_comreg.u1_MC_SmallObject_type=1;
		u5_blend_holdfrm_preProcess_a[21]--;
	}
	else if(nIdentifiedNum_preProcess_a[21] == 32 )
	{
		s_pContext->_output_wrt_comreg.u1_MC_SmallObject_type=0;
		nIdentifiedNum_preProcess_a[21] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(33) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u2_panning_flag =1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		s_pContext->_output_wrt_comreg.u1_MC_SmallObject_type=1;
		u5_blend_holdfrm_preProcess_a[22] = 12;
		nIdentifiedNum_preProcess_a[22]=33;
	}
	else if(u5_blend_holdfrm_preProcess_a[22] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u2_panning_flag =1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		s_pContext->_output_wrt_comreg.u1_MC_SmallObject_type=1;
		u5_blend_holdfrm_preProcess_a[22]--;
	}
	else if(nIdentifiedNum_preProcess_a[22] == 33 )
	{
		s_pContext->_output_wrt_comreg.u1_MC_SmallObject_type=0;
		nIdentifiedNum_preProcess_a[22] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(34) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =3;
		u5_blend_holdfrm_preProcess_a[23] = 8;
		nIdentifiedNum_preProcess_a[23]=34;
	}
	else if(u5_blend_holdfrm_preProcess_a[23] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =3;
		u5_blend_holdfrm_preProcess_a[23]--;
	}
	else if(nIdentifiedNum_preProcess_a[23] == 34 )
	{
		nIdentifiedNum_preProcess_a[23] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(35) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[24] = 8;
		nIdentifiedNum_preProcess_a[24]=35;
	}
	else if(u5_blend_holdfrm_preProcess_a[24] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[24]--;
	}
	else if(nIdentifiedNum_preProcess_a[24] == 35 )
	{
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_preProcess_a[24] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(36) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[25] = 8;
		nIdentifiedNum_preProcess_a[25]=36;
	}
	else if(u5_blend_holdfrm_preProcess_a[25] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[25]--;
	}
	else if(nIdentifiedNum_preProcess_a[25] == 36 )
	{
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_preProcess_a[25] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(37) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;
		u5_blend_holdfrm_preProcess_a[26] = 8;
		nIdentifiedNum_preProcess_a[26]=37;
	}
	else if(u5_blend_holdfrm_preProcess_a[26] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;
		u5_blend_holdfrm_preProcess_a[26]--;
	}
	else if(nIdentifiedNum_preProcess_a[26] == 37 )
	{
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=0;
		nIdentifiedNum_preProcess_a[26] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(38) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_MC_SmallObject_type=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		u5_blend_holdfrm_preProcess_a[27] = 8;
		nIdentifiedNum_preProcess_a[27]=38;
	}
	else if(u5_blend_holdfrm_preProcess_a[27] >0)
	{
		s_pContext->_output_wrt_comreg.u1_MC_SmallObject_type=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		u5_blend_holdfrm_preProcess_a[27]--;
	}
	else if(nIdentifiedNum_preProcess_a[27] == 38 )
	{
		s_pContext->_output_wrt_comreg.u1_MC_SmallObject_type=0;
		nIdentifiedNum_preProcess_a[27] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(39) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=3;
		s_pContext->_output_wrt_comreg.u1_GFB_force_weak_type=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[28] = 8;
		nIdentifiedNum_preProcess_a[28]=39;
	}
	else if(u5_blend_holdfrm_preProcess_a[28] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=3;
		s_pContext->_output_wrt_comreg.u1_GFB_force_weak_type=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[28]--;
	}
	else if(nIdentifiedNum_preProcess_a[28] == 39 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=0;
		s_pContext->_output_wrt_comreg.u1_GFB_force_weak_type=0;
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_preProcess_a[28] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(40) == TRUE &&u25_rgnSad_rb12 ==0&&u25_rgnSad_rb23<= 250 &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=2;  // more me2
		s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true=1;  // Because pq adjustment
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;
		WriteRegister(FRC_TOP__MC__mc_bld_z_type_med3_ADDR, 8, 10, 0x4);
		WriteRegister(FRC_TOP__KME_TOP__reg_frame_meander_inv_en_ADDR,30, 30, 0x1);
		u5_blend_holdfrm_preProcess_a[29] = 8;
		nIdentifiedNum_preProcess_a[29]=40;
	}
	else if(u5_blend_holdfrm_preProcess_a[29] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=2;  // more me2
		s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;
		WriteRegister(FRC_TOP__MC__mc_bld_z_type_med3_ADDR, 8, 10, 0x4);
		WriteRegister(FRC_TOP__KME_TOP__reg_frame_meander_inv_en_ADDR,30, 30, 0x1);
		u5_blend_holdfrm_preProcess_a[29]--;
	}
	else if(nIdentifiedNum_preProcess_a[29] == 40 )
	{
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=0;
		s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true=0;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=0;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=0;
		WriteRegister(FRC_TOP__MC__mc_bld_z_type_med3_ADDR, 8, 10, 0x3);
		WriteRegister(FRC_TOP__KME_TOP__reg_frame_meander_inv_en_ADDR,30, 30, 0x0);
		nIdentifiedNum_preProcess_a[29] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(41) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[30] = 16;
		nIdentifiedNum_preProcess_a[30]=41;
	}
	else if(u5_blend_holdfrm_preProcess_a[30] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[30]--;
	}
	else if(nIdentifiedNum_preProcess_a[30] == 41 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_preProcess_a[30] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(42) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[31] = 16;
		nIdentifiedNum_preProcess_a[31]=42;
	}
	else if(u5_blend_holdfrm_preProcess_a[31] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[31]--;
	}
	else if(nIdentifiedNum_preProcess_a[31] == 42 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_preProcess_a[31] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(43) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_clearbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[32] = 8;
		nIdentifiedNum_preProcess_a[32]=43;
	}
	else if(u5_blend_holdfrm_preProcess_a[32] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_clearbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[32]--;
	}
	else if(nIdentifiedNum_preProcess_a[32] == 43 )
	{
		rtd_setbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_setbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_preProcess_a[32] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(44) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
		u5_blend_holdfrm_preProcess_a[33] = 8;
		nIdentifiedNum_preProcess_a[33]=44;
	}
	else if(u5_blend_holdfrm_preProcess_a[33] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
		u5_blend_holdfrm_preProcess_a[33]--;
	}
	else if(nIdentifiedNum_preProcess_a[33] == 44 )
	{
		nIdentifiedNum_preProcess_a[33] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(45) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[34] = 8;
		nIdentifiedNum_preProcess_a[34]=45;
	}
	else if(u5_blend_holdfrm_preProcess_a[34] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[34]--;
	}
	else if(nIdentifiedNum_preProcess_a[34] == 45 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[34] = 0;
	}
	#endif
	//==================================
	//======================
	#if Pro_SONY
	if(scalerVIP_Get_MEMCPatternFlag_Identification(46) == TRUE  && s_pContext->_output_me_sceneAnalysis.u2_panning_flag)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_dh_close.u1_closeDh_act =0;
		u5_blend_holdfrm_preProcess_a[35] = 16;
		nIdentifiedNum_preProcess_a[35]=46;
	}
	else if(u5_blend_holdfrm_preProcess_a[35] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_dh_close.u1_closeDh_act =0;
		u5_blend_holdfrm_preProcess_a[35]--;
	}
	else if(nIdentifiedNum_preProcess_a[35] == 46 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[35] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(47) == TRUE )
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=3;
		u5_blend_holdfrm_preProcess_a[36] = 16;
		nIdentifiedNum_preProcess_a[36]=47;
	}
	else if(u5_blend_holdfrm_preProcess_a[36] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=3;
		u5_blend_holdfrm_preProcess_a[36]--;
	}
	else if(nIdentifiedNum_preProcess_a[36] == 47 )
	{
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true =0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=0;
		nIdentifiedNum_preProcess_a[36] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(48) == TRUE  )
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=2;
		s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_gain_true=1;
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=2;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=1;

		u5_blend_holdfrm_preProcess_a[37] = 24;
		nIdentifiedNum_preProcess_a[37]=48;
	}
	else if(u5_blend_holdfrm_preProcess_a[37] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=2;
		s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_gain_true=1;
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=2;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=1;

		u5_blend_holdfrm_preProcess_a[37]--;
	}
	else if(nIdentifiedNum_preProcess_a[37] == 48 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=0;
		s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_gain_true=0;
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=0;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=0;
		nIdentifiedNum_preProcess_a[37] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(49) == TRUE  )
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=2;
		s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_gain_true=1;
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=2;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=1;

		u5_blend_holdfrm_preProcess_a[38] = 24;
		nIdentifiedNum_preProcess_a[38]=49;
	}
	else if(u5_blend_holdfrm_preProcess_a[38] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=2;
		s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_gain_true=1;
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=2;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=1;

		u5_blend_holdfrm_preProcess_a[38]--;
	}
	else if(nIdentifiedNum_preProcess_a[38] == 49 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=0;
		s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_gain_true=0;
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=0;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=0;
		nIdentifiedNum_preProcess_a[38] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(50)== TRUE )
	{
		s_pContext->_output_wrt_comreg.u1_FILM_force_mix_true=1;
		u5_blend_holdfrm_preProcess_a[39] = 24;
		nIdentifiedNum_preProcess_a[39]=50;
	}
	else if(u5_blend_holdfrm_preProcess_a[39] >0)
	{
		s_pContext->_output_wrt_comreg.u1_FILM_force_mix_true=1;
		u5_blend_holdfrm_preProcess_a[39]--;
	}
	else if(nIdentifiedNum_preProcess_a[39] == 50 )
	{
		s_pContext->_output_wrt_comreg.u1_FILM_force_mix_true=0;
		nIdentifiedNum_preProcess_a[39] = 0;
	}
	#endif
	#if Pro_TCL
	if(scalerVIP_Get_MEMCPatternFlag_Identification(51) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		u5_blend_holdfrm_preProcess_a[40] = 16;
		nIdentifiedNum_preProcess_a[40]=51;
	}
	else if(u5_blend_holdfrm_preProcess_a[40] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		u5_blend_holdfrm_preProcess_a[40]--;
	}
	else if(nIdentifiedNum_preProcess_a[40] == 51 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=0;
		nIdentifiedNum_preProcess_a[40] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(52) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=3;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Fast_Convergence_type =1;
		s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVx_Step=0;
		s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVy_Step=0;
		u5_blend_holdfrm_preProcess_a[41] = 24;
		nIdentifiedNum_preProcess_a[41]=52;
	}
	else if(u5_blend_holdfrm_preProcess_a[41] >0)
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=3;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Fast_Convergence_type =1;
		s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVx_Step=0;
		s_pContext->_output_me_sceneAnalysis.u3_Dynamic_MVy_Step=0;
		u5_blend_holdfrm_preProcess_a[41]--;
	}
	else if(nIdentifiedNum_preProcess_a[41] == 52 )
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Fast_Convergence_type =0;
		nIdentifiedNum_preProcess_a[41] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(53) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Fast_Convergence_type =2;
		s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_KME_SR_increaseY_true=1;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Fast_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[42] = 24;
		nIdentifiedNum_preProcess_a[42]=53;
	}
	else if(u5_blend_holdfrm_preProcess_a[42] >0)
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Fast_Convergence_type =2;
		s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_KME_SR_increaseY_true=1;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Fast_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[42]--;
	}
	else if(nIdentifiedNum_preProcess_a[42] == 53 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Fast_Convergence_type =0;
		s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true=0;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=0;
		s_pContext->_output_wrt_comreg.u1_KME_SR_increaseY_true=0;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type =0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Fast_Convergence_true=0;
		nIdentifiedNum_preProcess_a[42] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(54) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[43] = 8;
		nIdentifiedNum_preProcess_a[43]=54;
	}
	else if(u5_blend_holdfrm_preProcess_a[43] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[43]--;
	}
	else if(nIdentifiedNum_preProcess_a[43] == 54 )
	{
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_preProcess_a[43] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(55) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_dh_close.u1_dh_sml_rgnAction_close=1;
		s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true=1;
		u5_blend_holdfrm_preProcess_a[44] = 8;
		nIdentifiedNum_preProcess_a[44]=55;
	}
	else if(u5_blend_holdfrm_preProcess_a[44] >0)
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_dh_close.u1_dh_sml_rgnAction_close=1;
		s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true=1;
		u5_blend_holdfrm_preProcess_a[44]--;
	}
	else if(nIdentifiedNum_preProcess_a[44] == 55 )
	{
		s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true=0;
		nIdentifiedNum_preProcess_a[44] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(56) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=3;
		s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true=1;
		u5_blend_holdfrm_preProcess_a[45] = 8;
		nIdentifiedNum_preProcess_a[45]=56;
	}
	else if(u5_blend_holdfrm_preProcess_a[45] >0)
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=3;
		s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true=1;
		u5_blend_holdfrm_preProcess_a[45]--;
	}
	else if(nIdentifiedNum_preProcess_a[45] == 56 )
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=0;
		s_pContext->_output_wrt_comreg.u1_GFB_force_zero_true=0;
		nIdentifiedNum_preProcess_a[45] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(57) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_dh_close.u1_closeDh_act =0;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=3;
		u5_blend_holdfrm_preProcess_a[46] = 8;
		nIdentifiedNum_preProcess_a[46]=57;
	}
	else if(u5_blend_holdfrm_preProcess_a[46] >0)
	{
		s_pContext->_output_dh_close.u1_closeDh_act =0;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=3;
		u5_blend_holdfrm_preProcess_a[46]--;
	}
	else if(nIdentifiedNum_preProcess_a[46] == 57 )
	{
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=0;
		nIdentifiedNum_preProcess_a[46] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(58) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_GFB_force_MAX_true=1;
		u5_blend_holdfrm_preProcess_a[47] = 8;
		nIdentifiedNum_preProcess_a[47]=58;
	}
	else if(u5_blend_holdfrm_preProcess_a[47] >0)
	{
		s_pContext->_output_wrt_comreg.u1_GFB_force_MAX_true=1;
		u5_blend_holdfrm_preProcess_a[47]--;
	}
	else if(nIdentifiedNum_preProcess_a[47] == 58 )
	{
		s_pContext->_output_wrt_comreg.u1_GFB_force_MAX_true=0;
		nIdentifiedNum_preProcess_a[47] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(59) == TRUE  &&(u25_me_aDTL >=3800000)&&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_dh_close.u1_closeDh_act =0;
		pOutput->u1_casino_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[48] = 8;
		nIdentifiedNum_preProcess_a[48]=59;
	}
	else if(u5_blend_holdfrm_preProcess_a[48] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_dh_close.u1_closeDh_act =0;
		pOutput->u1_casino_RP_detect_true =1;
		u5_blend_holdfrm_preProcess_a[48]--;
	}
	else if(nIdentifiedNum_preProcess_a[48] == 59 )
	{
		pOutput->u1_casino_RP_detect_true =0;
		nIdentifiedNum_preProcess_a[48] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(4) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_clearbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;

		u5_blend_holdfrm_preProcess_a[49] = 20;
		nIdentifiedNum_preProcess_a[49]=4;
	}
	else if(u5_blend_holdfrm_preProcess_a[49] >0)
	{
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_clearbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;

		u5_blend_holdfrm_preProcess_a[49]--;
	}
	else if(nIdentifiedNum_preProcess_a[49] == 4 )
	{
		rtd_setbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_setbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply

		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=0;

		nIdentifiedNum_preProcess_a[49] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(60) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_clearbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;

		u5_blend_holdfrm_preProcess_a[50] = 20;
		nIdentifiedNum_preProcess_a[50]=60;
	}
	else if(u5_blend_holdfrm_preProcess_a[50] >0)
	{
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_clearbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;

		u5_blend_holdfrm_preProcess_a[50]--;
	}
	else if(nIdentifiedNum_preProcess_a[50] == 60 )
	{
		rtd_setbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_setbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=0;

		nIdentifiedNum_preProcess_a[50] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(61) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_clearbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;

		u5_blend_holdfrm_preProcess_a[51] = 20;
		nIdentifiedNum_preProcess_a[51]=61;
	}
	else if(u5_blend_holdfrm_preProcess_a[51] >0)
	{
		rtd_clearbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_clearbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;

		u5_blend_holdfrm_preProcess_a[51]--;
	}
	else if(nIdentifiedNum_preProcess_a[51] == 61 )
	{
		rtd_setbits(0xb802b500, _BIT0);//  sharpness peaking
		rtd_setbits(0xb802b950, _BIT0);//  sharpness dlti
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=0;
		nIdentifiedNum_preProcess_a[51] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(62) == TRUE &&(u11_gmv_mvx >=-58 && u11_gmv_mvx <=-36)&&(u10_gmv_mvy >=-72 && u10_gmv_mvy <=-33)  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_dh_close.u1_dh_sml_rgnAction_close=1;
		if(u32_RB_kmc_blend_y_alpha >0x70)
			WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, (u32_RB_kmc_blend_y_alpha-3));
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, 0xa0);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_mode_ADDR, 24, 25, 0x1);
		u5_blend_holdfrm_preProcess_a[52] = 8;
		nIdentifiedNum_preProcess_a[52]=62;
	}
	else if(u5_blend_holdfrm_preProcess_a[52] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_dh_close.u1_dh_sml_rgnAction_close=1;
		if(u32_RB_kmc_blend_y_alpha >0x70)
			WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, (u32_RB_kmc_blend_y_alpha-3));
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, 0xa0);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_mode_ADDR, 24, 25, 0x1);
		u5_blend_holdfrm_preProcess_a[52]--;
	}
	else if(nIdentifiedNum_preProcess_a[52] == 62 && (u32_RB_kmc_blend_y_alpha !=s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha) )
	{
		if(u32_RB_kmc_blend_y_alpha <(s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha))
		{
			if((s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha) -u32_RB_kmc_blend_y_alpha >1)
				WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11,(u32_RB_kmc_blend_y_alpha+1));
			else
				WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11,s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha);
		}
		s_pContext->_output_dh_close.u1_dh_sml_rgnAction_close=0;
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_uv_alpha);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_mode_ADDR, 24, 25, 0x2);
	}
	else if(nIdentifiedNum_preProcess_a[52] == 62)
	{
		nIdentifiedNum_preProcess_a[52] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(63) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		u5_blend_holdfrm_preProcess_a[53] = 8;
		nIdentifiedNum_preProcess_a[53]=63;
	}
	else if(u5_blend_holdfrm_preProcess_a[53] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		u5_blend_holdfrm_preProcess_a[53]--;
	}
	else if(nIdentifiedNum_preProcess_a[53] == 63 )
	{
		nIdentifiedNum_preProcess_a[53] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(64) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_dh_close.u1_dh_sml_rgnAction_close=1;
		u5_blend_holdfrm_preProcess_a[54] = 16;
		nIdentifiedNum_preProcess_a[54]=64;
	}
	else if(u5_blend_holdfrm_preProcess_a[54] >0)
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_dh_close.u1_dh_sml_rgnAction_close=1;
		u5_blend_holdfrm_preProcess_a[54]--;
	}
	else if(nIdentifiedNum_preProcess_a[54] == 64 )
	{
		nIdentifiedNum_preProcess_a[54] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(65) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;
		u5_blend_holdfrm_preProcess_a[55] = 16;
		nIdentifiedNum_preProcess_a[55]=65;
	}
	else if(u5_blend_holdfrm_preProcess_a[55] >0)
	{
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;
		u5_blend_holdfrm_preProcess_a[55]--;
	}
	else if(nIdentifiedNum_preProcess_a[55] == 65 )
	{
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=0;
		nIdentifiedNum_preProcess_a[55] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(66) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		u5_blend_holdfrm_preProcess_a[56] = 8;
		nIdentifiedNum_preProcess_a[56]=66;
	}
	else if(u5_blend_holdfrm_preProcess_a[56] >0)
	{
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		u5_blend_holdfrm_preProcess_a[56]--;
	}
	else if(nIdentifiedNum_preProcess_a[56] == 66 )
	{
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=0;
		nIdentifiedNum_preProcess_a[56] = 0;
	}
	#endif
	#if Pro_SONY
	if(scalerVIP_Get_MEMCPatternFlag_Identification(67) == TRUE && scalerVIP_Get_MEMCPatternFlag_Identification(49) == FALSE)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_KME_gmvd_cost_type=1;
		u5_blend_holdfrm_preProcess_a[57] = 24;
		nIdentifiedNum_preProcess_a[57]=67;
	}
	else if(u5_blend_holdfrm_preProcess_a[57] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_KME_gmvd_cost_type=1;
		u5_blend_holdfrm_preProcess_a[57]--;
	}
	//else if(nIdentifiedNum_preProcess_a[57] == 67&&(scalerVIP_Get_MEMCPatternFlag_Identification(48) == TRUE || scalerVIP_Get_MEMCPatternFlag_Identification(49) == TRUE ) )
	//{
	//	s_pContext->_output_wrt_comreg.u1_KME_gmvd_cost_type=0;
	//	nIdentifiedNum_preProcess_a[57] = 0;
	//}
	else if(nIdentifiedNum_preProcess_a[57] == 67 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_KME_gmvd_cost_type=0;
		nIdentifiedNum_preProcess_a[57] = 0;
	}
	#endif
	#if Pro_TCL
	if(scalerVIP_Get_MEMCPatternFlag_Identification(68) == TRUE && s_pContext->_output_me_sceneAnalysis.u2_panning_flag)
	{
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=2;
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, 0xb0);
		u5_blend_holdfrm_preProcess_a[58] = 8;
		nIdentifiedNum_preProcess_a[58]=68;
	}
	else if(u5_blend_holdfrm_preProcess_a[58] >0)
	{
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=2;
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, 0xb0);
		u5_blend_holdfrm_preProcess_a[58]--;
	}
	else if(nIdentifiedNum_preProcess_a[58] == 68 && (u32_RB_kmc_blend_y_alpha !=s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha) )
	{
		if(u32_RB_kmc_blend_y_alpha <(s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha))
		{
			if((s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha) -u32_RB_kmc_blend_y_alpha >1)
				WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11,(u32_RB_kmc_blend_y_alpha+1));
			else
				WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11,s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha);
		}
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=0;
	}
	else if(nIdentifiedNum_preProcess_a[58] == 68 )
	{
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=0;
		nIdentifiedNum_preProcess_a[58] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(69) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=1;
		u5_blend_holdfrm_preProcess_a[59] = 8;
		nIdentifiedNum_preProcess_a[59]=69;
	}
	else if(u5_blend_holdfrm_preProcess_a[59] >0)
	{
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=1;
		u5_blend_holdfrm_preProcess_a[59]--;
	}
	else if(nIdentifiedNum_preProcess_a[59] == 69 )
	{
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=0;
		nIdentifiedNum_preProcess_a[59] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(70) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[60] = 8;
		nIdentifiedNum_preProcess_a[60]=70;
	}
	else if(u5_blend_holdfrm_preProcess_a[60] >0)
	{
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[60]--;
	}
	else if(nIdentifiedNum_preProcess_a[60] == 70 )
	{
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_preProcess_a[60] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(71) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
		u5_blend_holdfrm_preProcess_a[61] = 8;
		nIdentifiedNum_preProcess_a[61]=71;
	}
	else if(u5_blend_holdfrm_preProcess_a[61] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
		u5_blend_holdfrm_preProcess_a[61]--;
	}
	else if(nIdentifiedNum_preProcess_a[61] == 71 )
	{
		nIdentifiedNum_preProcess_a[61] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(72) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
		u5_blend_holdfrm_preProcess_a[62] = 8;
		nIdentifiedNum_preProcess_a[62]=72;
	}
	else if(u5_blend_holdfrm_preProcess_a[62] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =0;
		u5_blend_holdfrm_preProcess_a[62]--;
	}
	else if(nIdentifiedNum_preProcess_a[62] == 72 )
	{
		nIdentifiedNum_preProcess_a[62] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(73) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[63] = 8;
		nIdentifiedNum_preProcess_a[63]=73;
	}
	else if(u5_blend_holdfrm_preProcess_a[63] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_preProcess_a[63]--;
	}
	else if(nIdentifiedNum_preProcess_a[63] == 73 )
	{
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_preProcess_a[63] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(74) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[64] = 8;
		nIdentifiedNum_preProcess_a[64]=74;
	}
	else if(u5_blend_holdfrm_preProcess_a[64] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[64]--;
	}
	else if(nIdentifiedNum_preProcess_a[64] == 74 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[64] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(75) == TRUE &&  (u11_gmv_mvx >=40 && u11_gmv_mvx <=50)&&(u10_gmv_mvy >=-61 && u10_gmv_mvy <=-31)&&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		if(u32_RB_kmc_blend_y_alpha >0x70)
			WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, (u32_RB_kmc_blend_y_alpha-3));
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, 0x80);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_mode_ADDR, 24, 25, 0x1);

		s_pContext->_output_dh_close.u1_closeDh_act =1;
		u5_blend_holdfrm_preProcess_a[65] = 8;
		nIdentifiedNum_preProcess_a[65]=75;
	}
	else if(u5_blend_holdfrm_preProcess_a[65] >0)
	{
		if(u32_RB_kmc_blend_y_alpha >0x70)
			WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, (u32_RB_kmc_blend_y_alpha-3));
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, 0x80);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_mode_ADDR, 24, 25, 0x1);

		s_pContext->_output_dh_close.u1_closeDh_act =1;
		u5_blend_holdfrm_preProcess_a[65]--;
	}
	else if(nIdentifiedNum_preProcess_a[65] == 75 && (u32_RB_kmc_blend_y_alpha !=s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha) )
	{
		if(u32_RB_kmc_blend_y_alpha <(s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha))
		{
			if((s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha) -u32_RB_kmc_blend_y_alpha >1)
				WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11,(u32_RB_kmc_blend_y_alpha+1));
			else
				WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11,s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha);
		}
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_uv_alpha);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_mode_ADDR, 24, 25, 0x2);
	}
	else if(nIdentifiedNum_preProcess_a[65] == 75 )
	{
		nIdentifiedNum_preProcess_a[65] = 0;
	}

	if(scalerVIP_Get_MEMCPatternFlag_Identification(76) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_dh_close.u1_dh_sml_rgnAction_close=1;
		u5_blend_holdfrm_preProcess_a[66] = 16;
		nIdentifiedNum_preProcess_a[66]=76;
	}
	else if(u5_blend_holdfrm_preProcess_a[66] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_dh_close.u1_dh_sml_rgnAction_close=1;
		u5_blend_holdfrm_preProcess_a[66]--;
	}
	else if(nIdentifiedNum_preProcess_a[66] == 76 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[66] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(77) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		u5_blend_holdfrm_preProcess_a[67] = 8;
		nIdentifiedNum_preProcess_a[67]=77;
	}
	else if(u5_blend_holdfrm_preProcess_a[67] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		u5_blend_holdfrm_preProcess_a[67]--;
	}
	else if(nIdentifiedNum_preProcess_a[67] == 77 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[67] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(78) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=2;
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=1;
		s_pContext->_output_wrt_comreg.u1_ME1_DRP_type = 1;
		u5_blend_holdfrm_preProcess_a[68] = 8;
		nIdentifiedNum_preProcess_a[68]=78;
	}
	else if(u5_blend_holdfrm_preProcess_a[68] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=2;
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=1;
		s_pContext->_output_wrt_comreg.u1_ME1_DRP_type = 1;
		u5_blend_holdfrm_preProcess_a[68]--;
	}
	else if(nIdentifiedNum_preProcess_a[68] == 78 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=0;
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=0;
		s_pContext->_output_wrt_comreg.u1_ME1_DRP_type = 0;
		nIdentifiedNum_preProcess_a[68] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(79) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=2;
		u5_blend_holdfrm_preProcess_a[69] = 8;
		nIdentifiedNum_preProcess_a[69]=79;
	}
	else if(u5_blend_holdfrm_preProcess_a[69] >0)
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=2;
		u5_blend_holdfrm_preProcess_a[69]--;
	}
	else if(nIdentifiedNum_preProcess_a[69] == 79 )
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=0;
		nIdentifiedNum_preProcess_a[69] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(80) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=2;
		u5_blend_holdfrm_preProcess_a[70] = 8;
		nIdentifiedNum_preProcess_a[70]=80;
	}
	else if(u5_blend_holdfrm_preProcess_a[70] >0)
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=2;
		u5_blend_holdfrm_preProcess_a[70]--;
	}
	else if(nIdentifiedNum_preProcess_a[70] == 80 )
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=0;
		nIdentifiedNum_preProcess_a[70] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(81) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=2;
		if(u32_RB_kmc_blend_y_alpha >0xb0)
			WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, (u32_RB_kmc_blend_y_alpha-3));
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		u5_blend_holdfrm_preProcess_a[71] = 8;
		nIdentifiedNum_preProcess_a[71]=81;
	}
	else if(u5_blend_holdfrm_preProcess_a[71] >0)
	{
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=2;
		if(u32_RB_kmc_blend_y_alpha >0xb0)
			WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, (u32_RB_kmc_blend_y_alpha-3));
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		u5_blend_holdfrm_preProcess_a[71]--;
	}
	else if(nIdentifiedNum_preProcess_a[71] == 81 && (u32_RB_kmc_blend_y_alpha !=s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha) )
	{
		if(u32_RB_kmc_blend_y_alpha <(s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha))
		{
			if((s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha) -u32_RB_kmc_blend_y_alpha >1)
				WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11,(u32_RB_kmc_blend_y_alpha+1));
			else
				WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11,s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha);
		}
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=0;
	}
	else if(nIdentifiedNum_preProcess_a[71] == 81 )
	{
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=0;
		nIdentifiedNum_preProcess_a[71] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(82) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		u5_blend_holdfrm_preProcess_a[72] = 8;
		nIdentifiedNum_preProcess_a[72]=82;
	}
	else if(u5_blend_holdfrm_preProcess_a[72] >0)
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		u5_blend_holdfrm_preProcess_a[72]--;
	}
	else if(nIdentifiedNum_preProcess_a[72] == 82 )
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[72] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(83) == TRUE   &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_GFB_force_weak_type=1;
		s_pContext->_output_wrt_comreg.u1_GFB_modify_true=0;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=1;
		u5_blend_holdfrm_preProcess_a[73] = 8;
		nIdentifiedNum_preProcess_a[73]=83;
	}
	else if(u5_blend_holdfrm_preProcess_a[73] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_GFB_force_weak_type=1;
		s_pContext->_output_wrt_comreg.u1_GFB_modify_true=0;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=1;
		u5_blend_holdfrm_preProcess_a[73]--;
	}
	else if(nIdentifiedNum_preProcess_a[73] == 83 && pOutput->u8_FB_lvl>0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_GFB_force_weak_type=0;
		s_pContext->_output_wrt_comreg.u1_GFB_modify_true=1;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=0;
		pOutput->u8_FB_lvl --;
	}
	else if(nIdentifiedNum_preProcess_a[73] == 83 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_GFB_force_weak_type=0;
		s_pContext->_output_wrt_comreg.u1_GFB_modify_true=0;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=0;
		nIdentifiedNum_preProcess_a[73] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(84) == TRUE  && (u11_gmv_mvx >=190 && u11_gmv_mvx <=310)&&(u10_gmv_mvy >=-7 && u10_gmv_mvy <=7)&&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		if(pOutput->u8_FB_lvl<0x60)
		{
			pOutput->u8_FB_lvl ++;
			s_pContext->_output_wrt_comreg.u1_GFB_modify_true=1;
		}
		else if( s_pContext->_output_fblevelctrl.u8_FBLevel >0x60)
		{
			s_pContext->_output_wrt_comreg.u1_GFB_modify_true=0;
		}
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=1;
		u5_blend_holdfrm_preProcess_a[74] = 16;
		nIdentifiedNum_preProcess_a[74]=84;
	}
	else if(u5_blend_holdfrm_preProcess_a[74] >0)
	{
		if(pOutput->u8_FB_lvl<0x60)
		{
			pOutput->u8_FB_lvl ++;
			s_pContext->_output_wrt_comreg.u1_GFB_modify_true=1;
		}
		else if( s_pContext->_output_fblevelctrl.u8_FBLevel >0x60)
		{
			s_pContext->_output_wrt_comreg.u1_GFB_modify_true=0;
		}
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=1;
		u5_blend_holdfrm_preProcess_a[74]--;
	}
	else if(nIdentifiedNum_preProcess_a[74] == 84 && pOutput->u8_FB_lvl>0)
	{
		s_pContext->_output_wrt_comreg.u1_GFB_modify_true=1;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=1;
		pOutput->u8_FB_lvl --;
	}
	else if(nIdentifiedNum_preProcess_a[74] == 84 )
	{
		s_pContext->_output_wrt_comreg.u1_GFB_modify_true=0;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=0;
		nIdentifiedNum_preProcess_a[74] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(85) == TRUE   && (u11_gmv_mvx >=190 && u11_gmv_mvx <=310)&&(u10_gmv_mvy >=-7 && u10_gmv_mvy <=7)&&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		if(pOutput->u8_FB_lvl<0x60)
		{
			pOutput->u8_FB_lvl ++;
			s_pContext->_output_wrt_comreg.u1_GFB_modify_true=1;
		}
		else if( s_pContext->_output_fblevelctrl.u8_FBLevel >0x60)
		{
			s_pContext->_output_wrt_comreg.u1_GFB_modify_true=0;
		}
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=1;
		u5_blend_holdfrm_preProcess_a[75] = 16;
		nIdentifiedNum_preProcess_a[75]=85;
	}
	else if(u5_blend_holdfrm_preProcess_a[75] >0)
	{
		if(pOutput->u8_FB_lvl<0x60)
		{
			pOutput->u8_FB_lvl ++;
			s_pContext->_output_wrt_comreg.u1_GFB_modify_true=1;
		}
		else if( s_pContext->_output_fblevelctrl.u8_FBLevel >0x60)
		{
			s_pContext->_output_wrt_comreg.u1_GFB_modify_true=0;
		}
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=1;
		u5_blend_holdfrm_preProcess_a[75]--;
	}
	else if(nIdentifiedNum_preProcess_a[75] == 85 && pOutput->u8_FB_lvl>0)
	{
		s_pContext->_output_wrt_comreg.u1_GFB_modify_true=1;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=1;
		pOutput->u8_FB_lvl --;
	}
	else if(nIdentifiedNum_preProcess_a[75] == 85 )
	{
		s_pContext->_output_wrt_comreg.u1_GFB_modify_true=0;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type=0;
		nIdentifiedNum_preProcess_a[75] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(86) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		u5_blend_holdfrm_preProcess_a[76] = 8;
		nIdentifiedNum_preProcess_a[76]=86;
	}
	else if(u5_blend_holdfrm_preProcess_a[76] >0)
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		u5_blend_holdfrm_preProcess_a[76]--;
	}
	else if(nIdentifiedNum_preProcess_a[76] == 86 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[76] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(87) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		u5_blend_holdfrm_preProcess_a[77] = 8;
		nIdentifiedNum_preProcess_a[77]=87;
	}
	else if(u5_blend_holdfrm_preProcess_a[77] >0)
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		u5_blend_holdfrm_preProcess_a[77]--;
	}
	else if(nIdentifiedNum_preProcess_a[77] == 87 )
	{
		nIdentifiedNum_preProcess_a[77] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(88) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=4;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[78] = 16;
		nIdentifiedNum_preProcess_a[78]=88;
	}
	else if(u5_blend_holdfrm_preProcess_a[78] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=4;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[78]--;
	}
	else if(nIdentifiedNum_preProcess_a[78] == 88 )
	{
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[78] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(89) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		u5_blend_holdfrm_preProcess_a[79] = 8;
		nIdentifiedNum_preProcess_a[79]=89;
	}
	else if(u5_blend_holdfrm_preProcess_a[79] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		u5_blend_holdfrm_preProcess_a[79]--;
	}
	else if(nIdentifiedNum_preProcess_a[79] == 89 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[79] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(90) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		u5_blend_holdfrm_preProcess_a[80] = 8;
		nIdentifiedNum_preProcess_a[80]=90;
	}
	else if(u5_blend_holdfrm_preProcess_a[80] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		u5_blend_holdfrm_preProcess_a[80]--;
	}
	else if(nIdentifiedNum_preProcess_a[80] == 90 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[80] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(91) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_DRP_type = 1;
		u5_blend_holdfrm_preProcess_a[81] = 8;
		nIdentifiedNum_preProcess_a[81]=91;
	}
	else if(u5_blend_holdfrm_preProcess_a[81] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_DRP_type = 1;
		u5_blend_holdfrm_preProcess_a[81]--;
	}
	else if(nIdentifiedNum_preProcess_a[81] == 91 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_DRP_type = 0;
		nIdentifiedNum_preProcess_a[81] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(92) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;
		u5_blend_holdfrm_preProcess_a[82] = 8;
		nIdentifiedNum_preProcess_a[82]=92;
	}
	else if(u5_blend_holdfrm_preProcess_a[82] >0)
	{
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=1;
		u5_blend_holdfrm_preProcess_a[82]--;
	}
	else if(nIdentifiedNum_preProcess_a[82] == 92 )
	{
		s_pContext->_output_wrt_comreg.u1_MC_Logo_Close_true=0;
		nIdentifiedNum_preProcess_a[82] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(93) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		u5_blend_holdfrm_preProcess_a[83] = 8;
		nIdentifiedNum_preProcess_a[83]=93;
	}
	else if(u5_blend_holdfrm_preProcess_a[83] >0)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =4;
		u5_blend_holdfrm_preProcess_a[83]--;
	}
	else if(nIdentifiedNum_preProcess_a[83] == 93)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[83] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(94) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type =3;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[84] = 16;
		nIdentifiedNum_preProcess_a[84]=94;
	}
	else if(u5_blend_holdfrm_preProcess_a[84] >0)
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type =3;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[84]--;
	}
	else if(nIdentifiedNum_preProcess_a[84] == 94)
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type =0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[84] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(95) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[85] = 16;
		nIdentifiedNum_preProcess_a[85]=95;
	}
	else if(u5_blend_holdfrm_preProcess_a[85] >0)
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[85]--;
	}
	else if(nIdentifiedNum_preProcess_a[85] == 95)
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type =0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[85] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(96) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[86] = 16;
		nIdentifiedNum_preProcess_a[86]=96;
	}
	else if(u5_blend_holdfrm_preProcess_a[86] >0)
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[86]--;
	}
	else if(nIdentifiedNum_preProcess_a[86] == 96)
	{
		s_pContext->_output_wrt_comreg.u1_LFB_Dtl_weak_type =0;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[86] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(97) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[87] = 16;
		nIdentifiedNum_preProcess_a[87]=97;
	}
	else if(u5_blend_holdfrm_preProcess_a[87] >0)
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		u5_blend_holdfrm_preProcess_a[87]--;
	}
	else if(nIdentifiedNum_preProcess_a[87] == 97)
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		nIdentifiedNum_preProcess_a[87] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(98) == TRUE  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=3;
		u5_blend_holdfrm_preProcess_a[88] = 16;
		nIdentifiedNum_preProcess_a[88]=98;
	}
	else if(u5_blend_holdfrm_preProcess_a[88] >0)
	{
		s_pContext->_output_dh_close.u1_closeDh_act =1;
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=1;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=3;
		u5_blend_holdfrm_preProcess_a[88]--;
	}
	else if(nIdentifiedNum_preProcess_a[88] == 98)
	{
		s_pContext->_output_wrt_comreg.u1_LFB_force_zero_true=0;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=0;
		nIdentifiedNum_preProcess_a[88] = 0;
	}
	#endif
	#if Pro_SONY
	if(scalerVIP_Get_MEMCPatternFlag_Identification(99) == TRUE  )
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=2;
		s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_gain_true=1;
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=2;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=1;

		u5_blend_holdfrm_preProcess_a[89] = 24;
		nIdentifiedNum_preProcess_a[89]=99;
	}
	else if(u5_blend_holdfrm_preProcess_a[89] >0)
	{
		s_pContext->_output_me_sceneAnalysis.u1_RP_detect_true =1;
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=1;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=2;
		s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_gain_true=1;
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=2;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=1;

		u5_blend_holdfrm_preProcess_a[89]--;
	}
	else if(nIdentifiedNum_preProcess_a[89] == 99 )
	{
		s_pContext->_output_wrt_comreg.u1_ME1_rnd_mask_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCanddpnt_Slow_Convergence_true=0;
		s_pContext->_output_wrt_comreg.u1_ME1_rndCand_Slow_Convergence_type=0;
		s_pContext->_output_wrt_comreg.u1_ME1_adptpnt_rnd_gain_true=0;
		s_pContext->_output_wrt_comreg.u1_IPME_increase_flp_type=0;
		s_pContext->_output_wrt_comreg.u1_ME2_SmallObject_type=0;
		nIdentifiedNum_preProcess_a[89] = 0;
	}
	#endif
	if(scalerVIP_Get_MEMCPatternFlag_Identification(102) == TRUE  )
	{
		s_pContext->_output_wrt_comreg.u1_GFB_Special_apply=1;
		u5_blend_holdfrm_preProcess_a[90] = 8;
		nIdentifiedNum_preProcess_a[90]=102;
	}
	else if(u5_blend_holdfrm_preProcess_a[90] >0)
	{
		s_pContext->_output_wrt_comreg.u1_GFB_Special_apply=1;
		u5_blend_holdfrm_preProcess_a[90]--;
	}
	else if(nIdentifiedNum_preProcess_a[90] == 102 )
	{
		s_pContext->_output_wrt_comreg.u1_GFB_Special_apply=0;
		nIdentifiedNum_preProcess_a[90] = 0;
	}

	//++ YE Test for TV006 01_Black_19YO1 issue
	#if 1
     if((scalerVIP_Get_MEMCPatternFlag_Identification(103) == TRUE  )&&(u11_gmv_mvx <=0 && u10_gmv_mvy <=2))
	{
		pOutput->u8_01_Black_19YO1_flag=1;
		u5_blend_holdfrm_preProcess_a[91] = 24;
		nIdentifiedNum_preProcess_a[91]=103;
	}
	else if(u5_blend_holdfrm_preProcess_a[91] >0)
	{
		pOutput->u8_01_Black_19YO1_flag=1;
		u5_blend_holdfrm_preProcess_a[91]--;
	}
	else if(nIdentifiedNum_preProcess_a[91] == 103 )
	{
             pOutput->u8_01_Black_19YO1_flag=0;
		nIdentifiedNum_preProcess_a[91] = 0;
	}
	#endif 
	//-- YE Test for LG 01_Black_19YO1 issue

	//++ Q-13722 issue
	#if 1
     if((scalerVIP_Get_MEMCPatternFlag_Identification(104) == TRUE  )&&(u11_gmv_mvx ==0 && u10_gmv_mvy ==0))
	{
//		pOutput->u1_Q13722_flag =1;
		g_Q13722_flag = 1;
		u5_blend_holdfrm_preProcess_a[92] = 60;
		nIdentifiedNum_preProcess_a[92]=104;
	}
	else if(u5_blend_holdfrm_preProcess_a[104] >0)
	{
//		pOutput->u1_Q13722_flag=1;
		g_Q13722_flag = 1;
		u5_blend_holdfrm_preProcess_a[92]--;
	}
	else if(nIdentifiedNum_preProcess_a[92] == 104 )
	{
 //		pOutput->u1_Q13722_flag=0;
		g_Q13722_flag = 0;
		nIdentifiedNum_preProcess_a[92] = 0;
	}
	#endif 
	//-- Q-13722 issue

	//===debug show
	for(u8_Index =0;u8_Index<93;u8_Index++)
	{
		if(nIdentifiedNum_preProcess_a[u8_Index] !=0)
			pOutput->u1_IP_preProcess_true=1;
		
	}
	//===
}
VOID Identification_Pattern_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	static UBYTE u5_blend_holdfrm_a[255] = {0};
	static UBYTE nIdentifiedNum_a[255] = {0};
	//UINT32 mot_diff = s_pContext->_output_filmDetectctrl.u27_ipme_motionPool[_FILM_ALL][0];
	static UBYTE nOnceFlag=12;
	UBYTE u8_Index;
	#if Pro_TCL
	//UBYTE  u8_cadence_Id = s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];
	//PQL_INPUT_FRAME_RATE in_fmRate = s_pContext->_external_data._input_frameRate;
	UBYTE nblend_y_alpha_Target=0x90;
	UBYTE nblend_uv_alpha_Target=0x70;
	UBYTE nblend_logo_y_alpha_Target=0xd0;
	UBYTE nblend_logo_uv_alpha_Target=0x30;	
	#endif
	UINT32 u32_RB_Value;
	SINT16 u11_gmv_mvx = s_pContext->_output_read_comreg.s11_me_GMV_1st_vx_rb;
	SINT16 u10_gmv_mvy = s_pContext->_output_read_comreg.s10_me_GMV_1st_vy_rb;


	UBYTE  u8_cadence_Id = s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];
	UBYTE  u8_Mixmode_flag = s_pContext->_output_filmDetectctrl.u1_mixMode;



	
	//reset
	pOutput->u1_IP_wrtAction_true=0;

	if(pParam->u1_Identification_Pattern_en== 0)
		return;

	//====================================================================
	if( (scalerVIP_Get_MEMCPatternFlag_Identification(1) == TRUE)&&((u11_gmv_mvx!=0)&&(u10_gmv_mvy!=0))&&(s_pContext->_output_frc_sceneAnalysis.u8_OSDPictureModeChg_prt_apply!=0))
	{
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, 0x30);

		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp0_ADDR, 0, 8, 0x28);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp1_ADDR, 9, 17, 0x24);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp2_ADDR, 18, 26, 0x20);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp3_ADDR, 0, 8, 0x18);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp4_ADDR, 9, 17, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp5_ADDR, 18, 26, 0xa);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp6_ADDR, 0, 8, 0x8);

		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp0_ADDR, 9, 17, 0x28);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp1_ADDR, 18, 26, 0x24);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp2_ADDR, 0, 8, 0x20);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp3_ADDR, 9, 17, 0x18);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp4_ADDR, 18, 26, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp5_ADDR, 0, 8, 0xa);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp6_ADDR, 9, 17, 0x8);


		if(nOnceFlag >=1)
		{
			WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_mvx_range), 0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_mvy_range), 0);
			#if (IC_K5LP || IC_K6LP)
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvx_clip_range),0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvy_clip_range),0);
			#endif
			nOnceFlag --;
		}

		u5_blend_holdfrm_a[1] = 20;
		nIdentifiedNum_a[1]=1;

	}
	else if(u5_blend_holdfrm_a[1] >0)
	{
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, 0x30);

		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp0_ADDR, 0, 8, 0x28);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp1_ADDR, 9, 17, 0x24);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp2_ADDR, 18, 26, 0x20);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp3_ADDR, 0, 8, 0x18);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp4_ADDR, 9, 17, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp5_ADDR, 18, 26, 0xa);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp6_ADDR, 0, 8, 0x8);

		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp0_ADDR, 9, 17, 0x28);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp1_ADDR, 18, 26, 0x24);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp2_ADDR, 0, 8, 0x20);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp3_ADDR, 9, 17, 0x18);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp4_ADDR, 18, 26, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp5_ADDR, 0, 8, 0xa);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp6_ADDR, 9, 17, 0x8);

		if(nOnceFlag >=1)
		{
			WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_mvx_range), 0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_VBUF_TOP__vbuf_mvy_range), 0);
			#if (IC_K5LP || IC_K6LP)
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvx_clip_range),0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvy_clip_range),0);
			#endif
			nOnceFlag --;
		}

		u5_blend_holdfrm_a[1]--;
	}
	else if(nIdentifiedNum_a[1] == 1 )
	{
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_logo_y_alpha);

		nOnceFlag=12;
		nIdentifiedNum_a[1] = 0;
	}
	//====================================================================

	if(scalerVIP_Get_MEMCPatternFlag_Identification(2) == TRUE  )
	{
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp0_ADDR, 0, 8, 0x20);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp1_ADDR, 9, 17, 0x1c);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp2_ADDR, 18, 26, 0x18);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp3_ADDR, 0, 8, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp4_ADDR, 9, 17, 0x10);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp5_ADDR, 18, 26, 0xe);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp6_ADDR, 0, 8, 0xa);

		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp0_ADDR, 9, 17, 0x20);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp1_ADDR, 18, 26, 0x1c);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp2_ADDR, 0, 8, 0x18);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp3_ADDR, 9, 17, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp4_ADDR, 18, 26, 0x10);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp5_ADDR, 0, 8, 0xe);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp6_ADDR, 9, 17, 0xa);


		u5_blend_holdfrm_a[2] = 8;
		nIdentifiedNum_a[2]=2;

	}
	else if(u5_blend_holdfrm_a[2] >0)
	{
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp0_ADDR, 0, 8, 0x20);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp1_ADDR, 9, 17, 0x1c);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp2_ADDR, 18, 26, 0x18);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp3_ADDR, 0, 8, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp4_ADDR, 9, 17, 0x10);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp5_ADDR, 18, 26, 0xe);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp6_ADDR, 0, 8, 0xa);

		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp0_ADDR, 9, 17, 0x20);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp1_ADDR, 18, 26, 0x1c);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp2_ADDR, 0, 8, 0x18);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp3_ADDR, 9, 17, 0x14);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp4_ADDR, 18, 26, 0x10);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp5_ADDR, 0, 8, 0xe);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp6_ADDR, 9, 17, 0xa);

		u5_blend_holdfrm_a[2]--;
	}
	else if(nIdentifiedNum_a[2] == 2 )
	{
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp0_ADDR, 0, 8, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp0);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp1_ADDR, 9, 17, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp1);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp2_ADDR, 18, 26, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp2);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp3_ADDR, 0, 8, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp3);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp4_ADDR, 9, 17, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp4);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp5_ADDR, 18, 26, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp5);
		WriteRegister(FRC_TOP__KME_IPME__ipme_h_flp_alp6_ADDR, 0, 8, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_h_flp_alp6);

		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp0_ADDR, 9, 17, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp0);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp1_ADDR, 18, 26, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp1);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp2_ADDR, 0, 8, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp2);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp3_ADDR, 9, 17, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp3);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp4_ADDR, 18, 26, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp4);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp5_ADDR, 0, 8, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp5);
		WriteRegister(FRC_TOP__KME_IPME__ipme_v_flp_alp6_ADDR, 9, 17, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_ipme_v_flp_alp6);


		nIdentifiedNum_a[2] = 0;
	}
//====================================================================

	if(scalerVIP_Get_MEMCPatternFlag_Identification(100) == TRUE  )
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_OcclCntThr),  10);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_MVAB_Ratio),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_SmallDTLThr), 16);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_SmallAPLThr), 16);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_PostCorr_saddiff_ucov_cnt), 12);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_PostCorr_saddiff_cov_cnt),  12);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_x_range),  3);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_y_range),  0);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_x_range), 3);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_y_range), 0);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_x_range),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_y_range),  0);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_x_range), 1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_y_range), 0);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Ratio),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Ratio), 1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Ratio),   1);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_SADSmallThr), 32);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_APLLargeThr), 40);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_mv_sync_en), 1);

		u5_blend_holdfrm_a[100] = 8;
		nIdentifiedNum_a[3]=100;
	}
	else if( u5_blend_holdfrm_a[100] > 0 )
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_OcclCntThr),  10);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_MVAB_Ratio),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_SmallDTLThr), 16);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_SmallAPLThr), 16);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_PostCorr_saddiff_ucov_cnt), 12);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_PostCorr_saddiff_cov_cnt),  12);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_x_range),  3);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_y_range),  0);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_x_range), 3);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_y_range), 0);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_x_range),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_y_range),  0);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_x_range), 1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_y_range), 0);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Ratio),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Ratio), 1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Ratio),   1);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_SADSmallThr), 32);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_APLLargeThr), 40);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_mv_sync_en), 1);

		u5_blend_holdfrm_a[100]--;
		
	}
	else if(nIdentifiedNum_a[3]==100)
	{
		nIdentifiedNum_a[3]=0;
	}

	if(scalerVIP_Get_MEMCPatternFlag_Identification(101) == TRUE  )
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_OcclCntThr),  10);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_MVAB_Ratio),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_SmallDTLThr), 16);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_SmallAPLThr), 16);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_PostCorr_saddiff_ucov_cnt), 12);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_PostCorr_saddiff_cov_cnt),  12);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_x_range),  3);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_y_range),  0);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_x_range), 3);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_y_range), 0);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_x_range),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_y_range),  0);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_x_range), 1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_y_range), 0);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Ratio),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Ratio), 1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Ratio),   1);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_SADSmallThr), 32);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_APLLargeThr), 40);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_mv_sync_en), 1);

		u5_blend_holdfrm_a[101] = 8;
		nIdentifiedNum_a[4]=101;
	}
	else if( u5_blend_holdfrm_a[101] > 0 )
	{
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_OcclCntThr),  10);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_MVAB_Ratio),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_SmallDTLThr), 16);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_SmallAPLThr), 16);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_PostCorr_saddiff_ucov_cnt), 12);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_PostCorr_saddiff_cov_cnt),  12);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_x_range),  3);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_y_range),  0);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_x_range), 3);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_y_range), 0);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_x_range),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_y_range),  0);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_x_range), 1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_y_range), 0);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Ratio),  1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Ratio), 1);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Ratio),   1);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_SADSmallThr), 32);
		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_APLLargeThr), 40);

		WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_mv_sync_en), 1);

		u5_blend_holdfrm_a[101]--;
	}
	else if(nIdentifiedNum_a[4]==101)
	{
		nIdentifiedNum_a[4]=0;
	}
	//===========================

	ReadRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pix_rim_bot_ADDR,10,19,&u32_RB_Value);

	if((scalerVIP_Get_MEMCPatternFlag_Identification(105) == TRUE)&&(u32_RB_Value<=510))
	{	
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_invalid_cnt_th_ADDR, 6, 10, 0x8);	
		u5_blend_holdfrm_a[2] = 8;
		nIdentifiedNum_a[5]=105;	
	}
	else if(u5_blend_holdfrm_a[2] >0)
	{	
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_invalid_cnt_th_ADDR, 6, 10, 0x8);
		u5_blend_holdfrm_a[2]--;
	}
	else if(nIdentifiedNum_a[5] == 105 )
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_invalid_cnt_th_ADDR, 6, 10, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_invalid_cnt_th);
		nIdentifiedNum_a[5] = 0;
	}
	//++ u1_Q13835_flag
	#if 1 //YE Test
     if((scalerVIP_Get_MEMCPatternFlag_Identification(106) == TRUE  )
	 	&&(( u8_cadence_Id == _CAD_VIDEO) ||(u8_Mixmode_flag==1))
	 	&&(s_pContext->_output_me_sceneAnalysis.u1_Q13835_flag==1))
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_invalid_cnt_th_ADDR, 6, 10, 0x8);
		u5_blend_holdfrm_a[3] = 24;
		nIdentifiedNum_a[6]=106;
	}
	else if(u5_blend_holdfrm_a[3] >0)
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_invalid_cnt_th_ADDR, 6, 10, 0x8);
		u5_blend_holdfrm_a[3]--;
	}
	else if(nIdentifiedNum_a[6] == 106 )
	{
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_invalid_cnt_th_ADDR, 6, 10, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_invalid_cnt_th);

		nIdentifiedNum_a[6] = 0;
	}
	#endif 
	//-- u1_Q13835_flag
	#if 0 //Pro_TCL
	if(scalerVIP_Get_MEMCPatternFlag_Identification(0) == TRUE && s_pContext->_output_me_vst_ctrl.u1_detect_blackBG_VST_trure ==0  &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{


		u5_blend_holdfrm_a[0] = 8;
		nIdentifiedNum_a[0]=0;

	}
	else if(u5_blend_holdfrm_a[0] >0)
	{


		u5_blend_holdfrm_a[0]--;
	}
	else if(nIdentifiedNum_a[0] == 0 )
	{

		nIdentifiedNum_a[0] = 0;
	}

	//===========================================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(12) == TRUE &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin0_ADDR, 12, 15, 0xa);//0x2
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin1_ADDR, 16, 19, 0xa);//0x0

		u5_blend_holdfrm_a[12] = 16;
		nIdentifiedNum_a[12]=12;

	}
	else if(u5_blend_holdfrm_a[12] >0)
	{
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin0_ADDR, 12, 15, 0xa);//0x2
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin1_ADDR, 16, 19, 0xa);//0x0
		u5_blend_holdfrm_a[12]--;
	}
	else if(nIdentifiedNum_a[12] == 12 )
	{
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin0_ADDR, 12, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_mc_sobj_ymin0);
		WriteRegister(FRC_TOP__MC__mc_sobj_ymin1_ADDR, 16, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_mc_sobj_ymin1);
		nIdentifiedNum_a[12] = 0;
	}
	//==========================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(18) == TRUE &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg5_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg5_ADDR, 12, 12, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg6_ADDR, 22, 24, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg6_ADDR, 28, 28, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg7_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg7_ADDR, 12, 12, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg8_ADDR, 22, 24, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg8_ADDR, 28, 28, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg9_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg9_ADDR, 12, 12, 1);//0x0

		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1_ADDR, 0, 0, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1_ADDR, 7, 9, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg2_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg2_ADDR, 12, 12, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg3_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg3_ADDR, 12, 12, 1);//0x0

		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgb_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgb_ADDR, 12, 12, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgc_ADDR, 22, 24, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgc_ADDR, 28, 28, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgd_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgd_ADDR, 12, 12, 1);//0x0

		ReadRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, &u32_RB_Value);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, (u32_RB_Value+nblend_y_alpha_Target)/2);
		ReadRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, &u32_RB_Value);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, (u32_RB_Value+nblend_uv_alpha_Target)/2);
		ReadRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, &u32_RB_Value);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, (u32_RB_Value+nblend_logo_y_alpha_Target)/2);
		ReadRegister(FRC_TOP__IPPRE__kmc_blend_logo_uv_alpha_ADDR, 9, 16, &u32_RB_Value);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_uv_alpha_ADDR, 9, 16, (u32_RB_Value+nblend_logo_uv_alpha_Target)/2);


		u5_blend_holdfrm_a[18] = 16;
		nIdentifiedNum_a[18]=18;

	}
	else if(u5_blend_holdfrm_a[18] >0)
	{
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg5_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg5_ADDR, 12, 12, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg6_ADDR, 22, 24, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg6_ADDR, 28, 28, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg7_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg7_ADDR, 12, 12, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg8_ADDR, 22, 24, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg8_ADDR, 28, 28, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg9_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg9_ADDR, 12, 12, 1);//0x0

		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1_ADDR, 0, 0, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1_ADDR, 7, 9, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg2_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg2_ADDR, 12, 12, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg3_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg3_ADDR, 12, 12, 1);//0x0

		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgb_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgb_ADDR, 12, 12, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgc_ADDR, 22, 24, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgc_ADDR, 28, 28, 1);//0x0
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgd_ADDR, 6, 8, 7);//0x4
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgd_ADDR, 12, 12, 1);//0x0

		ReadRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, &u32_RB_Value);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11, (u32_RB_Value+nblend_y_alpha_Target)/2);
		ReadRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, &u32_RB_Value);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, (u32_RB_Value+nblend_uv_alpha_Target)/2);
		ReadRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, &u32_RB_Value);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, (u32_RB_Value+nblend_logo_y_alpha_Target)/2);
		ReadRegister(FRC_TOP__IPPRE__kmc_blend_logo_uv_alpha_ADDR, 9, 16, &u32_RB_Value);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_uv_alpha_ADDR, 9, 16, (u32_RB_Value+nblend_logo_uv_alpha_Target)/2);

		u5_blend_holdfrm_a[18]--;
	}
	else if(nIdentifiedNum_a[18] == 18 )
	{
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg5_ADDR, 6, 8, 0x4);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg5_ADDR, 12, 12,0x0);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg6_ADDR, 22, 24, 0x4);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg6_ADDR, 28, 28, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg7_ADDR, 6, 8, 0x4);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg7_ADDR, 12, 12, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg8_ADDR, 22, 24, 0x4);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg8_ADDR, 28, 28, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg9_ADDR, 6, 8, 0x4);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg9_ADDR, 12, 12, 0x0);

		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_tmv_bypass_rg1_ADDR, 0, 0, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO2__dh_logo_mvd_bypass_rg1_ADDR, 7, 9, 0x4);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg2_ADDR, 6, 8, 0x4);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg2_ADDR, 12, 12, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rg3_ADDR, 6, 8, 0x4);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rg3_ADDR, 12, 12, 0x0);

		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgb_ADDR, 6, 8, 0x4);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgb_ADDR, 12, 12, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgc_ADDR, 22, 24, 0x4);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgc_ADDR, 28, 28, 0x0);
		WriteRegister(FRC_TOP__KME_DEHALO2__mvd_bypass_rgd_ADDR, 6, 8, 0x4);
		WriteRegister(FRC_TOP__KME_DEHALO2__tmv_bypass_rgd_ADDR, 12, 12, 0x0);


		WriteRegister(FRC_TOP__IPPRE__kmc_blend_y_alpha_ADDR, 4, 11,s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_y_alpha);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_uv_alpha_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_uv_alpha);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_y_alpha_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_logo_y_alpha);
		WriteRegister(FRC_TOP__IPPRE__kmc_blend_logo_uv_alpha_ADDR, 9, 16, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_kmc_blend_logo_uv_alpha);

		nIdentifiedNum_a[18] = 0;
	}
	//==========================
	if(scalerVIP_Get_MEMCPatternFlag_Identification(19) == TRUE &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		//  BG repeat detect
		WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e8_ADDR, 11, 11, 1);
		//gmvd
		pOutput->u1_casino_RP_detect_true =1;

		//  lfsr_mask
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_x_ADDR, 0, 3, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_y_ADDR, 4, 7, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_x_ADDR, 8,11, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_y_ADDR, 12, 15, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_x_ADDR, 16, 19, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_y_ADDR, 20, 23, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_x_ADDR, 24, 27, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_y_ADDR, 28, 31, 3);

		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_x_ADDR, 0, 3, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_y_ADDR, 4, 7, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_x_ADDR, 8,11, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_y_ADDR, 12, 15, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_x_ADDR, 16, 19, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_y_ADDR, 20, 23, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_x_ADDR, 24, 27, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_y_ADDR, 28, 31, 3);
		// ME1 cddpnt rnd
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd0_ADDR, 16, 23, 0xff);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd1_ADDR, 24, 31, 0xff);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd2_ADDR, 0, 7, 0xff);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_ADDR, 16, 23, 0xff);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_ADDR, 24, 31, 0xff);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_ADDR, 0, 7, 0xff);
		// ME1 adptpnt rnd curve
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y1_ADDR, 0, 5, 0x3f);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y2_ADDR, 8, 13, 0x3f);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y3_ADDR, 14, 19,0x3f);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y4_ADDR, 20, 25, 0x3f);

		u5_blend_holdfrm_a[19] = 8;
		nIdentifiedNum_a[19]=19;

	}
	else if(u5_blend_holdfrm_a[19] >0)
	{
		//  BG repeat detect
		WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e8_ADDR, 11, 11, 1);
		//gmvd
		pOutput->u1_casino_RP_detect_true =1;

		//  lfsr_mask
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_x_ADDR, 0, 3, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_y_ADDR, 4, 7, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_x_ADDR, 8,11, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_y_ADDR, 12, 15, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_x_ADDR, 16, 19, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_y_ADDR, 20, 23, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_x_ADDR, 24, 27, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_y_ADDR, 28, 31, 3);

		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_x_ADDR, 0, 3, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_y_ADDR, 4, 7, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_x_ADDR, 8,11, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_y_ADDR, 12, 15, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_x_ADDR, 16, 19, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_y_ADDR, 20, 23, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_x_ADDR, 24, 27, 3);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_y_ADDR, 28, 31, 3);
		// ME1 cddpnt rnd
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd0_ADDR, 16, 23, 0xff);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd1_ADDR, 24, 31, 0xff);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd2_ADDR, 0, 7, 0xff);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_ADDR, 16, 23, 0xff);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_ADDR, 24, 31, 0xff);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_ADDR, 0, 7, 0xff);
		// ME1 adptpnt rnd curve
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y1_ADDR, 0, 5, 0x3f);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y2_ADDR, 8, 13, 0x3f);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y3_ADDR, 14, 19,0x3f);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y4_ADDR, 20, 25, 0x3f);

		u5_blend_holdfrm_a[19]--;
	}
	else if(nIdentifiedNum_a[19] == 19 )
	{
		//  BG repeat detect
		WriteRegister(FRC_TOP__PQL_0__pql_patch_dummy_e8_ADDR, 11, 11, 0);
		//gmvd
		pOutput->u1_casino_RP_detect_true =0;
		//  lfsr_mask
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_x_ADDR, 0, 3, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask0_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask0_y_ADDR, 4, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask0_y);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_x_ADDR, 8,11, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask1_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask1_y_ADDR, 12, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask1_y);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_x_ADDR, 16, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask2_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask2_y_ADDR, 20, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask2_y);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_x_ADDR, 24, 27, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask3_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_ip_1st_lfsr_mask3_y_ADDR, 28, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_ip_1st_lfsr_mask3_y);

		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_x_ADDR, 0, 3, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask0_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask0_y_ADDR, 4, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask0_y);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_x_ADDR, 8,11, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask1_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask1_y_ADDR, 12, 15, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask1_y);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_x_ADDR, 16, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask2_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask2_y_ADDR, 20, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask2_y);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_x_ADDR, 24, 27, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask3_x);
		WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_pi_1st_lfsr_mask3_y_ADDR, 28, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_vbuf_pi_1st_lfsr_mask3_y);

		// ME1 cddpnt rnd
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd0_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_rnd0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd1_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_rnd1);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_ip_cddpnt_rnd2_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_ip_cddpnt_rnd2);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd0_ADDR, 16, 23, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_rnd0);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd1_ADDR, 24, 31, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_rnd1);
		WriteRegister(FRC_TOP__KME_ME1_TOP0__me1_pi_cddpnt_rnd2_ADDR, 0, 7, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_pi_cddpnt_rnd2);
		// ME1 adptpnt rnd curve
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y1_ADDR, 0, 5,  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_y1);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y2_ADDR, 8, 13,  s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_y2);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y3_ADDR, 14, 19, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_y3);
		WriteRegister(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_rnd_y4_ADDR, 20, 25, s_pContext->_output_me_sceneAnalysis.SIS_MEMC.MEMC_STATUS.reg_me1_adptpnt_rnd_y4);

		nIdentifiedNum_a[19] = 0;
	}
	if(scalerVIP_Get_MEMCPatternFlag_Identification(30) == TRUE &&( vpq_project_id != 0x00060000 || vpqex_project_id != 0x00060000 ))
	{
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_a[30] = 8;
		nIdentifiedNum_a[30]=30;

	}
	else if(u5_blend_holdfrm_a[30] >0)
	{
		rtd_clearbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		u5_blend_holdfrm_a[30]--;
	}
	else if(nIdentifiedNum_a[30] == 30 )
	{
		rtd_setbits(0xb8023c00, _BIT0);//  Multiband peaking
		rtd_setbits(0xb8023c30, _BIT0);//  Multiband peaking DB apply
		nIdentifiedNum_a[30] = 0;
	}
	//===================================================
	//===================================================
	#endif

	//=======================
	//===debug show
	for(u8_Index =0;u8_Index<10;u8_Index++)
	{
		if(nIdentifiedNum_a[u8_Index] !=0)
			pOutput->u1_IP_wrtAction_true=1;
			
	}
	//===

}

VOID Dh_OCCL_Ext_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	UBYTE occl_ext_level = 0;
	UBYTE post_corr_level = 0;
	
	UBYTE occl_ext_level_sel = 0;
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	const _PQLPARAMETER *s_pParam = GetPQLParameter();

	static UBYTE u1_force_prot_off_pre = 0;
	static UINT32 u1_occl_ext_prot_pre[7] = {0};

	const UBYTE ExtLevelSetting[6][20] =
	{
		// post corr : [0] occl cnt [1] mvAB ratio [2] small dtl [3] small apl
		// re-judge  : [4] ucov cnt [5] cov cnt
		// ext range : [6] cov x bg  [7] cov y bg  [8] ucov x bg [9] ucov y bg [10] cov x fg [11] cov y fg [12] ucov x fg [13] ucov y fg
		// err ext   : [14] mvAB diff [15] mvAB GMV [16] curBGMV
		// ext stop  : [17] SAD [18] APL
		// other     : [20] mv sync en
		//			 0  1   2   3        4  5      6  7  8  9 10 11 12 13     14 15 16      17  18 19
		/*0*/ { /**/ 6, 1,  0,  0, /**/ 12,12, /**/0, 0, 0, 0, 0, 0, 0, 0, /**/1, 1, 1, /**/32, 40, 1 },
		/*1*/ { /**/ 7, 1,  5,  1, /**/ 12,12, /**/1, 0, 1, 0, 1, 0, 1, 0, /**/1, 1, 1, /**/32, 40, 1 },
		/*2*/ { /**/ 8, 1, 10,  3, /**/ 12,12, /**/1, 0, 1, 0, 2, 0, 2, 0, /**/1, 1, 1, /**/32, 40, 1 },
		/*3*/ { /**/10, 1, 16,  4, /**/ 12,12, /**/1, 0, 1, 0, 3, 0, 3, 0, /**/1, 1, 1, /**/32, 40, 1 }, // current setting
		/*4*/ { /**/10, 1, 16,  8, /**/ 12,12, /**/1, 0, 1, 0, 4, 0, 4, 0, /**/1, 1, 1, /**/32, 40, 0 },
		/*5*/ { /**/10, 1, 16, 16, /**/ 12,12, /**/1, 0, 1, 0, 5, 0, 5, 0, /**/1, 1, 1, /**/32, 40, 0 }
	};

	if( pParam->u1_OcclExt_wrt_en == 0 )
		return;

	occl_ext_level_sel = s_pContext->_output_me_sceneAnalysis.u3_occl_ext_level;

	// force level
	if( s_pParam->_param_me_sceneAnalysis.u1_occl_ext_force_lvl_en == 1 )
	{
		occl_ext_level = _MIN_(s_pParam->_param_me_sceneAnalysis.u3_occl_ext_force_lvl, 5);
	}
	if( s_pParam->_param_me_sceneAnalysis.u1_dh_postcorr_force_lvl_en == 1 )
	{
		post_corr_level = _MIN_(s_pParam->_param_me_sceneAnalysis.u3_dh_postcorr_force_lvl, 5);
	}


	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_OcclCntThr),  ExtLevelSetting[occl_ext_level_sel][0]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_MVAB_Ratio),  ExtLevelSetting[occl_ext_level_sel][1]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_SmallDTLThr), ExtLevelSetting[occl_ext_level_sel][2]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__PostCorr_SmallAPLThr), ExtLevelSetting[occl_ext_level_sel][3]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_PostCorr_saddiff_ucov_cnt), ExtLevelSetting[occl_ext_level_sel][4]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__dh_PostCorr_saddiff_cov_cnt),  ExtLevelSetting[occl_ext_level_sel][5]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_x_range),  ExtLevelSetting[occl_ext_level_sel][6]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_cov_y_range),  ExtLevelSetting[occl_ext_level_sel][7]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_x_range), ExtLevelSetting[occl_ext_level_sel][8]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_bg_ucov_y_range), ExtLevelSetting[occl_ext_level_sel][9]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_x_range),  ExtLevelSetting[occl_ext_level_sel][10]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_cov_y_range),  ExtLevelSetting[occl_ext_level_sel][11]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_x_range), ExtLevelSetting[occl_ext_level_sel][12]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_fg_ucov_y_range), ExtLevelSetting[occl_ext_level_sel][13]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Ratio),  ExtLevelSetting[occl_ext_level_sel][14]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Ratio), ExtLevelSetting[occl_ext_level_sel][15]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Ratio),   ExtLevelSetting[occl_ext_level_sel][16]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_SADSmallThr), ExtLevelSetting[occl_ext_level_sel][17]);
	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_APLLargeThr), ExtLevelSetting[occl_ext_level_sel][18]);

	WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occl_extend_mv_sync_en), ExtLevelSetting[occl_ext_level_sel][19]);

	if( s_pParam->_param_me_sceneAnalysis.u1_occl_ext_force_protection_off != u1_force_prot_off_pre )
	{
		if( s_pParam->_param_me_sceneAnalysis.u1_occl_ext_force_protection_off != 0 )
		{
			ReadRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Enable), &u1_occl_ext_prot_pre[0]);
			ReadRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Enable), &u1_occl_ext_prot_pre[1]);
			ReadRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Enable), &u1_occl_ext_prot_pre[2]);
			ReadRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_APLProt_Enable), &u1_occl_ext_prot_pre[3]);
			ReadRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_OcclProt_Enable), &u1_occl_ext_prot_pre[4]);
			ReadRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_SADProt_Enable), &u1_occl_ext_prot_pre[5]);
			ReadRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_EdgProt_Enable), &u1_occl_ext_prot_pre[6]);

			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Enable), 0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Enable), 0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Enable), 0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_APLProt_Enable), 0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_OcclProt_Enable), 0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_SADProt_Enable), 0);
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_EdgProt_Enable), 0);
		}
		else
		{
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABDiff_Enable), u1_occl_ext_prot_pre[0]);
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_MVABIsGMV_Enable), u1_occl_ext_prot_pre[1]);
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_ErrOccl_CurBGMV_Enable), u1_occl_ext_prot_pre[2]);
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_APLProt_Enable), u1_occl_ext_prot_pre[3]);
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_OcclProt_Enable), u1_occl_ext_prot_pre[4]);
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_SADProt_Enable), u1_occl_ext_prot_pre[5]);
			WriteRegister(KIWI_REG(FRC_TOP__KME_DEHALO2__occlExt_EdgProt_Enable), u1_occl_ext_prot_pre[6]);
		}

		u1_force_prot_off_pre = s_pParam->_param_me_sceneAnalysis.u1_occl_ext_force_protection_off;
	}
}

VOID ZMV_AdaptPNT_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_PQLPARAMETER *s_pParam       = GetPQLParameter();
	UINT32 u32_y2 = 0, u32_y1 = 0, u32_x2 = 0, u32_x1 = 0, u32_slope = 0,u32_div=0;

	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_zmv_sad_y2), &u32_y2);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_zmv_sad_x2), &u32_x2);
	ReadRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_zmv_sad_x1), &u32_x1);

	u32_div = _ABS_(u32_x2 - u32_x1)==0 ? 1:_ABS_(u32_x2 - u32_x1);

	if(s_pParam->_param_frc_sceneAnalysis.u1_zmv_adapt_pnt_en)
	{
		if(s_pContext->_output_frc_sceneAnalysis.u1_zmv_adapt_pnt_GMV_Small)
		{
			u32_y1 = s_pParam->_param_frc_sceneAnalysis.u13_zmv_adapt_pnt_GMV_Small_Y1;
			u32_slope = (_ABS_(u32_y2 - u32_y1) << 3) / u32_div;

			WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_zmv_sad_y1), u32_y1);
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_zmv_sad_slope1), u32_slope);
		}
		else
		{
			u32_y1 = s_pParam->_param_frc_sceneAnalysis.u13_zmv_adapt_pnt_GMV_Big_Y1;
			u32_slope = (_ABS_(u32_y2 - u32_y1) << 3) / u32_div;

			WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_zmv_sad_y1), u32_y1);
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME1_TOP1__me1_adptpnt_zmv_sad_slope1), u32_slope);
		}
	}
}

VOID PFV_CDD_Number_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_PQLPARAMETER *s_pParam       = GetPQLParameter();
	UBYTE  u5_phfv0_candi_num = s_pParam->_param_dh_close.u5_phfv0_candi_num;
	UBYTE  u5_phfv1_candi_num = s_pParam->_param_dh_close.u5_phfv1_candi_num;
//	UINT32 u25me_Detail_rb    = s_pContext->_output_read_comreg.u25_me_aDTL_rb;

	if(s_pParam->_param_dh_close.u1_pfv_cdd_num_en)
	{
		if(s_pContext->_output_frc_sceneAnalysis.u8_SC_PFV_CDD_hold_cnt > 0)
		{
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_nums), u5_phfv0_candi_num);
			WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_nums), u5_phfv1_candi_num);
		}
		else
		{
//			if((s_pContext->_output_frc_sceneAnalysis.u1_SA_good_scene) &&
//				(u25me_Detail_rb < (s_pParam->_param_dh_close.u9_pfv_cdd_num_dtl_thr << 12)))
//			{
//				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_nums), u5_phfv0_candi_num);
//				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_nums), u5_phfv1_candi_num);
//			}
			if((s_pContext->_output_dh_close.u5_dh_sml_rgnAction_holdfrm > 0) &&
			   (s_pContext->_output_frc_sceneAnalysis.u1_fastMotion_det == 0))
			{
				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_nums), 0);
				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_nums), 0);
			}
			else
			{
				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv0_candi_nums), u5_phfv0_candi_num);
				WriteRegister(KIWI_REG(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_1st_pfv1_candi_nums), u5_phfv1_candi_num);
			}
		}
	}
}

VOID ME_Vst_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	static UINT32 u32_print_counter = 0;

	if(pParam->u1_ME_vst_en == 0)
		return;

	#if (IC_K5LP || IC_K6LP)

	u32_print_counter++;
	if(u32_print_counter >= 10)
		u32_print_counter = 0;

	if(s_pContext->_output_me_vst_ctrl.u1_detect == 1)
	{
		WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Enable_ADDR,
			FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Enable_BITSTART,
			FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Enable_BITEND, 0x1);
		WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_XSta_ADDR,
			FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_XSta_BITSTART,
			FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_XSta_BITEND, s_pContext->_output_me_vst_ctrl.u8_boundarySta);
		WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_XEnd_ADDR,
			FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_XEnd_BITSTART,
			FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Apply_Boundary_XEnd_BITEND, s_pContext->_output_me_vst_ctrl.u8_boundaryEnd);

	}
	else
	{
		WriteRegister(FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Enable_ADDR,
			FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Enable_BITSTART,
			FRC_TOP__KME_ME2_CALC1__reg_me2_VST_Enable_BITEND, 0x0);
	}

#if 0
	if(u32_print_counter == 0)
		printk("[%s] en = %d, %d to %d\r\n",
			__func__, s_pContext->_output_me_vst_ctrl.u1_detect,
			s_pContext->_output_me_vst_ctrl.u8_boundarySta,
			s_pContext->_output_me_vst_ctrl.u8_boundaryEnd);
#endif

	#endif
}

VOID MC_RMV_blending_ReginaolFB_wrtAction(VOID)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 u32_wr_val = 0;
	int i=0;

#if IC_K6LP
		//if(1) //me2 block =2x2
		//{
		//	WriteRegister(FRC_TOP__KMC_BI__bi_blk_res_sel_ADDR,
		//		FRC_TOP__KMC_BI__bi_blk_res_sel_BITSTART,
		//		FRC_TOP__KMC_BI__bi_blk_res_sel_BITEND, 0x0); // 0:480x270, 1:240x135
		//}

		if(s_pContext->_output_read_comreg.u8_gmv_blend_en == 1)
		{
			//blending RMV
			for(i=0; i<32; i++)
			{
				u32_wr_val = (s_pContext->_output_bRMV_rFB_ctrl.u10_fb_rgn00_mvy[i] << 11) | s_pContext->_output_bRMV_rFB_ctrl.u11_fb_rgn00_mvx[i];

				WriteRegister(FRC_TOP__KMC_BI__bi_rmv11_mvy_ADDR + i*4, 0, 31, u32_wr_val);
			}

			//blending alpha
			for(i=0; i<8; i++)
			{
				u32_wr_val = (s_pContext->_output_bRMV_rFB_ctrl.u8_fb_rmv_alpha[i*4+3] << 24) | (s_pContext->_output_bRMV_rFB_ctrl.u8_fb_rmv_alpha[i*4+2] << 16) |
							 (s_pContext->_output_bRMV_rFB_ctrl.u8_fb_rmv_alpha[i*4+1] <<  8) |  s_pContext->_output_bRMV_rFB_ctrl.u8_fb_rmv_alpha[i*4];

				WriteRegister(FRC_TOP__KMC_BI__bi_beta_11_ADDR + i*4, 0, 31, u32_wr_val);
			}
		}

		if(s_pContext->_output_read_comreg.u8_regional_fb_en == 1)
		{
			for(i=0; i<8; i++)
			{
				//blending FB_lvl
				u32_wr_val = (s_pContext->_output_bRMV_rFB_ctrl.u8_rFB_level[i*4+3] << 24) | (s_pContext->_output_bRMV_rFB_ctrl.u8_rFB_level[i*4+2] << 16) |
							 (s_pContext->_output_bRMV_rFB_ctrl.u8_rFB_level[i*4+1] <<  8) |  s_pContext->_output_bRMV_rFB_ctrl.u8_rFB_level[i*4];

				WriteRegister(FRC_TOP__KMC_BI__bi_fb_11_ADDR + i*4, 0, 31, u32_wr_val);

				//blending alpha
				u32_wr_val = (s_pContext->_output_bRMV_rFB_ctrl.u8_rFB_alpha[i*4+3] << 24) | (s_pContext->_output_bRMV_rFB_ctrl.u8_rFB_alpha[i*4+2] << 16) |
							 (s_pContext->_output_bRMV_rFB_ctrl.u8_rFB_alpha[i*4+1] <<  8) |  s_pContext->_output_bRMV_rFB_ctrl.u8_rFB_alpha[i*4];

				WriteRegister(FRC_TOP__KMC_BI__bi_gama_11_ADDR + i*4, 0, 31, u32_wr_val);
			}
			// panning scene
			if(s_pContext->_output_bRMV_rFB_ctrl.u1_rFB_panning)
			{
				WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_en_ADDR, FRC_TOP__MC__mc_fb_lvl_force_en_BITSTART, FRC_TOP__MC__mc_fb_lvl_force_en_BITEND, 1);
				WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_value_ADDR, FRC_TOP__MC__mc_fb_lvl_force_value_BITSTART, FRC_TOP__MC__mc_fb_lvl_force_value_BITEND, 0);
			}
			else
			{
				WriteRegister(FRC_TOP__MC__mc_fb_lvl_force_en_ADDR, FRC_TOP__MC__mc_fb_lvl_force_en_BITSTART, FRC_TOP__MC__mc_fb_lvl_force_en_BITEND, 0);
			}
		}

#endif

}

VOID Over_SearchRange_wrtAction(VOID)
{

	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_PQLPARAMETER *s_pParam       = GetPQLParameter();

	if(s_pParam->_param_me_sceneAnalysis.u1_over_searchrange_en == 1 && s_pContext->_output_me_sceneAnalysis.u1_over_searchrange == 1)
	{
		//extend limitation of ME1 search range
		//WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_mvy_range_ADDR,
		//			  FRC_TOP__KME_VBUF_TOP__vbuf_mvy_range_BITSTART,
		//			  FRC_TOP__KME_VBUF_TOP__vbuf_mvy_range_BITEND, 0x2d);

		//extend limitation of ME2 search range
		WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvy_clip_range_ADDR,
		              FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvy_clip_range_BITSTART,
		              FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvy_clip_range_BITEND, 0x2d);

		// Merlin5 LBMC mapping_index enable
		WriteRegister(FRC_TOP__KPHASE__kphase_lbmc_idx4_map_ADDR,
					  FRC_TOP__KPHASE__kphase_lbmc_idx4_map_BITSTART,
					  FRC_TOP__KPHASE__kphase_lbmc_idx4_map_BITEND, 4);
		WriteRegister(FRC_TOP__KPHASE__kphase_lbmc_idx3_map_ADDR,
					  FRC_TOP__KPHASE__kphase_lbmc_idx3_map_BITSTART,
					  FRC_TOP__KPHASE__kphase_lbmc_idx3_map_BITEND, 8);
		WriteRegister(FRC_TOP__KPHASE__kphase_lbmc_idx_mpa_en_ADDR,
					  FRC_TOP__KPHASE__kphase_lbmc_idx_mpa_en_BITSTART,
					  FRC_TOP__KPHASE__kphase_lbmc_idx_mpa_en_BITEND, 1);
	}
	else
	{
		//reset limitation of ME1 search range
		//WriteRegister(FRC_TOP__KME_VBUF_TOP__vbuf_mvy_range_ADDR,
		//			  FRC_TOP__KME_VBUF_TOP__vbuf_mvy_range_BITSTART,
		//			  FRC_TOP__KME_VBUF_TOP__vbuf_mvy_range_BITEND, 0x22);

		//reset limitation of ME2 search range
		WriteRegister(FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvy_clip_range_ADDR,
		              FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvy_clip_range_BITSTART,
		              FRC_TOP__KME_ME2_VBUF_TOP__kme_me2_vbuf_mvy_clip_range_BITEND, 0x22);


		// Merlin5 LBMC mapping_index disable
		WriteRegister(FRC_TOP__KPHASE__kphase_lbmc_idx_mpa_en_ADDR,
					  FRC_TOP__KPHASE__kphase_lbmc_idx_mpa_en_BITSTART,
					  FRC_TOP__KPHASE__kphase_lbmc_idx_mpa_en_BITEND, 0);
	}

	
}

VOID PanningDetect_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	_PQLPARAMETER *s_pParam       = GetPQLParameter();
	UINT32 u32_rb_val = 0;
	static UBYTE u1_panning_state;

	if(s_pParam->_param_read_comreg.u1_jerry_PanAct_en == 1){
		if((s_pContext->_output_me_sceneAnalysis.u2_panning_flag >= 1)){
			if(u1_panning_state == 0){
				ReadRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_en), &u32_rb_val);
				mc_fb_lvl_force_en_tmp = u32_rb_val;
				ReadRegister(KIWI_REG(FRC_TOP__MC__mc_logo_phase_fb_phase_en), &u32_rb_val);
				mc_logo_phase_fb_phase_en = u32_rb_val;
				ReadRegister(KIWI_REG(FRC_TOP__MC__mc_pre_phase_fb_phase_en), &u32_rb_val);
				mc_pre_phase_fb_phase_en = u32_rb_val;
				ReadRegister(KIWI_REG(FRC_TOP__MC__mc_pt_phase_fb_phase_en), &u32_rb_val);
				mc_pt_phase_fb_phase_en = u32_rb_val;
				ReadRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_value), &u32_rb_val);
				mc_fb_lvl_force_value = u32_rb_val;

				WriteRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_en), 1);
				WriteRegister(KIWI_REG(FRC_TOP__MC__mc_logo_phase_fb_phase_en), 0);
				WriteRegister(KIWI_REG(FRC_TOP__MC__mc_pre_phase_fb_phase_en), 0);
				WriteRegister(KIWI_REG(FRC_TOP__MC__mc_pt_phase_fb_phase_en), 0);
				WriteRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_value), 0);

				u1_panning_state = 1;
			}
		}else{
			if(u1_panning_state == 1){
				WriteRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_en), mc_fb_lvl_force_en_tmp);
				WriteRegister(KIWI_REG(FRC_TOP__MC__mc_logo_phase_fb_phase_en), mc_logo_phase_fb_phase_en);
				WriteRegister(KIWI_REG(FRC_TOP__MC__mc_pre_phase_fb_phase_en), mc_pre_phase_fb_phase_en);
				WriteRegister(KIWI_REG(FRC_TOP__MC__mc_pt_phase_fb_phase_en), mc_pt_phase_fb_phase_en);
				WriteRegister(KIWI_REG(FRC_TOP__MC__mc_fb_lvl_force_value), mc_fb_lvl_force_value);
				u1_panning_state = 0;
			}
		}
	}
}

VOID IPPRE_POST_CSCMode_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	//_PQLPARAMETER *s_pParam       = GetPQLParameter();
	PQL_INPUT_FRAME_RATE in_fmRate = s_pContext->_external_data._input_frameRate;
	UBYTE  u8_cadence_Id = s_pContext->_output_filmDetectctrl.u8_cur_cadence_out[_FILM_ALL];

       if(s_pContext->_external_info.u16_MEMCMode == 3)  // MEMC OFF
	{
		HAL_IP_SetIPPRECSCMode(CSC_MODE_RGB_YUV_709_FULL);
		HAL_POST_SetCSCMode(CSC_MODE_YUV_RGB_709_FULL);
	}
	else if((in_fmRate == _PQL_IN_60HZ || in_fmRate == _PQL_IN_50HZ ) && u8_cadence_Id == _CAD_VIDEO)    //  panel 60 Hz
	{
		HAL_IP_SetIPPRECSCMode(CSC_MODE_RGB_YUV_709_FULL);
		HAL_POST_SetCSCMode(CSC_MODE_YUV_RGB_709_FULL);
	}
	else   //  only RGB input
	{
		if(s_pContext->_external_data._output_mode == _PQL_OUT_VIDEO_MODE)
		{
			HAL_IP_SetIPPRECSCMode(CSC_MODE_RGB_YUV_709_LIMIT);
			HAL_POST_SetCSCMode(CSC_MODE_YUV_RGB_709_LIMIT);
		}
		else if(s_pContext->_external_data._output_mode == _PQL_OUT_PC_MODE)
		{
			HAL_IP_SetIPPRECSCMode(CSC_MODE_RGB_YUV_709_LIMIT);
			HAL_IP_SetIPPRECSCEnable(FALSE);
			HAL_POST_SetCSCMode(CSC_MODE_YUV_RGB_709_LIMIT);
			HAL_POST_SetCSCEnable(FALSE);
		}
	}

}
VOID debug_info_show(const _PARAM_WRT_COM_REG *pParam)
{
	UBYTE u1_show_debug_info_en;

	if(pParam->u1_pql_debug_info_Show_en == 1)
	{
		u1_show_debug_info_en = 1;
	}
	else
	{
		u1_show_debug_info_en = 0;
	}

	WriteRegister(KIWI_REG(FRC_TOP__MC__mc_show_scene_chg), u1_show_debug_info_en);
	WriteRegister(KIWI_REG(FRC_TOP__KPOST_TOP__post_seg_disp_enable_0), u1_show_debug_info_en);
	WriteRegister(KIWI_REG(FRC_TOP__KPOST_TOP__post_seg_disp_enable_1), u1_show_debug_info_en);
	WriteRegister(KIWI_REG(FRC_TOP__KPOST_TOP__post_seg_disp_enable_2), u1_show_debug_info_en);
	WriteRegister(KIWI_REG(FRC_TOP__KPOST_TOP__post_seg_disp_enable_3), u1_show_debug_info_en);
}

extern VOID MEMC_LibPowerSaveing(VOID);
VOID MEMC_HDMI_PowerSaving(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	MEMC_LibPowerSaveing();
}

unsigned int MEMC_OutputFrame_cnt = 0;
unsigned int MEMC_OutputFrame_pre_cnt = 0;
extern VOID MEMC_LibBlueScreen(unsigned char is_BlueScreen);
extern VOID MEMC_Lib_set_BlueScreen_Recall_flag(unsigned char u1_enable);
extern unsigned char MEMC_Lib_get_BlueScreen_Recall_flag(VOID);
extern BOOL MEMC_LibGetMEMC_PCModeEnable(VOID);
VOID MEMC_DisableMute(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 memc_mute_state = 0;
	UINT32 memc_mute_ctrl_en = 0;
	UBYTE memc_mute_en_chg = 0;
	static UBYTE memc_mute_cnt = 0;
	UINT32 test_val = 0;
	UBYTE scaler_force_bg_status = 1;

	UBYTE scaler_main_bg = 0;
	UBYTE scaler_sub_active = 0;
	UBYTE scaler_sub_enable = 0;
	UINT32 MEMC_plbmcpc_mode_sel = 0;
	UINT32 MEMC_plbmcpc_mode_enable = 0;
	static UINT32 temp_MEMC_plbmcpc_mode_sel = 0;
	static UINT32 temp_MEMC_plbmcpc_mode_enable = 0;
	static UINT32 mode_switch_flag = 255;
	UBYTE pulldown_mode = 0;
	BOOL fPcMode = 0;

#ifdef CONFIG_MEMC_BYPASS
	return;
#endif

	ReadRegister(FRC_TOP__software1__reg_software_61_ADDR, 24, 31, &test_val);
	ReadRegister(FRC_TOP__software1__reg_software_63_ADDR, 28, 28, &memc_mute_ctrl_en);
	//memc_mute_state = (rtd_inl(PPOVERLAY_MEMC_MUX_CTRL_reg)>>12)&0x1;
	ReadRegister(FRC_TOP__KPOST_TOP__bluescreen_ADDR, 30, 30, &memc_mute_state);
	ReadRegister(FRC_TOP__LBMC__lbmcpc_mode_sel_p_ADDR, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITEND, &MEMC_plbmcpc_mode_sel); //0xb8099924[13] //PZ mode
	ReadRegister(FRC_TOP__LBMC__lbmcpc_mode_ADDR, FRC_TOP__LBMC__lbmcpc_mode_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_BITEND, &MEMC_plbmcpc_mode_enable); //0xb8099924[4]
	pulldown_mode = s_pContext->_external_data.u8_pulldown_mode;
	memc_mute_en_chg = (memc_mute_state == pOutput->u1_memc_mute_state_pre) ? 0 : 1;
	fPcMode = MEMC_LibGetMEMC_PCModeEnable();
#if 0
	//scaler_force_bg_status = ((rtd_inl(0xB8028300)&0x00000002)>>1);//PPOVERLAY_Main_Display_Control_RSV_get_m_force_bg
#else
	scaler_main_bg = ((rtd_inl(0xB8028300)&0x00000002)>>1);
	scaler_sub_enable = (rtd_inl(0xb8028384)&0x1);
	scaler_sub_active = (Scaler_DispGetInputInfoByDisp(SLR_SUB_DISPLAY, SLR_INPUT_STATE) == _MODE_STATE_ACTIVE);

	if( scaler_main_bg == 0 )
	{
		scaler_force_bg_status = 0;
	}
	else if( scaler_sub_active != 0 && scaler_sub_enable != 0 )
	{
		scaler_force_bg_status = 0;
	}
#endif

	if(memc_mute_en_chg == 1 && memc_mute_state == 1 && memc_mute_ctrl_en == 1){
		memc_mute_cnt = test_val;//10;//
		//rtd_printk(KERN_EMERG, TAG_NAME, "[jerry_MEMC_DisableMute_01][%d, %d, %d](90K = %d)\n", memc_mute_cnt, memc_mute_state,pulldown_mode,rtd_inl(0xB801B6B8));
		pr_notice("[jerry_MEMC_DisableMute_01][%d, %d, %d](90K = %d)\n", memc_mute_cnt, memc_mute_state,pulldown_mode,rtd_inl(0xB801B6B8));
		//pr_notice("[MEMC_DisableMute][mode_switch_flag][%d,%d](90K = %d)\n", pulldown_mode,fPcMode,rtd_inl(0xB801B6B8));
	}

	if((MEMC_Lib_get_BlueScreen_Recall_flag() == 1) && (memc_mute_cnt > 0)){
		memc_mute_cnt = test_val;
		MEMC_Lib_set_BlueScreen_Recall_flag(0);
	}

	if((memc_mute_cnt <= 7) &&(memc_mute_cnt >=6) && (memc_mute_state == 1) && (memc_mute_ctrl_en == 1)&&(pulldown_mode==1)&&(fPcMode!=1))
	{
		if((MEMC_plbmcpc_mode_enable ==1)&&(MEMC_plbmcpc_mode_sel == 1)){
			mode_switch_flag =1;
			//pr_notice("[MEMC_DisableMute][mode_switch_flag][%d](90K = %d)\n", mode_switch_flag,rtd_inl(0xB801B6B8));
		}

		if(mode_switch_flag==1)
		{
			temp_MEMC_plbmcpc_mode_sel = MEMC_plbmcpc_mode_sel;
			temp_MEMC_plbmcpc_mode_enable = MEMC_plbmcpc_mode_enable;
			if(temp_MEMC_plbmcpc_mode_sel == 1){
				WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_sel_p_ADDR, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITEND, 0); //0xb8099924[13] //PZ mode
			}
			mode_switch_flag = 0;
		}
	}

	if((memc_mute_cnt <=5)&& (memc_mute_state == 1) && (memc_mute_ctrl_en == 1)&&(pulldown_mode==1)&&(fPcMode!=1))
	{
		if(temp_MEMC_plbmcpc_mode_sel!=MEMC_plbmcpc_mode_sel){
			WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_sel_p_ADDR, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITEND, temp_MEMC_plbmcpc_mode_sel); //0xb8099924[13] //PZ mode
		}
	}

	if( (memc_mute_cnt <=5)  && (memc_mute_state == 1)&& (memc_mute_ctrl_en == 1) && (scaler_force_bg_status !=0) ){
		memc_mute_cnt+=3;
	}

	if((memc_mute_cnt <= 3) && (memc_mute_state == 1) && (memc_mute_ctrl_en == 1)){
		MEMC_LibBlueScreen(0);
		//WriteRegister(FRC_TOP__KPOST_TOP__bluescreen_ADDR, 30, 30, 0x0);
		pr_notice("[jerry_MEMC_DisableMute_03][%d, %d](90K = %d)\n", memc_mute_cnt, memc_mute_state,rtd_inl(0xB801B6B8));
		//rtd_printk(KERN_EMERG, TAG_NAME, "[jerry_MEMC_DisableMute_03_debug][%d, %d](90K = %d)\n", temp_MEMC_plbmcpc_mode_sel, temp_MEMC_plbmcpc_mode_enable,rtd_inl(0xB801B6B8));
	}

	if( memc_mute_state == 0 ){ 
		mode_switch_flag = 255;
		temp_MEMC_plbmcpc_mode_sel = MEMC_plbmcpc_mode_sel;
		temp_MEMC_plbmcpc_mode_enable = MEMC_plbmcpc_mode_enable;
	}

	if(memc_mute_cnt > 0){
		memc_mute_cnt--;
		rtd_printk(KERN_EMERG, TAG_NAME, "[jerry_MEMC_DisableMute_02][%d, %d](90K = %d)\n", memc_mute_cnt, memc_mute_state,rtd_inl(0xB801B6B8));
		//rtd_printk(KERN_EMERG, TAG_NAME, "[jerry_MEMC_DisableMute_02_debug][%d, %d, %d](90K = %d)\n", temp_MEMC_plbmcpc_mode_sel, temp_MEMC_plbmcpc_mode_enable,pulldown_mode,rtd_inl(0xB801B6B8));
	}
	else{
		memc_mute_cnt = 0;
	}

	pOutput->u1_memc_mute_state_pre = memc_mute_state;

	MEMC_OutputFrame_cnt++;
	if(MEMC_OutputFrame_cnt > 80000000){
		MEMC_OutputFrame_cnt = 1;
	}
}

VOID DW_fmdet_4region_En_wrtAction(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();

	UINT16 u16_vip_source_type = 0;
	u16_vip_source_type = s_pContext->_external_info.u16_source_type;

	if (pParam->u1_DW_fmdet_4region_En == 1)
	{
		if ( (u16_vip_source_type >= 24) && (u16_vip_source_type<=33))//only apply in DTV
		{
			WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region3_enable_ADDR, 0, 0, 0x1);
		}
		else
		{
			WriteRegister(FRC_TOP__KME_IPME__ipme_fmdet_4region3_enable_ADDR, 0, 0, 0x0);
		}
	}
	
}

VOID MEMC_LBMC_Apply(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	WriteRegister(FRC_TOP__LBMC__lbmc_db_apply_ADDR, FRC_TOP__LBMC__lbmc_db_apply_BITSTART, FRC_TOP__LBMC__lbmc_db_apply_BITEND, 0x1); // lbmc_db_apply
}
//////////////////////////////////////////////////////////////////////////

VOID Wrt_ComReg_Init(_OUTPUT_WRT_COM_REG *pOutput)
{
	pOutput->u8_lf_lbmcMode_pre         = _MC_NORMAL_;
	pOutput->u8_hf_lbmcMode_pre         = _MC_NORMAL_;
}

VOID Wrt_ComReg_Proc_oneFifth_outInterrupt(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	RimCtrl_wrtAction(pParam);
}
VOID Wrt_ComReg_Proc_intputInterrupt(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	mc_lbmcMode_wrtAction(pParam, pOutput);
	logoDetect_wrtAction(pParam, pOutput);
	ZMV_AdaptPNT_wrtAction(pParam, pOutput);
	PFV_CDD_Number_wrtAction(pParam, pOutput);

	//JerryWang-20170822
	//PanningDetect_wrtAction(pParam, pOutput);
	// Willy 20180528
	ME_Vst_wrtAction(pParam, pOutput);
	//FB_PureVideo_wrtAction(pParam, pOutput); //for test
	FB_NoNeedToDoFRC_wrtAction(pParam, pOutput);
}

#define MEMC_MUX_CTRL_reg	(0xb8028100)
extern UINT8 resume_repeat_mode_check;

VOID MEMC_LibReset_lbmcpc_mode_sel_Flow(VOID)
{
	const _PQLCONTEXT *s_pContext = GetPQLContext();
	UINT32 u32_RB_val_mode_sel;
	UINT32 u32_RB_val_mode_en;
	static UINT32 temp_lbmcpc_mode_sel_p = 0;
	static UINT32 status_cnt = 0;
	UINT32 MEMC_mux_bg;
	UBYTE pulldown_mode=0;
	unsigned int mc_p_read_lf_en = 0, mc_p_read_hf_en = 0;
	unsigned char mc_p_read_dma_err_flag = 0;
	static unsigned char mc_p_read_dma_err_status = 0, mc_p_read_dma_err_cnt = 0;
	ReadRegister(FRC_TOP__LBMC__lbmcpc_mode_sel_p_ADDR, 13, 13, &u32_RB_val_mode_sel);
	ReadRegister(FRC_TOP__LBMC__lbmcpc_mode_sel_p_ADDR, 4, 4, &u32_RB_val_mode_en);
	ReadRegister(FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_BITEND, &mc_p_read_lf_en);
	ReadRegister(FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_BITEND, &mc_p_read_hf_en);
	MEMC_mux_bg = (rtd_inl(0xb8028100)>>12)&0x1;
	pulldown_mode = s_pContext->_external_data.u8_pulldown_mode;

	if(resume_repeat_mode_check && (u32_RB_val_mode_sel == 1) && (u32_RB_val_mode_en ==1) && (pulldown_mode==1)){
		status_cnt = 5;
		resume_repeat_mode_check = 0;
	}

	#if 0
	if(resume_repeat_mode_check){
		pr_notice("[MEMC_LibReset_lbmcpc_mode_sel_Flow][%d, %d, %d]\n", u32_RB_val_mode_sel, u32_RB_val_mode_en,pulldown_mode);
	}
	#endif

	if(status_cnt==5){
		temp_lbmcpc_mode_sel_p = u32_RB_val_mode_sel;
		WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_sel_p_ADDR, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITEND, 0x0);
	}else if(status_cnt == 3){
		if( (u32_RB_val_mode_sel != temp_lbmcpc_mode_sel_p) && (u32_RB_val_mode_en ==1)){
			WriteRegister(FRC_TOP__LBMC__lbmcpc_mode_sel_p_ADDR, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITSTART, FRC_TOP__LBMC__lbmcpc_mode_sel_p_BITEND, temp_lbmcpc_mode_sel_p);

		}
	}else if(status_cnt <=1){
		status_cnt = 0;
	}

	if(status_cnt>0){
		status_cnt--;
	}else{
		status_cnt=0;
	}

	if((u32_RB_val_mode_sel == 1) && (u32_RB_val_mode_en ==1) && (pulldown_mode==1) && (mc_p_read_lf_en == 0 || mc_p_read_hf_en == 0)){
		mc_p_read_dma_err_cnt++;
	}
	else{
		mc_p_read_dma_err_cnt = 0;
	}

	if(mc_p_read_dma_err_cnt == 1){
		//pr_notice("[%s][%d][,%d,%d,%d,%d,%d,]\n\r", __FUNCTION__, __LINE__, u32_RB_val_mode_sel, u32_RB_val_mode_en, pulldown_mode, mc_p_read_lf_en, mc_p_read_hf_en);
	}

	if(mc_p_read_dma_err_cnt >= 1){
		pr_notice("[%s][9924,%x,]\n\r", __FUNCTION__, rtd_inl(0xb8099924));
		mc_p_read_dma_err_cnt = 1;
		mc_p_read_dma_err_flag = 1;
	}

	if(mc_p_read_dma_err_flag>0 && mc_p_read_dma_err_status == 0){
		// disable DB
		MEMC_LibSet_MCDMA_DB_en(0);

		// enable DMA_en
		if(mc_p_read_lf_en == 0)
			WriteRegister(FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_BITEND, 1);
		if(mc_p_read_hf_en == 0)
			WriteRegister(FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_BITEND, 1);

		mc_p_read_dma_err_status = 1;
		pr_notice("[%s][%d][,%d,%d,%d,%d,%d,]\n\r", __FUNCTION__, __LINE__, u32_RB_val_mode_sel, u32_RB_val_mode_en, pulldown_mode, mc_p_read_lf_en, mc_p_read_hf_en);
	}
	else if(mc_p_read_dma_err_status == 1){
		// enable DB
		MEMC_LibSet_MCDMA_DB_en(1);
		mc_p_read_dma_err_status = 0;
		pr_notice("[%s][%d][,%d,%d,%d,%d,%d,]\n\r", __FUNCTION__, __LINE__, u32_RB_val_mode_sel, u32_RB_val_mode_en, pulldown_mode, mc_p_read_lf_en, mc_p_read_hf_en);
	}
}

VOID Wrt_ComReg_Proc_outputInterrupt(const _PARAM_WRT_COM_REG *pParam, _OUTPUT_WRT_COM_REG *pOutput)
{
	UINT32 Freeze_en = 0;
	unsigned char LineMode_flag_chg = 0;
	static unsigned char LineMode_flag_pre = 0, LineMode_stage = 0;

	LineMode_flag_chg = (LineMode_flag_pre == MEMC_Lib_get_LineMode_flag()) ? 0 : 1;
	ReadRegister(FRC_TOP__software1__reg_software_00_ADDR, 25, 25, &Freeze_en);

	if(pParam->u1_Wrt_ComReg_Proc_en)
	{
		#if PQL_DYNAMIC_ADJUST_FIX_ISSUE
		Identification_Pattern_preProcess(pParam,pOutput);
		#endif
		fbCtrl_wrtAction(pParam, pOutput);
		dhClose_wrtAction(pParam);
		ME_obmeSelection_wrtAction(pParam);
		mv_accord_wrtAction(pParam);
		//dhLocalFbLvl_wrtAction(pParam);
		dynamicME_wrtAction(pParam,pOutput);

#if PQL_DYNAMIC_ADJUST_FIX_ISSUE
		scCtrl_wrtAction(pParam, pOutput);
		sc_enCtrl_wrtAction(pParam, pOutput);
		Mc2_var_lpf_wrtAction(pParam,pOutput);
		MC_Unsharp_Mask_wrtAction(pParam,pOutput);
		MC_SObj_wrtAction(pParam,pOutput);
		ME2_SObj_wrtAction(pParam,pOutput);
		//IPPRE_POST_CSCMode_wrtAction(pParam,pOutput);
		//MC_blend_alpha_wrtAction(pParam,pOutput);

		Dh_Local_FB_wrtAction(pParam,pOutput);
		Dh_OCCL_Ext_wrtAction(pParam,pOutput);
		DW_fmdet_4region_En_wrtAction(pParam,pOutput);
		Identification_Pattern_wrtAction(pParam,pOutput);
#endif
	}

	Wrt_7segment_show(pParam);
	debug_info_show(pParam);
	MEMC_HDMI_PowerSaving(pParam, pOutput);

	//-----line mode state machine
	if(LineMode_flag_chg){
		LineMode_stage = 30;
	}

	if(LineMode_stage == 30){
		//mute
		MEMC_LibBlueScreen(1);
	}else if(LineMode_stage == 29){
		if(MEMC_Lib_get_LineMode_flag() == 1)
			MEMC_Lib_SetLineMode(1);
		else
			MEMC_Lib_SetLineMode(0);
	}else if(LineMode_stage == 2){
		//db_off
		MEMC_LibSet_PQC_DB_en(0);
		MEMC_LibSet_MCDMA_DB_en(0);

		// enable read DMA
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_I_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_LF_I_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_LF_I_DMA_RD_DMA_enable_BITEND, 0x1);
		WriteRegister(FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_LF_P_DMA_RD_DMA_enable_BITEND, 0x1);
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_I_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_HF_I_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_HF_I_DMA_RD_DMA_enable_BITEND, 0x1);
		WriteRegister(FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_ADDR, FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_BITSTART, FRC_TOP__MC_DMA__MC_HF_P_DMA_RD_DMA_enable_BITEND, 0x1);
	
		//db_on
		MEMC_LibSet_PQC_DB_en(1);
		MEMC_LibSet_MCDMA_DB_en(1);
	}

	if(LineMode_stage > 0)
		LineMode_stage--;
	//-----
	
	MEMC_DisableMute(pParam, pOutput);
	MEMC_LibReset_lbmcpc_mode_sel_Flow();
	MEMC_Lib_MC_IndexCheck();
	MEMC_LibResetFlow();
	MEMC_Lib_CadenceChangeCtrl();
	/*
	if(Freeze_en)
		MEMC_Lib_Freeze(1);
	else
		MEMC_Lib_Freeze(0);
	*/
	MEMC_Lib_VR360_Flow();
	MC_RMV_blending_ReginaolFB_wrtAction();
	//Over_SearchRange_wrtAction();
	MEMC_LBMC_Apply(pParam, pOutput);
	//MEMC_PQC_Apply(pParam, pOutput);
	MEMC_LibSet_MCDMA_DB_apply();

	//update status
	LineMode_flag_pre = MEMC_Lib_get_LineMode_flag();
}


