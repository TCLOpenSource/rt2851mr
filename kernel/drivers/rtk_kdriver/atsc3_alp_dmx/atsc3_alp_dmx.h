#ifndef __ATSC3_ALP_DMX_H__
#define __ATSC3_ALP_DMX_H__

#ifdef __cplusplus
extern "C" {
#endif

#define ATSC3_ALP_RELEASE_DATA(alp_len) \
        p_rp = p_rp + alp_len; \
        len  = len - alp_len;

//#pragma pack(1)

struct atsc3_alp_dmx_callback {
        void (*callback)(void* p_ctx, unsigned char plp, unsigned char* p_data, unsigned char type, unsigned int len, unsigned char cc, unsigned char *pTimeinfo);
};

#define DMX_FLAG_THREAD_START    0x2
#define DMX_FLAG_THREAD_STOP     0x1

struct atsc3_alp_dmx {
        unsigned char   alp_buffer[65536];   // tmep buffer for multi segment buffer
        unsigned long   alp_buff_zize;
        unsigned char   tsp_buffer[188];     // tmep buffer for multi segment buffer
        unsigned char   tsp_buff_size;       // tmep buffer for multi segment buffer
        unsigned char   tsp_excepted_size;   // tmep buffer for multi segment buffer

        unsigned char   tp_id;

        struct task_struct *thread_id;
        unsigned long   flags;
        struct atsc3_alp_dmx_callback cb;    // dmx callback

        struct {
                int (*start)(struct atsc3_alp_dmx* dmx);
                int (*stop)(struct atsc3_alp_dmx* dmx);
                int (*run)(struct atsc3_alp_dmx* dmx);
        } ops;
};

///////////////////////////////////////////////////////
struct atsc3_alp_dmx* create_atsc3_alp_dmx(struct atsc3_alp_dmx_callback* cb, UINT8 tp_id);
void destroy_atsc3_alp_dmx(struct atsc3_alp_dmx* dmx);

int atsc3_alp_file_ring_read_data(unsigned char** pp_rp, UINT32* p_len, UINT8 tp_id);
int atsc3_alp_file_ring_release_data(unsigned char* p_rp, UINT32 len, UINT8 tp_id);
int atsc3_alp_file_ring_get_free_space(unsigned char** pp_wp, unsigned long* p_len);
int atsc3_alp_file_ring_put_data(unsigned char* p_wp, unsigned long len);
///////////////////////////////////////////////////////

#ifdef ATSC3_ALP_DMX_TRACE_EN
#define ATSC3_ALP_DMX_TRACE()                printk(KERN_INFO "[ATSC3_ALP_DMX][TRACE] %s:%d:%s\n", __FILE__, __LINE__, __FUNCTION__)
#else
#define ATSC3_ALP_DMX_TRACE()
#endif

#define ATSC3_ALP_DMX_DBG_EN
#ifdef ATSC3_ALP_DMX_DBG_EN
//windows
//#define ATSC3_ALP_DMX_DBG(fmt, ...)       printf("[ATSC3_ALP_DMX] Dbg, " fmt, __VA_ARGS__)
//#define ATSC3_ALP_DMX_INFO(fmt, ...)       printf("[ATSC3_ALP_DMX] Info, " fmt, __VA_ARGS__)
//#define ATSC3_ALP_DMX_WARN(fmt, ...)       printf("[ATSC3_ALP_DMX] Warn, " fmt, __VA_ARGS__)

// linux
//#define ATSC3_ALP_DMX_DBG(fmt, args...)       printk(KERN_ERR "[ATSC3_ALP_DMX] Warn, " fmt, ## args)
#define ATSC3_ALP_DMX_DBG(fmt, args...)
#define ATSC3_ALP_DMX_INFO(fmt, args...)       printk(KERN_ERR "[ATSC3_ALP_DMX] Info, " fmt, ## args)
#define ATSC3_ALP_DMX_WARN(fmt, args...)       printk(KERN_ERR "[ATSC3_ALP_DMX] Dbg, " fmt, ## args)
#define ATSC3_ALP_DMX_ERROR(fmt, args...)      printk(KERN_EMERG "[ATSC3_ALP_DMX] Err, " fmt, ## args)

#else

#define ATSC3_ALP_DMX_DBG(fmt, ...)
#define ATSC3_ALP_DMX_INFO(fmt, ...)
#define ATSC3_ALP_DMX_WARN(fmt, ...)
#define ATSC3_ALP_DMX_ERROR(fmt, args...)

#endif

#ifdef __cplusplus
}
#endif

#endif
