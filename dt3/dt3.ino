

#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

// constants won't change. They're used here to set pin numbers:
const int Choice1 = 4;     // the number of the pushbutton pin
const int Choice2 = 8;     // the number of the pushbutton pin

const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int buttonState2 = 0; 

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


  String story1[] = {"Abandoned House" ,"You arrive","The house is old","what do you do?","1:Enter the house","2:Leave"};
  
  String story2[] = {"You head inside","You hear sounds","1:Check sound","2:Check upstairs"};
  
  String story3[] = {"Sounds get louder","From the kicthen","what now?","1:Investigate","2:Explore more"};

  
  for (int i=0; i<6; i++)
  {
    if (buttonState != digitalRead(Choice1));
    {
      lcd.print(story1[i]  );     
      delay(2000);
      lcd.clear(); 
      buttonState = digitalRead(Choice1);
    
      
     lcd.print(story2[i]) ;      
      delay(2000);
      lcd.clear(); 
      
      lcd.print(story3[i] );      
      delay(2000);
      lcd.clear(); 
    }
  }

  
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // Loop through 2nd story
    
  }
  else if(buttonState2 == HIGH){
    // Loop through 3rd story
    
  }
}
