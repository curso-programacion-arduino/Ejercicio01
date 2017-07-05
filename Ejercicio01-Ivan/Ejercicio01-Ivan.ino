//Ejercicio Iván

#define PIN_LED_1 4
#define PIN_LED_2 5
#define PIN_LED_3 6
#define PIN_LED_4 7


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = PIN_LED_1; i <= PIN_LED_4; i++) {
    pinMode(i, OUTPUT);
  }


}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = PIN_LED_1; i <= PIN_LED_4; i++) {
    digitalWrite(i, 1);
    delay(100);
  }
  delay(100);
  for (int i = PIN_LED_4; i >= PIN_LED_1; i--) {
    digitalWrite(i, 0);
    delay(100);
  }
  delay(100);
}
