int PinA1 = 8; 
int PinA2 = 9; 
int PinA3 = 10; 
int PinA4 = 11; 
int _step = 0; 
int motorSpeed = 4000;
/*
 * MotorKnob
 *
 * A stepper motor follows the turns of a potentiometer
 * (or other sensor) on analog input 0.
 *
 * http://www.arduino.cc/en/Reference/Stepper
 * This example code is in the public domain.
 */

#include <Stepper.h>

// change this to the number of steps on your motor
#define STEPS 160

// create an instance of the stepper class, specifying
// the number of steps of the motor and the pins it's
// attached to
Stepper stepper(STEPS, PinA1, PinA2, PinA3,PinA4);

// the previous reading from the analog input
int previous = 0;

void setup()
{
  // set the speed of the motor to 30 RPMs
  stepper.setSpeed(200);
}

void loop()
{
  // get the sensor value
 stepper.step(320) ;
}

