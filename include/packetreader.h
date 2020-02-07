#include <Arduino.h>
#include <string.h>
#ifndef PACKET_READER_H
#define PACKET_REDER_H

void readPacket();

struct ReaderState
{
    String lastPacket;
    String buildPacket;
};

extern ReaderState readerState;

#endif