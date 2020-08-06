#include <IRremote.h>

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;

int samples [10];
#define on 5
#define go 3
void setup() {
  // put your setup code here, to run once:
pinMode(11, INPUT);
pinMode(5, OUTPUT);
pinMode(3, OUTPUT);
Serial.begin(9600);
irrecv.enableIRIn();
irrecv.blink13(true);
}

void loop() {

  if (irrecv.decode(&results)){    
        Serial.println(results.value, HEX);
        delay (100);
       
  long int decCode = results.value;

switch (results.value){
  case 16748655: //FAST
analogWrite(on, 255);
digitalWrite(go, HIGH);
analogWrite(on, 255);
Serial.println("FAST");

break;

  case 16769055:
  //SLOW
analogWrite(on, 127);
digitalWrite(go, HIGH);
analogWrite(on, 127);
Serial.println("SLOW");

break; 

case 16753245: //OFF
analogWrite(on, 0);
digitalWrite(go, LOW);
analogWrite(on, 0);
Serial.println("OFF");

break; 

case 16712445: //ON
analogWrite(on, 255);
digitalWrite(go, HIGH);
analogWrite(on, 255);
Serial.println("ON");
}
irrecv.resume();}
}
