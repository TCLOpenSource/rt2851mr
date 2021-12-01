/************************************************************************
 *  Include files
 ************************************************************************/
#include <linux/time.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/semaphore.h>
#include <linux/slab.h>
#include <linux/pageremap.h>
#include <asm-generic/io.h>
#include <asm/cacheflush.h>
#include "rtk_ai.h"

/************************************************************************
 *  Definitions
 ************************************************************************/
#define AI_MC_TIMER_INTERVAL   HZ												//1 seconds
#define AI_MC_GRANT_TIMEOUT		 (4*AI_MC_TIMER_INTERVAL)	//4 seconds
#define AI_MC_AP_CRASH_TIMEOUT 		6											//6 seconds

/************************************************************************
*  Public variables
************************************************************************/
AI_CONTROL *aiControl;
AI_CONTROL *aiControl_backup;
struct semaphore aiHwSem[AI_HW_MAX];
unsigned long	aiHwSemTimeout[AI_HW_MAX];
struct semaphore aiControlSem;
static int isAiControlInit=0;
static struct timer_list ai_mc_timer;


/************************************************************************
*  Function body
************************************************************************/
void mc_checkGrantTimer(unsigned long param)
{
	int i,foundLock=0;
	struct timespec curTime;
	
	if(isAiControlInit==0||aiControl==NULL){
		AI_ERROR("initial fail or memory trash. stop timer\n");
		return;
	}
	
	down(&aiControlSem);
	
	//check PPU
	if((aiControl->curProcessOfUsePPU!=-1)&&(aiHwSemTimeout[AI_HW_PPU]<jiffies)){
		AI_ERROR("PPU: (handle %d) may crash and lock sem. unlock it\n",aiControl->curProcessOfUsePPU);
		aiControl->curProcessOfUsePPU=-1;
		foundLock=1;
		//release aiHwSem for ap crash case
		up(&aiHwSem[AI_HW_PPU]);
	}

	//check NNU
	if((aiControl->curProcessOfUseNNU!=-1)&&(aiHwSemTimeout[AI_HW_NNU]<jiffies)){
		AI_ERROR("NNU: (handle %d) may crash and lock sem. unlock it\n",aiControl->curProcessOfUseNNU);
		aiControl->curProcessOfUseNNU=-1;
		foundLock=1;
		//release aiHwSem for ap crash case
		up(&aiHwSem[AI_HW_NNU]);
	}
	
	//check Output
	if((aiControl->curProcessOfUseOutput!=-1)&&(aiHwSemTimeout[AI_HW_OUTPUT]<jiffies)){
		AI_ERROR("Output: (handle %d) may crash and lock sem. unlock it\n",aiControl->curProcessOfUseOutput);
		aiControl->curProcessOfUseOutput=-1;
		foundLock=1;
		//release aiHwSem for ap crash case
		up(&aiHwSem[AI_HW_OUTPUT]);
	}

	//only check when no locking happen,cause other process do not update lastTime when lock up
	if(foundLock==0){
		curTime=current_kernel_time();
		//check crash ap case without lock sem
		for(i=0;i<AI_MAX_PROCESS;i++){
			if(aiControl->aiProcessInfo[i].activated){
				if((curTime.tv_sec-aiControl->aiProcessInfo[i].lastTime.tv_sec)>=AI_MC_AP_CRASH_TIMEOUT){
					
					aiControl->aiProcessInfo[i].activated=0;
					AI_ERROR("found (handle %d) may crash,disable it\n",i);
				}
			}	
		}	
	}

	up(&aiControlSem);
	
  ai_mc_timer.expires = jiffies + AI_MC_TIMER_INTERVAL;
  add_timer(&ai_mc_timer);
}

