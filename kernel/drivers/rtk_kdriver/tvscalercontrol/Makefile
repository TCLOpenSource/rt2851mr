#
# Makefile for the Realtek scaler drivers.
#
ifeq (y,$(filter y, $(CONFIG_CUSTOMER_TV010)))
obj-y :=scaler_vfedev.o scaler_vscdev.o scaler_vbedev.o scaler_vpqdev.o scaler_vpqdev_unittest.o scaler_vpqleddev.o scaler_vpqdev_extern_tv010.o scaler_vtdev.o scaler_hdcp2dev.o scaler_vpqmemcdev.o io/ i3ddma/ vip/ vdc/ adcSource/ panel/ scaler/ scalerdrv/ pcbsource/ vdac/ avd/ vbi/ vo/ scaler_drv_verify/
else
obj-y := i3ddma/ vbi/ scaler_vtdev.o scaler_vrdev.o scaler_vfedev.o scaler_vscdev.o scaler_vbedev.o scaler_vpqdev.o scaler_vpqdev_unittest.o scaler_vpqleddev.o scaler_vpqdev_extern.o scaler_vtdev.o scaler_hdcp2dev.o scaler_vpqmemcdev.o io/ i3ddma/ vip/ vdc/ adcSource/ panel/ scaler/ scalerdrv/ pcbsource/ vdac/ avd/ vbi/ vo/ scaler_drv_verify/
endif
 
ifeq (y,$(filter y, $(CONFIG_RTK_KDRV_HDMI_ENABLE_V4L2)))
#obj-y += scaler_vfedev_v4l2-hdmi.o
#obj-y += scaler_vfedev_v4l2-hdmi-sysfs.o
endif
 
ifeq (y,$(filter y, $(CONFIG_OPTEE_HDCP2)))
#do noting, mv hdcp2 to optee os
else
obj-y += hdcp2_2/
endif
#obj-y := io/ adcSource/ frontend/ hdmirx/ scaler/ scalerdrv/ vdc/ vip/ tve/ vdac/ hdcp2_2/ i3ddma/
#SUBDIRS += io adcSource frontend hdmiRx scaler scalerDrv vdc vip tve vdac hdcp2_2
#
KBUILD_CFLAGS += -Wall -Werror

