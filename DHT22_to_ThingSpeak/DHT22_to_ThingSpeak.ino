#include <String.h>
//-------------- dht use
#include "DHT.h"
#define DHTPIN 7     // what digital pin we're connected to


//#define DHTTYPE DHT11   // DHT 11
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)



#include <WiFi.h>

char ssid[] = "BruceSonyC5";      // your network SSID (name)
char pass[] = "bruce1234";     // your network password
int keyIndex = 0;            // your network key Index number (needed only for WEP)

int status = WL_IDLE_STATUS;

WiFiClient client;

DHT dht(DHTPIN, DHTTYPE);

//IPAddress server(64,233,189,94);  // numeric IP for Google (no DNS)
char server[] = "184.106.153.149";    // name address for Google (using DNS)
String writeAPIKey = "4I2190QE5X7KM714";    // Write API Key for a ThingSpeak Channel
const int updateInterval = 30000;        // Time interval in milliseconds to update ThingSpeak   
// Variable Setup
long lastConnectionTime = 0; 
boolean lastConnected = false;
int resetCounter = 0;



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
  // attempt to connect to Wifi network:
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    status = WiFi.begin(ssid, pass);

    // wait 10 seconds for connection:
    delay(10000);
  }
  Serial.println("Connected to wifi");
  printWifiStatus();
//   end of init wifi

}// END Setup


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
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t\n");

    // Print Update Response to Serial Monitor
  if (client.available())
  {
    char c = client.read();
    Serial.print(c);
  }
  
  // Disconnect from ThingSpeak
  if (!client.connected() && lastConnected)
  {
    Serial.println();
    Serial.println("...disconnected.");
    Serial.println();
    
    client.stop();
  }
  
  // Update ThingSpeak
  if(!client.connected() && (millis() - lastConnectionTime > updateInterval))
  {
    Serial.println("Now Update ThingSpeak ");
    updateThingSpeak("field1="+String(h)+"&field2="+String(t));
  }
  
  lastConnected = client.connected();
  delay(2000);
} // END Loop


void updateThingSpeak(String tsData)
{
   if (client.connect(server, 80)) 
      { 
        Serial.println("Connected to ThingSpeak...");
        Serial.println();
            
        client.print("POST /update HTTP/1.1\n");
        client.print("Host: api.thingspeak.com\n");
        client.print("Connection: close\n");
        Serial.println("X-THINGSPEAKAPIKEY: "+writeAPIKey+"\n");
        client.print("X-THINGSPEAKAPIKEY: "+writeAPIKey+"\n");
        client.print("Content-Type: application/x-www-form-urlencoded\n");
        client.print("Content-Length: ");
        client.print(tsData.length());
        client.print("\n\n");
    
        client.print(tsData);
        Serial.println(tsData);
        
        lastConnectionTime = millis();
        
        resetCounter = 0;
        
      }
      else
        {
          Serial.println("Connection Failed.");   
          Serial.println();
          
          resetCounter++;
          
          if (resetCounter >=5 ) {resetEthernetShield();}
      
          lastConnectionTime = millis(); 
        }
}

void resetEthernetShield()
{
  Serial.println("Resetting Ethernet Shield.");   
  Serial.println();
  
  client.stop();
  delay(1000);
 }


void printWifiStatus() {
  // print the SSID of the network you're attached to:
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // print your WiFi shield's IP address:
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

  // print the received signal strength:
  long rssi = WiFi.RSSI();
  Serial.print("signal strength (RSSI):");
  Serial.print(rssi);
  Serial.println(" dBm");
}

