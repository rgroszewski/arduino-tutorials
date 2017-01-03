/*
  Blink
 */

const int LED_PIN  = 13;
const int ON_TIME  = 1000;
const int OFF_TIME = 1000;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // turn on
  delay(ON_TIME);
  digitalWrite(LED_PIN, LOW);    // turn off
  delay(OFF_TIME);
}
