#ifndef __ASM_KASAN_H
#define __ASM_KASAN_H

#ifdef CONFIG_KASAN

#define KASAN_SHADOW_OFFSET  _AC(CONFIG_KASAN_SHADOW_OFFSET, UL)

#include <asm/memory.h>
/*
 * Compiler uses shadow offset assuming that addresses start
 * from 0. Kernel addresses don't start from 0, so shadow
 * for kernel really starts from 'compiler's shadow offset' +
 * ('kernel address space start' >> KASAN_SHADOW_SCALE_SHIFT)
 */

//kasan_shadow_size (0xf0000000 - 0xbf600000) >> 3 = 0x6140000
//kasan_shadow_start 0xbf600000 - 0x6140000 = 0xb94c0000

#define KASAN_MONITOR_VA_UPBOUND    0xf0000000
#define KASAN_SHADOW_START      KASAN_SHADOW_END - ((KASAN_MONITOR_VA_UPBOUND - KASAN_SHADOW_END) >> 3) //0xb94c0000

#define KASAN_SHADOW_END        0xbf600000

void kasan_init(void);

#else
static inline void kasan_init(void) { }
#endif

#endif
