#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string that will be encoded
 *
 * Return: encoded string to the pointer @s.
 */

char *leet(char *s)
{
	int i = 0, k = 0, length = 5;
	char leet[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		k = 0;

		while (k < length)
	{
		if (s[i] == leet[k] || s[i] - 32 == leet[k])
		{
			s[i] = n[k];
		}

		k++;
	}

	i++;
	}
	return (s);
}
