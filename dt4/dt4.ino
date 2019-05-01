#include <Wire.h>

#include "rgb_lcd.h"


rgb_lcd lcd;


// constants won't change. They're used here to set pin numbers:

const int Choice1 = 4;     // the number of the pushbutton pin

const int Choice2 = 8;     // the number of the pushbutton pin


const int ledPin =  13; // the number of the LED pin


int choice1=0, choice2=0, choice3=0;


// variables will change:

int buttonState = 0;         // variable for reading the pushbutton status

int buttonState2 = 0; 


void setup() {

 // initialize the LED pin as an output:

 pinMode(ledPin, OUTPUT);

 

 // initialize the pushbutton pin as an input:

 pinMode(Choice1, INPUT);

 

pinMode(Choice1, INPUT);

pinMode(Choice2, INPUT);


 lcd.begin(16, 2);

 

 lcd.print("Abandoned House");

 

}


void loop() {

 // read the state of the pushbutton value:

 lcd.setCursor(0, 0);

 buttonState = digitalRead(Choice1);

 buttonState2 = digitalRead(Choice2);



 String story1[] = {"Abandoned House"
,"You arrive","The house is old","what do you do?","1:Enter the house","2:Leave"};

 

 String story2[] = {"You head inside"
 ,"You hear shuffling","1:Check sound","2:Check upstairs"};

 

 String story3[] = {"You head outside"
 ,"You hear a scream","1:Check scream","2:Check further along"};



 if(buttonState !=digitalRead(Choice1)
&& choice1==0)

 {

 for (int i=0; i<6; i++)

 {

     lcd.print(story1[i]); 

     Serial.print(story1[i]);  

     

 }

  Serial.print("\nButton 1 Pressed");

  buttonState=0;

  choice1 = 1;

  delay(1000);

 }


 if(buttonState2 != digitalRead(Choice2)
&& choice2==0)

 {

  for (int i=0; i<6; i++)

 { 

     lcd.print(story2[i]); 

     Serial.print(story2[i]); 


     //delay(500);

 }

     Serial.print("\nButton 2 Pressed");

     buttonState2=0;

     choice2 = 1;

     delay(1000);

 

 }


 if (buttonState !=digitalRead(Choice1)
&& choice3==0)

 {

  for (int i=0; i<6; i++)

   { 

     lcd.print(story3[i]); 

     Serial.print(story3[i]);  


     //delay(500);

   }

 Serial.print("\nButton 1 Pressed");
 

 buttonState=0;

 choice3 = 1;

 delay(1000);

 }



}
