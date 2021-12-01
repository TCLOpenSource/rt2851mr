/***********************************************************************************************
IBT(initial block table):
	 logical block map physical block skip bad block (exist from factory produce bad block)
	 create ibt to nand ,if the first time boot
	 build  ibt  to ram, by read from nand

BBT(bad block table):
	ibt logical map good physical block,run-time may be bad block, use bbt reamp region block instead bad block
	create or update bbt table to nand , if exist run-time ibt map good physical become bad block
	build bbt  to ram, by read form nand

RBT(run-time block table):
	bbt remap region not enough, use rbt 
	rbt collect the block(ibt map good physical become bad block) map to bad block
******************************************************************************************/
#include <linux/types.h>
#include <linux/slab.h>
#include <linux/mtd/mtd.h>
#include "rtk_nand.h"
NF_DEBUG_SET_LEVEL(NF_DEBUG_LEVEL_INFO);
#ifdef CONFIG_MTD_RBT_TEST
#define READ_RETRY_TIMES 1  //for test read fail case
#else
#define READ_RETRY_TIMES 3
#endif

#define NF_BI_BLOCK_START 			2
#define NF_IBT_SCAN_START_BLOCK  		0x8
#define NF_FRIST_BOOT				1
#define NF_BBT_IBT_EXIST			0
#define NF_BBT_EXIST_IBT_NO_EXIST		2
#define NF_IBT_TAG				0x11
#define NF_IBT_BLOCK_NUM			2
#define NF_RBB_INIT				0xFFFC
#define NF_RCB_INIT				0xFFFB
#define	NF_SRC_INIT				0xFFFE
#define	NF_DST_INIT				0xFFFD
#define NF_SRC_DIE_INIT				0xEEEE
#define NF_DST_DIE_INIT				NF_SRC_DIE_INIT
#define	NF_BBT_TAG				0xBB
#define NF_BBT_BLOCK_NUM			2
#define	NF_BB_INIT				0xFFFE
#define	NF_RB_INIT				0xFFFD
#define NF_BB_DIE_INIT				0xEEEE
#define NF_RB_DIE_INIT				NF_BB_DIE_INIT
#define NF_BAD_BLOCK		 		0x0
#define NF_FREE_TAG				0xFF
#define NF_INVALID_BLOCK_ID 			0xFFFFFFFF
#define NF_RBA_PERCENT				4
#define NF_I_BOOTCODE_RBA_PERCENT		10
#define NF_I_KERNEL_RBA_PERCENT			2

extern void mark_as_badblock(struct mtd_info *mtd,int bad_block);
extern int rtk_block_isbad(struct mtd_info *mtd, u16 chipnr, loff_t ofs);

void nf_init_bbt_info(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv; 
	uint64_t result = 0;
	this->RBA_PERCENT = NF_RBA_PERCENT; //default value 4% device_size
	NAND_INFO("[**Default**]RBA percentage: %d%%\n",this->RBA_PERCENT);
	result =this->block_num*this->RBA_PERCENT;
 	do_div(result,100);
	/*bbt len = total_block_num*RBA_PERCENT-->bbt length change in extend_bbt_info */
	this->bbt_len = result;
	NAND_INFO("mtd->u32RBApercentage %d%%, bbt len = %d\n",this->RBA_PERCENT,
			this->bbt_len);   
}

void nf_init_ibt_info(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv; 
	uint64_t div_res = 0,result = 0;
	int block_pos = 0;
	/*bootcode RBA =  bootcode_block_num*I_BOOTCODE_RBA_PERCENT*/
	this->I_BOOTCODE_RBA_PERCENT= NF_I_BOOTCODE_RBA_PERCENT; //default value 10% of bootcode-area 
	NAND_INFO("[**Default**]IBT-RBA percentage of bootcode-area: %d%%\n", 
			this->I_BOOTCODE_RBA_PERCENT); 
 	div_res = this->bootcode_size;
	do_div(div_res,this->block_size);
 	result = div_res;
 	result*=this->I_BOOTCODE_RBA_PERCENT;
 	do_div(result,100);
	this->I_BOOTCODE_RBA = result;
	block_pos = (this->bootcode_size + this->block_size - 1)/this->block_size;
	this->bootcode_start_log_block = NF_IBT_SCAN_START_BLOCK;
	this->bootcode_end_log_block   = block_pos - this->I_BOOTCODE_RBA;
	NAND_INFO("I_BOOTCODE_RBA_PERCENT %d%%, I_BOOTCODE_RBA = %d\n",
		   this->I_BOOTCODE_RBA_PERCENT, this->I_BOOTCODE_RBA);
	/*kernel RBA = total_block_num*I_KERNEL_RBA_PERCENT*/
	div_res = this->device_size;
	do_div(div_res,this->block_size);
	this->I_KERNEL_RBA_PERCENT  = NF_I_KERNEL_RBA_PERCENT; //default value 2% device_size
	NAND_INFO("[**Default**]IBT-RBA percentage of kernel-area: %d%%\n",
			this->I_KERNEL_RBA_PERCENT);
	result = div_res;
 	result*=this->I_KERNEL_RBA_PERCENT;
 	do_div(result,100);
 	this->I_KERNEL_RBA = result;
	block_pos = (this->bootcode_size + this->block_size - 1)/this->block_size;
	this->kernel_start_log_block   = block_pos;
	this->kernel_end_log_block     = this->block_num -this->bbt_len -this->I_KERNEL_RBA;
	NAND_INFO("I_KERNEL_RBA_PERCENT %d%%, I_KERNEL_RBA = %d\n",
		this->I_KERNEL_RBA_PERCENT, this->I_KERNEL_RBA);
	NAND_DEBUG("bootcode_start_log_block %d bootcode_end_log_block %d "
		"kernel_start_log_block %d kernel_end_log_block %d\n",
		this->bootcode_start_log_block,this->bootcode_end_log_block,
		this->kernel_start_log_block, this->kernel_end_log_block);
	this->ibt_len = this->block_num;
}

void nf_int_rbt_info(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv;
	this->rbt =  NULL;
	this->free_rbt_num = 0;
	this->use_rbt_num = 0;
	this->rbt_len  = 0;
}

void nf_init_table_info(struct mtd_info *mtd)
{
	/*init bbt information */
	nf_init_bbt_info(mtd);

	/*init ibt information ->use bbt length,so after bbt information*/
	nf_init_ibt_info(mtd);
	
	/*init rbt information*/
	nf_int_rbt_info(mtd);
}

void dump_nf_ibt(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv; 
	int ibt_id = 0,loop =0;
	NAND_INFO("%s dump ibt table content len %d \n",__FUNCTION__,this->ibt_len); 
	for(ibt_id = NF_IBT_SCAN_START_BLOCK; ibt_id < this->ibt_len; ibt_id++)
	{
		printk("[%d][%d, %u, %d, %u]\t",loop,this->ibt[ibt_id].src_die,this->ibt[ibt_id].src_block,
			this->ibt[ibt_id].dst_die,this->ibt[ibt_id].dst_block);
		loop++;
		if(loop%8 == 0){
			printk("\n");
		}    
	}  
	printk("\n");
}

void dump_nf_bbt(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv; 
	int rba_id = 0,loop = 0;
	NAND_INFO("table len %d current use bbt num %d free bbt num %d\n",
		this->bbt_len,this->use_rba_num,this->free_rba_num);  
	for( rba_id = 0; rba_id<this->bbt_len; rba_id++)
	{
		printk("[%d] [%d, %u, %d, %u]\t",loop,
			this->bbt[rba_id].BB_die,this->bbt[rba_id].bad_block,
			this->bbt[rba_id].RB_die,this->bbt[rba_id].remap_block);
		loop++;
		if(loop%8 == 0){
			printk("\n");
		}
	}
	printk("\n");
}

void dump_nf_rbt(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv; 
	int loop = 0,rbt_id = 0;
	NAND_INFO("table len %d free rbt num %d use rbt num %d \n",
		this->rbt_len,this->free_rbt_num,this->use_rbt_num);
	if(this->rbt != NULL){
		for(rbt_id = 0; rbt_id <this->rbt_len; rbt_id++)
		{
			printk("[%d] [%d, %u, %d, %u]\t",loop,
				this->rbt[rbt_id].src_die,this->rbt[rbt_id].bad_block,
				this->rbt[rbt_id].dst_die,this->rbt[rbt_id].collect_block);
			loop++;
			if(loop%8 == 0){
				printk("\n");
			}
		}
		printk("\n");
	}
}

