void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(2000); 
  digitalWrite(12, HIGH);
  delay(2000); 
  digitalWrite(8, HIGH);
  delay(2000); 
  digitalWrite(7, HIGH);
  delay(2000); 
  digitalWrite(4, HIGH);
  delay(2000); 
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  
}
