#include "search_algos.h"

/**
 * recursive_search - Uses the Binary search algorithm to recursively
 * search for a value in an array of integers.
 *
 * @array: Pointer to the first element of the array to be searched.
 * @size: The number of elements in the array.
 * @value: The value to be searched for.
 *
 * Return: The index of the value in the array, or -1
 * if the value is not found.
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t index;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (index = 0; index < size; index++)
		printf("%s %d", (index == 0) ? ":" : ",", array[index]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - Calls the binary_search function to return
 * the index of a number in an array.
 *
 * @array: The input array to be searched.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array, or -1
 * if the value is not found.
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
