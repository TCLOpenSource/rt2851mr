#ifndef __ATSC3_ALP_LIB_H__
#define __ATSC3_ALP_LIB_H__

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack(1)

#define ATSC3_ALP_HDR_SIZE        188

unsigned char* atsc3_alp_find_starter(unsigned char *alp, unsigned long alp_len, unsigned long sb_len);
unsigned char* atsc3_alp_find_packet_starter(unsigned char *data, unsigned long data_len, unsigned long header_len);


//////////////////////////////////////////////
#if 0
#define OIF_WARNING(fmt, ...)       printf("[OIF] Warn, " fmt, __VA_ARGS__)
#define OIF_INFO(fmt, ...)          printf("[OIF] Info, " fmt, __VA_ARGS__)
#define OIF_DBG(fmt, ...)           printf("[OIF] Dbg, " fmt, __VA_ARGS__)
#else
#define ATSC3_ALP_WARNING(fmt, args...)       printk(KERN_WARNING "[ATSC3_ALP][WARN], " fmt, ## args)
#define ATSC3_ALP_INFO(fmt, args...)          printk(KERN_INFO "[ATSC3_ALP][INFO], " fmt, ## args)
#define ATSC3_ALP_DBG(fmt, args...)           printk(KERN_DEBUG "[ATSC3_ALP][DBG], " fmt, ## args)
#endif

#ifdef __cplusplus
}
#endif

#endif
