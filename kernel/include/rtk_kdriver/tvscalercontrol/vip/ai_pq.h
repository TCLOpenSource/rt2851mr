#ifndef _AI_H_
#define _AI_H_


//#include "gal/rtk_se_export.h"
#include <tvscalercontrol/vip/icm.h>
#if CONFIG_FIRMWARE_IN_KERNEL
#include <scaler/vipCommon.h>	/* in common*/
#include <scaler/vipRPCCommon.h>	/* in common*/
#else
#include <scaler/vipCommon.h>	// in common
#endif
/*******************************************************************************
*Definitions*
******************************************************************************/

#define PQ_TUNING_NUM 20

/*******************************************************************************
 * Structure
 ******************************************************************************/
/*
typedef struct {
	unsigned int dst_x;
	unsigned int dst_y;
	unsigned int dst_w;
	unsigned int dst_h;
	unsigned int dst_phyaddr;
	unsigned int dst_phyaddr_uv;
	unsigned int src_x;
	unsigned int src_y;
	unsigned int src_w;
	unsigned int src_h;
	unsigned int src_phyaddr;
	unsigned int src_phyaddr_uv;
	unsigned int fmt;
} SE_NN_info;

typedef struct{
    float x, y, w, h;
} box;
*/

typedef enum{
 PQ_LEVEL_WEAK=0,
 PQ_LEVEL_MID,
 PQ_LEVEL_STRONG,
 PQ_LEVEL_TYPE_NUM,
} PQ_LEVEL_TYPE;

typedef enum{
	PQ_IP_SHP=0,
	PQ_IP_TNR,
	PQ_IP_COLOR,
	PQ_IP_LC, //local contrast
	PQ_IP_NR,
	PQ_IP_TYPE_NUM,
} PQ_IP_TYPE;

typedef enum{
	PQ_SCENE_BASIC=0,
	PQ_SCENE_DARK,
	PQ_SCENE_SPORTs,
	PQ_SCENE_BEAUTYSCENARY,
	PQ_SCENE_ANIMATION,
	PQ_SCENE_MOVIE,
	PQ_SCENE_TYPE_NUM,
} PQ_SCENE_TYPE;
// chen 0417
typedef struct
{
	int frameIdx;
	int pv8;
	int cx12;
	int cy12;
	int w12;
	int h12;
	int range12;
	int Umax12;
	int Vmax12;
	int y_med12;
	int cb_med12;
	int cr_med12;
	int y_var12;
	int cb_var12;
	int cr_var12;
	int hue_med12;
	int sat_med12;
	int val_med12;
} AIInfo;  // from NN IP
		
typedef struct
{
	int dist_x;
	int dist_y;
	int cx;
	int cy;
	int h;
	int w;
	int center_u;
	int center_v;
	int range;
	
	// chen 0507
	int hue;
	int sat;
	int val;
	//end chen 0507
}AI_IIR_Info;	


typedef struct 
{
	int pos_x_s;
	int pos_y_s;
	int center_u_s;
	int center_v_s;
	int range_s;
	int hue_adj_s;
	int sat_adj_s;
	// lesley 0808
	int int_adj_s;
	// end lesley 0808
	int ai_blending_inside_s;
	int ai_blending_0_s;
	int ai_blending_1_s;
	int ai_blending_2_s;
	int ai_blending_3_s;
	
	// chen 0524
	int uv_blending_0;
	int uv_blending_1;
	int uv_blending_2;
	int uv_blending_3;
	int uv_blending_4;
	int uv_blending_5;
	int uv_blending_6;
	int uv_blending_7;
	//end chen 0524
	// henry 0612
	int intercept_dir;
	int intercept_mode;
	// end henry 0612
} AI_ICM_apply;
// end chen 0417

// chen 0429
typedef struct 
{
	int pos_x_s;
	int pos_y_s;
	int center_u_s;
	int center_v_s;
	int range_s;
	int ai_blending_inside_s;
	int ai_blending_0_s;
	int ai_blending_1_s;
	int ai_blending_2_s;
	int ai_blending_3_s;
	
	// chen 0524
	int uv_blending_0;
	int uv_blending_1;
	int uv_blending_2;
	int uv_blending_3;
	int uv_blending_4;
	int uv_blending_5;
	int uv_blending_6;
	int uv_blending_7;
	//end chen 0524
	// henry 0612
	int octa_tang_dir;
	int octa_tang_mode;
	// end henry 0612

	// lesley 0910
	int enhance_en;
	// end lesley 0910
} AI_DCC_apply;

