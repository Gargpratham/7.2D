// slave

char t;

void setup()
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);

  Serial.begin(9600);

}

void loop()
{

  if (Serial.available())
  {
    t = Serial.read();;
  }

  if (t == 'F') {          
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);

    Serial.println('f');
  }

  else if (t == 'B') {    
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);

       Serial.println('b');
  }

  else if (t == 'L') {
    Serial.println('l');
    digitalWrite(13, HIGH); 
  }

  else if (t == 'R') {    
    digitalWrite(11, HIGH);
    Serial.println('r');
  }

  else if (t == 'S') 
  {    //STOP (all motors stop)
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }

  delay(100);




}
