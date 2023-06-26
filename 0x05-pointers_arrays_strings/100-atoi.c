#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: string thsat will be converted
 *
 * Return: Integer value that is converted to sring.
 */

int _atoi(char *s)
{
	int i = 1;
	signed int number = 0;

	do

	{
		if (*s == '-')
			i *= -1;

		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');

		else if (number > 0)
			break;
	}

	while (*s++);

	return (number * i);
}
