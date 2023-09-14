#include "lists.h"

/**
 * add_dnodeint_end - Appends a new node to the tail of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: The data to be placed in the new node.
 *
 * Return: The address of the newly added element,
 * or NULL if the operation failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
