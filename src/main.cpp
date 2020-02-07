#include <Arduino.h>
#include "packetreader.h"

ReaderState readerState;

void setup()
{
  readerState = ReaderState();
  Serial.begin(115200);
}

void loop()
{
  readPacket();
}