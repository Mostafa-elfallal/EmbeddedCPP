/*
 * reg_definitions.h
 *
 * Created: 12/18/2023 6:26:18 PM
 *  Author: ElFallal
 */

#ifndef REG_DEFINITIONS_H_
#define REG_DEFINITIONS_H_

#include "reg.h"
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
	namespace bits
	{
		const regType bit0 = (1 << 0);
		const regType bit1 = (1 << 1);
		const regType bit2 = (1 << 2);
		const regType bit3 = (1 << 3);
		const regType bit4 = (1 << 4);
		const regType bit5 = (1 << 5);
		const regType bit6 = (1 << 6);
		const regType bit7 = (1 << 7);
	};
	namespace reg
	{
		using SREG = reg_access<addrType, regType, regAddr::SREG_addr>;
		using SPH = reg_access<addrType, regType, regAddr::SPH_addr>;
		using SPL = reg_access<addrType, regType, regAddr::SPL_addr>;
		using OCR0 = reg_access<addrType, regType, regAddr::OCR0_addr>;
		using GICR = reg_access<addrType, regType, regAddr::GICR_addr>;
		using GIFR = reg_access<addrType, regType, regAddr::GIFR_addr>;
		using TIMSK = reg_access<addrType, regType, regAddr::TIMSK_addr>;
		using TIFR = reg_access<addrType, regType, regAddr::TIFR_addr>;
		using SPMCR = reg_access<addrType, regType, regAddr::SPMCR_addr>;
		using TWCR = reg_access<addrType, regType, regAddr::TWCR_addr>;
		using MCUCR = reg_access<addrType, regType, regAddr::MCUCR_addr>;
		using MCUCSR = reg_access<addrType, regType, regAddr::MCUCSR_addr>;
		using TCCR0 = reg_access<addrType, regType, regAddr::TCCR0_addr>;
		using TCNT0 = reg_access<addrType, regType, regAddr::TCNT0_addr>;
		using OSCCAL = reg_access<addrType, regType, regAddr::OSCCAL_addr>;
		using OCDR = reg_access<addrType, regType, regAddr::OCDR_addr>;
		using SFIOR = reg_access<addrType, regType, regAddr::SFIOR_addr>;
		using TCCR1A = reg_access<addrType, regType, regAddr::TCCR1A_addr>;
		using TCCR1B = reg_access<addrType, regType, regAddr::TCCR1B_addr>;
		using TCNT1H = reg_access<addrType, regType, regAddr::TCNT1H_addr>;
		using TCNT1L = reg_access<addrType, regType, regAddr::TCNT1L_addr>;
		using OCR1AH = reg_access<addrType, regType, regAddr::OCR1AH_addr>;
		using OCR1AL = reg_access<addrType, regType, regAddr::OCR1AL_addr>;
		using OCR1BH = reg_access<addrType, regType, regAddr::OCR1BH_addr>;
		using OCR1BL = reg_access<addrType, regType, regAddr::OCR1BL_addr>;
		using ICR1H = reg_access<addrType, regType, regAddr::ICR1H_addr>;
		using ICR1L = reg_access<addrType, regType, regAddr::ICR1L_addr>;
		using TCCR2 = reg_access<addrType, regType, regAddr::TCCR2_addr>;
		using TCNT2 = reg_access<addrType, regType, regAddr::TCNT2_addr>;
		using OCR2 = reg_access<addrType, regType, regAddr::OCR2_addr>;
		using ASSR = reg_access<addrType, regType, regAddr::ASSR_addr>;
		using WDTCR = reg_access<addrType, regType, regAddr::WDTCR_addr>;
		using UBRRH = reg_access<addrType, regType, regAddr::UBRRH_addr>;
		using UCSRC = reg_access<addrType, regType, regAddr::UCSRC_addr>;
		using EEARH = reg_access<addrType, regType, regAddr::EEARH_addr>;
		using EEARL = reg_access<addrType, regType, regAddr::EEARL_addr>;
		using EEDR = reg_access<addrType, regType, regAddr::EEDR_addr>;
		using EECR = reg_access<addrType, regType, regAddr::EECR_addr>;
		using PORTA = reg_access<addrType, regType, regAddr::PORTA_addr>;
		using DDRA = reg_access<addrType, regType, regAddr::DDRA_addr>;
		using PINA = reg_access<addrType, regType, regAddr::PINA_addr>;
		using PORTB = reg_access<addrType, regType, regAddr::PORTB_addr>;
		using DDRB = reg_access<addrType, regType, regAddr::DDRB_addr>;
		using PINB = reg_access<addrType, regType, regAddr::PINB_addr>;
		using PORTC = reg_access<addrType, regType, regAddr::PORTC_addr>;
		using DDRC = reg_access<addrType, regType, regAddr::DDRC_addr>;
		using PINC = reg_access<addrType, regType, regAddr::PINC_addr>;
		using PORTD = reg_access<addrType, regType, regAddr::PORTD_addr>;
		using DDRD = reg_access<addrType, regType, regAddr::DDRD_addr>;
		using PIND = reg_access<addrType, regType, regAddr::PIND_addr>;
		using SPDR = reg_access<addrType, regType, regAddr::SPDR_addr>;
		using SPSR = reg_access<addrType, regType, regAddr::SPSR_addr>;
		using SPCR = reg_access<addrType, regType, regAddr::SPCR_addr>;
		using UDR = reg_access<addrType, regType, regAddr::UDR_addr>;
		using UCSRA = reg_access<addrType, regType, regAddr::UCSRA_addr>;
		using UCSRB = reg_access<addrType, regType, regAddr::UCSRB_addr>;
		using UBRRL = reg_access<addrType, regType, regAddr::UBRRL_addr>;
		using ACSR = reg_access<addrType, regType, regAddr::ACSR_addr>;
		using ADMUX = reg_access<addrType, regType, regAddr::ADMUX_addr>;
		using ADCSRA = reg_access<addrType, regType, regAddr::ADCSRA_addr>;
		using ADCH = reg_access<addrType, regType, regAddr::ADCH_addr>;
		using ADCL = reg_access<addrType, regType, regAddr::ADCL_addr>;
		using TWDR = reg_access<addrType, regType, regAddr::TWDR_addr>;
		using TWAR = reg_access<addrType, regType, regAddr::TWAR_addr>;
		using TWSR = reg_access<addrType, regType, regAddr::TWSR_addr>;
		using TWBR = reg_access<addrType, regType, regAddr::TWBR_addr>;
		template <const regType bitsMask, const regType shifting = 0>
		using SREG_bits = reg_access_bits<addrType, regType, regAddr::SREG_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using SPH_bits = reg_access_bits<addrType, regType, regAddr::SPH_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using SPL_bits = reg_access_bits<addrType, regType, regAddr::SPL_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using OCR0_bits = reg_access_bits<addrType, regType, regAddr::OCR0_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using GICR_bits = reg_access_bits<addrType, regType, regAddr::GICR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using GIFR_bits = reg_access_bits<addrType, regType, regAddr::GIFR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TIMSK_bits = reg_access_bits<addrType, regType, regAddr::TIMSK_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TIFR_bits = reg_access_bits<addrType, regType, regAddr::TIFR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using SPMCR_bits = reg_access_bits<addrType, regType, regAddr::SPMCR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TWCR_bits = reg_access_bits<addrType, regType, regAddr::TWCR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using MCUCR_bits = reg_access_bits<addrType, regType, regAddr::MCUCR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using MCUCSR_bits = reg_access_bits<addrType, regType, regAddr::MCUCSR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TCCR0_bits = reg_access_bits<addrType, regType, regAddr::TCCR0_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TCNT0_bits = reg_access_bits<addrType, regType, regAddr::TCNT0_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using OSCCAL_bits = reg_access_bits<addrType, regType, regAddr::OSCCAL_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using OCDR_bits = reg_access_bits<addrType, regType, regAddr::OCDR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using SFIOR_bits = reg_access_bits<addrType, regType, regAddr::SFIOR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TCCR1A_bits = reg_access_bits<addrType, regType, regAddr::TCCR1A_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TCCR1B_bits = reg_access_bits<addrType, regType, regAddr::TCCR1B_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TCNT1H_bits = reg_access_bits<addrType, regType, regAddr::TCNT1H_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TCNT1L_bits = reg_access_bits<addrType, regType, regAddr::TCNT1L_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using OCR1AH_bits = reg_access_bits<addrType, regType, regAddr::OCR1AH_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using OCR1AL_bits = reg_access_bits<addrType, regType, regAddr::OCR1AL_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using OCR1BH_bits = reg_access_bits<addrType, regType, regAddr::OCR1BH_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using OCR1BL_bits = reg_access_bits<addrType, regType, regAddr::OCR1BL_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using ICR1H_bits = reg_access_bits<addrType, regType, regAddr::ICR1H_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using ICR1L_bits = reg_access_bits<addrType, regType, regAddr::ICR1L_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TCCR2_bits = reg_access_bits<addrType, regType, regAddr::TCCR2_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TCNT2_bits = reg_access_bits<addrType, regType, regAddr::TCNT2_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using OCR2_bits = reg_access_bits<addrType, regType, regAddr::OCR2_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using ASSR_bits = reg_access_bits<addrType, regType, regAddr::ASSR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using WDTCR_bits = reg_access_bits<addrType, regType, regAddr::WDTCR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using UBRRH_bits = reg_access_bits<addrType, regType, regAddr::UBRRH_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using UCSRC_bits = reg_access_bits<addrType, regType, regAddr::UCSRC_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using EEARH_bits = reg_access_bits<addrType, regType, regAddr::EEARH_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using EEARL_bits = reg_access_bits<addrType, regType, regAddr::EEARL_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using EEDR_bits = reg_access_bits<addrType, regType, regAddr::EEDR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using EECR_bits = reg_access_bits<addrType, regType, regAddr::EECR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using PORTA_bits = reg_access_bits<addrType, regType, regAddr::PORTA_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using DDRA_bits = reg_access_bits<addrType, regType, regAddr::DDRA_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using PINA_bits = reg_access_bits<addrType, regType, regAddr::PINA_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using PORTB_bits = reg_access_bits<addrType, regType, regAddr::PORTB_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using DDRB_bits = reg_access_bits<addrType, regType, regAddr::DDRB_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using PINB_bits = reg_access_bits<addrType, regType, regAddr::PINB_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using PORTC_bits = reg_access_bits<addrType, regType, regAddr::PORTC_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using DDRC_bits = reg_access_bits<addrType, regType, regAddr::DDRC_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using PINC_bits = reg_access_bits<addrType, regType, regAddr::PINC_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using PORTD_bits = reg_access_bits<addrType, regType, regAddr::PORTD_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using DDRD_bits = reg_access_bits<addrType, regType, regAddr::DDRD_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using PIND_bits = reg_access_bits<addrType, regType, regAddr::PIND_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using SPDR_bits = reg_access_bits<addrType, regType, regAddr::SPDR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using SPSR_bits = reg_access_bits<addrType, regType, regAddr::SPSR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using SPCR_bits = reg_access_bits<addrType, regType, regAddr::SPCR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using UDR_bits = reg_access_bits<addrType, regType, regAddr::UDR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using UCSRA_bits = reg_access_bits<addrType, regType, regAddr::UCSRA_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using UCSRB_bits = reg_access_bits<addrType, regType, regAddr::UCSRB_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using UBRRL_bits = reg_access_bits<addrType, regType, regAddr::UBRRL_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using ACSR_bits = reg_access_bits<addrType, regType, regAddr::ACSR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using ADMUX_bits = reg_access_bits<addrType, regType, regAddr::ADMUX_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using ADCSRA_bits = reg_access_bits<addrType, regType, regAddr::ADCSRA_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using ADCH_bits = reg_access_bits<addrType, regType, regAddr::ADCH_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using ADCL_bits = reg_access_bits<addrType, regType, regAddr::ADCL_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TWDR_bits = reg_access_bits<addrType, regType, regAddr::TWDR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TWAR_bits = reg_access_bits<addrType, regType, regAddr::TWAR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TWSR_bits = reg_access_bits<addrType, regType, regAddr::TWSR_addr, bitsMask, shifting>;
		template <const regType bitsMask, const regType shifting = 0>
		using TWBR_bits = reg_access_bits<addrType, regType, regAddr::TWBR_addr, bitsMask, shifting>;
	};
};

