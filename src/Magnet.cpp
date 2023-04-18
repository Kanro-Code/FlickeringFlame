#include "Arduino.h"
#include "Magnet.h"

// Constructor
Magnet::Magnet(uint8_t _pin)
{
	pin = _pin;
	pinMode(pin, OUTPUT);
}

void Magnet::check()
{
	if (millis() - prev > next)
	{
		prev = millis();
		toggle();
		next = (on) ? random(15, 25) : random(300, 600);
	}
}

void Magnet::toggle()
{
	on = !on;
	digitalWrite(pin, on);
}
