#include <LCD12864.h>
#include <LCDSprite.h>

void setup() {
  // put your setup code here, to run once:
  LCDA.Initialise();
  delay(500);
  LCDA.Render();
  LCDA.DrawCircle(30,145,5);
  LCDA.DrawCircle(30,145,8);
  LCDA.DrawCircle(30,145,10);
  LCDA.DrawCircle(30,145,12);

  LCDA.RenderScreenBuffer(2); // lets draw it in the second screen
 // LCDA.Draw(false,4,0);

 // delay(1);

//  LCDA.setPins(1,0,0,0,1,1,0,0,0,0);
 // LCDA.setPins(1,0,0,0,1,1,0,0,0,1);
 // LCDA.setPins(1,0,0,0,1,1,0,0,1,0);
  //LCDA.Draw(true,4,0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
