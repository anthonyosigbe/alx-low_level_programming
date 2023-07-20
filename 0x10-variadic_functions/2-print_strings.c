#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints a sequence of strings,
 * separated by a given string, and ends with a newline.
 * @separator: The string to be printed between strings.
 * Pass NULL for no separator.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If the separator is NULL, no separator will be printed.
 * If any of the strings is NULL, "(nil)" will be printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	const char *string;
	unsigned int x;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		string = va_arg(args, const char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
