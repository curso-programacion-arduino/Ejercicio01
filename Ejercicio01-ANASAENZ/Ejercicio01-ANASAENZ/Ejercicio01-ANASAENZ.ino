void setup() {
  pinMode(4, OUTPUT); // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
void loop() {
  digitalWrite(4, HIGH); // put your main code here, to run repeatedly:
  delay(500);
  digitalWrite(4, LOW);
  delay(500);
  digitalWrite(5, HIGH); 
  delay(500);
  digitalWrite(5, LOW);
  delay(500);
  digitalWrite(6, HIGH); 
  delay(500);
  digitalWrite(6, LOW);
  delay(500);
  digitalWrite(6, HIGH); 
  delay(500);
  digitalWrite(6, LOW);
  delay(500);
}
