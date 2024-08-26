// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(500000); // Wait for 500000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(500); // Wait for 500 millisecond(s)
}