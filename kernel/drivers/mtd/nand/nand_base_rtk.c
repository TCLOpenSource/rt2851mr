/******************************************************************************
 * $Id: nand_base_rtk.c 317223 2010-06-01 07:38:49Z alexchang2131 $
 * drivers/mtd/nand/nand_base_rtk.c
 * Overview: Realtek MTD NAND Driver 
 * Copyright (c) 2008 Realtek Semiconductor Corp. All Rights Reserved.
 * Modification History:
 *    #000 2008-06-10 Ken-Yu   create file
 *    #001 2008-09-10 Ken-Yu   add BBT and BB management
 *    #002 2008-09-28 Ken-Yu   change r/w from single to multiple pages
 *    #003 2008-10-09 Ken-Yu   support single nand with multiple dies
 *    #004 2008-10-23 Ken-Yu   support multiple nands
 * Copyright (C) 2007-2013 Realtek Semiconductor Corporation
 *******************************************************************************/
#include <linux/delay.h>
#include <linux/errno.h>
#include <linux/sched.h>
#include <linux/types.h>
#include <linux/mtd/mtd.h>
#include <linux/interrupt.h>
#include <linux/slab.h>
#include <linux/bitops.h>
#include <linux/parser.h>
#include <mtd/mtd-abi.h>
#include <mach/io.h>
#include <asm/page.h>
#include <linux/jiffies.h>
#include <linux/semaphore.h>
#include <linux/module.h>
#include "rtk_nand.h"
#include "nand_reg.h"

NF_DEBUG_SET_LEVEL(NF_DEBUG_LEVEL_INFO);

extern unsigned int g_BootcodeSize;
extern  unsigned int g_Factory_param_size;
#define READ_RETRY_COUNT	3
#define MTD_SEM_RETRY_COUNT	(0x40)
#define NOTALIGNED(mtd, x) (x & (mtd->writesize-1)) != 0

//for writing profile
static const device_type_t *ptr_device;
extern int nf_init_table(struct mtd_info *mtd);
extern int rtk_nand_reload_bbt(struct mtd_info *mtd);
extern int nf_get_phyblock(struct mtd_info *mtd,int logblock);
extern int nf_erase_remap_block(struct mtd_info *mtd,int logblock,int bad_block);
extern int nf_remap_write_block_content(struct mtd_info *mtd,int log_block,int page,const u_char * page_content);
extern int nf_remap_read_block_content(struct mtd_info *mtd,int log_block,int page,int uncover);
extern void nf_build_bootcode_log2phy_table(struct mtd_info *mtd);

#define check_end(mtd, addr, len)					\
do {									\
	if (mtd->size == 0) 						\
		return -ENODEV;						\
	else								\
	if ((addr + len) > mtd->size) {					\
		printk (				\
			"%s: attempt 0x%x access past end of device 0x%llx\n",	\
			__FUNCTION__,(addr + len),mtd->size);					\
		return -EINVAL;						\
	}								\
} while(0)

#define check_page_align(mtd, addr)					\
do {									\
	if (addr & (mtd->oobblock - 1)) {				\
		printk (				\
			"%s: attempt addr 0x%x access non-page-aligned 0x%x data\n",	\
			__FUNCTION__,addr,mtd->oobblock);					\
		return -EINVAL;						\
	}								\
} while (0)

#define check_block_align(mtd, addr)					\
do {									\
	if (addr & (mtd->erasesize - 1)) {				\
		printk (				\
			"%s: attempt addr 0x%x access non-block-aligned 0x%x data\n",	\
			__FUNCTION__,addr,mtd->erasesize);					\
		return -EINVAL;						\
	}								\
} while (0)

#define check_len_align(mtd,len)					\
do {									\
	if (len & (512 - 1)) {          	 			\
		printk (				\
               	      "%s: attempt access non-512bytes-aligned mem\n",	\
			__FUNCTION__);					\
		return -EINVAL;						\
	}								\
} while (0)

extern char *rtkNF_parse_token(const char *parsed_string, const char *token);
extern unsigned int rtkNF_getBootcodeSize(void);
extern unsigned int rtkNF_getFactParaSize(void);
unsigned int g_mtd_BootcodeSize = 0;
extern int g_sw_WP_level;
extern int g_disNFWP;
/*
	parse_token can parse a string and extract the value of designated token.
		parsed_string: The string to be parsed.
		token: the name of the token
		return value: If return value is NULL, it means that the token is not found.
			If return value is "non zero", it means that the token is found, and return value will be a string that contains the value of that token.
			If the token doesn't have a value, return value will be a string that contains empty string ("\0").
			If return value is "non zero", "BE SURE" TO free it after you donot need it.

		Exp:
			char *value=parse_token("A1 A2=222 A3=\"333 333\"", "A0");
				=> value=NULL
			char *value=parse_token("A1 A2=222 A3=\"333 333\"", "A1");
				=> value points to a string of "\0"
			char *value=parse_token("A1 A2=222 A3=\"333 333\"", "A2");
				=> value points to a string of "222"
			char *value=parse_token("A1 A2=222 A3=\"333 333\"", "A3");
				=> value points to a string of "333 333"
*/
static char *NF_parse_token(const char *parsed_string, const char *token)
{
	const char *ptr = parsed_string;
	const char *start, *end, *value_start, *value_end;
	char *ret_str;
	
	while(1) {
		value_start = value_end = 0;
		for(;*ptr == ' ' || *ptr == '\t'; ptr++)	;
		if(*ptr == '\0')	break;
		start = ptr;
		for(;*ptr != ' ' && *ptr != '\t' && *ptr != '=' && *ptr != '\0'; ptr++) ;
		end = ptr;
		if(*ptr == '=') {
			ptr++;
			if(*ptr == '"') {
				ptr++;
				value_start = ptr;
				for(; *ptr != '"' && *ptr != '\0'; ptr++)	;
				if(*ptr != '"' || (*(ptr+1) != '\0' && *(ptr+1) != ' ' && *(ptr+1) != '\t')) {
					printk("system_parameters error! Check your parameters.");
					break;
				}
			} else {
				value_start = ptr;
				for(;*ptr != ' ' && *ptr != '\t' && *ptr != '\0' && *ptr != '"'; ptr++) ;
				if(*ptr == '"') {
					printk("system_parameters error! Check your parameters.");
					break;
				}
			}
			value_end = ptr;
		}

		if(!strncmp(token, start, end-start)) {
			if(value_start) {
				ret_str = kmalloc(value_end-value_start+1, GFP_KERNEL);
				strncpy(ret_str, value_start, value_end-value_start);
				ret_str[value_end-value_start] = '\0';
				return ret_str;
			} else {
				ret_str = kmalloc(1, GFP_KERNEL);
				strcpy(ret_str, "");
				return ret_str;
			}
		}
	}

	return (char*)NULL;
}

/* Realtek supports nand chip types */
/* Micorn */
#define MT29F2G08AAD	0x2CDA8095	//SLC, 256 MB, 1 dies
#define MT29F2G08ABAE	0x2CDA9095  //SLC, 256MB, 1 dies
#define MT29F1G08ABADA  0x2CF18095  //SLC, 128MB, 1 dies
#define MT29F4G08ABADA  0x2CDC9095  //SLC, 512MB, 1 dies
//#define MT29F32G08CBACA  0x2C68044A  //MLC, 4GB, 1 dies
#define MT29F64G08CBAAA  0x2C88044B //MLC, 8GB, 1dies
#define MT29F8G08ABABA   0x2C380026  //Micron 1GB   (SLC single die)
#define MT29F4G08ABAEAH4 0x2CDC90A6  //Micron 4Gb   (SLC single die)
#define MT29F8G08ABACA	  0x2CD390A6	//Micron 8GB   (SLC single die)


/* STMicorn */
#define NAND01GW3B2B	0x20F1801D	//SLC, 128 MB, 1 dies
#define NAND01GW3B2C	0x20F1001D	//SLC, 128 MB, 1 dies, son of NAND01GW3B2B
#define NAND02GW3B2D	0x20DA1095	//SLC, 256 MB, 1 dies
#define NAND04GW3B2B	0x20DC8095	//SLC, 512 MB, 1 dies
#define NAND04GW3B2D	0x20DC1095	//SLC, 512 MB, 1 dies
#define NAND04GW3C2B	0x20DC14A5	//MLC, 512 MB, 1 dies
#define NAND08GW3C2B	0x20D314A5	//MLC, 1GB, 1 dies

/* Hynix Nand */
#define HY27UF081G2A	0xADF1801D	//SLC, 128 MB, 1 dies
#define HY27UF081G2B	0xADF1801D	//SLC, 128 MB, 1 dies

#define HY27UF082G2A	0xADDA801D	//SLC, 256 MB, 1 dies
#define HY27UF082G2B	0xADDA1095	//SLC, 256 MB, 1 dies
#define HY27UF084G2B	0xADDC1095	//SLC, 512 MB, 1 dies
#define HY27UF084G2M	0xADDC8095	//SLC, 512 MB, 1 dies
	/* HY27UT084G2M speed is slower, we have to decrease T1, T2 and T3 */
#define HY27UT084G2M	0xADDC8425	//MLC, 512 MB, 1 dies, BB check at last page, SLOW nand
#define HY27UT084G2A	0xADDC14A5	//MLC, 512 MB, 1 dies
#define H27U4G8T2B		0xADDC14A5	//MLC, 512 MB, 1 dies
#define HY27UT088G2A	0xADD314A5	//MLC, 1GB, 1 dies, BB check at last page
#define HY27UG088G5M	0xADDC8095	//SLC, 1GB, 2 dies
#define HY27UG088G5B	0xADDC1095	//SLC, 1GB, 2 dies
#define H27U8G8T2B		0xADD314B6	//MLC, 1GB, 1 dies, 4K page
#define H27UAG8T2A		0xADD59425	//MLC, 2GB, 1 dies, 4K page
#define H27UAG8T2B		0xADD5949A	//MLC, 2GB, 1 dies, 8K page
#define H27U2G8F2C		0xADDA9095	//SLC, 256 MB, 1 dies, 2K page
#define H27U4G8F2D      0xADDC9095  //SLC, 512MB, 1dies, 2K page
#define H27U1G8F2B      0xADF1001D	//SLC, 128MB, 1dies, 2K page
#define H27UBG8T2A		0xADD7949A	//MLC, 4GB, 1 dies, 8K page
#define H27UBG8T2B		0xADD794DA	//MLC, 4GB, 1 dies, 8K page
#define H27U4G8F2ETR	0xADDC9095	//SLC, 512MB, 1dies, 2K page


 