void dump_nf_bi_table(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv; 
	int loop = 0,bi_id = 0;
	NAND_INFO("table len %d \n",this->bi_table_block_num);
	
	for(bi_id = 0; bi_id <this->bi_table_block_num; bi_id++)
	{
		printk("[%d] [%d,0x%x]\t",loop,
			this->bi_table[bi_id].phy_block,this->bi_table[bi_id].block_tag);
		loop++;
		if(loop%8 == 0){
			printk("\n");
		}
	}
	printk("\n");
}

/***************************************************************************
 scan bi table(ibt/bbt/rbt) block region, get block status and free block count
 start block: NF_BI_BLOCK_START 
 end  block:  NF_IBT_SCAN_START_BLOCK - 1 
 	frist-time nand boot -->frist_boot = 1 means 
 		eg: first-time block 0x10~0x15 tag  all good block tag are 0xFF means frist boot
 	run-time:  not frist boot
 		eg:log_block1-log_block2 tag:BBT log_block3-log_block4 tag:IBT 
***************************************************************************/
int nf_init_bi_table(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv;
	int loop = 0,block_id = 0,chipnr = 0,page = 0,ibt_tag_count = 0,bbt_tag_count =0;
	unsigned char *oob_buf = NULL;
	memset(this->g_oobbuf,0xFF,this->oob_size);
	oob_buf = this->g_oobbuf;
	
	/*init bi table block number and content*/
	this->bi_table_block_start = NF_BI_BLOCK_START;
	this->bi_table_block_num   = NF_IBT_SCAN_START_BLOCK - NF_BI_BLOCK_START; 
	if((this->bi_table =  kmalloc(this->bi_table_block_num*sizeof(struct block_info),
			GFP_KERNEL)) ==  NULL){
		NAND_ERR("malloc table block info error!\n");
		return -1;
	}
	
	this->active_chip = chipnr;	
	block_id = this->bi_table_block_start;
	/*scan bi table block region,get  block information*/
	for(loop = 0; loop < this->bi_table_block_num;loop++){
		this->bi_table[loop].phy_block = block_id;
		page = block_id*this->ppb;
		if(this->read_oob (mtd, chipnr, page, this->oob_size, oob_buf) == 0){
			this->bi_table[loop].block_tag = oob_buf[0];
		}else{
			this->bi_table[loop].block_tag = NF_BAD_BLOCK; //error tag
		}
		/*frist boot -->bbt/ibt block tag not exist or bbt block tag exist ibt block tag not exist*/
		if(this->bi_table[loop].block_tag == NF_BBT_TAG){
			bbt_tag_count++;
		}

		if(this->bi_table[loop].block_tag == NF_IBT_TAG){
			ibt_tag_count++;
		}
		block_id++;
		NAND_DEBUG("loop %d block id %d block_tag 0x%x\n",loop,
			this->bi_table[loop].phy_block,this->bi_table[loop].block_tag);
	}
	
	if(ibt_tag_count == 0){
		if(bbt_tag_count == 0){
			this->frist_boot = NF_FRIST_BOOT;
			NAND_INFO("nand is frist time boot! \n");
		}else{
			this->frist_boot = NF_BBT_EXIST_IBT_NO_EXIST;
			NAND_INFO("nand is bbt exist ibt not exist! \n");
		}
	}
	return 0;
}

void nf_update_bittable(struct mtd_info *mtd, int bitable_id, u16 block_tag)
{
	struct nand_chip *this = mtd->priv;
	this->bi_table[bitable_id].block_tag = block_tag;
}

/**********************************************************************************
block_tag:find block tag 
	eg:IBT_TAG BBT_TAG,0xFF
repeat_times: find block index 
	eg: repeat_times = 0, find frist block tag repeat_times=1 find second block tag
********************************************************************************/
int nf_find_block_in_bitable(struct mtd_info *mtd, unsigned char block_tag,
	int repeat_times)
{
	struct nand_chip *this = mtd->priv;
	int bitable_id = this->bi_table_block_num, loop = 0, count = repeat_times + 1;
	for(loop = 0; loop < this->bi_table_block_num; loop++)
	{		
		if(this->bi_table[loop].block_tag == block_tag){
			count--;
			NAND_DEBUG("find loop %d count %d tag 0x%x phy_block %d \n",
				loop,count,block_tag,this->bi_table[loop].phy_block);
			if(count == 0){
				bitable_id = loop;
				NAND_DEBUG("finally find bitable_id %d tag 0x%x phy_block %d \n",
					bitable_id,block_tag,this->bi_table[bitable_id].phy_block);
				break;
			}
		}
	}
	return bitable_id;
}

int nf_malloc_table(struct mtd_info *mtd,unsigned char tag)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0;
	/*init ibt table*/
	if(tag == NF_IBT_TAG){
		if((this->ibt= kmalloc(sizeof(IB_t)*this->ibt_len, GFP_KERNEL))== NULL){
			NAND_ERR("No enough memory ibt 0x%x \n",sizeof(IB_t)*this->ibt_len);
			return -1;
		}
	}else if(tag == NF_BBT_TAG){
		/*extend bbt length -->add IBT buffer to bbt buffer*/
    		NAND_INFO("before bbt len %d  ibt kernel end log %d phy %d\n",
    			this->bbt_len,this->kernel_end_log_block,
        		this->ibt[this->kernel_end_log_block].dst_block);
		this->bbt_len = (this->ibt[this->kernel_end_log_block].dst_block == NF_DST_INIT)?
			this->bbt_len:
			(this->block_num - this->ibt[this->kernel_end_log_block].dst_block);
		if((this->bbt = kmalloc(sizeof(BB_t)*this->bbt_len, GFP_KERNEL))==NULL){
			NAND_ERR("Error, no enough memory for BBT!\n");
			return -1;
		}
		NAND_INFO("update bbt len = %d\n",this->bbt_len);  
	}
	return ret;
}

/**************************************************************************
 scan ibt block region
 src_block: logical block dst_block:physical block
 	eg: scan log block: 8-10 phy block:8 good block 9 bad block 10-11 good block
  	log8:phy9  log9:phy10 log10:phy11
***************************************************************************/
void nf_construct_ibt_info(struct mtd_info *mtd,unsigned int start_log_block,
		unsigned int end_log_block,unsigned int limit_phy_block)
{
	struct nand_chip *this = mtd->priv;
	int log_block_id = 0,phy_block_id = start_log_block;
	this->active_chip = 0;
	NAND_INFO("start_log_block %d end_log_block %d limit_phy_block %d\n",
     		start_log_block,end_log_block,limit_phy_block);

	for(log_block_id = start_log_block; log_block_id<= end_log_block; log_block_id++)
	{
		this->ibt[log_block_id].src_block = log_block_id;
		while(phy_block_id<limit_phy_block)
		{
			/*find good block*/
			if(rtk_block_isbad(mtd,this->active_chip,
				phy_block_id*this->block_size)== 0){
				NAND_DEBUG("log_block_id %d phy_block_id %d \n",
							log_block_id,phy_block_id);
				break;
			}
			phy_block_id++;  
    		}

		if(phy_block_id >= limit_phy_block){
			NAND_ERR("warning!! not enough limit_block,log_block_id %d "
				"phy_block_id %d \n",log_block_id,phy_block_id);
			break;
		}else{
			this->ibt[log_block_id].src_die   = this->active_chip;
			this->ibt[log_block_id].dst_die	  = this->active_chip;
			this->ibt[log_block_id].dst_block = phy_block_id; 
			phy_block_id++;
    		} 
  	}      
}

void init_ibt_to_ram(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv;
	int loop = 0,ibt_scan_limit = 0;
	for (loop = 0; loop < this->ibt_len; loop++)
	{
		this->ibt[loop].src_die   = NF_SRC_DIE_INIT;
		this->ibt[loop].src_block = NF_SRC_INIT;
		this->ibt[loop].dst_die   = NF_DST_DIE_INIT;
		this->ibt[loop].dst_block = NF_DST_INIT;
	}
  
	/*create ibt for bootcode-area*/	
	NAND_DEBUG("Starting create bootcode area IBT start block: %d end block %d\n",
		this->bootcode_start_log_block,this->bootcode_end_log_block); 
	nf_construct_ibt_info(mtd, this->bootcode_start_log_block, 
		this->bootcode_end_log_block,this->kernel_start_log_block);

	/*create ibt for kernel-area*/
	NAND_DEBUG("Starting create kernel area IBT start block %d end block %d \n",
		this->kernel_start_log_block,this->kernel_end_log_block);
	ibt_scan_limit = this->block_num -this->bbt_len;
 	nf_construct_ibt_info(mtd, this->kernel_start_log_block, 
			this->kernel_end_log_block, ibt_scan_limit);
}

