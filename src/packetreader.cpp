#include "packetreader.h"

void readPacket()
{
    if (Serial.available() > 0)
    {
        int data = Serial.read();
        if (char(data) == '@')
        {
            readerState.lastPacket = readerState.buildPacket;
            readerState.buildPacket = "";
            Serial.println(readerState.lastPacket);
        }
        else
        {
            readerState.buildPacket += char(data);
        }
    }
}