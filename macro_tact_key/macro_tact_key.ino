#include <Keyboard.h>
#include <KeyboardLayout.h>

#include "Keyboard.h"


void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);


  Keyboard.begin();
}

void loop() {
  while (digitalRead(2) == LOW) {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');delay(100);
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.release('r');delay(100);
    Keyboard.println("vs2022");
  
  }
  while (digitalRead(3) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('k');delay(250);
    Keyboard.release('k');
    Keyboard.release(KEY_LEFT_CTRL);
    delay(250);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');delay(150);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('c');
  }
  while (digitalRead(4) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('k');delay(250);
    Keyboard.release('k');
    Keyboard.release(KEY_LEFT_CTRL);
    delay(250);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('u');delay(150);
    Keyboard.release(KEY_LEFT_CTRL);
    Keyboard.release('u');
  }
  while (digitalRead(5) == LOW) {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');delay(100);
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.release('r');delay(100);
    Keyboard.println("minecraft");
  }
  Keyboard.releaseAll();
}