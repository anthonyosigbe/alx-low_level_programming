#include "search_algos.h"

/**
 * linear_search - Performs a linear search for
 * a value in an array of integers.
 * @array: A pointer to the first element of the array
 * to be searched.
 * @size: The number of elements in the array.
 * @value: The value to be searched for.
 *
 * Return: The index of the first occurrence of the
 * value in the array, or -1 if the value is not found
 * or if the array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
