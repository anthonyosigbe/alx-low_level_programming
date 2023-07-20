#include "variadic_functions.h"
#include <stdio.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a single character from the argument list.
 * @arg: A list of arguments containing the character to be printed.
 */

void print_char(va_list arg)
{
	char ch = va_arg(arg, int);

	printf("%c", ch);
}

/**
 * print_int - Prints an integer from the argument list.
 * @arg: A list of arguments containing the integer to be printed.
 */

void print_int(va_list arg)
{
	int num = va_arg(arg, int);

	printf("%d", num);
}

/**
 * print_float - Prints a floating-point number from the argument list.
 * @arg: A list of arguments containing the float to be printed.
 */

void print_float(va_list arg)
{
	double floatingNum = va_arg(arg, double);

	printf("%f", floatingNum);
}

/**
 * print_string - Prints a string from the argument list.
 * @arg: A list of arguments containing the string to be printed.
 */

void print_string(va_list arg)
{
	char *text = va_arg(arg, char *);

	if (text == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", text);
	}
}

/**
 * print_all - Prints a combination of characters,
 * integers, floats, and strings
 * from the argument list, separated by a comma and space,
 * followed by a new line.
 * @format: A string representing the argument types,
 * (c: char, i: integer, f: float, s: string).
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 * or char * is ignored.
 * If a string argument is NULL, "(nil)" is printed instead.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, x = 0;
	const char *separator = "";
	PrintFormat_t functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		x = 0;

		while (x < 4 && format[i] != functions[x].format_specifier[0])
		{
			x++;
		}

		if (x < 4)
		{
			printf("%s", separator);
			functions[x].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
