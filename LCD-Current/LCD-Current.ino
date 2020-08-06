#include <LiquidCrystal.h>
#include <DS3231.h>

#define LED 14

DS3231 rtc(SDA, SCL);
LiquidCrystal lcd(1,2,4,5,6,7);

void setup() {
  // put your setup code here, to run once:
 // Serial.begin(115200);
  rtc.begin();
  lcd.begin(16,2);
  pinMode(LED, OUTPUT);

  //Uncomment following lines to set up date and time
  //for the firrst time
  
  //rtc.setDOW(TUESDAY); //Set Day-Of-Week to Tuesday
  //rtc.setTime(22,06,45); //Set Time to 21:00:00 (24hr format)
  //rtc.setDate(11,06,2019); //Set Date to 11 July 2019
  
}

void loop() {
  // storing rtc values in variables
  String timeNow = rtc.getTimeStr();
  String dateNow = rtc.getDateStr();
  String dayNow = rtc.getDOWStr();
  int tempNow = rtc.getTemp();

  lcd.print(timeNow);   //print time
  lcd.setCursor(9,0);   //set cursor to the right of time bottom row
  lcd.print(dayNow);    //print Day
  lcd.setCursor(0,1);   
  lcd.print(dateNow);
  delay(1000);
  lcd.setCursor(0,0);
  
//  lcd.setCursor(1,1);

}
