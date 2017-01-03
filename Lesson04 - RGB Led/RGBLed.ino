/*
  RGB Led

  source - https://github.com/rgroszewski/arduino-tutorials/blob/master/Lesson04%20-%20RGB%20Led/RGBLed.ino
 */

#define RED_PIN   3
#define GREEN_PIN 5
#define BLUE_PIN  6
#define DELAY     10

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  analogWrite(RED_PIN, 255);
  analogWrite(GREEN_PIN, 0);
  analogWrite(BLUE_PIN, 0);
}

void loop() {
  for (int i=0; i<255; i++) {
    analogWrite(RED_PIN, 255-i);
    analogWrite(GREEN_PIN, i);
    delay(DELAY);
  }
  
  for (int i=0; i<255; i++) {
    analogWrite(GREEN_PIN, 255-i);
    analogWrite(BLUE_PIN, i);
    delay(DELAY);
  }
  
  for (int i=0; i<255; i++) {
    analogWrite(BLUE_PIN, 255-i);
    analogWrite(RED_PIN, i);
    delay(DELAY);
  }
}