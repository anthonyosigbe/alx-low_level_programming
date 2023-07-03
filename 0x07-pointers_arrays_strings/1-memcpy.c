#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: points to the memory area.
 * @src: points to the source memory.
 * @n: Number of bytes that needs to be copied from src.
 *
 * Return: A pointer to the buffer destination dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
