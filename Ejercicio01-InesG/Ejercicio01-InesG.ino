
#define PIN_LED_1 4
#define PIN_LED_2 5 //PWM
#define PIN_LED_3 6 //PWM
#define PIN_LED_4 7

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED_4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED_4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(PIN_LED_4, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
