#include <stdio.h>

/**
 * Description: main -  prints all possible combinations,
 * of single-digit numbers,
 * numbers are printed in ascending order,
 * putchar can only be used a maximum of 4 four times.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int single_digitNumbers;

	for (single_digitNumbers = 0; single_digitNumbers <= 9; single_digitNumbers++)
	{
		putchar((single_digitNumbers % 10) + '0');
		if (single_digitNumbers == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
