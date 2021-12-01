#ifndef RTKDEMUX_TA_H
#define RTKDEMUX_TA_H
#include "rtkdemux.h"

/*********************************************************************/
int DEMUX_JP4K_TA_INIT(void);
int DEMUX_JP4K_TA_UNINIT(void);

int DEMUX_JP4K_TA_UpdatePininfo(unsigned int bufType, unsigned int pin, DEMUX_BUF_T *pBufferH, DEMUX_BUF_T *pBuffer);
int DEMUX_JP4K_TA_DeliverPrivateInfo(unsigned int pin, int infoId, char* pCmdInfo, unsigned int cmdLen);
int DEMUX_JP4K_TA_DeliverData(NAVDEMUXOUT* demuxOut);


/*********************************************************************/
#endif //RTKDEMUX_TA_H