/* Samsung Nand */
#define K9F1G08U0B	0xECF10095	//SLC, 128 MB, 1 dies
#define K9F1G08U0D	0xECF10015	//SLC, 128 MB, 1 dies
#define K9F2G08U0B	0xECDA1095	//SLC, 256 MB, 1 dies
#define K9G4G08U0A	0xECDC1425	//MLC, 512 MB, 1 dies, BB check at last page
#define K9G4G08U0B	0xECDC14A5	//MLC, 512 MB, 1 dies, BB check at last page
#define K9F4G08U0B	0xECDC1095	//SLC, 512 MB, 1 dies
#define K9G8G08U0A	0xECD314A5	//MLC, 1GB, 1 dies, BB check at last page
#define K9G8G08U0M	0xECD31425	//MLC, 1GB, 1 dies, BB check at last page
#define K9K8G08U0A	0xECD35195	//SLC, 1GB, 1 dies
#define K9F8G08U0M	0xECD301A6	//SLC, 1GB, 1 dies, 4K page
#define K9K8G08U0D	0xECD31195  //SLC, 1GB, 1 dies

/* Toshiba */
#define TC58NVG0S3C	0x98F19095	//128 MB, 1 dies
#define TC58NVG0S3E	0x98D19015	//128 MB, 1 dies
#define TC58NVG1S3C	0x98DA9095	//256 MB, 1 dies
#define TC58NVG1S3E	0x98DA9015	//256 MB, 1 dies
#define TC58NVG2S3E	0x98DC9015	//512 MB, 1 dies
#define TC58NVG5D2F	0x98D79432	//MLC, 4GB, 1 dies, 8K page
#define TC58NVG4D2E 0x98D59432  //MLC, 2GB, 1 dies, 8K page
#define TC58NVG2S0F 0x98DC9026  //SLC,512MB 1 dies,4K page
#define TC58NVG2S0FTA00	0x98D39026	// Toshiba 4Gb  (SLC single die)
#define TC58NVG5D2H 0x98D79432 
#define TC58BVG0S3H     0x98F18015	//SLC, 1GB, 1 dies
#define TC58BVG1S3H     0x98DA9015	//SLC, 2GB, 1 dies
#define TC58NVG0S3H     0x98F18015	//SLC, 1GB, 1 dies
#define TC58NVG1S3H     0x98DA9015	//SLC, 2GB, 1 dies
#define TC58DVG02D5		0x98f10015  //SLC,128MB 1 dies 
#define TH58NVG2S3HTA00 0x98DC9115		//SLC,512MB 2 dies
#define TC58NVG2S0HBAI4	0x98DC9026	// Toshiba 4Gb (SLC)

/* Macronix/MXIC */
#define MX30LF1G08AM 0xC2F1801D // 128 MB, 1 dies
#define MX30LF1208AA 0xC2F0801D // 64MB, 1 dies
#define MX30LF1G18AC        0xC2F18095      //MIX  1Gb
#define MX30LF2G18AC        0xC2DA9095      //MIX 2Gb
#define MX30LF4G18AC        0xC2DC9095      //MIX 4Gb
#define MX60LF8G18AC        0xC2D3D195      //MIX 8Gb
#define MX30LF4G28AC        0xC2DC9095		// Macronix 4Gb (SLC single die) 1st generation


/* ESMT */
#define F59L1G81A  0x92F18095
#define F59L4G81A	0xC8DC9095
#define F59L1G81A2Y	0xC8D18095 
#define F59L2G81A	0xC8DA9095


/*MIRA*/
//#define PSU2GA30AT 0X7F7F7F7F      
#define PSU2GA30BT    0xC8DA9095
#define PSU4GA30AT    0xC8DC9095

/*Spansion*/
#define S34ML01G1	        0x01F1001D
#define S34ML02G1	        0x01DA9095
#define S34ML04G1	        0x01DC9095  
#define S34ML01G2     		0x01F1801D
#define S34ML02G2	        0x01DA9095 
#define S34ML04G2	        0x01DC9095 

#define W29N01HV  				0xEFF10095         //winbond 1Gb
#define W29N02GV  				0xEFDA9095         //winbond 2Gb
#define W29N04GV  				0xEFDC9095        //winbond 4Gb
#define W29N08GV  				0xEFD39195        //winbond 8Gb

/*GD*/
#define GD9FU1G8F2A       0xC8F1801D       //GD  1Gb  


/*Zentel*/
#define A5U2GA31BTS	        0xC8DA9095

