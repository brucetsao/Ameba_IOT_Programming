#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#define MQPin A1

// LCM1602 I2C LCD
 LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // 設定 LCD I2C 位址
void setup()   /*----( SETUP: RUNS ONCE )----*/
{
  lcd.begin(16, 2);      // 初始化 LCD，一行 20 的字元，共 4 行，預設開啟背光
  lcd.backlight(); // 開啟背光

  lcd.setCursor ( 0, 0 );        // go to home
  lcd.print("MQ Series ");  
  lcd.setCursor ( 0, 1 );        // go to the next line
  lcd.print ("MQ2:");
  //delay ( 2000 );

  //lcd.clear();
}// END Setup

static int count=0;
void loop()   
{
  int ReadValue = analogRead(MQPin) ;
  lcd.setCursor(5,1);
  lcd.print("       ") ;
  lcd.setCursor(5,1);
  lcd.print(ReadValue) ;
  lcd.print("/") ;
  lcd.print(((double)ReadValue/1024)/5) ;
  lcd.print(" V") ;
  delay(1000);
} // END Loop

