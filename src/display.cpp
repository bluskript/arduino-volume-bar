#include "display.h"

void makeDisplay()
{
    lcd.begin(LCD_WIDTH, 2);
    lcd.home();
    //lcd.setCursor(0, 1);
    //
}

void updateDisplay()
{
    for (int i = 0; i < 2; i++)
    {
        char *concat = "";
        for (int j = 0; j < volume; j++)
        {
            lcd.setCursor(j, i);
            lcd.print(char(255));
        }
    }
}