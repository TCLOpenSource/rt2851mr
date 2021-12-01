#include "memc_isr/PQL/PQLPlatformDefs.h"
#include "memc_isr/PQL/PQLContext.h"
#include "memc_isr/PQL/PQLGlobalDefs.h"
#include "memc_isr/PQL/ME_VstCtrl.h"

#define ME_VST_DEBUG_PRINT 0

// interal histogram info
static UINT16 u12_me1_statis_bv_x[SEC_NUM][X_NUM]; // neg, zero, pos
static UINT16 u12_me1_statis_bv_y[SEC_NUM][Y_NUM]; // -8~+8
static UINT32 u32_rgnTotalBlks[4] ;   //  4 section  default 60 *135
static UINT32 u32_rgnTotalStatBlks_x[4] ; // Statistic one section total mvx
static UINT32 u32_rgnTotalStatBlks_y[4] ; // Statistic one section total mvy

VOID ME_Vst_ReadHistogram(VOID);
VOID ME_Vst_Statistic(VOID);
VOID ME_Vst_Detection(_OUTPUT_ME_VST_CTRL *pOutput);
VOID ME_Vst_blackBG_Detection(_OUTPUT_ME_VST_CTRL *pOutput);

VOID ME_Vst_Init(_OUTPUT_ME_VST_CTRL *pOutput)
{
	pOutput->u1_detect = 0;
	pOutput->u1_detect_blackBG_VST_trure= 0;
	pOutput->u8_boundarySta = 0;
	pOutput->u8_boundaryEnd = 0;
}
VOID ME_Vst_Proc(const _PARAM_ME_VST_CTRL *pParam, _OUTPUT_ME_VST_CTRL *pOutput)
{
	ME_Vst_ReadHistogram();
	ME_Vst_Statistic();
	ME_Vst_blackBG_Detection(pOutput);
	ME_Vst_Detection(pOutput);
}

