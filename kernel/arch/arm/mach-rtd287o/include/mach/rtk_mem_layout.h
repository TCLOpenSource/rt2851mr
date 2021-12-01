
#ifndef _RTK_MEMORY_LAYOUT_H
#define _RTK_MEMORY_LAYOUT_H

#define _MB_ 1024*1024
#define DO_ALIGNMENT(x, y) (DIV_ROUND_UP(x, y))*y
#define DO_ALIGNMENT_CHECK(x, y) (x & (y - 1))

/**
 *  --- Default memory layout start ---
 */

#if defined (CONFIG_IMG_DEMOD_CARVED_OUT_ADDRESS)
#define DEMOD_CARVED_OUT CONFIG_IMG_DEMOD_CARVED_OUT_ADDRESS
#else
#define DEMOD_CARVED_OUT 0x02000000  //compatible for previous released version.
#endif  //#if defined (CONFIG_IMG_DEMOD)

#define VIDEO_RINGBUFFER_START         0x1b200000
#define VIDEO_RINGBUFFER_SIZE			0x1000000
#define VIDEO_RINGBUFFER_SIZE_K2L_ONLY 		 0x1800000

#ifdef CONFIG_REALTEK_LOGBUF
#define CONST_LOGBUF_MEM_ADDR_START (0x1ca00000)
#define CONST_LOGBUF_MEM_SIZE (512*1024)
#endif

#ifdef CONFIG_CUSTOMER_TV006	//for GAL reserve mem, 4MB align
extern const int GAL_MEM_SIZE;
extern const int GAL_MEM_ADDR_START;
#else
#define GAL_MEM_SIZE 0
#define GAL_MEM_ADDR_START 0
#endif

#define VBM_START_ADDRESS_KERNEL       0x20000000  // + c000000 (+ 192M)
#define MEMC_START_ADDRESS_KERNEL      0x2c000000  // + 4300000 (+  67M)
#define MDOMAIN_START_ADDRESS_KERNEL   0x30300000  // + 3b00000 (+  59M)
#define VIP_START_ADDRESS_KERNEL       0x33e00000  // + 0200000 (+   2M)
#define OD_START_ADDRESS_KERNEL        0x34000000  // + 0500000 (+   5M)

#define VDEC_BUFFER_START (VBM_START_ADDRESS_KERNEL)
#define VDEC_BUFFER_SIZE 192*_MB_    // 184 MB + 8 MB for compression header

#ifdef VBM_START_ADDRESS_KERNEL
#if (VBM_START_ADDRESS_KERNEL != VDEC_BUFFER_START)
#error "VBM size doesn't match for kernel & drivers!"
#endif
#else
#error "No define VBM_START_ADDRESS_KERNEL"
#endif

#define SCALER_MEMC_START (VDEC_BUFFER_START + VDEC_BUFFER_SIZE)
#define SCALER_MEMC_SIZE (67*_MB_)

#if (MEMC_START_ADDRESS_KERNEL != SCALER_MEMC_START)
#error "Scaler M-domain size doesn't match for kernel & drivers!"
#endif

#define SCALER_MDOMAIN_START (SCALER_MEMC_START + SCALER_MEMC_SIZE)
#define SCALER_MDOMAIN_SIZE (59*_MB_) // 37MB(M-Domain) + 22MB(DI/RTNR)

#if (MDOMAIN_START_ADDRESS_KERNEL != SCALER_MDOMAIN_START)
#error "Scaler M-domain size doesn't match for kernel & drivers!"
#endif

#define SCALER_VIP_START (SCALER_MDOMAIN_START + SCALER_MDOMAIN_SIZE)
#define SCALER_VIP_SIZE  (2*_MB_)

//fixme: why can't enable this compile check in arm64?
#ifndef CONFIG_ARM64
#ifdef VIP_START_ADDRESS_KERNEL
#if (VIP_START_ADDRESS_KERNEL != SCALER_VIP_START)
#error "Scaler VIP size doesn't match for kernel & drivers!"
#endif
#else
#error "No define VIP_START_ADDRESS_KERNEL"
#endif
#endif

#define SCALER_OD_START (SCALER_VIP_START + SCALER_VIP_SIZE)
#define SCALER_OD_SIZE  5*_MB_

//fixme: why can't enable this compile check in arm64?
#ifndef CONFIG_ARM64
#ifdef OD_START_ADDRESS_KERNEL
#if (OD_START_ADDRESS_KERNEL != SCALER_OD_START)
#error "Scaler OD size doesn't match for kernel & drivers!"
#endif
#else
#error "No define OD_START_ADDRESS_KERNEL"
#endif
#endif

