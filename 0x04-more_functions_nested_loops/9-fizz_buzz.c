#include <stdio.h>

/**
 * main - Function that prints the numbers from 1 to 100,
 * for multiples of three print Fizz instead of the number,
 * for the multiples of five print Buzz. For numbers which,
 * are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if ((numbers % 3) == 0 && (numbers % 5) == 0)
			printf("FizzBuzz");

		else if ((numbers % 3) == 0)
			printf("Fizz");

		else if ((numbers % 5) == 0)
			printf("Buzz");
		else
			printf("%d", numbers);

		if (numbers == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
