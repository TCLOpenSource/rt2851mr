/******************************************************************************
 * include/linux/mtd/rtk_nand.h
 * Overview: Realtek Nand Flash HW Controller Register Map
 * Copyright (c) 2008 Realtek Semiconductor Corp. All Rights Reserved.
 * Modification History:
 *    #000 2010-07-02  AlexChang   create file
 * 
 *******************************************************************************/
#ifndef __RTK_NAND_H
#define __RTK_NAND_H

//#include <linux/config.h>
#include <linux/sched.h>
#include <linux/mtd/mtd.h>
#include <linux/dma-mapping.h>
#include <asm/cacheflush.h>

#include <mach/iomap.h>
#include <mach/io.h>

//#include <asm/r4kcache.h>

#define DBG_SHOW_MSG_ENABLE		(0)		//define if show debug message;
#define DBG_MODE_ENABLE			(0)   	//Enable debug mode or not;
#define TEST_NF_DRIVER			(0)   	//Enable test procedure for NAND flash driver 
#define RTK_NAND_TEST (0) 		//+alexchang add 0702-2010
#define RTK_ARD_ALGORITHM (0)	//Enable Avoid Read Disturbance Algorithm or not

//define the func that nand flash driver access register
#define REG_READ_U8(register)         		rtd_inb(register)
#define REG_READ_U16(register)         		rtd_inw(register)
#define REG_READ_U32(register)         		rtd_inl(register)
#define REG_WRITE_U8(register, value)    		rtd_outb(register, value)
#define REG_WRITE_U16(register, value)    		rtd_outw(register, value)
#define REG_WRITE_U32(register, value)    		rtd_outl(register, value)

#define MTDSIZE	(sizeof (struct mtd_info) + sizeof (struct nand_chip))
#define MAX_PARTITIONS	16
#define BOOTCODE	16*1024*1024	//16MB

#define CONFIG_MTD_NAND_PRINTK_LOG
#define NF_PRINT               printk

enum nf_debug_level {
    NF_DEBUG_LEVEL_DISABLE = 0,
    NF_DEBUG_LEVEL_ERR,
    NF_DEBUG_LEVEL_INFO,
    NF_DEBUG_LEVEL_DEBUG
};

