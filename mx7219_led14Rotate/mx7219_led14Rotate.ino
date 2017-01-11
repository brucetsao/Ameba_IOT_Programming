#include <LedControl.h>

  #define DinPin 8
 #define CsPin 10
 #define ClkPin 9
 #define chipno 4
 #define chips 4

 
//LedControl lc=LedControl(12,10,11,9);
LedControl lc=LedControl(DinPin,ClkPin,CsPin,chipno ); 
/* we always wait a bit between updates of the display */
unsigned long delaytime=1000;

String showword[5] = {"Hacka-thon","BruceTsao","Samantha","Jack","Hardy"} ;


int showwordno = 0 ;
void setup() {
 

   Serial.begin(9600) ;
   Serial.println("Mr. BU Start Here");
 
   for(int i=0;i<4;i++)
 { 
  lc.shutdown(i,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(i,8);
  /* and clear the display */
  lc.clearDisplay(i);
 }
 
 // lc.setStringFont5X7(0,0,"Mr._BU_Start_Here",6);
 lc.setStringFont5X7(0,0,showword[showwordno],6); //FontWidth=6
  lc.LeftRotate(10);
}

void loop() { 
  
 // lc.LeftRotate(5);
 
}

