#define motor1Speed 12 
#define motor2Speed 13

#define motor1a 8 
#define motor1b 9 
#define motor2a 10 
#define motor2b 11 
int Motor1direction = 1 ;
 void initall() ;
void Motor1Forward();
void Motor2Forward();
void Motor1Backward();
void Motor1Backward();
void ControlMotor1Speed(int Sp) ;
void ControlMotor2Speed(int Sp) ;

 
 void setup()
 {
  initall();
   //init serial for debug
Serial.begin(9600);
Serial.println("program start here ");
 }

 void loop()
 {
       ControlMotor1Speed(250) ;
       ControlMotor2Speed(250) ;
       Motor1Forward();
       Motor2Forward();
        delay(3000);
       ControlMotor1Speed(100) ;
       ControlMotor2Speed(100) ;
       Motor1Backward();
       Motor1Backward();
        delay(3000);
 }

 void Motor1Forward()
 {
   digitalWrite(motor1a,HIGH);
   digitalWrite(motor1b,LOW);
 }
 void Motor1Backward()
 {
   digitalWrite(motor1a,LOW );
   digitalWrite(motor1b,HIGH);
 }


 void Motor2Forward()
 {
   digitalWrite(motor2a,HIGH);
   digitalWrite(motor2b,LOW);
 }
 void Motor2Backward()
 {
   digitalWrite(motor2a,LOW );
   digitalWrite(motor2b,HIGH);
 }

void initall()
{
 // init motor pin as output 
   pinMode(motor1a,OUTPUT);
   pinMode(motor1b,OUTPUT);
   pinMode(motor2a,OUTPUT);
   pinMode(motor2b,OUTPUT);
 // init motor direction Led output 
}

void ControlMotor1Speed(int Sp)
{
      analogWrite(motor1Speed, Sp) ;
}
void ControlMotor2Speed(int Sp)
{
      analogWrite(motor2Speed, Sp) ;
}

