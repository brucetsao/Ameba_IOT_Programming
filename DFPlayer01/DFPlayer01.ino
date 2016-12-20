#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>
#define Set_Volume 30


SoftwareSerial mySerial(0, 1); // RX, TX

void setup() {
  // put your setup code here, to run once:
   Serial.begin (9600);
  mySerial.begin (9600);
  mp3_set_serial (mySerial); //set Serial for DFPlayer-mini mp3 module 
  delay(1);  //wait 1ms for mp3 module to set volume
  mp3_set_volume (Set_Volume);
  while (!Serial) ;
   Serial.println("Program Start Here") ;
    mp3_play (0);
  delay (2000);
}

void loop() {
    mp3_next ();
    delay (2000);
  // put your main code here, to run repeatedly:
 /*
    for (int i = 0 ; i <10 ; i++)
            {
               Serial.print("play no is :(") ;
               Serial.print(i) ;
               Serial.print(")\n") ;
              mp3_play (i);
              delay(2000) ;
            }

*/
}
