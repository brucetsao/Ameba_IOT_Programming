// the setup function runs once when you press reset or power the board

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);

}

// the loop function runs over and over again forever
void loop() {
//    if (digitalRead(7)== LOW)
    if (!digitalRead(7))
        {
              digitalWrite(13, HIGH);    
        }
        else
        {
              digitalWrite(13, LOW);   
        }
        
}
