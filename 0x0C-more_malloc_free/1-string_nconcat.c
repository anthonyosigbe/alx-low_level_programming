#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: String one.
 * @s2: second string.
 * @n: number of bytes of s2 to be concatenated to s1.
 *
 * Return: Pointer to the concatenated space in memory,
 * or NULL if function fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int new_len = n;
	unsigned int i;
	const char *ptr;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ptr = s1; *ptr; ptr++)
		new_len++;

	result = (char *)malloc((new_len + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	new_len = 0;

	for (ptr = s1; *ptr; ptr++)
		result[new_len++] = *ptr;

	for (i = 0; s2[i] && i < n; i++)
		result[new_len++] = s2[i];

	result[new_len] = '\0';

	return (result);
}
