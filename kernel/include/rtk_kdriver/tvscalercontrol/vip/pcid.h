/*==========================================================================
  * Copyright (c)      Realtek Semiconductor Corporation, 2009
  * All rights reserved.
  * ========================================================================*/

/**
 * @file
 * 	This file is for gibi and od related functions.
 *
 * @author 	$Author$
 * @date 	$Date$
 * @version $Revision$
 */

/**
 * @addtogroup color
 * @{
 */

#ifndef _PCID_H
#define _PCID_H
/*============================ Module dependency  ===========================*/


/*================================ Definitions ==============================*/
#define PCID_TBL_LEN	289
#define POD_TBL_LEN 	PCID_TBL_LEN*2
#define LGE_POD_TBL_LEN 	1848


/*PCID2 Structure*/
#define _REF_COLOR_R 0
#define _REF_COLOR_G 1
#define _REF_COLOR_B 2

#define _REF_POINT_PREV 0
#define _REF_POINT_CURR 1
#define _REF_POINT_NEXT 2

#define _REF_LINE_PREV 0
#define _REF_LINE_CURR 1

#define RGN_NA 9

/*================================== Variables ==============================*/
extern unsigned int RgnMappingTbl[16][4];
extern unsigned char pcidRgnTbl[16][3][PCID_TBL_LEN];

/*===================================  Types ================================*/
#ifndef LITTLE_ENDIAN //apply BIG_ENDIAN

typedef union
{
	unsigned int b32Value;
	struct
	{
		char b32_24:8;
		char b23_16:8;
		char b15_08:8;
		char b07_00:8;
	};
} DRV_Tbl2SRAM_Val;

#else

typedef union
{
	unsigned int b32Value;
	struct
	{
		char b07_00:8;
		char b15_08:8;
		char b23_16:8;
		char b32_24:8;
	};
} DRV_Tbl2SRAM_Val;

#endif

typedef struct {
	unsigned char line_sel;
	unsigned char point_sel;
	unsigned char color_sel;
} DRV_pcid2_pixel_ref_setting_t;

typedef struct
{
	DRV_pcid2_pixel_ref_setting_t even_r;
	DRV_pcid2_pixel_ref_setting_t even_g;
	DRV_pcid2_pixel_ref_setting_t even_b;

	DRV_pcid2_pixel_ref_setting_t odd_r;
	DRV_pcid2_pixel_ref_setting_t odd_g;
	DRV_pcid2_pixel_ref_setting_t odd_b;
} DRV_pcid2_line_ref_setting_t;

typedef struct {
	DRV_pcid2_line_ref_setting_t line1;
	DRV_pcid2_line_ref_setting_t line2;
	DRV_pcid2_line_ref_setting_t line3;
	DRV_pcid2_line_ref_setting_t line4;
} DRV_pcid2_ref_setting_t;

typedef struct {
	// Noise reduction
	bool pcid_thd_en;
	bool pcid_thd_mode;
	unsigned int pcid_tbl1_r_th;
	unsigned int pcid_tbl1_g_th;
	unsigned int pcid_tbl1_b_th;
	// XTR
	bool xtr_tbl1_en;
	// Mode selection
	bool boundary_mode;
	// Subpixel reference setting
	DRV_pcid2_ref_setting_t pixel_ref;
} DRV_pcid2_data_t;

typedef struct {
	unsigned char RgnTblEnable;
	unsigned int HorIdx[3];
	unsigned char HorBldStep[3];
	unsigned int VerIdx[3];
	unsigned char VerBldStep[3];
} DRV_pcid2_RgnTbl_t;

typedef enum {
	_PCID2_COLOR_R = 0,
	_PCID2_COLOR_G,
	_PCID2_COLOR_B,
	_PCID2_COLOR_ALL,
	_PCID2_COLOR_ERR
} DRV_pcid2_channel_t;

/*=================================== Functions ================================*/
void drvif_color_set_pcid_enable(unsigned char bpcid_enable);
void drvif_color_set_pcid2_enable(unsigned char bpcid2);
void drvif_color_set_pcid_regional_table_setting(DRV_pcid2_RgnTbl_t* pRgnTbl);
void drvif_color_set_pcid_pixel_setting(DRV_pcid2_data_t* pPcid2Setting);

void drvif_color_set_pcid_regional_table_valuetable(unsigned int *pTblValue, unsigned int RgnSel, DRV_pcid2_channel_t Channel);

void drvif_color_set_LGD_POD(unsigned char* pTblValue);
void drvif_color_set_LGD_POD_enable(unsigned char blgdpod);
void drvif_color_set_LGD_Dither(void);

void drvif_color_get_pcid_regional_table_valuetable(unsigned int *pRetTbl, unsigned int RgnSel, DRV_pcid2_channel_t Channel);
char drvif_color_get_pcid2_enable(void);
void drvif_color_enable_LGD_POD_CLK(void);


#endif


