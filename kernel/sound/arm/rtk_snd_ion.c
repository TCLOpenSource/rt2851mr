#include <linux/init.h>
#include <linux/slab.h>
#include <linux/compat.h>
#include <linux/nospec.h>
#include <linux/dma-buf.h>
#include <sound/core.h>
#include <sound/minors.h>
#include <sound/hwdep.h>
#include "ion.h"
#include <sound/rtk_snd.h>
#include <sound/memalloc.h>

extern struct ion_device *rtk_ion_device;

int rtk_snd_ion_allocate(struct snd_pcm_substream *substream,
			size_t size, struct snd_dma_buffer *dmab)
{
	struct snd_card_mars *mars = (struct snd_card_mars *) substream->pcm->card->private_data;
	struct ion_handle *tmp_handle;
	ion_phys_addr_t phy_addr;
	size_t phy_size;

	if (WARN_ON(!size))
		return -ENXIO;
	if (WARN_ON(!dmab))
		return -ENXIO;

	dmab->dev.type = substream->dma_buffer.dev.type;
	dmab->dev.dev = substream->dma_buffer.dev.dev;
	dmab->bytes = 0;
	switch (substream->dma_buffer.dev.type) {
	case SNDRV_RTK_DMA_TYPE:
		tmp_handle = ion_alloc(mars->snd_client_ion, size, 0, ION_HEAP_TYPE_CUSTOM_MASK, ION_FLAG_FROM_DCU1);
		dmab->area = ion_map_kernel(mars->snd_client_ion, tmp_handle);
		if (!dmab->area) {
			pr_err("[ALSA] rtk-snd-malloc: SNDRV_RTK_DMA_TYPE failed\n");
		} else {
			ion_phys(mars->snd_client_ion, tmp_handle, &phy_addr, &phy_size);
			dmab->addr = phy_addr;
			pr_info("[ALSA] rtk-snd-malloc: phys %x, virt %x, handle %x, size %x, pid %d\n",
				(unsigned int) dmab->addr, (unsigned int) dmab->area, (unsigned int) tmp_handle, size, task_pid_nr(current->group_leader));

			if (!mars->snd_ion_handle[substream->pcm->device]) {
				mars->snd_ion_handle[substream->pcm->device] = tmp_handle;
			} else {
				pr_err("[ALSA] rtk-snd-malloc: ion handle has leak %x!!!!\n", (unsigned int) mars->snd_ion_handle[substream->pcm->device]);
			}
		}
		break;
	default:
		pr_err("[ALSA] rtk-snd-malloc: invalid device type %d\n", (int) substream->dma_buffer.dev.type);
		dmab->area = NULL;
		dmab->addr = 0;
		return -ENXIO;
	}
	if (! dmab->area)
		return -ENOMEM;
	dmab->bytes = size;

	return 0;
}

int rtk_snd_ion_free(struct snd_pcm_substream *substream)
{
	struct snd_card_mars *mars = (struct snd_card_mars *) substream->pcm->card->private_data;
	struct snd_pcm_runtime *runtime = substream->runtime;
	struct snd_dma_buffer *dmab = runtime->dma_buffer_p;

	switch (dmab->dev.type) {
	case SNDRV_RTK_DMA_TYPE:
		pr_info("[ALSA] rtk-snd-free: phys %x, virt %x, handle %x\n",
			(unsigned int) dmab->addr, (unsigned int) dmab->area, (unsigned int) mars->snd_ion_handle[substream->pcm->device]);

		if (mars->snd_dma_buf[substream->pcm->device]) {
			pr_info("[ALSA] release shared dma\n");
			mars->snd_dma_buf[substream->pcm->device]->ops->release(mars->snd_dma_buf[substream->pcm->device]);
			mars->snd_dma_buf[substream->pcm->device] =  NULL;
		}

		ion_unmap_kernel(mars->snd_client_ion, mars->snd_ion_handle[substream->pcm->device]);
		ion_free(mars->snd_client_ion, mars->snd_ion_handle[substream->pcm->device]);
		mars->snd_ion_handle[substream->pcm->device] = NULL;
		break;
	default:
		pr_err("snd-malloc: invalid device type %d\n", dmab->dev.type);
	}

	return 0;
}

