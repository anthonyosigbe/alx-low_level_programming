#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success).
 */
void print_alphabet(void)
{
	char  print_alphabet;

	for (print_alphabet = 'a';  print_alphabet <= 'z';  print_alphabet++)
		_putchar(print_alphabet);

	_putchar('\n');
}
