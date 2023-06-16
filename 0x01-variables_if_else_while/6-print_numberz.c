#include <stdio.h>

/**
 * Description: main -  prints out all single digit numbers,
 * of base 10 starting from 0,only using putchar, without char variables.
 * followed by a new line.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		putchar((numbers % 10) + '0');

	putchar('\n');

	return (0);
}
