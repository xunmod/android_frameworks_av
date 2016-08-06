#ifndef __PICTURE_DECODER_H
#define __PICTURE_DECODER_H

#include <unistd.h>
#include <stdlib.h>
#include "vdecoder.h"

#ifdef __cplusplus
extern "C" {
#endif



typedef uintptr_t size_addr;


/***************** for skia **************************/

typedef struct DecBitStream DecBitStream;
struct DecBitStream
{
	int (*read)(DecBitStream* stream, void* buf, int len);
	int (*tell)(DecBitStream* stream);
	int (*seek)(DecBitStream* stream, int len);
	int (*size)(DecBitStream* stream);
};

typedef struct JPEGSKIACONFIG
{
	int mode_selection;
	int filed_alpha;
	int imcu_int_minus1;
	int region_top;
	int region_bot;
	int region_left;
	int region_right;
	int nScaleDownRatio;
	void* pFrameBuffer;
	void* pInputIndexBuffer;
	int   nInputIndexSize;
	void* pTileVbvBuffer;
	int nTileVbvVBufferSize;
	DecBitStream* bitStream;
}JpegSkiaConfig;



#ifdef __cplusplus
}
#endif


#endif

