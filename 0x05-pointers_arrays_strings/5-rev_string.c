#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: string to be reversed.
 */

void rev_string(char *s)
{
	int length = 0, rev;
	char c;

	while (s[length] != '\0')
		length++;

	for (rev = length - 1; rev >= length / 2; rev--)
	{
		c = s[rev];
		s[rev] = s[length - rev - 1];
		s[length - rev - 1] = c;
	}
}
