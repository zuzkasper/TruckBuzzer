#include <LiquidCrystal.h>

LiquidCrystal lcd(7,8,9,10,11,12);

int buzzer = 4;//the pin of the active buzzer
int ignition_pin=2;//pin connected to ignition on fusebox

void setup()
{
  lcd.begin(16,2);
  lcd.print("switch is off");
  pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
  pinMode(ignition_pin,INPUT_PULLUP);//initialize the ignition pin as an input
}

void loop()
{
  /*if ignition is off then buzz in an annoying fashion*/
  if(digitalRead(ignition_pin)==LOW){
      lcd.clear();
      lcd.print("ERROR");
      lcd.setCursor(3,1);
      lcd.print("Switch is on");
      
      while(digitalRead(ignition_pin)==LOW){
        digitalWrite(buzzer,HIGH);
        delay(250);//wait for 1ms
        digitalWrite(buzzer,LOW);
        delay(50);//wait for 1ms
      }
      if(digitalRead(ignition_pin)==HIGH){
        lcd.clear();
        lcd.print("No error");
      }
  }
} 
