#include "packetReader.h"

void readPacket()
{
    if (Serial.available() > 0)
    {
        int data = Serial.read();
        readerState.dataCycle++;
    }
}