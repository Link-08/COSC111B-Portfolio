void setup() {
  for (int pin = 8; pin <= 12; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  for (int pin = 12; pin >= 8; pin--) {
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
  }
  for (int pin = 8; pin <= 12; pin++) {
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
  }
}