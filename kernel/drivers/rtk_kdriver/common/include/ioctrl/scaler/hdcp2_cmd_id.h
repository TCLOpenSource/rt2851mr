#ifndef _HDCP2_DEVICE_ID_H_
#define _HDCP2_DEVICE_ID_H_

#ifndef BOOLEAN
#ifndef _EMUL_WIN
typedef	unsigned int			__BOOLEAN;
#define BOOLEAN __BOOLEAN
#else
typedef	unsigned char			__BOOLEAN;
#define BOOLEAN __BOOLEAN
#endif
#endif

#ifndef SUINT8
typedef signed char    SINT8;
#endif
#ifndef SUINT16
typedef signed short   SINT16;
#endif
#ifndef SUINT32
typedef signed int     SINT32;
#endif


#ifndef UINT8
typedef unsigned char  UINT8;
#endif
#ifndef UINT16
typedef unsigned short UINT16;
#endif
#ifndef UINT32
typedef unsigned int   UINT32;
#endif


/************************************************************************
 *  Definitions
 ************************************************************************/

#if defined(CONFIG_COMPAT) && defined(CONFIG_ARM64)
typedef struct
{
	unsigned int pKeySet;
	unsigned int dst_file_path;
	int keyLength;
}HDCP2_WRITE_KEYSET_PARA_T;

typedef struct
{
	unsigned int pEncKey;
	unsigned int src_file_path;
	unsigned int keyLen;
}HDCP2_GET_ENCHDCP2KEY_PARA_T;

typedef struct
{
	unsigned int pRootPublicKey;
	unsigned int src_file_path;
}HDCP2_GET_ROOTPUBLICKEY_PARA_T;

typedef struct
{
	unsigned int pReceiverID;
	unsigned int pPubKey;
	unsigned int pReserved;
	unsigned int pRootSign;
}HDCP2_GET_CERTINFO_PARA_T;

typedef struct
{
	unsigned int pRtx;
	unsigned int pRrx;
	unsigned int version;
}HDCP2_KD_KEY_DERIVATION_PARA_T;

typedef struct
{
	unsigned int pHPrime;
	unsigned char repeater;
	unsigned int pRtx;
	unsigned int deviceOptionInfo;
	unsigned int version;
}HDCP2_COMPUTE_H_PRIME_PARA_T;

typedef struct
{
	unsigned int pLPrime;
	unsigned int pRn;
	unsigned int pRrx;
	unsigned int version;
}HDCP2_COMPUTE_L_PRIME_PARA_T;

typedef struct
{
	unsigned int pEKH_KM;
	unsigned int pM;
}HDCP2_ENCRYPT_KM_USING_KH_PARA_T;

typedef struct
{
	unsigned int pEks;
	unsigned int pRtx;
	unsigned int pRrx;
	unsigned int pRn;
	unsigned int version;
}HDCP2_DECRYPT_EKS_PARA_T;

typedef struct
{
	unsigned int pMaskedDB;
	unsigned int pDB;
	unsigned int pDBMask;
}HDCP2_GENERATE_KM_PARA_T;

typedef struct
{
	unsigned int pEks;
	unsigned int pRrx;
	unsigned int pRtx;
	unsigned int pRn;
	unsigned int version;
}HDCP2_GENERATE_KS_PARA_T;

typedef struct
{
	unsigned int pOutputBuf;
	unsigned int pInputBuf;
	int length;
	unsigned int pCounter;
}HDCP2_DATA_DECRYPT_PARA_T;

typedef struct
{
	unsigned int pOutputBuf;
	unsigned int pInputBuf;
	unsigned int length;
}HDCP2_SHA_PARA_T;

typedef struct
{
	unsigned int pOutputBuf;
	unsigned int pInputBuf;
	unsigned int length;
	unsigned int pKey;
	int keylength;
}HDCP2_HMAC_SHA256_PARA_T;

typedef struct
{
	unsigned int pOutputBuf;
	unsigned int pInputBuf;
	int length;
	unsigned int pkey;
	int keyLength;
	unsigned int pCounter;
}HDCP2_AES_CTR_PARA_T;

