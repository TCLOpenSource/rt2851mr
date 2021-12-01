
#ifndef _RTK_MEMORY_LAYOUT_H
#define _RTK_MEMORY_LAYOUT_H

#define _MB_ 1024*1024

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
#define MDOMAIN_START_ADDRESS_KERNEL   0x2c000000  // + 3e00000 (+  62M)
#define VIP_START_ADDRESS_KERNEL       0x2fe00000  // + 0200000 (+   2M)
#define OD_START_ADDRESS_KERNEL        0x30000000

#define VDEC_BUFFER_START (VBM_START_ADDRESS_KERNEL)
#define VDEC_BUFFER_SIZE 192*1024*1024    // 180 (64+56+60) MB + 12 MB for compression header

#ifdef VBM_START_ADDRESS_KERNEL
#if (VBM_START_ADDRESS_KERNEL != VDEC_BUFFER_START)
#error "VBM size doesn't match for kernel & drivers!"
#endif
#else
#error "No define VBM_START_ADDRESS_KERNEL"
#endif

#define SCALER_MEMC_START (VDEC_BUFFER_START + VDEC_BUFFER_SIZE)
#define SCALER_MEMC_SIZE (0)

#define SCALER_MDOMAIN_START (SCALER_MEMC_START + SCALER_MEMC_SIZE)
#define SCALER_MDOMAIN_SIZE (62*1024*1024) // 36MB(M-Domain) + 26MB(DI/RTNR) , HW needs

#if (MDOMAIN_START_ADDRESS_KERNEL != SCALER_MDOMAIN_START)
#error "Scaler M-domain size doesn't match for kernel & drivers!"
#endif

#define SCALER_VIP_START (SCALER_MDOMAIN_START + SCALER_MDOMAIN_SIZE)
#define SCALER_VIP_SIZE  2*1024*1024

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

/*
   OD calculation:
   3840 x 2160 x 10bits x 2frame = 20736000 bytes
   20736000 + 512 + 64 = 20736576 bytes (alignment)
 */
#define SCALER_OD_START (SCALER_VIP_START + SCALER_VIP_SIZE)
#ifdef CONFIG_OD_ENABLE
#define SCALER_OD_SIZE  8*1024*1024
#else
#define SCALER_OD_SIZE  0*1024*1024
#endif

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
#define SCALER_MODULE_SIZE (SCALER_MEMC_SIZE + SCALER_MDOMAIN_SIZE + SCALER_VIP_SIZE + SCALER_OD_SIZE) // must be 4MB page block alignment

#if (SCALER_MODULE_SIZE & 0x3FFFFF) // 4MB align
#error "Scaler module size didn't follow 4MB alignment"
#endif

#define DEMUX_TP_BUFFER_START (SCLAER_MODULE_START + SCALER_MODULE_SIZE)
#ifdef CONFIG_RTK_KDRV_DEMUX
#define DEMUX_TP_BUFFER_SIZE 0 //32*_MB_  // must be 4MB page block alignment
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

#ifdef CONFIG_VIDEO_LOSSY_COMP_50P
#define DDR_1GB_VBM_START_ADDRESS_KERNEL       0x20000000  // + 5800000 (+  88M)
#define DDR_1GB_MDOMAIN_START_ADDRESS_KERNEL   0x25800000  // + 3e00000 (+  62M)
#define DDR_1GB_VIP_START_ADDRESS_KERNEL       0x29600000  // + 0200000 (+   2M)
#define DDR_1GB_OD_START_ADDRESS_KERNEL        0x29800000

#define DDR_1GB_VDEC_BUFFER_SIZE 88*1024*1024    // 80 (50% loosy compression) +8M for compression header
#else
#define DDR_1GB_VBM_START_ADDRESS_KERNEL       0x20000000  // + 8000000 (+ 128M)
#define DDR_1GB_MDOMAIN_START_ADDRESS_KERNEL   0x28000000  // + 3e00000 (+  62M)
#define DDR_1GB_VIP_START_ADDRESS_KERNEL       0x2be00000  // + 0200000 (+   2M)
#define DDR_1GB_OD_START_ADDRESS_KERNEL        0x2c000000

#define DDR_1GB_VDEC_BUFFER_SIZE 128*1024*1024    // 120 (default 75% loosy compression) +8M for compression header
#endif
#define DDR_1GB_VDEC_BUFFER_START (DDR_1GB_VBM_START_ADDRESS_KERNEL)

#ifdef DDR_1GB_VBM_START_ADDRESS_KERNEL
#if (DDR_1GB_VBM_START_ADDRESS_KERNEL != DDR_1GB_VDEC_BUFFER_START)
#error "1GB VBM size doesn't match for kernel & drivers!"
#endif
#else
#error "1GB No define VBM_START_ADDRESS_KERNEL"
#endif

#define DDR_1GB_SCALER_MEMC_START (DDR_1GB_VDEC_BUFFER_START + DDR_1GB_VDEC_BUFFER_SIZE)
#define DDR_1GB_SCALER_MEMC_SIZE (0)

#define DDR_1GB_SCALER_MDOMAIN_START (DDR_1GB_SCALER_MEMC_START + DDR_1GB_SCALER_MEMC_SIZE)
#define DDR_1GB_SCALER_MDOMAIN_SIZE (62*1024*1024) // 36MB(M-Domain) + 26MB(DI/RTNR) , HW needs

#if (DDR_1GB_MDOMAIN_START_ADDRESS_KERNEL != DDR_1GB_SCALER_MDOMAIN_START)
#error "1GB Scaler M-domain size doesn't match for kernel & drivers!"
#endif

#define DDR_1GB_SCALER_VIP_START (DDR_1GB_SCALER_MDOMAIN_START + DDR_1GB_SCALER_MDOMAIN_SIZE)
#define DDR_1GB_SCALER_VIP_SIZE  2*1024*1024

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

/*
   OD calculation:
   3840 x 2160 x 10bits x 2frame = 20736000 bytes
   20736000 + 512 + 64 = 20736576 bytes (alignment)
 */
#define DDR_1GB_SCALER_OD_START (DDR_1GB_SCALER_VIP_START + DDR_1GB_SCALER_VIP_SIZE)
#ifdef CONFIG_OD_ENABLE
#define DDR_1GB_SCALER_OD_SIZE  8*1024*1024 // 16,596,992 bytes HW needs
#else
#define DDR_1GB_SCALER_OD_SIZE  0*1024*1024
#endif

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
#define DDR_1GB_SCALER_MODULE_SIZE (DDR_1GB_SCALER_MEMC_SIZE + DDR_1GB_SCALER_MDOMAIN_SIZE + DDR_1GB_SCALER_VIP_SIZE + DDR_1GB_SCALER_OD_SIZE) // must be 4MB page block alignment

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