VOID ME_Vst_ReadHistogram()
{
	UINT32 u32_i = 0, u32_j = 0;
	UINT32 u32_RB_val1 = 0, u32_RB_val2 = 0, u32_RB_val3 = 0;
	static UINT32 u32_print_counter = 0;

	u32_print_counter++;
	if(u32_print_counter >= 60)
		u32_print_counter = 0;

	ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_done_ADDR, 0, 31, &u32_RB_val1);

	// update done
	if( ((u32_RB_val1 >> 24) & 0x1) !=0 )
	{
		// reset histogram
		for(u32_i=0; u32_i<4; u32_i++)
		{
			for(u32_j=0; u32_j<3; u32_j++)
			{
				u12_me1_statis_bv_x[u32_i][u32_j] = 0;
			}
			for(u32_j=0; u32_j<17; u32_j++)
			{
				u12_me1_statis_bv_y[u32_i][u32_j] = 0;
			}
		}

		{
			// section 0 x negative
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_n_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_n_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_n_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_n_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_n_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_n_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_n_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_n_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_n_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_x[SEC0][X_NEG] =  (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 x zero
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_z_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_z_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_z_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_z_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_z_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_z_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_z_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_z_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_z_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_x[SEC0][X_ZER] =  (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 x positive
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_p_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_p_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_p_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_p_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_p_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_p_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_p_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_p_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_x_p_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_x[SEC0][X_POS] =  (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 x negative
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_n_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_n_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_n_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_n_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_n_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_n_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_n_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_n_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_n_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_x[SEC1][X_NEG] =  (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 x zero
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_z_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_z_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_z_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_z_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_z_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_z_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_z_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_z_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_z_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_x[SEC1][X_ZER] =  (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 x positive
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_p_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_p_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_p_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_p_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_p_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_p_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_p_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_p_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_x_p_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_x[SEC1][X_POS] =  (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 x negative
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_n_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_n_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_n_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_n_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_n_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_n_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_n_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_n_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_n_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_x[SEC2][X_NEG] =  (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 x zero
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_z_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_z_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_z_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_z_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_z_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_z_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_z_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_z_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_z_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_x[SEC2][X_ZER] =  (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 x positive
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_p_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_p_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_p_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_p_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_p_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_p_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_p_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_p_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_p_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_x[SEC2][X_POS] =  (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 x negative
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_n_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_n_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_n_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_n_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_n_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_n_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_n_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_n_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_n_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_x[SEC3][X_NEG] =  (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 x zero
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_z_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_z_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_z_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_z_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_z_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_z_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_z_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_z_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_x_z_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_x[SEC3][X_ZER] =  (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 x positive
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_p_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_p_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_p_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_p_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_p_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_p_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_p_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_p_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_x_p_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_x[SEC3][X_POS] =  (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y negative 8
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n8_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n8_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n8_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n8_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n8_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n8_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n8_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n8_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n8_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_NEG_8] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y negative 7
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n7_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n7_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n7_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n7_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n7_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n7_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n7_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n7_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n7_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_NEG_7] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y negative 6
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n6_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n6_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n6_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n6_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n6_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n6_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n6_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n6_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n6_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_NEG_6] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y negative 5
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n5_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n5_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n5_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n5_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n5_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n5_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n5_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n5_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n5_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_NEG_5] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y negative 4
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n4_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n4_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n4_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n4_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n4_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n4_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n4_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n4_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n4_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_NEG_4] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y negative 3
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n3_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n3_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n3_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n3_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n3_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n3_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n3_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n3_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n3_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_NEG_3] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y negative 2
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n2_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n2_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n2_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n2_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n2_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n2_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n2_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n2_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n2_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_NEG_2] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y negative 1
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n1_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n1_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n1_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n1_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n1_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n1_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n1_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n1_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_n1_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_NEG_1] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y zero
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_z_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_z_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_z_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_z_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_z_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_z_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_z_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_z_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_z_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_ZER_0] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y positive 1
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p1_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p1_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p1_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p1_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p1_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p1_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p1_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p1_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p1_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_POS_1] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y positive 2
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p2_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p2_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p2_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p2_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p2_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p2_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p2_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p2_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p2_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_POS_2] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y positive 3
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p3_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p3_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p3_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p3_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p3_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p3_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p3_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p3_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p3_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_POS_3] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y positive 4
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p4_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p4_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p4_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p4_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p4_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p4_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p4_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p4_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p4_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_POS_4] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y positive 5
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p5_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p5_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p5_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p5_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p5_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p5_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p5_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p5_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p5_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_POS_5] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y positive 6
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p6_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p6_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p6_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p6_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p6_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p6_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p6_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p6_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p6_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_POS_6] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y positive 7
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p7_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p7_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p7_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p7_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p7_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p7_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p7_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p7_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p7_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_POS_7] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 0 y positive 8
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p8_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p8_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p8_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p8_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p8_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p8_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p8_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p8_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec0_y_p8_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC0][Y_POS_8] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y negative 8
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n8_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n8_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n8_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n8_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n8_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n8_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n8_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n8_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n8_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_NEG_8] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y negative 7
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n7_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n7_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n7_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n7_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n7_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n7_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n7_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n7_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n7_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_NEG_7] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y negative 6
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n6_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n6_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n6_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n6_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n6_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n6_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n6_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n6_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n6_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_NEG_6] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y negative 5
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n5_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n5_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n5_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n5_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n5_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n5_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n5_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n5_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n5_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_NEG_5] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y negative 4
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n4_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n4_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n4_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n4_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n4_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n4_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n4_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n4_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n4_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_NEG_4] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y negative 3
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n3_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n3_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n3_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n3_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n3_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n3_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n3_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n3_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n3_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_NEG_3] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y negative 2
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n2_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n2_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n2_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n2_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n2_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n2_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n2_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n2_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n2_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_NEG_2] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y negative 1
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n1_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n1_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n1_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n1_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n1_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n1_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n1_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n1_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_n1_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_NEG_1] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y zero
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_z_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_z_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_z_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_z_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_z_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_z_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_z_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_z_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_z_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_ZER_0] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y positive 1
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p1_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p1_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p1_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p1_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p1_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p1_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p1_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p1_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p1_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_POS_1] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y positive 2
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p2_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p2_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p2_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p2_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p2_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p2_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p2_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p2_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p2_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_POS_2] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y positive 3
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p3_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p3_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p3_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p3_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p3_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p3_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p3_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p3_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p3_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_POS_3] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y positive 4
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p4_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p4_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p4_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p4_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p4_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p4_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p4_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p4_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p4_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_POS_4] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y positive 5
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p5_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p5_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p5_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p5_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p5_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p5_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p5_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p5_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p5_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_POS_5] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y positive 6
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p6_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p6_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p6_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p6_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p6_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p6_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p6_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p6_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p6_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_POS_6] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y positive 7
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p7_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p7_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p7_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p7_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p7_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p7_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p7_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p7_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p7_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_POS_7] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 1 y positive 8
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p8_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p8_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p8_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p8_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p8_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p8_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p8_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p8_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec1_y_p8_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC1][Y_POS_8] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y negative 8
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n8_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n8_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n8_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n8_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n8_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n8_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n8_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n8_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n8_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_NEG_8] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y negative 7
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n7_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n7_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n7_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n7_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n7_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n7_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n7_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n7_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n7_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_NEG_7] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y negative 6
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n6_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n6_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n6_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n6_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n6_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n6_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n6_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n6_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n6_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_NEG_6] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y negative 5
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n5_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n5_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n5_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n5_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n5_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n5_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n5_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n5_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n5_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_NEG_5] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y negative 4
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n4_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n4_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n4_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n4_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n4_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n4_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n4_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n4_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n4_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_NEG_4] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y negative 3
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n3_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n3_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n3_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n3_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n3_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n3_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n3_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n3_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n3_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_NEG_3] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y negative 2
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n2_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n2_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n2_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n2_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n2_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n2_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n2_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n2_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n2_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_NEG_2] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y negative 1
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n1_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n1_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n1_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n1_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n1_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n1_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n1_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n1_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_n1_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_NEG_1] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y zero
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_z_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_z_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_z_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_z_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_z_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_z_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_z_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_z_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_z_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_ZER_0] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y positive 1
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p1_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p1_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p1_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p1_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p1_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p1_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p1_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p1_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p1_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_POS_1] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y positive 2
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p2_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p2_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p2_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p2_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p2_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p2_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p2_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p2_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p2_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_POS_2] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y positive 3
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p3_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p3_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p3_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p3_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p3_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p3_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p3_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p3_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p3_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_POS_3] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y positive 4
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p4_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p4_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p4_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p4_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p4_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p4_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p4_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p4_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p4_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_POS_4] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y positive 5
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p5_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p5_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p5_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p5_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p5_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p5_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p5_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p5_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p5_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_POS_5] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y positive 6
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p6_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p6_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p6_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p6_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p6_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p6_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p6_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p6_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p6_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_POS_6] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y positive 7
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p7_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p7_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p7_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p7_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p7_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p7_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p7_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p7_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p7_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_POS_7] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 2 y positive 8
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p8_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p8_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p8_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p8_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p8_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p8_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p8_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p8_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec2_y_p8_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC2][Y_POS_8] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y negative 8
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n8_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n8_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n8_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n8_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n8_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n8_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n8_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n8_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n8_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_NEG_8] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y negative 7
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n7_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n7_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n7_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n7_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n7_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n7_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n7_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n7_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n7_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_NEG_7] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y negative 6
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n6_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n6_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n6_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n6_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n6_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n6_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n6_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n6_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n6_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_NEG_6] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y negative 5
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n5_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n5_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n5_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n5_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n5_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n5_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n5_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n5_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n5_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_NEG_5] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y negative 4
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n4_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n4_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n4_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n4_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n4_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n4_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n4_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n4_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n4_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_NEG_4] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y negative 3
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n3_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n3_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n3_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n3_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n3_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n3_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n3_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n3_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n3_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_NEG_3] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y negative 2
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n2_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n2_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n2_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n2_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n2_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n2_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n2_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n2_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n2_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_NEG_2] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y negative 1
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n1_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n1_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n1_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n1_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n1_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n1_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n1_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n1_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_n1_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_NEG_1] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y zero
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_z_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_z_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_z_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_z_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_z_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_z_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_z_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_z_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_z_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_ZER_0] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y positive 1
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p1_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p1_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p1_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p1_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p1_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p1_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p1_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p1_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p1_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_POS_1] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y positive 2
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p2_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p2_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p2_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p2_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p2_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p2_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p2_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p2_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p2_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_POS_2] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y positive 3
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p3_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p3_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p3_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p3_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p3_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p3_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p3_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p3_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p3_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_POS_3] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y positive 4
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p4_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p4_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p4_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p4_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p4_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p4_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p4_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p4_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p4_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_POS_4] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y positive 5
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p5_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p5_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p5_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p5_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p5_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p5_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p5_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p5_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p5_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_POS_5] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y positive 6
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p6_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p6_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p6_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p6_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p6_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p6_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p6_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p6_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p6_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_POS_6] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y positive 7
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p7_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p7_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p7_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p7_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p7_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p7_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p7_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p7_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p7_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_POS_7] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}

		{
			// section 3 y positive 8
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p8_b0_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p8_b0_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p8_b0_BITEND, &u32_RB_val1);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p8_b1_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p8_b1_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p8_b1_BITEND, &u32_RB_val2);
			ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p8_b2_ADDR,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p8_b2_BITSTART,
						 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_sec3_y_p8_b2_BITEND, &u32_RB_val3);
			u12_me1_statis_bv_y[SEC3][Y_POS_8] = (u32_RB_val3 << 8) + (u32_RB_val2 << 4) + u32_RB_val1;
		}
		//  RTL x_zer issue
		for(u32_i=0; u32_i<SEC_NUM; u32_i++)
		{
			for(u32_j=0; u32_j<X_NUM; u32_j++)
			{
				if(u12_me1_statis_bv_x[u32_i][u32_j] >=1000)
					u12_me1_statis_bv_x[u32_i][u32_j] =1000;
			}
			for(u32_j=0; u32_j<Y_NUM; u32_j++)
			{
				if(u12_me1_statis_bv_y[u32_i][u32_j] >= 1000)
					u12_me1_statis_bv_y[u32_i][u32_j] =1000;
			}
		}
