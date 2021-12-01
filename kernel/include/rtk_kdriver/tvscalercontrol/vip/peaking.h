#ifndef __PEAKING_H__
#define __PEAKING_H__

#ifdef __cplusplus
extern "C" {
#endif
/* some include about scaler*/
#if CONFIG_FIRMWARE_IN_KERNEL
#include <scaler/vipCommon.h>
#else
#include <scaler/vipCommon.h>
#endif

#define    i_nPxlSel              		(0)
#define    i_nC0                  			(1)
#define    i_nC1                  			(2)
#define    i_nC2                  			(3)
#define    i_nG_Blr               		(4)
#define    i_nG_Pos_Min           		(5)
#define    i_nG_Pos_Max           	(6)
#define    i_nG_Neg_Min        	   	(7)
#define    i_nG_Neg_Max           	(8)
#define    i_nHV_POS_Min          	(9)
#define    i_nHV_POS_Max          	(10)
#define    i_nHV_NEG_Min          	(11)
#define    i_nHV_NEG_Max          	(12)
#define    i_nLV_min              		(13)
#define    i_nLV_max              		(14)

#define    d_vpkC0                  		(0)
#define    d_vpkC1                  		(1)
#define    d_vpkC2                  		(2)
#define    d_vpkG_Pos_Min           	(3)
#define    d_vpkG_Pos_Max           	(4)
#define    d_vpkG_Neg_Min           	(5)
#define    d_vpkG_Neg_Max           	(6)
#define    d_vpkHV_POS_Min          	(7)
#define    d_vpkHV_POS_Max          (8)
#define    d_vpkHV_NEG_Min          	(9)
#define    d_vpkHV_NEG_Max         	(10)
#define    d_vpkLV_min              	(11)
#define    d_vpkLV_max              	(12)
#define    d_vpvext              		(13)
#define    d_vpvemf_en              	(14)
#define    d_vpv_tex_en              	(15)
#define    d_vpv_dering_en            	(16)


#define VIP_QUALITY_d_Vertical_PEAKING_NUM 14



#define    d_Sh_B0              		(0)
#define    d_Sh_B1              		(1)
#define    d_nC0                  		(2)
#define    d_nC1                  		(3)
#define    d_nC2                  		(4)
#define    d_nC3                  		(5)
#define    d_nC4                  		(6)
#define    d_nC5                  		(7)

#define    d_nG_Blr               		(8)
#define    d_nG_Pos_Min           	(9)
#define    d_nG_Pos_Max           	(10)
#define    d_nG_Neg_Min           	(11)
#define    d_nG_Neg_Max           	(12)
#define    d_nHV_POS_Min          	(13)
#define    d_nHV_POS_Max          	(14)
#define    d_nHV_NEG_Min          	(15)
#define    d_nHV_NEG_Max          	(16)
#define    d_nD2_shift_bit         	(19)

#define    d_Gain_upbnd            	(0)
#define    d_LV_upbnd              		(1)
#define    d_Gain_th_max		(2)
#define    d_Gain_th_min			(3)
#define    d_LV_th_max                 	(4)
#define    d_LV_th_min                 	(5)
#define    d_Dnoise_LV_en		(6)
#define    d_Dnoise_Gain_en		(7)


#define VIP_QUALITY_D_DNOISE_NUM 8


typedef enum _VIP_SR_driver_item {
	VIP_SR_edge_gain = 0,
	VIP_SR_texture_gain,
} _VIP_SR_driver_item;

typedef enum _VIP_SR_driver_S_Gamma {
	gamma_mode = 0,
	S_gamma_index,
	S_gamma_high,
	S_gamma_low,
	S_gamma_default,
} _VIP_SR_driver_S_Gamma;


/*******************************************************************************
 * Structure
 ******************************************************************************/
typedef struct {
	short Peaking_Enable;
	short Edge_Mode;
	short Sobel_Mode;
	short Edgextrange;
	short Sobel_Upbnd;
	short Sobel_Stepbit;
	short Zdiff_Upbnd;
	short Zdiff_Stepbit;
	short Zigsftbit_Reg;
	short Tex_En;
	short Tex_Upbnd;
	short Tex_Stepbit;
	short Actsftbit_Reg;
	//short Dering_En;/*merlin2 removed*/
	short _5x5_h;/*Merlin3*/
	short _5x5_v;/*Merlin3*/
	short Tex_Exclude_Smooth;/*Merlin3*/
	short Lpf_Mode;
	short Lpf_Filter;
	short Edg_Tex_Blending_Lpf_En;
	short Edg_Tex_Blending_Lpf_Filter;
	short Hpf_Vpf_Maxmin_En;/*magellan2*/
	short Src_Sel;/*magellan2*/
	short PkDlti_comsign;
	short Sobel_h;/*merlin*/
	short Sobel_v;/*merlin*/
	short Acts_offset;/*merlin*/
	short Small_thl;/*merlin*/
	short Edgextrange_v;/*merlin*/
	short Sobel_hspace;/*Merlin3*/
	short Sobel_vspace;/*Merlin3*/
	short edg_dlti;
	short zdiffl_en;
	short zdiffl_lowbnd;
	short zdiffl_stepbit;
} DRV_2D_Peak_AdaptCtrl;

typedef struct {
	short LV2;
	short G_Pos2;
	short G_Neg2;
	short Edg_D2_Shift_Bit;
} DRV_Edge_Shp_t;

typedef struct {
	short LV2;
	short G_Pos2;
	short G_Neg2;
	short Edg_D2_Shift_Bit;
} DRV_Text_Shp_t;

typedef struct {
	short C0;
	short C1;
	short C2;
	short C3;/*magellan2*/
	short C4;/*magellan2*/
	short Vext_Reg;
	short Vemf_En;
	short V_Tex_en;
	short V_Dering_En;
	short LV2;
	short G_Pos2;
	short G_Neg2;
	short enable_edge;/*merlin*/
	short LV2_edge;/*merlin*/
	short G_Pos2_edge;/*merlin*/
	short G_Neg2_edge;/*merlin*/
	short en_edg;/*merlin3*/
	short en_tex;/*merlin3*/
	short vpk_sr_tex;/*merlin3*/
	short vpk_sr_edg;/*merlin4*/
} DRV_Vertical_Shp_t;

typedef struct {
	short EMF_En;
	short EMF_Shift;
	short EMF_Range;
	short Seg_0_Gain;
	short Seg_1_Gain;
	short Seg_2_Gain;
	short Seg_0_Offset;
	short Seg_1_Offset;
	short Seg_2_Offset;
	short EMF_EXT_neg;
	short EMF_EXT_pos;
	short Seg_0_x;
	short Seg_1_x;
	short Blend_wt;
	short v5;
	short h11;
} DRV_Edge_EMF_Table;

typedef struct {
	short EMF_En;
	short EMF_Shift;
	short EMF_Range;
	short Seg_0_Gain;
	short Seg_1_Gain;
	short Seg_2_Gain;
	short Seg_0_Offset;
	short Seg_1_Offset;
	short Seg_2_Offset;
	short EMF_EXT_neg;
	short EMF_EXT_pos;
	short Seg_0_x;
	short Seg_1_x;
	short Blend_wt;
	short EMF_texgain;// Row19 Col14
	short v5;
	short h11;
} DRV_Text_EMF_Table;

typedef struct {
	/*short Mkiii_En; magellan2 removed*/
	short Tex_Filter_Sel;
	short Edge_Filter_Sel;
	short Lpf2d_C0;
	short Lpf2d_C1;
	short Lpf2d_C2;
	short Lpf2d_C3;
	short Lpf2d_C4;
	short Lpf2d_C5;
	short MaxMin_Gain_0;
	short MaxMin_Gain_1;
	short MaxMin_Gain_2;
	short MaxMin_Gain_3;
	short MaxMin_Gain_4;
	short MaxMin_Gain_5;
	short MaxMin_Gain_6;
	short MaxMin_Step_1;
	short MaxMin_Step_2;
	short MaxMin_Step_3;
	short MaxMin_Step_4;
	short MaxMin_Step_5;
	short MaxMin_Step_6;
	short MaxMin_Gain_En;
	short max_min_gain_tex_en;
	short max_min_gain_edg_en;
	short max_min_gain_v_en;
	short Lpf_Weit_0;
	short Lpf_Weit_1;
	short Lpf_Weit_2;
	short Lpf_Weit_3;
	short Lpf_Weit_4;
	short Lpf_Weit_5;
	short Lpf_Weit_6;
	short Lpf_Step_1;
	short Lpf_Step_2;
	short Lpf_Step_3;
	short Lpf_Step_4;
	short Lpf_Step_5;
	short Lpf_Step_6;
	short Lpf_Weigh_En;
	short lpf_weigh_tex_en;
	short lpf_weigh_edg_en;
	short Gain_By_Y_Gain_0;
	short Gain_By_Y_Gain_1;
	short Gain_By_Y_Gain_2;
	short Gain_By_Y_Gain_3;
	short Gain_By_Y_Gain_4;
	short Gain_By_Y_Gain_5;
	short Gain_By_Y_Gain_6;
	short Gain_By_Y_Step_1;
	short Gain_By_Y_Step_2;
	short Gain_By_Y_Step_3;
	short Gain_By_Y_Step_4;
	short Gain_By_Y_Step_5;
	short Gain_By_Y_Step_6;
	short Gain_By_Y_En;
	short gain_by_y_tex_en;
	short gain_by_y_edg_en;
	short gain_by_y_v_en;
	short lv_by_y_enable;
	short lv_by_y_tex_enable;
	short lv_by_y_edg_enable;
	short lv_by_y_v_enable;
	short lv_by_y_v_edg_enable;
	short EdgeCoring_En;
	short EdgeCoring_Gain_En;
	short EdgeCoring_DeltaEdge_Ulevel;
	short EdgeCoring_Clip;
	short EdgeCoring_Gain_Bound;
	short EdgeCoring_Ser_Range;
	short EdgeCoring_Bigedge_Ratio;
	short EdgeCoring_Smalledge_Ratio;
	short EdgeCoring_Deltaedge_Ratio;
	short EdgeCoring_Smalledge_Ulevel;
	short Edge_Delta_Ext_Range;
	short Edge_Text_blend_en;
	short Edge_Text_blend_filter;
	short LinearY_UM;
	short LinearY_LM;
	short LinearY_UB;
	short LinearY_LB;
	short Slope_gain_en;
	short dir;
	short FH;
	short Gain_boundPos;
	short Gain_boundNeg;
	short Gain_extendPos;
	short Gain_extendNeg;
	short Slope_gain_v_en;/*merlin*/
	short dir_v;/*merlin*/
	short Gain_boundPos_v;/*merlin*/
	short Gain_boundNeg_v;/*merlin*/
	short Gain_extendPos_v;/*merlin*/
	short Gain_extendNeg_v;/*merlin*/
	short lowbound;/*Merlin3*/
	short lowbound_v;/*Merlin3*/
	short extend1;/*Merlin3*/
	short extend2;/*Merlin3*/
	short flat_enable;
	short flat_offset;
	short flat_gain;
	short flat_v_enable;
	short flat_offset_v;
	short flat_gain_v;
	short flat_range_h;/*Merlin3*/
	short flat_range_v;/*Merlin3*/
} DRV_Mk3_t;

typedef struct {
	short Edge_Coring_En;
	short Edge_Gain_En;
	short DeltaEdge_Ulevel;
	short Edge_Coring_Clip;
	short Edge_Gain_Bound;
	short Edge_Ser_Range;
	short Bigedge_Ratio;
	short Smalledge_Ratio;
	short Deltaedge_Ratio;
	short Smalledge_Ulevel;
	short Edge_Delta_Ext_Range;/*magellan2*/

} DRV_Edge_Coring;

typedef struct {
	short C0;/*magellan2*/
	short C1;/*magellan2*/
	short C2;/*magellan2*/
	short C3;/*magellan2*/
	short C4;/*magellan2*/
	short HPF_Gain;/*magellan2*/
	short Mode;/*magellan2*/
	short Enable;/*magellan2*/
	short Rgblimit_pos;/*Merlin3*/
	short Rgblimit_neg;/*Merlin3*/

} DRV_After_Filter;/*magellan2*/

typedef struct {
	short G0;/*magellan2*/
	short G1;/*magellan2*/
	short G2;/*magellan2*/
	short G3;/*magellan2*/
	short G4;/*magellan2*/
	short G5;/*magellan2*/
	short G6;/*magellan2*/
	short G7;/*magellan2*/
	short G8;/*magellan2*/
	short G9;/*magellan2*/
	short G10;/*magellan2*/
	short G11;/*magellan2*/
	short G12;/*magellan2*/
	short G13;/*magellan2*/
	short G14;/*magellan2*/

	short S1;/*magellan2*/
	short S2;/*magellan2*/
	short S3;/*magellan2*/
	short S4;/*magellan2*/
	short S5;/*magellan2*/
	short S6;/*magellan2*/
	short S7;/*magellan2*/
	short S8;/*magellan2*/
	short S9;/*magellan2*/
	short S10;/*magellan2*/
	short S11;/*magellan2*/
	short S12;/*magellan2*/
	short S13;/*magellan2*/
	short S14;/*magellan2*/

} DRV_V_Pos_Curve;/*magellan2*/

typedef struct {
	short G0;/*magellan2*/
	short G1;/*magellan2*/
	short G2;/*magellan2*/
	short G3;/*magellan2*/
	short G4;/*magellan2*/
	short G5;/*magellan2*/
	short G6;/*magellan2*/
	short G7;/*magellan2*/
	short G8;/*magellan2*/
	short G9;/*magellan2*/
	short G10;/*magellan2*/
	short G11;/*magellan2*/
	short G12;/*magellan2*/
	short G13;/*magellan2*/
	short G14;/*magellan2*/

	short S1;/*magellan2*/
	short S2;/*magellan2*/
	short S3;/*magellan2*/
	short S4;/*magellan2*/
	short S5;/*magellan2*/
	short S6;/*magellan2*/
	short S7;/*magellan2*/
	short S8;/*magellan2*/
	short S9;/*magellan2*/
	short S10;/*magellan2*/
	short S11;/*magellan2*/
	short S12;/*magellan2*/
	short S13;/*magellan2*/
	short S14;/*magellan2*/
	short enable;/*magellan2*/

} DRV_V_Neg_Curve;/*magellan2*/

typedef struct {
	short G0;/*magellan2*/
	short G1;/*magellan2*/
	short G2;/*magellan2*/
	short G3;/*magellan2*/
	short G4;/*magellan2*/
	short G5;/*magellan2*/
	short G6;/*magellan2*/
	short G7;/*magellan2*/
	short G8;/*magellan2*/
	short G9;/*magellan2*/
	short G10;/*magellan2*/
	short G11;/*magellan2*/
	short G12;/*magellan2*/
	short G13;/*magellan2*/
	short G14;/*magellan2*/

	short S1;/*magellan2*/
	short S2;/*magellan2*/
	short S3;/*magellan2*/
	short S4;/*magellan2*/
	short S5;/*magellan2*/
	short S6;/*magellan2*/
	short S7;/*magellan2*/
	short S8;/*magellan2*/
	short S9;/*magellan2*/
	short S10;/*magellan2*/
	short S11;/*magellan2*/
	short S12;/*magellan2*/
	short S13;/*magellan2*/
	short S14;/*magellan2*/

} DRV_Edge_Pos_Curve;/*magellan2*/

typedef struct {
	short G0;/*magellan2*/
	short G1;/*magellan2*/
	short G2;/*magellan2*/
	short G3;/*magellan2*/
	short G4;/*magellan2*/
	short G5;/*magellan2*/
	short G6;/*magellan2*/
	short G7;/*magellan2*/
	short G8;/*magellan2*/
	short G9;/*magellan2*/
	short G10;/*magellan2*/
	short G11;/*magellan2*/
	short G12;/*magellan2*/
	short G13;/*magellan2*/
	short G14;/*magellan2*/

	short S1;/*magellan2*/
	short S2;/*magellan2*/
	short S3;/*magellan2*/
	short S4;/*magellan2*/
	short S5;/*magellan2*/
	short S6;/*magellan2*/
	short S7;/*magellan2*/
	short S8;/*magellan2*/
	short S9;/*magellan2*/
	short S10;/*magellan2*/
	short S11;/*magellan2*/
	short S12;/*magellan2*/
	short S13;/*magellan2*/
	short S14;/*magellan2*/
	short enable;/*magellan2*/

} DRV_Edge_Neg_Curve;/*magellan2*/

typedef struct {
	short G0;/*magellan2*/
	short G1;/*magellan2*/
	short G2;/*magellan2*/
	short G3;/*magellan2*/
	short G4;/*magellan2*/
	short G5;/*magellan2*/
	short G6;/*magellan2*/
	short G7;/*magellan2*/
	short G8;/*magellan2*/
	short G9;/*magellan2*/
	short G10;/*magellan2*/
	short G11;/*magellan2*/
	short G12;/*magellan2*/
	short G13;/*magellan2*/
	short G14;/*magellan2*/

	short S1;/*magellan2*/
	short S2;/*magellan2*/
	short S3;/*magellan2*/
	short S4;/*magellan2*/
	short S5;/*magellan2*/
	short S6;/*magellan2*/
	short S7;/*magellan2*/
	short S8;/*magellan2*/
	short S9;/*magellan2*/
	short S10;/*magellan2*/
	short S11;/*magellan2*/
	short S12;/*magellan2*/
	short S13;/*magellan2*/
	short S14;/*magellan2*/

} DRV_Tex_Pos_Curve;/*magellan2*/

typedef struct {
	short G0;/*magellan2*/
	short G1;/*magellan2*/
	short G2;/*magellan2*/
	short G3;/*magellan2*/
	short G4;/*magellan2*/
	short G5;/*magellan2*/
	short G6;/*magellan2*/
	short G7;/*magellan2*/
	short G8;/*magellan2*/
	short G9;/*magellan2*/
	short G10;/*magellan2*/
	short G11;/*magellan2*/
	short G12;/*magellan2*/
	short G13;/*magellan2*/
	short G14;/*magellan2*/

	short S1;/*magellan2*/
	short S2;/*magellan2*/
	short S3;/*magellan2*/
	short S4;/*magellan2*/
	short S5;/*magellan2*/
	short S6;/*magellan2*/
	short S7;/*magellan2*/
	short S8;/*magellan2*/
	short S9;/*magellan2*/
	short S10;/*magellan2*/
	short S11;/*magellan2*/
	short S12;/*magellan2*/
	short S13;/*magellan2*/
	short S14;/*magellan2*/
	short enable;/*magellan2*/

} DRV_Tex_Neg_Curve;/*magellan2*/

typedef struct {
	short Period;/*magellan2*/
	short Gain;/*magellan2*/
	short Offset;/*magellan2*/
	short Ring_Gen_Gain;/*magellan2*/
	short Ring_Gen;/*magellan2*/
	short HV_Max;/*removed since Merlin3*/
	short Tex_Filter_Sel;/*removed since Merlin3*/
	short Edg_Filter_Sel;/*removed since Merlin3*/
	short sr_detail_v_edg_en;/*Merlin3*/
	short sr_detail_v_tex_en;/*Merlin3*/
	short sr_detail_edg_en;/*Merlin3*/
	short sr_detail_tex_en;/*Merlin3*/
	short pndu;/*Merlin4*/ // row31 col11

} DRV_SR_Control;/*magellan2*/

typedef struct {

	short C0;
	short C1;
	short C2;
	short C3;
	short C4;
	short C5;
	short C6;
	short C7;
	short C8;
	short C9;
	short C10;
	short en_edg;
	short en_tex;
	short C0H1;
	short C0H2;
	short C0H3;
	short C0H4;

} DRV_SR_H21;/*magellan2*/

typedef struct {
	short dirsm_rangh;/*Merlin*/
	short dirsm_rangv;/*Merlin*/
	short meandiff_rangeh;/*Merlin*/
	short meandiff_rangev;/*Merlin*/
	short meandiff_shiftbit;/*Merlin*/
	short meandiff_step;/*Merlin*/
	short meandiff_lowbd;/*Merlin*/
	short edge_method_sel;/*Merlin*/
	short edgeindex_step;/*Merlin*/
	short edgeindex_lowbd;/*Merlin*/
} DRV_Edge_SM;

typedef struct {
	short Gain_Pos;
	short Gain_Neg;
	short HV_Pos;
	short HV_Neg;
	short LV;
} DRV_Sub_Gain_Modify_PARA;

typedef struct {
	short sub_index_en;
	DRV_Sub_Gain_Modify_PARA EDG;
	DRV_Sub_Gain_Modify_PARA TEX;
	DRV_Sub_Gain_Modify_PARA V;
	DRV_Sub_Gain_Modify_PARA V_EDG;
} DRV_Sub_Gain_Modify;

typedef struct {
	short ise_en;
	short ise_step;
	short ise_scale;
	short ise_ub;
	short ise_h_st;
	short ise_h_end;
	short ise_v_st;
	short ise_v_end;
} DRV_SEGPK_ISE;

typedef struct {
	DRV_2D_Peak_AdaptCtrl TwoD_Peak_AdaptCtrl;
	DRV_Edge_Shp_t Edge_Shp;
	DRV_Text_Shp_t Texture_Shp;
	DRV_Vertical_Shp_t Vertical;
	DRV_Edge_EMF_Table Edge_EMF_Table;
	DRV_Text_EMF_Table Text_EMF_Table;
	DRV_Mk3_t MK3_Table;
	DRV_Edge_Coring Edge_Coring;

	DRV_V_Pos_Curve V_Pos_Curve;/*magellan2*/
	DRV_V_Neg_Curve V_Neg_Curve;/*magellan2*/
	DRV_Edge_Pos_Curve Edge_Pos_Curve;/*magellan2*/
	DRV_Edge_Neg_Curve Edge_Neg_Curve;/*magellan2*/
	DRV_Tex_Pos_Curve Tex_Pos_Curve;/*magellan2*/
	DRV_Tex_Neg_Curve Tex_Neg_Curve;/*magellan2*/
	DRV_After_Filter After_Filter;/*magellan2*/
	DRV_SR_Control SR_Control;/*magellan2*/
	DRV_SR_H21 TwoD_tex;/*magellan2*/
	DRV_SR_H21 TwoD_edg;/*magellan2*/
	DRV_SR_H21 SR_H9;/*magellan2*/
	DRV_SR_H21 SR_H13;/*magellan2*/
	DRV_SR_H21 SR_H21;/*magellan2*/
	DRV_SR_H21 SR_V9_1;/*magellan2*/
	DRV_SR_H21 SR_V9_2;/*magellan2*/
	DRV_SR_H21 SR_V9_3;/*magellan2*/
	DRV_SR_H21 SR_Ring_H11;/*magellan2*/
	DRV_SR_H21 SR_Ring_V9;/*magellan2*/
	//DRV_Input_Peaking Input_Peaking;
	DRV_Sub_Gain_Modify Sub_Gain_Modify;/*row040*/

	DRV_Edge_SM Edge_SM;/*Merlin*/
	DRV_SEGPK_ISE SEGPK_ISE;/*row043 Merlin2*/
	DRV_SR_H21 Texture_Flat_Shp;/*Merlin2*/
	VIP_SEGPK_RAMP Ramp_H;/*row047*/
	VIP_SEGPK_RAMP Ramp_V;/*row048*/
} DRV_Sharpness_Table;

typedef struct {
	short Peaking_Enable;
	short CLP_Enable;
	short EMF_Enable;
} DRV_Sub_2D_Peak_AdaptCtrl;

typedef struct {
	short C0;
	short C1;
	short C2;
	short C3;
	short C4;
	short C5;
	short Sh_B0;
	short Sh_B1;
	short Gain_Blr;
	short Gain_Pos;
	short Gain_Neg;
	short HV_Pos;
	short HV_Neg;
	short LV;
} DRV_Sub_Text_Shp_t;

typedef struct {
	short Seg2_Gain_Sel;
	short Seg1_Gain_Sel;
	short Seg0_Gain_Sel;
	short Seg2_Offset;
	short Seg1_Offset;
	short Seg0_Offset;
	short EMF_Shift;
	short Blur_Fac;
} DRV_Sub_Text_EMF_Table;

typedef struct {
	DRV_Sub_2D_Peak_AdaptCtrl Sub_TwoD_Peak_AdaptCtrl;
	DRV_Sub_Text_Shp_t Sub_Text_Shp_t;
	DRV_Sub_Text_EMF_Table Sub_Text_EMF_Table;
} DRV_Sub_Sharpness_Table;

typedef struct {
	unsigned char segpk_mode;
	unsigned char edgpk_en;
	unsigned char texpk_en;
	unsigned char enhance_mode;
	unsigned char vpk_en;
	unsigned char edg_lpf_shift;
	unsigned char tex_lpf_shift;
} DRV_Sharpness_Other_Ctrl;

typedef struct {
	short G_Pos_Gain;
	short G_Neg_Gain;
	short HV_POS_Gain;
	short HV_NEG_Gain;
	short LV_Gain;

} DRV_Shp_Level; /*ROW2*/


typedef struct {
	DRV_Shp_Level Edge_Level;
	DRV_Shp_Level Texture_Level;
	DRV_Shp_Level Vertical_Level;
	DRV_Shp_Level InputPking_Level;
	DRV_Shp_Level Vertical_Edge_Level;

} DRV_Sharpness_Level;

typedef struct {
	unsigned char Edge_LV2;
	unsigned char Texture_LV2;
	unsigned char Vertical_LV2;
} DRV_Sharpness_LV2;

typedef struct {
	short Level;
	short G_Pos_Min;
	short G_Pos_Max;
	short G_Neg_Min;
	short G_Neg_Max;
	short HV_POS_Min;
	short HV_POS_Max;
	short HV_NEG_Min;
	short HV_NEG_Max;
	short LV_min;
	short LV_max;
	short sobel_thm;
	short sobel_ths;
	short sobel_thm_lowang;
	short sobel_ths_lowang;
	short sobel_thm_hiang;
	short sobel_ths_hiang;

} DRV_Egsm_Table;

#if 0
typedef struct {
	short En;
	short C0;
	short C1;
	short C2;
	short C3;
	short C4;
	short C5;
	short C6;
	short Sh_B0;
	short Sh_B1;
	short Blur;
	short Gain_Neg;
	short Gain_Pos;
	short Lv;
	short Hv_Neg;
	short Hv_Pos;
	short Reserved16;
	short Reserved17;
	short Reserved18;
	short Reserved19;

} DRV_Multiband_PK;
#endif

typedef struct {
	unsigned char Emf_Model;
	short Lowbnd;
} DRV_EMFMk2;


typedef struct {
	unsigned char Segpk_Mode;
	unsigned char Sobel_Upbnd;
	unsigned char Zdiff_Upbnd;

} DRV_2Dpk_Seg;

typedef struct {
	unsigned char Tex_Upbnd;

} DRV_2Dpk_Tex_Detect;

#if 0
typedef struct {
	unsigned char Dlti_En;
	unsigned char Ovc_en;
	unsigned char Tn_blend_en;
	unsigned char Tn_blend_mode;
	unsigned char Ffd2_en;
	unsigned char D1_cp_shift;
	unsigned char rn_extend_en;
	unsigned char Dcp_th;
	unsigned char Pnth;
	unsigned char Maxlen;
	unsigned char Can_shift;
	unsigned char Data_sel;
	unsigned char Ffd1_th;
	unsigned char Ffd1_ratio;
	unsigned int dlti_ctrl_3;
	unsigned char Level;
	unsigned int curve1;
	unsigned int curve2;
	unsigned int curve3;
	unsigned int curve4;
	unsigned int curve5;


} DRV_Shp_Dlti;

#endif


typedef struct {
	/* new usm (jyyang_20140717)*/
	unsigned char Usm_En;
	unsigned char Gain_Curve_En;
	unsigned char Limit_Blend_En;
	unsigned char Max_Minus_Min_Mode;
	unsigned char Max_Minus_Min_Range;
	unsigned char Max_Min_Range;
	unsigned char Usm_Gain;
	unsigned char GainCurve_Thd0;
	unsigned char GainCurve_Thd1;
	unsigned char GainCurve_Thd2;
	unsigned char GainCurve_Step0;
	unsigned char GainCurve_Step1;
	unsigned char GainCurve_Gain0;
	unsigned char GainCurve_Gain1;
	unsigned char LimitBlend_Thd0;
	unsigned char LimitBlend_Thd1;
	unsigned char LimitBlend_Step;
	unsigned char LimitBlend_Wt0;
	unsigned char LimitBlend_Wt1;

} DRV_Un_Shp_Mask;

typedef struct {
	short Osd_shpnr_en;
	short peaking_en;
	short EMF_en;
	short EMF_Range;
	short Seg0_Offset;
	short Seg1_Offset;
	short Seg2_Offset;
	short Seg0_Gain_Sel;
	short Seg1_Gain_Sel;
	short Seg2_Gain_Sel;
	short EMF_fixextent;
	short EMF_Shift;
	short C0;
	short C1;
	short C2;
	short Gain_Blr;
	short Gain_Pos;
	short Gain_Neg;
	short HV_Pos;
	short HV_Neg;
	short LV;

} DRV_OSD_sharp;
#if 0	// move to VIP table
typedef struct {

	 short Dlti_en;
	 short Reserved2;
	 short Reserved3;
	 short Reserved4;
	 short Reserved5;
	 short Reserved6;
	 short Reserved7;
	 short Reserved8;
	 short Reserved9;
	 short Reserved10;
	 short Reserved11;
	 short Reserved12;
	 short Reserved13;
	 short Reserved14;
	 short Reserved15;
	 short Reserved16;
	 short Reserved17;
	 short Reserved18;
	 short Reserved19;
	 short Reserved20;

} DRV_DLTI_Control;

typedef struct {

	 short dlti_h_en;
	 short Ovc_en;
	 short Data_sel;
	 short Can_shift;
	 short pnth;

	 short maxlen;
	 short Ffd1_th;
	 short Ffd1_ratio;
	 short ovc_extend;
	 short ffd0_start;

	 short Reserved11;
	 short Reserved12;
	 short Reserved13;
	 short Reserved14;
	 short Reserved15;
	 short Reserved16;
	 short Reserved17;
	 short Reserved18;
	 short Reserved19;
	 short Reserved20;

} DRV_DLTI_H_1;

typedef struct {

	 short tn_blend_en;
	 short tn_blend_mode;
	 short Reserved3;
	 short Reserved4;
	 short D1_CP_shift;
	 short DCP_th;
	 short rn_extend_en;
	 short Reserved8;
	 short ffd2_en;
	 short Ffd2_range2L;
	 short Ffd2_range2R;
	 short Ffd2_ratio;
	 short flat_score_en;
	 short flat_score_thl;
	 short flat_s_range;
	 short Reserved16;
	 short Reserved17;
	 short Reserved18;
	 short Reserved19;
	 short Reserved20;

} DRV_DLTI_H_2;

typedef struct {

	 short Tnoff0;
	 short Tnoff1;
	 short Tnoff2;
	 short Tnoff3;
	 short Tnoff4;
	 short Tnoff5;
	 short Tnoff6;
	 short Tnoff7;
	 short Tnoff8;
	 short Tnoff9;
	 short Tnoff10;
	 short Tnoff11;
	 short Tnoff12;
	 short Tnoff13;
	 short Tnoff14;
	 short Reserved16;
	 short Reserved17;
	 short Reserved18;
	 short Reserved19;
	 short Reserved20;

} DRV_DLTI_H_Tnoff;

typedef struct {

	 short Tngain0;
	 short Tngain1;
	 short Tngain2;
	 short Tngain3;
	 short Tngain4;
	 short Tngain5;
	 short Tngain6;
	 short Tngain7;
	 short Tngain8;
	 short Tngain9;
	 short Tngain10;
	 short Tngain11;
	 short Tngain12;
	 short Tngain13;
	 short Tngain14;
	 short Reserved16;
	 short Reserved17;
	 short Reserved18;
	 short Reserved19;
	 short Reserved20;

} DRV_DLTI_H_Tngain;

typedef struct {

	 short over_enhance;
	 short gain_pos;
	 short gain_neg;
	 short offset_pos;
	 short offset_neg;
	 short Reserved6;
	 short Reserved7;
	 short Reserved8;
	 short Reserved9;
	 short Reserved10;
	 short Reserved11;
	 short Reserved12;
	 short Reserved13;
	 short Reserved14;
	 short Reserved15;
	 short Reserved16;
	 short Reserved17;
	 short Reserved18;
	 short Reserved19;
	 short Reserved20;

} DRV_DLTI_H_OverEnhance;

typedef struct {

	 short dlti_v_en;
	 short ovc_v_en;
	 short lpf_sel;
	 short can_shift_v;
	 short pnth_v;

	 short maxlen_v;
	 short ffd1_th;
	 short ffd1_ratio;
	 short ovc_v_extend;
	 short v_ffd0_start;

	 short Reserved11;
	 short Reserved12;
	 short Reserved13;
	 short Reserved14;
	 short Reserved15;
	 short Reserved16;
	 short Reserved17;
	 short Reserved18;
	 short Reserved19;
	 short Reserved20;

} DRV_DLTI_V_1;

typedef struct {

	 short Tnoff0;
	 short Tnoff1;
	 short Tnoff2;
	 short Tnoff3;
	 short Tnoff4;
	 short Tnoff5;
	 short Tnoff6;
	 short Reserved8;
	 short Reserved9;
	 short Reserved10;
	 short Reserved11;
	 short Reserved12;
	 short Reserved13;
	 short Reserved14;
	 short Reserved15;
	 short Reserved16;
	 short Reserved17;
	 short Reserved18;
	 short Reserved19;
	 short Reserved20;

} DRV_DLTI_V_Tnoff;

typedef struct {

	 short Tngain0;
	 short Tngain1;
	 short Tngain2;
	 short Tngain3;
	 short Tngain4;
	 short Tngain5;
	 short Tngain6;
	 short Reserved8;
	 short Reserved9;
	 short Reserved10;
	 short Reserved11;
	 short Reserved12;
	 short Reserved13;
	 short Reserved14;
	 short Reserved15;
	 short Reserved16;
	 short Reserved17;
	 short Reserved18;
	 short Reserved19;
	 short Reserved20;

} DRV_DLTI_V_Tngain;

typedef struct {

	 short over_enhance_v;
	 short gain_pos;
	 short gain_neg;
	 short offset_pos;
	 short offset_neg;
	 short Reserved6;
	 short Reserved7;
	 short Reserved8;
	 short Reserved9;
	 short Reserved10;
	 short Reserved11;
	 short Reserved12;
	 short Reserved13;
	 short Reserved14;
	 short Reserved15;
	 short Reserved16;
	 short Reserved17;
	 short Reserved18;
	 short Reserved19;
	 short Reserved20;

} DRV_DLTI_V_OverEnhance;

typedef struct{
	DRV_DLTI_Control DLTI_Control;
	DRV_DLTI_H_1 DLTI_H_1;
	DRV_DLTI_H_2 DLTI_H_2;
	DRV_DLTI_H_Tnoff DLTI_H_Tnoff;
	DRV_DLTI_H_Tngain DLTI_H_Tngain;
	DRV_DLTI_H_OverEnhance DLTI_H_OverEnhance;
	DRV_DLTI_V_1 DLTI_V_1;
	DRV_DLTI_V_Tnoff DLTI_V_Tnoff;
	DRV_DLTI_V_Tngain DLTI_V_Tngain;
	DRV_DLTI_V_OverEnhance DLTI_V_OverEnhance;
} DRV_D_DLTI_Table;
#endif

/*	extern unsigned int Peaking_RATIO;*/
/*input peaking*/

/*sharpness*/
void drvif_color_sharpness_init(unsigned char display);
void drvif_color_sharpness_adjust(unsigned char display, unsigned char level);/*level:0-100*/

void drvif_color_2dpk_init(unsigned char display, unsigned char level); /*After Darwin new function, 20100505*/


void drvif_color_2dpk_edge_Coef_apply(unsigned char display, unsigned char level);	      /*After Darwin new function, 20100505*/

void drvif_color_2dpk_Vertical_Coef_apply(unsigned char display, unsigned char level); /*After Darwin new function, 20100505*/


/*sharpness*/
void drvif_color_customsharpness_init(unsigned char display);
void drvif_color_customsharpness_adjust(unsigned char display, unsigned char level);/*level:0-100*/

unsigned char drvif_color_regDdomain_MBPKTable(short *ptr);
unsigned char drvif_color_regTwoD_peaking_AdaptiveCtrl(short *ptr);
unsigned char drvif_color_regCDSTable(void *ptr);

void drvif_color_set_cds_table(VIP_CDS_Table *ptr);

/*signed char drvif_color_check_source(unsigned char display);*/

void drvif_color_Sharpness_Vertical_Gain_adjust(unsigned char display, unsigned char level);
void drvif_color_edgesmooth_postshp_adjust(unsigned char display, unsigned char level);


void drvif_color_emfmk2(DRV_EMFMk2 *ptr);

/*============ New function for shp 2D peaking ============*/
void drvif_color_2dpk_seg(DRV_2Dpk_Seg *ptr);
void drvif_color_2dpk_tex_detect(DRV_2Dpk_Tex_Detect *ptr);

void drvif_color_TwoD_peaking_AdaptiveCtrl(unsigned char display, unsigned char level);
void drvif_color_2dpk_MKIII_init(unsigned char display, unsigned char level);

/*void drvif_color_shp_dlti(DRV_Shp_Dlti *ptr);*/

void drvif_color_set_Sharpness_level(DRV_Sharpness_Level *ptr);
void drvif_color_get_Sharpness_level(DRV_Sharpness_Level *ptr);

void drvif_color_Set_Sharpness_Table(DRV_Sharpness_Table *ptr);
void drvif_color_Set_D_DLTI_Table(VIP_D_DLTI_Table *ptr);
void drvif_color_Get_D_DLTI_Table(VIP_D_DLTI_Table *ptr);

void drvif_color_set_Vertical_Peaking_Enable(unsigned char bEnable);

void drvif_color_Set_MBPK_Table(VIP_MBPK_Table *ptr);
void drvif_color_Get_MBPK_Table(VIP_MBPK_Table *ptr);
void drvif_color_Set_MBSU_Table(VIP_MBPK_Table *ptr);
void drvif_color_Get_MBSU_Table(VIP_MBPK_Table *ptr);

void drvif_color_OSD_Sharpness(DRV_OSD_sharp *ptr);

void drvif_color_Sharpness_Enable(unsigned char bEnable);

void drvif_color_Get_Sharpness_Table(DRV_Sharpness_Table *ptr);
void drvif_color_Set_Sharpness_Other_Table(DRV_Sharpness_Other_Ctrl *ptr);
void drvif_color_Get_Sharpness_Other_Table(DRV_Sharpness_Other_Ctrl *ptr);

void drvif_color_Get_Sharpness_lv2(DRV_Sharpness_LV2 *ptr);
void driver_color_setSR(unsigned char onOff);
void drvif_color_setSR_Ring_Gen_Gain(unsigned char gain);
void drvif_color_setSR_levle_Tv006(unsigned char level);

#if defined(CONFIG_RTK_AI_DRV)
void drvif_color_set_cds_table_AI(VIP_CDS_Table *ptr, unsigned char cm0, unsigned char cm1, unsigned char cm2, unsigned char cm3);
#endif
#ifdef __cplusplus
}
#endif

#endif /* __PEAKING_H__*/

