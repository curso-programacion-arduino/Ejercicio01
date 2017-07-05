#define PIN_LED_1 4
#define PIN_LED_2 5
#define PIN_LED_3 6
#define PIN_LED_4 7

void setup() {
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  pinMode(PIN_LED_4, OUTPUT);
}

void loop() {
  digitalWrite(PIN_LED_1, HIGH);
  digitalWrite(PIN_LED_2, LOW);
  digitalWrite(PIN_LED_3, LOW);
  digitalWrite(PIN_LED_4, LOW);
  delay(200);

  digitalWrite(PIN_LED_1, LOW);
  digitalWrite(PIN_LED_2, HIGH);
  digitalWrite(PIN_LED_3, LOW);
  digitalWrite(PIN_LED_4, LOW);
  delay(200);

  digitalWrite(PIN_LED_1, LOW);
  digitalWrite(PIN_LED_2, LOW);
  digitalWrite(PIN_LED_3, HIGH);
  digitalWrite(PIN_LED_4, LOW);
  delay(200);

  digitalWrite(PIN_LED_1, LOW);
  digitalWrite(PIN_LED_2, LOW);
  digitalWrite(PIN_LED_3, LOW);
  digitalWrite(PIN_LED_4, HIGH);
  delay(200);

    digitalWrite(PIN_LED_1, LOW);
  digitalWrite(PIN_LED_2, LOW);
  digitalWrite(PIN_LED_3, HIGH);
  digitalWrite(PIN_LED_4, LOW);
  delay(200);

  digitalWrite(PIN_LED_1, LOW);
  digitalWrite(PIN_LED_2, HIGH);
  digitalWrite(PIN_LED_3, LOW);
  digitalWrite(PIN_LED_4, LOW);
  delay(200);

  digitalWrite(PIN_LED_1, HIGH);
  digitalWrite(PIN_LED_2, LOW);
  digitalWrite(PIN_LED_3, LOW);
  digitalWrite(PIN_LED_4, LOW);
  delay(200);

}
