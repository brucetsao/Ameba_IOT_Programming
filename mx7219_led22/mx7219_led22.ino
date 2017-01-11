#include <LedControlNew.h>

 #define DinPin 4
 #define CsPin 5
 #define ClkPin 6
 #define chipno 0
 #define chips 12

 
//LedControl lc=LedControl(12,10,11,9);
LedControlNew lc=LedControlNew(DinPin,ClkPin,CsPin,chipno ); 
/* we always wait a bit between updates of the display */
unsigned long delaytime=1000;

//String showword = "I am a Maker and I make something";
String showword = "ABcdeFgHijKL" ;


int showwordno = 0 ;
void setup() {
 

   Serial.begin(9600) ;
   Serial.println(showword);
 
   for(int i=0;i<chips;i++)
 { 
  lc.shutdown(i,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(i,8);
  /* and clear the display */
  lc.clearDisplay(i);
 }
 
 // lc.setStringFont5X7(0,0,"Mr._BU_Start_Here",6);
 lc.setDisplayContent(showword); 
 lc.CharDisplay(); //FontWidth=6
//  lc.LeftRotate(10);
}

void loop() { 
  

 
}

