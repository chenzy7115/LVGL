#include "Lvgl.h"

void setup() {
  Serial.begin(115200);

  Lvgl lvgl(128,64,0x3c);
  lvgl.text("Chenzy is good!",20,5);
  lvgl.button("YES");
  
}

void loop() {
  
}