/********************************************************************************
   scan bbt block region
 	index = 0 -->find remap region last good block  
 	index = 1-->find remap region last -1 good block
 	index = n -->find remap region last -n good block
	eg:bbt block region 960-1023, 1023: good block 1022: bad block 1021:good block 
		1020:bad block 1019:good block
		index 0 -->1023 index 1-->1021 index 2 -->1019
********************************************************************************/
void init_bbt_to_ram(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv;
	int block_id = 0,loop = 0,start_block = 0;
	start_block = this->block_num - this->bbt_len;
	this->active_chip = 0;
	/*initialize bbt array*/
	for(loop = 0; loop <this->bbt_len; loop++)
	{
		this->bbt[loop].BB_die      = NF_BB_DIE_INIT;
		this->bbt[loop].bad_block   = NF_BB_INIT;
		this->bbt[loop].RB_die      = NF_RB_DIE_INIT;
		this->bbt[loop].remap_block = NF_RB_INIT;
	}
	
	loop = 0;
	for(block_id = this->block_num -1; block_id >=start_block;block_id--)
	{
		/*add good block to bbt*/
		if(rtk_block_isbad(mtd,this->active_chip,block_id*this->block_size) == 0){
			this->bbt[loop].RB_die      = this->active_chip;
			this->bbt[loop].remap_block = block_id;
 			loop++;
		}
	}      
}

int check_buffer_empty(unsigned char *buff, int buf_size)
{
	int ret = 0,loop = 0;
	for(loop = 0; loop < buf_size; loop++)
	{
		if(buff[loop]!= 0xFF){
			ret = -1;
			break;
		}
	}
	return ret;
}

int nf_write_page_content(struct mtd_info *mtd,unsigned int page_no,
	unsigned char * buf,unsigned int page_num, unsigned char tag)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0, page_id = 0,write_page_num = 0, block_addr = 0,chipnr = 0;
	int block_id = 0,block_num = 0;
	unsigned char *oob_buf = NULL;
	this->active_chip = chipnr;
	block_num   = (page_num + this->ppb - 1)/this->ppb;
	NAND_DEBUG("page_no %d page_num %d tag 0x%x block_num %d\n", 
		page_no,page_num,tag,block_num);
	
	for(block_id = 0; block_id < block_num; block_id++)
	{
		/*earse block*/
		block_addr  = page_no/this->ppb;
		NAND_DEBUG("erase block %d  \n", block_addr);
		if((ret = this->erase_block(mtd,chipnr,block_addr*this->ppb)) == 0){  
			/*write page content*/
			write_page_num =  page_num >= this->ppb?this->ppb:page_num;
			NAND_DEBUG("write page_no %d write_page_num %d \n",
				page_no,write_page_num);
			for(page_id = 0; page_id < write_page_num; page_id++)
			{
				memset(this->g_oobbuf,0xFF,this->oob_size);	
				if(NF_FREE_TAG != tag){
					this->g_oobbuf[0]= tag;
					oob_buf = this->g_oobbuf;
				}
				if(check_buffer_empty(buf,this->page_size)== 0){
					NAND_DEBUG("skip page %d page_id %d write buffer\n",
						(page_no+page_id),page_id);
					buf += this->page_size;
				}else{
					if((ret = this->write_ecc_page(mtd, this->active_chip,
							(page_no+page_id),buf, oob_buf)) == 0){
						buf += this->page_size;
					}else{
						ret = -1;
						NAND_ERR("write page %d error! \n",
							(page_no+page_id));
						break;
					}
				}
			}
		}else{
			NAND_ERR("erase block error %d!\n",block_addr);
		}
		
		if(ret != 0){
			break;
		}else{
			page_no = page_no + write_page_num;
			page_num = page_num - write_page_num;
		}
	}
	return ret;
}

int nf_write_table_content(struct mtd_info *mtd, unsigned int page_no,
	unsigned char *buf, int buf_len, unsigned char tag)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0, page_num = 0;
	unsigned char *temp_buf = NULL;
	page_num = (buf_len + this->page_size-1 )/this->page_size;
	temp_buf = kmalloc(page_num*this->page_size, GFP_KERNEL);
	if((temp_buf = kmalloc(page_num*this->page_size, GFP_KERNEL))!= NULL){
		memset(temp_buf,0xFF,page_num*this->page_size);
		memcpy(temp_buf,buf, buf_len);
		if((ret = nf_write_page_content(mtd,page_no,temp_buf,page_num,tag))== 0){
			NAND_INFO("write page %d num %d successful!\n",page_no,page_num);    
		}
		kfree(temp_buf);  
	}else{
		NAND_ERR("malloc size fail 0x%x!\n",(page_num*this->page_size));
		ret = -1;
	}
	return ret;
}


/*******************************************************************************************
 create  ibt/bbt table content to nand £¬frist time need block number is write ok
*******************************************************************************************/
int create_table_to_nand(struct mtd_info *mtd,unsigned char tag)
{
	struct nand_chip *this = mtd->priv;
	int loop = 0, page_no = 0,table_size = 0,block_num = 0,bitable_id = 0;
	unsigned char * table_content =  NULL;
	/* init table content to ram*/
	if(tag == NF_IBT_TAG){
		init_ibt_to_ram(mtd);
		block_num     = NF_IBT_BLOCK_NUM;
		table_content = (unsigned char *)this->ibt;
		table_size    = sizeof(IB_t)*this->ibt_len;
	}else if(tag == NF_BBT_TAG){
		init_bbt_to_ram(mtd);
		block_num     = NF_BBT_BLOCK_NUM;
		table_content = (unsigned char *)this->bbt;
		table_size    = sizeof(BB_t)*this->bbt_len;
	}
	
	while(loop < block_num)
	{
		/*find first free block in the bi block range  to write*/
		bitable_id = nf_find_block_in_bitable(mtd,NF_FREE_TAG,0);
		NAND_INFO("bitable_id %d in table!\n",bitable_id);
		if(bitable_id >= this->bi_table_block_num){
			NAND_ERR("not enough block tag 0x%x in the bitable!\n",tag);
			return -1;
		}
		
		/*write table content to nand*/
		page_no = this->bi_table[bitable_id].phy_block*this->ppb;
		/*update bi table information*/
		if(nf_write_table_content(mtd, page_no, table_content, table_size, tag)<0){
			nf_update_bittable(mtd, bitable_id, NF_BAD_BLOCK);
		}else{
			nf_update_bittable(mtd, bitable_id, tag);
			loop++;
		}
	}
	return 0;	
}

int nf_read_page_content(struct mtd_info *mtd,unsigned int page_no,
  unsigned char * buf,unsigned int page_num, unsigned char tag,unsigned int skip_bad_page)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0, page_id = 0, chipnr = 0;
	this->active_chip = chipnr;
	NAND_DEBUG("page_no %d page_num %d tag 0x%x\n",page_no,page_num,tag);
 	for(page_id = 0; page_id < page_num; page_id++)
	{
		memset(this->g_oobbuf,0xFF,this->oob_size);
		memset(this->g_databuf,0xFF,this->page_size);
		if((ret = this->read_ecc_page(mtd,this->active_chip,(page_no+page_id),
			this->g_databuf,this->g_oobbuf)) == 0){
			if(0xFF != tag){
				if(this->g_oobbuf[0] != tag){
					ret = -1;
					NAND_ERR("read page %d read_tag 0x%x ok_tag 0x%x\n",
						(page_no+page_id),this->g_oobbuf[0],tag); 
					break;
				}
			}
			memcpy(buf+page_id*this->page_size, this->g_databuf,this->page_size);
		}else{
			NAND_ERR("read page %d error skip_bad_page %d!\n",(page_no+page_id),
				skip_bad_page);
			if(skip_bad_page == 0){
				break;
			}else{
				ret = 0; /*skip bad block , ret alway 0*/
			}
		}
	}
	return ret;
}

int nf_read_table_content(struct mtd_info *mtd,unsigned int page_no,
	unsigned char *buf, int buf_len, int tag)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0,page_num = 0;
	unsigned char *temp_buf = NULL;
	page_num = (buf_len + this->page_size-1 )/this->page_size;
	if((temp_buf = kmalloc(page_num*this->page_size, GFP_KERNEL))== NULL){
		NAND_ERR("malloc size 0x%x fail! \n",(page_num*this->page_size));
		return -1;
	}
	if((ret = nf_read_page_content(mtd,page_no,temp_buf,page_num,tag,0)) == 0){
		memcpy(buf, temp_buf, buf_len);   
		NAND_INFO("Read page %d page_num %d successful!\n",page_no,page_num); 
	}
	kfree(temp_buf);
	return ret;
}

