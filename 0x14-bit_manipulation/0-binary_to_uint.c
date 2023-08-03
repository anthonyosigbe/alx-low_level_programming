#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @binary_string: A pointer to a string,
 * containing only '0' and '1' characters.
 *
 * Return: If binary_string is NULL or contains characters,
 * other than '0' or '1', the function returns 0.
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

