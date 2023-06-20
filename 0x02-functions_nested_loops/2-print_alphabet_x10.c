#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 * Return: Always 0 (Success).
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char print_alphabet_x10;

	while (i++ <= 9)
	{
		for (print_alphabet_x10 = 'a'; print_alphabet_x10 <= 'z'; print_alphabet_x10++)
			_putchar(print_alphabet_x10);
	}
	_putchar('\n');
}
