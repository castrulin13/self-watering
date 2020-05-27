#define sensor A0 //pin to which the sensor is connected
//------------------Libraries-------------------
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);

void setup() {
  pinMode(13, OUTPUT);
  lcd.init();
  lcd.backlight();
}

void loop() {
  int sensor = analogRead(sensor);
  lcd.setCursor(0,0);
  lcd.print("H");
  lcd.setCursor(3,0);
  lcd.print(sensor);
  if (sensor > 200){
    digitalWrite(13, HIGH);
    }
  else{
    digitalWrite(13, LOW);
    }
}
