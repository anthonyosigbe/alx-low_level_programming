#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the list_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("[%u] %s\n", h->len, (h->str) ? h->str : "(nil)");
		nodes++;
		h = h->next;
	}
	return (nodes);
}
