#include "hash_tables.h"

/**
 * key_index - Calculates the index for a key in the hash table array.
 * @key: The key to calculate the index for.
 * @size: The size of the hash table array.
 *
 * Return: The calculated index for the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
