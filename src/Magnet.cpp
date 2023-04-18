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
		next = (on) ? random(3, 7) : random(100, 300);
	}
}

void Magnet::toggle()
{
	on = !on;
	digitalWrite(pin, on);
}
