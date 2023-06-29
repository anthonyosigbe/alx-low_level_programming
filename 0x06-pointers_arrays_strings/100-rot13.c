#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @p: string to be encoded
 *
 * Return: encoded string to the pointer @p
 */
char *rot13(char *p)
{
	int i = 0;

	while (p[i])
	{
		while ((p[i] >= 'a' && p[i] <= 'z') || (p[i] >= 'A' && p[i] <= 'Z'))
		{
			if ((p[i] > 'm' && p[i] <= 'z') || (p[i] > 'M' && p[i] <= 'Z'))
			{
				p[i] -= 13;
				break;
			}

			p[i] += 13;
			break;
		}
		i++;
	}
	return (p);
}
