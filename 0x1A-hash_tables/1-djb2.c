#include "hash_tables.h"

/**
 * hash_djb2 - Calculates a hash value using the djb2 algorithm.
 * @str: The string to hash.
 *
 * This function computes a hash value for the,
 * input string using the djb2 hashing algorithm.
 * It processes each character in the string to update
 * the hash value.
 *
 * Return: The computed hash value.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
