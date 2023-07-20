#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers, separated by a given string,
 * followed by a new line.
 * @separator: The string to be printed between numbers.
 * Pass NULL for no separator.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
