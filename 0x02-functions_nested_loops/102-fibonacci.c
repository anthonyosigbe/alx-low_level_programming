#include <stdio.h>

/**
 * main - t prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num_count;
	long fibonacci1 = 0, fibonacci2 = 1, value;

	for (num_count = 0; num_count < 50; num_count++)
	{
		value = fibonacci1 + fibonacci2;
		printf("%lu", value);

		fibonacci1 = fibonacci2;
		fibonacci2 = value;

		if (num_count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
