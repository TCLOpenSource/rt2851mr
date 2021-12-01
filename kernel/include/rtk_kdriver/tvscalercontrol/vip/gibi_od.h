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

#ifndef _GIBI_OD_H
#define _GIBI_OD_H
/*============================ Module dependency  ===========================*/
/*#include "rtd_types.h"*/


/*===================================  Types ================================*/

/*================================== Variables ==============================*/

/*================================ Definitions ==============================*/
#define OD_table_length	289

#ifndef CONFIG_VPQ_TABLE_GENERATE
#define CONFIG_VPQ_TABLE_GENERATE 0
#endif

#if CONFIG_VPQ_TABLE_GENERATE
typedef char bool;
typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int UINT32;
#endif

typedef struct {	
	unsigned int ymode_en;
	unsigned int ymode_sat_en;
	unsigned int ymode_coef_r;
	unsigned int ymode_coef_g;
	unsigned int ymode_coef_b;
} DRV_od_ymode;

/*================================ Functions ==============================*/
unsigned int drvifget_align_value(unsigned int input, unsigned int align_value);
unsigned char drvif_color_od_enable_get(void);
DRV_od_ymode drvif_color_od_Ymode_get(void);
unsigned char drvif_color_od_gain_get(void);
void drvif_color_od_enable_set(unsigned char od_enable);
void drvif_color_od_Ymode_set(DRV_od_ymode arg);
void drvif_color_od_gain_set(unsigned char gain);
void drvif_color_od(unsigned char bOD);
bool drvif_color_od_pqc(UINT16 height, UINT16 width, UINT8 bit_sel, UINT8 mode, UINT8 FrameLimitBit, int dataColor, int dataFormat);
bool drvif_color_od_pqc_120hz(UINT16 height, UINT16 width, UINT8 bit_sel, UINT8 dma_mode, UINT8 FrameLimitBit, int dataColor, int dataFormat);
void drvif_color_od_Ymode(void);
void drvif_color_od_table_seperate(unsigned int *pODtable, unsigned char tableType, unsigned char colorChannel);
void drvif_color_od_table_read(unsigned char *pODtable);
void drvif_color_od_table(unsigned int *pODtable, unsigned char targetmode);
void drvif_color_safe_od_enable(unsigned char bEnable, unsigned char bOD_OnOff_Switch);
void drvif_color_od_gain(unsigned char ucGain);
unsigned char drvif_color_get_od_gain(unsigned char channel);
void drvif_color_set_od_bits(unsigned char FrameLimitBit, unsigned char input_bit_sel);
unsigned char drvif_color_get_od_bits(void);
unsigned char drvif_color_get_od_en(void);
unsigned char drvif_color_get_od_dma_mode(void);
unsigned char drvif_color_set_od_dma_enable(unsigned char enable);
unsigned char drvif_color_get_od_dma_enable(void);
void drvif_color_od_table_seperate_write(unsigned int *pODtable, unsigned char tableType, char channel);
void drvif_color_od_table_seperate_read(unsigned char *pODtable, unsigned char channel);

#endif

