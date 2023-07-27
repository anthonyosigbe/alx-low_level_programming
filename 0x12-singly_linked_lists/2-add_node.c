#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer of the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: Address of the new element on success, otherwise NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate_str;
	int length;
	list_t *new_node;

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
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
