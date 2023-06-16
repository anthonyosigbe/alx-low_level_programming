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
	int digt_comb1, digt_comb2, digt_comb3;

	for (digt_comb1 = 0; digt_comb1 < 8; digt_comb1++)
	{
		for (digt_comb2 = digt_comb1 + 1; digt_comb2 < 9; digt_comb2++)
		{
			for (digt_comb3 = digt_comb2 + 1; digt_comb3 < 10; digt_comb3++)
			{
				putchar((digt_comb1 % 10) + '0');
				putchar((digt_comb2 % 10) + '0');
				putchar((digt_comb3 % 10) + '0');

				if (digt_comb1 == 7 && digt_comb2 == 8 && digt_comb3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
