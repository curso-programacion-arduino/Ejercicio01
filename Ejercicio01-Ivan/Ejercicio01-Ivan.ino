//Ejercicio Iván

#define PIN_LED 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED, 1);
  delay(1000);
  digitalWrite(PIN_LED, 0);
}
