#include "lists.h"

/**
 * insert_dnodeint_at_index - Adds a new node at a
 * specified position in a dlistint_t list.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be inserted (starting from 0).
 * @n: The data value to be stored in the new node.
 *
 * Return: The address of the newly added node,
 * or NULL if the operation failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = current->next;
			new_node->prev = current;

			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}

