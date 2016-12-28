#include <WiFi.h>
// your network key Index number (needed only for WEP)
//-------------- dht use

#define MicPIN A1     // what digital pin we're connected to
  
int data[100] ;
int pos = 0 ;


//----wifi use
uint8_t MacData[6];
char ssid[] = "BruceSonyC5";      // your network SSID (name)
char pass[] = "bruce1234";     // your network password
int keyIndex = 0;
IPAddress  Meip , Megateway , Mesubnet ;
String MacAddress ;
int status = WL_IDLE_STATUS;

WiFiServer server(80);

//-----end of wifi use
void setup()   /*----( SETUP: RUNS ONCE )----*/
{
    Serial.begin(9600);
  Serial.println("DHTxx test!");
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
  int micValue = map(analogRead(MicPIN),0,1023,0,255) ;
   data[pos] = micValue ;
   pos++  ;

    delay(100) ;
    if (pos >=100) 
        {
          pos = 0 ;
        }
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
          client.println("<head>");
          client.println("<script type='text/javascript' src='https://www.gstatic.com/charts/loader.js'></script>");
          client.println("<script type='text/javascript'>");
          client.println("google.charts.load('current', {'packages':['corechart']});");
          client.println("google.charts.setOnLoadCallback(drawChart);");
          
          // output the value of each analog input pin
          for (int i= 1 ; i <pos; i++)
            {
                client.println("['");
                client.println(i);
                client.println("',");
                client.println(i);
                client.println("']");
               if (i < (pos-1) )
                    client.println(",");
            }
             client.println("]);");
             client.println("var options = {");
          client.println("title: 'Sound Track',");
          client.println("  curveType: 'function',");
          client.println(" legend: { position: 'bottom' }");
          client.println(" };");
          client.println("var chart = new google.visualization.LineChart(document.getElementById('curve_chart'));");
          client.println("chart.draw(data, options);");
          client.println("}");
          client.println("</script>");
          client.println("</head>");
          client.println("<meta charset='utf-8'>");
          client.println("<body>");
          client.println("<div id='curve_chart' style='width: 900px; height: 500px;'></div>");
          client.println("</body>");
         
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
    delay(800) ;
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
  String t1, t2, t3, t4, t5, t6 ;
  WiFi.status();    //this method must be used for get MAC
  WiFi.macAddress(MacData);

  Serial.print("Mac:");
  Serial.print(MacData[0], HEX) ;
  Serial.print("/");
  Serial.print(MacData[1], HEX) ;
  Serial.print("/");
  Serial.print(MacData[2], HEX) ;
  Serial.print("/");
  Serial.print(MacData[3], HEX) ;
  Serial.print("/");
  Serial.print(MacData[4], HEX) ;
  Serial.print("/");
  Serial.print(MacData[5], HEX) ;
  Serial.print("~");

  t1 = print2HEX((int)MacData[0]);
  t2 = print2HEX((int)MacData[1]);
  t3 = print2HEX((int)MacData[2]);
  t4 = print2HEX((int)MacData[3]);
  t5 = print2HEX((int)MacData[4]);
  t6 = print2HEX((int)MacData[5]);
  tt = (t1 + t2 + t3 + t4 + t5 + t6) ;
  Serial.print(tt);
  Serial.print("\n");

  return tt ;
}
String  print2HEX(int number) {
  String ttt ;
  if (number >= 0 && number < 16)
  {
    ttt = String("0") + String(number, HEX);
  }
  else
  {
    ttt = String(number, HEX);
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


