#include "lists.h"

/**
 * pop_listint - Removes the first node of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: If the list is empty, returns 0.
 * Otherwise, returns the data from the removed head node (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int data;

	if (*head == NULL)
		return (0);

	tempNode = *head;
	data = tempNode->n;
	*head = tempNode->next;
	free(tempNode);

	return (data);
}
