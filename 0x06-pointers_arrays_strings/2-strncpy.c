#include "main.h"

/**
 * _strncpy - copies a string src into dest
 * @dest: sores the dtring copy
 * @src: represents the source string
 * @n: represents the number of bytes to be copied from @src.
 *
 * Return:string destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, length_src = 0;

	while (src[i++])
		length_src++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = length_src; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
