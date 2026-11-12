#include <Arduino.h>

constexpr uint32_t BLINK_DELAY_MS = 500;
// GPIO16 is used as the test output.
// Connect an LED in series with a 220-1k ohm resistor.
constexpr uint8_t LED_PIN = 16;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_DELAY_MS);

  digitalWrite(LED_PIN, LOW);
  delay(BLINK_DELAY_MS);
}
