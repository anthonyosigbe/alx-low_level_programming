#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int length = 0, rev;

	while (s[length] != '0' && s[length] != '0')
		length++;

	for (rev = length - 1; rev >= 0; rev--)
		_putchar(s[rev]);

	_putchar('\n');
}
