#include <stdio.h>

/**
 * Description: main -  prints all single digit numbers,
 * of base 10 starting from zero 0.
 * followed by a new line.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		printf("%d", numbers);

	printf("\n");

	return (0);
}

