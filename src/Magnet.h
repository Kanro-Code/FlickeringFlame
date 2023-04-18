#ifndef MAGNET_H
#define MAGNET_H

class Magnet
{
private:
	uint8_t pin;
	unsigned long prev;
	uint16_t next;
	bool on = false;

public:
	Magnet(uint8_t pin);
	void check();
	void toggle();
};

#endif
