#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @num: number to print in binary
 */
void print_binary(unsigned long int num)
{
	int bit_position, has_one = 0;
	unsigned long int current_bit;

	for (bit_position = 63; bit_position >= 0; bit_position--)
	{
		current_bit = num >> bit_position;

		if (current_bit & 1)
		{
			_putchar('1');
			has_one = 1;
		}
		else if (has_one)
		{
			_putchar('0');
		}
	}

	if (!has_one)
	{
		_putchar('0');
	}
}
