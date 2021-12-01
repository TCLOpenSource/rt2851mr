#include <linux/interrupt.h>
#include <linux/sched.h>
#include <linux/syscalls.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/slab.h>
#include <linux/timer.h>
#include <linux/miscdevice.h>
#include <linux/uaccess.h>
#include <linux/jiffies.h>
#include <linux/delay.h>
#include <linux/pageremap.h>
#include <linux/fs.h>
#include <linux/proc_fs.h>
#include <linux/string.h>

#include <base_types.h>
#include <tp/tp_def.h>
#include <tp/tp_drv_api.h>

#define CFG_RTK_CMA_MAP 0

#include <linux/kernel.h>
#include <linux/tee.h>
#include <linux/ioctl.h>
#include <linux/module.h>
#include <linux/tee_drv.h>
#include <rbus/timer_reg.h>

#include "rtkdemux.h"
#include "rtkdemux_debug.h"

#include <asm/outercache.h>
#define TEE_NUM_PARAM 4

#define DEMUX_USER_TA_JP4K_UPDATE_PININFO          0x1001
#define DEMUX_USER_TA_JP4K_DELIVER_PRIVATE_INFO    0x1002
/* for test */
#define DEMUX_USER_TA_JP4K_DELIVERDATA             0x300

#define TA_HELLO_WORLD_UUID { 0xa409ae4e, 0x31e0, 0x4163, \
    { 0xba, 0x87, 0x01, 0xec, 0x94, 0x2d, 0x54, 0xd6} }

struct optee_ta {
    struct tee_context *ctx;
    __u32 session;
};

static struct optee_ta DemuxTa;
int gInitFlag = 0;

#ifdef DEMUX_JP4K_DEBUG_DELIVERY_DATA
struct tee_shm *gDemuxout = NULL;
#define DEMUX_OUT_SHARE_MEM_SIZE   (8 + (sizeof(NAVBUF)+188)*64)
#endif

int DEMUX_JP4K_TA_INIT(void);

static int optee_demux_match(struct tee_ioctl_version_data *data, const void *vers)
{
    return 1;
}


/**/
int DEMUX_JP4K_TA_DeliverPrivateInfo(unsigned int pin, int infoId, char* pCmdInfo, unsigned int cmdLen)
{
    int ret = 0, rc = 0;
    struct tee_ioctl_invoke_arg invoke_arg;
    struct tee_param param[TEE_NUM_PARAM];
    struct tee_shm *pinfo = NULL, *infoData_va = NULL;

    DEMUX_JP4K_TA_INIT();

    if(DemuxTa.ctx == NULL || cmdLen == 0) {
        pr_err("optee_meminfo: no ta context\n");
        ret = -EINVAL;
        goto END;
    }

    memset(&invoke_arg, 0, sizeof(invoke_arg));
    invoke_arg.func = DEMUX_USER_TA_JP4K_DELIVER_PRIVATE_INFO;
    invoke_arg.session = DemuxTa.session;
    invoke_arg.num_params = TEE_NUM_PARAM;

    memset(param, 0, sizeof(struct tee_param) * TEE_NUM_PARAM);

    param[0].attr = TEE_IOCTL_PARAM_ATTR_TYPE_VALUE_INPUT;
    param[0].u.value.a = pin;
    param[0].u.value.b = infoId;

    param[1].attr = TEE_IOCTL_PARAM_ATTR_TYPE_MEMREF_INPUT;
    pinfo = tee_shm_alloc(DemuxTa.ctx, cmdLen, TEE_SHM_MAPPED | TEE_SHM_DMA_BUF);
    if(pinfo == NULL){
        pr_err("optee_demux_tp: tee_shm_alloc failed \n");
        goto END;
    }
    infoData_va = tee_shm_get_va(pinfo, 0);
    if(pCmdInfo != NULL){
        memcpy(infoData_va, pCmdInfo, cmdLen);
    }
    param[1].u.memref.shm = pinfo;
    param[1].u.memref.size = cmdLen;

    param[2].attr = TEE_IOCTL_PARAM_ATTR_TYPE_VALUE_OUTPUT;
    param[3].attr = TEE_IOCTL_PARAM_ATTR_TYPE_NONE;

    rc = tee_client_invoke_func(DemuxTa.ctx, &invoke_arg, param);
    if (rc || invoke_arg.ret) {
        pr_err("optee_meminfo: invoke failed ret %x invoke_arg.ret %x\n", rc, invoke_arg.ret);
        ret = -EINVAL;
        goto END;
    }
    ret = param[1].u.value.a;
    pr_err("DEMUX_JP4K_TA_DeliverPrivateInfo , pin:%d, infoId:%d",pin, infoId);

END:
    if(pinfo)
        tee_shm_free(pinfo);

    return ret;
}

