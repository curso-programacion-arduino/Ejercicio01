void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.println(4,HIGH);
    delay(500);
    Serial.println(4,LOW);
    delay(500);
  }