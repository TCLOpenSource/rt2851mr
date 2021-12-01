#ifndef _FRC_GLB_CONTEXT_DEF_H
#define _FRC_GLB_CONTEXT_DEF_H

#define IDC_Total_Frm_cnt		26

typedef struct  
{
	UBYTE  me_wrt_oft;
	UBYTE  me1_rd_i_oft;
	UBYTE  me1_rd_p_oft;
	UBYTE  me2_rd_i_oft;
	UBYTE  me2_rd_p_oft;
	UBYTE  mc_wrt_oft;
	UBYTE  mc_rd_i_oft;
	UBYTE  mc_rd_p_oft;
	UBYTE  me_phase;
	UBYTE  mc_phase;
}IDX_DYNAMIC_CTRL_OFFSET_TABLE;

typedef enum  
{
	_CASE_NULL, // 0
	_CASE_22_TO_32,
	_CASE_32_TO_22,
	_CASE_11_TO_22_TYPE1,
	_CASE_11_TO_22_TYPE2,
	_CASE_22_TO_11, // 5
	_CASE_11_TO_32_TYPE1,
	_CASE_11_TO_32_TYPE5,
	_CASE_32_TO_11_TYPE1,
	_CASE_32_TO_11_TYPE2,
	_CASE_32_TO_11_TYPE4, // 10
	_CASE_11_TO_2224_TYPE1,
	_CASE_11_TO_2224_TYPE2,
	_CASE_11_TO_2224_TYPE3,
	_CASE_11_TO_2224_TYPE4,
	_CASE_11_TO_2224_TYPE5, // 15
	_CASE_2224_TO_11_TYPE1,
	_CASE_2224_TO_11_TYPE3,
	_CASE_2224_TO_11_TYPE5,
	_CASE_2224_TO_11_TYPE7,
	_CASE_2224_TO_11_TYPE8, // 20
	_CASE_2224_TO_11_TYPE9,
	_CASE_22_TYPE1_TO_2224_TYPE6,
	_CASE_2224_TYPE1_TO_22_TYPE0,
	_CASE_32_TYPE4_TO_2224_TYPE1,
	_CASE_2224_TYPE8_TO_32_TYPE3,
	_CASE_22_TO_MIX,
	_CASE_32_TO_MIX,
	_CASE_NUM,
}IDX_DYNAMIC_CTRL_CASE_ID;

typedef enum{
	_CAD_VIDEO,        //0
	_CAD_22,           //1
	_CAD_32,           //2
	_CAD_32322,        //3
	_CAD_334,          //4
	_CAD_22224,        //5
	_CAD_2224,         //6
	_CAD_3223,         //7
	_CAD_55,           //8
	_CAD_66,           //9
	_CAD_44,           //0xA
	_CAD_1112,         //0xB
	_CAD_11112,        //0xC
	_CAD_122,          //0xD
	_CAD_11i23,        //0xE
	_CAD_321,        //0xF
	_FRC_CADENCE_NUM_,
}FRC_CADENCE_ID;

typedef struct
{
	UINT32 cad_seq;
	UINT32 cad_usableFlag;
	UBYTE  cad_inLen;
	UBYTE  cad_outLen;
	UBYTE  cad_isLRin;

	UINT32 cad_check;
	UBYTE  cad_len;
	UBYTE  cad_film_resync_phId;

	UBYTE  cad_id;
	UBYTE  u1_isLowFrameRate;
	
} FRC_CADENCE;

extern FRC_CADENCE  frc_cadTable[_FRC_CADENCE_NUM_];

// void  cadenceTable_int();

void  cadence_copy_change(FRC_CADENCE_ID cpy_cadId, UBYTE isLR, FRC_CADENCE *pOut_cadInfo);
UBYTE cadence_seqFlag(FRC_CADENCE cadInfo, UBYTE filmPh);
UBYTE cadence_usableFlag(FRC_CADENCE cadInfo, UBYTE filmPh);
UBYTE cadence_prePhase(FRC_CADENCE cadInfo, UBYTE filmPh, UBYTE k);
UBYTE cadence_nxtPhase(FRC_CADENCE cadInfo, UBYTE filmPh, UBYTE k);

#endif

