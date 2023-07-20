#ifndef VARIADIC_UTILS_H
#define VARIADIC_UTILS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_integer(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_char_ptr(char *separator, va_list args);

/**
 * struct printFormat - printFormat
 * @format_specifier: The conversion specifier
 * @f: The function pointer
 */
typedef struct printFormat
{
	char *format_specifier;
	void (*f)(char *separator, va_list args);
} printFormat_t;


#endif