/********************************************************************************
page_no: read ok page-->for recovery read content
repeat_times: need recovery page content
*********************************************************************************/
int nf_recovery_bitable(struct mtd_info *mtd,int page_no,int repeat_times,
		unsigned char tag,int table_size)
{
	struct nand_chip *this = mtd->priv;
	unsigned char *table_buf = NULL,find_tag = tag;
	int ret = 0,loop = 0, bitable_id = 0,re_page_no = 0;
  	if((table_buf = kmalloc(table_size, GFP_KERNEL)) == NULL){
  		NAND_ERR("malloc buf size 0x%x error!\n",table_size);
  		return -1; 
  	}

	/*read ok recovery block content*/
	memset(table_buf,0xFF,table_size);
  	if((ret = nf_read_table_content(mtd,page_no,table_buf,table_size,tag))< 0){
		kfree(table_buf);
		return ret;
	}

	/*recovery the read fail block --> block read error, erase block maybe ok*/
	for(loop = 0; loop < this->bi_table_block_num;loop++)
	{
  		/*frist use the pre page no*/
  		bitable_id = nf_find_block_in_bitable(mtd,find_tag,repeat_times);
  		if(bitable_id < this->bi_table_block_num){
  			re_page_no = this->bi_table[bitable_id].phy_block*this->ppb;
			/*skip the good block*/
			if(re_page_no == page_no){
				continue;
			}
  			if(nf_write_table_content(mtd, re_page_no,table_buf,table_size,
					tag)== 0){
				NAND_INFO("recovery page %d tag 0x%x successful!\n",
					re_page_no,tag);
				if(find_tag != tag){
					nf_update_bittable(mtd, bitable_id, tag);
				}
				break;
			}else{
				/*mark bad block,then write pre_page fail,use first free block*/
				nf_update_bittable(mtd, bitable_id, NF_BAD_BLOCK);
				find_tag = NF_FREE_TAG;
				repeat_times = 0;
			}
  		}else{
  			NAND_INFO("not free block to recovery tag 0x%x!\n",tag);
			break;
  		}
  	}
  				
  	if(table_buf != NULL){
  		kfree(table_buf);
  	}
	return 0;
}

/*******************************************************************************************
 load table ibt/bbt/rbt table from nand:  every table block num >=2
   block index  0 -->read ok just return, read fail goto block index 1
   block index  1 -->read ok,first recovery block index 0,erase and write content, recovery ok,return
    if recovery block index 0 fail, find free block and write content, and return
*******************************************************************************************/
int load_table_from_nand(struct mtd_info *mtd,unsigned char tag, int is_rbt)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0,loop = 0,bitable_id = 0,page_no = 0,repeat_times = 0,table_size = 0;
	int table_block_num = 0,offset_page = 0;
	unsigned char *table_content = NULL;
	if(tag == NF_IBT_TAG){
		table_block_num = NF_IBT_BLOCK_NUM;
		table_content   = (unsigned char *)this->ibt;
		table_size      = this->ibt_len*sizeof(IB_t);
	}else if(tag == NF_BBT_TAG){
		table_block_num = NF_BBT_BLOCK_NUM;
		if(is_rbt == 1){
			table_content = (unsigned char *)this->rbt;
			table_size = this->rbt_len*sizeof(RB_t);
		}else{
			table_content = (unsigned char *)this->bbt;
			table_size = this->bbt_len*sizeof(BB_t);
		}
		offset_page = (sizeof(BB_t)*this->bbt_len + this->page_size-1)/this->page_size;
	}

	for(loop = 0; loop < table_block_num; loop++)
	{
		/*get table tag block id eg: ibt block id*/
		bitable_id = nf_find_block_in_bitable(mtd,tag,repeat_times);
		if(bitable_id >= this->bi_table_block_num){
			NAND_ERR("not find tag 0x%x in bi table\n",tag);
			ret = -1;
			break;
		}

		/*get table page no*/
		page_no = this->bi_table[bitable_id].phy_block*this->ppb;
		if(is_rbt == 1){
  			page_no = page_no + offset_page;
 		}
  	
		/*read page content from nand*/
		if((ret = nf_read_table_content(mtd,page_no,table_content,table_size,tag))==0){
  			break; 			 /*read tag ok break*/
  		}else{
			repeat_times++;  /*read next tag block*/
  		}
	}
  
	if((ret != 0)&&(is_rbt == 1)){
		/*case:bbt have no free block, but not use rbt ,so rbt load block fail*/
		ret = 1;
	}else if((ret == 0)&&(repeat_times > 0)&&(tag == NF_BBT_TAG)){	
		/*recovery bbt content->ibt read-only,so not need recovery*/
  		NAND_INFO("enter recovery mode! \n");	
  		table_size  = offset_page*this->page_size + this->rbt_len*sizeof(RB_t);
		if(nf_recovery_bitable(mtd,page_no,repeat_times -1,tag,table_size) < 0){
			NAND_INFO("recovery fail!\n");
		}
	}
	return ret;  
}

void nf_get_rba_num(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv;
	int rba_id = 0,free_rba_num = 0, use_rba_num = 0;
	for(rba_id = 0; rba_id < this->bbt_len; rba_id++)
	{
 		if(this->bbt[rba_id].remap_block != NF_RB_INIT)
		{
			if(this->bbt[rba_id].bad_block == NF_BB_INIT){
				free_rba_num++;
			}else{
				use_rba_num++;
			}      
		}
	}

	this->use_rba_num  = use_rba_num;
	this->free_rba_num = free_rba_num;
	if(this->use_rba_num  == 0){
		NAND_INFO("Congratulation!! No BBs in this Nand.\n");
	}
}

int init_nand_table(struct mtd_info *mtd,unsigned char tag)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0;
	/*malloc nand table*/
	if((ret = nf_malloc_table(mtd,tag)) < 0){
		return ret;
	}

	/*init nand table*/
	if((this->frist_boot == NF_FRIST_BOOT)||
		((tag == NF_IBT_TAG)&&(this->frist_boot == NF_BBT_EXIST_IBT_NO_EXIST))){
		ret = create_table_to_nand(mtd,tag);
	}else{
		ret = load_table_from_nand(mtd,tag,0);
	}
	
	if((ret == 0)&&(tag == NF_BBT_TAG)){
		nf_get_rba_num(mtd);
	}
	return ret;
}

void nf_get_rbt_num(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv;
	int use_rbt_num = 0,free_rbt_num = 0, rbt_id = 0;
	for(rbt_id = 0; rbt_id < this->rbt_len; rbt_id++)
	{
 		if(this->rbt[rbt_id].collect_block != NF_RCB_INIT){
			if(this->rbt[rbt_id].bad_block != NF_RBB_INIT){
				use_rbt_num++;
			}else{
				free_rbt_num++;
			}
		}
	}
	this->free_rbt_num = free_rbt_num;
	this->use_rbt_num = use_rbt_num;
	NAND_INFO("rbt free_rbt_num %d use_rbt_num %d\n",
		this->free_rbt_num,this->use_rbt_num);
}

int nf_init_rbt(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0,rbt_table_size = 0;
	/*exist bbt num,not use rbt just return*/
	if(this->free_rba_num != 0){
		return ret;
	}
	/*init rbt len max rbt_len = bbt_len*/
	this->rbt_len   = this->bbt_len; 
	rbt_table_size  = sizeof(RB_t)*this->rbt_len;
	if((this->rbt = kmalloc(rbt_table_size, GFP_KERNEL)) == NULL){
		NAND_ERR("Error, no enough memory for RBT table!\n");
		return -1;
	}
	memset(this->rbt, 0xFF, rbt_table_size); 

	/*get rbt content from nand */
	ret = load_table_from_nand(mtd,NF_BBT_TAG,1);
	if(ret == 1){
		NAND_INFO("no exist rbt table!\n");
		kfree(this->rbt);
		this->rbt = NULL;
	}else if(ret < 0){
		return ret;
	}else if(ret == 0){
		/*get current rbt number*/
		nf_get_rbt_num(mtd);
	}
	return ret;
}

int nf_init_log2phy_table(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv;
	int block_id = 0;
	if((this->log2phy_table = kmalloc(this->block_num*sizeof(int), 
		GFP_KERNEL))== NULL){
		NAND_ERR("malloc log2phy table error!\n");
		return -1;
	}
	for(block_id = 0; block_id < this->block_num; block_id++)
	{
		this->log2phy_table[block_id] = NF_INVALID_BLOCK_ID;
	}
	return 0;
}

