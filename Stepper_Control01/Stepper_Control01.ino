// Random.pde
// -*- mode: C++ -*-
//
// Make a single stepper perform random changes in speed, position and acceleration
//
// Copyright (C) 2009 Mike McCauley
// $Id: Random.pde,v 1.1 2011/01/05 01:51:01 mikem Exp mikem $

#include <AccelStepper.h>
#define pinStep 8
#define pinDirection 9

// Define a stepper and the pins it will use
//AccelStepper stepper; // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5
AccelStepper mystepper(1, pinStep, pinDirection);
void setup()
{  
}

void loop()
{
    if (mystepper.distanceToGo() == 0)
    {
	// Random change to speed, position and acceleration
	// Make sure we dont get 0 speed or accelerations
	delay(1000);
	mystepper.moveTo(rand() % 200);
	mystepper.setMaxSpeed((rand() % 200) + 1);
	mystepper.setAcceleration((rand() % 200) + 1);
    }
    mystepper.run();
}