/* RTK Nand Chip ID list */
static device_type_t nand_device[] = 
{
 {"MT29F2G08AAD", MT29F2G08AAD, 0x10000000, 0x10000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"MT29F2G08ABAE", MT29F2G08ABAE, 0x10000000, 0x10000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff,0x01, 0x01, 0x01, 0x00, 4}, 	
 {"MT29F1G08ABADA", MT29F1G08ABADA, 0x8000000, 0x8000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff,0x01, 0x01, 0x01, 0x00, 4},	 
 {"MT29F4G08ABADA", MT29F4G08ABADA, 0x20000000, 0x20000000, 2048, 64*2048, 64, 1, 0, 0x56, 0xff, 0xff,0x01, 0x01, 0x01, 0x00, 4},	  	
 //{"MT29F32G08CBACA", MT29F32G08CBACA, 0x100000000, 0x100000000, 4096, 256*4096, 224, 1, 0, 0xff, 0xff, 0x18,0x00, 0x00, 0x00, 0x18, 20},	
 {"MT29F64G08CBAAA", MT29F64G08CBAAA, 0x200000000, 0x200000000, 8192, 256*8192, 448, 1, 0, 0xff, 0xff, 0x18,0x01, 0x01, 0x01, 0x18, 20},	  	
 {"MT29F8G08ABABA", MT29F8G08ABABA, 0x40000000, 0x40000000, 4096, 128*4096, 224, 1, 0, 0x85, 0xff, 0xff,0x01, 0x01, 0x01, 0x00, 4}, 	 
 {"MT29F4G08ABAEAH4", MT29F4G08ABAEAH4, 0x20000000, 0x20000000, 4096, 64*4096, 224, 1, 0, 0x54, 0xff, 0xff,0x01, 0x01, 0x01, 0x0c, 8},
 {"MT29F8G08ABACA", MT29F8G08ABACA, 0x40000000, 0x40000000, 4096, 64*4096, 224, 1, 0, 0x64, 0xff, 0xff,0x01, 0x01, 0x01, 0x0c, 8},

 {"NAND01GW3B2B", NAND01GW3B2B, 0x8000000, 0x8000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"NAND01GW3B2C", NAND01GW3B2C, 0x8000000, 0x8000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"NAND02GW3B2D", NAND02GW3B2D, 0x10000000, 0x10000000, 2048, 64*2048, 64, 1, 0, 0x44, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"NAND04GW3B2B", NAND04GW3B2B, 0x20000000, 0x20000000, 2048, 64*2048, 64, 1, 0, 0x20, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"NAND04GW3B2D", NAND04GW3B2D, 0x20000000, 0x20000000, 2048, 64*2048, 64, 1, 0, 0x54, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"NAND04GW3C2B", NAND04GW3C2B, 0x20000000, 0x20000000, 2048, 128*2048, 64, 1, 1, 0x24, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"NAND08GW3C2B", NAND08GW3C2B, 0x40000000, 0x40000000, 2048, 128*2048, 64, 1, 1, 0x34, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"HY27UF081G2A", HY27UF081G2A, 0x8000000, 0x8000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"HY27UF081G2B", HY27UF081G2B, 0x8000000, 0x8000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"HY27UF082G2A", HY27UF082G2A, 0x10000000, 0x10000000, 2048, 64*2048, 64, 1, 0, 0x00, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"HY27UF082G2B", HY27UF082G2B, 0x10000000, 0x10000000, 2048, 64*2048, 64, 1, 0, 0x44, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"HY27UF084G2B", HY27UF084G2B, 0x20000000, 0x20000000, 2048, 64*2048, 64, 1, 0, 0x54, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"HY27UT084G2A", HY27UT084G2A, 0x20000000, 0x20000000, 2048, 128*2048, 64, 1, 1, 0x24, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"H27U4G8T2B", H27U4G8T2B, 0x20000000, 0x20000000, 2048, 128*2048, 64, 1, 1, 0x24, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"HY27UT088G2A", HY27UT088G2A, 0x40000000, 0x40000000, 2048, 128*2048, 64, 1, 1, 0x34, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"HY27UF084G2M", HY27UF084G2M, 0x20000000, 0x20000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"HY27UT084G2M", HY27UT084G2M, 0x20000000, 0x20000000, 2048, 128*2048, 64, 1, 1, 0xff, 0xff, 0xff, 0x04, 0x04, 0x04, 0x00, 4},
 {"HY27UG088G5M", HY27UG088G5M, 0x40000000, 0x20000000, 2048, 64*2048, 64, 2, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"HY27UG088G5B", HY27UG088G5B, 0x40000000, 0x20000000, 2048, 64*2048, 64, 2, 0, 0x54, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"H27U8G8T2B", H27U8G8T2B, 0x40000000, 0x40000000, 4096, 128*4096, 128, 1, 1, 0x34, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"H27UAG8T2A", H27UAG8T2A, 0x80000000, 0x80000000, 4096, 128*4096, 224, 1, 1, 0x44, 0x41, 0x18, 0x01, 0x01, 0x01, 0x0c, 8},
 {"H27UAG8T2B", H27UAG8T2B, 0x80000000, 0x80000000, 8192, 256*8192, 448, 1, 1, 0x74, 0x42, 0x18, 0x01, 0x01, 0x01, 0x18, 20},
 {"H27U2G8F2C", H27U2G8F2C, 0x10000000, 0x10000000, 2048, 64*2048, 64, 1, 1, 0x44, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4}, 	 
 {"H27U4G8F2D", H27U4G8F2D, 0x20000000, 0x20000000, 2048, 64*2048, 64, 1, 1, 0x54, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},  	
 {"H27U1G8F2B", H27U1G8F2B, 0x8000000, 0x8000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},  	
 {"H27UBG8T2A", H27UBG8T2A, 0x100000000, 0x100000000, 8192, 256*8192, 448, 1, 1, 0x74, 0x42, 0x18, 0x01, 0x01, 0x01, 0x18, 20},
 {"H27UBG8T2B", H27UBG8T2B, 0x100000000, 0x100000000, 8192, 256*8192, 448, 1, 1, 0x74, 0xc3, 0x18, 0x01, 0x01, 0x01, 0x18, 20}, 	
 {"H27U4G8F2ETR", H27U4G8F2ETR, 0x20000000, 0x20000000, 2048, 64*2048, 64, 1, 1, 0x56, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4}, 	

 {"K9F1G08U0B", K9F1G08U0B, 0x8000000, 0x8000000, 2048, 64*2048, 64, 1, 0, 0x40, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"K9F1G08U0D", K9F1G08U0D, 0x8000000, 0x8000000, 2048, 64*2048, 64, 1, 0, 0x40, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"K9F2G08U0B", K9F2G08U0B, 0x10000000, 0x10000000, 2048, 64*2048, 64, 1, 0, 0x44, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"K9G4G08U0A", K9G4G08U0A, 0x20000000, 0x20000000, 2048, 128*2048, 64, 1, 1, 0x54, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"K9G4G08U0B", K9G4G08U0B, 0x20000000, 0x20000000, 2048, 128*2048, 64, 1, 1, 0x54, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"K9F4G08U0B", K9F4G08U0B, 0x20000000, 0x20000000, 2048, 64*2048, 64, 1, 0, 0x54, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"K9G8G08U0A", K9G8G08U0A, 0x40000000, 0x40000000, 2048, 128*2048, 64, 1, 1, 0x64, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"K9G8G08U0M", K9G8G08U0M, 0x40000000, 0x40000000, 2048, 128*2048, 64, 1, 1, 0x64, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"K9K8G08U0A", K9K8G08U0A, 0x40000000, 0x40000000, 2048, 64*2048, 64, 1, 0, 0x58, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"K9F8G08U0M", K9F8G08U0M, 0x40000000, 0x40000000, 4096, 64*4096, 128, 1, 0, 0x64, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"K9K8G08U0D", K9K8G08U0D, 0x40000000, 0x40000000, 2048, 64*2048, 64, 1, 0, 0x58, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4}, 	
 {"TC58NVG0S3C", TC58NVG0S3C, 0x8000000, 0x8000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"TC58NVG0S3E", TC58NVG0S3E, 0x8000000, 0x8000000, 2048, 64*2048, 64, 1, 0, 0x76, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"TC58NVG1S3C", TC58NVG1S3C, 0x10000000, 0x10000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"TC58NVG2S3E", TC58NVG2S3E, 0x20000000, 0x20000000, 2048, 64*2048, 64, 1, 0, 0x76, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"TC58NVG5D2F", TC58NVG5D2F, 0x100000000, 0x100000000, 8192, 128*8192, 448, 1, 1, 0x76, 0x55, 0x18, 0x01, 0x01, 0x01, 0x18, 20},
 {"TC58NVG4D2E", TC58NVG4D2E, 0x80000000, 0x80000000, 8192, 128*8192, 448, 1, 1, 0x76, 0x55, 0x18, 0x01, 0x01, 0x01, 0x18, 20},
 {"TC58NVG2S0HBAI4", TC58NVG2S0HBAI4, 0x20000000, 0x20000000, 4096, 64*4096, 256, 1, 0, 0x76, 0xff, 0xff, 0x01, 0x01, 0x01, 0x0c, 8},	
 {"TC58NVG2S0F", TC58NVG2S0F, 0x20000000, 0x20000000, 4096, 64*4096, 128, 1, 0, 0x76, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"TC58NVG2S0FTA00", TC58NVG2S0F, 0x20000000, 0x20000000, 4096, 64*4096, 128, 1, 0, 0x76, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},	
 {"TC58NVG5D2H", TC58NVG5D2H, 0x20000000, 0x20000000, 8192, 128*8192, 80, 1, 0, 0x76, 0x56, 0x18, 0x01, 0x01, 0x01, 0x18, 20},
 {"TC58BVG0S3H", TC58BVG0S3H, 0x8000000, 0x8000000, 2048, 64*2048, 64, 1, 0, 0xF2, 0x16, 0xff, 0x01, 0x01, 0x01, 0x0c, 8},
 {"TC58BVG1S3H", TC58BVG1S3H, 0x10000000, 0x10000000, 2048, 64*2048, 64, 1, 0, 0xF6, 0x16, 0xff, 0x01, 0x01, 0x01, 0x0c, 8},
 {"TC58NVG0S3H", TC58NVG0S3H, 0x8000000, 0x8000000, 2048, 64*2048, 128, 1, 0, 0x72, 0x16, 0xff, 0x01, 0x01, 0x01, 0x0c, 8},
 {"TC58NVG1S3H", TC58NVG1S3H, 0x10000000, 0x10000000, 2048, 64*2048, 128, 1, 0, 0x76, 0x16, 0xff, 0x01, 0x01, 0x01, 0x0c, 8},
 {"TC58NVG1S3E", TC58NVG1S3E, 0x10000000, 0x10000000, 2048, 64*2048, 64, 1, 0, 0x76, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"TC58DVG02D5", TC58DVG02D5, 0x8000000, 0x8000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},	
 {"TH58NVG2S3HTA00", TH58NVG2S3HTA00, 0x20000000, 0x20000000, 2048, 64*2048, 128, 1, 0, 0x76, 0xff, 0xff, 0x01, 0x01, 0x01, 0x0c, 8},	
  
 {"MX30LF1G08AM", MX30LF1G08AM, 0x8000000, 0x8000000, 2048,  64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"MX30LF1208AA", MX30LF1208AA, 0x4000000, 0x4000000, 2048,  64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},	 
 {"MX30LF1G08AM", MX30LF1G08AM, 0x8000000, 0x8000000, 2048,  64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"MX30LF1208AA", MX30LF1208AA, 0x4000000, 0x4000000, 2048,  64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"MX30LF1G18AC", MX30LF1G18AC, 0x8000000, 0x8000000, 2048,  64*2048, 64, 1, 0, 0x02, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},	  
 {"MX30LF2G18AC", MX30LF2G18AC, 0x10000000, 0x10000000, 2048,  64*2048, 64, 1, 0, 0x06, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},	 
 {"MX30LF4G28AC", MX30LF4G28AC, 0x20000000, 0x20000000, 2048,  64*2048, 112, 1, 0, 0x57, 0xff, 0xff, 0x01, 0x01, 0x01, 0x0c, 8}, 
 {"MX30LF4G18AC", MX30LF4G18AC, 0x20000000, 0x20000000, 2048,  64*2048, 64, 1, 0, 0x56, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},     
 {"MX60LF8G18AC", MX60LF8G18AC, 0x40000000, 0x40000000,2048,  64*2048, 64, 1, 0, 0x5A, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4}, 
 

 {"F59L1G81A", F59L1G81A, 0x8000000, 0x8000000, 2048,  64*2048, 64, 1, 0, 0x40, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"F59L4G81A", F59L4G81A, 0x20000000, 0x20000000, 2048, 64*2048, 64, 1, 0, 0x54, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"F59L1G81A2Y", F59L1G81A2Y, 0x8000000, 0x8000000, 2048,  64*2048, 64, 1, 0, 0x40, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},	  
 {"F59L2G81A", F59L2G81A, 0x10000000, 0x10000000, 2048,  64*2048, 64, 1, 0, 0x44, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
  	
// {"PSU2GA30AT", PSU2GA30AT, 0x10000000, 0x10000000, 2048, 64*2048, 64, 1, 0, 0xC8, 0xDA, 0xff, 0x00, 0x00, 0x00, 0x00, 4},    
 {"S34ML01G1",S34ML01G1, 0x8000000,  0x8000000,  2048,  64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"S34ML02G1",S34ML02G1, 0x10000000, 0x10000000, 2048,  64*2048, 64, 1, 0, 0x44, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"S34ML04G1",S34ML04G1, 0x20000000, 0x20000000, 2048,  64*2048, 64, 1, 0, 0x54, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},                
 {"S34ML01G2",S34ML01G2, 0x8000000,  0x8000000,  2048,  64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 4},
 {"S34ML02G2",S34ML02G2, 0x10000000, 0x10000000, 2048,  64*2048, 128, 1, 0, 0x46, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},
 {"S34ML04G2",S34ML04G2, 0x20000000, 0x20000000, 2048,  64*2048, 128, 1, 0, 0x56, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 4},
 {"A5U2GA31BTS", A5U2GA31BTS, 0x10000000, 0x10000000, 2048, 64*2048, 64, 1, 0, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 4},     	
 {"W29N01HV", W29N01HV, 0x8000000, 0x8000000, 2048,  64*2048, 64, 1, 0, 0x00, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},    
 {"W29N02GV", W29N02GV, 0x10000000, 0x10000000, 2048,	64*2048, 64, 1, 0, 0x04, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},	
 {"W29N04GV", W29N04GV, 0x20000000, 0x20000000, 2048,	64*2048, 64, 1, 0, 0x54, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},	 
 {"W29N08GV", W29N08GV, 0x40000000, 0x40000000, 2048,	64*2048, 64, 1, 0, 0x58, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4}, 
 {"GD9FU1G8F2A",GD9FU1G8F2A, 0x8000000, 0x8000000, 2048,  64*2048, 64, 1, 0, 0x42, 0xff, 0xff, 0x01, 0x01, 0x01, 0x00, 4},	  
	 {NULL, }

};

//#define NAND_FLASH_DEBUG
#ifdef NAND_FLASH_DEBUG
static int TEST_ERASE_ALL(struct mtd_info *mtd, int page, int bc);
static int TEST_READ_WRITE(struct mtd_info *mtd, int page);
#endif

static int  check_SW_WP(struct mtd_info *mtd)
{
	if(!(mtd->flags & MTD_WRITEABLE))
		return -1;
	else
		return 0;
}

static void init_nand_flash_lock(struct mtd_info *mtd)
{
    struct nand_chip *this = (struct nand_chip *)mtd->priv;
    /*set current state*/
    this->state = FL_READY;
    /*init wq queue header and  chip lock*/
    init_waitqueue_head(&this->wq);
    spin_lock_init(&this->chip_lock);
}

static int nand_flash_get_device(struct mtd_info *mtd, int new_state)
{
    struct nand_chip *this = (struct nand_chip *)mtd->priv;
    /*init wait queue*/
    DECLARE_WAITQUEUE(wait, current);

    /*Grab the lock and see if the device is available*/
    while (1) {
        spin_lock(&this->chip_lock);
	/*for read/erase/write state is FL_READY, 
		set  new state eg:FL_READING/FL_ERASING/FL_WRITING*/
        if (this->state == FL_READY) {
            this->state = new_state;
            spin_unlock(&this->chip_lock);
            break;
        }
        
        if (new_state == FL_PM_SUSPENDED) {
            spin_unlock(&this->chip_lock);
            return (this->state == FL_PM_SUSPENDED)?0 : -EAGAIN;
        }

	/*set current state uninterrputible*/
        set_current_state(TASK_UNINTERRUPTIBLE);
	/*add wait queue to wq header*/
        add_wait_queue(&this->wq, &wait);
        spin_unlock(&this->chip_lock);
	/*wait wake up*/
        schedule();
	/*remove wait queue from wq header*/
        remove_wait_queue(&this->wq, &wait);
    }
    return 0;
}

static void nand_flash_release_device(struct mtd_info *mtd)
{
    struct nand_chip *this = (struct nand_chip *)mtd->priv;
    spin_lock(&this->chip_lock);
    this->state = FL_READY;
    /*wakup wq queue header*/
    wake_up(&this->wq);
    spin_unlock(&this->chip_lock);
}

int rtk_block_isbad(struct mtd_info *mtd, u16 chipnr, loff_t ofs)
{
	struct nand_chip *this = (struct nand_chip *)mtd->priv;
	unsigned int phy_page = 0, phy_block = 0;
	unsigned char block_status_p1 = 0;
	this->active_chip=chipnr=0;		
	phy_page = ((int) ofs) >> this->page_shift;
	phy_block = phy_page/this->ppb;
	if ( this->isLastPage ){
		phy_page = phy_block*this->ppb+ (this->ppb-1);	
		if ( this->read_oob (mtd, chipnr, phy_page, this->oob_size, this->g_oobbuf)){
			NAND_ERR ("page=%d failed!\n", phy_page);
			return 1;
		}
		block_status_p1 = this->g_oobbuf[0];	
	}else{	
		if ( this->read_oob (mtd, chipnr, phy_page, this->oob_size, this->g_oobbuf) ){
			NAND_ERR ("page=%d failed!\n",phy_page);
			return 1;
		}
		block_status_p1 = this->g_oobbuf[0];
	}

	if(phy_block < (g_BootcodeSize/mtd->erasesize)){
		if (( block_status_p1 != 0xff)&&( block_status_p1 != 0x23)
			&&( block_status_p1 != 0x79)&&( block_status_p1 != 0x80) \
			&&( block_status_p1 != 0xd0)&&( block_status_p1 != 0xbb)
			&&( block_status_p1 != 0x11)&&( block_status_p1 != 0x51) \
			&&( block_status_p1 != 0x78)&&( block_status_p1 != 0x50)
			&&( block_status_p1 != 0x22)&&( block_status_p1 != 0x7a)
			&&( block_status_p1 != 0x81)){
			NAND_INFO ("WARNING: Die %d: block=%d is bad, block_status_p1=0x%x\n", 
				chipnr, phy_block, block_status_p1);
			return -1;
		}
	}else{
		if ( block_status_p1 != 0xff){	
			NAND_ERR ("WARNING: Die %d: block=%d is bad, block_status_p1=0x%x\n",
				chipnr, phy_block, block_status_p1);
			return -1;
		}
	}
	return 0;
}

static int nand_block_isbad (struct mtd_info *mtd, loff_t ofs)
{
	return 0;
}

void mark_as_badblock(struct mtd_info *rtk_mtd,int block_id)
{	
	struct nand_chip *this = (struct nand_chip *)rtk_mtd->priv; 
	memset(this->g_oobbuf, 0xff, this->oob_size); 
	this->g_oobbuf[0] = 0x00;	
	if (this->isLastPage ){		
		this->write_oob(rtk_mtd, 0, block_id*this->ppb+this->ppb-1, 
			this->oob_size, this->g_oobbuf);		
		this->write_oob(rtk_mtd, 0, block_id*this->ppb+this->ppb-2, 
			this->oob_size, this->g_oobbuf);	
	}else{		
		this->write_oob(rtk_mtd, 0, block_id*this->ppb,	
			this->oob_size, this->g_oobbuf);		
		this->write_oob(rtk_mtd, 0, block_id*this->ppb+1,
			this->oob_size, this->g_oobbuf);	
	}
}

static int nand_block_markbad (struct mtd_info *mtd, loff_t ofs)
{
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_lock();
#endif
	struct nand_chip *this = mtd->priv;
	unsigned int log_page = 0,log_block = 0;
	int rc = 0, chipnr = 0,chipnr_remap = 0,bad_phy_block = 0;
	log_page = ((int) ofs) >> this->page_shift;
	this->active_chip = chipnr = chipnr_remap = (int)(ofs >> this->chip_shift);;
	log_block = log_page/this->ppb;
	this->active_chip=chipnr=chipnr_remap=0;
	this->select_chip(mtd, chipnr);
	/*get phy block*/
	bad_phy_block = nf_get_phyblock(mtd,log_block);
	NAND_INFO("( bad block log:0x%x phy:0x%x)....\n", log_block,bad_phy_block);
	mark_as_badblock(mtd, bad_phy_block);
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_unlock();
#endif	
	return rc;
}

static int nand_read_oob_ext (struct mtd_info *mtd, loff_t from, size_t len, size_t *retlen, 
			u_char *oob_buf)
{
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_lock();
#endif
	struct nand_chip *this = mtd->priv;
	unsigned int log_page = 0,phy_page = 0,realpage = 0;
	int rc=0,oob_len = 0, thislen = 0,log_block =0,retry_count = 0;
	int page_offset = 0,chipnr=0, chipnr_remap=0,phy_block = 0;
	if ((from + len) > mtd->size) {
		NAND_INFO(" Attempt read beyond end of device!\n");
		*retlen = 0;
		rc = -EINVAL;
		goto end;
	}

	if (NOTALIGNED (mtd, from)) {
		NAND_INFO("Attempt to read not page aligned data!\n");
		rc = -EINVAL;
		goto end;
	}

	realpage = (int)(from >> this->page_shift);
	this->active_chip = chipnr = chipnr_remap = (int)(from >> this->chip_shift);
	log_page = realpage & this->pagemask;
	page_offset = log_page & (this->ppb-1);
	log_block = log_page/this->ppb;
	this->active_chip=chipnr=chipnr_remap=0;		
	this->select_chip(mtd, chipnr);

	if ( retlen ) 
		*retlen = 0;
	thislen = this->oob_size;

	while (oob_len < len) {
		if (thislen > (len - oob_len)) 
			thislen = (len - oob_len);

		/*get phy block*/
		phy_block = nf_get_phyblock(mtd,log_block);
		phy_page = phy_block*this->ppb + page_offset;

		/*read oob content*/
		for(retry_count = 0;retry_count < READ_RETRY_COUNT;retry_count++){
			if((rc = this->read_oob (mtd, this->active_chip, phy_page, thislen, 
				&oob_buf[oob_len])) > 0){
				break;	
			}		
		}
		if (rc == -1){
			NAND_ERR("Un-correctable HW ECC Error at page:%d!\n", phy_page); 	
			break;		
		}

		/*update content*/
		oob_len += thislen;
		log_page++;
		page_offset = log_page & (this->ppb-1);
		log_block = log_page/this->ppb;
	}

	if ( retlen ){
		if ( oob_len == len )
			*retlen = oob_len;
		else{
			NAND_ERR("ok oob_len %d != len %d\n", oob_len, len);
			rc =  -1;
		}	
	}
end:
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_unlock();
#endif	
	return rc;
}


static int nand_read_ecc (struct mtd_info *mtd, loff_t from, size_t len,
			size_t *retlen, u_char *buf, u_char *oob_buf, struct nand_oobinfo *oobsel)
{
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_lock();
#endif	
	struct nand_chip *this = mtd->priv;
	unsigned long long phy_page = 0, realpage = 0,page_ppb = 0;
	int rc = 0,data_len = 0, oob_len = 0,retry_count = 0,skip_bad_page = 0;
	int chipnr = 0, chipnr_remap = 0;
	unsigned int log_page = 0, page_offset = 0, log_block = 0,phy_block = 0;
	unsigned int mtd_page_offset = 0,remaining = len,amnt = 0;
	if ((from + len) > mtd->size) {
		NAND_ERR("Attempt read 0x%llx beyond end of device size 0x%llx!\n",
				(from + len), mtd->size);
		*retlen = 0;
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
		rtk_spin_unlock();
#endif		
		return -EINVAL;
	}

	realpage = (int)(from >> this->page_shift);
	this->active_chip = chipnr = chipnr_remap = (int)(from >> this->chip_shift);
	log_page = realpage & this->pagemask;
	page_offset = log_page & (this->ppb-1);
	page_ppb = log_page;
	do_div(page_ppb,this->ppb);
	log_block = (unsigned int)page_ppb;
	this->active_chip=chipnr=chipnr_remap=0;	
	this->select_chip(mtd, chipnr);

	if (retlen)
		*retlen = 0;
	
	while (remaining > 0) {
		/*get physical block*/
		log_block = log_page/this->ppb;
		phy_block = nf_get_phyblock(mtd,log_block);

		/*get physical page*/
		page_offset = log_page & (this->ppb-1);
		phy_page = phy_block*this->ppb + page_offset;
		//NAND_ERR("remaining 0x%x log_block %d phy_block %d page_offset %d phy_page %d "
			//"from 0x%llx!\n",remaining,log_block,phy_block,page_offset,
			//(int)phy_page,from);
		/*read page content*/
		for(retry_count = 0;retry_count < READ_RETRY_COUNT;retry_count++){
			if((rc = this->read_ecc_page (mtd, this->active_chip,phy_page,
				this->mtd_page_buffer, &oob_buf[oob_len])) >= 0){
				break;
			}
		}
		
		if((this->ecc_err_flag)||(rc == -1)){
			if (rc == -1){
				NAND_ERR ("Un-correctable HW ECC  phy block %d page %d \n",
					phy_block,skip_bad_page);
				skip_bad_page = 1;
			}
			NAND_INFO("Enter phy_page %d phy_block %d log_block %d \n",
				(int)phy_page,phy_block,log_block);
			nf_remap_read_block_content(mtd,log_block, phy_page,skip_bad_page);
			skip_bad_page = 0;
		}
		//offset within page, because we deal with unaligned requests
		mtd_page_offset = from & (this->page_size - 1);
		if(!mtd_page_offset) {
			// from is page aligned
			amnt = (remaining < this->page_size) ? remaining : this->page_size;
			memcpy(buf, this->mtd_page_buffer, amnt);
		}
		else {
			// from is not page algined
			amnt = this->page_size - mtd_page_offset;
			//next read will be aligned
			if(remaining < amnt)
				amnt = remaining;
			memcpy(buf, this->mtd_page_buffer+mtd_page_offset, amnt);
		}
		/*update info*/
		buf += amnt;
		from += amnt;
		data_len += amnt;
		log_page++;
		remaining -= amnt;
	}

	if ( retlen ){
		if ( data_len == len ){
			*retlen = data_len;
		}else{
			NAND_ERR("error: data_len %d != len %d\n", data_len, len);
			rc = -1; 
		}	
	}
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_unlock();
#endif
	return rc;
}

static int nand_read (struct mtd_info *mtd, loff_t from, size_t len, size_t * retlen, u_char * buf)
{
	int rc=0;
	nand_flash_get_device(mtd,FL_READING);
	rc = nand_read_ecc (mtd, from, len, retlen, buf, NULL, NULL);
	nand_flash_release_device(mtd);
	return rc;
}                          

static int nand_read_oob (struct mtd_info *mtd, loff_t from, struct mtd_oob_ops *ops)
{
	int rc = 0;
	//mtd->oobinfo.useecc = ops->mode;
	nand_flash_get_device(mtd,FL_READING);
	if(ops->len==ops->ooblen){// read oob 
		rc = nand_read_oob_ext(mtd, from, ops->len, &ops->retlen,ops->oobbuf);
	}else{
		rc = nand_read_ecc(mtd, from, ops->len, &ops->retlen,ops->datbuf, ops->oobbuf, NULL);
	}
	nand_flash_release_device(mtd);
	return rc;
}

static int panic_nand_write (struct mtd_info *mtd, loff_t to, size_t len, size_t *retlen, 
			const u_char * buf)
{
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_lock();
#endif	

	struct nand_chip *this = mtd->priv;
	unsigned int phy_page = 0, realpage = 0;
	int data_len = 0, oob_len = 0;
	int rc = 0, log_page= 0, page_offset= 0, log_block = 0,phy_block = 0;
	int chipnr= 0, chipnr_remap= 0;
	
	if ((to + len) > mtd->size) {
		NAND_ERR("Attempt write 0x%llx beyond end of device size 0x%llx!\n",
				(to + len), mtd->size);
		*retlen = 0;
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
		rtk_spin_unlock();
#endif	
		return -EINVAL;
	}
	if (NOTALIGNED (mtd, to) || NOTALIGNED(mtd, len)) {
		NAND_ERR(" Attempt to read from 0x%llx len 0x%x not page aligned data!\n",
			to,len);
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
		rtk_spin_unlock();
#endif	
		return -EINVAL;
	}

	realpage = (int)(to >> this->page_shift);
	this->active_chip = chipnr = chipnr_remap = (int)(to >> this->chip_shift);
	log_page = realpage & this->pagemask;
	page_offset = log_page & (this->ppb-1);
	log_block = log_page/this->ppb;

	this->active_chip=chipnr=chipnr_remap=0;		
	this->select_chip(mtd, chipnr);
	
	if ( retlen )
		*retlen = 0;
	
	data_len = oob_len = 0;

	while ( data_len < len) {
		/*get phy block*/
		phy_block = nf_get_phyblock(mtd,log_block);
		phy_page = phy_block*this->ppb + page_offset;

		/*write page content*/
		if((rc = this->write_ecc_page (mtd, this->active_chip, phy_page, 
			&buf[data_len], NULL)) < 0){
			if((rc = nf_remap_write_block_content(mtd,log_block,phy_page,buf))< 0){
				rc = -1;
				goto end;
			}

		}

		/*update information*/
		data_len += this->page_size;
		oob_len += this->oob_size;
		log_page++;
		page_offset = log_page & (this->ppb-1);
		log_block = log_page/this->ppb;
	}

	if ( retlen ){
		if ( data_len == len )
			*retlen = data_len;
		else{
			NAND_ERR("data_len %d != len %d\n", data_len, len);
			rc = -1;
		}	
	}
end:
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
		rtk_spin_unlock();
#endif	
	return rc;
}

static int nand_write_ecc (struct mtd_info *mtd, loff_t to, size_t len, size_t *retlen,
			const u_char * buf, const u_char *oob_buf, struct nand_oobinfo *oobsel)
{
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_lock();
#endif	
	struct nand_chip *this = mtd->priv;
	unsigned long long phy_page = 0, realpage = 0,page_ppb = 0;
	int rc = 0,data_len = 0, oob_len  = 0,chipnr = 0,chipnr_remap = 0;
	unsigned int log_page = 0,page_offset = 0,log_block = 0,phy_block = 0;

	if ((to + len) > mtd->size) {
		NAND_ERR("Attempt write 0x%llx beyond end of device size 0x%llx!\n",
				(to + len), mtd->size);
		*retlen = 0;
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
		rtk_spin_unlock();
#endif		
		return -EINVAL;
	}
	
	if (NOTALIGNED (mtd, to) || NOTALIGNED(mtd, len)) {
		printk ("nand_write_ecc: Attempt to write not page aligned data\n");
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
		rtk_spin_unlock();
#endif		
		return -EINVAL;
	}
	
	realpage = (unsigned long long)(to >> this->page_shift);
	this->active_chip = chipnr = chipnr_remap = (int)(to >> this->chip_shift);
	log_page  = realpage & this->pagemask;
	page_offset = log_page & (this->ppb-1);
	page_ppb = log_page;
	do_div(page_ppb,this->ppb);
	log_block = (unsigned int)page_ppb;
	this->active_chip=chipnr=chipnr_remap=0;
	this->select_chip(mtd, chipnr);

	if ( retlen )
		*retlen = 0;

	while ( data_len < len) {
		/*get phy block*/
		phy_block = nf_get_phyblock(mtd,log_block);
		phy_page = phy_block*this->ppb + page_offset;

		/*write content*/
		if(oob_buf){
			rc = this->write_ecc_page (mtd, this->active_chip, phy_page,
			&buf[data_len], &oob_buf[oob_len]);
		}else{
			rc = this->write_ecc_page (mtd, this->active_chip, phy_page,
			&buf[data_len], NULL);
		}
		if (rc < 0) {
			if((rc = nf_remap_write_block_content(mtd,log_block,phy_page,buf)) < 0){
				rc = -1;
				goto end;
			}
		}

		/*update content*/
		data_len += this->page_size;
		oob_len  += this->oob_size;
		log_page++;
		page_offset = log_page & (this->ppb-1);
		log_block = log_page/this->ppb;
	}
	
	if ( retlen ){
		if ( data_len == len){
			*retlen = data_len;
		}else{
			NAND_ERR(" data_len %d != len %d\n", data_len, len); 		
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
			rtk_spin_unlock();
#endif			
			rc = -1;
		}	
	}
end:
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_unlock();
#endif	
	return rc;
}

static int nand_write (struct mtd_info *mtd, loff_t to, size_t len, size_t *retlen, const u_char *buf)
{
	int rc = 0;
	nand_flash_get_device(mtd,FL_WRITING);
	rc = (nand_write_ecc (mtd, to, len, retlen, buf, NULL, NULL));
	nand_flash_release_device(mtd);
	return rc;
}

static int nand_write_oob (struct mtd_info *mtd, loff_t to, struct mtd_oob_ops *ops)//for 2.6.34 YAFFS-->mtd
{
	int rc = 0;
	nand_flash_get_device(mtd,FL_WRITING);
	rc =  nand_write_ecc (mtd, to, ops->len, &ops->retlen,ops->datbuf, ops->oobbuf, NULL);
	nand_flash_release_device(mtd);
	return rc;
}

int nand_erase_nand (struct mtd_info *mtd, struct erase_info *instr)
{
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE 	
	rtk_spin_lock();
#endif	
	struct nand_chip *this = (struct nand_chip *)mtd->priv;
	u_int32_t addr = instr->addr;
	u_int32_t len = instr->len;
	int phy_page = 0, chipnr = 0,log_page = 0, log_block = 0,elen = 0;
	int rc = 0,realpage = 0, chipnr_remap = 0,phy_block = 0;

	check_end (mtd, addr, len);
	check_block_align (mtd, addr);

	instr->fail_addr = 0xffffffff;
	realpage = ((int) addr) >> this->page_shift;
	this->active_chip = chipnr = chipnr_remap = ((int) addr) >> this->chip_shift;
	log_page = realpage & this->pagemask;
	log_block = log_page/this->ppb;
	this->active_chip=chipnr=chipnr_remap=0;		
	this->select_chip(mtd, chipnr);
	
	instr->state = MTD_ERASING;
	while (elen < len) {
		/*get phy block*/
		phy_block = nf_get_phyblock(mtd,log_block);
		phy_page = phy_block*this->ppb;

		/*erase block*/
		if((rc = this->erase_block (mtd, this->active_chip, phy_page))!= 0){
			if((rc = nf_erase_remap_block(mtd,log_block,phy_block))!= 0){
				goto end;
			}
		}

		/*update information*/
		elen += mtd->erasesize;
		log_page += this->ppb;
		log_block = log_page/this->ppb;
	}
	instr->state = MTD_ERASE_DONE;
end:
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_unlock();
#endif
	return rc;
}

static int nand_erase (struct mtd_info *mtd, struct erase_info *instr)
{
	int ret = 0;
	nand_flash_get_device(mtd, FL_ERASING);
	ret = nand_erase_nand (mtd, instr);
	nand_flash_release_device(mtd);
	return ret;
}

int nand_erase_bootcode_area (struct mtd_info *mtd, struct erase_info *instr)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0,phy_block = 0,phy_page = 0;
	int block_id = 0, block_start = 0,block_num = 0;
	u_int32_t addr = instr->addr, len = instr->len;
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE		
	rtk_spin_lock();
#endif
	instr->fail_addr = 0xffffffff;
	instr->state = MTD_ERASE_FAILED;
	if (addr & (mtd->erasesize - 1)) {
		NAND_ERR("attempt access add 0x%x non-block-aligned data!\n",addr);
		ret = -EINVAL;
		goto exit;
	}

	/*get block start and block number*/
	block_start  = (int)(addr>>this->erase_shift);
	block_num    = (int)(len>>this->erase_shift);
	NAND_DEBUG("block_start %d block_num %d!\n",block_start,block_num);
	if((block_start + block_num) > this->kernel_start_log_block){
		NAND_ERR("get access range cur:%d out of %d fail!\n",
			(block_start + block_num),this->kernel_start_log_block);
		ret = -EINVAL;
		goto exit;
	}

	instr->state = MTD_ERASING;
	while(block_id < block_num)
	{
		/*get physical block*/
		phy_block = nf_get_phyblock(mtd,(block_start + block_id)); 
		NAND_DEBUG("log_block %d phy_block %d!\n",(block_start + block_id),phy_block);
		if(phy_block > this->kernel_start_log_block){
		    NAND_ERR("get access range block %d fail out of %d!\n",phy_block,
		    		 this->kernel_start_log_block);
		    ret = - 1;
		    goto exit;
		}

		/*erase physcial block*/
		phy_page = phy_block*this->ppb;
		if(this->erase_block(mtd,this->active_chip,phy_page) != 0){
			NAND_ERR("erase phy_block %d error!\n",phy_block);
			/*use map mark bad block,remap log2phy table, no map,just add*/
			mark_as_badblock(mtd,phy_block);
			nf_build_bootcode_log2phy_table(mtd);
		}else{
			block_id++; 
		}
	}
	instr->state = MTD_ERASE_DONE;

exit:
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_unlock();
#endif
 	return ret;
}