typedef struct
{
	unsigned int pData;
	int pLength;
}HDCP2_GET_PROTECTED_DECRYPTIONKEY_PARA_T;

typedef struct
{
	unsigned int pData;
	int length;
}HDCP2_SET_PROTECTED_DECRYPTIONKEY_PARA_T;

typedef struct
{
	unsigned int pData;
	int length;
	int exsit;
}HDCP2_GET_OTPHDCP2KEY_PARA_T;

typedef struct
{
	unsigned int pVPrime;
	unsigned int pRxIdListsInfo;
	int infoLength;
}HDCP2_COMPUTE_V_PRIME_PARA_T;

typedef struct
{
	unsigned int pMPrime;
	unsigned int pStreamManageInfo;
	int infoLength;
}HDCP2_COMPUTE_M_PRIME_PARA_T;

typedef struct
{
	unsigned int argc;
	unsigned int lc128;
	unsigned int km;
	unsigned int ks;
	unsigned int seed;
}HDCP2_UseTestVector_PARA_T;

typedef struct
{
	unsigned int pEkpub_km;
	unsigned int pKpubrx;
}HDCP2_ENCRYPT_RSAES_OAEP_PARA_T;

typedef struct
{
	unsigned int pDest;
	unsigned int pSrc; 
	int srcLength;
}HDCP2_HMAC_SHA256_WITH_KD_PARA_T;
typedef struct
{
	unsigned int b14Status;
	unsigned int b22Status;
}HDCP2_GET_HDCP_STATUS_PARA_T;

typedef struct
{
	unsigned int ENkey;
	unsigned int ENkey_size;
	unsigned int AESkey;
	unsigned AESkey_size;
}HDCP2_ENCRYPTO_KEY_PARA_T;

typedef struct
{
	unsigned int AESkey;
	unsigned AESkey_size;
}HDCP2_DECRYPTO_KEY_PARA_T;

typedef struct
{
	int keyID;
	int pData; 
	unsigned int Datalength;
	int pEncKey;
}HDCP2_DRM_HDMI_SetSecureDataforHDCP22_PARA_T;

typedef struct
{
	int pEncKey;
	int pDecKey;
	unsigned int length;
}HDCP2_DRM_VerifyHDCP22forHDMI_PARA_T;

typedef struct
{
	int pData;
	unsigned int size;
}HDCP2_VFE_HDMI_WriteHDCP22_PARA_T;

#else
typedef struct
{
	unsigned char *pKeySet;
	unsigned char *dst_file_path;
	int keyLength;
}HDCP2_WRITE_KEYSET_PARA_T;

typedef struct
{
	unsigned char *pEncKey;
	unsigned char *src_file_path;
	unsigned char *keyLen;
}HDCP2_GET_ENCHDCP2KEY_PARA_T;

typedef struct
{
	unsigned char *pRootPublicKey;
	unsigned char *src_file_path;
}HDCP2_GET_ROOTPUBLICKEY_PARA_T;

typedef struct
{
	unsigned char *pReceiverID;
	unsigned char *pPubKey;
	unsigned char *pReserved;
	unsigned char *pRootSign;
}HDCP2_GET_CERTINFO_PARA_T;

typedef struct
{
	unsigned char *pRtx;
	unsigned char *pRrx;
	unsigned int version;
}HDCP2_KD_KEY_DERIVATION_PARA_T;

typedef struct
{
	unsigned char *pHPrime;
	unsigned char repeater;
	unsigned char *pRtx;
	unsigned char *deviceOptionInfo;
	unsigned int version;
}HDCP2_COMPUTE_H_PRIME_PARA_T;

typedef struct
{
	unsigned char *pLPrime;
	unsigned char *pRn;
	unsigned char *pRrx;
	unsigned int version;
}HDCP2_COMPUTE_L_PRIME_PARA_T;

typedef struct
{
	unsigned char *pEKH_KM;
	unsigned char *pM;
}HDCP2_ENCRYPT_KM_USING_KH_PARA_T;

typedef struct
{
	unsigned char *pEks;
	unsigned char *pRtx;
	unsigned char *pRrx;
	unsigned char *pRn;
	unsigned int version;
}HDCP2_DECRYPT_EKS_PARA_T;

