#include "main.h"

/**
 * _strcat - concatenates two strings.
 * appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 *
 * @dest: pointer to the string to be concatenated.
 * @src: source string to be appended to @dest.
 *
 * Return: pointer to the resulting string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	while (dest[i++])
		length++;

	for (i = 0; src[i]; i++)
		dest[length++] = src[i];

	return (dest);
}