BOOL rtk_ai_mc_init(void){
	int i;
	unsigned int address;
	
	if(isAiControlInit==1)
	{
		AI_ERROR("already inited\n");
		return TRUE;
	}
	
	//1. init aiControl parameters
	aiControl_backup=(AI_CONTROL *)kmalloc(sizeof(AI_CONTROL),GFP_KERNEL);
	//aiControl=(AI_CONTROL *)dvr_malloc_uncached_specific(sizeof(AI_CONTROL),GFP_DCU1_LIMIT,(void **)&address);
	address=(unsigned int)dvr_malloc_uncached(sizeof(AI_CONTROL),(void **)&aiControl);
	AI_INFO("dvr_malloc aiControl=0x%x,cached addr=0x%x\n",(unsigned int)aiControl,address);
	
	if(aiControl==NULL){
		AI_ERROR("kmalloc %d Bytes fail\n",sizeof(AI_CONTROL));
		return FALSE;
	}
	
	aiControl->aiProcessNum=0;
	for(i=0;i<AI_MAX_PROCESS;i++){
		aiControl->aiProcessInfo[i].activated=0;
	}

	aiControl->curProcessOfUsePPU=-1;
	aiControl->curProcessOfUseNNU=-1;
	aiControl->curProcessOfUseOutput=-1;
	
	isAiControlInit=1;

	//2.init semphare
	for(i=0;i<AI_HW_MAX;i++){
		sema_init(&aiHwSem[i],1);
	}
	
	sema_init(&aiControlSem,1);
	
	
	//3.init timer
  init_timer(&ai_mc_timer);
  ai_mc_timer.function = &mc_checkGrantTimer;
  ai_mc_timer.data = ((unsigned long) 0);
  ai_mc_timer.expires = jiffies + AI_MC_TIMER_INTERVAL;
  //add_timer(&ai_mc_timer); 
	
	AI_INFO("rtk_ai_mc_init done\n");
	
	return TRUE;
}

BOOL rtk_ai_mc_unInit(void){
	int i;

	aiControl->aiProcessNum=0;
	for(i=0;i<AI_MAX_PROCESS;i++){
		aiControl->aiProcessInfo[i].activated=0;
	}

	aiControl->curProcessOfUsePPU=-1;
	aiControl->curProcessOfUseNNU=-1;
	aiControl->curProcessOfUseOutput=-1;
	
	kfree(aiControl_backup);
	dvr_free((void *)aiControl);
	aiControl=NULL;
	
	del_timer(&ai_mc_timer);
	
	isAiControlInit=0;
	
	return TRUE;
}