typedef struct
{
	unsigned char *pMaskedDB;
	unsigned char *pDB;
	unsigned char *pDBMask;
}HDCP2_GENERATE_KM_PARA_T;

typedef struct
{
	unsigned char *pEks;
	unsigned char *pRrx;
	unsigned char *pRtx;
	unsigned char *pRn;
	unsigned int version;
}HDCP2_GENERATE_KS_PARA_T;

typedef struct
{
	unsigned char *pOutputBuf;
	unsigned char *pInputBuf;
	int length;
	unsigned char *pCounter;
}HDCP2_DATA_DECRYPT_PARA_T;

typedef struct
{
	unsigned char *pOutputBuf;
	unsigned char *pInputBuf;
	unsigned int length;
}HDCP2_SHA_PARA_T;

typedef struct
{
	unsigned char *pOutputBuf;
	unsigned char *pInputBuf;
	unsigned int length;
	unsigned char *pKey;
	int keylength;
}HDCP2_HMAC_SHA256_PARA_T;

typedef struct
{
	unsigned char *pOutputBuf;
	unsigned char *pInputBuf;
	int length;
	unsigned char *pkey;
	int keyLength;
	unsigned char *pCounter;
}HDCP2_AES_CTR_PARA_T;

typedef struct
{
	unsigned char *pData;
	int *pLength;
}HDCP2_GET_PROTECTED_DECRYPTIONKEY_PARA_T;

typedef struct
{
	unsigned char *pData;
	int length;
}HDCP2_SET_PROTECTED_DECRYPTIONKEY_PARA_T;

typedef struct
{
	unsigned char *pData;
	int length;
	int *exsit;
}HDCP2_GET_OTPHDCP2KEY_PARA_T;

typedef struct
{
	unsigned char *pVPrime;
	unsigned char *pRxIdListsInfo;
	int infoLength;
}HDCP2_COMPUTE_V_PRIME_PARA_T;

typedef struct
{
	unsigned char *pMPrime;
	unsigned char *pStreamManageInfo;
	int infoLength;
}HDCP2_COMPUTE_M_PRIME_PARA_T;

typedef struct
{
	unsigned int argc;
	unsigned char *lc128;
	unsigned char *km;
	unsigned char *ks;
	unsigned char *seed;
}HDCP2_UseTestVector_PARA_T;

typedef struct
{
	unsigned char *pEkpub_km;
	unsigned char *pKpubrx;
}HDCP2_ENCRYPT_RSAES_OAEP_PARA_T;

typedef struct
{
	unsigned char *pDest;
	unsigned char *pSrc; 
	int srcLength;
}HDCP2_HMAC_SHA256_WITH_KD_PARA_T;

typedef struct
{
	unsigned char *b14Status;
	unsigned char *b22Status;
}HDCP2_GET_HDCP_STATUS_PARA_T;

typedef struct
{
	unsigned char *ENkey;
	unsigned int ENkey_size;
	unsigned char *AESkey;
	unsigned AESkey_size;
}HDCP2_ENCRYPTO_KEY_PARA_T;

typedef struct
{
	unsigned char *AESkey;
	unsigned AESkey_size;
}HDCP2_DECRYPTO_KEY_PARA_T;

typedef struct
{
	unsigned char *keyID;
	unsigned char *pData; 
	unsigned int Datalength;
	unsigned char *pEncKey;
}HDCP2_DRM_HDMI_SetSecureDataforHDCP22_PARA_T;

typedef struct
{
	unsigned char *pEncKey;
	unsigned char *pDecKey;
	unsigned int length;
}HDCP2_DRM_VerifyHDCP22forHDMI_PARA_T;

typedef struct
{
	unsigned char *pData;
	unsigned int size;
}HDCP2_VFE_HDMI_WriteHDCP22_PARA_T;
#endif

/*-----------------------------------------------------------------------------
	System call
------------------------------------------------------------------------------*/
#define HDCP2_DEVICE_NUM							1
#define HDCP2_DEVICE_NAME						"hdcp2dev"
#define HDCP2_IOC_MAGIC							   'h'

