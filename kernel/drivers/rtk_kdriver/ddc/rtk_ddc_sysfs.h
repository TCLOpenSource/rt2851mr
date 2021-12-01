#ifndef __RTK_DDC_SYSFS_H__
#define __RTK_DDC_SYSFS_H__
#include "rtk_ddc_drv.h"

#define RTK_DDC_SYSFS_CLASS     "rtk_ddc"

#ifdef CONFIG_RTK_KDRV_DDC_SYSFS
int rtk_ddc_sysfs_create(srtk_ddc_chip*);
int rtk_ddc_sysfs_destroy(srtk_ddc_chip*);
#else
static int rtk_ddc_sysfs_create(srtk_ddc_chip* pchip)  { return 0; } 
static int rtk_ddc_sysfs_destroy(srtk_ddc_chip* pchip) { return 0; } 
#endif  // CONFIG_RTK_KDRV_DDC_SYSFS

#endif // __RTK_DDC_SYSFS_H__