/* GICR */
#define INT1 7
#define INT0 6
#define INT2 5
#define IVSEL 1
#define IVCE 0

/* GIFR */
#define INTF1 7
#define INTF0 6
#define INTF2 5

/* TIMSK */
#define OCIE2 7
#define TOIE2 6
#define TICIE1 5
#define OCIE1A 4
#define OCIE1B 3
#define TOIE1 2
#define OCIE0 1
#define TOIE0 0

/* TIFR */
#define OCF2 7
#define TOV2 6
#define ICF1 5
#define OCF1A 4
#define OCF1B 3
#define TOV1 2
#define OCF0 1
#define TOV0 0

/* SPMCR */
#define SPMIE 7
#define RWWSB 6
/* bit 5 reserved */
#define RWWSRE 4
#define BLBSET 3
#define PGWRT 2
#define PGERS 1
#define SPMEN 0

/* TWCR */
#define TWINT 7
#define TWEA 6
#define TWSTA 5
#define TWSTO 4
#define TWWC 3
#define TWEN 2
/* bit 1 reserved */
#define TWIE 0

/* TWAR */
#define TWA6 7
#define TWA5 6
#define TWA4 5
#define TWA3 4
#define TWA2 3
#define TWA1 2
#define TWA0 1
#define TWGCE 0