// chen 0527
typedef struct 
{
	int pv8     ;
	int cx12    ;
	int cy12    ;
	int w12     ;
	int h12     ;
	int range12 ;
	int cb_med12;
	int cr_med12;
	int cb_var12;
	int cr_var12;
} AI_sharp_apply;
//end chen 0527

// lesley 0712
typedef struct 
{
	unsigned short x;
	unsigned short y;
	unsigned short w;
	unsigned short h;
	unsigned short color;
} AI_demo_draw;
// end lesley 0712

typedef struct
{
	int frame_drop_num; //0
	int frame_delay;
	int AI_icm_en;
	int AI_dcc_en;
	int AI_sharp_en;
	int sc_count_th; 
	int ratio_max_th;
	int range_gain;
	int iir_weight;
	int iir_weight2; //9
	int iir_weight3;
	int icm_ai_blend_inside_ratio;
	int icm_ai_blend_ratio0;
	int icm_ai_blend_ratio1;
	int icm_ai_blend_ratio2;
	int icm_ai_blend_ratio3;
	int dcc_ai_blend_inside_ratio;
	int dcc_ai_blend_ratio0;
	int dcc_ai_blend_ratio1; 
	int dcc_ai_blend_ratio2;//19
	int dcc_ai_blend_ratio3;
	
	// chen 0524
	int icm_uv_blend_ratio0;
	int icm_uv_blend_ratio1;
	int icm_uv_blend_ratio2;
	int icm_uv_blend_ratio3;
	int icm_uv_blend_ratio4;
	int icm_uv_blend_ratio5;
	int icm_uv_blend_ratio6;
	int icm_uv_blend_ratio7;
	//end chen 0524

    int demo_draw_en;  //29
	
}
AI_FW_global_setting; 

typedef struct
{
	int d_change_speed_default;//0
	int change_speed_default;
	// disappear 
	int val_diff_loth;
	int d_change_speed_val_loth;
	int d_change_speed_val_hith;
	int d_change_speed_val_slope;
	int IOU_diff_loth;
	int d_change_speed_IOU_loth;
	int d_change_speed_IOU_hith; 
	int d_change_speed_IOU_slope;//9
	int IOU_diff_loth2;
	int d_change_speed_IOU_loth2;
	int d_change_speed_IOU_hith2;
	int d_change_speed_IOU_slope2;
	int size_diff_loth;
	int d_change_speed_size_loth;
	int d_change_speed_size_hith;
	int d_change_speed_size_slope;
	// appear //////
	int val_diff_loth_a;
	int d_change_speed_val_loth_a;//19
	int d_change_speed_val_hith_a;
	int d_change_speed_val_slope_a;
	int IOU_diff_loth_a;
	int d_change_speed_IOU_loth_a;
	int d_change_speed_IOU_hith_a;
	int d_change_speed_IOU_slope_a;
	int IOU_diff_loth_a2;
	int d_change_speed_IOU_loth_a2;
	int d_change_speed_IOU_hith_a2; 
	int d_change_speed_IOU_slope_a2;//29
	int size_diff_loth_a;
	int d_change_speed_size_loth_a;
	int d_change_speed_size_hith_a;
	int d_change_speed_size_slope_a;
	int blend_hith;
	int reserve2_35;
	int reserve2_36;
	int reserve2_37;
	int reserve2_38;
	int reserve2_39;
}
AI_FW_blend_setting; 

typedef struct
{
	//ICM dynamic tuning
	int hue_target_hi1; //0
	int hue_target_hi2;
	int hue_target_hi3;
	int hue_target_lo1;
	int hue_target_lo2;
	int hue_target_lo3;
	int sat_target_hi1;
	int sat_target_hi2;
	int sat_target_hi3;
	int sat_target_lo1; //9
	int sat_target_lo2;
	int sat_target_lo3;
	int s_adj_th_p;
	int s_adj_th_n;
	int h_adj_th_p;
	int h_adj_th_n;
	int sat3x3_gain;// from 3x3 matrix
	int bri_3x3_delta;		// from 3x3 matrix
  // chen 0528
 	int icm_table_nouse;
 	int icm_sat_hith_nomax;
  //end chen 0528

}
AI_FW_icm_tune_setting; 

// chen 0502
typedef struct
{
	int AIPQ_dy_en; 	//0
	int info_manual_en;
	int scene_change;
	int pv8;
	int cx12;
	int cy12;
	int w12;
	int h12;
	int range12;
	int cb_med12;    //9
	int cr_med12;
	int hue_med12;
	int sat_med12;
	int val_med12;
        int reserve4_14;
        int reserve4_15;
        int reserve4_16;
        int reserve4_17;
        int reserve4_18;
        int reserve4_19;
}
AI_FW_info_manual_setting; 

