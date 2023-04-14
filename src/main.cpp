#include <Arduino.h>
#include <Magnet.h>
#include <Led.h>

Magnet m = Magnet(3);
Led l = Led(4);

void setup()
{
	// put your setup code here, to run once:
}

void loop()
{
	m.check();
	l.check();
}