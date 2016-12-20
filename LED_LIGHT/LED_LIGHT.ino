#define Blink_Led_Pin 8

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin Blink_Led_Pin as an output.
  pinMode(Blink_Led_Pin, OUTPUT);    //定義Blink_Led_Pin為輸出腳位
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(Blink_Led_Pin, HIGH);   // 將腳位Blink_Led_Pin設定為高電位  turn the LED on (HIGH is the voltage level)
  delay(1000);              //休息1秒 wait for a second  
  digitalWrite(Blink_Led_Pin, LOW);    // 將腳位Blink_Led_Pin設定為低電位  turn the LED off by making the voltage LOW
  delay(1000);              // 休息1秒 wait for a second
}
