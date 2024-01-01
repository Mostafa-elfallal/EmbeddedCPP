/*
 * LCD.h
 *
 * Created: 12/24/2023 8:39:45 PM
 * Author: ElFallal
 */

#ifndef __LCD_H__
#define __LCD_H__

#include "GPIO.h"
// Primary template for LCD
template <const uint8_t rows, const uint8_t cols, typename DATA_PORT, typename RS, typename RW, typename EN>
class LCD
{
private:
	LCD(const LCD &c);
	LCD &operator=(const LCD &c);
	void CMD_WRITE()
	{
		RS::clear();
		RW::clear();
	}
	void DATA_WRITE()
	{
		RS::set();
		RW::clear();
	}
	void DATA_READ()
	{
		RS::set();
		RW::set();
	}
	void FLAG_READ()
	{
		RS::clear();
		RW::set();
	}
	void kick()
	{
		EN::set();
		EN::clear();
	}

public:
	uint8_t addressCounter;
	LCD(){};
	bool is_busy()
	{
		DATA_PORT::writePort(0x00);
		DATA_PORT::writeDir(0x00);
		FLAG_READ();
		EN::set();
		uint8_t reading = DATA_PORT::readInPort();
		addressCounter = reading & 0x7F;
		EN::clear();
		DATA_PORT::writeDir(0xFF);
		return reading & (1 << 7);
	}
	void wait_while_busy()
	{
		DATA_PORT::writePort(0x00);
		DATA_PORT::writeDir(0x00);
		FLAG_READ();

		uint8_t reading = 0;
		do
		{
			EN::set();
			reading = DATA_PORT::readInPort();
			addressCounter = reading & 0x7F;
			EN::clear();
		} while (reading & (1 << 7));

		DATA_PORT::writeDir(0xFF);
	}
	void config()
	{
		DATA_PORT::writeDir(0xFF);
		RS::config(mcal::GPIO::pinType::OUTPUT_LOW);
		RW::config(mcal::GPIO::pinType::OUTPUT_LOW);
		EN::config(mcal::GPIO::pinType::OUTPUT_LOW);
	}
	void clear_screen()
	{
		CMD_WRITE();
		DATA_PORT::writePort(0x01);
		kick();
	}
	void return_home()
	{
		CMD_WRITE();
		DATA_PORT::writePort(0x02);
		kick();
	}
	void mode_set(bool increment, bool shift)
	{
		if (is_busy())
			return;
		uint8_t cmd = 0x04;
		if (increment)
			cmd |= (1 << 1);
		if (shift)
			cmd |= (1 << 0);
		CMD_WRITE();
		DATA_PORT::writePort(cmd);
		kick();
	}
	void disp_control(bool dispOn, bool cursorOn, bool blink)
	{
		if (is_busy())
			return;
		uint8_t cmd = 0x08;
		if (dispOn)
			cmd |= (1 << 2);
		if (cursorOn)
			cmd |= (1 << 1);
		if (blink)
			cmd |= (1 << 0);
		CMD_WRITE();
		DATA_PORT::writePort(cmd);
		kick();
	}
	void shift(bool display, bool right)
	{
		if (is_busy())
			return;
		uint8_t cmd = (1 << 4);
		if (display)
			cmd |= (1 << 3);
		if (right)
			cmd |= (1 << 2);
		CMD_WRITE();
		DATA_PORT::writePort(cmd);
		kick();
	}
	void function_set(bool bit_8, bool line_2, bool dot_10_5)
	{
		uint8_t cmd = (1 << 5);
		if (bit_8)
			cmd |= (1 << 4);
		if (line_2)
			cmd |= (1 << 3);
		if (dot_10_5)
			cmd |= (1 << 2);
		CMD_WRITE();
		DATA_PORT::writePort(cmd);
		kick();
	}
	void write(uint8_t c)
	{
		if (is_busy())
			return;
		DATA_WRITE();
		DATA_PORT::writePort(c);
		kick();
	}
	void write(char *s)
	{
		while (*s)
			write(*s++);
	}
	void goTo(uint8_t row, uint8_t col)
	{
		if (is_busy())
			return;
		if (row >= rows || col >= cols)
			return;
		uint8_t address = col;
		// the row is odd ? (second or forth) (0-indexed)
		address |= (row & 1) ? 0x40 : 0x00;
		CMD_WRITE();
		DATA_PORT::writePort(0x80 | address);
		kick();
	}
};

#endif //__LCD_H__
