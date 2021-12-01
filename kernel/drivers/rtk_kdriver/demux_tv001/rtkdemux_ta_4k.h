#ifndef RTKDEMUX_TA_4k_H
#define RTKDEMUX_TA_4k_H
#include "rtkdemux.h"

/*********************************************************************/
int DEMUX_TA_4K_INIT(void);
int DEMUX_TA_4K_UNINIT(void);

int DEMUX_TA_4K_UpdatePininfo(unsigned int bufType, unsigned int pin, DEMUX_BUF_T *pBufferH, DEMUX_BUF_T *pBuffer);
int DEMUX_TA_4K_DeliverPrivateInfo(unsigned int pin, int infoId, char* pCmdInfo, unsigned int cmdLen);
int DEMUX_TA_4K_DeliverData(NAVDEMUXOUT* demuxOut);


/*********************************************************************/
#endif //RTKDEMUX_TA_H
