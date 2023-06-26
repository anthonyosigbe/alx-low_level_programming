#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: sring to be printed
 */

void puts_half(char *str)
{
	int half = 0, length = 0, n;

	while (str[half++])
	{
		length++;
	}
	if ((length % 2) == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length + 1) / 2;
	}

	for (half = n; half < length; half++)
		_putchar(str[half]);

	_putchar('\n');
}
