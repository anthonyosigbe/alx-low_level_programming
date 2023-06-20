#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *
 * Return: Always 0 (Success).
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alphabet_x10;

	while (i++ <= 9)
	{
		for (alphabet_x10 = 'a'; alphabet_x10 <= 'z'; alphabet_x10++)
			_putchar(alphabet_x10);
		_putchar('\n');
	}
}