static int recover_write_bootcode_area(struct mtd_info *mtd,
	unsigned int phy_page,unsigned int log_block,
	u_char * buf,u_char *oob_buf)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0,retry_count = 0,page_id = 0;
	unsigned int phy_block = 0,phy_page_start = 0,page_offset = 0;
	unsigned char *read_buf = NULL,*read_oob_buf = NULL;
	phy_block = phy_page/this->ppb;
	phy_page_start = phy_block*this->ppb;
	page_offset = (phy_page)&(this->ppb - 1);
	if(page_offset != 0){
		/*read page eg:page:325 write fail,page offset =5, read 320~324 page_num=5*/
		if((read_buf = (unsigned char*)kmalloc(this->page_size*(page_offset+1), 
			GFP_KERNEL)) == NULL){
			NAND_ERR("malloc page num %d buffer fail!\n",(page_offset+1));
			ret = -1;
			goto exit;
		}
		
		if((read_oob_buf = (unsigned char*)kmalloc(this->oob_size*(page_offset+1),
			GFP_KERNEL)) == NULL){
			NAND_ERR("malloc oob num %d buffer fail!\n",(page_offset+1));
			ret = -1;
			goto exit;
		}

		for(page_id = 0; page_id < page_offset; page_id++)
		{
			for(retry_count = 0;retry_count < READ_RETRY_COUNT;retry_count++)
			{
				if((ret = this->read_ecc_page(mtd,this->active_chip,
					phy_page_start+page_id,
					read_buf+this->page_size*page_id,
					read_oob_buf+this->oob_size*page_id))== 0){
					break;
				} 
			}
			if(ret < 0){
				goto exit;
			}
		}
		memcpy(read_buf+this->page_size*page_offset,buf,this->page_size);
		memcpy(read_oob_buf+this->oob_size*page_offset,oob_buf,this->oob_size);
	}else{
		read_buf = buf;
		read_oob_buf = oob_buf;
	}
	
	mark_as_badblock(mtd,phy_block);
	nf_build_bootcode_log2phy_table(mtd); 

	page_id = 0;
	while(page_id < page_offset+1)
	{
		/*get physical block*/
		phy_block  = nf_get_phyblock(mtd,log_block);
		if(phy_block > this->kernel_start_log_block){
			NAND_ERR("log block %d get remap failed!\n", log_block);
			ret = -1;
			break;
		}
		/*get physical page*/
		phy_page_start = phy_block*this->ppb;

		/*write page content to nand*/
		if(this->write_ecc_page(mtd, this->active_chip, phy_page_start+page_id, 
			read_buf+this->page_size*page_id, 
			read_oob_buf+this->oob_size*page_id) != 0){
			mark_as_badblock(mtd,phy_block);
			nf_build_bootcode_log2phy_table(mtd); 
			page_id = 0;
			continue;
		}
		page_id++;
	}
	