int nf_init_table(struct mtd_info *mtd)
{
	int ret = 0;
	/*init common information*/
	nf_init_table_info(mtd);

	/*init table block information-->get ibt or bbt exist information*/
	if((ret = nf_init_bi_table(mtd))<0){
		return ret;
	}
	
	/*init ibt information*/
	if((ret = init_nand_table(mtd,NF_IBT_TAG))<0){
		NAND_ERR("load IBT error!\n");
		return ret;
	}

	/*init bbt information -->bbt extend length must init after ibt*/
	if((ret = init_nand_table(mtd,NF_BBT_TAG))<0){
		NAND_ERR("load BBT error!\n");
		return ret;
	}
	
	/*init rbt information -->not exist free block in bbt*/
	if((ret = nf_init_rbt(mtd)) < 0){
		NAND_ERR("load rbt error!\n");
		return ret;
	}
	
	/*init log2phy table*/
	ret = nf_init_log2phy_table(mtd);
	return ret;
}

void nf_deinit_table(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv; 
	if(this->bi_table != NULL){
		kfree(this->bi_table);
	}
	if(this->ibt != NULL){
		kfree(this->ibt);
	}

	if(this->bbt != NULL){
		kfree(this->bbt);
	}
	
	if(this->rbt != NULL){
		kfree(this->rbt);
	}
	
	if(this->log2phy_table != NULL){
		kfree(this->log2phy_table);
	}
}

/***********************************************************************************************************************
 find the first no-map logical block nearest current logical block , 
  scan from start no-map  logical block to current logical block
	eg: cur-logblock = 8   first no-map block:5 
		scan from block 5 to 8, no exist bad block map(5,5) (6,6) (7,7) (8,8)  
  		cur-logblock = 11  exist map 5-8 first no-map block:9 scan from 9 to 11, 
  	exist bad block 10  map (9,9) (10,11) (11,12)    	   
***********************************************************************************************************************/
int nf_get_phyblock_from_bootcode_table(struct mtd_info *mtd,int logblock)
{
	struct nand_chip *this = mtd->priv;
	int phy_block_id = NF_INVALID_BLOCK_ID,log_block_id = 0;
	this->active_chip  = 0;
 	/*find first map block  nearest current logical block */
	log_block_id = logblock > this->bootcode_start_log_block ?(logblock -1):logblock;
	while(log_block_id >= this->bootcode_start_log_block)
	{
		if(this->log2phy_table[log_block_id]!= NF_INVALID_BLOCK_ID){
			phy_block_id = this->log2phy_table[log_block_id];
			break;
		}
		log_block_id--;
	}

	NAND_DEBUG("find first log_block_id %d phy_block_id %d\n",log_block_id,phy_block_id);
	if(phy_block_id == NF_INVALID_BLOCK_ID){ 
		/*no any logical block map physical block in log2phy table */
		phy_block_id = this->bootcode_start_log_block;
		log_block_id = this->bootcode_start_log_block;
	}else{
		/*frist no-map logical and physical block*/
		log_block_id++; 
		phy_block_id++;
	}
	NAND_DEBUG("log_block_id %d phy_block_id %d logblock %d phy_block_id %d "
			" kernel_start_log_block %d\n",
			log_block_id,phy_block_id,logblock,phy_block_id,
			this->kernel_start_log_block);
	while(log_block_id <= logblock) 
	{
		NAND_DEBUG("log_block_id %d phy_block_id %d logblock %d phy_block_id %d "
			" kernel_start_log_block %d\n",
			log_block_id,phy_block_id,logblock,phy_block_id,
			this->kernel_start_log_block);
		while(phy_block_id < this->kernel_start_log_block)
		{
			NAND_DEBUG("log_block_id %d phy_block_id %d logblock %d phy_block_id %d "
			" kernel_start_log_block %d\n",
			log_block_id,phy_block_id,logblock,phy_block_id,
			this->kernel_start_log_block);
			if(rtk_block_isbad(mtd,this->active_chip,
				phy_block_id*this->block_size)== 0){
				NAND_DEBUG("log_block_id %d phy_block_id %d \n",
					log_block_id,phy_block_id);
				break;
			}
			phy_block_id++;  
		}
        
		if(phy_block_id == this->kernel_start_log_block){
			NAND_ERR("can't remap log_block_id %d log_block %d "
				"phy_block_id %d \n",log_block_id,logblock,phy_block_id);
			phy_block_id = NF_INVALID_BLOCK_ID;
			break;
		}
		
		this->log2phy_table[log_block_id] = phy_block_id; 
		phy_block_id++; 
		log_block_id++;
	}

	phy_block_id = this->log2phy_table[logblock];
	NAND_DEBUG("finally remap log_block %d phy_block %d\n",logblock,phy_block_id);
	return phy_block_id;
}

int nf_get_phyblock_from_ibt(struct mtd_info *mtd,int logblock)
{
	struct nand_chip *this = mtd->priv;
	return this->ibt[logblock].dst_block;
}

/*******************************************************************************************
check badblock exist bbt region exist: return remap block not exist:return badblock
   find last remap block--> bad block may remap>1 bbt region block
eg: 		800   1024         801-->1023 1023-->1022 1022-->980
		801   1023         bad block 801-->final remap physical 980
		1023  1022 
		.........   ......        
		1022  980          
*******************************************************************************************/
int nf_get_phyblock_from_bbt(struct mtd_info *mtd,int badblock)
{
	struct nand_chip *this = mtd->priv;
	int loop = 0, chipnr_remap = 0,phyblock = NF_INVALID_BLOCK_ID;
	for(loop = 0; loop < this->use_rba_num; loop++)
	{
		if((this->bbt[loop].bad_block != NF_BB_INIT)
			&&(this->bbt[loop].remap_block != NF_RB_INIT)){
			if(this->active_chip== this->bbt[loop].BB_die 
				&& badblock == this->bbt[loop].bad_block){
				phyblock = this->bbt[loop].remap_block;
				if(this->bbt[loop].BB_die != this->bbt[loop].RB_die){
					this->active_chip = chipnr_remap = this->bbt[loop].RB_die;
					this->select_chip(mtd, chipnr_remap);
				}
				NAND_INFO("BBT item%d(%d,%d,%d,%d)\n",loop,
					this->bbt[loop].BB_die,this->bbt[loop].bad_block,
					this->bbt[loop].RB_die,this->bbt[loop].remap_block);
			}
		}else{
			break;
		}
	}
	return phyblock;
}

/**********************************************************************
check badblock exist rbt region exist: return collect block not exist:return badblock
    bad block remap only one collect block
eg: 800   700		bad block 800 use physcial block 700
	801   523	
	810   522 
	.........   
**********************************************************************/
int nf_get_phyblock_from_rbt(struct mtd_info *mtd,int badblock)
{
	struct nand_chip *this = mtd->priv;
	int loop = 0, chipnr_remap = 0,phyblock = NF_INVALID_BLOCK_ID;
	for(loop = 0; loop < this->use_rbt_num; loop++)
	{
		/*not inculde this->rbt[loop].bad_block != RRB_INIT because erase collect block maybe fail*/
		if(this->rbt[loop].collect_block != NF_RCB_INIT){ 
			if((this->active_chip == this->rbt[loop].src_die)
				&& (badblock == this->rbt[loop].bad_block)){
				phyblock = this->rbt[loop].collect_block;
				if(this->rbt[loop].src_die != this->rbt[loop].dst_die){
					this->active_chip = chipnr_remap = this->rbt[loop].dst_die;
					this->select_chip(mtd, chipnr_remap);
				}
				NAND_INFO("RBT item%d:(%d,%d,%d,%d)\n",loop,
					this->rbt[loop].src_die,this->rbt[loop].bad_block,
					this->rbt[loop].dst_die,this->rbt[loop].collect_block);
			}
		}else{
			break;
		}
	}
	return phyblock;
}

/***********************************************************************************************
 1. get physical block from ibt-->this frist-time(factory mode) boot 
 2. get physical block from bbt--> ibt get physcial block maybe badblock,use bbt remap block
 3. get physcial block from rbt-->bbt not exist remap block, use rbt collect block
*************************************************************************************************/
int nf_get_phyblock_from_kernel_table(struct mtd_info *mtd,int logblock)
{
	struct nand_chip *this = mtd->priv;
	int phyblock = logblock,remap_phy_block = 0,bad_phy_block = 0;
	/*get physical block from ibt*/
	if((remap_phy_block = nf_get_phyblock_from_ibt(mtd,logblock))
		!= NF_DST_INIT){
		phyblock = remap_phy_block;
	}

	/*get physical block from  bbt*/
	if(this->use_rba_num != 0){
		bad_phy_block = phyblock;
		if((remap_phy_block = nf_get_phyblock_from_bbt(mtd,bad_phy_block))
			!= NF_INVALID_BLOCK_ID){
			phyblock = remap_phy_block;
		}
	}
	/*get physcial block from rbt*/
	if((this->use_rbt_num != 0)&&(this->rbt != NULL)){
		bad_phy_block = phyblock;
		NAND_INFO("use_rbt_num %d bad_block %d\n",this->use_rbt_num,bad_phy_block);
		if((remap_phy_block = nf_get_phyblock_from_rbt(mtd,bad_phy_block))
			!= NF_INVALID_BLOCK_ID){
			phyblock = remap_phy_block;
		}
	}
	NAND_DEBUG("logblock %d phyblock %d\n",logblock,phyblock);
	return phyblock;
}

