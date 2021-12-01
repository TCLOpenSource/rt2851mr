#ifndef _AUDIO_CMD_ID_H_
#define _AUDIO_CMD_ID_H_

/*
 * Ioctl definitions
 */

/* Use 'a' as magic number */
#define RTKAUDIO_IOC_MAGIC  'a'
/*
 * S means "Set"                : through a ptr,
 * T means "Tell"               : directly with the argument value
 * G means "Get"                : reply by setting through a pointer
 * Q means "Query"              : response is on the return value
 * X means "eXchange"           : G and S atomically
 * H means "sHift"              : T and Q atomically
 */
#define RTKAUDIO_IOC_INIT                   _IO(RTKAUDIO_IOC_MAGIC, 1)
#define RTKAUDIO_IOC_DEINIT                 _IO(RTKAUDIO_IOC_MAGIC, 2)
#define RTKAUDIO_IOC_OPEN                   _IOW(RTKAUDIO_IOC_MAGIC, 3, int)
#define RTKAUDIO_IOC_CLOSE                  _IOW(RTKAUDIO_IOC_MAGIC, 4, int)
#define RTKAUDIO_IOC_CONNECT                _IOW(RTKAUDIO_IOC_MAGIC, 5, int)
#define RTKAUDIO_IOC_SET                    _IOW(RTKAUDIO_IOC_MAGIC, 6, int)
#define RTKAUDIO_IOC_GET                    _IOR(RTKAUDIO_IOC_MAGIC, 7, int)
#define RTKAUDIO_IOC_GET_ALL                _IOR(RTKAUDIO_IOC_MAGIC, 8, int)
#define RTKAUDIO_IOC_FW_REMOTE_MALLOC_SUM   _IOR(RTKAUDIO_IOC_MAGIC, 9, int)
#define RTKAUDIO_IOC_ALLOC                  _IOW(RTKAUDIO_IOC_MAGIC, 10, int)
#define RTKAUDIO_IOC_FREE                   _IOW(RTKAUDIO_IOC_MAGIC, 11, int)
#define RTKAUDIO_IOC_ALLOC_SUM              _IOR(RTKAUDIO_IOC_MAGIC, 12, int)
#define RTKAUDIO_IOC_AUDIO_CONFIG           _IOWR(RTKAUDIO_IOC_MAGIC, 13, int)
#define RTKAUDIO_IOC_READ_REG               _IOR(RTKAUDIO_IOC_MAGIC, 14, int)
#define RTKAUDIO_IOC_WRITE_REG              _IOW(RTKAUDIO_IOC_MAGIC, 15, int)

/* RTKAudio control status */
typedef enum {
    RESOURCE_STATUS,
    MAIN_FLOW_STATUS,
    SUB_FLOW_STATUS,
    AIN_STATUS,
    SE_STATUS,
    AIN_AGENT_STATUS,
    PPAO_AGENT_STATUS,
    DECODER_STATUS,
    MAIN_DECODER_STATUS,
    ALSA_DEV_INFO,
    GST_DEBUG_INFO,
    VIRTUALX_CMD_INFO,
    REGION_INFO,
    INIT_VOICEAP_CMD_Q,
    ACMD_INFO,
    VOICE_CREATE_HANDLE,
    MAX_CONTROL_NUM,
} RTKAUDIO_CONTROL_TYPE;

/* IOCTL return structure */
struct ret_info {
    unsigned int private_info[16];
};
typedef struct ret_info ret_info_t;

/* IOCTL set/get control structure */
struct cntl_info {
    int resource_type;
    unsigned int addr;
    int size;
};
typedef struct cntl_info cntl_info_t;

/* GST info */
struct gst_info {
    int gst_open;
    unsigned long long decoded_size;
    unsigned long long undecoded_size;
};
typedef struct gst_info gst_info_t;

/* Virtual X cmd info */
struct virtualx_cmd_info {
    unsigned int index;
    unsigned int result;
    unsigned int type;
    unsigned int size;
    unsigned int data[60];
};
typedef struct virtualx_cmd_info virtualx_cmd_info;

typedef enum {
    ACMD_CREATE,
    ACMD_DESTROY,
    ACMD_INIT_RING_BUFFER_HRADER,
    ACMD_PP_INIT_PIN,
    ACMD_PRIVATE_INFO,
    ACMD_SET_REF_CLOCK,
    ACMD_SWITCH_FOCUS,
    ACMD_CONNECT,
    ACMD_RUN,
    ACMD_PAUSE,
    ACMD_FLUSH,
    ACMD_STOP,
    ACMD_SET_DUAL_MONO_OUTMODE,
    ACMD_GET_AUDIO_FORMAT_INFO,
    ACMD_SET_SEEKING,
    ACMD_CREATE_HAL_DECODER,
    ACMD_DESTROY_HAL_DECODER,
    ACMD_INIT_HAL_DECODER_OUT_RING_BUFFER_HRADER,
    ACMD_INIT_HAL_DECODER_ICQ_RING_BUFFER_HRADER,
    ACMD_INIT_HAL_DECODER_DSQ_RING_BUFFER_HRADER,
    ACMD_DISCONNECT,
    ACMD_INIT_RING_BUFFER_HRADER_WITH_PID,
} RTKAUDIO_ACMD_TYPE;

/* OMX CMD info */
struct omx_rpc_cmd {
    int cmd_type;
    unsigned int addr;
    int size;
};
typedef struct omx_rpc_cmd omx_rpc_cmd_t;

#endif

