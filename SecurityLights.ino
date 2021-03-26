//include libraries

#include <LiquidCrystal_I2C.h>
#include <Wire.h>

//declare variables
const int LDR = A0;
int inputVal = 0;
const int ledPin = 2;
const int relay =8;
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE );
 

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);//set LED pin as output
  pinMode(inputVal,INPUT);//set LDR pin as input
  pinMode(relay,OUTPUT);
 
 //display
  lcd.begin(16,2);               // initialize the lcd 
  InitialisingDisplay();
}

void loop()
{
  inputVal = analogRead(LDR); //read the value of the resistor
  if(inputVal>990){ //if its bright outside 
//     digitalWrite(ledPin,LOW);//keep light off
//     delay(500);
      digitalWrite(relay,LOW);
      delay(2000);}
    else{ //if there's little light
//       digitalWrite(ledPin,HIGH);//turn the light on
//       delay(500);
         digitalWrite(relay,HIGH);
         delay(2000);
    }
}
