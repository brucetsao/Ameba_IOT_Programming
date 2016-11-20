/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int i = 0 ; i <256;i++)
      {
         analogWrite(13, i);   // turn the LED on (HIGH is the voltage level)
           delay(20);              // wait for a second
      }    
  for(int i = 255 ; i >=0;i--)
      {
         analogWrite(13, i);   // turn the LED on (HIGH is the voltage level)
           delay(20);              // wait for a second
      }    
  delay(2'[;;\f]d
\\y////  f000);              // wait for a second
}
