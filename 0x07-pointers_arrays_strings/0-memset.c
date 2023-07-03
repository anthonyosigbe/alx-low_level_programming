#include "main.h"

/**
 * _memset -  fills memory with a constant byte.
 * @s: points to the memory area to be filled.
 * @b: character use to fill the memory area.
 * @n: constant umber of bytes to be filled.
 *
 * Return: pointer to the filled memory s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
