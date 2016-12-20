#include <LCD12864.h>


void setup() {
  // put your setup code here, to run once:
  LCDA.Initialise();

  delay(500);
  LCDA.Render();
 for (int i = 0 ;i<10; i++)
    {
          LCDA.DrawRectangle(0+i*11,130,10,20);
    }

  LCDA.RenderScreenBuffer(1); // lets draw it in the second screen
 
}

void loop() {
  // put your main code here, to run repeatedly:

}
