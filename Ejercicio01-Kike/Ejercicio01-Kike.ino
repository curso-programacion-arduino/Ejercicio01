void setup() {
  // put your setup code here, to run once:
pinMode(3, INPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(3) == HIGH);{
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(500);
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, HIGH);
delay(500);
}
else (digitalRead(3) == LOW);{

digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
}
}
