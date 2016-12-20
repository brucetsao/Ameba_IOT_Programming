#include <WiFi.h>
#include <WiFiUdp.h>

uint8_t MacData[6];
char ssid[] = "PM25";      // your network SSID (name)
char pass[] = "qq12345678";     // your network password
int keyIndex = 0;            // your network key Index number (needed only for WEP)



const int NTP_PACKET_SIZE = 48; // NTP time stamp is in the first 48 bytes of the message

const byte nptSendPacket[ NTP_PACKET_SIZE] = {
    0xE3, 0x00, 0x06, 0xEC, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x31, 0x4E, 0x31, 0x34,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
byte ntpRecvBuffer[ NTP_PACKET_SIZE ];
#define LEAP_YEAR(Y)     ( ((1970+Y)>0) && !((1970+Y)%4) && ( ((1970+Y)%100) || !((1970+Y)%400) ) )
static  const uint8_t monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // API starts months from 1, this array starts from 0
uint32_t epochSystem = 0; // timestamp of system boot up

// A UDP instance to let us send and receive packets over UDP
WiFiUDP Udp;
const char ntpServer[] = "pool.ntp.org";
const long timeZoneOffset = 28800L;

IPAddress  Meip ,Megateway ,Mesubnet ;
String MacAddress ;
int status = WL_IDLE_STATUS;
int NDPyear, NDPmonth, NDPday, NDPhour, NDPminute, NDPsecond;
unsigned long epoch  ;

void setup() 
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // check for the presence of the shield:
  if (WiFi.status() == WL_NO_SHIELD) 
  {
    Serial.println("WiFi shield not present");
    // don't continue:
    while (true);
  }

  String fv = WiFi.firmwareVersion();
  if (fv != "1.1.0") 
  {
    Serial.println("Please upgrade the firmware");
  }

    MacAddress = GetWifiMac() ; // get MacAddress
    ShowMac() ;       //Show Mac Address
    
  // attempt to connect to Wifi network:
    initializeWiFi();
 
  Serial.println("Connected to wifi");
      ShowInternetStatus();
}

void loop() {
  retrieveNtpTime();
  //DateTime ttt;
  //    getCurrentTime(epoch+timeZoneOffset, &NDPyear, &NDPmonth, &NDPday, &NDPhour, &NDPminute, &NDPsecond);
  getCurrentTime(epoch, &NDPyear, &NDPmonth, &NDPday, &NDPhour, &NDPminute, &NDPsecond);
  //ttt->year = NDPyear ;
  Serial.print("NDP Date is :");
  Serial.print(StringDate(NDPyear, NDPmonth, NDPday));
  Serial.print("and ");
  Serial.print("NDP Time is :");
  Serial.print(StringTime(NDPhour, NDPminute, NDPsecond));
  Serial.print("\n");

  // wait ten seconds before asking for the time again
  delay(10000);
}

// send an NTP request to the time server at the given address
void retrieveNtpTime() {
Serial.println("Send NTP packet");

Udp.beginPacket(ntpServer, 123); //NTP requests are to port 123
Udp.write(nptSendPacket, NTP_PACKET_SIZE);
Udp.endPacket();

while (Udp.read(ntpRecvBuffer, NTP_PACKET_SIZE) <= 0) ;

Serial.println("NTP packet received");

unsigned long highWord = word(ntpRecvBuffer[40], ntpRecvBuffer[41]);
unsigned long lowWord = word(ntpRecvBuffer[42], ntpRecvBuffer[43]);
unsigned long secsSince1900 = highWord << 16 | lowWord;
const unsigned long seventyYears = 2208988800UL;
// epoch = secsSince1900 - seventyYears + timeZoneOffset ;
epoch = secsSince1900 -seventyYears ;

epochSystem = epoch -  millis() / 1000 ;
}


void getCurrentTime(unsigned long epoch, int *year, int *month, int *day, int *hour, int *minute, int *second) {
  int tempDay = 0;

  *hour = (epoch  % 86400L) / 3600;
  *minute = (epoch  % 3600) / 60;
  *second = epoch % 60;

  *year = 1970;
  *month = 0;
  *day = epoch / 86400;

  for (*year = 1970; ; (*year)++) {
    if (tempDay + (LEAP_YEAR(*year) ? 366 : 365) > *day) {
      break;
    } else {
      tempDay += (LEAP_YEAR(*year) ? 366 : 365);
    }
  }
  tempDay = *day - tempDay; // the days left in a year
  for ((*month) = 0; (*month) < 12; (*month)++) {
    if ((*month) == 1) {
      if (LEAP_YEAR(*year)) {
        if (tempDay - 29 < 0) {
          break;
        } else {
          tempDay -= 29;
        }
      } else {
        if (tempDay - 28 < 0) {
          break;
        } else {
          tempDay -= 28;
        }
      }
    } else {
      if (tempDay - monthDays[(*month)] < 0) {
        break;
      } else {
        tempDay -= monthDays[(*month)];
      }
    }
  }
  (*month)++;
  *day = tempDay + 2; // one for base 1, one for current day
}

