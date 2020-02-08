#include "display.h"

void makeDisplay()
{
    lcd.begin(LCD_WIDTH, 2);
    //lcd.home();
    //lcd.setCursor(0, 1);
    //
}

void updateDisplay()
{
    for (size_t i = 0; i < LCD_WIDTH; i++)
    {
        auto height = volume[i];
        for (auto j = 0; j < height; j++)
        {
            lcd.setCursor(i, j);
            lcd.print(char(255));
        }
    }
}