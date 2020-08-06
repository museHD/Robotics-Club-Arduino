#include <IRremote.h>

const int IRpin = 7;
IRrecv irrecv(IRpin);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
  

}

void loop() {
  
  if (irrecv.decode(&results)){
    delay(100);
    irrecv.resume();
    //Serial.println(results.value, HEX);
    //Serial.println(results.value);


    if (results.value == 16712445 || results.value == 3622325019){
      Serial.println("Play/Pause");
      delay(200);
    }
    if (results.value == 16736925 || results.value == 5316027)
    {
      Serial.println("Vol+");
      delay(200);
    }
    if (results.value == 16754775 || results.value == 2747854299)
    {
      Serial.println("Vol-");
      delay(200);
    }    
  }
}
