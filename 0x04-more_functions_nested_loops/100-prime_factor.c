#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 * factor of the number 612852475143.
 * followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	signed long prime = 612852475143, split;

	while (split < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (split = 3; split < (prime / 2); split += 2)
		{
			if ((prime % split) == 0)
				prime /= split;
		}
	}
	printf("%ld\n", prime);

	return (0);
}
