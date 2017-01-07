#include <FlashMemory.h> 
#define HeaderPos 0 
#define DataPos 100 
#define MaxDataLimit 3800  
 
 
 
#include "DHT.h" 
 
#define DHTPIN 7     // what digital pin we're connected to 
 
// Uncomment whatever type you're using! 
//#define DHTTYPE DHT11   // DHT 11 
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321 
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
 
int DataPointer = 1 ; 
 
int counter = 1 ; 
int ReadDataPointer() 
{ 
  FlashMemory.read();
    return (FlashMemory.buf[HeaderPos] +FlashMemory.buf[HeaderPos+1] * 256 );  
     
} 
 
void AddtoFlash(int pp, unsigned int data) 
{ 
FlashMemory.buf[HeaderPos] = (unsigned char)(pp % 256); 
FlashMemory.buf[HeaderPos+1] = (unsigned char)(pp / 256); 
FlashMemory.buf[DataPos+pp] =  data ;   
} 
 
void ShowDatafromFlashMemory(int pp) 
{ 
    Serial.println("Now Printout Flash Data") ; 
    for (int i=0 ; i<= pp; i++) 
        { 
            Serial.print(i) ; 
            Serial.print("/") ; 
            Serial.print(FlashMemory.buf[DataPos+i]) ; 
            Serial.print(" ;   ") ; 
        } 
            Serial.print("\n") ; 
} 
//------------------------ 
void setup() { 
  Serial.begin(9600); 
  dht.begin(); 
  DataPointer = ReadDataPointer() ; 
  while(!Serial) ; 
   Serial.println("DHTxx test!"); 
} 
 
void loop() { 
      float t = dht.readTemperature(); 
      Serial.print("Now Temperature is :(") ; 
      Serial.print(counter) ; 
      Serial.print("/") ; 
      Serial.print(DataPointer) ; 
      Serial.print("/") ; 
      Serial.print(t) ; 
      Serial.print(")\n") ; 
     AddtoFlash(DataPointer, (int)t) ; 
    delay(200);         
       if  ((DataPointer % 100) == 0 )  
            { 
              Serial.println("Update data to Flash Memory") ; 
               FlashMemory.update(); 
               counter = 0 ; 
            } 
      
   
  DataPointer++ ; 
  counter ++ ; 
  if (DataPointer > MaxDataLimit) 
        { 
              DataPointer = 0 ; 
              FlashMemory.buf[HeaderPos] = 0 ; 
              FlashMemory.buf[HeaderPos+1] =0 ; 
               FlashMemory.update(); 
              Serial.println("Update data to Flash Memory") ; 
        } 
       if (Serial.available() > 0 ) 
            { 
                if (Serial.read() == '@') 
                { 
                      Serial.println("Update data to Flash Memory") ; 
                       FlashMemory.update(); 
                       counter = 0 ; 
                       ShowDatafromFlashMemory(DataPointer) ; 
                } 
            } 
}    
 
