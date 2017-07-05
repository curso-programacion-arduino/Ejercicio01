#define PIN_LED_4 7
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_LED_4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite( PIN_LED_4, HIGH);
  delay(1000);
  digitalWrite( PIN_LED_4, LOW);
  delay(1000);
}
