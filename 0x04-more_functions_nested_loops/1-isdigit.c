#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for a digit 0 through 9.
 * @c: Number to be checked.
 * Return: 1 if the number is a digit, 0 if otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
