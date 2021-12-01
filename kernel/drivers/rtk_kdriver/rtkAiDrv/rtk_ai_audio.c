/************************************************************************
 *  Include files
 ************************************************************************/
#include <linux/module.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/semaphore.h>
#include <linux/slab.h>
#include <asm-generic/io.h>
#include "rtk_ai.h"

/************************************************************************
 *  Definitions
 ************************************************************************/


/************************************************************************
*  Public variables
************************************************************************/
static int isAiAudioInit=0;

/************************************************************************
*  Function body
************************************************************************/

BOOL rtk_ai_audio_init(void){
	
	if(isAiAudioInit==1)
	{
		AI_ERROR("already inited\n");
		return TRUE;
	}
	
	isAiAudioInit=1;

	return TRUE;
}

BOOL rtk_ai_audio_unInit(void){

	isAiAudioInit=0;
	
	return TRUE;
}
