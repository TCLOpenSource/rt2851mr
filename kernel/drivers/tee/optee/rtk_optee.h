#ifndef __LINUX_RTK_OPTEE_H
#define __LINUX_RTK_OPTEE_H

#define EMMC_BLOCK_SIZE                 512
#define FW_TABLE_OFFSET                 0x2000000

#define FIRMWARE_DESCRIPTION_TABLE_SIGNATURE    "VERONA__" /* 8 bytes signature. */

#define FW_DESC_TABLE_V1_T_VERSION_1		0x1
#define FW_DESC_TABLE_V1_T_VERSION_11		0x11
#define FW_DESC_TABLE_V1_T_VERSION_21		0x21

typedef enum {
        FW_TYPE_RESERVED = 0,
        FW_TYPE_BOOTCODE,
        FW_TYPE_KERNEL,
        FW_TYPE_AUDIO,
        FW_TYPE_VIDEO,
        FW_TYPE_AUDIO_2,
        FW_TYPE_VIDEO_2,
        FW_TYPE_ECPU,
        FW_TYPE_JFFS2,
        FW_TYPE_SQUASH,
        FW_TYPE_EXT3,
        FW_TYPE_ODD,
        FW_TYPE_YAFFS2,
        FW_TYPE_AUDIO_FILE,
        FW_TYPE_VIDEO_FILE,
        FW_TYPE_IMAGE_FILE,
        FW_TYPE_ISO, //15
        FW_TYPE_SWAP,
        FW_TYPE_NTFS,
        FW_TYPE_RESCUE2,
        FW_TYPE_KCPU,
        FW_TYPE_UNKNOWN
} fw_type_code_t;

typedef struct {
        u8                      signature[8];
        u32                     checksum;
        u8                      version;        //0x00
        u8                      reserved[15];
        u32                     length;
} __attribute__((packed)) fw_desc_table_t;

typedef struct {
        u8                      signature[8];
        u32                     checksum;
        u8                      version;        //0x01
        u8                      reserved[7];
        u32                     paddings;
        u32                     part_list_len;
        u32                     fw_list_len;
} __attribute__((packed)) fw_desc_table_v1_t;

typedef struct {
        u8                      type;
        u8                      reserved: 7,
        ro: 1;
        u32                     length;
        u8                      fw_count;
        u8                      reserved_1[9];
        u8                      mount_point[32];
} __attribute__((packed)) part_desc_entry_v1_t;

typedef struct {
        u8                      type;
        u8                      reserved: 6,
        lzma: 1,
        ro: 1;
        u32                     version;
        u32                     target_addr;
        u32                     offset;
        u32                     length;
        u32                     paddings;
        u32                     checksum;
        u8                      reserved_1[6];
} __attribute__((packed)) fw_desc_entry_v1_t;

typedef struct {
        fw_desc_entry_v1_t      v1;
        u32                     act_size;
        u8                      hash[32];
        u8                      part_num;
        u8                      reserved[27];
} __attribute__((packed)) fw_desc_entry_v11_t;

typedef struct {
        fw_desc_entry_v1_t v1;
        u32                     act_size;
        u8                      part_num;
        u8                      RSA_sign[256];
        u8                      reserved[27];
} __attribute__((packed)) fw_desc_entry_v21_t;

#endif