#if ME_VST_DEBUG_PRINT
		if( u32_print_counter == 0 )
		{
			printk("%s %d\r\n", __func__, u32_print_counter);
			for(u32_i=0; u32_i<SEC_NUM; u32_i++)
			{
				for(u32_j=0; u32_j<X_NUM; u32_j++)
				{
					printk("%d ", u12_me1_statis_bv_x[u32_i][u32_j]);
				}
				printk("\r\n");
				for(u32_j=0; u32_j<Y_NUM; u32_j++)
				{
					printk("%d ", u12_me1_statis_bv_y[u32_i][u32_j]);
				}
				printk("\r\n\r\n");
			}
		}
#endif
	}
}
VOID ME_Vst_Statistic()
{
	UINT32 u8_boundary[5] = {0};
	UBYTE u8_i = 0, u8_j = 0;

	// Read boundary information
	ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X0_ADDR,
				 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X0_BITSTART,
				 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X0_BITEND, &u8_boundary[0]);
	ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X1_ADDR,
				 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X1_BITSTART,
				 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X1_BITEND, &u8_boundary[1]);
	ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X2_ADDR,
				 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X2_BITSTART,
				 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X2_BITEND, &u8_boundary[2]);
	ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X3_ADDR,
				 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X3_BITSTART,
				 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X3_BITEND, &u8_boundary[3]);
	ReadRegister(FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X4_ADDR,
				 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X4_BITSTART,
				 FRC_TOP__KME_ME1_TOP10__reg_me1_VST_Stat_Boundary_X4_BITEND, &u8_boundary[4]);

	u32_rgnTotalBlks[0] = (u8_boundary[1] > u8_boundary[0])? (u8_boundary[1]-u8_boundary[0])*135 : 0;
	u32_rgnTotalBlks[1] = (u8_boundary[2] > u8_boundary[1])? (u8_boundary[2]-u8_boundary[1])*135 : 0;
	u32_rgnTotalBlks[2] = (u8_boundary[3] > u8_boundary[2])? (u8_boundary[3]-u8_boundary[2])*135 : 0;
	u32_rgnTotalBlks[3] = (u8_boundary[4] > u8_boundary[3])? (u8_boundary[4]-u8_boundary[3])*135 : 0;

	// Get the region statistic total region
	for(u8_i=0; u8_i<SEC_NUM; u8_i++)
	{
		u32_rgnTotalStatBlks_x[u8_i] = 0;
		for(u8_j=0; u8_j<X_NUM; u8_j++)
		{
			u32_rgnTotalStatBlks_x[u8_i] += u12_me1_statis_bv_x[u8_i][u8_j];
		}

		u32_rgnTotalStatBlks_y[u8_i] = 0;
		for(u8_j=0; u8_j<Y_NUM; u8_j++)
		{
			u32_rgnTotalStatBlks_y[u8_i] += u12_me1_statis_bv_y[u8_i][u8_j];
		}
	}
}
VOID ME_Vst_Detection(_OUTPUT_ME_VST_CTRL *pOutput)
{
	const UINT16 u8_rgnDetectTh = 16;
	const UBYTE u8_iirSftDivisor = 2, u8_iirCoef = 3; // (score*coef >> sft)
	
	UINT32  u32_HistBinsSum = 0;
	static UINT16 u16_rgnDetectScroe[4] = {0};
	UBYTE u8_i = 0, u8_j = 0;
	UBYTE u1_cond1 = 0, u1_cond2 = 0, u1_cond3 = 0;

	static UINT32 u32_print_counter = 0;

	u32_print_counter++;
	if(u32_print_counter >= 60)
		u32_print_counter = 0;

	// condition judge
	for(u8_i=0; u8_i<SEC_NUM; u8_i++)
	{
		u32_HistBinsSum = 0;
		for(u8_j=Y_POS_5; u8_j<=Y_POS_6; u8_j++)
		{
			u32_HistBinsSum += u12_me1_statis_bv_y[u8_i][u8_j];
		}

		u1_cond1 = (MAX( u32_rgnTotalStatBlks_x[u8_i], u32_rgnTotalStatBlks_y[u8_i] ) > (u32_rgnTotalBlks[u8_i]>>4)); // total stat blks amount is enough
		u1_cond2 = (u32_HistBinsSum > ( ((u32_rgnTotalStatBlks_y[u8_i]-(u12_me1_statis_bv_y[u8_i][Y_ZER_0]/2)) * 5) >> 3)); // target mv is larget enough
		u1_cond3 = ((u12_me1_statis_bv_x[u8_i][X_ZER]) > (u32_rgnTotalStatBlks_x[u8_i]>>1)); // target mv is larget enough

		if( u1_cond1 && u1_cond2 && u1_cond3 )
		{
			u16_rgnDetectScroe[u8_i] = MIN(u16_rgnDetectScroe[u8_i]+1, 512);
		}
		else
		{
			u16_rgnDetectScroe[u8_i] = (u16_rgnDetectScroe[u8_i]*u8_iirCoef)>>u8_iirSftDivisor;
		}

#if ME_VST_DEBUG_PRINT
		if(u32_print_counter == 0)
		{
			printk("cond = %d %d %d\r\n", u1_cond1, u1_cond2, u1_cond3);
		}
		if(u32_print_counter == 0 )
		{
			printk("cond = %d %d %d %d %d\r\n", u32_rgnTotalStatBlks_x[u8_i], u32_rgnTotalStatBlks_y[u8_i], u32_HistBinsSum,(u12_me1_statis_bv_y[u8_i][Y_ZER_0]/2),u12_me1_statis_bv_x[u8_i][X_ZER]);
		}
#endif

	}

	// case analysis
	pOutput->u8_boundarySta = 0;
	pOutput->u8_boundaryEnd = 0;
	pOutput->u1_detect = 0;

	if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] <= u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 59;

		pOutput->u1_detect = 1;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 60;
		pOutput->u8_boundaryEnd = 119;

		pOutput->u1_detect = 1;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] <= u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 120;
		pOutput->u8_boundaryEnd = 179;

		pOutput->u1_detect = 1;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] <= u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 180;
		pOutput->u8_boundaryEnd = 239;

		pOutput->u1_detect = 1;
	}
	else if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 119;

		pOutput->u1_detect = 1;
	}
	else if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] <= u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		// need futer judge, not complete finish yet
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 0;

		pOutput->u1_detect = 0;
	}
	else if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] <= u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		// need futer judge, not complete finish yet
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 0;

		pOutput->u1_detect = 0;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 60;
		pOutput->u8_boundaryEnd = 179;

		pOutput->u1_detect = 1;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		// need futer judge, not complete finish yet
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 0;

		pOutput->u1_detect = 0;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] <= u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 120;
		pOutput->u8_boundaryEnd = 239;

		pOutput->u1_detect = 1;
	}
	else if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 179;

		pOutput->u1_detect = 1;
	}
	else if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		// need futer judge, not complete finish yet
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 0;

		pOutput->u1_detect = 0;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 60;
		pOutput->u8_boundaryEnd = 239;

		pOutput->u1_detect = 1;
	}
	else if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 239;

		pOutput->u1_detect = 1;
	}
