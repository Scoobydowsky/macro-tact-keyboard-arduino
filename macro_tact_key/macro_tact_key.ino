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
  //on tact switch pushed run Autodesk Eagle check github wiki for more info
  while (digitalRead(2) == LOW) {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');delay(100);
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.release('r');delay(100);
    Keyboard.println("eagle");
  
  }
  //on tact switch pushed press keys ctr+alt+delete
  while (digitalRead(3) == LOW) {
    Keyboard.press(KEY_LEFT_CTRL); 
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_DELETE);delay(100);
    Keyboard.release(KEY_LEFT_CTRL); 
    Keyboard.release(KEY_LEFT_ALT);
    Keyboard.release(KEY_DELETE);delay(100);
  }


  }
  Keyboard.releaseAll();
}