/* TWSR */
#define TWS7 7
#define TWS6 6
#define TWS5 5
#define TWS4 4
#define TWS3 3
/* bit 2 reserved */
#define TWPS1 1
#define TWPS0 0

/* MCUCR */
#define SE 7
#define SM2 6
#define SM1 5
#define SM0 4
#define ISC11 3
#define ISC10 2
#define ISC01 1
#define ISC00 0

/* MCUCSR */
#define JTD 7
#define ISC2 6
/* bit 5 reserved */
#define JTRF 4
#define WDRF 3
#define BORF 2
#define EXTRF 1
#define PORF 0

/* SFIOR */
#define ADTS2 7
#define ADTS1 6
#define ADTS0 5
/* bit 4 reserved */
#define ACME 3
#define PUD 2
#define PSR2 1
#define PSR10 0

/* TCCR0 */
#define FOC0 7
#define WGM00 6
#define COM01 5
#define COM00 4
#define WGM01 3
#define CS02 2
#define CS01 1
#define CS00 0

/* TCCR2 */
#define FOC2 7
#define WGM20 6
#define COM21 5
#define COM20 4
#define WGM21 3
#define CS22 2
#define CS21 1
#define CS20 0

/* ASSR */
/* bits 7-4 reserved */
#define AS2 3
#define TCN2UB 2
#define OCR2UB 1
#define TCR2UB 0

