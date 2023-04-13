#ifndef MAGNET_H
#define MAGNET_H

class Magnet
{
	private:
		uint8_t m_pin;
		bool m_on = false;
		unsigned long m_next;
	public:
		Magnet(uint8_t pin);
		void check();
		void toggle();
};

#endif
// {
// public:
// 	Magnet(uint8_t _pin)
// 	{
// 		pin = _pin;
// 		pinMode(pin, OUTPUT);
// 	}
// 	void Run();

// private:
// 	bool magnetOn = false;
// 	unsigned long magnetNext = 0;
// 	uint8_t pin;
// };

// uint8_t LED = DD6;
// Magnet a(DD5);

// // unsigned long magnetNext = 0;
// // bool magnetOn = false;

// void Magnet::Run()
// {
// 	if (magnetNext < millis())
// 	{
// 		digitalWrite(pin, !magnetOn);
// 		magnetOn = !magnetOn;

// 		if (magnetOn)
// 		{
// 			// Short movement when magnet is on
// 			magnetNext = millis() + random(15, 35);
// 		}
// 		else
// 		{
// 			// Longer delay when magnet is off
// 			magnetNext = millis() + random(400, 1000);
// 		}
// 	}
// };