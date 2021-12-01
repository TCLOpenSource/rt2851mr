#ifndef _RIMCTRL_DEF_H_
#define _RIMCTRL_DEF_H_

#define _Rim_Hor_Bin_        16
#define _ME_BLK_SIZE_SHIFT_  2

typedef enum
{
	_RIM_TOP,  // Rim list in this order corresponding to BBD read-back order.
	_RIM_BOT,
	_RIM_RHT,
	_RIM_LFT,
	_RIM_NUM,
}_PQL_RIM_TYPE;
 
typedef enum
{
    _RIM_HSIZE,
	_RIM_VSIZE,	
}_PQL_RIM_SIZE;
 
typedef struct  
{
	UBYTE  u1_RimCtrl_en;
	UINT16 u12_RimDiffTh;
	UBYTE  u8_RimBiggerTh;
	UBYTE  u8_RimSmallerTh;
	UBYTE  u8_RimSmallerSCTh;
	UBYTE  u8_RimIIRAlpha;
	UBYTE  u5_RimLRSmallShift;
//	UBYTE  u1_RimAbNoramlProcEn;
//	UBYTE  u1_RimAllBlackProcEn;
//	UBYTE  u8_RimAllBlackThr;

//	UINT16 u12_Logo_Rim_Top_thr;
//	UINT32 u8_Logo_Rim_unbalace_holdfrm;

	UBYTE  u8_mc_ptRim_shrink;
	UBYTE  u8_me_pixRim_shrink;
	UBYTE  u8_lbme_pixRim_shrink;
	UBYTE  u8_lbme_pixRim_comp;

	UBYTE  u8_LogoBlkRimHOffset;
	UBYTE  u8_LogoBlkRimVOffset;
	UBYTE  u8_LogoPixRimHOffset;
	UBYTE  u8_LogoPixRimVOffset;
}_PARAM_RimCtrl;

typedef struct  
{
	UINT16 u12_out_resolution[_RIM_NUM];   // rim resolution
	UINT16 u12_Rim_Cur[_RIM_NUM];	       // current rim  0:top 1:bottom 2:right 3:left 
	UINT16 u12_Rim_Pre[_RIM_NUM];          // previous rim
	UINT16 u12_Rim_Result[_RIM_NUM];       // rim result
	UINT16 u12_Rim_Pre_Det[_RIM_NUM];          // rim result

	SCHAR  s8_BiggerCnt[_RIM_NUM];
	SCHAR  s8_SmallerCnt[_RIM_NUM];

	UBYTE  u1_RimChange;
	UBYTE  u1_RimCompflag;
	UINT32 u32_rimRatio;
	UBYTE  u4_outResolution_pre;

	UBYTE  u1_RimControl_pre;
	UBYTE  u1_Resolution_change;

	//ME1
	UBYTE  u8_me1_pixH_sft_bit, u8_me1_pixV_sft_bit;
	UBYTE  u8_me1_blkH_sft_bit, u8_me1_blkV_sft_bit;

	UINT16 u12_me1_vbuf_blk_rim[_RIM_NUM];
	UINT16 u12_me1_vbuf_pix_rim[_RIM_NUM];
	UINT16 u12_me1_lbme_rim[_RIM_NUM];
	UINT16 u12_me1_vbuf_meander_blk_rim[2];
	UINT16 u12_me1_vbuf_meander_pix_rim[2];

	// ME2
	UBYTE  u8_me2_pixH_sft_bit, u8_me2_pixV_sft_bit;
	UBYTE  u8_me2_BlkH_sft_bit, u8_me2_BlkV_sft_bit;

	// Dehalo
	UBYTE  u8_dh_BlkH_sft_bit, u8_dh_BlkV_sft_bit;
	
	UINT16 u12_me2_vbuf_pfv_blk_rim[_RIM_NUM];
	UINT16 u12_me2_vbuf_ph_blk_rim[_RIM_NUM];
	UINT16 u12_me2_vbuf_pix_rim[_RIM_NUM];
	UINT16 u12_me2_lbme_rim[_RIM_NUM];

	//Logo
	UBYTE  u8_logo_pixH_sft_bit, u8_logo_pixV_sft_bit;
	UBYTE  u8_logo_blkH_sft_bit, u8_logo_blkV_sft_bit;


	UBYTE  u8_LogoRim_Blk[_RIM_NUM]; //
	UINT16 u12_LogoRim_Pxl[_RIM_NUM]; // 960 x 540

	UBYTE  u1_LogoRim_unbalace;
	UBYTE  u1_RimTwoSide_balancing;

	//MC
	UINT16 u12_mc_rim0[_RIM_NUM];  // pt rim, need shrink
	UINT16 u12_mc_rim1[_RIM_NUM];  // self rim.

	//IPME
	UINT16 u12_ipme_rim[_RIM_NUM]; // 960 x 540

	// Dehalo
	UINT16 u9_dh_blk_rim[_RIM_NUM];
	UINT16 u9_dh_blk_oftrim[_RIM_NUM];	// offset rim
	
	// 5Region&12Region;
	UINT16 u12_5Rgn1_v0;
	UINT16 u12_5Rgn1_v1;
	UINT16 u12_5Rgn2_v0;
	UINT16 u12_5Rgn2_v1;
	UINT16 u12_5Rgn3_h0;
	UINT16 u12_5Rgn3_h1;
	UINT16 u12_5Rgn4_h0;
	UINT16 u12_5Rgn4_h1;

	UINT16 u12_12Rgn_v0;
	UINT16 u12_12Rgn_v1;
	UINT16 u12_12Rgn_v2;
	UINT16 u12_12Rgn_v3;
	UINT16 u12_12Rgn_h0;
	UINT16 u12_12Rgn_h1;
	UINT16 u12_12Rgn_h2;
	UINT16 u12_12Rgn_h3;
	UINT16 u12_12Rgn_h4;	
}_OUTPUT_RimCtrl;

