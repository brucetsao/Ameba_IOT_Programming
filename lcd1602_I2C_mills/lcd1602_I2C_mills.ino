//#include <I2CIO.h>
//#include <LCD.h>
#include <Wire.h>  // Arduino IDE 內建
#include <LiquidCrystal_I2C.h>

/*-----( Declare objects )-----*/  
 LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // 設定 LCD I2C 位址
void setup()   /*----( SETUP: RUNS ONCE )----*/
{
 lcd.begin(20, 4);      // 初始化 LCD，一行 20 的字元，共 4 行，預設開啟背光
  lcd.backlight(); // 開啟背光
 // LCDClear() ;
  
  lcd.print("Hello, world!");
}// END Setup

static int count=0;
void loop()   
{
  lcd.setCursor(0,1);
  lcd.print("Realtek: ");
  lcd.print(count++) ;
  delay(1000);
} // END Loop


void LCDClear()
{
   lcd.clear() ;
}
