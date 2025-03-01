
#include <I2C_RTC.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); 
static DS1307 RTC;

void setup() {

  lcd.init();                      
  lcd.init();
  lcd.clear();

  RTC.begin();
  Serial.begin(115200);
   
   //RTC.setDay(WEDNESDAY);
   //RTC.setDate(26,2,2025);
   //RTC.setTime(16,27,35);
}

void loop() {

	Serial.print(RTC.getDay());
	Serial.print("-");
	Serial.print(RTC.getMonth());
	Serial.print("-");
	Serial.print(RTC.getYear());

	Serial.println(" ");

  
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Date");
   lcd.setCursor(4,0);
   lcd.print("=");

  lcd.backlight();
  lcd.setCursor(5,0);
  lcd.print(RTC.getDay());
   lcd.setCursor(7,0);
   lcd.print("-");

    lcd.backlight();
   lcd.setCursor(8,0);
   lcd.print(RTC.getMonth());
   lcd.setCursor(10,0);
   lcd.print("-");

     lcd.backlight();
   lcd.setCursor(11,0);
   lcd.print(RTC.getYear());
   

    
   
  

	Serial.print(RTC.getHours());
	Serial.print(":");
	Serial.print(RTC.getMinutes());
	Serial.print(":");
	Serial.print(RTC.getSeconds());
	Serial.println(" ");



  lcd.backlight();
  lcd.setCursor(0,4);
  lcd.print("Time");
   lcd.setCursor(4,4);
   lcd.print("=");


   lcd.backlight();
  lcd.setCursor(5,4);
  lcd.print(RTC.getHours());
   lcd.setCursor(7,4);
   lcd.print(":");

    lcd.cursor_on();
   lcd.setCursor(8,4);
   lcd.print(RTC.getMinutes());
   lcd.setCursor(10,4);
   lcd.print(":");

     lcd.backlight();
   lcd.setCursor(11,4);
   lcd.print(RTC.getMinutes());

    
   

delay(1000);
}
