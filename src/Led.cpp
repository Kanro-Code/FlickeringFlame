#include "Arduino.h"
#include "Led.h"

Led::Led(uint8_t pin)
{
	_pin = pin;
	pinMode(_pin, OUTPUT);
};

void Led::check()
{
	if (millis() - _prev > _next)
	{
		_prev = millis();
		_next = random(20, 40);
		run();
	}
};

void Led::run()
{
	int8_t noise = random(-8, 8);
	int8_t frac = (_target - _strength) * 0.1;
	_strength = _strength + noise + frac;

	target();
	limit();
	analogWrite(_pin, _strength);
};

void Led::limit()
{
	if (_strength > 255)
		_strength = 255;
	if (_strength < 0)
		_strength = 0;
};

void Led::target()
{
	_goal_counter++;
	if (_goal_counter > 10)
	{
		_goal_counter = 0;
		_target = random(150, 255);
	}
}