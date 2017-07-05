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

  for (int i=PIN_LED_1;i<PIN_LED_4;i++){
    digitalWrite(i, HIGH);   
    delay(100);
    digitalWrite(i, LOW);
    delay(100);  
  }

  for (int i=PIN_LED_4;i>=PIN_LED_1;i--){
    digitalWrite(i, HIGH);   
    delay(100);
    digitalWrite(i, LOW);
    delay(100);  
  }

  delay(100);



  
}
