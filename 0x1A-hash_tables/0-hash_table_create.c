#include "hash_tables.h"

/**
 * hash_table_create - Function to create a hash table
 * @size: The desired size of the array
 *
 * Return: A pointer to the newly created hash table,
 * or NULL in case of an error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int index;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		new_table->array[index] = NULL;
	}

	new_table->size = size;
	return (new_table);
}