// lesley 0808
typedef struct
{
	//ICM dynamic tuning
	int val_target_lo2_ratio;
	int val_target_lo1;
	int val_target_hi1;
	int val_target_hi2_ratio;
	int v_adj_th_max_p;
	int v_adj_th_max_n;

	// lesley 1007
	int hue_target_hi2_ratio;
	int hue_target_lo2_ratio;
	int sat_target_hi2_ratio;
	int sat_target_lo2_ratio;
	// end lesley 1007

	int h_adj_th_p_norm;
	int h_adj_th_n_norm;
	int s_adj_th_p_norm;
	int s_adj_th_n_norm;
	int v_adj_th_p_norm;
	int v_adj_th_n_norm;

	int h_adj_step;
	int s_adj_step;
	int v_adj_step;

	// lesley 0821
	int icm_global_en;
	// end lesley 0821

	// lesley 0822
	int center_uv_step;
	// end lesley 0822

	// lesley 0826
	int keep_gray_mode;
	int uv_range0_lo;
	int uv_range0_up;
	// end lesley 0826

	// lesley 0902
	int center_u_init;
	int center_v_init;
	int center_u_lo;
	int center_u_up;
	int center_v_lo;
	int center_v_up;
	// end lesley 0902

}
AI_FW_icm_tune_setting2; 

typedef struct
{	
	int dcc_uv_blend_ratio0; // 0~63
	int dcc_uv_blend_ratio1; // 0~63
	int dcc_uv_blend_ratio2; // 0~63
	int dcc_uv_blend_ratio3; // 0~63
	int dcc_uv_blend_ratio4; // 0~63
	int dcc_uv_blend_ratio5; // 0~63
	int dcc_uv_blend_ratio6; // 0~63
	int dcc_uv_blend_ratio7; // 0~63
	int dcc_global_en; 	
	int dcc_old_skin_en;

	// lesley 0904
	int dcc_old_skin_y_range;
	int dcc_old_skin_u_range;
	int dcc_old_skin_v_range;
	int dcc_keep_gray_mode;
	// end lesley 0904

	// lesley 0910
	int dcc_enhance_en;
	// end lesley 0910

    int center_y_step;
	
    int center_uv_step;
	int reserve_17;
	int reserve_18;
	int reserve_19;
}
AI_FW_global_setting2; 

typedef struct
{	
    int edg_gain_level; 	// <100 weak shp, >100 enhance shp
    int tex_gain_level; 	// <100 weak shp, >100 enhance shp
    int vpk_gain_level; 	// <100 weak shp, >100 enhance shp
    int vpk_edg_gain_level; // <100 weak shp, >100 enhance shp

	// chen 0815 
	int AI_face_sharp_dynamic_en;
	// end chen 0815

	// lesley 0815 
	int AI_face_sharp_mode;
	// end lesley 0815

	// yush 190815 
	int shp_face_adjust_en;
	// end yush 190815
	
    int reserve_7; 	
    int reserve_8; 	
    int reserve_9; 	

    int edg_lv; 	// 0~255
    int tex_lv; 	// 0~255
    int vpk_lv; 	// 0~255
    int vpk_edg_lv; // 0~255

    int shp_gain_en; 	
    int shp_lv_en; 	
	
	// lesley 0910
    int edg_gain_neg_level; 	// <100 weak shp, >100 enhance shp
    int tex_gain_neg_level; 	// <100 weak shp, >100 enhance shp
    int vpk_gain_neg_level; 	// <100 weak shp, >100 enhance shp
    int vpk_edg_gain_neg_level; // <100 weak shp, >100 enhance shp
	// end lesley 0910
}
AI_FW_shp_tune_setting; 

