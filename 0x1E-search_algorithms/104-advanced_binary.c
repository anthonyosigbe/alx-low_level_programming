#include "search_algos.h"

/**
 * rec_search - Performs a binary search to find a value,
 * in an array of integers.
 *
 * @array: The input array.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array.
 */

int rec_search(int *array, size_t size, int value)
{
	size_t midpoint = size / 2;
	size_t index;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (index = 0; index < size; index++)
		printf("%s %d", (index == 0) ? ":" : ",", array[index]);

	printf("\n");

	if (midpoint && size % 2 == 0)
		midpoint--;

	if (value == array[midpoint])
	{
		if (midpoint > 0)
			return (rec_search(array, midpoint + 1, value));
		return ((int)midpoint);
	}

	if (value < array[midpoint])
		return (rec_search(array, midpoint + 1, value));

	midpoint++;
	return (rec_search(array + midpoint, size - midpoint, value) + midpoint);
}

/**
 * advanced_binary - Calls the rec_search function to return
 * the index of a number.
 *
 * @array: The input array.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array.
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
