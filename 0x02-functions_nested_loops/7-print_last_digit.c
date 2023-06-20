#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @a: The number to checked or treated
 *
 * Return: The last digit value.
 */
int print_last_digit(int a)
{
	int last_digit;

	last_digit = a % 20;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
