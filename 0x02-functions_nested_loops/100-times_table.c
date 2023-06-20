#include "main.h"

/**
 * print_times_table -prints the n times table, starting with 0.
 * @n: represents the value of times the table will be printed.
 */
void print_times_table(int n)
{
	int numb, mulp, product;

	if (n >= 0 && n <= 15)
	{
		for (numb = 0; numb <= n; numb++)
		{
			_putchar('0');

			for (mulp = 1; mulp <= n; mulp++)
			{
				_putchar(',');
				_putchar(' ');

				product = numb * mulp;

				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
