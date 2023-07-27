#include "lists.h"

/**
 * list_len - Count the number of elements in a linked list_t list.
 * @h: Pointer to the linked list_t list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
