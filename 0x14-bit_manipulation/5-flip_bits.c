#include "main.h"

/**
 * flip_bits - Determines the count of bits that need to be flipped
 *             to convert one number into another.
 * @n: The first number.
 * @m: The target number to convert n into.
 *
 * Return: The count of bits that must be flipped to transform n into m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int bit_count = 0;

	while (xor_result > 0)
	{
		bit_count += (xor_result & 1);
		xor_result >>= 1;
	}
	return (bit_count);
}
