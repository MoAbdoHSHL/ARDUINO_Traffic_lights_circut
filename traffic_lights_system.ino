void setup()
{
  pinMode(12, OUTPUT); // Red
  pinMode(10, OUTPUT); // Yellow
  pinMode(8, OUTPUT);  // Green
}
void loop(){
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  delay(20000);
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  delay(5000);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(20000);
  digitalWrite(12, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  delay(5000);}
//By: MOHAMED ABDO
