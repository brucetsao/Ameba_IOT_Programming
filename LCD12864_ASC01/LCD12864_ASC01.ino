#include <LCD12864.h>


void setup() {
  // put your setup code here, to run once:
  LCDA.Initialise();
  delay(500);
  LCDA.Draw(false,0,0);
  LCDA.setPins(1,0,0,0,1,1,0,0,0,1);  
  LCDA.setPins(1,0,0,0,1,1,0,0,1,0);  
  LCDA.setPins(1,0,0,0,1,1,0,0,1,1);  
  LCDA.setPins(1,0,0,0,1,1,0,1,0,0);  

  LCDA.Draw(true,0,0);
 
}

void loop() {
  // put your main code here, to run repeatedly:

}

