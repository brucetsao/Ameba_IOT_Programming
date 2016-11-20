/*
 WFduino ＝ Scratch2.x + ScratchX + Arduino + WF8266R
 ----------------------------------------------------
 WFduino let you control Arduino by Scratch.

 ----------------------------------------------------
 2016 @ Union U Inc. http://wf8266.com/wf8266r
 竹林資訊站 : http://blog.ilc.edu.tw/blog/blog/868
*/
#include <Servo.h>
#include <SoftwareSerial.h>
SoftwareSerial wf8266r(2, 4); // RX 2, TX 4

const char* version = "2016.09.08";
Servo myservo2, myservo3, myservo4, myservo5, myservo6, myservo7, myservo8, myservo9, myservo10, myservo11, myservo12, myservo13;
bool isRead = false, isGPIORead = false;
const uint8_t maxLength = 20;
uint8_t serialIndex = 0, serialIndexWF = 0;
char serialBuffer[50], serialBufferWF[50];
uint8_t pinState[22] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}; //0:Read 1:Disable

String cmd = "";
bool isWF8266R = false;
unsigned long int heartbeat = 0;
bool heartbeatEnabled = true;

void setup() {
  reset();
  Serial.begin(115200);
  wf8266r.begin(9600);
  Serial.flush();
  wf8266r.flush();
  Serial.print(version);
  Serial.println(".WFduino.Ready");
}

void loop() {
  listen();
  listenWF8266R();

  if (heartbeatEnabled)
  {
    if (millis() - heartbeat > 300)
    {
      heartbeat = millis();
      cmd = "readGPIO";
      doCommand();
    }
  }
}

void listen() {
  while (Serial.available() > 0)
  {

    uint8_t val = Serial.read();
    if (val == 10)
    {
      serialBuffer[serialIndex - 1] = '\0';
      cmd = String(serialBuffer);
      serialIndex = 0;

      doCommand();
    }
    else
    {
      //save to buffer
      serialBuffer[serialIndex++] = (char)val;
      if (serialIndex > 49)
        serialIndex = 0;
      if (serialIndexWF > 49)
        serialIndexWF = 0;
    }
  }
}

void listenWF8266R() {
  while (wf8266r.available() > 0)
  {
    uint8_t val = wf8266r.read();
    if (val == 10)
    {
      serialBufferWF[serialIndexWF - 1] = '\0';
      cmd = String(serialBufferWF);
      if (cmd.indexOf("digitalRead") == 0 || cmd.indexOf("analogRead") == 0 || cmd.indexOf("readGPIO") == 0)
      {
        isRead = true;
      }
      serialIndexWF = 0;

      doCommand();
    }
    else
    {
      //save to buffer
      serialBufferWF[serialIndexWF++] = (char)val;
    }
  }
}