#ifdef DEMUX_JP4K_DEBUG_DELIVERY_DATA
int DEMUX_JP4K_TA_DeliverData(NAVDEMUXOUT* demuxOut)
{
    int ret = 0, rc = 0;
    int i = 0, offset = 0, payloadOffset = 0;
    struct tee_ioctl_invoke_arg invoke_arg;
    struct tee_param param[TEE_NUM_PARAM];
    struct tee_shm *esbuf = NULL, *esbuf_va = NULL, *esdata_va = NULL;
    NAVBUF       *pNavBuffer, *pNavTmp;

    DEMUX_JP4K_TA_INIT();

    if(DemuxTa.ctx == NULL) {
        pr_err("optee_meminfo: no ta context\n");
        ret = -EINVAL;
        goto END;
    }

    memset(&invoke_arg, 0, sizeof(invoke_arg));
    invoke_arg.func = DEMUX_USER_TA_JP4K_DELIVERDATA;
    invoke_arg.session = DemuxTa.session;
    invoke_arg.num_params = TEE_NUM_PARAM;

    memset(param, 0, sizeof(struct tee_param) * TEE_NUM_PARAM);
    param[0].attr = TEE_IOCTL_PARAM_ATTR_TYPE_VALUE_INPUT;
    param[0].u.value.a = 0;
    param[0].u.value.b = 0;

    esbuf  = tee_shm_get_va(gDemuxout, 0);
    memcpy(esbuf, demuxOut, sizeof(NAVDEMUXOUT));
    offset = sizeof(NAVDEMUXOUT);
    payloadOffset = sizeof(NAVDEMUXOUT) + demuxOut->numBuffers * sizeof(NAVBUF);

    for(i = 0; i < demuxOut->numBuffers; i++){
        pNavBuffer = &demuxOut->pNavBuffers[i];
        esbuf_va = tee_shm_get_va(gDemuxout, offset);
        pNavTmp = (NAVBUF *)esbuf_va;
        memcpy(esbuf_va, pNavBuffer, sizeof(NAVBUF));
        offset += sizeof(NAVBUF);

        esdata_va = tee_shm_get_va(gDemuxout, payloadOffset);
        if(pNavBuffer->data.payloadSize != 0){
            memcpy(esdata_va, pNavBuffer->data.payloadData, pNavBuffer->data.payloadSize);
            payloadOffset += pNavBuffer->data.payloadSize;
            pNavTmp->data.payloadData = (unsigned char *)esdata_va;
        }
        esdata_va = tee_shm_get_va(gDemuxout, payloadOffset);
        if(pNavBuffer->data.infoSize != 0){
            memcpy(esdata_va, pNavBuffer->data.infoData, pNavBuffer->data.infoSize);
            payloadOffset += pNavBuffer->data.infoSize;
            pNavTmp->data.infoData = (unsigned char *)esdata_va;
        }
        //pr_err("debug REE i=%d pinidex:%d payloadSize:%d infoSize:%d offset:%d, payloadOffset:%d", i, pNavBuffer->data.pinIndex, pNavBuffer->data.payloadSize, pNavBuffer->data.infoSize, offset, payloadOffset);
    }

    param[1].attr = TEE_IOCTL_PARAM_ATTR_TYPE_MEMREF_INPUT;
    param[1].u.memref.shm = gDemuxout;
    param[1].u.memref.size = offset;

    param[2].attr = TEE_IOCTL_PARAM_ATTR_TYPE_VALUE_OUTPUT;
    param[3].attr = TEE_IOCTL_PARAM_ATTR_TYPE_NONE;

    rc = tee_client_invoke_func(DemuxTa.ctx, &invoke_arg, param);
    if (rc || invoke_arg.ret) {
        pr_err("optee_meminfo: invoke failed ret %x invoke_arg.ret %x\n", rc, invoke_arg.ret);
        ret = -EINVAL;
        goto END;
    }
    ret = param[2].u.value.a;
END:
    return ret;
}
#endif

