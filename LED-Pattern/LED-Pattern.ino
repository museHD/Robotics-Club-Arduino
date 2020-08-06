void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
pinMode (5, INPUT);
pinMode (8, OUTPUT);
pinMode (9, OUTPUT);
pinMode (10, OUTPUT);
pinMode (11, OUTPUT);
pinMode (12, OUTPUT);
pinMode (13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int x = analogRead (5);
{
  int x = analogRead (5);
  digitalWrite (i, HIGH);
  delay (x);
  digitalWrite (i, LOW);
  Serial.println (x);

}