exit:
	if(read_buf != NULL){
		kfree(read_buf);
	}

	if(read_oob_buf != NULL){
		kfree(read_oob_buf);
	}
	return ret;
}

static int nand_write_bootcode_area(struct mtd_info *mtd, loff_t to, 
	size_t len, size_t *retlen, const u_char * buf, const u_char *oob_buf, 
	unsigned int block_tag)
{
	struct nand_chip *this = mtd->priv;
	int ret = 0;
	unsigned int page_start = 0, page_num = 0, page_id = 0,page_offset=0,phy_page = 0;
	unsigned int log_block = 0,phy_block = 0,page_counter = 0,spare_value = 0;
	unsigned char * tmp_oob_buf =  NULL;
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE		
	rtk_spin_lock();
#endif
	if((to + len) > mtd->size){
		NAND_INFO ("Attempt write size 0x%llx beyond end of device 0x%llx \n",
			(to + len),mtd->size);
		*retlen = 0;
		ret = -EINVAL;
		goto exit;
	}

	if(NOTALIGNED(mtd, to)||NOTALIGNED(mtd, len)){
		NAND_ERR ("Attempt to write to 0x%x len 0x%x not page aligned data!\n",
			(unsigned int)to, (unsigned int)len);
		*retlen = 0;
		ret =  -EINVAL;
		goto exit;
	}

	/*get page start and number*/
	page_start = (int)(to>>this->page_shift);
	page_num   = (int)(len>>this->page_shift);
	NAND_DEBUG("to 0x%x len 0x%x page_start %d page_num %d kernel_start_log_block %d!\n",
		(unsigned int)to,(unsigned int)len,
		page_start,page_num,this->kernel_start_log_block);
	if(((page_start + page_num)/this->ppb)> this->kernel_start_log_block){
		NAND_INFO("get access range %d fail out of %d !\n",
			(page_start + page_num)/this->ppb,this->kernel_start_log_block);
		*retlen = 0;
		ret = -EINVAL;
		goto exit;
	}

	if ( retlen )
		*retlen = 0;

	log_block   = (page_start + page_id)/this->ppb;
	page_counter = page_start&(this->ppb - 1);
	NAND_DEBUG("log_block %d page_num %d!\n",log_block,page_num);
	while(page_id < page_num)
	{
		/*get physcial block*/
		log_block   = (page_start + page_id)/this->ppb;
		phy_block    = nf_get_phyblock(mtd,log_block);
	
		if(phy_block > this->kernel_start_log_block){
			NAND_ERR("log block %d get remap failed!\n", log_block);
			ret = -1;
			break;
		}

		/*get physcial page*/
		page_offset = (page_start + page_id)&(this->ppb - 1);
		phy_page    =  phy_block*this->ppb + page_offset; 
  
		/*get spare*/
		spare_value   = block_tag;
		NAND_DEBUG("phy_block %d phy_page %d block_tag 0x%x page_counter %d "
			" spare_value 0x%x!\n",phy_block,phy_page,block_tag,
			page_counter,spare_value);
		/*get oob content*/
		if(oob_buf != NULL){
			tmp_oob_buf = (unsigned char *)oob_buf+ page_id*this->oob_size;
		}else{
			tmp_oob_buf = this->g_oobbuf;
		}
		memset(tmp_oob_buf,0xFF,this->oob_size);
		memcpy(tmp_oob_buf,(unsigned char*)&spare_value,sizeof(unsigned int));

		if(this->write_ecc_page(mtd, this->active_chip, phy_page, 
			buf+this->page_size*page_id, tmp_oob_buf) != 0){
			/*mark bad block, update log2phy table*/
			if((ret = recover_write_bootcode_area(mtd,phy_page,log_block,
				(unsigned char*)(buf+this->page_size*page_id),tmp_oob_buf))< 0) {
				goto exit;
			}
		}
		
		/*update page id*/
		*retlen = *retlen + this->page_size;
		page_id++;
		page_counter++;
	} 

	if(ret == 0){
		ret = log_block;   //return write last block
	}
 
exit:
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE 
 	rtk_spin_unlock();
#endif
    return ret;
}