/* TCCR1A */
#define COM1A1 7
#define COM1A0 6
#define COM1B1 5
#define COM1B0 4
#define FOC1A 3
#define FOC1B 2
#define WGM11 1
#define WGM10 0

/* TCCR1B */
#define ICNC1 7
#define ICES1 6
/* bit 5 reserved */
#define WGM13 4
#define WGM12 3
#define CS12 2
#define CS11 1
#define CS10 0

/* WDTCR */
/* bits 7-5 reserved */
#define WDTOE 4
#define WDE 3
#define WDP2 2
#define WDP1 1
#define WDP0 0

/* PA7-PA0 = ADC7-ADC0 */
/* PORTA */
#define PA7 7
#define PA6 6
#define PA5 5
#define PA4 4
#define PA3 3
#define PA2 2
#define PA1 1
#define PA0 0

/* DDRA */
#define DDA7 7
#define DDA6 6
#define DDA5 5
#define DDA4 4
#define DDA3 3
#define DDA2 2
#define DDA1 1
#define DDA0 0

/* PINA */
#define PINA7 7
#define PINA6 6
#define PINA5 5
#define PINA4 4
#define PINA3 3
#define PINA2 2
#define PINA1 1
#define PINA0 0

/*
   PB7 = SCK
   PB6 = MISO
   PB5 = MOSI
   PB4 = SS#
   PB3 = OC0/AIN1
   PB2 = INT2/AIN0
   PB1 = T1
   PB0 = XCK/T0
 */

/* PORTB */
#define PB7 7
#define PB6 6
#define PB5 5
#define PB4 4
#define PB3 3
#define PB2 2
#define PB1 1
#define PB0 0

/* DDRB */
#define DDB7 7
#define DDB6 6
#define DDB5 5
#define DDB4 4
#define DDB3 3
#define DDB2 2
#define DDB1 1
#define DDB0 0

/* PINB */
#define PINB7 7
#define PINB6 6
#define PINB5 5
#define PINB4 4
#define PINB3 3
#define PINB2 2
#define PINB1 1
#define PINB0 0

