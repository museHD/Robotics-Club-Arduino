........................

void setup() {
  // put your setup code here, to run once:
  Serial.begin (115200);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
  digitalWrite(4, LOW);
  digitalWrite (5, LOW);
  digitalWrite(12, LOW);
  digitalWrite(14,LOW);
  //PIN 4 is MotorLeft Backward
  //PIN 5 is MotorLeft Forward
  //PIN 12 is MotorRight Forward
  //Pin 14 is MotorRight Backward
  /* 
   *      ___
   *  5 C|   |D 12    /\
   *     |car|        ||
   *     |   |        ||
   *  4 C --- D 14     \/
   *   
    */
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() >0)
  {
    char instruction = Serial.read();
    if (instruction == 'b')
    {
      digitalWrite (5, LOW);
      digitalWrite (12, LOW);
      digitalWrite (4, HIGH);
      digitalWrite (14, HIGH);
      Serial.println("Going Back");
    }
    else if (instruction == 'f')
    {
      digitalWrite (4, LOW);
      digitalWrite (14, LOW);
      digitalWrite (5, HIGH);
      digitalWrite (12, HIGH);
      Serial.println("Going Forward");
    }
    else if (instruction == 'r')
    {
      digitalWrite (4, LOW);
      digitalWrite (14, LOW);
      digitalWrite (12, LOW);
      digitalWrite (5, HIGH);
      Serial.println ("right");
    }
    else if (instruction == 'l')
    {
      digitalWrite (5, LOW);
      digitalWrite (4, LOW);
      digitalWrite (14, LOW);
      digitalWrite (12, HIGH);
      Serial.println ("left");
    }
    else if (instruction == 'c')
    {
      digitalWrite (4, LOW);
      digitalWrite (12, LOW);
      digitalWrite (5, HIGH);
      digitalWrite (14, HIGH);
      Serial.println ("Rotating Clockwise");
      
    }
    else if (instruction == 'g')
    {
      digitalWrite (5, LOW);
      digitalWrite (14, LOW);
      digitalWrite (4, HIGH);
      digitalWrite (12, HIGH);
      Serial.println ("Rotating Counter-Clockwise");
    }
    else {
      digitalWrite (5, LOW);
      digitalWrite (14, LOW);
      digitalWrite (4, LOW);
      digitalWrite (12, LOW);
    }
    }
  }
