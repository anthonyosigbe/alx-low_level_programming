#include "hash_tables.h"

/**
 * hash_table_print - Display the hash table's contents.
 * @ht: The hash table to show.
 *
 * This function prints the key-value pairs stored in the hash table
 * in the specified format.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int separator = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			if (separator)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			separator = 1;
			current = current->next;
		}
	}
	printf("}\n");
}