typedef struct
{	
	int ai_sc_y_diff_th; // 0~75 	
	int ai_sc_count_th;

	// chen 0808
	int IOU_select;
	int sum_count_num; // max=19
	// end chen 0808
	
	// chen 0812
	int disappear_between_faces_new_en;
	// end chen 0812

	// lesley 0813
	int debug_face_info_mode;
	// end lesley 0813
	
	// chen 0815_2
	int sc_y_diff_th; // 0~75 
	// end chen 0815_2

	// lesley 0820_2
    int IOU_decay_en; 
	int IOU_decay; // 0~100
	// end lesley 0820_2

	// lesley 0906_2
    int ai_sc_y_diff_th1; 	
	// end lesley 0906_2

	// lesley 0823
	int blend_size_en;
	int blend_size_loth;
	int blend_size_hith;
	// end lesley 0823

	// lesley 0829
	int keep_still_mode;
	int still_ratio_th;
	int still_ratio_th1;
	int still_ratio_th2;
	int still_ratio_th3;
    int still_ratio_clamp; 	
	// end lesley 0829
	
	// lesley 0904
    int scene_change_en; 	
	// end lesley 0904

	// lesley 0906_2
	int ai_sc_hue_ratio_th;
	int ai_sc_hue_ratio_th1;
	// end lesley 0906_2

	// lesley 0920
    int signal_cnt_th;
	// end lesley 0920
	
	// lesley 0928
	int IOU2_mode; 
	int IOU2_mode1_offset;//0~100
    int IOU2_mode1_range_gain;// 8: 1x	
	int IOU2_mode1_range_ratio; // 0~8
	// end lesley 0928
	
    int draw_blend_en; 		
	
    int apply_delay; 	
	
    int ip_isr_ctrl; 		
}
AI_FW_global_setting3;
// end lesley 0808

typedef struct {
	AI_FW_global_setting ai_global;
	AI_FW_blend_setting  ai_icm_blend;
	AI_FW_blend_setting  ai_dcc_blend;
 	AI_FW_blend_setting  ai_sharp_blend;
        AI_FW_icm_tune_setting ai_icm_tune;
        AI_FW_info_manual_setting ai_info_manul_0;
        AI_FW_info_manual_setting ai_info_manul_1;
        AI_FW_info_manual_setting ai_info_manul_2;
        AI_FW_info_manual_setting ai_info_manul_3;
        AI_FW_info_manual_setting ai_info_manul_4;
        AI_FW_info_manual_setting ai_info_manul_5;
// lesley 0808
    AI_FW_icm_tune_setting2 ai_icm_tune2; 	// 11
    AI_FW_global_setting2 ai_global2;		// 12, for dcc
    AI_FW_shp_tune_setting ai_shp_tune;		// 13
    AI_FW_global_setting3 ai_global3; 		// 14
// end lesley 0808
        
} DRV_AI_Ctrl_table;

typedef struct
{
	int CDS_skin_en;
	int AI_ros_en;
	int AI_debug_Mode;
	int AI_adjust_en;
	int AI_detect_value;
	int AI_control_value;
	int ai_octa_tang_mode0;
	int ai_octa_tang_mode1;
	int ai_octa_tang_mode2;
	int ai_octa_tang_mode3;
	int ai_octa_tang_mode4;
	int ai_octa_tang_mode5;
	int ai_octa_tang_dir0;
	int ai_octa_tang_dir1;
	int ai_octa_tang_dir2;
	int ai_octa_tang_dir3;
	int ai_octa_tang_dir4;
	int ai_octa_tang_dir5;
	int reserve_18;
	int reserve_19;	
}
AI_ICM_global_setting;

typedef struct
{
	int cds_uv_range_0;
	int cds_uv_range_1;
	int cds_uv_range_2;
	int cds_uv_range_3;
	int cds_uv_range_4;
	int cds_uv_range_5;
	int ai_h_offset0;
	int ai_h_offset1;
	int ai_h_offset2;
	int ai_h_offset3;
	int ai_h_offset4;
	int ai_h_offset5;
	int ai_s_offset0;
	int ai_s_offset1;
	int ai_s_offset2;
	int ai_s_offset3;
	int ai_s_offset4;
	int ai_s_offset5;
	int reserve_18;
	int reserve_19;	
}
AI_ICM_uvRnagHSoffset;

typedef struct
{
	int ai_i_offset0;
	int ai_i_offset1;
	int ai_i_offset2;
	int ai_i_offset3;
	int ai_i_offset4;
	int ai_i_offset5;
	int c_blending_0_ratio_0;
	int c_blending_0_ratio_1;
	int c_blending_0_ratio_2;
	int c_blending_0_ratio_3;
	int c_blending_0_ratio_4;
	int c_blending_0_ratio_5;
	int c_blending_0_ratio_6;
	int c_blending_0_ratio_7;
	int reserve_14;
	int reserve_15;
	int reserve_16;
	int reserve_17;
	int reserve_18;
	int reserve_19;
}
AI_ICM_IoffsetcdRatio0;

