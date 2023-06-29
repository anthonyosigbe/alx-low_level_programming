#include "main.h"

/**
 * string_toupper - changes all lowercase letters,
 * of a string to uppercase.
 *
 * @c: string to be changed to upper
 *
 * Return: pointer to the string changed.
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		i++;
	}
	return (c);
}
