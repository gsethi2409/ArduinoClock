//GUNJAN SETHI, 2017

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() 
{
  Serial.begin(9600);
    // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  
}

int h=0,m=0,s=0;

void loop() 
{ 
  if(s>59)
  {
    m=m+1;
    s=0;
  }
  if(m>59)
  {
    h=h+1;
    m=0;
  }
  if(h>11)
  {
    h=0;
    m=0;
    s=0;
  }
  delay(1000);
  s++;

  lcd.setCursor(7, 1); 
  lcd.print(h);lcd.print(":");
  lcd.print(m);lcd.print(":");
  lcd.print(s);

  Serial.print(h);Serial.print(":");
  Serial.print(m);Serial.print(":");
  Serial.print(s);Serial.print("\n");
}