typedef struct
{
	int c_blending_1_ratio_0;
	int c_blending_1_ratio_1;
	int c_blending_1_ratio_2;
	int c_blending_1_ratio_3;
	int c_blending_1_ratio_4;
	int c_blending_1_ratio_5;
	int c_blending_1_ratio_6;
	int c_blending_1_ratio_7;
	int c_blending_2_ratio_0;
	int c_blending_2_ratio_1;
	int c_blending_2_ratio_2;
	int c_blending_2_ratio_3;
	int c_blending_2_ratio_4;
	int c_blending_2_ratio_5;
	int c_blending_2_ratio_6;
	int c_blending_2_ratio_7;
	int reserve_16;
	int reserve_17;
	int reserve_18;
	int reserve_19;
}
AI_ICM_cdRatio1_2;

typedef struct
{
	int c_blending_3_ratio_0;
	int c_blending_3_ratio_1;
	int c_blending_3_ratio_2;
	int c_blending_3_ratio_3;
	int c_blending_3_ratio_4;
	int c_blending_3_ratio_5;
	int c_blending_3_ratio_6;
	int c_blending_3_ratio_7;
	int c_blending_4_ratio_0;
	int c_blending_4_ratio_1;
	int c_blending_4_ratio_2;
	int c_blending_4_ratio_3;
	int c_blending_4_ratio_4;
	int c_blending_4_ratio_5;
	int c_blending_4_ratio_6;
	int c_blending_4_ratio_7;
	int reserve_16;
	int reserve_17;
	int reserve_18;
	int reserve_19;
}
AI_ICM_cdRatio3_4;

typedef struct
{
	int c_blending_5_ratio_0;
	int c_blending_5_ratio_1;
	int c_blending_5_ratio_2;
	int c_blending_5_ratio_3;
	int c_blending_5_ratio_4;
	int c_blending_5_ratio_5;
	int c_blending_5_ratio_6;
	int c_blending_5_ratio_7;
	int ai_blending_0_inside_ratio;
	int ai_blending_1_inside_ratio;
	int ai_blending_2_inside_ratio;
	int ai_blending_3_inside_ratio;
	int ai_blending_4_inside_ratio;
	int ai_blending_5_inside_ratio;
	int ai_blending_0_ratio_0;
	int ai_blending_0_ratio_1;
	int ai_blending_0_ratio_2;
	int ai_blending_0_ratio_3;
	int reserve_18;
	int reserve_19;	
}
AI_ICM_cdRatio5aiRatio0;

typedef struct
{
	int ai_blending_1_ratio_0;
	int ai_blending_1_ratio_1;
	int ai_blending_1_ratio_2;
	int ai_blending_1_ratio_3;
	int ai_blending_2_ratio_0;
	int ai_blending_2_ratio_1;
	int ai_blending_2_ratio_2;
	int ai_blending_2_ratio_3;
	int ai_blending_3_ratio_0;
	int ai_blending_3_ratio_1;
	int ai_blending_3_ratio_2;
	int ai_blending_3_ratio_3;
	int ai_blending_4_ratio_0;
	int ai_blending_4_ratio_1;
	int ai_blending_4_ratio_2;
	int ai_blending_4_ratio_3;
	int ai_blending_5_ratio_0;
	int ai_blending_5_ratio_1;
	int ai_blending_5_ratio_2;
	int ai_blending_5_ratio_3;
}
AI_ICM_aiRatio1_5;


typedef struct {
	AI_ICM_global_setting 		ai_global;
	AI_ICM_uvRnagHSoffset 	ai_uvRangHoffset ;
	AI_ICM_IoffsetcdRatio0  	ai_ioffsetcdRatio0;
	AI_ICM_cdRatio1_2 		ai_cdRatio12;
	AI_ICM_cdRatio3_4  		ai_cdRatio34;
	AI_ICM_cdRatio5aiRatio0 	ai_cdRatio5aiRatio0;
	AI_ICM_aiRatio1_5 		ai_icm_ratio15;
} AI_ICM_Ctrl_table;


// end chen 0429


//dcc tulia 
typedef struct
{
	
	int AI_ros_en;
	int AI_adjust_en;
	int AI_detect_value;
	int AI_control_value;
}
AI_DCC_global_setting;

typedef struct
{
	int ai_x_center_0;
	int ai_y_center_0;
	int ai_range_0;
	int ai_octa_tang_dir0;
	int ai_octa_tang_mode0;
	int ai_blending_0_inside_ratio;
	int ai_blending_0_ratio_0;
	int ai_blending_0_ratio_1;
	int ai_blending_0_ratio_2;
	int ai_blending_0_ratio_3;	
}
AI_DCC_Face0_info;


typedef struct
{
	int ai_x_center_1;
	int ai_y_center_1;
	int ai_range_1;
	int ai_octa_tang_dir1;
	int ai_octa_tang_mode1;
	int ai_blending_1_inside_ratio;
	int ai_blending_1_ratio_0;
	int ai_blending_1_ratio_1;
	int ai_blending_1_ratio_2;
	int ai_blending_1_ratio_3;
}
AI_DCC_Face1_info;

