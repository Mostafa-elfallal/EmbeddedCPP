/*
 * reg_definitions.h
 *
 * Created: 12/18/2023 6:26:18 PM
 *  Author: ElFallal
 */ 


#ifndef REG_DEFINITIONS_H_
#define REG_DEFINITIONS_H_

#include "../Generics/reg.h"
#include "stdint.h"
namespace mcal
{
	using addrType = uint8_t;
	using regType = uint8_t;
	constexpr regType regClearVal = 0x00;
	constexpr regType regSetVal = 0xFF;
	namespace regAddr
	{
		const addrType SREG_addr = 0x5F;
		const addrType SPH_addr = 0x5E;
		const addrType SPL_addr = 0x5D;
		const addrType OCR0_addr = 0x5C;
		const addrType GICR_addr = 0x5B;
		const addrType GIFR_addr = 0x5A;
		const addrType TIMSK_addr = 0x59;
		const addrType TIFR_addr = 0x58;
		const addrType SPMCR_addr = 0x57;
		const addrType TWCR_addr = 0x56;
		const addrType MCUCR_addr = 0x55;
		const addrType MCUCSR_addr = 0x54;
		const addrType TCCR0_addr = 0x53;
		const addrType TCNT0_addr = 0x52;
		const addrType OSCCAL_addr = 0x51;
		const addrType OCDR_addr = 0x51;
		const addrType SFIOR_addr = 0x50;
		const addrType TCCR1A_addr = 0x4F;
		const addrType TCCR1B_addr = 0x4E;
		const addrType TCNT1H_addr = 0x4D;
		const addrType TCNT1L_addr = 0x4C;
		const addrType OCR1AH_addr = 0x4B;
		const addrType OCR1AL_addr = 0x4A;
		const addrType OCR1BH_addr = 0x49;
		const addrType OCR1BL_addr = 0x48;
		const addrType ICR1H_addr = 0x47;
		const addrType ICR1L_addr = 0x46;
		const addrType TCCR2_addr = 0x45;
		const addrType TCNT2_addr = 0x44;
		const addrType OCR2_addr = 0x43;
		const addrType ASSR_addr = 0x42;
		const addrType WDTCR_addr = 0x41;
		const addrType UBRRH_addr = 0x40;
		const addrType UCSRC_addr = 0x40;
		const addrType EEARH_addr = 0x3F;
		const addrType EEARL_addr = 0x3E;
		const addrType EEDR_addr = 0x3D;
		const addrType EECR_addr = 0x3C;
		const addrType PORTA_addr = 0x3B;
		const addrType DDRA_addr = 0x3A;
		const addrType PINA_addr = 0x39;
		const addrType PORTB_addr = 0x38;
		const addrType DDRB_addr = 0x37;
		const addrType PINB_addr = 0x36;
		const addrType PORTC_addr = 0x35;
		const addrType DDRC_addr = 0x34;
		const addrType PINC_addr = 0x33;
		const addrType PORTD_addr = 0x32;
		const addrType DDRD_addr = 0x31;
		const addrType PIND_addr = 0x30;
		const addrType SPDR_addr = 0x2F;
		const addrType SPSR_addr = 0x2E;
		const addrType SPCR_addr = 0x2D;
		const addrType UDR_addr = 0x2C;
		const addrType UCSRA_addr = 0x2B;
		const addrType UCSRB_addr = 0x2A;
		const addrType UBRRL_addr = 0x29;
		const addrType ACSR_addr = 0x28;
		const addrType ADMUX_addr = 0x27;
		const addrType ADCSRA_addr = 0x26;
		const addrType ADCH_addr = 0x25;
		const addrType ADCL_addr = 0x24;
		const addrType TWDR_addr = 0x23;
		const addrType TWAR_addr = 0x22;
		const addrType TWSR_addr = 0x21;
		const addrType TWBR_addr = 0x20;
	};
	namespace bits{
		const regType bit0 = (1<<0);
		const regType bit1 = (1<<1);
		const regType bit2 = (1<<2);
		const regType bit3 = (1<<3);
		const regType bit4 = (1<<4);
		const regType bit5 = (1<<5);
		const regType bit6 = (1<<6);
		const regType bit7 = (1<<7);
	};
	namespace reg{
		using SREG = reg_access<addrType,regType,regAddr::SREG_addr>;
		using SPH = reg_access<addrType,regType,regAddr::SPH_addr>;
		using SPL = reg_access<addrType,regType,regAddr::SPL_addr>;
		using OCR0 = reg_access<addrType,regType,regAddr::OCR0_addr>;
		using GICR = reg_access<addrType,regType,regAddr::GICR_addr>;
		using GIFR = reg_access<addrType,regType,regAddr::GIFR_addr>;
		using TIMSK =reg_access<addrType,regType,regAddr::TIMSK_addr>;
		using TIFR = reg_access<addrType,regType,regAddr::TIFR_addr>;
		using SPMCR = reg_access<addrType,regType,regAddr::SPMCR_addr>;
		using TWCR = reg_access<addrType,regType,regAddr::TWCR_addr>;
		using MCUCR = reg_access<addrType,regType,regAddr::MCUCR_addr>;
		using MCUCSR = reg_access<addrType,regType,regAddr::MCUCSR_addr>;
		using TCCR0 =reg_access<addrType,regType,regAddr::TCCR0_addr>;
		using TCNT0 = reg_access<addrType,regType,regAddr::TCNT0_addr>;
		using OSCCAL = reg_access<addrType,regType,regAddr::OSCCAL_addr>;
		using OCDR = reg_access<addrType,regType,regAddr::OCDR_addr>;
		using SFIOR = reg_access<addrType,regType,regAddr::SFIOR_addr>;
		using TCCR1A = reg_access<addrType,regType,regAddr::TCCR1A_addr>;
		using TCCR1B = reg_access<addrType,regType,regAddr::TCCR1B_addr>;
		using TCNT1H = reg_access<addrType,regType,regAddr::TCNT1H_addr>;
		using TCNT1L = reg_access<addrType,regType,regAddr::TCNT1L_addr>;
		using OCR1AH =reg_access<addrType,regType,regAddr::OCR1AH_addr>;
		using OCR1AL = reg_access<addrType,regType,regAddr::OCR1AL_addr>;
		using OCR1BH =reg_access<addrType,regType,regAddr::OCR1BH_addr>;
		using OCR1BL = reg_access<addrType,regType,regAddr::OCR1BL_addr>;
		using ICR1H = reg_access<addrType,regType,regAddr::ICR1H_addr>;
		using ICR1L = reg_access<addrType,regType,regAddr::ICR1L_addr>;
		using TCCR2 = reg_access<addrType,regType,regAddr::TCCR2_addr>;
		using TCNT2 = reg_access<addrType,regType,regAddr::TCNT2_addr>;
		using OCR2 = reg_access<addrType,regType,regAddr::OCR2_addr>;
		using ASSR = reg_access<addrType,regType,regAddr::ASSR_addr>;
		using WDTCR = reg_access<addrType,regType,regAddr::WDTCR_addr>;
		using UBRRH = reg_access<addrType,regType,regAddr::UBRRH_addr>;
		using UCSRC = reg_access<addrType,regType,regAddr::UCSRC_addr>;
		using EEARH = reg_access<addrType,regType,regAddr::EEARH_addr>;
		using EEARL = reg_access<addrType,regType,regAddr::EEARL_addr>;
		using EEDR = reg_access<addrType,regType,regAddr::EEDR_addr>;
		using EECR = reg_access<addrType,regType,regAddr::EECR_addr>;
		using PORTA = reg_access<addrType,regType,regAddr::PORTA_addr>;
		using DDRA = reg_access<addrType,regType,regAddr::DDRA_addr>;
		using PINA = reg_access<addrType,regType,regAddr::PINA_addr>;
		using PORTB = reg_access<addrType,regType,regAddr::PORTB_addr>;
		using DDRB = reg_access<addrType,regType,regAddr::DDRB_addr>;
		using PINB = reg_access<addrType,regType,regAddr::PINB_addr>;
		using PORTC = reg_access<addrType,regType,regAddr::PORTC_addr>;
		using DDRC = reg_access<addrType,regType,regAddr::DDRC_addr>;
		using PINC = reg_access<addrType,regType,regAddr::PINC_addr>;
		using PORTD = reg_access<addrType,regType,regAddr::PORTD_addr>;
		using DDRD = reg_access<addrType,regType,regAddr::DDRD_addr>;
		using PIND = reg_access<addrType,regType,regAddr::PIND_addr>;
		using SPDR = reg_access<addrType,regType,regAddr::SPDR_addr>;
		using SPSR = reg_access<addrType,regType,regAddr::SPSR_addr>;
		using SPCR = reg_access<addrType,regType,regAddr::SPCR_addr>;
		using UDR = reg_access<addrType,regType,regAddr::UDR_addr>;
		using UCSRA = reg_access<addrType,regType,regAddr::UCSRA_addr>;
		using UCSRB = reg_access<addrType,regType,regAddr::UCSRB_addr>;
		using UBRRL = reg_access<addrType,regType,regAddr::UBRRL_addr>;
		using ACSR = reg_access<addrType,regType,regAddr::ACSR_addr>;
		using ADMUX = reg_access<addrType,regType,regAddr::ADMUX_addr>;
		using ADCSRA = reg_access<addrType,regType,regAddr::ADCSRA_addr>;
		using ADCH = reg_access<addrType,regType,regAddr::ADCH_addr>;
		using ADCL = reg_access<addrType,regType,regAddr::ADCL_addr>;
		using TWDR = reg_access<addrType,regType,regAddr::TWDR_addr>;
		using TWAR = reg_access<addrType,regType,regAddr::TWAR_addr>;
		using TWSR = reg_access<addrType,regType,regAddr::TWSR_addr>;
		using TWBR = reg_access<addrType,regType,regAddr::TWBR_addr>;
		template<const regType bitsMask> using SREG_bits = reg_access_bits<addrType,regType,regAddr::SREG_addr,bitsMask>;
		template<const regType bitsMask> using SPH_bits = reg_access_bits<addrType,regType,regAddr::SPH_addr,bitsMask>;
		template<const regType bitsMask> using SPL_bits = reg_access_bits<addrType,regType,regAddr::SPL_addr,bitsMask>;
		template<const regType bitsMask> using OCR0_bits = reg_access_bits<addrType,regType,regAddr::OCR0_addr,bitsMask>;
		template<const regType bitsMask> using GICR_bits = reg_access_bits<addrType,regType,regAddr::GICR_addr,bitsMask>;
		template<const regType bitsMask> using GIFR_bits = reg_access_bits<addrType,regType,regAddr::GIFR_addr,bitsMask>;
		template<const regType bitsMask> using TIMSK_bits =reg_access_bits<addrType,regType,regAddr::TIMSK_addr,bitsMask>;
		template<const regType bitsMask> using TIFR_bits = reg_access_bits<addrType,regType,regAddr::TIFR_addr,bitsMask>;
		template<const regType bitsMask> using SPMCR_bits = reg_access_bits<addrType,regType,regAddr::SPMCR_addr,bitsMask>;
		template<const regType bitsMask> using TWCR_bits = reg_access_bits<addrType,regType,regAddr::TWCR_addr,bitsMask>;
		template<const regType bitsMask> using MCUCR_bits = reg_access_bits<addrType,regType,regAddr::MCUCR_addr,bitsMask>;
		template<const regType bitsMask> using MCUCSR_bits = reg_access_bits<addrType,regType,regAddr::MCUCSR_addr,bitsMask>;
		template<const regType bitsMask> using TCCR0_bits =reg_access_bits<addrType,regType,regAddr::TCCR0_addr,bitsMask>;
		template<const regType bitsMask> using TCNT0_bits = reg_access_bits<addrType,regType,regAddr::TCNT0_addr,bitsMask>;
		template<const regType bitsMask> using OSCCAL_bits = reg_access_bits<addrType,regType,regAddr::OSCCAL_addr,bitsMask>;
		template<const regType bitsMask> using OCDR_bits = reg_access_bits<addrType,regType,regAddr::OCDR_addr,bitsMask>;
		template<const regType bitsMask> using SFIOR_bits = reg_access_bits<addrType,regType,regAddr::SFIOR_addr,bitsMask>;
		template<const regType bitsMask> using TCCR1A_bits = reg_access_bits<addrType,regType,regAddr::TCCR1A_addr,bitsMask>;
		template<const regType bitsMask> using TCCR1B_bits = reg_access_bits<addrType,regType,regAddr::TCCR1B_addr,bitsMask>;
		template<const regType bitsMask> using TCNT1H_bits = reg_access_bits<addrType,regType,regAddr::TCNT1H_addr,bitsMask>;
		template<const regType bitsMask> using TCNT1L_bits = reg_access_bits<addrType,regType,regAddr::TCNT1L_addr,bitsMask>;
		template<const regType bitsMask> using OCR1AH_bits =reg_access_bits<addrType,regType,regAddr::OCR1AH_addr,bitsMask>;
		template<const regType bitsMask> using OCR1AL_bits = reg_access_bits<addrType,regType,regAddr::OCR1AL_addr,bitsMask>;
		template<const regType bitsMask> using OCR1BH_bits =reg_access_bits<addrType,regType,regAddr::OCR1BH_addr,bitsMask>;
		template<const regType bitsMask> using OCR1BL_bits = reg_access_bits<addrType,regType,regAddr::OCR1BL_addr,bitsMask>;
		template<const regType bitsMask> using ICR1H_bits = reg_access_bits<addrType,regType,regAddr::ICR1H_addr,bitsMask>;
		template<const regType bitsMask> using ICR1L_bits = reg_access_bits<addrType,regType,regAddr::ICR1L_addr,bitsMask>;
		template<const regType bitsMask> using TCCR2_bits = reg_access_bits<addrType,regType,regAddr::TCCR2_addr,bitsMask>;
		template<const regType bitsMask> using TCNT2_bits = reg_access_bits<addrType,regType,regAddr::TCNT2_addr,bitsMask>;
		template<const regType bitsMask> using OCR2_bits = reg_access_bits<addrType,regType,regAddr::OCR2_addr,bitsMask>;
		template<const regType bitsMask> using ASSR_bits = reg_access_bits<addrType,regType,regAddr::ASSR_addr,bitsMask>;
		template<const regType bitsMask> using WDTCR_bits = reg_access_bits<addrType,regType,regAddr::WDTCR_addr,bitsMask>;
		template<const regType bitsMask> using UBRRH_bits = reg_access_bits<addrType,regType,regAddr::UBRRH_addr,bitsMask>;
		template<const regType bitsMask> using UCSRC_bits = reg_access_bits<addrType,regType,regAddr::UCSRC_addr,bitsMask>;
		template<const regType bitsMask> using EEARH_bits = reg_access_bits<addrType,regType,regAddr::EEARH_addr,bitsMask>;
		template<const regType bitsMask> using EEARL_bits = reg_access_bits<addrType,regType,regAddr::EEARL_addr,bitsMask>;
		template<const regType bitsMask> using EEDR_bits = reg_access_bits<addrType,regType,regAddr::EEDR_addr,bitsMask>;
		template<const regType bitsMask> using EECR_bits = reg_access_bits<addrType,regType,regAddr::EECR_addr,bitsMask>;
		template<const regType bitsMask> using PORTA_bits = reg_access_bits<addrType,regType,regAddr::PORTA_addr,bitsMask>;
		template<const regType bitsMask> using DDRA_bits = reg_access_bits<addrType,regType,regAddr::DDRA_addr,bitsMask>;
		template<const regType bitsMask> using PINA_bits = reg_access_bits<addrType,regType,regAddr::PINA_addr,bitsMask>;
		template<const regType bitsMask> using PORTB_bits = reg_access_bits<addrType,regType,regAddr::PORTB_addr,bitsMask>;
		template<const regType bitsMask> using DDRB_bits = reg_access_bits<addrType,regType,regAddr::DDRB_addr,bitsMask>;
		template<const regType bitsMask> using PINB_bits = reg_access_bits<addrType,regType,regAddr::PINB_addr,bitsMask>;
		template<const regType bitsMask> using PORTC_bits = reg_access_bits<addrType,regType,regAddr::PORTC_addr,bitsMask>;
		template<const regType bitsMask> using DDRC_bits = reg_access_bits<addrType,regType,regAddr::DDRC_addr,bitsMask>;
		template<const regType bitsMask> using PINC_bits = reg_access_bits<addrType,regType,regAddr::PINC_addr,bitsMask>;
		template<const regType bitsMask> using PORTD_bits = reg_access_bits<addrType,regType,regAddr::PORTD_addr,bitsMask>;
		template<const regType bitsMask> using DDRD_bits = reg_access_bits<addrType,regType,regAddr::DDRD_addr,bitsMask>;
		template<const regType bitsMask> using PIND_bits = reg_access_bits<addrType,regType,regAddr::PIND_addr,bitsMask>;
		template<const regType bitsMask> using SPDR_bits = reg_access_bits<addrType,regType,regAddr::SPDR_addr,bitsMask>;
		template<const regType bitsMask> using SPSR_bits = reg_access_bits<addrType,regType,regAddr::SPSR_addr,bitsMask>;
		template<const regType bitsMask> using SPCR_bits = reg_access_bits<addrType,regType,regAddr::SPCR_addr,bitsMask>;
		template<const regType bitsMask> using UDR_bits = reg_access_bits<addrType,regType,regAddr::UDR_addr,bitsMask>;
		template<const regType bitsMask> using UCSRA_bits = reg_access_bits<addrType,regType,regAddr::UCSRA_addr,bitsMask>;
		template<const regType bitsMask> using UCSRB_bits = reg_access_bits<addrType,regType,regAddr::UCSRB_addr,bitsMask>;
		template<const regType bitsMask> using UBRRL_bits = reg_access_bits<addrType,regType,regAddr::UBRRL_addr,bitsMask>;
		template<const regType bitsMask> using ACSR_bits = reg_access_bits<addrType,regType,regAddr::ACSR_addr,bitsMask>;
		template<const regType bitsMask> using ADMUX_bits = reg_access_bits<addrType,regType,regAddr::ADMUX_addr,bitsMask>;
		template<const regType bitsMask> using ADCSRA_bits = reg_access_bits<addrType,regType,regAddr::ADCSRA_addr,bitsMask>;
		template<const regType bitsMask> using ADCH_bits = reg_access_bits<addrType,regType,regAddr::ADCH_addr,bitsMask>;
		template<const regType bitsMask> using ADCL_bits = reg_access_bits<addrType,regType,regAddr::ADCL_addr,bitsMask>;
		template<const regType bitsMask> using TWDR_bits = reg_access_bits<addrType,regType,regAddr::TWDR_addr,bitsMask>;
		template<const regType bitsMask> using TWAR_bits = reg_access_bits<addrType,regType,regAddr::TWAR_addr,bitsMask>;
		template<const regType bitsMask> using TWSR_bits = reg_access_bits<addrType,regType,regAddr::TWSR_addr,bitsMask>;
		template<const regType bitsMask> using TWBR_bits = reg_access_bits<addrType,regType,regAddr::TWBR_addr,bitsMask>;
	};
};


#endif /* REG_DEFINITIONS_H_ */