static int nand_read_bootcode_area (struct mtd_info *mtd, loff_t from, 
	size_t len,size_t *retlen, u_char *buf, u_char *oob_buf)
{
	struct nand_chip *this = mtd->priv;
	int ret  = 0,page_id = 0,page_start = 0,page_num =0,phy_page = 0,page_offset = 0;
	int log_block = 0,phy_block,retry_count = 0;
#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_lock();
#endif	
	if (NOTALIGNED (mtd, from)){
		NAND_ERR (" Attempt to read not page aligned data from 0x%x \n",
			(unsigned int)from);
		ret = -EINVAL;
		goto exit;
	}
	if ((NOTALIGNED(mtd, len))){
		NAND_ERR (" Attempt to read not page aligned data len 0x%x \n",
			(unsigned int)len);
		ret = -EINVAL;
		goto exit;
	}


	/*get page start and number*/
	page_start = from == 0? 0:(int)(from>>this->page_shift);
	page_num   = (int)(len>>this->page_shift);
	
	NAND_DEBUG("from 0x%x len 0x%x page_start %d page_num %d kernel_start_log_block %d!\n",
		(unsigned int)from,(unsigned int)len,page_start,page_num,
		this->kernel_start_log_block);
	if(((page_start + page_num)/this->ppb)> this->kernel_start_log_block){
		NAND_ERR("get access range num %d fail %d!\n",
			(page_start + page_num)/this->ppb,this->kernel_start_log_block);
		ret = -EINVAL;
		goto exit;
	}

	if(retlen)
		*retlen = 0;

	while(page_id < page_num)
	{
		/*get physical block*/
		log_block   = (page_start + page_id)/this->ppb;
		phy_block   =  nf_get_phyblock(mtd,log_block);
		
		NAND_DEBUG("log_block %d phy_block %d page_num %d!\n",
				log_block,phy_block,page_num);
		if(phy_block > this->kernel_start_log_block){
		    NAND_ERR("log block %d get remap failed\n",log_block);
		    ret = -1;
		    break;
		}

		/*get physcial page*/
		page_offset = (page_start + page_id)&(this->ppb - 1);
		phy_page  =  phy_block*this->ppb + page_offset; 
		NAND_DEBUG("phy_block %d phy_page %d!\n",phy_block,phy_page);

		/*read page content*/
		for(retry_count = 0;retry_count < READ_RETRY_COUNT;retry_count++)
		{
			if((ret = this->read_ecc_page(mtd,this->active_chip,
					phy_page,
					buf+this->page_size*page_id,oob_buf))== 0){	
				break;
			}
		}
		
		if(ret == 0){
			if(oob_buf != NULL){
				oob_buf += this->oob_size;
			}
			*retlen = *retlen + this->page_size;
			page_id++;
		}else{
		    NAND_ERR("error: data_len %d != len %d\n",*retlen , len);
		    break;
		} 
	}
exit:

#ifdef CONFIG_MTD_NAND_RTK_HW_SEMAPHORE
	rtk_spin_unlock();
#endif
 	return ret;
}