typedef struct
{
	int ai_x_center_2;
	int ai_y_center_2;
	int ai_range_2;
	int ai_octa_tang_dir2;
	int ai_octa_tang_mode2;
	int ai_blending_2_inside_ratio;
	int ai_blending_2_ratio_0;
	int ai_blending_2_ratio_1;
	int ai_blending_2_ratio_2;
	int ai_blending_2_ratio_3;
}
AI_DCC_Face2_info;

typedef struct
{
	int ai_x_center_3;
	int ai_y_center_3;
	int ai_range_3;
	int ai_octa_tang_dir3;
	int ai_octa_tang_mode3;
	int ai_blending_3_inside_ratio;
	int ai_blending_3_ratio_0;
	int ai_blending_3_ratio_1;
	int ai_blending_3_ratio_2;
	int ai_blending_3_ratio_3;
}
AI_DCC_Face3_info;

typedef struct
{
	int ai_x_center_4;
	int ai_y_center_4;
	int ai_range_4;
	int ai_octa_tang_dir4;
	int ai_octa_tang_mode4;
	int ai_blending_4_inside_ratio;
	int ai_blending_4_ratio_0;
	int ai_blending_4_ratio_1;
	int ai_blending_4_ratio_2;
	int ai_blending_4_ratio_3;
}
AI_DCC_Face4_info;

typedef struct
{
	int ai_x_center_5;
	int ai_y_center_5;
	int ai_range_5;
	int ai_octa_tang_dir5;
	int ai_octa_tang_mode5;
	int ai_blending_5_inside_ratio;
	int ai_blending_5_ratio_0;
	int ai_blending_5_ratio_1;
	int ai_blending_5_ratio_2;
	int ai_blending_5_ratio_3;
}
AI_DCC_Face5_info;

typedef struct
{
	int region0_enhance_en ;
	int cds_u_center_0;
	int cds_v_center_0;	
	int cds_uv_range_0;	
	int c_blending_0_ratio_0;
	int c_blending_0_ratio_1;
	int c_blending_0_ratio_2;
	int c_blending_0_ratio_3;
	int c_blending_0_ratio_4;
	int c_blending_0_ratio_5;
	int c_blending_0_ratio_6;
	int c_blending_0_ratio_7;	
}
CDS_SKIN_DCC_Face0_info;
typedef struct
{
	int region1_enhance_en ;
	int cds_u_center_1;
	int cds_v_center_1;	
	int cds_uv_range_1;	
	int c_blending_1_ratio_0;
	int c_blending_1_ratio_1;
	int c_blending_1_ratio_2;
	int c_blending_1_ratio_3;
	int c_blending_1_ratio_4;
	int c_blending_1_ratio_5;
	int c_blending_1_ratio_6;
	int c_blending_1_ratio_7;	
}
CDS_SKIN_DCC_Face1_info;

typedef struct
{
	int region2_enhance_en ;
	int cds_u_center_2;
	int cds_v_center_2;	
	int cds_uv_range_2;	
	int c_blending_2_ratio_0;
	int c_blending_2_ratio_1;
	int c_blending_2_ratio_2;
	int c_blending_2_ratio_3;
	int c_blending_2_ratio_4;
	int c_blending_2_ratio_5;
	int c_blending_2_ratio_6;
	int c_blending_2_ratio_7;	
}
CDS_SKIN_DCC_Face2_info;

typedef struct
{
	int region3_enhance_en ;
	int cds_u_center_3;
	int cds_v_center_3;	
	int cds_uv_range_3;	
	int c_blending_3_ratio_0;
	int c_blending_3_ratio_1;
	int c_blending_3_ratio_2;
	int c_blending_3_ratio_3;
	int c_blending_3_ratio_4;
	int c_blending_3_ratio_5;
	int c_blending_3_ratio_6;
	int c_blending_3_ratio_7;	
}
CDS_SKIN_DCC_Face3_info;

typedef struct
{
	int region4_enhance_en ;
	int cds_u_center_4;
	int cds_v_center_4;	
	int cds_uv_range_4;	
	int c_blending_4_ratio_0;
	int c_blending_4_ratio_1;
	int c_blending_4_ratio_2;
	int c_blending_4_ratio_3;
	int c_blending_4_ratio_4;
	int c_blending_4_ratio_5;
	int c_blending_4_ratio_6;
	int c_blending_4_ratio_7;	
}
CDS_SKIN_DCC_Face4_info;

