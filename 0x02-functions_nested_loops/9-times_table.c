#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int numb, mulp, product;

	for (numb = 0; numb <= 9; numb++)
	{
		_putchar('0');

		for (mulp = 1; mulp <= 9; mulp++)
		{
			_putchar(',');
			_putchar(' ');

			product = numb * mulp;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}

		_putchar('\n');
	}
}
