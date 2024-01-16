#include "search_algos.h"

/**
 * jump_search - Uses the Jump search algorithm to search
 * for a value in an array of integers.
 *
 * @array: The input array to be searched.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: The index of the value in the array,
 * or -1 if the value is not found.
 */

int jump_search(int *array, size_t size, int value)
{
	int index, step_size, jump_size, prev;

	if (array == NULL || size == 0)
		return (-1);

	step_size = (int)sqrt((double)size);
	jump_size = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		jump_size++;
		prev = index;
		index = jump_size * step_size;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
