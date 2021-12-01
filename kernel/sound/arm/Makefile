# SPDX-License-Identifier: GPL-2.0
#
# Makefile for ALSA
#

obj-$(CONFIG_SND_ARMAACI)	+= snd-aaci.o
snd-aaci-objs			:= aaci.o

obj-$(CONFIG_SND_PXA2XX_PCM)	+= snd-pxa2xx-pcm.o
snd-pxa2xx-pcm-objs		:= pxa2xx-pcm.o

obj-$(CONFIG_SND_PXA2XX_LIB)	+= snd-pxa2xx-lib.o
snd-pxa2xx-lib-y		:= pxa2xx-pcm-lib.o
snd-pxa2xx-lib-$(CONFIG_SND_PXA2XX_LIB_AC97)	+= pxa2xx-ac97-lib.o

obj-$(CONFIG_SND_PXA2XX_AC97)	+= snd-pxa2xx-ac97.o
snd-pxa2xx-ac97-objs		:= pxa2xx-ac97.o

KBUILD_CPPFLAGS += -Idrivers/staging/android/ion_legacy

ifdef CONFIG_RTK_KDRIVER_SUPPORT
KBUILD_CPPFLAGS += -Idrivers/rtk_kdriver/include
KBUILD_CPPFLAGS += -Idrivers/rtk_kdriver/include/rtk_kdriver
KBUILD_CPPFLAGS += -Idrivers/rtk_kdriver/common/include/
KBUILD_CPPFLAGS += -I drivers/rtk_kdriver/common/IPC/generate/include/system
KBUILD_CPPFLAGS += -I drivers/rtk_kdriver/common/IPC/include

obj-$(CONFIG_SND_KDRV_REALTEK) += rtk_snd.o
ifdef CONFIG_ION
obj-$(CONFIG_SND_KDRV_REALTEK) += rtk_snd_hwdep.o
obj-$(CONFIG_SND_KDRV_REALTEK) += rtk_snd_ion.o
endif
endif

obj-$(CONFIG_SND_REALTEK) += rtk_snd.o

ifdef CONFIG_ION
obj-$(CONFIG_SND_REALTEK) += rtk_snd_hwdep.o
obj-$(CONFIG_SND_REALTEK) += rtk_snd_ion.o
endif