#include <stdio.h>

/**
 * Description: main - prints all possible combinations,
 *  of two two-digit numbers.
 *  thw two numbers are represented by a space, seperated by comma,
 *  printed in ascending order.
 *  putchar can only be used a maximum of eight 8 times
 *  char variable is not allowed
 *  Return: Always 0 (Success).
 */
int main(void)
{
	int digt_combo1, digt_combo2, digt_combo3;

	for (digt_combo1 = 0; digt_combo1 < 8; digt_combo1++)
	{
		for (digt_combo2 = digt_combo1 + 1; digt_combo2 < 9; digt_combo2++)
		{
			for (digt_combo3 = digt_combo2 + 1; digt_combo3 < 10; digt_combo3++)
			{
				putchar((digt_combo1 % 10) + '0');
				putchar((digt_combo2 % 10) + '0');
				putchar((digt_combo3 % 10) + '0');

				if (digt_combo1 == 7 && digt_combo2 == 8 && digt_combo1 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