typedef struct
{
	int region5_enhance_en ;
	int cds_u_center_5;
	int cds_v_center_5;	
	int cds_uv_range_5;	
	int c_blending_5_ratio_0;
	int c_blending_5_ratio_1;
	int c_blending_5_ratio_2;
	int c_blending_5_ratio_3;
	int c_blending_5_ratio_4;
	int c_blending_5_ratio_5;
	int c_blending_5_ratio_6;
	int c_blending_5_ratio_7;	
}
CDS_SKIN_DCC_Face5_info;

typedef struct {
	AI_DCC_global_setting 	dcc_ai_global;
	AI_DCC_Face0_info 	dcc_ai_face0_info ;
	AI_DCC_Face1_info  	dcc_ai_face1_info;
	AI_DCC_Face2_info 	dcc_ai_face2_info;
	AI_DCC_Face3_info  	dcc_ai_face3_info;
	AI_DCC_Face4_info 	dcc_ai_face4_info;
	AI_DCC_Face5_info 	dcc_ai_face5_info;
} AI_DCC_Ctrl_table;

typedef struct {
	CDS_SKIN_DCC_Face0_info    dcc_cds_skin_face0_info ;
	CDS_SKIN_DCC_Face1_info 	dcc_cds_skin_face1_info ;
	CDS_SKIN_DCC_Face2_info  	dcc_cds_skin_face2_info;
	CDS_SKIN_DCC_Face3_info 	dcc_cds_skin_face3_info;
	CDS_SKIN_DCC_Face4_info  	dcc_cds_skin_face4_info;
	CDS_SKIN_DCC_Face5_info 	dcc_cds_skin_face5_info;
}CDS_skin_DCC_Ctrl_table;

// lesley 0903
typedef struct {
	int y_center;
	int u_center;
	int v_center;
	int y_range;
	int u_range;
	int v_range;
	int uv_blend_0;
	int uv_blend_1;
	int uv_blend_2;
	int uv_blend_3;
	int uv_blend_4;
	int uv_blend_5;
	int uv_blend_6;
	int uv_blend_7;

	// lesley 0910
	int enhance_en;
	// end lesley 0910
}AI_OLD_DCC_apply;
// end lesley 0903

// for scene_detection

typedef struct
{
	int scene_en;
	int scene_cnt_method;
	int bdtop_th;
	int bdbot_th;	
	int osd_pq_scene_cnt_th;

	int crop_top;
	int crop_bot;
	int crop_left;
	int crop_right;
	int adj_top_en;
}
AI_SCENE_FW_global_setting;

typedef struct {
	AI_SCENE_FW_global_setting ai_scene_global;
 	int change_speed[PQ_IP_TYPE_NUM][PQ_TUNING_NUM];
       
} DRV_AI_SCENE_Ctrl_table;

// 0506 lsy
typedef struct
{
	int sqm_en;
}
AI_SQM_FW_global_setting;

typedef struct {
	AI_SCENE_FW_global_setting ai_scene_global;
 	int change_speed[PQ_IP_TYPE_NUM][PQ_TUNING_NUM];
	AI_SQM_FW_global_setting ai_sqm_global;
      
} DRV_AI_PQ_Ctrl_table;
// end 0506 lsy

/*******************************************************************************
*functions*
******************************************************************************/
void demo_20CES_tv030(void);
void demo_20CES_tv030_NR(int enable);
//void NN_SE_Init(void);
//void SE_NN_Proc(SE_NN_info *pParam_SE_NN);
void drvif_color_AI_obj_dcc_init(unsigned char enable);
void drvif_color_AI_obj_icm_init(unsigned char enable);
void drvif_color_AI_cds_init(unsigned char enable);

// chen 0429
void drvif_color_AI_obj_dcc_set(AI_DCC_apply face_dcc_apply_f[6]); 
void drvif_color_AI_obj_icm_set(AI_ICM_apply face_icm_apply_f[6]);
// chen 0527
void drvif_color_AI_obj_sharp_set(AI_sharp_apply face_sharp_apply_f[6]);
//end chen 0527
void drvif_color_AI_obj_srp_init(unsigned char enable_cm0);
//void drvif_color_AI_obj_cds_set(unsigned char enable);
//void drvif_color_AI_obj_sharpness_set(void);

//void drvif_color_AI_ICM_mode(unsigned char mode);
void drvif_color_AI_ICM_table_set(AI_ICM_Ctrl_table *ptr);

void scaler_AI_obj_Ctrl_Set(DRV_AI_Ctrl_table *ptr); // wrtie from sharing memory
void scaler_AI_obj_Ctrl_Get(DRV_AI_Ctrl_table *ptr); // read from sharing memory

