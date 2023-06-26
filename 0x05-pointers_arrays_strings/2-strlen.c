#include "main.h"

/**
 * _strlen - retunrs the length of a string.
 * @s: length of string to check for
 *
 * Return: length of string *s.
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s++)
		length++;

	return (length);
}
