#define PIN_LED_1 4

void setup() {
  // put your setup code here, to run once:
pinMode(PIN_LED_1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (PIN_LED_1, HIGH);
delay(500);
digitalWrite (PIN_LED_1, LOW);
delay(500);
}
