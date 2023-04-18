#include <Arduino.h>
#include <Magnet.h>
#include <Led.h>

Magnet m = Magnet(3);
Led l = Led(4);

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	m.check();
	l.check();
}