void ShowMac()
{
  
     Serial.print("MAC:");
     Serial.print(MacAddress);
     Serial.print("\n");

}




String GetWifiMac()
{
   String tt ;
    String t1,t2,t3,t4,t5,t6 ;
    WiFi.status();    //this method must be used for get MAC
  WiFi.macAddress(MacData);
  
  Serial.print("Mac:");
   Serial.print(MacData[0],HEX) ;
   Serial.print("/");
   Serial.print(MacData[1],HEX) ;
   Serial.print("/");
   Serial.print(MacData[2],HEX) ;
   Serial.print("/");
   Serial.print(MacData[3],HEX) ;
   Serial.print("/");
   Serial.print(MacData[4],HEX) ;
   Serial.print("/");
   Serial.print(MacData[5],HEX) ;
   Serial.print("~");
   
   t1 = print2HEX((int)MacData[0]);
   t2 = print2HEX((int)MacData[1]);
   t3 = print2HEX((int)MacData[2]);
   t4 = print2HEX((int)MacData[3]);
   t5 = print2HEX((int)MacData[4]);
   t6 = print2HEX((int)MacData[5]);
 tt = (t1+t2+t3+t4+t5+t6) ;
Serial.print(tt);
Serial.print("\n");
  
  return tt ;
}
String  print2HEX(int number) {
  String ttt ;
  if (number >= 0 && number < 16)
  {
    ttt = String("0") + String(number,HEX);
  }
  else
  {
      ttt = String(number,HEX);
  }
  return ttt ;
}





void printWifiData() 
{
  // print your WiFi shield's IP address:
  Meip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(Meip);
  Serial.print("\n");

  // print your MAC address:
  byte mac[6];
  WiFi.macAddress(mac);
  Serial.print("MAC address: ");
  Serial.print(mac[5], HEX);
  Serial.print(":");
  Serial.print(mac[4], HEX);
  Serial.print(":");
  Serial.print(mac[3], HEX);
  Serial.print(":");
  Serial.print(mac[2], HEX);
  Serial.print(":");
  Serial.print(mac[1], HEX);
  Serial.print(":");
  Serial.println(mac[0], HEX);

  // print your subnet mask:
  Mesubnet = WiFi.subnetMask();
  Serial.print("NetMask: ");
  Serial.println(Mesubnet);

  // print your gateway address:
  Megateway = WiFi.gatewayIP();
  Serial.print("Gateway: ");
  Serial.println(Megateway);
}

void ShowInternetStatus()
{
    
        if (WiFi.status())
          {
               Meip = WiFi.localIP();
               Serial.print("Get IP is:");
               Serial.print(Meip);
               Serial.print("\n");
              
          }
          else
          {
                       Serial.print("DisConnected:");
                       Serial.print("\n");
          }

}

void initializeWiFi() {
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    status = WiFi.begin(ssid, pass);
  //   status = WiFi.begin(ssid);

    // wait 10 seconds for connection:
    delay(10000);
  }
  Serial.print("\n Success to connect AP:") ;
  Serial.print(ssid) ;
  Serial.print("\n") ;
    Udp.begin(2390);
}
String  StringDate(int yyy, int mmm, int ddd) {
  String ttt ;
  //nowT  = now;
  ttt = print4digits(yyy) + "-" + print2digits(mmm) + "-" + print2digits(ddd) ;
  return ttt ;
}



String  StringTime(int hhh, int mmm, int sss) {
  String ttt ;
  ttt = print2digits(hhh) + ":" + print2digits(mmm) + ":" + print2digits(sss) ;
  return ttt ;
}



String  print2digits(int number) {
  String ttt ;
  if (number >= 0 && number < 10)
  {
    ttt = String("0") + String(number);
  }
  else
  {
    ttt = String(number);
  }
  return ttt ;
}

String  print4digits(int number) {
  String ttt ;
  ttt = String(number);
  return ttt ;
}



