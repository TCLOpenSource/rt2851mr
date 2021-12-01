#ifndef _AI_CMD_ID_H_
#define _AI_CMD_ID_H_

/************************************************************************
 *  Include files
 ************************************************************************/
#ifdef CONFIG_RTK_AI_DRV
#include <linux/time.h>
#endif

/************************************************************************
 *  Definitions
 ************************************************************************/
#define AI_DEVICE_NAME						"rtk-ai"
#define AI_IOC_MAGIC 'a'

enum ai_ioc_cmd
{
	AI_IOC_CMD_INIT = 0,
	AI_IOC_CMD_UNINIT = 1,
	AI_IOC_CMD_OPEN = 2,
	AI_IOC_CMD_CLOSE = 3,
	AI_IOC_CMD_REGIST_MODEL = 4,
	AI_IOC_CMD_UNREGIST_MODEL = 5,
	AI_IOC_CMD_GET_SHARE_MEM = 6,
	AI_IOC_CMD_GET_GRANT = 7,
	AI_IOC_CMD_RELEASE_GRANT = 8,
};

#define AI_IOC_INIT								_IO(AI_IOC_MAGIC, AI_IOC_CMD_INIT)
#define AI_IOC_UNINIT						_IO(AI_IOC_MAGIC, AI_IOC_CMD_UNINIT)
#define AI_IOC_OPEN							_IO(AI_IOC_MAGIC, AI_IOC_CMD_OPEN)
#define AI_IOC_CLOSE							_IO(AI_IOC_MAGIC, AI_IOC_CMD_CLOSE)
#define AI_IOC_REGIST_MODEL				_IOW(AI_IOC_MAGIC, AI_IOC_CMD_REGIST_MODEL, unsigned int)
#define AI_IOC_UNREGIST_MODEL				_IOW(AI_IOC_MAGIC, AI_IOC_CMD_UNREGIST_MODEL, int)
#define AI_IOC_GET_SHARE_MEM				_IOR(AI_IOC_MAGIC, AI_IOC_CMD_GET_SHARE_MEM, unsigned int)
#define AI_IOC_GET_GRANT				_IOW(AI_IOC_MAGIC, AI_IOC_CMD_GET_GRANT, unsigned int)
#define AI_IOC_RELEASE_GRANT				_IOW(AI_IOC_MAGIC, AI_IOC_CMD_RELEASE_GRANT, unsigned int)

#define AI_MAX_PROCESS		10
#define AI_MAX_MODEL_FILE		10		// max model file per process
#define AI_MAX_MODEL_NAME_LEN 40

typedef enum{
	AI_PQ_AP_OFF=0, // AI_FACE_OFF
	AI_PQ_ALL_ON, // AI_FACE_ON
	AI_PQ_DEMO, // AI_FACE_DEMO
	AI_PQ_SCENE_OFF,
	AI_PQ_FACE_OFF,
	AI_PQ_ALL_OFF, // no pq effect
	AI_PQ_MODE_NUM,
} AI_PQ_MODE;

typedef enum{
	AI_MC_VPQ_FACE=0,
	AI_MC_VPQ_SCENE,
	AI_MC_VPQ_RESOLUTION,
	AI_MC_VPQ_ANIMATION,
	AI_MC_VPQ_MAX,
} AI_MC_VPQ_INDEX;

typedef enum{
	AI_SCENE_ANIMATION=0,
	AI_SCENE_NIGHT_BUILDING,
	AI_SCENE_CONCERT,
	AI_SCENE_FIREWORKS,
	AI_SCENE_GAME,
	AI_SCENE_LANDSCAPE,
	AI_SCENE_NEWS,
	AI_SCENE_OTHERs,
	AI_SCENE_SPORTs,
	AI_SCENE_TYPE_NUM,
} AI_SCENE_TYPE;

typedef enum{
	AI_RESOLUTION_2K_BAD=0,
	AI_RESOLUTION_2K_NORMAL,
	AI_RESOLUTION_4K_NORMAL,
	AI_RESOLUTION_4K_GOOD,
	AI_RESOLUTION_TYPE_NUM,
} AI_RESOLUTION_TYPE;


typedef struct _AI_PROCESS_INFO {
	int activated;
	int modelNum;
	char modelFile[AI_MAX_MODEL_FILE][AI_MAX_MODEL_NAME_LEN];		//max 10 model file per process
	int inputVideoWidth;
	int inputVideoHeight;
	int	inputAudioFmt;
	AI_MC_VPQ_INDEX outputFunIdx;
	int targetFps;
	double  graphTimeMs;  // process time of each graph (ms)
	struct timespec  lastTime;  // last time to process graph
} AI_PROCESS_INFO;          
 
typedef struct _MODEL_CONTROL {
   int  aiProcessNum;  					//max 10 ai process
   AI_PROCESS_INFO aiProcessInfo[AI_MAX_PROCESS];   //index corresponding to handle
   int  curProcessOfUsePPU;    	//current process handle of using PPU
   int  curProcessOfUseNNU;  		//current process handle of using NNU
   int  curProcessOfUseOutput;  //current process handle of using output hw
} AI_CONTROL;

typedef enum{
	AI_HW_PPU=0,
	AI_HW_NNU,
	AI_HW_OUTPUT,
	AI_HW_INPUT,
	AI_HW_MAX,
	AI_HW_PNU	  // need PPU & NNU if you do not know exactly
} AI_HW_INDEX;

typedef struct _IOCTL_REGIST_MODEL_PARAM{
	int handle;
	AI_PROCESS_INFO info;
}IOCTL_REGIST_MODEL_PARAM;

typedef struct _IOCTL_GRANT_PARAM{
	int handle;
	AI_HW_INDEX index;
}IOCTL_GRANT_PARAM;

enum {
	AI_FACE_DETECT  = (1 << 0),
	AI_SCENE_DETECT = (1 << 1),
	AI_SQM_DETECT   = (1 << 2),
};

#endif	/* _AI_CMD_ID_H_ */
