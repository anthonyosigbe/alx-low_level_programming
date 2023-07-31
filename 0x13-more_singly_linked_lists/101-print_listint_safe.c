#include "lists.h"

/**
 * print_listint_safe - Prints a linked list safely, handling loops.
 * @head: Pointer to the beginning of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *runner, *current;
	size_t nodeCount;

	nodeCount = 0;

	if (head == NULL)
		return (0);

	current = head;
	runner = head->next;

	while (runner != NULL && runner < current)
	{
		nodeCount += 1;
		printf("[%p] %i\n", (void *)current, current->n);

		current = current->next;
		runner = runner->next;
	}
	printf("[%p] %i\n", (void *)current, current->n);
	nodeCount += 1;

	if (runner)
		printf("-> [%p] %i\n", (void *)runner, runner->n);

	return (nodeCount);
}
