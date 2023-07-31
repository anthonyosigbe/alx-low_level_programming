#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list in place.
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: Pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (*head);
}