/***********************************************************************************************
bootcode area:  read/write skip bad block
kernel area:       use ibt/bbt/rbt  
*************************************************************************************************/
int nf_get_phyblock_from_table(struct mtd_info *mtd,int logblock)
{
	struct nand_chip *this = mtd->priv;
	int phyblock = NF_INVALID_BLOCK_ID;
	if((logblock >=this->bootcode_start_log_block)
		&&(logblock < this->bootcode_end_log_block)){
		phyblock = nf_get_phyblock_from_bootcode_table(mtd,logblock);
	}else if((logblock >=this->kernel_start_log_block)
		&&(logblock < this->kernel_end_log_block)){
		phyblock = nf_get_phyblock_from_kernel_table(mtd,logblock);
	}
	if(phyblock == NF_INVALID_BLOCK_ID){
		phyblock = logblock;
		NAND_DEBUG("use block log:%d phy:%d \n",logblock,phyblock);
	}
	return phyblock;
}

int nf_get_phyblock(struct mtd_info *mtd,int logblock)
{
	struct nand_chip *this = mtd->priv;
	int phyblock = NF_INVALID_BLOCK_ID;
	if(this->log2phy_table == NULL){
		return 	phyblock;
	}
	if((phyblock = this->log2phy_table[logblock]) == NF_INVALID_BLOCK_ID){
		/*phyblock not exist find*/
		NAND_DEBUG("logblock %d need remap!\n",logblock);
		phyblock = nf_get_phyblock_from_table(mtd,logblock);
		this->log2phy_table[logblock] = phyblock;
	}
	return phyblock;		
}

void nf_build_bootcode_log2phy_table(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv;
	int log_block_id = 0;
	/*rebuild bootcode ibt from memory*/
	nf_construct_ibt_info(mtd,this->bootcode_start_log_block,
		this->bootcode_end_log_block,this->kernel_start_log_block);
	for(log_block_id = this->bootcode_start_log_block; 
		log_block_id < this->bootcode_end_log_block; log_block_id++)
	{
		this->log2phy_table[log_block_id] = this->ibt[log_block_id].dst_block;
	}	
}

void nf_set_phyblock(struct mtd_info *mtd,int logblock,int phyblock)
{
	struct nand_chip *this = mtd->priv;
	this->log2phy_table[logblock] = phyblock;
}

void nf_add_no_collect_table(struct mtd_info *mtd, int bad_block)
{
	struct nand_chip *this = mtd->priv; 
	/*have rba number not the same block*/
	if(this->free_rba_num != 0){
		return;
	}

	/*add block to no collect table, len: bbt length + 1(run time block)*/
	if(this->no_col_table == NULL){
		if((this->no_col_table = kmalloc((this->bbt_len+1)*sizeof(int),
			GFP_KERNEL)) == NULL){
			NAND_ERR("malloc buf size 0x%x failed!\n",(this->bbt_len*sizeof(int)));
			return;
		}
		this->cur_no_col_num = 0;
	}
	this->no_col_table[this->cur_no_col_num] = bad_block;
	this->cur_no_col_num++;
	NAND_INFO("cur block %d array number %d \n",bad_block,this->cur_no_col_num);
}

int nf_find_in_no_collect_table(struct mtd_info *mtd, int collect_block)
{
	struct nand_chip *this = mtd->priv;
	int find = 0,loop = 0;
	if((this->free_rba_num != 0)||(this->no_col_table == NULL)){
		return find;
	}
	
	for(loop = 0; loop < this->cur_no_col_num; loop++)
	{
		if(this->no_col_table[loop] == collect_block){
			find = 1;
			break;
		}
	}
	return find;
}

/****************************************************************************************************************************
collect bbt block:     bbt not have free block
eg: before bbt         after bbt
    800   1023         800   1021     
    801   1022         801   1022    
    1023  1021         ..........         
    ..........         	  850   989          
    850   989           860   990          
    860   990           BB_INIT 1023       
        1)find first remap > 1 block  bbt item   
	eg:800-->1023 1023-->1021
        2)collect bbt item remap block             
	eg:collect 1023 
       3)update bbt item:               
       	eg:from 800-->1023 to 800-->1021 
       4) update bbt 
         a.after 1023-->1021 bbt item,move forward
         b.add BB_INIT-->1023 to the last of vaild bbt item 
         c. update cur_bbt_num free_bbt_num
         d.get bad_block to remap
**************************************************************************/
int nf_update_bbt_to_ram(struct mtd_info *mtd,int collect_id,
	int dst_die,int remap_block)
{
	struct nand_chip *this = mtd->priv;
	int loop = 0,bad_block = 0;
	for(loop = collect_id; loop < this->bbt_len-1; loop++)
	{
		if((this->bbt[loop+1].bad_block != NF_BB_INIT)&&
			(this->bbt[loop+1].remap_block != NF_RB_INIT)){
			this->bbt[loop].BB_die       =  this->bbt[loop+1].BB_die;
			this->bbt[loop].bad_block    =  this->bbt[loop+1].bad_block;
			this->bbt[loop].RB_die       =  this->bbt[loop+1].RB_die;
			this->bbt[loop].remap_block  =  this->bbt[loop+1].remap_block;
		}else{
			break;	/*frist unmap item break*/
		}
	}
	if(loop > 0){
		bad_block = this->bbt[loop-1].remap_block;
	}
	this->bbt[loop].BB_die       =  NF_BB_DIE_INIT;
	this->bbt[loop].bad_block    =  NF_BB_INIT;
	this->bbt[loop].RB_die       =  dst_die;
	this->bbt[loop].remap_block  =  remap_block;
	this->use_rba_num--;    /*reduce use remap block*/
	this->free_rba_num++;   /*add free block*/
	return bad_block;
}

/*********************************************************************************
collect block from bbt region block ,bad block remap > 1
eg:         800  -->1023    find block 1023 to collect , 800-->1023 1023-->1022, 
	1023-->1022    collect 1023 ok 800-->1022  collect block 1023 fail , 
	1022-->1021    1023-->1022  1022-->1021 ,collect 1022, 1023-->1021   fail, go next
	....................
**********************************************************************************/
int nf_collect_block_from_bbt(struct mtd_info *mtd,int *bad_block)
{
	struct nand_chip *this = mtd->priv;
	int loop = 0, loop_in = 0,chipnr = 0,collect_block = NF_INVALID_BLOCK_ID;
	for(loop = 0; loop < this->bbt_len; loop++)
	{
		/*collect block need vaild*/
		if((this->bbt[loop].bad_block == NF_BB_INIT)||
			(this->bbt[loop].remap_block == NF_RB_INIT)){
			break;
		}
		/*block need collect or not -->skip not collect block(write failed)*/
		if(nf_find_in_no_collect_table(mtd,this->bbt[loop].remap_block) == 1){
			NAND_INFO("block %d not need collect!\n",this->bbt[loop].remap_block);
			continue;
		}

		/*get collect block -->first bbt item remap block == find bbt item bad block*/
		for(loop_in = loop + 1; loop_in < this->bbt_len; loop_in++)
		{
			if(this->bbt[loop_in].bad_block == this->bbt[loop].remap_block){
				collect_block = this->bbt[loop].remap_block;
				chipnr        = this->bbt[loop_in].BB_die;
				NAND_INFO("loop:%d loop_in:%d block %d find to collect!\n",
					loop,loop_in,collect_block);
				break;
			}
		}
		
		/*collect successful update bbt in ram*/
		if(collect_block != NF_INVALID_BLOCK_ID){
			if(this->erase_block(mtd, chipnr, collect_block*this->ppb) == 0){
				this->bbt[loop].remap_block = this->bbt[loop_in].remap_block;
				*bad_block = nf_update_bbt_to_ram(mtd,loop_in,this->bbt[loop].BB_die,
					collect_block);
				NAND_INFO("collect block %d bad block %d successful!\n",
					collect_block,*bad_block);
#ifndef CONFIG_MTD_RBT_TEST
				dump_nf_bbt(mtd);
#endif
				break;
			}
		}
	}
	return collect_block;
}

