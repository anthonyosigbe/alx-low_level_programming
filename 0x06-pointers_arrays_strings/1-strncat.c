#include "main.h"

/**
 * _strncat - concatenates two strings
 * using at most n bytes from src.
 * @dest: string to append to.
 * @src: string to append to dest.
 * @n: number of bytes from src to append dest to.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (dest[i++])
		length++;

	for (i = 0; src[i] && i < n; i++)
		dest[length++] = src[i];

	return (dest);
}
