#include "main.h"

/**
 * set_bit - Sets a specific bit at the given index to 1.
 * @n: A pointer to the number where the bit will be set.
 * @index: The index of the bit to be set (indices start at 0).
 *
 * Return: If the index is out of range - Returns -1.
 * Otherwise - Returns 1 to indicate successful bit setting.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);
	return (1);
}
