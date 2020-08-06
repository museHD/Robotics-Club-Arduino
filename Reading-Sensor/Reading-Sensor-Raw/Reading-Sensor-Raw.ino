int val = 0;
int samples[10];
int smoothness = 10;
int i = 0;
int x = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(0, INPUT);
}

void loop() {
  /*// put your main code here, to run repeatedly:
int val = analogRead(0);
for (i=0; i<smoothness; i++){
  samples[i] = analogRead(0);
  delay(5);
}

float average = 0;
for (x=0; x<smoothness; x++){
  average = average + samples[x];
}
average /= smoothness;
Serial.println(average);

delay(5);*/
Serial.println(analogRead(0));
delay(10);
}
