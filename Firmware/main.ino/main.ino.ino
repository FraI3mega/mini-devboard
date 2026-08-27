#include <TouchKey.h>

#define LED_1 11
#define LED_2 14



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  TouchKey_begin((1 << 5));  //Enable TIN5(P1.7)
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_1, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                // wait for a second
  digitalWrite(LED_1, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                // wait for a second
  TouchKey_Process();
  uint8_t touchResult = TouchKey_Get();
  if (touchResult) {
    digitalWrite(LED_2, HIGH);
  } else {
    digitalWrite(LED_2, LOW);
  }
}