BOOL rtk_ai_mc_registModel(AI_PROCESS_INFO *info,int handle){
	int i;
	unsigned int addr_start,addr_end;
	
	if(aiControl->aiProcessNum<0 || aiControl->aiProcessNum>=(AI_MAX_PROCESS-1)){
		AI_ERROR("aiProcessNum is out of range(%d)\n",aiControl->aiProcessNum);
		return FALSE;
	}

	if( handle<0 || handle>=AI_MAX_PROCESS){	
		AI_ERROR("handle is out of range 0~%d (%d)\n",(AI_MAX_PROCESS-1),handle);
		return FALSE;
	}

	//check parameters of info
	if(info->modelNum<=0||info->inputVideoWidth<=0||info->inputVideoHeight<=0){
		AI_ERROR("error info\n");
		return FALSE;
	}
	
	if(!((info->inputVideoWidth==416&&info->inputVideoHeight==416)	\
	||(info->inputVideoWidth==224&&info->inputVideoHeight==224)		\
	||(info->inputVideoWidth==480&&info->inputVideoHeight==256)		\
	||(info->inputVideoWidth==320&&info->inputVideoHeight==240)		\
	||(info->inputVideoWidth==960&&info->inputVideoHeight==540))){
		AI_ERROR("not support size( %d x %d )\n",info->inputVideoWidth,info->inputVideoHeight);
		return FALSE;
	}
	
	if(info->outputFunIdx<AI_MC_VPQ_FACE||info->outputFunIdx>=AI_MC_VPQ_MAX){
		AI_ERROR("not support vpq function %d\n",info->outputFunIdx);
		AI_ERROR("vpq function %d for face detect\n",AI_MC_VPQ_FACE);
		AI_ERROR("vpq function %d for scene detect\n",AI_MC_VPQ_SCENE);
		AI_ERROR("vpq function %d for resolution detect\n",AI_MC_VPQ_RESOLUTION);
		return FALSE;
	}
	
	
	if(isAiControlInit!=1){
		AI_ERROR("not inited\n");
		return FALSE;
	}

	down(&aiControlSem);
	
	//check handle. already registed when call rtk_ai_mc_getNextHandle
	if(aiControl->aiProcessInfo[handle].activated!=1){
		up(&aiControlSem);
		AI_ERROR("handle %d status is wrong(%d)\n",handle,aiControl->aiProcessInfo[handle].activated);
		return FALSE;
	}

	aiControl->aiProcessInfo[handle].modelNum=info->modelNum;
	memcpy((void *)&aiControl->aiProcessInfo[handle].modelFile,(void *)&info->modelFile,AI_MAX_MODEL_FILE*AI_MAX_MODEL_NAME_LEN);
	aiControl->aiProcessInfo[handle].inputVideoWidth=info->inputVideoWidth;
	aiControl->aiProcessInfo[handle].inputVideoHeight=info->inputVideoHeight;
	aiControl->aiProcessInfo[handle].inputAudioFmt=info->inputAudioFmt;
	aiControl->aiProcessInfo[handle].outputFunIdx=info->outputFunIdx;
	aiControl->aiProcessInfo[handle].targetFps=info->targetFps;
	aiControl->aiProcessInfo[handle].lastTime=current_kernel_time();
	
	for(i=0;i<AI_HW_MAX;i++)
		aiHwSemTimeout[i]=jiffies+AI_MC_GRANT_TIMEOUT;

	//flush cache
	addr_start=(unsigned int)aiControl;
	addr_end=addr_start+sizeof(AI_CONTROL);
	//dmac_flush_range((void *)addr_start,(void *)addr_end);	

	up(&aiControlSem);

	AI_INFO("flush 0x%x to 0x%x\n",addr_start,addr_end);
	
	return TRUE;
}

BOOL rtk_ai_mc_unRegistModel(int handle){

	if(aiControl->aiProcessNum<0 || aiControl->aiProcessNum>=AI_MAX_PROCESS){
		AI_ERROR("aiProcessNum is out of range(%d)\n",aiControl->aiProcessNum);
		return FALSE;
	}

	if( handle<0 || handle>=AI_MAX_PROCESS){	
		AI_ERROR("handle is out of range 0~%d (%d)\n",(AI_MAX_PROCESS-1),handle);
		return FALSE;
	}

	if(isAiControlInit!=1){
		AI_ERROR("not inited\n");
		return FALSE;
	}

	down(&aiControlSem);
	
	aiControl->aiProcessInfo[handle].activated=0;
	aiControl->aiProcessNum=aiControl->aiProcessNum-1;

	up(&aiControlSem);
	
	return TRUE;
}	

BOOL rtk_ai_mc_getShareMem(unsigned int *phy_addr){
	
	if(isAiControlInit!=1){
		AI_ERROR("not inited\n");
		return FALSE;
	}

	if(phy_addr==NULL){
		AI_ERROR("phy_addr is null\n");
		return FALSE;
	}
	
        *phy_addr=(unsigned long)dvr_to_phys((void *)aiControl);
	AI_INFO("phy_addr =0x%x,virt_addr=0x%x\n",*phy_addr,(unsigned int)aiControl);
        AI_INFO("aiControl->aiProcessNum=%d\n",aiControl->aiProcessNum);
	
	return TRUE;
}

