// C++ 
//By Mohamed Abdo
void setup()
{
  pinMode(12, OUTPUT); // Red LED
  pinMode(10, OUTPUT); // Yellow LED
  pinMode(8, OUTPUT);  // Green LED
}

void loop()
{
  // Red on, others off
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(3000); // Wait for 3000 milliseconds (3 seconds)

  // Yellow on, others off
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  delay(350); 

  // Yellow light blinking pattern (3 times)
  for (int i = 0; i < 3; i++) {
    digitalWrite(10, HIGH);
    delay(500); 
    digitalWrite(10, LOW);
    delay(500); 
  }

  // Green on, others off
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(3000); 

  // Reset all lights before restarting the loop
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  
  
  // Yellow light blinking pattern (3 times)
  for (int i = 0; i < 3; i++) {
    digitalWrite(10, HIGH);
    delay(500); 
    digitalWrite(10, LOW);
    delay(500); 
  }
}
//By Mohamed Abdo
