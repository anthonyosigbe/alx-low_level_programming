#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely, handling loops.
 * @h: Pointer to a pointer of a linked list.
 *
 * Return: The size of the list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *runner, *node_to_free;
	size_t node_count;

	node_count = 0;

	if (!h || *h == NULL)
		return (0);
	runner = (*h)->next;
	current = *h;

	while (runner && runner < current)
	{
		node_to_free = current;
		runner = runner->next;
		current = current->next;
		node_count += 1;
		free(node_to_free);
	}
	node_count += 1;
	free(current);
	*h = NULL;

	return (node_count);
}
