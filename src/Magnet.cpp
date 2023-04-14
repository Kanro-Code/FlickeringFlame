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
		next = (on) ? random(15, 55) : random(400, 1000);
		toggle();
	}
}

void Magnet::toggle()
{
	on = !on;
	digitalWrite(pin, on);
}