#define NF_DEBUG_SET_LEVEL(x)   static int nf_print_debug_level = x
#define	NAND_ERR(fmt, args...) \
do {													\
	if (nf_print_debug_level >= NF_DEBUG_LEVEL_ERR) { 	\
		NF_PRINT("%s(%d) %s: " "\033[1;31m"fmt"\033[m", __FILE__,__LINE__,__FUNCTION__,##args); \
	}													\
} while (0)

#define	NAND_INFO(fmt, args...) \
do {													\
	if (nf_print_debug_level >= NF_DEBUG_LEVEL_INFO) { 	\
		NF_PRINT("%s %d: "fmt, __FUNCTION__,__LINE__,##args); \
	}													\
} while (0)

#define	NAND_DEBUG(fmt, args...) \
do {													\
	if (nf_print_debug_level >= NF_DEBUG_LEVEL_DEBUG) { 	\
		NF_PRINT("%s(%d) %s: "fmt, __FILE__,__LINE__,__FUNCTION__,##args); \
	}													\
} while (0)


#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE

#define HW_SEM_REG	(0xB801A638)

static inline void rtk_spin_lock(void)
{	
	while(1) {
		if (rtd_inl(HW_SEM_REG) == 0){
		} else {
			break;
		}
	}	
}

static inline void rtk_spin_unlock(void)
{	
	rtd_outl(HW_SEM_REG,0);
}

#endif

static inline int generic_ffs(int x)
{
	int r = 1;
	if (!x)
		return 0;
	if (!(x & 0xffff)) {
		x >>= 16;
		r += 16;
	}
	if (!(x & 0xff)) {
		x >>= 8;
		r += 8;
	}
	if (!(x & 0xf)) {
		x >>= 4;
		r += 4;
	}
	if (!(x & 3)) {
		x >>= 2;
		r += 2;
	}
	if (!(x & 1)) {
		x >>= 1;
		r += 1;
	}
	return r;
}

/*
 * Searches for a NAND device
 */
extern int rtk_nand_scan (struct mtd_info *mtd, int maxchips);

/* Reserve Block Area usage */
#define	BB_INIT	0xFFFE
#define	RB_INIT	0xFFFD
#define	BBT_TAG	0xBB
#define TAG_FACTORY_PARAM	(0x82)
#define BB_DIE_INIT	0xEEEE
#define RB_DIE_INIT	BB_DIE_INIT

typedef struct  __attribute__ ((__packed__)){
    u16 BB_die;
    u16 bad_block;
    u16 RB_die;
    u16 remap_block;
}BB_t;

#define 	IBT_TAG		0x11
#define	SRC_INIT	0xFFFE
#define	DST_INIT	0xFFFD



typedef struct __attribute__ ((__packed__)){
    u16 src_die;
    u16 src_block;
    u16 dst_die;
    u16 dst_block;
}IB_t;


#define IBT_BLOCK_NUM		2
#define BBT_BLOCK_NUM		2

#define RBB_INIT		0xFFFC
#define RCB_INIT		0xFFFB
#define BAD_BLOCK		 0x0
#define INVALID_BLOCK_ID 	0xFFFFFFFF
#define BI_BLOCK_START	  	1
#define IBT_SCAN_START_BLOCK  	0x5
#define IBT_TAG 		0x11
#define SRC_INIT		0xFFFE
#define DST_INIT		0xFFFD
#define SRC_DIE_INIT		0xEEEE
#define DST_DIE_INIT		SRC_DIE_INIT

typedef struct
{
	u16 src_die;
	u16 bad_block;
	u16 dst_die;
	u16 collect_block;
}RB_t;


struct block_info
{
	u16 phy_block;
	u16 block_tag;
};

typedef struct __attribute__ ((__packed__)){
	unsigned char  *name;
	unsigned int id;
	uint64_t 	 size;	//nand total size
	uint64_t	 chipsize;	//die size
	unsigned int PageSize;
	unsigned int BlockSize;
	unsigned short OobSize;
	unsigned char num_chips;
	unsigned char isLastPage;	//page position of block to check BB
	unsigned char CycleID5th; //If CycleID5th do not exist, set it to 0xff
	unsigned char CycleID6th; //If CycleID6th do not exist, set it to 0xff
	unsigned short ecc_num;
	unsigned char T1;
	unsigned char T2;
    	unsigned char T3;
	unsigned short eccSelect;//Ecc ability select:   add by alexchang 0319-2010 
	unsigned char ecc_safe_value; //When ecc bits error More than this vaule, mark the block as bad block
} device_type_t;

//for PCBmgr
typedef enum {
	PCB_PIN_TYPE_UNUSED = 0, 	
	PCB_PIN_TYPE_LSADC, 
	PCB_PIN_TYPE_EMCU_GPIO,
	PCB_PIN_TYPE_GPIO,
	PCB_PIN_TYPE_ISO_GPIO,
	PCB_PIN_TYPE_UNIPWM,
	PCB_PIN_TYPE_ISO_UNIPWM,
	PCB_PIN_TYPE_PWM,
	PCB_PIN_TYPE_ISO_PWM,
	PCB_PIN_TYPE_AUDIO,	
	PCB_PIN_TYPE_AUDIO_OUPUT,
	PCB_PIN_TYPE_UNDEF,
	PCB_PIN_TYPE_CEC,
} PCB_PIN_TYPE_T;
#define GET_PIN_TYPE(x)		((PCB_PIN_TYPE_T) (x & 0xFF))

/* NAND Flash Command Sets */
#define CMD_READ_ID				0x90
#define CMD_READ_STATUS		0x70

#define CMD_PG_READ_C1		0x00
#define CMD_PG_READ_C2		0x30
#define CMD_PG_READ_C3		CMD_READ_STATUS

#define CMD_PG_WRITE_C1		0x80
#define CMD_PG_WRITE_C2		0x10
#define CMD_PG_WRITE_C3		CMD_READ_STATUS

#define CMD_BLK_ERASE_C1		0x60	//Auto Block Erase Setup command
#define CMD_BLK_ERASE_C2		0xd0	//CMD_ERASE_START
#define CMD_BLK_ERASE_C3		CMD_READ_STATUS	//CMD_STATUS_READ

#define CMD_RESET                 0xff
#define CMD_RANDOM_DATA_INPUT     0x85    /* RANDOM DATA write */ 

#define CMD_RANDOM_DATA_OUTPUT_C1 0x05    /* RANDOM DATA read */
#define CMD_RANDOM_DATA_OUTPUT_C2 0xe0 

#define NAND_ISR_XFER_MODE_DONE	(1 << 2)
#define NAND_ISR_AUTO_MODE_DONE	(1 << 3)
#define NAND_ISR_DMA_DONE	(1 << 4)
#define NAND_ISR_PFS_DONE	(1 << 7)	//polling flash status busy = 1

//========================================================================
/* The maximum number of NAND chips in an array */
#define NAND_MAX_CHIPS		8
struct NAND_Info_st {
	unsigned int U32NFDrvVer;//The version number of NF Driver
	unsigned int U32ReadIDBytes;//Determine bytes for readID command need.
	
	unsigned int U32BlkCnt;// Number of blocks
	unsigned int U32PageSize;//Page size
	unsigned int U32PagePerBlk;//page count per block

	unsigned int U32BlkCntShift;
	unsigned int U32PageSizeShift;
	unsigned int U32PagePerBlkShift;
};


#if 0		//rtk_mtd_patch

/*
	macro RTK_FLUSH_CACHE is to flush the cache at address "addr", 
	the length is "len"
*/
#define RTK_FLUSH_CACHE(addr, len)		\
do {								\
	unsigned long dc_lsize = current_cpu_data.dcache.linesz;	\
	unsigned long end, a;								\
	a = (unsigned long ) addr & ~(dc_lsize - 1);		\
	end = ((unsigned long )addr + len - 1) & ~(dc_lsize - 1);	\
	while (1) {		\
		flush_dcache_line(a);   /* Hit_Writeback_Inv_D */	\
		if (a == end)	\
			break;	\
		a += dc_lsize;	\
	}	\
} while (0)

#else

#define RTK_FLUSH_CACHE(addr, len) 	//v7_dma_flush_range(addr,addr+len)

//void v7_dma_flush_range(unsigned int start, unsigned int size);

#endif

/************************************************************************
 *  Include files
 ************************************************************************/

/************************************************************************
 *  Definitions
*************************************************************************/
#define NAND_PROFILE_IDENTIFIER	"REALTEK."

#define ECC_6BIT		0x0
#define ECC_12BIT		0x1
#define ECC_24BIT		0x2

/************************************************************************
 *  Structures
*************************************************************************/
typedef struct{
	unsigned char	identifier[8];		/* byte   0 ~ 7  */
	unsigned int	revision;		/* byte   8 ~ 11 */
	unsigned char	extend_parameter;	/* byte  12 */
	unsigned char	reserved_1[3];		/* byte  13 ~ 15 */
	unsigned int	extend_block_number;	/* byte  16 ~ 19 */
	unsigned int	extend_page_number;	/* byte  20 ~ 23 */
	unsigned short	extend_page_length;	/* byte  24 ~ 25 */
	unsigned short 	number_of_page;		/* byte  26 ~ 27 */
	unsigned char	reserved_2[4];		/* byte  28 ~ 31 */

	unsigned char	manufacturer_id[12];	/* byte  32 ~ 43 */
	unsigned char   flash_name[16];		/* byte  44 ~ 59 */
	unsigned char	reserved_3[4];		/* byte  60 ~ 63 */

	unsigned int	number_of_bbt;		/* byte  64 ~ 67 */
	unsigned int	bbt_start_block;	/* byte  68 ~ 71 */
	unsigned int	bbt_end_block;		/* byte  72 ~ 75 */
	unsigned int	number_of_rsv_block;	/* byte  76 ~ 79 */
	unsigned int	rsv_start_block;	/* byte  80 ~ 83 */
	unsigned int	rsv_end_block;		/* byte  84 ~ 87 */
	unsigned int	data_per_page;		/* byte  88 ~ 91 */
	unsigned int	oob_per_page;		/* byte  92 ~ 95 */
	unsigned int	page_per_block;		/* byte  96 ~ 99 */
	unsigned int	block_per_die;		/* byte 100 ~ 103 */
	unsigned char	reserved_4[4];		/* byte 104 ~ 107 */
	unsigned short	ecc_bit;		/* byte 108 ~ 109 */
	unsigned int	param_t1;		/* byte 110 ~ 113 */
	unsigned int	param_t2;		/* byte 114 ~ 117 */
	unsigned int	param_t3;		/* byte 118 ~ 121 */
	unsigned int	param_t4;		/* byte 122 ~ 125 */
	unsigned char	address_mode;		/* byte 126 */
	unsigned char	reserved_5;		/* byte 127 */
	unsigned char   checksum[32];		/* byte 128 ~ 159 */
	unsigned char	reserved_6[96];		/* byte 160 ~ 225 */
} __attribute__((packed)) t_nand_profile;


//===================================================================
/*
 * nand_state_t - chip states
 * Enumeration for NAND flash chip state
 */
typedef enum {
	FL_READY,
	FL_READING,
	FL_WRITING,
	FL_ERASING,
	FL_SYNCING,
	FL_PM_SUSPENDED,
} nand_state_t;
//=============================================================================


//=============================================================================

/**
 * struct nand_hw_control - Control structure for hardware controller (e.g ECC generator) shared among independend devices
 * @lock:               protection lock  
 * @active:		the mtd device which holds the controller currently
 * @wq:			wait queue to sleep on if a NAND operation is in progress
 *                      used instead of the per chip wait queue when a hw controller is available
 */
struct nand_hw_control {
	spinlock_t	 lock;
	struct nand_chip *active;
	wait_queue_head_t wq;
};
//=============================================================================


/**
 * struct nand_chip - NAND Private Flash Chip Data
 * @IO_ADDR_R:		[BOARDSPECIFIC] address to read the 8 I/O lines of the flash device 
 * @IO_ADDR_W:		[BOARDSPECIFIC] address to write the 8 I/O lines of the flash device 
 * @read_byte:		[REPLACEABLE] read one byte from the chip
 * @write_byte:		[REPLACEABLE] write one byte to the chip
 * @read_word:		[REPLACEABLE] read one word from the chip
 * @write_word:		[REPLACEABLE] write one word to the chip
 * @write_buf:		[REPLACEABLE] write data from the buffer to the chip
 * @read_buf:		[REPLACEABLE] read data from the chip into the buffer
 * @verify_buf:		[REPLACEABLE] verify buffer contents against the chip data
 * @select_chip:	[REPLACEABLE] select chip nr
 * @block_bad:		[REPLACEABLE] check, if the block is bad
 * @block_markbad:	[REPLACEABLE] mark the block bad
 * @hwcontrol:		[BOARDSPECIFIC] hardwarespecific function for accesing control-lines
 * @dev_ready:		[BOARDSPECIFIC] hardwarespecific function for accesing device ready/busy line
 *			If set to NULL no access to ready/busy is available and the ready/busy information
 *			is read from the chip status register
 * @cmdfunc:		[REPLACEABLE] hardwarespecific function for writing commands to the chip
 * @waitfunc:		[REPLACEABLE] hardwarespecific function for wait on ready
 * @calculate_ecc: 	[REPLACEABLE] function for ecc calculation or readback from ecc hardware
 * @correct_data:	[REPLACEABLE] function for ecc correction, matching to ecc generator (sw/hw)
 * @enable_hwecc:	[BOARDSPECIFIC] function to enable (reset) hardware ecc generator. Must only
 *			be provided if a hardware ECC is available
 * @erase_cmd:		[INTERN] erase command write function, selectable due to AND support
 * @scan_bbt:		[REPLACEABLE] function to scan bad block table
 * @eccmode:		[BOARDSPECIFIC] mode of ecc, see defines 
 * @eccsize: 		[INTERN] databytes used per ecc-calculation
 * @eccbytes: 		[INTERN] number of ecc bytes per ecc-calculation step
 * @eccsteps:		[INTERN] number of ecc calculation steps per page
 * @chip_delay:		[BOARDSPECIFIC] chip dependent delay for transfering data from array to read regs (tR)
 * @chip_lock:		[INTERN] spinlock used to protect access to this structure and the chip
 * @wq:			[INTERN] wait queue to sleep on if a NAND operation is in progress
 * @state: 		[INTERN] the current state of the NAND device
 * @page_shift:		[INTERN] number of address bits in a page (column address bits)
 * @phys_erase_shift:	[INTERN] number of address bits in a physical eraseblock
 * @bbt_erase_shift:	[INTERN] number of address bits in a bbt entry
 * @chip_shift:		[INTERN] number of address bits in one chip
 * @data_buf:		[INTERN] internal buffer for one page + oob 
 * @oob_buf:		[INTERN] oob buffer for one eraseblock
 * @oobdirty:		[INTERN] indicates that oob_buf must be reinitialized
 * @data_poi:		[INTERN] pointer to a data buffer
 * @options:		[BOARDSPECIFIC] various chip options. They can partly be set to inform nand_scan about
 *			special functionality. See the defines for further explanation
 * @badblockpos:	[INTERN] position of the bad block marker in the oob area
 * @numchips:		[INTERN] number of physical chips
 * @chipsize:		[INTERN] the size of one chip for multichip arrays
 * @pagemask:		[INTERN] page number mask = number of (pages / chip) - 1
 * @pagebuf:		[INTERN] holds the pagenumber which is currently in data_buf
 * @autooob:		[REPLACEABLE] the default (auto)placement scheme
 * @bbt:		[INTERN] bad block table pointer
 * @bbt_td:		[REPLACEABLE] bad block table descriptor for flash lookup
 * @bbt_md:		[REPLACEABLE] bad block table mirror descriptor
 * @badblock_pattern:	[REPLACEABLE] bad block scan pattern used for initial bad block scan 
 * @controller:		[OPTIONAL] a pointer to a hardware controller structure which is shared among multiple independend devices
 * @priv:		[OPTIONAL] pointer to private chip date
 * @errstat:		[OPTIONAL] hardware specific function to perform additional error status checks 
 *			(determine if errors are correctable)
 */
 
struct nand_chip {
	u_char oob_shift;
	void (*read_id) (struct mtd_info *mtd, unsigned char id[5]);
	int (*read_ecc_page) (struct mtd_info *mtd, u16 chipnr, unsigned int page, u_char *data, 
									u_char *oob_buf);
	int (*read_oob) (struct mtd_info *mtd, u16 chipnr, int page, int len, u_char *buf);
	int (*write_ecc_page) (struct mtd_info *mtd, u16 chipnr, unsigned int page, const u_char *data,
										const u_char *oob_buf);										
	int (*write_oob) (struct mtd_info *mtd, u16 chipnr, int page, int len, const u_char *buf);
	int (*erase_block) (struct mtd_info *mtd, u16 chipnr, int page);
	void (*sync) (struct mtd_info *mtd);

	void (*suspend) (struct mtd_info *mtd);
	void (*resume) (struct mtd_info *mtd);

	void (*select_chip) (struct mtd_info *mtd, int chip);
	void (*read_buf)(struct mtd_info *mtd, u_char *buf, int len);
	void (*cmdfunc)(struct mtd_info *mtd, unsigned command, int column, int page_addr);
	int  (*dev_ready)(struct mtd_info *mtd);
	int  (*scan_bbt)(struct mtd_info *mtd);
	void (*edo_setting)(void);
	void  (*clock_select)(char *PartNum, unsigned int value);
	
	int			eccmode;
	int			eccsize;
	int			eccbytes;
	int			eccsteps;
	int 			chip_delay;
	spinlock_t		chip_lock;
	wait_queue_head_t 	wq;
	nand_state_t 		state;
	uint64_t 		page_shift;
	int			erase_shift;
	int			bbt_erase_shift;
	int			chip_shift;
	u_char 			*g_databuf;
	u_char			*g_oobbuf;
	u_char			*mtd_page_buffer;
	u_char			*drv_page_buffer;
	int			oobdirty;
	u_char			*data_poi;
	unsigned int		options;
	int			badblockpos;
	int			numchips;
	uint64_t		chipsize;
	uint64_t 		device_size;
	uint64_t		pagemask;
	int			pagebuf;
	struct nand_oobinfo	*autooob;

	struct nand_bbt_descr	*bbt_td;
	struct nand_bbt_descr	*bbt_md;
	struct nand_bbt_descr	*badblock_pattern;	
	struct nand_hw_control  *controller;
	void		*priv;

	char 	*nand_name;
	unsigned char maker_code;	
	unsigned char device_code; 
	unsigned int ppb;	//page per block
	unsigned int oob_size;	//spare area size
	unsigned int block_num;
	unsigned int page_num;
	unsigned char active_chip;
	unsigned short ecc_select;	//modify unsigned char to unsigned short by alexchang 0319-2010	
	unsigned char ecc_safe_value;
	unsigned int isLastPage;
	unsigned int block_size;
	unsigned int page_size;
	
	int 	ecc_err_flag;
	struct block_info * bi_table;
	int bi_table_block_start;
	int bi_table_block_num; 
	int frist_boot;
	int *log2phy_table;
	int bootcode_size;
	int bootcode_start_log_block;
	int bootcode_end_log_block;
	int kernel_start_log_block;
	int kernel_end_log_block;
	unsigned int I_BOOTCODE_RBA;		//ibt reserverd block area for bootcode-area
	unsigned int I_BOOTCODE_RBA_PERCENT;
	unsigned int I_KERNEL_RBA;		//ibt reserverd block area for kernel-area
	unsigned int I_KERNEL_RBA_PERCENT;
	IB_t *ibt;				//ibt
	int ibt_len;
	BB_t *bbt;
	unsigned int RBA_PERCENT;
	int bbt_len;
	int use_rba_num;
	int free_rba_num;
	RB_t *rbt;
	int rbt_len;
	int use_rbt_num;
	int free_rbt_num;
	int *no_col_table;  		/*erase ok write fail block table*/
	int cur_no_col_num;
};                       
#endif

