#include <stdio.h>

/**
 * Description: main - prints all numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char alphabet;
	int numbers;

	for (alphabet = 'a'; alphabet <= 'h'; alphabet++)
		putchar(alphabet);

	for (numbers = 0; numbers < 10; numbers++)
		putchar((numbers % 10) + '0');

	putchar('\n');

	return (0);
}
