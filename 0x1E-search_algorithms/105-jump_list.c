#include "search_algos.h"

/**
 * jump_list - Searches for a value in a linked list
 * of integers using the Jump search algorithm.
 *
 * @list: The input linked list.
 * @size: The size of the linked list.
 * @value: The value to search for.
 *
 * Return: The index of the value in the linked list.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, start, end;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	start = (size_t)sqrt((double)size);
	index = 0;
	end = 0;

	do {
		prev = list;
		start++;
		index = start * end;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