#define HDCP2_MAJOR 0   /* dynamic major by default */
#define HDCP2_NR_DEVS 1    /* se0 through se3 */

//index range
//0 ~ 255
#define HDCP2_IOC_START_INDEX 0

enum HDCP2_ioc_idx
{
	HDCP2_IOC_IDX_0 = HDCP2_IOC_START_INDEX,//0
	HDCP2_IOC_IDX_1,
	HDCP2_IOC_IDX_2,
	HDCP2_IOC_IDX_3,
	HDCP2_IOC_IDX_4,
	HDCP2_IOC_IDX_5,
	HDCP2_IOC_IDX_6,
	HDCP2_IOC_IDX_7,
	HDCP2_IOC_IDX_8,
	HDCP2_IOC_IDX_9,
	HDCP2_IOC_IDX_10,
	HDCP2_IOC_IDX_11,
	HDCP2_IOC_IDX_12,
	HDCP2_IOC_IDX_13,
	HDCP2_IOC_IDX_14,
	HDCP2_IOC_IDX_15,
	HDCP2_IOC_IDX_16,
	HDCP2_IOC_IDX_17,
	HDCP2_IOC_IDX_18,
	HDCP2_IOC_IDX_19,
	HDCP2_IOC_IDX_20,
	HDCP2_IOC_IDX_21,
	HDCP2_IOC_IDX_22,
	HDCP2_IOC_IDX_23,
	HDCP2_IOC_IDX_24,
	HDCP2_IOC_IDX_25,
	HDCP2_IOC_IDX_26,
	HDCP2_IOC_IDX_27,
	HDCP2_IOC_IDX_28,
	HDCP2_IOC_IDX_29,
	HDCP2_IOC_IDX_30,
	HDCP2_IOC_IDX_31,
	HDCP2_IOC_IDX_32,
	HDCP2_IOC_IDX_33,
	HDCP2_IOC_IDX_34,
	HDCP2_IOC_IDX_35,
	HDCP2_IOC_IDX_36,
	HDCP2_IOC_IDX_37,
	HDCP2_IOC_IDX_38,
	HDCP2_IOC_IDX_39,
	HDCP2_IOC_IDX_40,
	HDCP2_IOC_IDX_41,
	HDCP2_IOC_IDX_42,
	HDCP2_IOC_MAXNR,
};

