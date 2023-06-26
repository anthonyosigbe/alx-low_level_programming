#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int length;
	int rev;

	length = 0;

	while (s[rev++])
		length++;

	for (rev = length - 1; rev >= 0; rev--)
		_putchar(s[rev]);

	_putchar('\n');
}
