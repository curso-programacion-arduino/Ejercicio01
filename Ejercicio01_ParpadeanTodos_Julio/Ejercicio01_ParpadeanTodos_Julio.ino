/*
  Blink
  Ejercicio 1 Los cuatro LED se parpadean

*/

void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}


void loop()
{
  digitalWrite(4, HIGH);
  delay(1000);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  delay(500);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  delay(500);
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(7, LOW);
  delay(1000);

}