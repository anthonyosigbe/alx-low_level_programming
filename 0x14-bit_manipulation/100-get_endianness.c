#include "main.h"

/**
 * get_endianness - Determines the byte order of the system.
 *
 * Return: If the system is big-endian - Returns 0.
 *         If the system is little-endian - Returns 1.
 */

int get_endianness(void)
{
	int number = 1;
	char *byte_pointer = (char *)&number;

	if (*byte_pointer == 1)
		return (1);

	return (0);
}
