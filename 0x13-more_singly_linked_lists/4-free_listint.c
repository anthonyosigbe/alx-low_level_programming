#include "lists.h"

/**
 * free_listint - Releases the memory allocated for a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *current, *nextNode;

	current = head;

	while (current != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
}