BOOL rtk_ai_mc_getGrant(int handle,AI_HW_INDEX index){

	if( index<AI_HW_PPU || index>AI_HW_OUTPUT){	
		AI_ERROR("index is out of range 0~%d (%d)\n",AI_HW_OUTPUT,index);
		return FALSE;
	}

	if(isAiControlInit!=1){
		AI_ERROR("not inited\n");
		return FALSE;
	}

	//AI_DEBUG("[grant]handle=%d,index=%d before sem\n",handle,index);

	down(&aiHwSem[index]);

	AI_DEBUG("[grant]handle=%d,index=%d get sem\n",handle,index);
	aiHwSemTimeout[index]=jiffies+AI_MC_GRANT_TIMEOUT;

	down(&aiControlSem);
#if 1
	if(index==AI_HW_PPU)
		aiControl->curProcessOfUsePPU=handle;
	if(index==AI_HW_NNU)
		aiControl->curProcessOfUseNNU=handle;
	if(index==AI_HW_OUTPUT)
		aiControl->curProcessOfUseOutput=handle; 
#else	
	switch(index){
		case AI_HW_PPU:
			aiControl->curProcessOfUsePPU=handle;
			break;
		case AI_HW_NNU:
			aiControl->curProcessOfUseNNU=handle;
			break;
		case AI_HW_OUTPUT:
			aiControl->curProcessOfUseOutput=handle;
			break;
		default:
			break;
	}	
#endif
	up(&aiControlSem);

	return TRUE;
}

BOOL rtk_ai_mc_releaseGrant(int handle,AI_HW_INDEX index){

	if( index<AI_HW_PPU || index>AI_HW_OUTPUT){	
		AI_ERROR("index is out of range 0~%d (%d)\n",AI_HW_OUTPUT,index);
		return FALSE;
	}

	if(isAiControlInit!=1){
		AI_ERROR("not inited\n");
		return FALSE;
	}
	
	down(&aiControlSem);

#if 1
	if(index==AI_HW_PPU)
	{
		if(handle!=aiControl->curProcessOfUsePPU){
			AI_ERROR("not correct handle %d(%d)\n",handle,aiControl->curProcessOfUsePPU);
			up(&aiControlSem);
			return FALSE;
		}

		aiControl->curProcessOfUsePPU=-1;
	}
	
	if(index==AI_HW_NNU)
	{
		if(handle!=aiControl->curProcessOfUseNNU){
			AI_ERROR("not correct handle %d(%d)\n",handle,aiControl->curProcessOfUseNNU);
			up(&aiControlSem);
			return FALSE;
		}

		aiControl->curProcessOfUseNNU=-1;
	}
	
	if(index==AI_HW_OUTPUT)
	{
		if(handle!=aiControl->curProcessOfUseOutput){
			AI_ERROR("not correct handle %d(%d)\n",handle,aiControl->curProcessOfUseOutput);
			up(&aiControlSem);
			return FALSE;
		}
		aiControl->curProcessOfUseOutput=-1;
	}

#else	
	switch(index){
		case AI_HW_PPU:
			if(handle!=aiControl->curProcessOfUsePPU){
				AI_ERROR("not correct handle %d(%d)\n",handle,aiControl->curProcessOfUsePPU);
				up(&aiControlSem);
				return FALSE;
			}
			break;
		case AI_HW_NNU:
			if(handle!=aiControl->curProcessOfUseNNU){
				AI_ERROR("not correct handle %d(%d)\n",handle,aiControl->curProcessOfUseNNU);
				up(&aiControlSem);
				return FALSE;
			}
			break;
		case AI_HW_OUTPUT:
			if(handle!=aiControl->curProcessOfUseOutput){
				AI_ERROR("not correct handle %d(%d)\n",handle,aiControl->curProcessOfUseOutput);
				up(&aiControlSem);
				return FALSE;
			}
			break;
		default:
			break;
	}	

	switch(index){
		case AI_HW_PPU:
			aiControl->curProcessOfUsePPU=-1;
			break;
		case AI_HW_NNU:
			aiControl->curProcessOfUseNNU=-1;
			break;
		case AI_HW_OUTPUT:
			aiControl->curProcessOfUseOutput=-1;
			break;
		default:
			break;
	}	
#endif

	up(&aiControlSem);
	up(&aiHwSem[index]);
	
	AI_DEBUG("[grant] release handle=%d,index=%d\n",handle,index);

	return TRUE;
}


