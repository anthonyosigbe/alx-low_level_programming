#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers from min to max included.
 *  @min: minimum value of the array.
 *  @max: maximum value of the array.
 *
 *  Return: pointer to the newly created array, if min > max = NULL,
 *  If malloc fails = NULL.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	arr = (int *)malloc(range * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
