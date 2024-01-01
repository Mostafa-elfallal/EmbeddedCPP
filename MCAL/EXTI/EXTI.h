#ifndef __EXTI_H__
#define __EXTI_H__
#include <reg_definitions.h>
// ISR
ISR_decl(EXT_INT_0);
ISR_decl(EXT_INT_1);
ISR_decl(EXT_INT_2);
namespace mcal
{
    namespace EXTI
    {
        namespace sensing
        {
            constexpr regType LOGIC_LOW = 0;
            constexpr regType LOGIC_CHANGE = 1;
            constexpr regType FALLING_EDGE = 2;
            constexpr regType RISING_EDGE = 3;
        };
        template <typename EnableBits, typename FlagBits, typename SenseBits, const regType Event>
        class EXTI
        {
        public:
            static void enable()
            {
                SenseBits::write(Event);
                EnableBits::set();
            }
            static void disable()
            {
                EnableBits::clear();
            }
            static void clear()
            {
                FlagBits::set();
            }
        };
        template <const regType Event>
        using EXTI0 = EXTI<mcal::reg::GICR_bits<(1 << INT0)>, mcal::reg::GIFR_bits<(1 << INTF0)>, mcal::reg::MCUCR_bits<(1 << ISC00) | (1 << ISC01)>, Event>;
        template <const regType Event>
        using EXTI1 = EXTI<mcal::reg::GICR_bits<(1 << INT1)>, mcal::reg::GIFR_bits<(1 << INTF1)>, mcal::reg::MCUCR_bits<(1 << ISC10) | (1 << ISC11), ISC10>, Event>;
        template <const regType Event>
        using EXTI2 = EXTI<mcal::reg::GICR_bits<(1 << INT2)>, mcal::reg::GIFR_bits<(1 << INTF2)>, mcal::reg::MCUCSR_bits<(1 << ISC2), ISC2>, (Event & 0x01)>;
    };
};
#endif