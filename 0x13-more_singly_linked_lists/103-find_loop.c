#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a listint_t linked list.
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *walker;
	listint_t *runner;

	walker = head;
	runner = head;

	while (head && runner && runner->next)
	{
		head = head->next;
		runner = runner->next->next;

		if (head == runner)
		{
			head = walker;
			walker = runner;

			while (1)
			{
				runner = walker;
				while (runner->next != head && runner->next != walker)
				{
					runner = runner->next;
				}
				if (runner->next == head)
					break;
				head = head->next;
			}
			return (runner->next);
		}
	}
	return (NULL);
}
