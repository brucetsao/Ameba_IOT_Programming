//http://forum.arduino.cc/index.php?topic=179541.0

const int currentPin = 4;
const unsigned long sampleTime = 100000UL;                           // sample over 100ms, it is an exact number of cycles for both 50Hz and 60Hz mains
const unsigned long numSamples = 250UL;                               // choose the number of samples to divide sampleTime exactly, but low enough for the ADC to keep up
const unsigned long sampleInterval = sampleTime/numSamples;  // the sampling interval, must be longer than then ADC conversion time
//const int adc_zero = 522;                                                     // relative digital zero of the arudino input from ACS712 (could make this a variable and auto-adjust it)
int adc_zero;                                                                   //autoadjusted relative digital zero

void setup()
{
  Serial.begin(9600);
   adc_zero = determineVQ(currentPin); //Quiscent output voltage - the average voltage ACS712 shows with no load (0 A)
  delay(1000);
}

void loop(){
  Serial.print("ACS712@A2:");Serial.print(readCurrent(currentPin),3);Serial.println(" mA");
  delay(150);
}

int determineVQ(int PIN) {
  Serial.print("estimating avg. quiscent voltage:");
  long VQ = 0;
  //read 5000 samples to stabilise value
  for (int i=0; i<5000; i++) {
    VQ += analogRead(PIN);
    delay(1);//depends on sampling (on filter capacitor), can be 1/80000 (80kHz) max.
  }
  VQ /= 5000;
  Serial.print(map(VQ, 0, 1023, 0, 5000));Serial.println(" mV");
  return int(VQ);
}

float readCurrent(int PIN)
{
  unsigned long currentAcc = 0;
  unsigned int count = 0;
  unsigned long prevMicros = micros() - sampleInterval ;
  while (count < numSamples)
  {
    if (micros() - prevMicros >= sampleInterval)
    {
      int adc_raw = analogRead(currentPin) - adc_zero;
      currentAcc += (unsigned long)(adc_raw * adc_raw);
      ++count;
      prevMicros += sampleInterval;
    }
  }
  float rms = sqrt((float)currentAcc/(float)numSamples) * (75.7576 / 1024.0);
  return rms;
  //Serial.println(rms);
}
