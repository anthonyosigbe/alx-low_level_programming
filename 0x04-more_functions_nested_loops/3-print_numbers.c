#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 *
 * Return: 0 - 9 foolowed by a new line.
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		_putchar(c + '0');

	_putchar('\n');
}
