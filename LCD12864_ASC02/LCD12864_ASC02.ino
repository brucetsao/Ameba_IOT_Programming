#include <LCD12864.h>

boolean CharBit[8] ;
 byte showchar ;
void setup() {
  Serial.begin(9600) ;
  Serial.println("Program Start Here") ;
  // put your setup code here, to run once:
  LCDA.Initialise();
  delay(500);
  LCDA.Draw(false,0,0);
  for(int i = 0 ; i <4 ; i++)
      {
        for(int j = 0 ; j <16 ; j++)
          {
                showchar = 0x30+ (byte)(i*16+j) ;
                Serial.print("NO(") ;
                Serial.print(i) ;
                Serial.print("/") ;
                Serial.print(j) ;
                Serial.print("):(") ;
                Serial.print(showchar,HEX)  ;
                Serial.print(")\n") ;
                
                 DecodeByteintoBits(showchar,CharBit) ;
                LCDA.setPins(1,0,CharBit[7],CharBit[6],CharBit[5],CharBit[4],CharBit[3],CharBit[2],CharBit[1],CharBit[0]);  
          }
        
      }

  LCDA.Draw(true,0,0);
 
}

void loop() {
  // put your main code here, to run repeatedly:

}

void DecodeByteintoBits(byte Pbyte, boolean chbits[])
{
  
    for(int j=0; j<8; j++)
        {
          
          chbits[j] = ( (Pbyte >>j)  % 2) ;
        }
}

