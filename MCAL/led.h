/*
 * led.h
 *
 * Created: 10/19/2023 4:15:31 AM
 *  Author: ElFallal
 */ 


#ifndef LED_H_
#define LED_H_
#include "GPIO.h"

class led_base
{
	private:
	protected:
	bool is_on;
	public:
	led_base() {}
	virtual void On() = 0;
	virtual void Off() = 0;
	virtual void toggle() = 0;
	virtual ~led_base();
	
};
template<typename gpio,mcal::pinNum pin>
class ledPort : public led_base
{
		public:
		ledPort() {
			gpio::pinConfig(pin,mcal::pinType::OUTPUT_LOW);
			is_on = false;
		}
		virtual void On(){gpio::writePin(pin,true); is_on = true;}
		virtual void Off(){gpio::writePin(pin,false); is_on = false;}
		virtual void toggle(){gpio::togglePin(pin); is_on = !is_on;}
};



#endif /* LED_H_ */