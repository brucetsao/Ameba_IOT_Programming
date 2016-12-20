#include <FlashMemory.h>

void setup() {
  Serial.begin(9600) ;
  while(!Serial) ;
  Serial.println("Program Start") ;
  FlashMemory.read();
  if (FlashMemory.buf[0] == 0xFF) {
    FlashMemory.buf[0] = 0x00;
    FlashMemory.update();
    Serial.println("write count to 0");
  } else {
    FlashMemory.buf[0]++;
    FlashMemory.update();
    Serial.print("Boot count: ");
    Serial.println(FlashMemory.buf[0]);
  }
}

void loop() {
  delay(1000);
}
