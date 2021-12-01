#ifndef __VIDEO_FLASH_H__
#define __VIDEO_FLASH_H__

/*
 * Shared structure with OpenMAX (vrpc_flash_frame_info_t)
 * Size = 256 bytes
 * */
typedef struct
{
  unsigned short nSize;
  unsigned short nVersion;
  unsigned int pUserData;
  unsigned int nRRKey;
  unsigned int nRRAddr;                /* (VBM_RefRecord_t *) */
  unsigned int nContext;
  unsigned int nPicFlags;
  unsigned int nPicWidth;
  unsigned int nPicHeight;
  unsigned int nPtsHigh;
  unsigned int nPtsLow;
  unsigned int nPts2High;
  unsigned int nPts2Low;
  unsigned int nPicPhysicalAddr;
  unsigned int nPicPitch;
  unsigned int nClkTimeHigh;
  unsigned int nClkTimeLow;
  unsigned int nFramerateD;
  unsigned int nFramerateN;
  unsigned int eScanType;              /* 0: progressive, 1: interlaced */
  unsigned int nSeiPtsHigh;            /* SEI PTS High */
  unsigned int nSeiPtsSLow;            /* SEI PTS Low */
  unsigned int nPicCPitch;
  unsigned int nPicCPhysicalAddr;
  unsigned int nHDR_Type;

  unsigned int nDisplayPrimaries_X[3];
  unsigned int nDisplayPrimaries_Y[3];
  unsigned int nWhitePoint_X;
  unsigned int nWhitePoint_Y;
  unsigned int nMaxDisplayMasteringLuminance;
  unsigned int nMinDisplayMasteringLuminance;
  unsigned int nTransferCharacteristics;
  unsigned int nMatrixCoefficiets;
  unsigned int nColorPrimaries;
  unsigned int nHdrFlag;               /* video-full-range-flag */
  unsigned int nMaxCll;                /* max-content-light-level */
  unsigned int nMaxPall;               /* max-pic-average-light-level */
  unsigned int reserved_hdr_ext[2];
  unsigned int nCmprsMode;
  unsigned int nPicYCmprsHdrAddr;
  unsigned int nPicCCmprsHdrAddr;
  unsigned int nPicCmprsPitch;
  unsigned int nPicCPhysicalAddr2;
  unsigned int nMediaInfoCnt;

  unsigned int nSampleWidth;
  unsigned int nSampleHeight;
  unsigned int nLumaGOBPage;
  unsigned int nLumaGOBWidthScale;
  unsigned int nLumaGOBOffsetX;
  unsigned int nLumaGOBOffsetY;
  unsigned int nChromaGOBPage;
  unsigned int nChromaGOBWidthScale;
  unsigned int nChromaGOBOffsetX;
  unsigned int nChromaGOBOffsetY;
  unsigned int reserved[6];

} Flash_OMX_Frame_Info;

#endif
