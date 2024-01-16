#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t position, start, end;
	double factor;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (size)
	{
		factor = (double)(end - start) / (array[end] - array[start])
			* (value - array[start]);
		position = (size_t)(start + factor);
		printf("Value checked array[%d]", (int)position);

		if (position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[position]);
		}

		if (array[position] == value)
			return ((int)position);

		if (array[position] < value)
			start = position + 1;
		else
			end = position - 1;

		if (start == end)
			break;
	}

	return (-1);
}
