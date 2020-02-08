#include <Wire.h>
#include <LiquidCrystal.h>
#include "globals.h"

#ifndef DISPLAY_H
#define DISPLAY_H

extern LiquidCrystal lcd;

void updateDisplay();
void makeDisplay();

#endif