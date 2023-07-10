#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @size: Array to be initialized.
 * @c: Specific char the array will be initialized with.
 *
 * Return: NULL if size == 0, a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *result;
	unsigned int x;

	if (size == 0)
		return (NULL);

	result = malloc(sizeof(char) * size);

	if (result == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		result[x] = c;

	return (result);
}
