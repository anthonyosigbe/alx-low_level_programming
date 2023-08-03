#include "main.h"

/**
 * clear_bit - Clears a specific bit at the given index,
 * setting its value to 0.
 * @n: A pointer to the number from which the bit will be cleared.
 * @index: The index of the bit to be cleared (indices start at 0).
 *
 * Return: If the index is out of range - Returns -1.
 * Otherwise - Returns 1 to indicate successful bit clearing.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
