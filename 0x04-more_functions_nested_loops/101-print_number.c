#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed.
 */

void print_number(int n)
{
	unsigned int digit = n;

	if (n < 0)
	{
		_putchar('-');
		digit = -digit;
	}
	if ((digit / 10) > 0)
		print_number(digit / 10);

	_putchar((digit % 10) + '0');
}
