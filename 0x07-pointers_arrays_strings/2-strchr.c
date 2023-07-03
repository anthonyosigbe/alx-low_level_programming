#include "main.h"
#include <stdio.h>

/**
 * _strchr -  locates a character in a string.
 * @s: String to be searched for.
 * @c: Charater to be located.
 *
 * Return: if c is located points to the first occurence
 * if c is not located points to NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
