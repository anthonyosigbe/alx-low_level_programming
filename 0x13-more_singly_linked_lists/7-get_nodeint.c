#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves a node at a specific index,
 * in a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to retrieve - indices start at 0.
 *
 * Return: If the node does not exist, returns NULL.
 * Otherwise, returns the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int currentNodeIndex;

	for (currentNodeIndex = 0; currentNodeIndex < index
			&& head != NULL; currentNodeIndex++)
	{
		head = head->next;
	}
	return (head);
}
