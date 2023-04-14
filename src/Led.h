#ifndef LED_H
#define LED_H

class Led
{
private:
	uint8_t _pin;
	unsigned long _prev;
	uint16_t _next;
	int16_t _strength = 255;
	float _target = 255;
	uint8_t _goal_counter;

public:
	Led(uint8_t pin);
	void check();
	void run();
	void limit();
	void target();
};

#endif