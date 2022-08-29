#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_F2);
  Keyboard.releaseAll();
}

void loop() {
  // put your main code here, to run repeatedly:
}
