//Prateek
//https://justdoelectronics.com
//https://www.youtube.com/c/JustDoElectronics/videos

#include <LiquidCrystal.h>
uint8_t count = 0;
uint16_t value = 0;
bool state = true;
const int rs = 12, en = 11, d4 = 10, d5 = 9, d6 = 8, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  lcd.print(F("Pratik Singh"));
  //  delay(1000);
  lcd.clear();
  lcd.print(F("Count:"));
}

void loop() {
  lcd.setCursor(0, 1);
  value = analogRead(A0);
  if (value < 1000 && state) {
    count++;
    state = false;
  } else {
    state = true;
  }
  lcd.print(count);
  delay(100);
}

