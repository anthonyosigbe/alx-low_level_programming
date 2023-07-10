#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: String to be concatenated upon.
 * @s2: Concatenated string to s1.
 *
 * Return: Pointer to the concatenated string or NULL,
 * if concatenation fails.
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, total_len;
	char *concat_result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;

	concat_result = (char *)malloc((total_len + 1) * sizeof(char));

	if (concat_result == NULL)
		return (NULL);

	strcpy(concat_result, s1);
	strcat(concat_result, s2);

	return (concat_result);
}
