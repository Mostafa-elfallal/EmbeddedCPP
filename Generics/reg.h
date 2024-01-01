/*
 * reg.h
 *
 * Created: 10/19/2023 4:10:32 AM
 *  Author: ElFallal
 */

#ifndef REG_H_
#define REG_H_

template <typename addr_type, typename reg_type, const addr_type addr>
class reg_access
{
public:
	static reg_type read() { return *reinterpret_cast<volatile reg_type *>(addr); }
	static void write(reg_type newVal) { *reinterpret_cast<volatile reg_type *>(addr) = newVal; }
	static void Or(reg_type newVal) { *reinterpret_cast<volatile reg_type *>(addr) |= newVal; }
	static void And(reg_type newVal) { *reinterpret_cast<volatile reg_type *>(addr) &= newVal; }
	static void Not(reg_type newVal) { *reinterpret_cast<volatile reg_type *>(addr) ^= newVal; }
};
template <typename addr_type, typename reg_type, const addr_type addr, const reg_type bitsMask, const reg_type bitsShift = 0>
class reg_access_bits
{
public:
	static void set() { reg_access<addr_type, reg_type, addr>::Or(bitsMask); }
	static void clear() { reg_access<addr_type, reg_type, addr>::And(~bitsMask); }
	static void toggle() { reg_access<addr_type, reg_type, addr>::Not(bitsMask); }
	static void write(const reg_type newVal)
	{
		clear();
		reg_access<addr_type, reg_type, addr>::Or((newVal << bitsShift) & bitsMask);
	}
};
#define ISR(INT_VECT)                                             \
	extern "C" void INT_VECT(void) __attribute__((signal, used)); \
	void INT_VECT(void)

#define ISR_decl(INT_VECT) \
	extern "C" void INT_VECT(void) __attribute__((signal, used))

#define sei() __asm__ __volatile__("sei" ::: "memory")

#define cli() __asm__ __volatile__("cli" ::: "memory")
typedef void (*callback)(void);
void empty_call_back(void);
#endif /* REG_H_ */