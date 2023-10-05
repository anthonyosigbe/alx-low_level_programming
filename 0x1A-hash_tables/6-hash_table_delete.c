#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table and its contents.
 * @ht: The hash table to be deleted.
 *
 * Description:
 *   This function deallocates memory used by the,
 *   given hash table and all 
 *   its key-value pairs, including keys and values.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = temp;
		}
	}
	free(ht->array);
	free(ht);
}
