#ifndef VARIADIC_UTILS_H
#define VARIADIC_UTILS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct PrintFormat - A new struct type defining a printer,
 * for different data types.
 * @format_specifier: A symbol representing the format,
 * specifier for a particular data type.
 * @print: A function pointer to a function that prints the data type,
 * corresponding to the format specifier.
 */

typedef struct PrintFormat
{
	char *format_specifier;
	void (*print)(va_list arg);
} PrintFormat_t;

#endif
