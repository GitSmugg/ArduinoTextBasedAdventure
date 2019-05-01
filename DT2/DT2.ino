/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/

#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

// constants won't change. They're used here to set pin numbers:
const int Choice1 = 3;     // the number of the pushbutton pin
const int Choice2 = 2;     // the number of the pushbutton pin

const int ledPin =  13;      // the number of the LED pin
int =i;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(Choice1, INPUT);
 pinMode(Choice2, INPUT);
  lcd.begin(16, 2);
  
  lcd.print("Abandoned House");
  
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(Choice1);
  buttonState2 = digitalRead(Choice2);

  String story1[] = {"Abandoned House", "You arrive", "The house is old","what do you do?", "1:Enter the house","2:Leave"};
  String story2[] = {"You head inside","You hear shuffling", "1:Check sound","2:Check upstairs"}

  
  for (int i=0; i<6; i++)
  {
      lcd.print(story1[i]);    
  }

  
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // Loop through 2nd story
    
  } else if(buttonState2 == HIGH){
    // Loop through 3rd story
  }
}​
