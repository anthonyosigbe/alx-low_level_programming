#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data in the list, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int total_sum = 0;

	while (head != NULL)
	{
		total_sum += head->n;
		head = head->next;
	}
	return (total_sum);
}