int nf_get_remap_block(struct mtd_info *mtd,int badblock)
{
	struct nand_chip *this = mtd->priv;
	int freeblock = NF_INVALID_BLOCK_ID,loop = 0,chipnr = 0,chipnr_remap = 0;
	for(loop = 0; loop < this->bbt_len; loop++)
	{
		if((this->bbt[loop].bad_block == NF_BB_INIT)
			&&(this->bbt[loop].remap_block != NF_RB_INIT)){
			this->bbt[loop].BB_die    = chipnr;
			this->bbt[loop].bad_block = badblock;
			this->bbt[loop].RB_die    = chipnr_remap;
			freeblock = this->bbt[loop].remap_block;
			this->use_rba_num++;
			this->free_rba_num--;
			NAND_DEBUG("bbt item%d(%d,%d,%d,%d)\n",loop,this->bbt[loop].BB_die,
				this->bbt[loop].bad_block,this->bbt[loop].RB_die,freeblock);
			break;
		}
	}
	return freeblock;
}

/*******************************************************************************
write bbt block number  to nand
  bi table not exist BBT tag 
       --> use free block
  bi table exist BBT table  case1: exist one tag case2: exist two tag
      	case 1: update exist tag block and get free block to write(exist write fail, use free block)
      	case 2: update exist two tag block  to write
*******************************************************************************/
int update_bbt_region_to_nand(struct mtd_info *mtd,unsigned char *buf,int buf_len)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0, repeat_times = 0,bitable_id = 0, page_no = 0;
	while(repeat_times < NF_BBT_BLOCK_NUM)
	{
		/*find bbt block*/
		bitable_id = nf_find_block_in_bitable(mtd,NF_BBT_TAG,repeat_times);
		if(bitable_id >= this->bi_table_block_num){
			NAND_INFO("not find block tag 0x%x use free block!\n",NF_BBT_TAG);
			/*find first free block in the bi table -->index write num*/
			bitable_id = nf_find_block_in_bitable(mtd,0xFF,0);
			if(bitable_id >= this->bi_table_block_num){
				NAND_ERR("not find block free block!\n");
				break; 
			}
		}

		/*write table content to nand*/
		page_no = this->bi_table[bitable_id].phy_block*this->ppb;
		if(nf_write_table_content(mtd, page_no, buf, buf_len, NF_BBT_TAG)<0){
			nf_update_bittable(mtd, bitable_id, NF_BAD_BLOCK);
		}else{
			nf_update_bittable(mtd, bitable_id, NF_BBT_TAG);
			repeat_times++; //update index
		}
	}
	return ret;
}

/*************************************************************************
  eg: if 523 and 560 is run-time bad block
  before-->  	BB_INIT   1023  	after ---> 	523      1023  
    		BB_INIT   1022          		560      1022
    		..........              		       	.......... 
    		BB_INIT   989           		BB_INIT   989        
    		BB_INIT   990           		BB_INIT   990 
**************************************************************************/
int nf_get_freeblock_from_bbt(struct mtd_info *mtd,int badblock)
{
	struct nand_chip *this = mtd->priv;
	int freeblock = NF_INVALID_BLOCK_ID,collect_block = 0;
	this->active_chip = 0;
#ifndef CONFIG_MTD_RBT_TEST
	dump_nf_bbt(mtd);
#endif
	/*enough bbt block -->not enough bbt block need collect block*/
	if(this->free_rba_num == 0){
		NAND_INFO("currnt bad block %d use bbt block number %d is full,use GC!\n",
			badblock,this->use_rba_num);
		if((collect_block = nf_collect_block_from_bbt(mtd,&badblock)) 
				== NF_INVALID_BLOCK_ID){
			NAND_ERR("can't collect block from bbt!\n");
			return freeblock;
		}
	}
	
	/*get remap block*/
	if((freeblock = nf_get_remap_block(mtd,badblock))!=NF_INVALID_BLOCK_ID){
		/*update bbt to nand*/
		update_bbt_region_to_nand(mtd,(unsigned char *)this->bbt,
			(sizeof(BB_t)*this->bbt_len));
	}
	return freeblock;
}

/*************************************************************************
   before bbt table   init rbt table          collect block --> bbt bad block region
    800   1023         RCB_INIT   800     not use bbt region block
    801   1022         RCB_INIT   801    
    808   1021         RCB_INIT   808
    ..........        	 ..........
    850   989          RCB_INIT   850
    860   990          RCB_INIT   860
**************************************************************************/	
int nf_build_rbt_content(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv;
	int loop = 0, loop_in = 0,rbt_limt_block = 0,exist = 0;
	rbt_limt_block = this->block_num - this->bbt_len;
	this->rbt_len = this->bbt_len;
	if(this->rbt == NULL){
		if ((this->rbt = kmalloc(sizeof(RB_t)*this->rbt_len, GFP_KERNEL)) == NULL){
			NAND_ERR("Error, no enough memory for RBT table!\n");
			return -1;
		}else{
			memset(this->rbt, 0xFF, sizeof(RB_t)*this->rbt_len);
		}
	}
	
	for(loop = 0; loop < this->rbt_len; loop++)
	{
		this->rbt[loop].src_die        =  NF_BB_DIE_INIT;
		this->rbt[loop].bad_block      =  NF_RBB_INIT;
		this->rbt[loop].dst_die        =  NF_BB_DIE_INIT;
		this->rbt[loop].collect_block  =  NF_RCB_INIT;
	}
	
	/*not use bbt region block*/
	for(loop = 0; loop < this->bbt_len; loop++)
	{
		if((this->bbt[loop].remap_block!= NF_RB_INIT)
			&&(this->bbt[loop].bad_block < rbt_limt_block)){
			exist = 0;
			/*skip exist bad block exist in rbt*/
			for(loop_in = 0; loop_in < this->free_rbt_num; loop_in++)
			{
				if(this->rbt[loop_in].collect_block == this->bbt[loop].bad_block){
					exist = 1;
					break;
				}
			}
			if(exist == 0){
				this->rbt[this->free_rbt_num].dst_die       = this->bbt[loop].BB_die;
				this->rbt[this->free_rbt_num].collect_block = this->bbt[loop].bad_block;
				this->free_rbt_num++;
			}
		}
	}
	dump_nf_rbt(mtd);
	return 0;
}

int update_rbt_to_nand(struct mtd_info *mtd)
{
	struct nand_chip *this = mtd->priv;
	u8*table_buf = NULL,*tmp_buf = NULL;
	int buf_len = 0;
	buf_len = ((sizeof(BB_t)*this->bbt_len + this->page_size-1)/this->page_size)
				*this->page_size;
	buf_len += ((sizeof(RB_t)*this->rbt_len + this->page_size-1)/this->page_size)
				*this->page_size;
	
	if((table_buf = kmalloc(buf_len, GFP_KERNEL)) != NULL){
		memset(table_buf,0xFF,buf_len);
		tmp_buf = table_buf;
		memcpy(tmp_buf,this->bbt, sizeof(BB_t)*this->bbt_len);
 		tmp_buf += ((sizeof(BB_t)*this->bbt_len+this->page_size-1)/this->page_size)
					*this->page_size;
		memcpy(tmp_buf,this->rbt, sizeof(RB_t)*this->rbt_len);
	}else{
		NAND_ERR("malloc size 0x%x fail!\n",buf_len);
		return -1;
	}
	update_bbt_region_to_nand(mtd,table_buf,buf_len);
	kfree(table_buf);
	return 0;	
}

/*************************************************************************
  no bbt region block,use rbt block region
  RCB_INIT	 800	                	523   800
  RCB_INIT	 801			560   801
  RCB_INIT	 808
   ..........			..........
  RCB_INIT	 850
  RCB_INIT	 860
**************************************************************************/
int nf_get_freeblock_from_rbt(struct mtd_info *mtd,int badblock)
{
	struct nand_chip *this = mtd->priv;
	int freeblock = NF_INVALID_BLOCK_ID,loop = 0,chipnr = 0,chipnr_collect = 0;
	if(this->rbt == NULL){
		if(nf_build_rbt_content(mtd) < 0){
			return freeblock;
		}
	}
	
	for(loop = 0; loop < this->rbt_len; loop++)
	{
		if((this->rbt[loop].bad_block == NF_RBB_INIT)
			&&(this->rbt[loop].collect_block != NF_RCB_INIT)){
			/*block need collect or not*/
			if(nf_find_in_no_collect_table(mtd,this->rbt[loop].collect_block) == 1){
				NAND_INFO("block %d not need collect!\n",this->rbt[loop].collect_block);
				continue;
			}
			
			if(this->erase_block(mtd, chipnr, 
				this->rbt[loop].collect_block*this->ppb) == 0){
				this->rbt[loop].src_die   =  chipnr;
				this->rbt[loop].bad_block =  badblock;
				this->rbt[loop].dst_die   =  chipnr_collect;
				freeblock = this->rbt[loop].collect_block;
				this->free_rbt_num--;
				this->use_rbt_num++;
				NAND_INFO("rbt item%d(%d,%d,%d,%d)\n",loop,this->rbt[loop].src_die,
					this->rbt[loop].bad_block,this->rbt[loop].dst_die,freeblock);
				break;
			}
		}
	}
	
	if((loop < this->rbt_len)&&(freeblock != NF_INVALID_BLOCK_ID)){
		update_rbt_to_nand(mtd);
	}

	dump_nf_rbt(mtd);
	return freeblock;
}

