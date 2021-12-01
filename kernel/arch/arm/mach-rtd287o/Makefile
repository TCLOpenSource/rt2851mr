#
# Makefile for the linux kernel.
#

ifdef CONFIG_RTK_KDRIVER_SUPPORT
KBUILD_CPPFLAGS += -Idrivers/rtk_kdriver/include
KBUILD_CPPFLAGS += -Idrivers/rtk_kdriver/include/rtk_kdriver
KBUILD_CPPFLAGS += -Idrivers/rtk_kdriver/common/include/
KBUILD_CPPFLAGS += -I drivers/rtk_kdriver/common/IPC/generate/include/system
KBUILD_CPPFLAGS += -I drivers/rtk_kdriver/common/IPC/include
endif
KBUILD_CPPFLAGS += -Iarch/$(ARCH)/mach-rtd287o/include
KBUILD_CPPFLAGS += -Iarch/$(ARCH)/mach-rtd287o
KBUILD_CPPFLAGS += -DLITTLE_ENDIAN
KBUILD_CPPFLAGS += -fno-unsigned-char

# Common support
ifeq ($(CONFIG_ARM64),y)
obj-y := timer.o common.o init.o platform.o sysfs.o pm.o
obj-$(CONFIG_HOTPLUG_CPU)	+= hotplug64.o
else
obj-y := io.o serial.o timer.o common.o init.o platform.o sysfs.o pm.o sleep.o
endif

ifneq ($(CONFIG_ARM64),y)
# SMP support
obj-$(CONFIG_SMP)			+= platsmp.o headsmp.o
obj-$(CONFIG_HOTPLUG_CPU)	+= hotplug.o
endif


#ddk for 006 need clk_()
ifdef CONFIG_TV006
obj-y += clock.o
endif

#Keypad driver
obj-$(CONFIG_REALTEK_KEYPAD) += keypad.o

#EXTRA_CFLAGS += -I ./

#hiberation
ifdef CONFIG_LG_SNAPSHOT_BOOT
KBUILD_CPPFLAGS += -Ikernel/power/
endif

KBUILD_CPPFLAGS += -Idrivers/staging/android/ion/


#CFLAGS_rtk_clock.o := -DDEBUG
