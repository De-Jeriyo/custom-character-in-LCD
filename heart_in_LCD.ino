#include<LiquidCrystal.h>

byte leftwingup[8] = {
  B00000,
  B00000,
  B00001,
  B00011,
  B00111,
  B01111,
  B01111,
  B00111,
};
byte leftwingdown[8] = {
  B00011,
  B00001,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};
byte leftbodyup[8] = {
  B00000,
  B00000,
  B11100,
  B11110,
  B11111,
  B11111,
  B11111,
  B11111,
};
byte leftbodydown[8] = {
  B11111,
  B11111,
  B11111,
  B01111,
  B00111,
  B00011,
  B00001,
  B00000,
};
byte rightbodyup[8] = {
  B00000,
  B00000,
  B00111,
  B01111,
  B11111,
  B11111,
  B11111,
  B11111,
};
byte rightbodydown[8] = {
  B11111,
  B11111,
  B11111,
  B11110,
  B11100,
  B11000,
  B10000,
  B00000,
};
byte rightwingup[8] = {
  B00000,
  B00000,
  B10000,
  B11000,
  B11100,
  B11110,
  B11110,
  B11100,
};
byte rightwingdown[8] = {
  B11000,
  B10000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};
LiquidCrystal lcd(7,8,9,10,11,12);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.createChar(0, leftwingup);
lcd.createChar(1, leftwingdown);
lcd.createChar(2, leftbodyup);
lcd.createChar(3, leftbodydown);
lcd.createChar(4, rightbodyup);
lcd.createChar(5, rightbodydown);
lcd.createChar(6, rightwingup);
lcd.createChar(7, rightwingdown);
}

void loop() {
  // put your main code here, to run repeatedly:
  heart();
}

void heart(){
  for(int i=0;i<=3;i++){
    for(int j=0;j<=1;j++){
      lcd.setCursor(i+6,j);
      lcd.write(i*2+j);
    }
  }
  delay(500);
  lcd.clear();
  delay(500);
}