#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node into a listint_t,
 * list at the specified index.
 * @head: A pointer to the address of the head of the listint_t list.
 * @idx: The index at which the new node should be added - indices start at 0.
 * @n: The integer value to be stored in the new node.
 *
 * Return: If memory allocation fails, returns NULL.
 * Otherwise, returns the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currentNode;
	unsigned int node;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	currentNode = *head;
	for (node = 0; node < idx - 1; node++)
	{
		if (currentNode == NULL || currentNode->next == NULL)
		{
			free(newNode);
			return (NULL);
		}
		currentNode = currentNode->next;
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
