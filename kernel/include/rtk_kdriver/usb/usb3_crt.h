#ifndef _USB3_CRT_H_
#define _USB3_CRT_H_

#if defined(CONFIG_RTK_KDRV_XHCI_HCD_PLATFORM)
extern void usb3_crt_on(void);
extern void usb3_crt_off(void);
#else
static inline void usb3_crt_on(void) {}
static inline void usb3_crt_off(void) {}
#endif

#endif
