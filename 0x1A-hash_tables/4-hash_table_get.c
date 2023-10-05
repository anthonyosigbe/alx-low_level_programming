#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value for a given key.
 * @ht: The hash table to search.
 * @key: The key to look up.
 *
 * This function searches the hash table for the provided key
 * and returns its associated value, or NULL if not found.
 *
 * Return: The associated value or NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
