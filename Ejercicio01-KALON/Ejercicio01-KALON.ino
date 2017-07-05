// Encender y apagar dos leds.....

int pin4 = 4;

void setup() {
  // Inicializo pin 4 como salida
  pinMode(pin4, OUTPUT);
}

// Esta funcion cambia continuamente en el tiemo
void loop() {
  digitalWrite(pin4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(pin4, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}
