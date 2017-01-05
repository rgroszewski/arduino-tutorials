/*
  Blink

  source - https://github.com/rgroszewski/arduino-tutorials/blob/master/Lesson02%20-%20Blink/Blink.ino
 */

#define LED_PIN  13
#define ON_TIME  1000
#define OFF_TIME 1000

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // turn on
  delay(ON_TIME);
  digitalWrite(LED_PIN, LOW);    // turn off
  delay(OFF_TIME);
}