#define SCLAER_MODULE_START SCALER_MEMC_START
#define SCALER_MODULE_SIZE_QUERY (SCALER_MEMC_SIZE + SCALER_MDOMAIN_SIZE + SCALER_VIP_SIZE + SCALER_OD_SIZE)
#define SCALER_MODULE_SIZE DO_ALIGNMENT(SCALER_MODULE_SIZE_QUERY, 4*_MB_)
#define SCALER_MODULE_BAND (SCALER_MODULE_SIZE - SCALER_MODULE_SIZE_QUERY)

#if (SCALER_MODULE_SIZE & 0x3FFFFF) // 4MB align
#error "Scaler module size didn't follow 4MB alignment"
#endif

#define DEMUX_TP_BUFFER_START (SCLAER_MODULE_START + SCALER_MODULE_SIZE)
#ifdef CONFIG_RTK_KDRV_DEMUX
#define DEMUX_TP_BUFFER_SIZE 32*_MB_  // must be 4MB page block alignment
#else
#define DEMUX_TP_BUFFER_SIZE 0
#endif

#ifdef CONFIG_KASAN
#define KASAN_SHADOW_PHYS_DEFAULT (DEMUX_TP_BUFFER_START + DEMUX_TP_BUFFER_SIZE)
#endif

#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
#define BW_HIGH_CMA_SIZE        (88*_MB_)	// Better BW CMA size in HighMem
#endif

/**
 *  --- Default memory layout end ---
 */


/**
 *  --- 1GB memory layout start ---
 */
#define DDR_1GB_VIDEO_RINGBUFFER_START         0x1b200000
#define DDR_1GB_VIDEO_RINGBUFFER_SIZE			0x1000000
#define DDR_1GB_VIDEO_RINGBUFFER_SIZE_K2L_ONLY 		 0x1800000

#ifdef CONFIG_REALTEK_LOGBUF
#define DDR_1GB_CONST_LOGBUF_MEM_ADDR_START (0x1ca00000)
#define DDR_1GB_CONST_LOGBUF_MEM_SIZE (512*1024)
#endif

#ifdef CONFIG_CUSTOMER_TV006	//for GAL reserve mem, 4MB align
extern const int DDR_1GB_GAL_MEM_SIZE;
extern const int DDR_1GB_GAL_MEM_ADDR_START;
#else
#define DDR_1GB_GAL_MEM_SIZE 0
#define DDR_1GB_GAL_MEM_ADDR_START 0
#endif

#define DDR_1GB_VBM_START_ADDRESS_KERNEL       0x20000000  // + c000000 (+ 192M)
#define DDR_1GB_MEMC_START_ADDRESS_KERNEL      0x2c000000  // + 0000000 (+   0M)
#define DDR_1GB_MDOMAIN_START_ADDRESS_KERNEL   0x2c000000  // + 3b00000 (+  59M)
#define DDR_1GB_VIP_START_ADDRESS_KERNEL       0x2fb00000  // + 0200000 (+   2M)
#define DDR_1GB_OD_START_ADDRESS_KERNEL        0x2fd00000  // + 0400000 (+   4M)

#define DDR_1GB_VDEC_BUFFER_START (DDR_1GB_VBM_START_ADDRESS_KERNEL)
#define DDR_1GB_VDEC_BUFFER_SIZE 192*_MB_    // 184 MB + 8 MB for compression header

#ifdef DDR_1GB_VBM_START_ADDRESS_KERNEL
#if (DDR_1GB_VBM_START_ADDRESS_KERNEL != DDR_1GB_VDEC_BUFFER_START)
#error "1GB VBM size doesn't match for kernel & drivers!"
#endif
#else
#error "1GB No define VBM_START_ADDRESS_KERNEL"
#endif

#define DDR_1GB_SCALER_MEMC_START (DDR_1GB_VDEC_BUFFER_START + DDR_1GB_VDEC_BUFFER_SIZE)
#define DDR_1GB_SCALER_MEMC_SIZE (0*_MB_)

#if (DDR_1GB_MEMC_START_ADDRESS_KERNEL != DDR_1GB_SCALER_MEMC_START)
#error "1GB Scaler M-domain size doesn't match for kernel & drivers!"
#endif

