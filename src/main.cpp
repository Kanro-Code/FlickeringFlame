#include <Arduino.h>
#include <Magnet.h>

Magnet m = Magnet(3);


void setup() {
  // put your setup code here, to run once:
}

void loop() {
	m.check();
}