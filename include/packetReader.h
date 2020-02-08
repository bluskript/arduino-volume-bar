#include <Arduino.h>
#include <string.h>
#ifndef PACKET_READER_H
#define PACKET_READER_H

void readPacket();

struct ReaderState
{
    int dataCycle;
};

extern ReaderState readerState;

#endif