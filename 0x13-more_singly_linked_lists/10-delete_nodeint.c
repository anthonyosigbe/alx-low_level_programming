#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at the specified index.
 * @head: A pointer to the head of the listint_t linked list.
 * @index: The index of the node to be deleted (indices start at 0).
 *
 * Return: -1 if the index is out of range or the list is empty,
 * 1 upon successful deletion.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode, *tempNode;
	unsigned int node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tempNode = *head;
		*head = (*head)->next;
		free(tempNode);
		return (1);
	}
	currentNode = *head;
	for (node = 0; node < (index - 1); node++)
	{
		if (currentNode->next == NULL)
			return (-1);
		currentNode = currentNode->next;
	}
	tempNode = currentNode->next;
	currentNode->next = tempNode->next;
	free(tempNode);
	return (1);
}