static unsigned int accumulate_byte_value(const void *buf, unsigned int length)
{
	unsigned int i, res;
	unsigned char *ptr = (unsigned char *)buf;

	if ((buf == NULL) || (length == 0))
		return 0;

	for (i = res = 0; i < length; i++)
		res += ptr[i];

	return res;
}

static int nand_profile_exist(struct mtd_info *mtd, unsigned char block_tag)
{
	struct nand_chip *this = (struct nand_chip *)mtd->priv;
	int rc=0;
	unsigned int checksum = 0,chipnr =0;
	t_nand_profile *profile = NULL;
	
	//check block state & data
	memset(this->g_databuf, 0xff , this->page_size);
	memset(this->g_oobbuf, 0xff , this->oob_size);
	if((rc = this->read_ecc_page (mtd, chipnr, 0, this->g_databuf,
		this->g_oobbuf)) < 0){
		NAND_INFO("read profile error!\n");	
		return 0;
	}

	//check block-tag
	if (this->g_oobbuf[0] != block_tag) {
		NAND_INFO("[%x] profile not exist!\n", this->g_oobbuf[0]);
		return 0;
	}

	// check profile identifier
	profile = (t_nand_profile *)this->g_databuf;
	if((rc = memcmp(profile->identifier, NAND_PROFILE_IDENTIFIER, 
		strlen(NAND_PROFILE_IDENTIFIER)))!= 0){
		NAND_INFO("wrong identify!\n");
		return 0;
	}
	
	//check checksum
	checksum = accumulate_byte_value(profile, 128);
	if (checksum != *((unsigned int *)profile->checksum)) {
		NAND_INFO("profile checksum not match (%x <> %x)\n", 
			checksum, *((unsigned int *)profile->checksum));
		return 0;
	}else{
		NAND_INFO("profile exist, not need update \n");
	}
	return 1;//success return 
}

unsigned int swap_endian(unsigned int input)
{
	unsigned int output;

	output = (input & 0xff000000)>>24|
			 (input & 0x00ff0000)>>8|
			 (input & 0x0000ff00)<<8|
			 (input & 0x000000ff)<<24;

	return output;
}


static int build_nand_profile(struct mtd_info *mtd, t_nand_profile *profile)
{
	unsigned int tmp, checksum;
	struct nand_chip *this = (struct nand_chip *)mtd->priv;
	unsigned int tmp_id;
	if (profile == NULL) {
		return -1;
	}

	// build NAND profile
	memcpy(profile->identifier, NAND_PROFILE_IDENTIFIER, sizeof(NAND_PROFILE_IDENTIFIER));
	profile->revision = 0x2;

	//ptr_device
	tmp_id = swap_endian(ptr_device->id);
	for (tmp = 0; tmp < 4; tmp++)
		profile->manufacturer_id[tmp] = (tmp_id >> (tmp * 8)) & 0xff;

	if(ptr_device->CycleID5th != 0xff){
		profile->manufacturer_id[4] = ptr_device->CycleID5th;
	}
	if(ptr_device->CycleID6th != 0xff){
		profile->manufacturer_id[5] = ptr_device->CycleID6th;
	}

	if (strlen(ptr_device->name) < (sizeof(profile->flash_name) - 1))
		tmp = strlen(ptr_device->name);
	else
		tmp = sizeof(profile->flash_name) - 1;
	memcpy(profile->flash_name, (char *)(ptr_device->name), tmp);
	profile->data_per_page = this->page_size;
	profile->oob_per_page = this->oob_size;
	profile->page_per_block = this->ppb;
	profile->block_per_die = this->block_num;
	profile->param_t1 = ptr_device->T1;
	profile->param_t2 = ptr_device->T2;
	profile->param_t3 = ptr_device->T3;
	
	//set default value 0x1
	profile->address_mode = 0x1;

	checksum = accumulate_byte_value(profile, 128);
	for (tmp = 0; tmp < 4; tmp++)
	{
		profile->checksum[tmp] = (checksum >> (tmp * 8)) & 0xff;
	}
	return 0;
}

static int nand_write_profile (struct mtd_info *mtd)
{	
	struct nand_chip *this = (struct nand_chip *)mtd->priv;
	int ret = 0,loop = 0;
	struct erase_info instr;
	t_nand_profile profile = {0};
	unsigned int  ret_len = 0,fail_count = 0,block_tag = 0xd0;
	unsigned char * profile_buf = NULL;
	/*check profile exist*/
	if(nand_profile_exist(mtd,block_tag) == 1){
		return 0;
	}

	/*init profile*/
	if((profile_buf = (unsigned char *)kmalloc(this->page_size, 
		GFP_KERNEL)) == NULL){
		NAND_ERR("Error, no enough memory for profile!\n");
		return	-1;
	}else{
		memset(profile_buf, 0xFF, this->page_size);
	}
	
	/*get profile content*/
	if((ret = build_nand_profile(mtd, &profile)) < 0){
		NAND_ERR("Build nand profile fail!\n");
		return  -1;
	}
	memcpy(profile_buf,&profile,sizeof(t_nand_profile));

	/*erase profile*/
	for(loop = 0; loop < 2; loop++)
	{
		instr.addr = loop*this->block_size;
		instr.len  = this->block_size;
		if(nand_erase_bootcode_area(mtd,&instr) < 0){
			NAND_INFO("write profile page %d fail! \n",loop*(this->ppb/2));
			fail_count++;
			continue;
		}
	}
	if(fail_count == 2){
		NAND_ERR("write profile fail! \n");
		return  -1;
	}
	
	/*write profile*/
	for(loop = 0; loop < this->ppb; loop++)
	{
		if(nand_write_bootcode_area(mtd,2*loop*this->page_size,
			this->page_size,&ret_len,profile_buf,NULL,block_tag) < 0){
			NAND_INFO("write profile page %d fail! \n",2*loop);
		}
	}
	return ret;
}

static void nand_sync (struct mtd_info *mtd)
{
	struct nand_chip *this = (struct nand_chip *)mtd->priv;
	this->state = FL_READY;
}

static int nand_suspend (struct mtd_info *mtd)
{
	struct nand_chip *this = (struct nand_chip *)mtd->priv;
	int ret = 0;
	if((ret = nand_flash_get_device(mtd, FL_PM_SUSPENDED)) == 0){
		NAND_INFO("entry nand suspend! \n");
		this->suspend(mtd);
	}else{
		NAND_ERR("error status %d !\n",ret);
	}
	return ret;
}

static void nand_resume (struct mtd_info *mtd)
{
	struct nand_chip *this = (struct nand_chip *)mtd->priv;
	if (this->state == FL_PM_SUSPENDED){
		NAND_INFO("entry nand resume!\n");
		this->resume(mtd);
		nand_flash_release_device(mtd);
	}else{
		NAND_ERR("resume() called for the chip which is not in suspended state\n");
	}
}

void nand_mtd_function_init(struct mtd_info *mtd)
{
	mtd->_erase			= nand_erase;
	mtd->_point			= NULL;
	mtd->_unpoint			= NULL;
	mtd->_read			= nand_read;
	mtd->_write			= nand_write;
	mtd->_read_oob			= nand_read_oob;
	mtd->_write_oob			= nand_write_oob;
#if 0
	mtd->_read_ecc			= nand_read_ecc;
	mtd->_write_ecc			= nand_write_ecc;
#endif
	mtd->_erase_bootcode_area 	= nand_erase_bootcode_area;
	mtd->_write_bootcode_area 	= nand_write_bootcode_area;
	mtd->_read_bootcode_area 	= nand_read_bootcode_area;
	mtd->_write_profile		= nand_write_profile;

	mtd->_sync			= nand_sync;
	mtd->_lock			= NULL;
	mtd->_unlock			= NULL;
	mtd->_suspend			= nand_suspend;
	mtd->_resume			= nand_resume;
	mtd->_block_isbad		= nand_block_isbad;
	mtd->_block_markbad		= nand_block_markbad;
	mtd->_panic_write 		= panic_nand_write;
	mtd->owner 			= THIS_MODULE;
}

