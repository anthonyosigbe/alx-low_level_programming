#include "search_algos.h"

/**
 * _binary_search - Performs a binary search for a value,
 * in a sorted array of integers.
 * @array: A pointer to the first element of the array to search.
 * @left: The starting index of the subarray to search.
 * @right: The ending index of the subarray to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, returns -1.
 * Otherwise, returns the index where the value is located.
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = left + (right - left) / 2;
		if (array[index] == value)
			return (index);
		if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}

	return (-1);
}

/**
 * exponential_search - Performs a search for a value in a sorted
 * array of integers using exponential search.
 * @array: A pointer to the first element of the array to be searched.
 * @size: The number of elements in the array.
 * @value: The value to be searched for.
 *
 * Return: If the value is not present or the array is NULL, returns -1.
 * Otherwise, returns the index where the value is located.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t index = 0, end;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (index = 1; index < size && array[index] <= value; index = index * 2)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
	}

	end = index < size ? index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", index / 2, end);
	return (_binary_search(array, index / 2, end, value));
}