/*
    buftype: DEMUX_STREAM_TYPE_IB or DEMUX_STREAM_TYPE_BS
	pin: pin index  v0/a0/v1/a1
*/
int DEMUX_JP4K_TA_UpdatePininfo(unsigned int bufType, unsigned int pin, DEMUX_BUF_T *pBufferH, DEMUX_BUF_T *pBuffer)
{
    int ret = 0, rc = 0;
    struct tee_ioctl_invoke_arg invoke_arg;
    struct tee_param param[TEE_NUM_PARAM];
    struct tee_shm *pbufheader = NULL, *pbufheader_va = NULL;
    struct tee_shm *pbuf = NULL, *pbuf_va = NULL;

    DEMUX_JP4K_TA_INIT();

    if(DemuxTa.ctx == NULL) {
        pr_err("optee_meminfo: no ta context\n");
        ret = -EINVAL;
        goto END;
    }
    pr_err("%s_%d \n", __func__, __LINE__);

    memset(&invoke_arg, 0, sizeof(invoke_arg));
    invoke_arg.func = DEMUX_USER_TA_JP4K_UPDATE_PININFO;
    invoke_arg.session = DemuxTa.session;
    invoke_arg.num_params = TEE_NUM_PARAM;

    memset(param, 0, sizeof(struct tee_param) * TEE_NUM_PARAM);

    param[0].attr = TEE_IOCTL_PARAM_ATTR_TYPE_VALUE_INPUT;
    param[0].u.value.a = bufType;
    param[0].u.value.b = pin;

    pbufheader = tee_shm_alloc(DemuxTa.ctx, sizeof(DEMUX_BUF_T), TEE_SHM_MAPPED | TEE_SHM_DMA_BUF);
    if (pbufheader == NULL){
        ret = -ENOMEM;
        goto END;
    }
    pbufheader_va = tee_shm_get_va(pbufheader, 0);
    memcpy(pbufheader_va, pBufferH, sizeof(NAVBUF));
    param[1].attr = TEE_IOCTL_PARAM_ATTR_TYPE_MEMREF_INPUT;
    param[1].u.memref.shm = pbufheader;
    param[1].u.memref.size = sizeof(DEMUX_BUF_T);

    pbuf = tee_shm_alloc(DemuxTa.ctx, sizeof(DEMUX_BUF_T), TEE_SHM_MAPPED | TEE_SHM_DMA_BUF);
    if (pbuf == NULL){
        tee_shm_free(pbufheader);
        ret = -ENOMEM;
        goto END;
    }
    pbuf_va = tee_shm_get_va(pbuf, 0);
    memcpy(pbuf_va, pBuffer, sizeof(NAVBUF));
    param[2].attr = TEE_IOCTL_PARAM_ATTR_TYPE_MEMREF_INPUT;
    param[2].u.memref.shm = pbuf;
    param[2].u.memref.size = sizeof(DEMUX_BUF_T);

    param[3].attr = TEE_IOCTL_PARAM_ATTR_TYPE_NONE;
    rc = tee_client_invoke_func(DemuxTa.ctx, &invoke_arg, param);
    if (rc || invoke_arg.ret) {
        pr_err("optee_meminfo: invoke failed ret %x invoke_arg.ret %x\n", rc, invoke_arg.ret);
        ret = -EINVAL;
        goto END;
    }
    pr_err("%s_%d oooook \n", __func__, __LINE__);
END:
    if(pbufheader)
        tee_shm_free(pbufheader);
    if(pbuf)
        tee_shm_free(pbuf);
    return ret;
}

