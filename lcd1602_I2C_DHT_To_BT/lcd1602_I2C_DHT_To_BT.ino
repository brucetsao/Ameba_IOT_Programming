#include "String.h"
#include <SoftwareSerial.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "DHT.h"
#define DHTPIN 7     // what digital pin we're connected to

// Uncomment whatever type you're using!
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Connect pin 1 (on the left) of the sensor to +5V
// NOTE: If using a board with 3.3V logic like an Arduino Due connect pin 1
// to 3.3V instead of 5V!
// Connect pin 2 of the sensor to whatever your DHTPIN is
// Connect pin 4 (on the right) of the sensor to GROUND
// Connect a 10K resistor from pin 2 (data) to pin 1 (power) of the sensor

// Initialize DHT sensor.
// Note that older versions of this library took an optional third parameter to
// tweak the timings for faster processors.  This parameter is no longer needed
// as the current DHT reading algorithm adjusts itself to work on faster procs.
DHT dht(DHTPIN, DHTTYPE);

// LCM1602 I2C LCD
 LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // 設定 LCD I2C 位址

//LiquidCrystal_I2C lcd(0x38);  // Set the LCD I2C address

//LiquidCrystal_I2C lcd(0x38, BACKLIGHT_PIN, POSITIVE);  // Set the LCD I2C address


SoftwareSerial mySerial(0, 1); // RX, TX
void setup()   /*----( SETUP: RUNS ONCE )----*/
{
    Serial.begin(9600);
     mySerial.begin(9600); //
  Serial.println("DHTxx test!");
    dht.begin();
  lcd.begin(16, 2);      // 初始化 LCD，一行 20 的字元，共 4 行，預設開啟背光
  lcd.backlight(); // 開啟背光
  lcd.setCursor ( 0, 0 );        // go to home
    lcd.print("Smart & Health");  
    delay(2000) ;   //wait 2 seconds
}// END Setup

static int count=0;
void loop()   
{
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

  lcd.setCursor(0,1);
  lcd.print("H:");
  lcd.print((int)h) ;
  lcd.print("% T:");
  lcd.print((int)t) ;
  lcd.print("C ");
  lcd.print((int)f) ;
  lcd.print("F");
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");
    
  mySerial.write(byte((int)t)) ;
  delay(2000);
} // END Loop

