//-------------- dht use

#define MicPIN A1     // what digital pin we're connected to
  
int data[100] ;
int pos = 0 ;
void setup()   /*----( SETUP: RUNS ONCE )----*/
{
    Serial.begin(9600);
  Serial.println("DHTxx test!");

}// END Setup

static int count=0;
void loop()   
{
  int micValue = map(analogRead(MicPIN),0,1023,0,255) ;
   data[pos] = micValue ;
   pos++  ;

    delay(100) ;
    if (pos >=100) 
        {
          pos = 0 ;
        }
  
} // END Loop

