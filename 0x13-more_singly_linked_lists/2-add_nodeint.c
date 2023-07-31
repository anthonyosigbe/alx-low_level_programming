#include "lists.h"

/**
 * add_nodeint - Inserts a new node at the beginning of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: If memory allocation fails, returns NULL.
 * Otherwise, returns the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
