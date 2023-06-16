#include <stdio.h>

/**
 * Description: main - prints all possible diffrent combinations,
 * of two digits
 * seperated by comma, in ascending order, followed by a space.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int digt1, digt2;

	for (digt1 = 0; digt1 < 9; digt1++)
	{
		for (digt2 = digt1 + 1; digt2 < 10; digt2++)
		{
			putchar((digt1 % 10) + '0');
			putchar((digt2 % 10) + '0');

			if (digt1 == 8 && digt2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
