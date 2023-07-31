#include "lists.h"

/**
 * add_nodeint_end - Appends a new node at the end of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: If memory allocation fails, returns NULL.
 * Otherwise, returns the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tail;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
	return (*head);
}
