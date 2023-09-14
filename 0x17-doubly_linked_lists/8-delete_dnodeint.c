#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a specified
 * index in a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted (starting from 0).
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (i == index)
		{
			temp = current->next;
			current->prev->next = temp;
			if (temp != NULL)
				temp->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
