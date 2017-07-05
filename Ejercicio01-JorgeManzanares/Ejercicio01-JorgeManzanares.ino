#define PIN_LED_1 4
#define PIN_LED_2 5 //PWM
#define PIN_LED_3 6 //PWM
#define PIN_LED_4 7
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  pinMode(PIN_LED_4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


  digitalWrite( PIN_LED_1, HIGH);
  digitalWrite( PIN_LED_2, HIGH);
  digitalWrite( PIN_LED_3, HIGH);
  digitalWrite( PIN_LED_4, HIGH);
  delay(1000);
  digitalWrite( PIN_LED_1, LOW);
  digitalWrite( PIN_LED_2, LOW);
  digitalWrite( PIN_LED_3, LOW);
  digitalWrite( PIN_LED_4, LOW);
  delay(1000);

}