BOOL rtk_ai_mc_getCurModVpqCtrl(AI_MC_VPQ_INDEX *index){
	
	if(isAiControlInit!=1){
		AI_ERROR("not inited\n");
		return FALSE;
	}

	if(index==NULL){
		AI_ERROR("index is NULL\n");
		return FALSE;
	}
	
	//not activate and do not print any message
	if(aiControl->curProcessOfUseOutput==-1)
		return FALSE;

	if(aiControl->curProcessOfUseOutput<0 || aiControl->curProcessOfUseOutput>=AI_MAX_PROCESS){
		//AI_ERROR("curProcessOfUseOutput is out of range(%d)\n",aiControl->curProcessOfUseOutput);
		return FALSE;
	}
	
	if(aiControl->aiProcessInfo[aiControl->curProcessOfUseOutput].activated!=1){
		AI_ERROR("aiProcessInfo[%d] is not activated\n",aiControl->curProcessOfUseOutput);
		return FALSE;
	}
	
	*index=aiControl->aiProcessInfo[aiControl->curProcessOfUseOutput].outputFunIdx;
	
	return TRUE;
}	

int rtk_ai_mc_getNextHandle(void){
	int i;
	
	if(isAiControlInit!=1){
		// first handle would be 0
		AI_INFO("rtk_ai_mc_getNextHandle: 0\n");
		return 0;
	}
	
	//check empty handle
	down(&aiControlSem);
	for(i=0;i<AI_MAX_PROCESS;i++){
		if(aiControl->aiProcessInfo[i].activated==0){
			aiControl->aiProcessNum=aiControl->aiProcessNum+1;
			aiControl->aiProcessInfo[i].activated=1;
			break;
		}
	}
	up(&aiControlSem);
	
	if(i>=AI_MAX_PROCESS){
		i=AI_MAX_PROCESS-1;
		AI_ERROR("too much AP to use NN\n");
	}
	
	AI_INFO("rtk_ai_mc_getNextHandle: %d\n",i);
	
	return i;
}

BOOL rtk_ai_mc_crashRelease(int handle){
	//check handle
	if(handle<0||handle>=AI_MAX_PROCESS){
		AI_ERROR("handle is out of range %d(0~%d)\n",handle,AI_MAX_PROCESS);
		return FALSE;
	}	
	
	AI_INFO("rtk_ai_mc_crashRelease: handle=%d\n",handle);

	//check if crahs ap havd locked some semaphre
	down(&aiControlSem);
	if(aiControl->curProcessOfUsePPU==handle){
		up(&aiHwSem[AI_HW_PPU]);
		aiControl->curProcessOfUsePPU=-1;
		AI_INFO("release PPU sem hold by %d\n",handle);
	}

	if(aiControl->curProcessOfUseNNU==handle){
		up(&aiHwSem[AI_HW_NNU]);
		aiControl->curProcessOfUseNNU=-1;
		AI_INFO("release PPU sem hold by %d\n",handle);
	}

	if(aiControl->curProcessOfUseOutput==handle){
		up(&aiHwSem[AI_HW_OUTPUT]);
		aiControl->curProcessOfUseOutput=-1;
		AI_INFO("release PPU sem hold by %d\n",handle);
	}
	
	aiControl->aiProcessInfo[handle].activated=0;
	
	up(&aiControlSem);
	
	return TRUE; 
}

BOOL rtk_ai_mc_backup(void){
	memcpy((void *)aiControl_backup,(void *)aiControl,sizeof(AI_CONTROL));
	return TRUE; 
}	

BOOL rtk_ai_mc_restore(void){
	memcpy((void *)aiControl,(void *)aiControl_backup,sizeof(AI_CONTROL));
	return TRUE; 
}	