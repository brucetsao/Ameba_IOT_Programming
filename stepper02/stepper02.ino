int Pin1 = 8; 
int Pin2 = 9; 
int Pin3 = 10; 
int Pin4 = 11; 
int _step = 0; 
int motorSpeed = 32000;
boolean dir = true;// gre
void setup() 
{ 
 pinMode(Pin1, OUTPUT);  
 pinMode(Pin2, OUTPUT);  
 pinMode(Pin3, OUTPUT);  
 pinMode(Pin4, OUTPUT);  
} 
void loop() {
 clockwise();
// counterclockwise();
// clockwise();
}
 
// 1-2相激磁
void counterclockwise (){
 // 1
 digitalWrite(Pin1, HIGH);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin4, LOW);
 delayMicroseconds(motorSpeed);
 // 2
 digitalWrite(Pin1, HIGH);
 digitalWrite(Pin2, HIGH);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin4, LOW);
 delayMicroseconds(motorSpeed);
 // 3
 digitalWrite(Pin1, LOW);
 digitalWrite(Pin2, HIGH);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin4, LOW);
 delayMicroseconds(motorSpeed);
 // 4
 digitalWrite(Pin1, LOW);
 digitalWrite(Pin2, HIGH);
 digitalWrite(Pin3, HIGH);
 digitalWrite(Pin4, LOW);
 delayMicroseconds(motorSpeed);
 // 5
 digitalWrite(Pin1, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin3, HIGH);
 digitalWrite(Pin4, LOW);
 delayMicroseconds(motorSpeed);
 // 6
 digitalWrite(Pin1, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin3, HIGH);
 digitalWrite(Pin4, HIGH);
 delayMicroseconds(motorSpeed);
 // 7
 digitalWrite(Pin1, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin4, HIGH);
 delayMicroseconds(motorSpeed);
 // 8
 digitalWrite(Pin1, HIGH);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin4, HIGH);
 delayMicroseconds(motorSpeed);
}
 
// 1-2相激磁
void clockwise(){
 // 1
 digitalWrite(Pin4, HIGH);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin1, LOW);
 delayMicroseconds(motorSpeed);
 // 2
 digitalWrite(Pin4, HIGH);
 digitalWrite(Pin3, HIGH);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin1, LOW);
 delayMicroseconds(motorSpeed);
 // 3
 digitalWrite(Pin4, LOW);
 digitalWrite(Pin3, HIGH);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin1, LOW);
 delayMicroseconds(motorSpeed);
 // 4
 digitalWrite(Pin4, LOW);
 digitalWrite(Pin3, HIGH);
 digitalWrite(Pin2, HIGH);
 digitalWrite(Pin1, LOW);
 delayMicroseconds(motorSpeed);
 // 5
 digitalWrite(Pin4, LOW);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin2, HIGH);
 digitalWrite(Pin1, LOW);
 delayMicroseconds(motorSpeed);
 // 6
 digitalWrite(Pin4, LOW);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin2, HIGH);
 digitalWrite(Pin1, HIGH);
 delayMicroseconds(motorSpeed);
 // 7
 digitalWrite(Pin4, LOW);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin1, HIGH);
 delayMicroseconds(motorSpeed);
 // 8
 digitalWrite(Pin4, HIGH);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin1, HIGH);
 delayMicroseconds(motorSpeed);
}
 
// 2相激磁
void clockwise2() {
 // 1
 digitalWrite(Pin4, HIGH);
 digitalWrite(Pin3, HIGH);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin1, LOW);
 delayMicroseconds(motorSpeed);
 
 // 2
 digitalWrite(Pin4, LOW);
 digitalWrite(Pin3, HIGH);
 digitalWrite(Pin2, HIGH);
 digitalWrite(Pin1, LOW);
 delayMicroseconds(motorSpeed);
 
// 3
 digitalWrite(Pin4, LOW);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin2, HIGH);
 digitalWrite(Pin1, HIGH);
 delayMicroseconds(motorSpeed);
 
// 4
 digitalWrite(Pin4, HIGH);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin1, HIGH);
 delayMicroseconds(motorSpeed);
}
 
// 1相激磁
void clockwise3() {
 // 1
 digitalWrite(Pin4, HIGH);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin1, LOW);
 delayMicroseconds(motorSpeed);
 
 // 2
 digitalWrite(Pin4, LOW);
 digitalWrite(Pin3, HIGH);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin1, LOW);
 delayMicroseconds(motorSpeed);
 
// 3
 digitalWrite(Pin4, LOW);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin2, HIGH);
 digitalWrite(Pin1, LOW);
 delayMicroseconds(motorSpeed);
 
// 4
 digitalWrite(Pin4, LOW);
 digitalWrite(Pin3, LOW);
 digitalWrite(Pin2, LOW);
 digitalWrite(Pin1, HIGH);
 delayMicroseconds(motorSpeed);
}



