
int LED_PIN = 13;
const int ldrPin = A1;
const int pirPin = 2;
const int lightThreshold = 100;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(pirPin, INPUT);
}

void loop() {
  int ldr = analogRead(ldrPin);
  int pirState = digitalRead(pirPin);

  if (pirState == HIGH && ldr < lightThreshold) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
