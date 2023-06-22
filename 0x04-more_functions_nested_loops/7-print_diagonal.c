#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * followed by a new line
 * @n: number of time character \ should be printed.
 */

void print_diagonal(int n)
{
	int line, diag;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (diag = 0; diag < line; diag++)
				_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
