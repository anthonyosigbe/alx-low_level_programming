#include "lists.h"

/**
 * print_dlistint - Displays the contents of a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The total number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
