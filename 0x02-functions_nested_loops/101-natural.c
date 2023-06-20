#include <stdio.h>

/**
 * main -  prints the sum of all the multiples of 3 or 5 below 1024.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int j, multiples = 0;

	for (j = 0; j < 1024; j++)

	{
		if ((j % 3) == 0 || (j % 5) == 0)
			multiples += j;
	}

	printf("%d\n", multiples);

	return (0);
}
