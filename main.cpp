/*
 * Drivers.cpp
 *
 * Created: 7/26/2023 7:10:11 PM
 * Author : ElFallal
 */
#define F_CPU 1000000
#include <util/delay.h>
#include "MCAL/GPIO.h"



int main(void) {
  /* Replace with your application code */
	using x = mcal::GPIO::GPIO_PIN<mcal::GPIO::GPIOA,mcal::bits::bit0,mcal::GPIO::pinType::OUTPUT_HIGH>;
	using y = mcal::GPIO::GPIO_PIN<mcal::GPIO::GPIOA,mcal::bits::bit1,mcal::GPIO::pinType::INPUT_PULLUP>;
	x::config();
	y::config();
  while (1) {

	if(y::readIn())
	{
		x::set();
	}
	else{
		x::clear();
	}
  }
}
