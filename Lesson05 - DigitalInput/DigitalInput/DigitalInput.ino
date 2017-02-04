/*
  Digital Input

  source
 */

#define redLedPin 5
#define onButtonPin 9
#define offButtonPin 8

void setup() {
  pinMode(redLedPin,OUTPUT);
  pinMode(onButtonPin,INPUT_PULLUP);
  pinMode(offButtonPin,INPUT_PULLUP);
  digitalWrite(redLedPin,HIGH);
  delay(1000);
  digitalWrite(redLedPin,LOW);
}

void loop() {
  if (digitalRead(onButtonPin) == LOW)
  {
    digitalWrite(redLedPin,HIGH);
  }
  if (digitalRead(offButtonPin) == LOW)
  {
    digitalWrite(redLedPin,LOW);
  }
}