int rtk_snd_ion_allocate_pages(struct snd_pcm_substream *substream, size_t size)
{
	struct snd_dma_buffer *dmab = NULL;
	struct snd_pcm_runtime *runtime = substream->runtime;

	if (PCM_RUNTIME_CHECK(substream)) {
		pr_err("[ALSA][%s] status wrong\n", __func__);
		return -EINVAL;
	}

	if (snd_BUG_ON(substream->dma_buffer.dev.type == SNDRV_DMA_TYPE_UNKNOWN)) {
		pr_err("[ALSA][%s] dev type is UNKNOWN\n", __func__);
		return -EINVAL;
	}

	dmab = kzalloc(sizeof(*dmab), GFP_KERNEL);
	if (!dmab) {
		pr_err("[ALSA][%s] dma buffer allocate failed\n", __func__);
		return -ENOMEM;
	}
	dmab->dev = substream->dma_buffer.dev;
	if (rtk_snd_ion_allocate(substream, size, dmab) < 0) {
		kfree(dmab);
		pr_err("[ALSA][%s] rtk snd ion allocate failed\n", __func__);
		return -ENOMEM;
	}
	snd_pcm_set_runtime_buffer(substream, dmab);
	runtime->dma_bytes = size;

	return 0;
}

int rtk_snd_ion_free_pages(struct snd_pcm_substream *substream)
{
	struct snd_pcm_runtime *runtime = substream->runtime;

	if (PCM_RUNTIME_CHECK(substream))
		return -EINVAL;
	runtime = substream->runtime;
	if (runtime->dma_area == NULL)
		return 0;
	if (runtime->dma_buffer_p != &substream->dma_buffer) {
		/* it's a newly allocated buffer.  release it now. */
		rtk_snd_ion_free(substream);
		kfree(runtime->dma_buffer_p);
	}
	snd_pcm_set_runtime_buffer(substream, NULL);

	return 0;
}

int rtk_snd_ion_mmap(struct snd_pcm_substream *substream, struct vm_area_struct *area)
{
	struct dma_buf *buf;
	struct snd_card_mars *mars = (struct snd_card_mars *) substream->pcm->card->private_data;
	int ret = 0;

	buf = ion_share_dma_buf(mars->snd_client_ion, mars->snd_ion_handle[substream->pcm->device]);
	if (IS_ERR(buf)) {
		pr_err("[ALSA][%s,%d] ERR\n", __func__, __LINE__);
		return PTR_ERR(buf);
	}

	if (buf->ops->map) {
		ret = buf->ops->mmap(buf, area);

		if (!ret) {
			if (!mars->snd_dma_buf[substream->pcm->device]) {
				mars->snd_dma_buf[substream->pcm->device] = buf;
			} else {
				pr_warn("[ALSA] previous mars->snd_dma_buf didn't return\n");
				mars->snd_dma_buf[substream->pcm->device]->ops->release(mars->snd_dma_buf[substream->pcm->device]);
				mars->snd_dma_buf[substream->pcm->device] = buf;
			}
		} else {
			buf->ops->release(buf);
			pr_err("[ALSA] mmap error\n");
		}
	} else {
		buf->ops->release(buf);
		ret = -EINVAL;
	}

	pr_info("[ALSA][%s,%d] return %d, handle %x\n", __func__, __LINE__, ret, (unsigned int) mars->snd_ion_handle[substream->pcm->device]);
	return ret;
}

int rtk_snd_ion_get_share_fd(struct snd_card_mars *mars, int dev)
{
	int fd = ion_share_dma_buf_fd(mars->snd_client_ion, mars->snd_ion_handle[dev]);

	pr_info("[ALSA][%s,%d] handle %x, fd %d\n", __func__, __LINE__, (unsigned int) mars->snd_ion_handle[dev], fd);
	return fd;
}
