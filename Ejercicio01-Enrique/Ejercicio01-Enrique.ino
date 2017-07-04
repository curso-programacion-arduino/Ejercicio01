#define PIN_LED_1 4
#define PIN_LED_2 5 //PWM
#define PIN_LED_3 6 //PWM
#define PIN_LED_4 7

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  pinMode(PIN_LED_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = PIN_LED_1; i <= PIN_LED_4; i++) {
    digitalWrite(i, HIGH);
  }
  delay(1000);
  for (int i = PIN_LED_1; i <= PIN_LED_4; i++) {
    digitalWrite(i, LOW);
  }
  delay(1000);
}
