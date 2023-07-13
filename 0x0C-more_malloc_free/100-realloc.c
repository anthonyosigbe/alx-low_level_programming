#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: points to previously allocated memory.
 * @old_size: size (bytes) of the allocated space for ptr.
 * @new_size: the new size, in bytes, of the new memory block.
 *
 * Return: If new_size == old_size, do not do anything and return ptr.
 * If new_size > old_size, the "added" memory should not be initialized.
 * Otherwise, return a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int c;
	char *char_ptr;
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);

		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	char_ptr = (char *)ptr;
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (c = 0; c < old_size && c < new_size; c++)
	{
		new_ptr[c] = char_ptr[c];
	}
	free(ptr);
	return (new_ptr);
}
