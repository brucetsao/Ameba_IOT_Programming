#include <LedControl.h>
#include "Alpha_Table.h"

 #define DinPin 8
 #define CsPin 9
 #define ClkPin 10
 #define chipno 0 
LedControl lc=LedControl(DinPin,ClkPin,CsPin,chipno); 

/* we always wait a bit between updates of the display */
unsigned long delaytime=2000;

void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0,false);

  /* Set the brightness to a medium values */
  lc.setIntensity(0,8);

  /* and clear the display */
  lc.clearDisplay(0);
  Serial.begin(9600);
  Serial.println("Program Start Here");
 // lc.setRow(0,7,B0110000);
  
}

void loop() { 
    listallalpha(2000);
}
void listallalpha(int delaytime)
{
    byte ii = 0 ;
  for(ii = 0 ; ii <=96; ii++)
  {
    showchar(lc, 0,&(alphabets[ii][0]));
    delay(1000);
  }
  
 delay(delaytime);
}

void showalpha(char w)
{
  byte aa;
  
  aa = w - 32;
  Serial.print("now print (");
  Serial.print(aa,DEC);
  Serial.println(")");
  
  showchar(lc, 0, &(alphabets[aa][0]));
}


/*
 This method will display the characters for the
 word "Arduino" one after the other on the matrix. 
 (you need at least 5x7 leds to see the whole chars)
 */

void showchar(LedControl obj,int chpno , byte *chr)
{
 int i = 0 ;
   clearchar(obj, chpno);
   //lc.clearDisplay(0) ;
 for(i = 0 ; i <5 ; i++)
 {
     obj.setColumn(chipno,i+2,*(chr+i));
   //obj.setRow(0,7-i,*(chr+i));
 } 
 
}


void clearchar(LedControl obj, int chpno)
{
 int i = 0 ;
 for(i = 0 ; i <8 ; i++)
 {
   obj.setColumn(chpno,i,0x00);
 } 
 
}