#define HDCP2_IOC_WRITE_KEYSET							_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_1, HDCP2_WRITE_KEYSET_PARA_T)
#define HDCP2_IOC_GET_ENCHDCP2KEY						_IOR(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_2, HDCP2_GET_ENCHDCP2KEY_PARA_T)
#define HDCP2_IOC_SET_ENCHDCP2KEY						_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_3, int)
#define HDCP2_IOC_GET_ROOTPUBLICKEY						_IOR(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_4, HDCP2_GET_ROOTPUBLICKEY_PARA_T)
#define HDCP2_IOC_GET_CERTINFO							_IOR(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_5, HDCP2_GET_CERTINFO_PARA_T)
#define HDCP2_IOC_GET_CERTINFO2							_IOR(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_6, HDCP2_GET_CERTINFO_PARA_T)
#define HDCP2_IOC_DECRYPT_RSAES_OAEP					_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_7, int)
#define HDCP2_IOC_KD_KEY_DERIVATION						_IOR(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_8, HDCP2_KD_KEY_DERIVATION_PARA_T)
#define HDCP2_IOC_COMPUTE_H_PRIME						_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_9, HDCP2_COMPUTE_H_PRIME_PARA_T)
#define HDCP2_IOC_COMPUTE_L_PRIME						_IOR(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_10, HDCP2_COMPUTE_L_PRIME_PARA_T)
#define HDCP2_IOC_COMPUTE_KH							_IO(HDCP2_IOC_MAGIC,  HDCP2_IOC_IDX_11)
#define HDCP2_IOC_ENCRYPT_KM_USING_KH					_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_12, HDCP2_ENCRYPT_KM_USING_KH_PARA_T)
#define HDCP2_IOC_DECRYPT_KM_USING_KH					_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_13, HDCP2_ENCRYPT_KM_USING_KH_PARA_T)
#define HDCP2_IOC_DECRYPT_EKS							_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_14, HDCP2_DECRYPT_EKS_PARA_T)
#define HDCP2_IOC_XOR_KS_WITH_LC128						_IO(HDCP2_IOC_MAGIC,  HDCP2_IOC_IDX_15)
#define HDCP2_IOC_GENERATE_KM							_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_16, HDCP2_GENERATE_KM_PARA_T)
#define HDCP2_IOC_GENERATE_KS							_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_17, HDCP2_GENERATE_KS_PARA_T)
#define HDCP2_IOC_DATA_DECRYPT							_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_18, HDCP2_DATA_DECRYPT_PARA_T)
#define HDCP2_IOC_SHA1									_IOR(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_19, HDCP2_SHA_PARA_T)
#define HDCP2_IOC_SHA256								_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_20, HDCP2_SHA_PARA_T)
#define HDCP2_IOC_HMAC_SHA256							_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_21, HDCP2_HMAC_SHA256_PARA_T)
#define HDCP2_IOC_AES_CTR								_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_22, HDCP2_AES_CTR_PARA_T)
#define HDCP2_IOC_SELECT_STOREDKM						_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_23, int)
#define HDCP2_IOC_WRITE_STOREDKM						_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_24, int)
#define HDCP2_IOC_DATA_ENCRYPT							_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_25, HDCP2_DATA_DECRYPT_PARA_T)
#define HDCP2_IOC_GET_PROTECTED_DECRYPTIONKEY			_IOR(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_26, HDCP2_GET_PROTECTED_DECRYPTIONKEY_PARA_T)
#define HDCP2_IOC_SET_PROTECTED_DECRYPTIONKEY			_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_27, HDCP2_SET_PROTECTED_DECRYPTIONKEY_PARA_T)
#define HDCP2_IOC_HDCP_INIT								_IO(HDCP2_IOC_MAGIC,  HDCP2_IOC_IDX_28)
#define HDCP2_IOC_GET_OTPHDCP2KEY						_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_29, HDCP2_GET_OTPHDCP2KEY_PARA_T)
#define HDCP2_IOC_COMPUTE_V_PRIME						_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_30, HDCP2_COMPUTE_V_PRIME_PARA_T)
#define HDCP2_IOC_COMPUTE_M_PRIME						_IOR(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_31, HDCP2_COMPUTE_M_PRIME_PARA_T)
#define HDCP2_IOC_UseTestVector							_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_32, HDCP2_UseTestVector_PARA_T)
#define HDCP2_IOC_WRITE_HDCP2_KEY						_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_33, int)
#define HDCP2_IOC_RELOAD_HDCP2_KEY						_IO(HDCP2_IOC_MAGIC,  HDCP2_IOC_IDX_34)
#define HDCP2_IOC_ENCRYPT_RSAES_OAEP					_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_35, HDCP2_ENCRYPT_RSAES_OAEP_PARA_T)
#define HDCP2_IOC_HMAC_SHA256_WITH_KD					_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_36, HDCP2_HMAC_SHA256_WITH_KD_PARA_T)
#define HDCP2_IOC_GET_HDCP_STATUS						_IOR(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_37, HDCP2_GET_HDCP_STATUS_PARA_T)
#define HDCP2_IOC_ENCRYPTO_KEY							_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_38, HDCP2_ENCRYPTO_KEY_PARA_T)
#define HDCP2_IOC_DECRYPTO_KEY							_IOR(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_39, HDCP2_DECRYPTO_KEY_PARA_T)
#define HDCP2_IOC_DRM_HDMI_SetSecureDataforHDCP22		_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_40, HDCP2_DRM_HDMI_SetSecureDataforHDCP22_PARA_T)
#define HDCP2_IOC_DRM_VerifyHDCP22forHDMI				_IOR(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_41, HDCP2_DRM_VerifyHDCP22forHDMI_PARA_T)
#define HDCP2_IOC_VFE_HDMI_WriteHDCP22					_IOW(HDCP2_IOC_MAGIC, HDCP2_IOC_IDX_42, HDCP2_VFE_HDMI_WriteHDCP22_PARA_T)

#endif

