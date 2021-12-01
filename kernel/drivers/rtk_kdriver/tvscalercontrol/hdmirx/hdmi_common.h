#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/string.h>
#include <linux/semaphore.h>
#include <mach/io.h>
#include <mach/rtk_log.h>
#include <rbus/rbus_types.h>


#include <tvscalercontrol/hdmirx/hdmifun.h>

// hdmiHdmi
#include <tvscalercontrol/scaler/scalerstruct.h>
#include <tvscalercontrol/scaler/state.h>
#include <tvscalercontrol/scalerdrv/mode.h>

#include "hdmi_debug.h"
#include "hdmiPlatform.h"
#include "hdmiInternal.h"

