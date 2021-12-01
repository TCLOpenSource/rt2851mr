#ifndef __TLV_LIB_H__
#define __TLV_LIB_H__

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack(1)

#define TLV_STARTER_VAL     0x7F
#define TLV_HDR_SIZE        4

typedef struct {
        unsigned int   starter;

        unsigned int   plp_id: 6;
        unsigned int   err: 1;
        unsigned int   err_en: 1;
        unsigned int   length : 16;
        unsigned int   cc : 8;
        unsigned char  tmode;
        unsigned int   tinfo_l;
        unsigned int   tinfo_h;
} TLV_HDR;

unsigned char* tlv_find_starter(unsigned char*      oif, unsigned long oif_len, unsigned long sb_len);

#define TLV_STARTER(oif)    (*(unsigned int*)oif)
#define TLV_PLP(oif)        (oif[4] & 0x3F)
#define TLV_ERROR(oif)      ((oif[4]>>6) & 0x3)
#define TLV_LENGTH(oif)     ((oif[5]<<8) + oif[6])
#define TLV_CC(oif)         (oif[7])

//////////////////////////////////////////////
#if 0
#define OIF_WARNING(fmt, ...)       printf("[OIF] Warn, " fmt, __VA_ARGS__)
#define OIF_INFO(fmt, ...)          printf("[OIF] Info, " fmt, __VA_ARGS__)
#define OIF_DBG(fmt, ...)           printf("[OIF] Dbg, " fmt, __VA_ARGS__)
#else
#define TLV_WARNING(fmt, args...)       printk(KERN_WARNING "[TLV][WARN], " fmt, ## args)
#define TLV_INFO(fmt, args...)          printk(KERN_INFO "[TLV][INFO], " fmt, ## args)
#define TLV_DBG(fmt, args...)           printk(KERN_DEBUG "[TLV][DBG], " fmt, ## args)
#endif

#ifdef __cplusplus
}
#endif

#endif