void doCommand() {
  String p1, p2, v1, v2, temp;
  uint8_t index = cmd.indexOf(',');
  String param = cmd.substring(index + 1, cmd.length() + 1);
  cmd = cmd.substring(0, index);
  index = param.indexOf('&');
  if (index < 255) //multi params
  {
    temp = param.substring(0, index);
    param = param.substring(index + 1, param.length() + 1);
    index = temp.indexOf('=');
    p1 = temp.substring(0, index);
    v1 = temp.substring(index + 1, temp.length() + 1);
    index = param.indexOf('=');
    p2 = param.substring(0, index);
    v2 = param.substring(index + 1, param.length() + 1);
  }
  else
  {
    index = param.indexOf('=');
    p1 = param.substring(0, index);
    v1 = param.substring(index + 1, param.length() + 1);
  }

  if (cmd == "pinMode")
  {
    if (v1.toInt() == 0)
    {
      pinMode(p1.toInt(), INPUT);
      pinState[p1.toInt()] = 0;
    }
    else if (v1.toInt() == 2)
    {
      pinMode(p1.toInt(), INPUT_PULLUP);
      pinState[p1.toInt()] = 0;
    }
    else
    {
      pinMode(p1.toInt(), OUTPUT);
      pinState[p1.toInt()] = 1;
    }
  }
  else if ( cmd == "heartMode")
  {
    heartbeatEnabled = p1.toInt() == 0 ? false : true;
  }
  else if (cmd == "readGPIO")
  {
    if (isGPIORead)
      return;
    isGPIORead = true;

    uint16_t gpios[22];
    for (uint8_t i = 2; i < 22; i++)
    {
      if (i < 14)
      {
        if (pinState[i] == 0)
          gpios[i] = digitalRead(i);
        else
          gpios[i] = 0;
      }
      else
      {
        if (pinState[i] == 0)
          gpios[i] = analogRead(i);
        else
          gpios[i] = 0;
      }
    }
    char buf[100];
    sprintf(buf, "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
            0, 0, gpios[2], gpios[3], gpios[4], gpios[5], gpios[6], gpios[7], gpios[8], gpios[9], gpios[10],
            gpios[11], gpios[12], gpios[13], gpios[14], gpios[15], gpios[16], gpios[17], gpios[18], gpios[19], gpios[20], gpios[21]);
    String rtn = "{\"Action\":\"" + cmd + "\",\"Value\":\"" + String(buf) + "\"}";
    if (isRead)
    {
      wf8266r.println(rtn);
      isRead = false;
    }
    else
    {
      Serial.flush();
      Serial.println(rtn);
    }
    isGPIORead = false;
  }
  else if (cmd == "digitalWrite")
  {
    pinState[p1.toInt()] = 0;
    digitalWrite(p1.toInt(), v1.toInt());
  }
  else if (cmd == "analogWrite")
  {
    pinState[p1.toInt()] = 1;
    analogWrite(p1.toInt(), v1.toInt());
  }
  else if (cmd == "digitalRead")
  {
    uint8_t v = digitalRead(p1.toInt());
    String rtn = "{\"Action\":\"" + cmd + "\",\"Pin\":" + p1 + ",\"Value\":" + v + "}";
    if (isRead)
    {
      wf8266r.println(rtn);
      isRead = false;
    }
    else
      Serial.println(rtn);
  }
  else if (cmd == "analogRead")
  {
    uint16_t v = analogRead(p1.toInt());
    String rtn = "{\"Action\":\"" + cmd + "\",\"Pin\":" + p1 + ",\"Value\":" + v + "}";
    if (isRead)
    {
      wf8266r.println(rtn);
      isRead = false;
    }
    else
      Serial.println(rtn);
  }
  else if (cmd == "car")
  {
    uint8_t pin = 0, value = 0;
    v1=v1+".";
    v2=v2+".";
    while (v1.indexOf(".") > -1)
    {
      index = v1.indexOf(".");
      pin = v1.substring(0, index).toInt();
      v1 = v1.substring(index + 1, v1.length());
      index = v2.indexOf(".");
      value = v2.substring(0, index).toInt();
      v2 = v2.substring(index + 1, v2.length());

      if (value == 1)
      {
        digitalWrite(pin, value);
      }
      else
      {
        analogWrite(pin, value);
      }
    }

    String rtn = "{\"Action\":\"" + cmd + "\"}";
    Serial.println(rtn);
  }
  else if (cmd == "wtgpio")
  {
    String rtn = "{\"Action\":\"" + cmd + "\",\"Pin\":" + p2 + ",\"Value\":" + v2 + "}";
    Serial.println(rtn);
    rtn = "WTGPIO+TYPE:" + v1 + ",RW:W,PIN:" + p2 + ",VALUE:" + v2;
    wf8266r.println(rtn);
  }
  else if (cmd == "wtsen")
  {
    String rtn = "{\"Action\":\"" + cmd + "\",\"Pin\":" + p2 + ",\"Degree\":" + v2 + "}";
    Serial.println(rtn);
    rtn = "WTSEN+" + v1 + ":" + p2 + ",VALUE:" + v2;
    wf8266r.println(rtn);
  }
  else if (cmd == "wtirsc") //IR send NEC code
  {
    String rtn = "{\"Action\":\"" + cmd + "\",\"Pin\":" + p2 + ",\"Code\":\"" + v2 + "\"}";
    Serial.println(rtn);
    rtn = "WTSEN+" + v1 + ":" + p2 + ",DATA:" + v2;
    wf8266r.println(rtn);
  }
  else if (cmd == "distance")
  {
    String rtn = "{\"Action\":\"" + cmd + "\"," + readDistance(v1.toInt(), v2.toInt()) + "}";
    Serial.println(rtn);
  }
  else if (cmd == "servo")
  {
    pinState[v1.toInt()] = 1;
    String rtn = "{\"Action\":\"" + cmd + "\"," + servo(v1.toInt(), v2.toInt()) + "}";
    Serial.println(rtn);
  }
  else if (cmd == "tone")
  {
    pinState[v1.toInt()] = 1;
    String rtn = "{\"Action\":\"" + cmd + "\"," + toneF(v1.toInt(), p2.toInt(), v2.toInt()) + "}";
    Serial.println(rtn);
  }
  else if (cmd == "noTone")
  {
    pinState[v1.toInt()] = 0;
    String rtn = "{\"Action\":\"" + cmd + "\"," + noToneF(v1.toInt()) + "}";
    Serial.println(rtn);
  }
  else if (cmd == "reset")
  {
    reset();
    String rtn = "{\"Action\":\"" + cmd + "\"}";
    Serial.println(rtn);
  }

}

//Sensors
String readDistance(uint8_t echoPin, uint8_t trigPin)
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  long duration;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  uint16_t distance = (duration / 2) / 29.1;

  return "\"distance\":" + String(distance);
}

String servo(uint8_t pin, uint16_t degree) {
  pinMode(pin, OUTPUT);
  uint16_t s = 570, e = 2500;
  switch (pin)
  {
    case 2 : myservo2.attach(pin, s, e); myservo2.write(degree); break;
    case 3 : myservo3.attach(pin, s, e); myservo3.write(degree); break;
    case 4 : myservo4.attach(pin, s, e); myservo4.write(degree); break;
    case 5 : myservo5.attach(pin, s, e); myservo5.write(degree); break;
    case 6 : myservo6.attach(pin, s, e); myservo6.write(degree); break;
    case 7 : myservo7.attach(pin, s, e); myservo7.write(degree); break;
    case 8 : myservo8.attach(pin, s, e); myservo8.write(degree); break;
    case 9 : myservo9.attach(pin, s, e); myservo9.write(degree); break;
    case 10 : myservo10.attach(pin, s, e); myservo10.write(degree); break;
    case 11 : myservo11.attach(pin, s, e); myservo11.write(degree); break;
    case 12 : myservo12.attach(pin, s, e); myservo12.write(degree); break;
    case 13 : myservo13.attach(pin, s, e); myservo13.write(degree); break;
  }


  delay(15);
  return "\"degree\":" + String(degree);
}

String toneF(uint8_t pin, uint16_t f, long t) {
  pinMode(pin, OUTPUT);
  tone(pin, f, t);
  return "\"f\":" + String(f);
}

String noToneF(uint8_t pin)
{
  noTone(pin);
  return "\"pin\":" + String(pin);
}

void reset()
{
  for (uint8_t i = 3; i < 14; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
    pinState[i] = 1;
  }

  for (uint8_t i = 14; i < 22; i++)
  {
    pinMode(i, INPUT);
    pinState[i] = 1;
  }
}