void drvif_color_AI_DCC_table_set(AI_DCC_Ctrl_table *ptr1, CDS_skin_DCC_Ctrl_table *ptr2); 

// lesley 0808
void drvif_color_AI_Ctrl_shp(void);
void drvif_color_old_skin_dcc_set(AI_OLD_DCC_apply old_dcc_apply);
// end lesley 0808

void scaler_AI_Scene_Ctrl_Set(DRV_AI_SCENE_Ctrl_table *ptr); // read from sharing memory
void scaler_AI_Scene_Ctrl_Get(DRV_AI_SCENE_Ctrl_table *ptr); // read from sharing memory
void drvif_color_AI_scene_cdsharp_reset_gain(int *cds_gain, int cm);
void drvif_color_AI_scene_cdsharp_get(int *cds_gain);
void drvif_color_AI_scene_cdsharp_en(unsigned char enable_cm1, unsigned char enable_cm2);
void drvif_color_AI_scene_cdsharp_set_cm1(unsigned char mode, unsigned int cds_gain[15]);
void drvif_color_AI_scene_cdsharp_set_cm2(unsigned char mode, unsigned int cds_gain[15]);
void drvif_color_AI_scene_TNR_reset_gain(unsigned int *K);

void drvif_color_AI_scene_TNR_set(unsigned int *K);
void drvif_color_AI_scene_TNR_get(unsigned int *K);
void drvif_color_AI_scene_TNR_get_c(unsigned int *K);
void drvif_color_AI_scene_TNR_set_c(unsigned int *K);
void drvif_color_AI_scene_TNR_get_yth(unsigned int *K);
void drvif_color_AI_scene_TNR_set_yth(unsigned int *K);
void drvif_color_AI_scene_TNR_get_cth(unsigned int *K);
void drvif_color_AI_scene_TNR_set_cth(unsigned int *K);
void drvif_color_AI_scene_SNR_get_w1(unsigned int *K);
void drvif_color_AI_scene_SNR_set_w1(unsigned int *K);
void drvif_color_AI_scene_SNR_get_w2(unsigned int *K);
void drvif_color_AI_scene_SNR_set_w2(unsigned int *K);
void drvif_color_AI_scene_mosquitonr_nlevel_set(unsigned int *gain);
void drvif_color_AI_scene_dirsu_angmagconf_set(unsigned int *gain);
void drvif_color_AI_scene_dirsu_angletransition_set(unsigned int *gain);
void drvif_color_AI_scene_DDLTI_en_set(unsigned char dlti_en,unsigned char dlti_v_en,unsigned char dlti_h_en);
void drvif_color_AI_scene_dlti_h_set(unsigned int *gain);
void drvif_color_AI_scene_dlti_v_set(unsigned int *gain);
void drvif_color_AI_scene_LC_en_set(unsigned char lc_local_sharp_en,unsigned char lc_tone_mapping_en);
void drvif_color_AI_scene_LC_Shpnr_Gain1st_set(unsigned int *gain);
void drvif_color_AI_scene_LC_Shpnr_Gain2nd_set(unsigned int *gain);

void drvif_color_AI_scene_Color_reset_gain(unsigned int *gain);
void drvif_color_AI_scene_Color_get(unsigned int *gain);
void drvif_color_AI_scene_LC_reset_gain(unsigned int *gain);
void drvif_color_AI_scene_LC_set(unsigned int *gain);
void drvif_color_AI_scene_MosNR_reset_gain(unsigned int *gain);
void drvif_color_AI_scene_MosNR_get(unsigned int *gain);
void drvif_color_AI_scene_MosNR_set(unsigned int *gain);
int drvif_color_AI_scene_PQ_reset_check(int *curGain, int *tarGain);

// 0506 lsy
void drvif_color_AI_PQ_set_tnr_noise_level(signed char *value);
void drvif_color_AI_PQ_set_decontour_lowbd(unsigned int *value);
void scaler_AI_PQ_Ctrl_Set(DRV_AI_PQ_Ctrl_table *ptr); // read from sharing memory
void scaler_AI_PQ_Ctrl_Get(DRV_AI_PQ_Ctrl_table *ptr); // read from sharing memory
void drvif_color_AI_PQ_set(int basic_pq_val[PQ_IP_TYPE_NUM][PQ_TUNING_NUM], int pq_offset[PQ_IP_TYPE_NUM][PQ_TUNING_NUM]);
void drvif_color_AI_PQ_get(int (*pq_val)[PQ_TUNING_NUM]);
// end 0506 lsy
#endif /* _AI_H_ */
