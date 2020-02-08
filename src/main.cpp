#include <Arduino.h>
#include "globals.h"
#include "packetReader.h"
#include "display.h"

ReaderState readerState;
int volume[16];
/*
VSS  GROUND
VDD  5V
VE   9
RS   12
RW   GROUND
E    11
D0  NONE
D1  NONE
D2  NONE
D3  NONE
D4 5
D5 4
D6 3
D7 2
A 5V
K GROUND
*/
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(9, OUTPUT);
  analogWrite(9, 110);
  readerState = ReaderState();
  Serial.begin(115200);
  makeDisplay();
}

void loop()
{
  readPacket();
  updateDisplay();
}