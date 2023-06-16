#include <stdio.h>

/**
 * Description:main -  prints out the alphabet in lowercase,
 * and then uppercase, followed by a new line.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