int find_nf_dev_index(struct mtd_info *mtd, int maxchips,
	device_type_t *nf_dev_array, unsigned int array_num,
	unsigned int *num_chips_probe)
{
	struct nand_chip *this = (struct nand_chip *)mtd->priv;
	int index = -1;
	unsigned int loop = 0,nand_id = 0;
	unsigned char id[6] = {0},maker_code = 0,device_code = 0,B5th = 0,B6th = 0;
	device_type_t *nf_dev = NULL;
	this->active_chip = 0;
	this->select_chip(mtd, 0);
	this->read_id(mtd, id);
	NAND_INFO("READ ID:0x%x 0x%x 0x%x 0x%x 0x%x 0x%x\n",
		id[0],id[1],id[2],id[3],id[4],id[5]);
	maker_code = id[0];
	device_code = id[1];
	B5th = id[4];
	B6th = id[5];
	nand_id = maker_code<<24 | device_code<<16 | id[2]<<8 | id[3];

	for (loop = 1; loop < maxchips; loop++) 
	{
		this->select_chip(mtd, loop);
		this->read_id(mtd, id);
		if (maker_code !=  id[0] ||device_code != id[1] )
			break;
	}
	*num_chips_probe = loop;
	NAND_INFO("NAND Flash Controller detects %d dies\n", *num_chips_probe);
	for (loop = 0; loop < array_num; loop++)
	{
		nf_dev = &(nf_dev_array[loop]);
		if ( (nf_dev->id==nand_id) 
		&&((nf_dev->CycleID5th==0xff)?1:(nf_dev->CycleID5th==B5th))
		&&((nf_dev->CycleID6th==0xff)?1:(nf_dev->CycleID6th==B6th))){
			if (nand_id != HY27UT084G2M ){
				REG_WRITE_U32( REG_MULTI_CHNL_MODE,0x20);
			}
			if (nf_dev->size == (*num_chips_probe)*nf_dev->chipsize){
				if ( *num_chips_probe == nf_dev->num_chips ){
					NAND_INFO("One %s chip has %d die(s) on board\n",
						nf_dev->name,nf_dev->num_chips);
					index = loop;
					break;
				}
			}else{
				if ( !strcmp(nf_dev->name, "HY27UF084G2M"))
					continue;
				else{
					NAND_INFO("We have %d the same %s chips on board\n",
						(*num_chips_probe)/nf_dev->num_chips, 
						nf_dev->name);
					index = loop;
					break;
				}
			}
		}
	}
	
	if(index != -1){
		NAND_INFO("nand part=%s, id=%x, device_size=%lu, chip_size=%lu, num_chips=%d,"
			" isLastPage=%d, eccBits=%d\n",
		nf_dev->name, nf_dev->id, (unsigned long)nf_dev->size, (unsigned long)nf_dev->chipsize,
		nf_dev->num_chips, nf_dev->isLastPage, nf_dev->eccSelect);
	}else{
		NAND_INFO("Warning: Lookup Table do not have this nand flash !!\n");
		NAND_INFO ("Manufacture ID=0x%02x, Chip ID=0x%02x, "
			"3thID=0x%02x, 4thID=0x%02x, 5thID=0x%02x, 6thID=0x%02x\n",
			 id[0], id[1], id[2], id[3], id[4], id[5]);
	}
	this->select_chip(mtd, 0);
	return index;
}

int nand_vaule_init(struct mtd_info *mtd,device_type_t *nf_device,
	unsigned int num_chips_probe)
{
	struct nand_chip *this = (struct nand_chip *)mtd->priv;
	int ret = 0;
	mtd->name 		= "rtk_nand";
	mtd->type		= MTD_NANDFLASH;
	mtd->flags		= MTD_CAP_NANDFLASH;
	//mtd->ecctype		= MTD_ECC_NONE; 
	mtd->oobsize 		= nf_device->OobSize;
	mtd->writesize 		= nf_device->PageSize;
	//mtd->oobblock 		= nf_device->PageSize;
	mtd->erasesize 		= nf_device->BlockSize;
	//mtd->eccsize 		= 512;
	this->nand_name		= nf_device->name;
	this->maker_code	= nf_device->id&0xFF;
	this->device_code	= (nf_device->id>>8)&0xFF;
	this->erase_shift       = nf_device->ecc_safe_value;
	this->page_shift 	= generic_ffs(nf_device->PageSize)-1;
	this->erase_shift 	= generic_ffs(nf_device->BlockSize)-1;
	this->oob_shift 	= generic_ffs(nf_device->OobSize)-1;
	this->ppb 		= nf_device->BlockSize >> this->page_shift;
	this->oob_size		= nf_device->OobSize;
	this->block_num 	= nf_device->chipsize >> this->erase_shift;
	this->page_num 		= nf_device->chipsize >> this->page_shift;
	this->chipsize 		= nf_device->chipsize;
	this->device_size 	= nf_device->size;
	this->chip_shift 	= generic_ffs(this->chipsize )-1;
	this->pagemask 		= (this->chipsize >> this->page_shift) - 1;
	this->page_size 	= nf_device->PageSize;
	this->block_size 	= nf_device->BlockSize;	
	this->ecc_select 	= nf_device->eccSelect;
	this->bootcode_size 	= g_BootcodeSize;
	this->numchips 		= num_chips_probe;
	this->isLastPage	= nf_device->isLastPage;
	mtd->size = this->numchips * this->chipsize;
	NAND_INFO("-------------------------infomation--------------------------\n");
	NAND_INFO("this->page_shift: %lu\n", (unsigned long)this->page_shift);
	NAND_INFO("this->oob_shift: 0x%x\n", this->oob_shift);
	NAND_INFO("this->pagemask: %lu\n", (unsigned long)this->pagemask);
	NAND_INFO("this->chipsize: %lu\n",(unsigned long)this->chipsize);
	NAND_INFO("this->ecc_safe_value: %d\n", this->ecc_safe_value);
	if((this->g_databuf = kmalloc(this->page_size, GFP_KERNEL))== NULL){
		NAND_ERR("no enough memory for g_databuf!\n");
		ret = -ENOMEM;
		goto end;
	}
	memset(this->g_databuf, 0xff, this->page_size);
	if((this->g_oobbuf = kmalloc( this->oob_size, GFP_KERNEL)) == NULL){
		NAND_ERR("no enough memory for g_oobbuf!\n");
		kfree(this->g_databuf);
		ret = -ENOMEM;
		goto end;
	}
	memset(this->g_oobbuf, 0xff, this->oob_size);
	if((this->mtd_page_buffer =(char *) kmalloc(this->page_size, GFP_KERNEL))
		== NULL){
		NAND_ERR("No enough memory for mtd_page_buffer!\n");
		ret = -ENOMEM;
		goto end;
	}
	memset(this->mtd_page_buffer, 0xff,this->page_size);
	if((this->drv_page_buffer =(char *) kmalloc(this->page_size, GFP_KERNEL))
		== NULL){
		NAND_ERR("No enough memory for drv_page_buffer!\n");
		ret = -ENOMEM;
		goto end;
	}
	memset(this->drv_page_buffer, 0xff,this->page_size);
end:
	if(ret != 0){
		if(this->g_databuf != NULL){
			kfree(this->g_databuf);
		}
		
		if(this->g_oobbuf){
			kfree(this->g_oobbuf);
		}
		
		if(this->mtd_page_buffer){
			kfree(this->mtd_page_buffer);
		}
		if(this->drv_page_buffer){
			kfree(this->drv_page_buffer);
		}
	}
	return ret;
}

int rtk_nand_scan(struct mtd_info *mtd, int maxchips)
{
	struct nand_chip *this = (struct nand_chip *)mtd->priv;
	int index = 0;
	unsigned int num_chips_probe = 1;
	/*init mtd function*/
	nand_mtd_function_init(mtd);
	
	/*init nandflash lock*/
	init_nand_flash_lock(mtd);
	
	/*get nand device index and num chip*/
	if((index = find_nf_dev_index(mtd,maxchips,nand_device,
		sizeof(nand_device)/sizeof(nand_device[0]),&num_chips_probe)) == -1){
		return -1;
	}
	ptr_device = &nand_device[index];
	
	/*iinit nand value*/
	if(nand_vaule_init(mtd,&(nand_device[index]),num_chips_probe) < 0){
		return -1;
	}

	/* =========== WE Over spec: Underclocking lists: ========== */
	switch(nand_device[index].id){
		case HY27UF081G2A:	//WE: 15 ns
		case HY27UF082G2A:
		case K9G4G08U0A:
		case K9G8G08U0M:
		case TC58NVG0S3C:
		case TC58NVG1S3C:
		case HY27UT084G2A:
			this->clock_select(nand_device[index].name,0x3);//54 MHz
			break;
		default:
			;
	}
#ifdef NAND_FLASH_DEBUG
	//for debug nand flash write/read/erase function
	TEST_ERASE_ALL(mtd, 64, 1);
	TEST_READ_WRITE(mtd, 64);
#endif
	return 0;
}

void dump_hex_byte(char *buf, int buf_size)
{
	int loop = 0;
	printk("buf 0x%x size 0x%x", (unsigned int)buf, buf_size);
	for(loop = 0; loop < buf_size; loop++)
	{
		if(loop%16 == 0){
			printk("\n%08xh:",loop); 
		}
		printk(" %02x",*buf);
		buf++;
	}
	printk("\n");	   
}


#ifdef NAND_FLASH_DEBUG
static int TEST_ERASE_ALL(struct mtd_info *mtd, int page, int bc)
{
	struct nand_chip *this = (struct nand_chip *) mtd->priv;
	int i = 0, chip_block_num = this->block_num;
	int start_block = page/this->ppb,block_in_die; 
	int rc = 0,chipnr =0, block = 0;
	
	if ( page & (this->ppb-1) ){
		page = (page/this->ppb)*this->ppb;
	}

	for ( i=0; i<bc; i++){
		block_in_die = start_block + i;
		chipnr = block_in_die/chip_block_num;

		this->active_chip=chipnr=0;		
		block = block_in_die%chip_block_num;
		this->select_chip(mtd, block_in_die/chip_block_num);
		rc = this->erase_block(mtd, chipnr, block*this->ppb);
		if ( rc<0 ){
			mark_as_badblock(mtd,block);
		}
	}
	return 0;
}

static int TEST_READ_WRITE(struct mtd_info *mtd, int page)
{
	struct nand_chip *this = (struct nand_chip *) mtd->priv;
	unsigned int chipnr=0;
	unsigned int loop=0;
	
	memset(this->g_databuf, 0x00 , this->page_size);
	for(loop = 0; loop < this->page_size; loop+=4)
	{
		this->g_databuf[loop] = 0xAA;
		this->g_databuf[loop+1] = 0xBB;
		this->g_databuf[loop+2] = 0xCC;
		this->g_databuf[loop+3] = 0xDD;
	}
	
	memset(this->g_oobbuf, 0xff ,this->oob_size);
	this->g_oobbuf[0] = 0xAA;
	this->g_oobbuf[1] = 0xBB;
	this->g_oobbuf[2] = 0xCC;
	this->g_oobbuf[3] = 0x22;
	this->g_oobbuf[4] = 0x33;
	for(loop = 0; loop < this->ppb; loop++)
	{
		this->write_ecc_page(mtd, chipnr, page+loop, this->g_databuf, this->g_oobbuf);
	}
	
	for(loop = 0; loop < this->ppb; loop++)
	{
		//redifine g_databuf value
		memset(this->g_databuf, 0xff, this->page_size);
		memset(this->g_oobbuf, 0x00, this->oob_size);
		this->read_ecc_page(mtd, chipnr, page+loop, this->g_databuf, this->g_oobbuf);
		printk("\n-------------------------------------------------------read write test starting-------------------------------\n");
		dump_hex_byte((char *)this->g_databuf,this->page_size);

		printk("\n\noob data:\n");
		dump_hex_byte((char *)this->g_oobbuf,this->oob_size);
		printk("\n-------------------------------------------------------read write test ending--------------------------------\n");
	}
	return 0;
}
#endif
