#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: Buffer that the sring will be copied to.
 * @src: Source string to copy.
 *
 * Return: Pointer to string *dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
