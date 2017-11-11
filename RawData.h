#ifndef LIBUSEFUL_BINARYBUFFER_H
#define LIBUSEFUL_BINARYBUFFER_H

#include "includes.h"

/*
These functions mostly exist for use in bindings to languages like lua that have no native
support for binary data. They allow reading data into a buffer and then reading it out
character by character or as Int16 or Int32 types
*/

#define RAWDATARead(RD, S, len) (RAWDATAReadAt(RD, S, 0, len))
#define RAWDATASave(RD, S) (RAWDATAReadAt(RD, S, 0, 0))

typedef struct
{
    int BuffLen;
    int DataLen;
    char *Buffer;
} RAWDATA;


RAWDATA *RAWDATACreate(const char *Data, const char *Encoding, int MaxSize);
RAWDATA *RAWDATACopy(RAWDATA *RD, size_t offset, size_t len);
int RAWDATAAppend(RAWDATA *RD, const char *Data, const char *Encoding, int MaxBuffLen);
void RAWDATADestroy(void *p_RD);
int RAWDATAReadAt(RAWDATA *RD, STREAM *S, size_t offset, size_t size);
int RAWDATAWrite(RAWDATA *RD, STREAM *S, size_t offset, size_t size);
char RAWDATAGetChar(RAWDATA *RD, size_t pos);
int RAWDATASetChar(RAWDATA *RD, size_t pos, char value);
int16_t RAWDATAGetInt16(RAWDATA *RD, size_t pos);
int RAWDATASetInt16(RAWDATA *RD, size_t pos, int16_t value);
int32_t RAWDATAGetInt32(RAWDATA *RD, size_t pos);
int RAWDATASetInt32(RAWDATA *RD, size_t pos, int32_t value);
long RAWDATAFindChar(RAWDATA *RD, size_t offset, char Char);


#endif
