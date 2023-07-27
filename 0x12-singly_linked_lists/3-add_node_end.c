#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list_t list.
 * @head: Pointer to the pointer of the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * * Return: Address of the new element on success, otherwise NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate_str;
	int length;
	list_t *new_node, *tail;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate_str = strdup(str);
	if (duplicate_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (length = 0; str[length]; length++)
	{}
	new_node->str = duplicate_str;
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new_node;
	}
	return (*head);
}
