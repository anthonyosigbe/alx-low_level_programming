#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @binary_string: A pointer to a string of 0 and 1 characters.
 *
 * Return: If binary_string is NULL or contains characters not 0 or 1 - 0.
 * Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *binary_string)
{
	unsigned int result = 0, base = 1;
	int length;

	if (binary_string == NULL)
		return (0);

	for (length = 0; binary_string[length]; length++)

		;
	for (length -= 1; length >= 0; length--)
	{
		if (binary_string[length] != '0' && binary_string[length] != '1')
			return (0);

		result += (binary_string[length] - '0') * base;
		base *= 2;
	}

	return (result);
}

