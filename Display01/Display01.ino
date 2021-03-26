// =======lcd 
// SDA- A4
// SCL- A5
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE );

void setup()
{
lcd.begin(16,2);               // initialize the lcd 
InitialisingDisplay();
}
void loop()
{
//============================================================
lcd.setCursor(5,0);
lcd.print ("System");
lcd.setCursor(3,1);
lcd.print ("Monitoring");
delay(100);
///==========End of Display==================================










}
void InitialisingDisplay()
{
//============================Display=========================
lcd.setCursor(0,0);
lcd.print (" lighting System");
delay(2000);
lcd.clear();

lcd.setCursor(0,0);
lcd.print (" Initialising");
delay(1000);
//
lcd.setCursor(0,1);
lcd.print (" System.");
delay(2000);
lcd.setCursor(8,1);
lcd.print (".");
delay(1000);
lcd.setCursor(9,1);
lcd.print (".");
delay(1000);
lcd.setCursor(10,1);
lcd.print (".");
delay(1000);
lcd.setCursor(11,1);
lcd.print (".");
delay(1000);
lcd.setCursor(12,1);
lcd.print (".");
delay(1000);
lcd.setCursor(13,1);
lcd.print (".");
delay(3000);
lcd.clear();
//============================================================

}
