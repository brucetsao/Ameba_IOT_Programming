#include <Wire.h>
#include <SeeedOLED.h>
#include <avr/pgmspace.h>

void setup()
{
  Wire.begin();	
  SeeedOled.init();  //initialze SEEED OLED display

      // Set Display to inverse mode
  SeeedOled.clearDisplay();               // clear the screen and set start position to top left corner
  SeeedOled.drawBitmap(PutLogoHere,1024);   // 1024 = 128 Pixels * 64 Pixels / 8

}

void loop()
{
  
}

