#ifndef _SND_REALTEK_H_
#define _SND_REALTEK_H_

#include <sound/pcm.h>
#include <linux/pageremap.h>
#include <linux/dma-mapping.h>
#include "rpc_common.h"

#define S_OK		0x10000000
#define RPCCMD_CONFIG_USB_AUDIO_IN	0

struct RPC_RBUF_HEADER {
	int instanceID;
	int pin_id;
	int rbuf_list[8]; /* ringbuffer list */
	int rd_idx; /* read index */
	int listsize;
};

/* pin define for AI */
#define PB_OUTPIN PCM_OUT
#define TS_OUTPIN PCM_OUT2
#define ALSA_OUTPIN	PCM_OUT1

#define USE_ION_MEMORY
#define MAX_PCM_DEVICES 8
#define SNDRV_PCM_IOCTL_MMAP_DATA_FD _IOWR('U', 0xd2, struct snd_mmap_data)

/* AI format */
enum AUDIO_FORMAT_OF_AI_SEND_TO_ALSA {
	AUDIO_ALSA_FORMAT_16BITS_BE_PCM = 0,
	AUDIO_ALSA_FORMAT_24BITS_BE_PCM = 1,
	AUDIO_ALSA_FORMAT_16BITS_LE_LPCM = 2,
	AUDIO_ALSA_FORMAT_24BITS_LE_LPCM = 3,
};

/* Ring Buffer header is the shared memory structure for arm use */
struct RBUF_HEADER_ARM {
	unsigned long magic;
	unsigned long beginAddr;
	unsigned long size;

	unsigned long bufferID;

	unsigned long writePtr;
	unsigned long numOfReadPtr;
	unsigned long reserve2;
	unsigned long reserve3;

	unsigned long readPtr[4];

	long file_offset;
	long req_file_offset;
	long file_size;

	long b_seekable;
};

enum MIXER_ADDR {
	MIXER_ADDR_0,
	MIXER_ADDR_1,
	MIXER_ADDR_2,
	MIXER_ADDR_3,
	MIXER_ADDR_4,
	MIXER_ADDR_5,
	MIXER_ADDR_6,
	MIXER_ADDR_7,
	MIXER_ADDR_MAX
};

struct snd_card_mars {
	struct snd_card *card;
	spinlock_t mixer_lock;
	struct work_struct work_volume;

	struct mutex far_field_lock;
	RINGBUFFER_HEADER *far_field_ring_audio;
	dma_addr_t far_field_ring_audio_phy;
	void *far_field_vir;
	int reference_count;

	struct snd_hwdep *rtk_hwdep;
	struct ion_client *snd_client_ion;
	struct ion_handle *snd_ion_handle[MAX_PCM_DEVICES];
	struct dma_buf *snd_dma_buf[MAX_PCM_DEVICES];

	int ao_pin_id[MIXER_ADDR_MAX];
	int ao_flash_volume[MIXER_ADDR_MAX];
	int ao_flash_change[MIXER_ADDR_MAX];
};

struct snd_mmap_data {
	int dev;
	int fd;
};

int rtk_snd_create_hwdep(struct snd_card_mars *mars, int dev);

int rtk_snd_ion_allocate_pages(struct snd_pcm_substream *substream, size_t size);
int rtk_snd_ion_free_pages(struct snd_pcm_substream *substream);
int rtk_snd_ion_mmap(struct snd_pcm_substream *substream, struct vm_area_struct *area);
int rtk_snd_ion_get_share_fd(struct snd_card_mars *mars, int dev);
#endif