int DEMUX_JP4K_TA_INIT(void)
{
    int ret = 0, rc = 0;
    struct teec_uuid uuid = TA_HELLO_WORLD_UUID;
    struct tee_param param[TEE_NUM_PARAM];
    struct tee_ioctl_open_session_arg arg;
    struct tee_ioctl_version_data vers = {
            .impl_id = TEE_IMPL_ID_OPTEE,
            .impl_caps = TEE_OPTEE_CAP_TZ,
            .gen_caps = TEE_GEN_CAP_GP,
    };

    if(gInitFlag == 1)
        return 0;

    memset (&DemuxTa, 0, sizeof(DemuxTa));
    DemuxTa.ctx = tee_client_open_context (NULL, optee_demux_match, NULL, &vers);
    if (DemuxTa.ctx == NULL){
        pr_err ("rtkdemux: no ta context\n");
        ret = -EINVAL;
        goto err;
    }

    memset(&arg, 0, sizeof(arg));
    memcpy(&arg.uuid, &uuid, sizeof(struct teec_uuid));
    arg.clnt_login = TEE_IOCTL_LOGIN_PUBLIC;
    arg.num_params = TEE_NUM_PARAM;
    pr_err("arg uuid %pUl \n", arg.uuid);

    memset(&param[0], 0, sizeof(struct tee_param) * TEE_NUM_PARAM);
    param[0].attr = TEE_IOCTL_PARAM_ATTR_TYPE_NONE;
    param[1].attr = TEE_IOCTL_PARAM_ATTR_TYPE_NONE;
    param[2].attr = TEE_IOCTL_PARAM_ATTR_TYPE_NONE;
    param[3].attr = TEE_IOCTL_PARAM_ATTR_TYPE_NONE;

    rc = tee_client_open_session(DemuxTa.ctx, &arg, &param[0]);
    if(rc) {
        pr_err("rtkdemux: open_session failed ret %x arg %x", rc, arg.ret);
        ret = -EINVAL;
        goto err;
    }
    if (arg.ret) {
        ret = -EINVAL;
        goto err;
    }

    DemuxTa.session = arg.session;

#ifdef DEMUX_JP4K_DEBUG_DELIVERY_DATA
    gDemuxout = tee_shm_alloc(DemuxTa.ctx, DEMUX_OUT_SHARE_MEM_SIZE, TEE_SHM_MAPPED | TEE_SHM_DMA_BUF);
    if(gDemuxout == NULL){
        pr_err("optee_demux_tp: tee_shm_alloc failed \n");
        goto err;
    }
#endif

    gInitFlag = 1;

    pr_err("open_session %d oook\n", __LINE__);
    return 0;

err:
    if (DemuxTa.session) {
        tee_client_close_session(DemuxTa.ctx, DemuxTa.session);
        pr_err("rtkdemux: open failed close session \n");
        DemuxTa.session = 0;
    }
    if (DemuxTa.ctx) {
        tee_client_close_context(DemuxTa.ctx);
        pr_err("rtkdemux: open failed close context\n");
        DemuxTa.ctx = NULL;
    }
    pr_err("open_session fail\n");

  return ret;
}

int DEMUX_JP4K_TA_UNINIT(void)
{
#ifdef DEMUX_JP4K_DEBUG_DELIVERY_DATA
    if(gDemuxout){
        tee_shm_free(gDemuxout);
        gDemuxout = NULL;
    }
#endif
    if (DemuxTa.session) {
        tee_client_close_session(DemuxTa.ctx, DemuxTa.session);
        DemuxTa.session = 0;
    }

    if (DemuxTa.ctx) {
        tee_client_close_context(DemuxTa.ctx);
        DemuxTa.ctx = NULL;
    }
    return 0;
}