VOID RimCtrl_Init(_OUTPUT_RimCtrl *pOutput);
VOID RimDet_by_KMC_YUV_Meter(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput);
//UINT32  RimDet_Check_Right(UINT32 H_line_search_position);
UINT32  RimDet_Check_Right(UINT32 H_line_search_position,UINT16 v_line_total);
VOID RimCtrl_Proc(const _PARAM_RimCtrl *pParam, _OUTPUT_RimCtrl *pOutput);

DEBUGMODULE_BEGIN(_PARAM_RimCtrl,_OUTPUT_RimCtrl)
	ADD_PARAM_DES(UBYTE,  u1_RimCtrl_en,   1, "")

	ADD_DUMMY_PARAM()
	ADD_PARAM_DES(UINT16, u12_RimDiffTh,   256,  "u12.0")
	ADD_PARAM_DES(UBYTE,  u8_RimBiggerTh,    1,   "u8.0")
	ADD_PARAM_DES(UBYTE,  u8_RimSmallerTh,   3,   "u8.0")
	ADD_PARAM_DES(UBYTE,  u8_RimSmallerSCTh,   3,   "u8.0")
	ADD_PARAM_DES(UBYTE,  u8_RimIIRAlpha,  200, "u8.0")
	ADD_PARAM_DES(UBYTE,  u5_RimLRSmallShift,  1, "u5.0")

	ADD_DUMMY_PARAM()
	ADD_PARAM_DES(UBYTE,  u8_mc_ptRim_shrink,   4, "")
    ADD_PARAM_DES(UBYTE,  u8_me_pixRim_shrink,  0, "")

	ADD_DUMMY_PARAM()
	ADD_PARAM_DES(UBYTE,  u8_LogoBlkRimHOffset,  2, "")
	ADD_PARAM_DES(UBYTE,  u8_LogoBlkRimVOffset,  2, "")
	ADD_PARAM_DES(UBYTE,  u8_LogoPixRimHOffset,  8, "")
	ADD_PARAM_DES(UBYTE,  u8_LogoPixRimVOffset,  8, "")

	//////////////////////////////////////////////////////////////////////////
	ADD_OUTPUT_ARRAY(UINT16, u12_Rim_Cur,    4)
	ADD_OUTPUT_ARRAY(UINT16, u12_Rim_Pre,    4)
	ADD_OUTPUT_ARRAY(UINT16, u12_Rim_Result, 4)

	ADD_DUMMY_OUTPUT()
	ADD_OUTPUT_ARRAY(UBYTE,  u8_LogoRim_Blk, 4)
	ADD_OUTPUT_ARRAY(UINT16, u12_LogoRim_Pxl,4)

	ADD_DUMMY_OUTPUT()
	ADD_OUTPUT_ARRAY(UINT16, u12_out_resolution, 4)

	ADD_DUMMY_OUTPUT()
	ADD_OUTPUT_ARRAY(SCHAR,  s8_BiggerCnt,   4)
	ADD_OUTPUT_ARRAY(SCHAR,  s8_SmallerCnt,  4)
	ADD_OUTPUT(UBYTE,   u1_RimChange)
	ADD_OUTPUT(UBYTE,   u1_RimCompflag)
	ADD_OUTPUT(UINT32,  u32_rimRatio)
	ADD_OUTPUT(UBYTE,   u4_outResolution_pre)
DEBUGMODULE_END

#endif
