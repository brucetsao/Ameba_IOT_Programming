//http://forum.arduino.cc/index.php?topic=179541.0
//Monitoring AC Current with Arduino and ACS712
const int currentPin = 3;
const unsigned long sampleTime = 100000UL;                           // sample over 100ms, it is an exact number of cycles for both 50Hz and 60Hz mains
const unsigned long numSamples = 250UL;                               // choose the number of samples to divide sampleTime exactly, but low enough for the ADC to keep up
const unsigned long sampleInterval = sampleTime/numSamples;  // the sampling interval, must be longer than then ADC conversion time
const int adc_zero = 510;                                                     // relative digital zero of the arudino input from ACS712 (could make this a variable and auto-adjust it)

void setup()
{
  Serial.begin(9600);
}

void loop()
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
  Serial.println(rms);
}

