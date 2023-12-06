int mla = 10;
int mlb = 9;
int m2a = 12;
int m2b = 11;
char val;
void setup() {
  pinMode(mla, OUTPUT);
  pinMode(mlb, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  while (Serial.available() > 0)
  {
    val = Serial.read();
    Serial.println(val);
  }
  if( val == 'F')
  {
    digitalWrite(mla, HIGH);
    digitalWrite(mlb, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
  }
  else if( val == 'B')
  {
    digitalWrite(mla, LOW);
    digitalWrite(mlb, HIGH);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, HIGH);
  }

  else if( val == 'R')
  {
    digitalWrite(mla, LOW);
    digitalWrite(mlb, LOW);
    digitalWrite(m2a, HIGH);
    digitalWrite(m2b, LOW);
  }

  else if( val == 'L')
  {
    digitalWrite(mla, HIGH);
    digitalWrite(mlb, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
  }

  else if( val == 'S')
  {
    digitalWrite(mla, LOW);
    digitalWrite(mlb, LOW);
    digitalWrite(m2a, LOW);
    digitalWrite(m2b, LOW);
  }

}