#if ME_VST_DEBUG_PRINT
	if(u32_print_counter == 0)
	{
		printk("detect result = %d %d %d %d, from %d to %d\r\n",
			u16_rgnDetectScroe[0], u16_rgnDetectScroe[1], u16_rgnDetectScroe[2], u16_rgnDetectScroe[3], pOutput->u8_boundarySta, pOutput->u8_boundaryEnd);
	}
#endif
}
VOID ME_Vst_blackBG_Detection(_OUTPUT_ME_VST_CTRL *pOutput)
{
	const UINT16 u8_rgnDetectTh = 16;
	const UBYTE u8_iirSftDivisor = 2, u8_iirCoef = 3; // (score*coef >> sft)
	UINT32  u32_HistBinsSum = 0;
	static UINT16 u16_rgnDetectScroe[4] = {0};
	UBYTE u8_i = 0, u8_j = 0;
	UBYTE u1_cond1 = 0, u1_cond2 = 0, u1_cond3 = 0;

	static UINT32 u32_print_counter = 0;

	u32_print_counter++;
	if(u32_print_counter >= 60)
		u32_print_counter = 0;

	
	// condition judge
	for(u8_i=0; u8_i<SEC_NUM; u8_i++)
	{
		u32_HistBinsSum = 0;
		for(u8_j=Y_POS_7; u8_j<=Y_POS_8; u8_j++)
		{
			u32_HistBinsSum += u12_me1_statis_bv_y[u8_i][u8_j];
		}

		u1_cond1 = (MAX( u32_rgnTotalStatBlks_x[u8_i], u32_rgnTotalStatBlks_y[u8_i] ) > (u32_rgnTotalBlks[u8_i]>>4)); // total stat blks amount is enough
		u1_cond2 = (u32_HistBinsSum > ( ((u32_rgnTotalStatBlks_y[u8_i]-(u12_me1_statis_bv_y[u8_i][Y_ZER_0]/2)) * 5) >> 3) && (u32_HistBinsSum >300)); // target mv is larget enough
		u1_cond3 = ((u12_me1_statis_bv_x[u8_i][X_ZER]) > (u32_rgnTotalStatBlks_x[u8_i]>>1)); // target mv is larget enough

		if( u1_cond1 && u1_cond2 && u1_cond3 )
		{
			u16_rgnDetectScroe[u8_i] = MIN(u16_rgnDetectScroe[u8_i]+1, 512);
		}
		else
		{
			u16_rgnDetectScroe[u8_i] = (u16_rgnDetectScroe[u8_i]*u8_iirCoef)>>u8_iirSftDivisor;
		}

#if ME_VST_DEBUG_PRINT
		if(u32_print_counter == 0)
		{
			printk("blackBG cond = %d %d %d\r\n", u1_cond1, u1_cond2, u1_cond3);
		}
#endif

	}

	// case analysis
	pOutput->u1_detect_blackBG_VST_trure= 0;

	if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] <= u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 59;

		pOutput->u1_detect_blackBG_VST_trure = 1;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 60;
		pOutput->u8_boundaryEnd = 119;

		pOutput->u1_detect_blackBG_VST_trure = 1;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] <= u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 120;
		pOutput->u8_boundaryEnd = 179;

		pOutput->u1_detect_blackBG_VST_trure = 1;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] <= u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 180;
		pOutput->u8_boundaryEnd = 239;

		pOutput->u1_detect_blackBG_VST_trure = 1;
	}
	else if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 119;

		pOutput->u1_detect_blackBG_VST_trure = 1;
	}
	else if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] <= u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		// need futer judge, not complete finish yet
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 0;

		pOutput->u1_detect_blackBG_VST_trure = 0;
	}
	else if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] <= u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		// need futer judge, not complete finish yet
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 0;

		pOutput->u1_detect_blackBG_VST_trure = 0;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 60;
		pOutput->u8_boundaryEnd = 179;

		pOutput->u1_detect_blackBG_VST_trure = 1;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		// need futer judge, not complete finish yet
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 0;

		pOutput->u1_detect_blackBG_VST_trure = 0;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] <= u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 120;
		pOutput->u8_boundaryEnd = 239;

		pOutput->u1_detect_blackBG_VST_trure = 1;
	}
	else if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] <= u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 179;

		pOutput->u1_detect_blackBG_VST_trure = 1;
	}
	else if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] <= u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		// need futer judge, not complete finish yet
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 0;

		pOutput->u1_detect_blackBG_VST_trure = 0;
	}
	else if( u16_rgnDetectScroe[0] <= u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 60;
		pOutput->u8_boundaryEnd = 239;

		pOutput->u1_detect_blackBG_VST_trure = 1;
	}
	else if( u16_rgnDetectScroe[0] > u8_rgnDetectTh && u16_rgnDetectScroe[1] > u8_rgnDetectTh && u16_rgnDetectScroe[2] > u8_rgnDetectTh && u16_rgnDetectScroe[3] > u8_rgnDetectTh )
	{
		pOutput->u8_boundarySta = 0;
		pOutput->u8_boundaryEnd = 239;

		pOutput->u1_detect_blackBG_VST_trure = 1;
	}
#if ME_VST_DEBUG_PRINT
	if(u32_print_counter == 0)
	{
		printk("detect result = %d %d %d %d, from %d to %d\r\n",
			u16_rgnDetectScroe[0], u16_rgnDetectScroe[1], u16_rgnDetectScroe[2], u16_rgnDetectScroe[3], pOutput->u8_boundarySta, pOutput->u8_boundaryEnd);
	}
#endif
}

