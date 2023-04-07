#include <Arduino.h>
uint8_t LED = 0;
uint8_t LED2 = 3;
uint8_t counter = 0;

void setup() {
  // put your setup code here, to run once:
	pinMode(LED, OUTPUT);
	pinMode(LED2, OUTPUT);
}

void loop() {
	digitalWrite(LED, HIGH);
	delay(5);
	digitalWrite(LED, LOW);
	delay(5);
	counter++;
	int8_t noise = random(-10,10);
	analogWrite(LED2, counter + noise);
	if (counter > 245) {
		counter = 0;
	}
  // put your main code here, to run repeatedly:
}