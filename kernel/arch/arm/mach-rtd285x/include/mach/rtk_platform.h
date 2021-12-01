
#ifndef _RTK_PLATFORM_H
#define _RTK_PLATFORM_H

#include <linux/pageremap.h>
#include <mach/rtk_mem_layout.h>


typedef enum {
	/* address 512MB before */
	CARVEDOUT_BOOTCODE = 0,
	CARVEDOUT_DEMOD,        // device
	CARVEDOUT_AV_DMEM,
#ifdef CONFIG_REALTEK_SECURE
	CARVEDOUT_K_BOOT,
	CARVEDOUT_K_OS,
#endif
	CARVEDOUT_MAP_RBUS,
#ifdef CONFIG_REALTEK_SECURE_DDK
	CARVEDOUT_GPU_FW,
#endif
	CARVEDOUT_AV_OS,
#if defined(CONFIG_REALTEK_RPC) ||defined(CONFIG_RTK_KDRV_RPC)
	CARVEDOUT_MAP_RPC,
#endif
	CARVEDOUT_VDEC_RINGBUF, // device
#ifdef CONFIG_REALTEK_LOGBUF
	CARVEDOUT_LOGBUF,
#endif
	CARVEDOUT_ROMCODE,
#ifdef CONFIG_PSTORE
	CARVEDOUT_RAMOOPS,
#endif
	CARVEDOUT_IB_BOUNDARY,

	/* device */
#ifdef CONFIG_CUSTOMER_TV006
	CARVEDOUT_GAL,
#endif
#ifdef CONFIG_LG_SNAPSHOT_BOOT
	CARVEDOUT_SNAPSHOT,
#endif
	CARVEDOUT_SCALER,
	CARVEDOUT_SCALER_MEMC,
	CARVEDOUT_SCALER_MDOMAIN,
	CARVEDOUT_SCALER_VIP,
	CARVEDOUT_SCALER_OD,
	CARVEDOUT_VDEC_VBM,
	CARVEDOUT_TP,

#if 0
    CARVEDOUT_KASAN,
#endif

	/* for desired cma size calculation */
	CARVEDOUT_CMA_LOW,
	CARVEDOUT_CMA_HIGH,

#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
	CARVEDOUT_HIGHMEM_BW_START,
	CARVEDOUT_BW_HIGH_CMA,
#endif

	/* array end number */
	CARVEDOUT_NUM,

	/* for reserved size in highmem */
	CARVEDOUT_HIGH_START = CARVEDOUT_SCALER_MEMC,
#if 0
	CARVEDOUT_HIGH_END = CARVEDOUT_KASAN
#else
	CARVEDOUT_HIGH_END = CARVEDOUT_TP
#endif

} carvedout_buf_t;

typedef enum {
	CARVEDOUT_NO_FALLBACK = 0,
	CARVEDOUT_FALLBACK_TO_CMA,
	CARVEDOUT_FALLBACK_TO_VBM
} carvedout_fallback_type_t;

typedef enum {
	MM_LAYOUT_DEFAULT = 0,
	MM_LAYOUT_1GB,

	MM_LAYOUT_CARVEDOUT_NUM
} mm_layout_index_t;

extern unsigned long carvedout_buf[MM_LAYOUT_CARVEDOUT_NUM][CARVEDOUT_NUM][2];

enum PLAFTORM_TYPE
{
	PLATFORM_RTD299OP	= 0, //K2LP
	PLATFORM_RTD299O	= 1, //K2L
	PLATFORM_RTD289XP	= 2, //K3LP
	PLATFORM_RTD289X	= 3, //K3L
	PLATFORM_RTD289XPP	= 4, //K3LPP
	PLATFORM_RTD284X	= 5, //S4AP
	PLATFORM_RTD287X	= 6, //K4L
	PLATFORM_RTD285X	= 7, //Mac6
	PLATFORM_OTHER		= 255
};

#define PLATFORM_KXLP	PLATFORM_RTD285X
#define PLATFORM_KXL	PLATFORM_OTHER
#define PLATFORM_KXLPP	PLATFORM_OTHER

enum PLAFTORM_TYPE get_platform (void);
unsigned long get_uart_clock(void);

unsigned long carvedout_buf_query(carvedout_buf_t what, void **addr);
unsigned long carvedout_buf_query_range(carvedout_buf_t idx_start, carvedout_buf_t idx_end, void **start, void **end);
unsigned int carvedout_fallback_query(carvedout_buf_t what);
unsigned int get_irq_num(unsigned int hwirq);


#ifdef CONFIG_CMA_MONITOR
#define MAX_CMA_LIMIT_DEMUX 17*_MB_
#define MAX_CMA_LIMIT_RTKVDEC 57*_MB_
#define MAX_CMA_LIMIT_SCALER 10*_MB_
#endif

#endif //_RTK_PLATFORM_H

