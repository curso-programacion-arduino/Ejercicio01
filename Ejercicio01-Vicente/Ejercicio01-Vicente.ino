//Ejercicio01 - Enrique
#define PIN_LED_1 4
#define PIN_LED_2 5 //PWM
#define PIN_LED_3 6 //PWM
#define PIN_LED_4 7

void setup() {

  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(PIN_LED_1, OUTPUT);
  pinMode(PIN_LED_2, OUTPUT);
  pinMode(PIN_LED_3, OUTPUT);
  pinMode(PIN_LED_4, OUTPUT);
}

void loop() {
  
  digitalWrite(PIN_LED_4, HIGH);
  Serial.println("ON");
  delay(500);
  digitalWrite(PIN_LED_4, LOW);
  Serial.println("OFF");
  delay(500);
}
