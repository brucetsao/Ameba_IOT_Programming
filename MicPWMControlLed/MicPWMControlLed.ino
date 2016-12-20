// the setup function runs once when you press reset or power the board
#define PWMLedPin 13
#define LightSourcePin A0

void setup() {
  // initialize digital pin 13 as an output.
  Serial.begin(9600) ;
  Serial.println("Program Start") ;  

}

// the loop function runs over and over again forever
void loop() {
    int LightValue = map(analogRead(LightSourcePin),0,1023,0,255  ) ;
//    int LightValue = analogRead(LightSourcePin) ;
    Serial.println(LightValue) ;  
  
      analogWrite(PWMLedPin,LightValue) ;
      delay(100) ;
}
