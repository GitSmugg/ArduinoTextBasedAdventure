#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int buttonPin = 7;     // the number of the pushbutton pin
const int ledPin =  2;      // the number of the LED pin
int buttonState = 0; 

void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);

lcd.print("Abandoned House");

lcd.print("You stumbled across old");
lcd.print("House in the forest its ere");
lcd.print("looking and unpleasant to look at");
lcd.print("The house looks even worse up-close looks like ");
lcd.print("it could collapse at any minute. You come face to face with ");
lcd.print("a rusty gate barely standing.");
lcd.print("looking and unpleasant to look at");
lcd.print("looking and unpleasant to look at");

delay(4000);

  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  
}

void loop() {
lcd.setCursor(0, 0);
  lcd.print("3");
  delay(1000);
  lcd.print(ant);
  }
  lcd.setCursor(0, 0);
  lcd.print("2");
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("1");
  }

    
}
