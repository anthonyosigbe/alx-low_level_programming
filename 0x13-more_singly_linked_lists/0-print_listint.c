#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t elementCount = 0;

	while (h)
	{
		elementCount++;
		printf("%d\n", h->n);

		h = h->next;
	}
	return (elementCount);
}