/*
   PC7 = TOSC2
   PC6 = TOSC1
   PC1 = SDA
   PC0 = SCL
 */
/* PORTC */
#define PC7 7
#define PC6 6
#define PC5 5
#define PC4 4
#define PC3 3
#define PC2 2
#define PC1 1
#define PC0 0

/* DDRC */
#define DDC7 7
#define DDC6 6
#define DDC5 5
#define DDC4 4
#define DDC3 3
#define DDC2 2
#define DDC1 1
#define DDC0 0

/* PINC */
#define PINC7 7
#define PINC6 6
#define PINC5 5
#define PINC4 4
#define PINC3 3
#define PINC2 2
#define PINC1 1
#define PINC0 0

/*
   PD7 = OC2
   PD6 = ICP
   PD5 = OC1A
   PD4 = OC1B
   PD3 = INT1
   PD2 = INT0
   PD1 = TXD
   PD0 = RXD
 */

/* PORTD */
#define PD7 7
#define PD6 6
#define PD5 5
#define PD4 4
#define PD3 3
#define PD2 2
#define PD1 1
#define PD0 0

/* DDRD */
#define DDD7 7
#define DDD6 6
#define DDD5 5
#define DDD4 4
#define DDD3 3
#define DDD2 2
#define DDD1 1
#define DDD0 0

/* PIND */
#define PIND7 7
#define PIND6 6
#define PIND5 5
#define PIND4 4
#define PIND3 3
#define PIND2 2
#define PIND1 1
#define PIND0 0

/* SPSR */
#define SPIF 7
#define WCOL 6
/* bits 5-1 reserved */
#define SPI2X 0

/* SPCR */
#define SPIE 7
#define SPE 6
#define DORD 5
#define MSTR 4
#define CPOL 3
#define CPHA 2
#define SPR1 1
#define SPR0 0

/* UCSRA */
#define RXC 7
#define TXC 6
#define UDRE 5
#define FE 4
#define DOR 3
#define PE 2
#define U2X 1
#define MPCM 0

/* UCSRB */
#define RXCIE 7
#define TXCIE 6
#define UDRIE 5
#define RXEN 4
#define TXEN 3
#define UCSZ2 2
#define RXB8 1
#define TXB8 0

/* UCSRC */
#define URSEL 7
#define UMSEL 6
#define UPM1 5
#define UPM0 4
#define USBS 3
#define UCSZ1 2
#define UCSZ0 1
#define UCPOL 0

/* ACSR */
#define ACD 7
#define ACBG 6
#define ACO 5
#define ACI 4
#define ACIE 3
#define ACIC 2
#define ACIS1 1
#define ACIS0 0

/* ADCSRA */
#define ADEN 7
#define ADSC 6
#define ADATE 5
#define ADIF 4
#define ADIE 3
#define ADPS2 2
#define ADPS1 1
#define ADPS0 0

/* ADMUX */
#define REFS1 7
#define REFS0 6
#define ADLAR 5
#define MUX4 4
#define MUX3 3
#define MUX2 2
#define MUX1 1
#define MUX0 0

/* EEPROM Control Register */
#define EERIE 3
#define EEMWE 2
#define EEWE 1
#define EERE 0

/*
 * * * * * * * * * * * * * * * * * * * * * * * * *
 *				Vector Table					*
 * * * * * * * * * * * * * * * * * * * * * * * * *
 */

#define EXT_INT_0 __vector_1
#define EXT_INT_1 __vector_2
#define EXT_INT_2 __vector_3
#define TIMER_2_COMP_INT __vector_4
#define TIMER_2_OVF_INT __vector_5
#define TIMER_1_CAPT_INT __vector_6
#define TIMER_1_COMPA_INT __vector_7
#define TIMER_1_COMPB_INT __vector_8
#define TIMER_1_OVF_INT __vector_9
#define TIMER_0_COMP_INT __vector_10
#define TIMER_0_OVF_INT __vector_11
#define SPI_STC_INT __vector_12
#define USART_RXC_INT __vector_13
#define USART_UDRE_INT __vector_14
#define USART_TXC_INT __vector_15
#define ADC_INT __vector_16
#define EE_RDY_INT __vector_17
#define ANA_COMP_INT __vector_18
#define I2C_INT __vector_19
#define SPM_RDY_INT __vector_20

#endif /* REG_DEFINITIONS_H_ */