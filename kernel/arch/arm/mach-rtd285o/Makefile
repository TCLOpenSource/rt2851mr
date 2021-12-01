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
KBUILD_CPPFLAGS += -Iarch/$(ARCH)/mach-rtd285o/include
KBUILD_CPPFLAGS += -Iarch/$(ARCH)/mach-rtd285o
KBUILD_CPPFLAGS += -DLITTLE_ENDIAN
KBUILD_CPPFLAGS += -fno-unsigned-char

ifeq ($(ARCH),arm64)
KBUILD_CFLAGS1 := $(KBUILD_CFLAGS)
KBUILD_CFLAGS2 := -Werror
KBUILD_CFLAGS := $(filter-out $(KBUILD_CFLAGS2),$(KBUILD_CFLAGS1))
endif

# Common support
ifeq ($(CONFIG_ARM64),y)
obj-y := timer.o common.o init.o platform.o sysfs.o pm.o
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

# dependencies on generated files need to be listed explicitly
$(obj)/init.o: include/generated/compile.h
$(obj)/sysfs.o: include/generated/compile.h
 
# compile.h changes depending on hostname, generation number, etc,
# so we regenerate it always.
# mkcompile_h will make sure to only update the
# actual file if its content has changed.

      chk_compile.h = :
 quiet_chk_compile.h = echo '  CHK     $@'
silent_chk_compile.h = :
include/generated/compile.h: FORCE
	@$($(quiet)chk_compile.h)
	$(Q)$(CONFIG_SHELL) $(srctree)/scripts/mkcompile_h $@ \
	"$(UTS_MACHINE)" "$(CONFIG_SMP)" "$(CONFIG_PREEMPT)" "$(CC) $(KBUILD_CFLAGS)"
