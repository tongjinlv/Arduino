#include "Color.h"

void setup() {
  Serial.begin(115200);
  while (!Serial) {
    
  }
  airabout_test();
  airabout_test();
  blink_test();
  smartconfig_test();
}

void loop() {
  Color c;
  Serial.println(c.getRed());
  json_Test();
}
