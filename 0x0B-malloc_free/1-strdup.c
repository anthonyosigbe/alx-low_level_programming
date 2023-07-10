#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string in memory.
 * @str: The string to be duplicated.
 *
 * Return: Pointer to the duplicated string or NULL if str is NULL,
 * or insufficient memory is available.
 */

char *_strdup(char *str)
{
	char *str_duplicate;
	size_t str_length;
	size_t i;

	if (str == NULL)
		return (NULL);

	str_length = strlen(str);
	str_duplicate = (char *)malloc((str_length + 1) * sizeof(char));

	if (str_duplicate == NULL)
		return (NULL);

	for (i = 0; i <= str_length; i++)
		str_duplicate[i] = str[i];

	return (str_duplicate);
}

