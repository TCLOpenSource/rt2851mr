#ifndef __RTK_ICE_MC_MEASURE_H__
#define __RTK_ICE_MC_MEASURE_H__

#include "../core/rtk_ice.h"

//#ifndef MC_MEASURE_ITEM_COUNT
#define MC_MEASURE_ITEM_COUNT 4
//#endif

/*ip mc measure data type*/
typedef enum{	
    MC_MEASURE_QUERY_CURRENT = 0,/*< query current mc*/
    MC_MEASURE_QUERY_MAX,/*< Maxmum of history mc*/
    MC_MEASURE_BYTES_COUNT,/*in continue mode, the measure data count*/
    MC_MEASURE_QUERY_CONTINUE_MODE,/*query data in continue mode*/
    MC_MEASURE_QUERY_BUS_BW/*query data of bus measurement*/
} ENUM_MC_MEASURE_QUERY;

typedef enum
{
    MC_CATEGORY_MC1=0, 
    MC_CATEGORY_MC2,
    MC_CATEGORY_ALL_MC,
}ENUM_MC_CATEGORY;

typedef struct _CMcClient
{
    UINT8 bus_id;
    UINT8 client_id;
    ENUM_MC_CATEGORY mc_category;
    UINT32 measure_number[MC_MEASURE_ITEM_COUNT];//current measure number
    UINT32 prev_measure_number[MC_MEASURE_ITEM_COUNT];//measure number for getting measure
    UINT32 max_measure_number[MC_MEASURE_ITEM_COUNT];
    UINT32 max_measure_count[MC_MEASURE_ITEM_COUNT];//time of max number, 0 is mc1 read,1 is mc1 write, 2 is mc2 read, 3 is mc2 write
    UINT32 measure_count;
    struct _CMcClient * _pnext;
    struct _CMcClient * _pprev;
}CMcClient;

typedef struct
{
    CMcClient * _phead;
    CMcClient * _ptail;
    struct task_struct *p_thread;/*< thread handler of bw checking.*/
    BOOL f_stop_thread;
    BOOL f_is_running;
    int error_code;
    ENUM_MC_MEASURE_QUERY query;
    bool hasExtendCommand;
    unsigned int mc_threshold;
    BOOL isContinueMode;// wheather or not continue mode
    unsigned int checkTimeInContinue;//measure time(s) in continue mode
#ifdef CONFIG_RTK_KDRV_QOS_CONTROL
    unsigned int curMcIndex;
    unsigned int curFrameIndexOfPass;//current pass data's frame index
    unsigned int curBusIndexOfPass;
    unsigned int curClientIndexOfPass;
#endif
}CMcMeasure;
/** \brief init_client_list initialize client lsit
  * \param cmd_data pointer to buffer that saves command
  * \param cmd_len command length in bytes
  * \return success return true, otherwise return false
  */
int init_client_list(unsigned char * cmd_data,unsigned long cmd_len);
int clear_client_list(void);
/** \brief enter_mc_measure start mc measure thread
  * \return success return true, otherwise return false
  */
int enter_mc_measure(void);
/** \brief get_result out mc measure data to out_buf
  * \return success return true, otherwise return false
  */
int get_mc_measure(unsigned char * out_buf,unsigned int buf_size,ENUM_MC_MEASURE_QUERY query);
/** \brief exit_mc_masure stop mc measure thread
  * \return success return true, otherwise return false
  */
int exit_mc_masure(void);

/*mc measure*/
#define RTICE_IOMEM_CMD_ENTER_MC_MEASURE\
	RTICE_OP_CODE(RTICE_CMD_GROUP_ID_DMA_STATUS, 1)
#define RTICE_IOMEM_CMD_GET_MC_MEASURE\
	RTICE_OP_CODE(RTICE_CMD_GROUP_ID_DMA_STATUS, 2)
#define RTICE_IOMEM_CMD_EXIT_MC_MEASURE\
	RTICE_OP_CODE(RTICE_CMD_GROUP_ID_DMA_STATUS, 3)
/* Error Code*/
#define RTICE_MC_MEASURE_CMD_LEN_ERROR			    RTICE_FUNC_ERR_1(10)
#define RTICE_MC_MEASURE_CREATE_THREAD			    RTICE_FUNC_ERR_1(11)
#define RTICE_MC_MEASURE_TIME_OUT                    RTICE_FUNC_ERR_1(12)
#define RTICE_MC_MEASURE_INVALID_PARAM              RTICE_FUNC_ERR_1(13)
#define RTICE_MC_MEASURE_OUT_BUF_SIZE_SMALL         RTICE_FUNC_ERR_1(14)
#define RTICE_MC_MEASURE_CONTINUE_MODE_ERROR        RTICE_FUNC_ERR_1(15)

#endif
