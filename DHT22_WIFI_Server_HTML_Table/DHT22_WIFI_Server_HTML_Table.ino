#include <WiFi.h>
         // your network key Index number (needed only for WEP)

//-------------- dht use
#include "DHT.h"
#define DHTPIN 8     // what digital pin we're connected to


//#define DHTTYPE DHT11   // DHT 11
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

DHT dht(DHTPIN, DHTTYPE);

//----wifi use
uint8_t MacData[6];
char ssid[] = "BruceSonyC5";      // your network SSID (name)
char pass[] = "bruce1234";     // your network password
int keyIndex = 0;   
IPAddress  Meip ,Megateway ,Mesubnet ;
String MacAddress ;
int status = WL_IDLE_STATUS;

WiFiServer server(80);

//-----end of wifi use

void setup()   /*----( SETUP: RUNS ONCE )----*/
{
    Serial.begin(9600);
  Serial.println("DHTxx test!");
    dht.begin();
  if (WiFi.status() == WL_NO_SHIELD) {
    Serial.println("WiFi shield not present");
    // don't continue:
    while (true);
  }
  String fv = WiFi.firmwareVersion();
  if (fv != "1.1.0") {
    Serial.println("Please upgrade the firmware");
  }
    MacAddress = GetWifiMac() ; // get MacAddress
    ShowMac() ;       //Show Mac Address
    
  // attempt to connect to Wifi network:
    initializeWiFi();
    server.begin();
  // you're connected now, so print out the status:
    ShowInternetStatus();
    
}// END Setup

static int count=0;
void loop()   
{
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

 
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" % and ");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t\n");

  // wifi code here
    // listen for incoming clients
  WiFiClient client = server.available();
  if (client) 
  {
      Serial.println("Now Someone Access WebServer");
  
      Serial.println("new client");
     // an http request ends with a blank line
    boolean currentLineIsBlank = true;
    while (client.connected()) 
    {
          if (client.available()) 
          {
                char c = client.read();
                Serial.write(c);
                // if you've gotten to the end of the line (received a newline
                // character) and the line is blank, the http request has ended,
                // so you can send a reply
                if (c == '\n' && currentLineIsBlank) 
                {
                      // send a standard http response header
                      client.println("HTTP/1.1 200 OK");
                      client.println("Content-Type: text/html");
                      client.println("Connection: close");  // the connection will be closed after completion of the response
                      client.println("Refresh: 5");  // refresh the page automatically every 5 sec
                      client.println();
                      client.println("<!DOCTYPE HTML>");
                      client.println("<html>");
                      client.println("<body>");
                      client.println("<table width='400' border='2'>");
                      client.println("<tr>");
                      client.println("<td><div align='center'>濕度</div></td><td><div align='center'>溫度(。C)</div></td><td><div align='center'>溫度(。F)</div></td>");
                      client.println("</tr>");
                      client.println("<tr>");
                      client.println("<td><div align='center'>");
                      client.println(h);
                      client.println("%</div></td><td><div align='center'>");
                      client.println(t);
                      client.println("。C</div></td><td><div align='center'>");
                      client.println(f);
                      client.println("。F</div></td>");
                      client.println("</tr>");
                        client.println("</table>");
                    // output the value of each analog input pin
                       
                        client.print("Humidity: ");
                         client.print(h);
                        client.print(" % and ");
                        client.print("Temperature: ");
                        client.print(t);
                        client.print("*C   and  ");
                        client.print(f);
                        client.print("*F  (end) ");
                        client.println("<br />");
                       client.println("<body>");                        
                        client.println("</html>");
                        break;
                 }
       if (c == '\n') 
         {
            // you're starting a new line
            currentLineIsBlank = true;
          } else if (c != '\r') 
          {
              // you've gotten a character on the current line
              currentLineIsBlank = false;
           }
      }
    }
    // give the web browser time to receive the data
    delay(1);

    // close the connection:
    client.stop();
    Serial.println("client disonnected");
  }



} // END Loop


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
  
}


