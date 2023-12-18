/*
 * reg.h
 *
 * Created: 10/19/2023 4:10:32 AM
 *  Author: ElFallal
 */ 


#ifndef REG_H_
#define REG_H_

template<typename addr_type, typename reg_type, const addr_type addr, const reg_type bitsMask>
class reg_access_bits {
	public:
	static void set() { *reinterpret_cast<volatile reg_type*>(addr) |= bitsMask; }
	static void clear() {*reinterpret_cast<volatile reg_type*>(addr) &= ~bitsMask; }
	static void toggle() { *reinterpret_cast<volatile reg_type*>(addr) ^= bitsMask; }
};
template<typename addr_type, typename reg_type, const addr_type addr>
class reg_access {
	public:
	static reg_type read() { return *reinterpret_cast<volatile reg_type*>(addr); }
	static void write(reg_type newVal) { *reinterpret_cast<volatile reg_type*>(addr) = newVal;}
};
#endif /* REG_H_ */