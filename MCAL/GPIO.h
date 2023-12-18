/* 
* GPIO.h
*
* Created: 10/19/2023 4:01:27 AM
* Author: ElFallal
*/


#ifndef __GPIO_H__
#define __GPIO_H__
#include <limits.h>
#include "reg_definitions.h"

namespace mcal{
namespace GPIO{
	
	enum class pinType{INPUT_NOPULL,INPUT_PULLUP,OUTPUT_LOW,OUTPUT_HIGH};
		
	template <addrType BaseAddress>
	class GPIO_PORT {
		public:
			static constexpr addrType PORT_Addr = BaseAddress + 2;
			static constexpr addrType DDR_Addr = BaseAddress + 1;
			static constexpr addrType PIN_Addr = BaseAddress;
			using PORT = reg_access<addrType,regType,PORT_Addr>;
			using PIN = reg_access<addrType,regType,PIN_Addr>;
			using DDR = reg_access<addrType,regType,DDR_Addr>;
		static regType readInPort() { return PIN::read(); }
		static regType readOutPort() { return PORT::read(); }
		static void writePort(regType newVal) { PORT::write(newVal); }
	};
	
	template <typename gpio,const regType bitsMask,pinType conf>
	class GPIO_PIN{
		public:
			using PORT_bits = reg_access_bits<addrType,regType,gpio::PORT_Addr,bitsMask>;
			using DDR_bits = reg_access_bits<addrType,regType,gpio::DDR_Addr,bitsMask>;
			using PIN_bits = reg_access_bits<addrType,regType,gpio::PIN_Addr,bitsMask>;
			static void config() {
				switch (conf) {
					case pinType::INPUT_NOPULL:
					PORT_bits::clear();
					DDR_bits::set();
					break;
					case pinType::INPUT_PULLUP:
					DDR_bits::clear();
					PORT_bits::set();
					break;
					case pinType::OUTPUT_LOW:
					DDR_bits::set();
					PORT_bits::clear();
					break;
					case pinType::OUTPUT_HIGH:
					DDR_bits::set();
					PORT_bits::set();
					break;
					default:
					break;
				}
			}
			static void set() {PORT_bits::set();}
			static void clear() {PORT_bits::clear();}
			static void toggle() {PORT_bits::toggle();}
			static regType readIn()
			{
				return gpio::PIN::read() & bitsMask;
			}
			~GPIO_PIN(){ /* what to do ? */}
		};		
	
	const addrType GPIOA_BASEADDRESS = 0x39;
	const addrType GPIOB_BASEADDRESS = 0x36;
	const addrType GPIOC_BASEADDRESS = 0x33;
	const addrType GPIOD_BASEADDRESS = 0x30;
	using GPIOA = GPIO_PORT<UINT8_C(GPIOA_BASEADDRESS)>;
	using GPIOB = GPIO_PORT<UINT8_C(GPIOB_BASEADDRESS)>;
	using GPIOC = GPIO_PORT<UINT8_C(GPIOC_BASEADDRESS)>;
	using GPIOD = GPIO_PORT<UINT8_C(GPIOD_BASEADDRESS)>;
};
			};
#endif //__GPIO_H__