#define DDR_1GB_SCALER_MDOMAIN_START (DDR_1GB_SCALER_MEMC_START + DDR_1GB_SCALER_MEMC_SIZE)
#define DDR_1GB_SCALER_MDOMAIN_SIZE (59*_MB_) // 37MB(M-Domain) + 22MB(DI/RTNR)

#if (DDR_1GB_MDOMAIN_START_ADDRESS_KERNEL != DDR_1GB_SCALER_MDOMAIN_START)
#error "1GB Scaler M-domain size doesn't match for kernel & drivers!"
#endif

#define DDR_1GB_SCALER_VIP_START (DDR_1GB_SCALER_MDOMAIN_START + DDR_1GB_SCALER_MDOMAIN_SIZE)
#define DDR_1GB_SCALER_VIP_SIZE  (2*_MB_)

//fixme: why can't enable this compile check in arm64?
#ifndef CONFIG_ARM64
#ifdef DDR_1GB_VIP_START_ADDRESS_KERNEL
#if (DDR_1GB_VIP_START_ADDRESS_KERNEL != DDR_1GB_SCALER_VIP_START)
#error "1GB Scaler VIP size doesn't match for kernel & drivers!"
#endif
#else
#error "No define DDR_1GB_VIP_START_ADDRESS_KERNEL"
#endif
#endif

#define DDR_1GB_SCALER_OD_START (DDR_1GB_SCALER_VIP_START + DDR_1GB_SCALER_VIP_SIZE)
#define DDR_1GB_SCALER_OD_SIZE  4*_MB_

//fixme: why can't enable this compile check in arm64?
#ifndef CONFIG_ARM64
#ifdef DDR_1GB_OD_START_ADDRESS_KERNEL
#if (DDR_1GB_OD_START_ADDRESS_KERNEL != DDR_1GB_SCALER_OD_START)
#error "1GB Scaler OD size doesn't match for kernel & drivers!"
#endif
#else
#error "1GB No define OD_START_ADDRESS_KERNEL"
#endif
#endif

#define DDR_1GB_SCLAER_MODULE_START DDR_1GB_SCALER_MEMC_START
#define DDR_1GB_SCALER_MODULE_SIZE_QUERY (DDR_1GB_SCALER_MEMC_SIZE + DDR_1GB_SCALER_MDOMAIN_SIZE + DDR_1GB_SCALER_VIP_SIZE + DDR_1GB_SCALER_OD_SIZE)
#define DDR_1GB_SCALER_MODULE_SIZE DO_ALIGNMENT(DDR_1GB_SCALER_MODULE_SIZE_QUERY, 4*_MB_)
#define DDR_1GB_SCALER_MODULE_BAND (DDR_1GB_SCALER_MODULE_SIZE - DDR_1GB_SCALER_MODULE_SIZE_QUERY)

#if (DDR_1GB_SCALER_MODULE_SIZE & 0x3FFFFF) // 4MB align
#error "1GB Scaler module size didn't follow 4MB alignment"
#endif

#define DDR_1GB_DEMUX_TP_BUFFER_START (DDR_1GB_SCLAER_MODULE_START + DDR_1GB_SCALER_MODULE_SIZE)
#ifdef CONFIG_RTK_KDRV_DEMUX
#define DDR_1GB_DEMUX_TP_BUFFER_SIZE 0 //32*_MB_  // must be 4MB page block alignment
#else
#define DDR_1GB_DEMUX_TP_BUFFER_SIZE 0
#endif

#ifdef CONFIG_KASAN
#define DDR_1GB_KASAN_SHADOW_PHYS (DDR_1GB_DEMUX_TP_BUFFER_START + DDR_1GB_DEMUX_TP_BUFFER_SIZE)
#endif

#ifdef CONFIG_HIGHMEM_BW_CMA_REGION
#define DDR_1GB_BW_HIGH_CMA_SIZE        (0*_MB_)	// Better BW CMA size in HighMem
#endif

/**
 *  --- 1GB memory layout end ---
 */


#define GPU_MEM_SIZE 256*1024*1024

#define RTK_GPU_FW_SIZE (512*1024)

/* static reserved for drivers, which allocate from cma region original */
#ifdef CONFIG_VMSPLIT_3G_OPT
#define CMA_HIGH_RESERVED_SIZE        (GPU_MEM_SIZE - 80*_MB_)     // reserved for high memory
#else
#define CMA_HIGH_RESERVED_SIZE        (GPU_MEM_SIZE)               // reserved for high memory
#endif


#endif //_RTK_MEMORY_LAYOUT_H