int nf_get_kernel_free_block(struct mtd_info *mtd,int badblock)
{
	int freeblock = NF_INVALID_BLOCK_ID;
	/*get free block from bbt*/
	if((freeblock = nf_get_freeblock_from_bbt(mtd,badblock))== NF_INVALID_BLOCK_ID){
		/*get free block from rbt*/
		NAND_INFO("not free bbt to collect, using rbt! \n");
		freeblock  = nf_get_freeblock_from_rbt(mtd,badblock);
	}
	return freeblock;
}

int nf_get_freeblock(struct mtd_info *mtd,int badblock)
{
	struct nand_chip *this = mtd->priv;
	int freeblock = NF_INVALID_BLOCK_ID,kernel_start_block = 0;
	kernel_start_block =(this->bootcode_size+ this->block_size - 1)/this->block_size;
	NAND_DEBUG("kernel_start_block %d \n", kernel_start_block);
	if((badblock >= kernel_start_block)&&(badblock < this->block_num)){
		freeblock = nf_get_kernel_free_block(mtd,badblock);
	}
	return freeblock;
}

int nf_erase_remap_block(struct mtd_info *mtd,int logblock,int bad_block)
{
	struct nand_chip *this = mtd->priv; 
	int ret = 0,phy_block = 0;
	/*mark as bad block*/
	mark_as_badblock(mtd,bad_block);  
	while(1)
	{
		/*get block from  table*/
		phy_block = nf_get_freeblock(mtd,bad_block); 
 		if(phy_block > this->block_num){
			NAND_ERR("log block %d get remap failed! \n",bad_block);
			ret = -1; 
		}
		NAND_INFO("successful log_block %d remap %d!\n",logblock,phy_block);
		/*update physical block to logical block*/
		nf_set_phyblock(mtd,logblock,phy_block); 
		break;
	}
	return ret;
}

int nf_remap_write_page_content(struct mtd_info *mtd,int log_block,int bad_block,
	unsigned char * buf_content,int page_num)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0,phy_block = 0,phy_page = 0;
	while(1)
	{
		/*get remap physical block from bbt or rbt table*/
		phy_block = nf_get_freeblock(mtd,bad_block); 
		if(phy_block >= this->block_num){
			NAND_ERR("log block %d get remap failed!\n",bad_block);
			ret = -1;
			break;
		}
            
		/*write block content to block*/
		phy_page  = phy_block*this->ppb;
		if((ret = nf_write_page_content(mtd,phy_page,buf_content,
				page_num,0xFF)) != 0){
			NAND_ERR("write page %d number %d failed,add no collect table!\n",
						phy_page,page_num);
			/*add write fail block to no collect table-->GC can't use same block*/
			nf_add_no_collect_table(mtd,phy_block);
		}else{
			NAND_INFO("successful log_block %d remap %d !\n",log_block,phy_block);
			/*update physical block to logical block*/
			nf_set_phyblock(mtd,log_block,phy_block);    
			break;     
		}
	}  
	return ret;
}

/*****************************************************************************
   if page_offset > 0  
   a. read page_offset content   eg: page_offset = 3, need read 0-3 page content from block
   b. write content to block
******************************************************************************/
int nf_remap_write_block_content(struct mtd_info *mtd,int log_block,
	int page,const unsigned char * page_content)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0,org_page_start = 0,page_offset = 0,bad_block = 0;
	unsigned char * buf_content = NULL;
	page_offset = page%this->ppb;
    	NAND_INFO("read log_block %d page %d number %d!\n",log_block,page,page_offset+1);
	/*get  original page block content*/
	if(page_offset > 0){
		if((buf_content=kmalloc(this->page_size*(page_offset+1),GFP_KERNEL))== NULL){
			NAND_ERR("malloc buf size 0x%x failed!\n",
					(this->page_size*(page_offset+1)));
			return -1;
		}else{
			org_page_start = (page/this->ppb)*this->ppb;
			memset(buf_content,0xFF,this->page_size*(page_offset+1)); 
			/*eg: write page offset 3 fail-->read page 0-2, need 3 page,index start 0*/
			if(nf_read_page_content(mtd,org_page_start,buf_content,
				page_offset,0xFF,1)!=0){
				NAND_ERR("read page %d number %d failed!\n",
						org_page_start,page_offset+1);
			}else{
				memcpy(buf_content+page_offset*this->page_size,page_content,
					this->page_size);
			}
		}   
	}else{
		buf_content = (unsigned char *)page_content;
	}
	
	/*mark as bad block*/
	bad_block = page/this->ppb;
	mark_as_badblock(mtd,bad_block);

	/*copy data to remap block*/
	ret = nf_remap_write_page_content(mtd,log_block,bad_block,
		buf_content,(page_offset + 1));

	if(page_offset > 0){
		NAND_INFO("page_offset %d free 0x%x\n",page_offset,(unsigned int)buf_content);
		kfree(buf_content);
	}
	return ret;
}

int nf_remap_read_block_content(struct mtd_info *mtd,int log_block,int page,
	unsigned int skip_bad_page)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0,org_page_start = 0,page_num = 0,bad_block = 0;
	unsigned char * buf_content = NULL,*tmp_bbt = NULL, *tmp_rbt = NULL;
	page_num = this->ppb;//page%this->ppb + 1;
    
	/*get original page block content*/
	if((buf_content = kmalloc(this->page_size*page_num,GFP_KERNEL))==NULL){
		NAND_ERR("malloc buf size 0x%x failed!\n",(this->page_size*page_num));
		return -1;
	}else{
		memset(buf_content,0xFF,this->page_size*page_num);
		org_page_start = (page/this->ppb)*this->ppb;
		if((ret = nf_read_page_content(mtd,org_page_start,buf_content,page_num,
					0xFF,skip_bad_page))!=0){
			NAND_ERR("read page %d number %d failed!\n",org_page_start,page_num);
			kfree(buf_content);
			return ret;
		}   
	}
	
	/*copy bbt rbt content to tmp buffer*/
	if((tmp_bbt = (unsigned char *)kmalloc(sizeof(BB_t)*this->bbt_len,GFP_KERNEL))==NULL){
		NAND_ERR("malloc bbt error!\n");
		goto end;
	}
	memcpy(tmp_bbt,(unsigned char *)this->bbt,sizeof(BB_t)*this->bbt_len);

	if(this->rbt!= NULL){
		if((tmp_rbt = (unsigned char *)kmalloc(sizeof(RB_t)*this->rbt_len,
			GFP_KERNEL))== NULL){
			NAND_ERR("malloc rbt error!\n");
			goto end;
		}
		memcpy(tmp_rbt,(unsigned char *)this->rbt,sizeof(RB_t)*this->rbt_len);
	}
	bad_block = page/this->ppb;

	/*copy data to remap block*/	
	if((ret = nf_remap_write_page_content(mtd,log_block,bad_block,
			buf_content,page_num))==0){
		mark_as_badblock(mtd,bad_block);
	}else{
		/*recovery fail, use current ecc warning page*/
		memcpy((unsigned char *)this->bbt,tmp_bbt,sizeof(BB_t)*this->bbt_len);
		memcpy((unsigned char *)this->rbt,tmp_rbt,sizeof(RB_t)*this->rbt_len);
		update_rbt_to_nand(mtd);
	}

end:
	if(buf_content != NULL){
		kfree(buf_content);
	}
	if(tmp_bbt != NULL){
		kfree(tmp_bbt);
	}
	if(tmp_rbt != NULL){
		kfree(tmp_rbt);
	}
	return ret;
}

int rtk_nand_reload_bbt(struct mtd_info *mtd)
{
	int ret = 0;
	ret = load_table_from_nand(mtd,NF_BBT_TAG,0);
	return ret;
}
