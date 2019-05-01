#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const byte buttonPin = 4;
const byte buttonChoice = 8;

int buttonPushCounter = 0;   
boolean buttonState = LOW; 
boolean buttonState2 =LOW;        
boolean lastButtonState = LOW;  
boolean lastButtonState2 = LOW;    




void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  
  lcd.print("Abandoned House");
  
  pinMode(buttonPin, INPUT);
  pinMode(buttonChoice, INPUT);
 
}


void loop()
{
  
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(buttonChoice);
  
  if (buttonState != lastButtonState)
  {
    if (buttonState == HIGH)
    {
      
      
      buttonPushCounter++;  
      lcd.clear(); 
      if (buttonPushCounter > 22) 
                                 
      {
        buttonPushCounter = 1;
      }
      Serial.println(buttonPushCounter);
      switch (buttonPushCounter) 
      {
        case 0:
          lcd.print("Abandoned House"); 
          break;
        case 1:
          lcd.print("You arrive");
          break;
        case 2:
          lcd.print("The house is old");
          break;
        case 3:
          lcd.print("what do you do?");
          break;
         case 4:
          lcd.print("1:Enter house");
          break;
         case 5:
          
          lcd.print("2:Leave");
          
          
          
         if (buttonState2 == HIGH)
        {                     
            lcd.print("Trail goes cold");
            break;
        }
          
         case 6:
          lcd.print("You head inside");
          break;
         case 7:
          lcd.print("you hear a noise");
          break;
         case 8:
          lcd.print("1:Check sound");
          break;
         case 9:
          lcd.print("2:Check upstairs");
          break;
           case 10:
          lcd.print("Sounds get louder");
          break;
         case 11:
          lcd.print("From the kicthen");
          break;
           case 12:
          lcd.print("what now?");
          break;
         case 13:
          lcd.print("1:Investigate");
          break;
           case 14:
          lcd.print("2:Explore more");
          break;
         case 15:
          lcd.print("You see a shadow");
          break;
           case 16:
          lcd.print("You freeze");
          break;
         case 17:
          lcd.print("1:Chase after it");
          break;
           case 18:
          lcd.print("2:run away");
          break;
         case 19:
          lcd.print("Its your dog");
          break;
           case 20:
          lcd.print("You sigh with relief");
          break;
           case 21:
          lcd.print("You Leave");
          break;
         case 22:
          lcd.print("The End");
          break;
      }
    }
    
    lastButtonState = buttonState;
    lastButtonState2 = buttonState2;
    
  }
}
