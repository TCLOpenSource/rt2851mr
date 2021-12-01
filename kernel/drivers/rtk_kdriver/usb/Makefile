obj-y += usb-platform.o rtk_usb_core.o

rtk-xhci-plat-hcd-y := xhci-plat.o xhci-sysfs.o usb3_crt.o
obj-$(CONFIG_RTK_KDRV_XHCI_HCD_PLATFORM) += rtk-xhci-plat-hcd.o

obj-y += usb2_crt.o
rtk-ehci-platform-y += ehci-platform.o ehci-sysfs.o ehci-phy.o
obj-$(CONFIG_RTK_KDRV_EHCI_HCD_PLATFORM) += rtk-ehci-platform.o

rtk-ohci-platform-y += ohci-platform.o
obj-$(CONFIG_RTK_KDRV_OHCI_HCD_PLATFORM) += rtk-ohci-platform.o
