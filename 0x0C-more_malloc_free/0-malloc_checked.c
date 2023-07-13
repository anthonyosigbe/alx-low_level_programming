#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: bytes to be allocated.
 *
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
