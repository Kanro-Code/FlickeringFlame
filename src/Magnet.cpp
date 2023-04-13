#include "Arduino.h"
#include "Magnet.h"

// Constructor
Magnet::Magnet(uint8_t pin)
{
	m_pin = pin;
	pinMode(m_pin, OUTPUT);
}

void Magnet::check()
{
	if (m_next < millis())
	{
		toggle();
		if (m_on)
		{
			m_next = millis() + random(15, 35);
		}
		else
		{
			m_next = millis() + random(400, 1000);
		}
	}
}

void Magnet::toggle()
{
	m_on = !m_on;
	digitalWrite(m_pin, m_on);
}
