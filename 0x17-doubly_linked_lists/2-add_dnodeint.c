#include "lists.h"

/**
 * add_dnodeint - Inserts a new node at the front of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The data value to be stored in the new node.
 *
 * Return: The address of the newly added element,
 * or NULL if the operation failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
