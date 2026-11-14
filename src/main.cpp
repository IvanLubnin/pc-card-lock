#include <Arduino.h>
#include "USB.h"
#include "USBHIDKeyboard.h"

USBHIDKeyboard Keyboard;

constexpr uint32_t TEXT_INTERVAL_MS = 2000;

void setup() {
  Keyboard.begin();
  USB.begin();

  // Give the computer time to enumerate the HID keyboard.
  delay(3000);
}

void loop() {
  Keyboard.println("Test Text");
  delay(TEXT_INTERVAL_MS);
}
