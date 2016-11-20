//http://forum.arduino.cc/index.php?topic=179541.0
//Monitoring AC Current with Arduino and ACS712
float c_val = 0;
float volts = 0;
float val = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  c_val = 511 - analogRead(3);
  val = analogRead(4);
  float c_average = 0;
  float v_average = 0;
  float currentAC = 0;
  float amps = 0;
  
  
  for(int i = 0; i<100; i++)
  {
  
    c_average += sq(amps) / 100;//rms conversion
    currentAC = sqrt(c_average);
    
  for(int i = 0; i <1000; i++)
  {
    volts = val * (5.0 / 1024.0);
    amps = amps + ((c_val * 75.7576)/ 1024 / 1000);//averaging samples and D to A conversion
    v_average = (v_average + volts) / 1000; 
  }  
  }
    
  Serial.println(currentAC);
  Serial.println(v_average);
}
