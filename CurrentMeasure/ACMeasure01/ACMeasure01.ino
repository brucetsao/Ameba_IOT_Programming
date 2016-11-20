//http://forum.arduino.cc/index.php?topic=179541.0
//Monitoring AC Current with Arduino and ACS712

float samplesnum = 1000;
float adc_zero = 510; //relative digital zero of the arudino input from ACS712
long currentacc = 0;
long currentac = 0;
long adc_raw = 0;
long currentAD = 0;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  
  for(int i=0; i<samplesnum; i++) 
  {  
  adc_raw = analogRead(3);
  currentacc += (adc_raw - adc_zero) * (adc_raw - adc_zero);  //rms
  }
  currentAD = (currentacc * 75.7576)/ 1024; //D to A conversion
  currentac = sqrt(currentAD)/samplesnum; //rms
  Serial.println(currentac);
}
