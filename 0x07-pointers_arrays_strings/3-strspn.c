#include "main.h"

/**
 *  _strspn - gets the length of a prefix substring.
 *  @s: source string to be searched for.
 *  @accept: string to be measured and accepted.
 *
 *  Return: Number of bytes initial segment s
 *  consisting of only bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int acceptIndex = 0;
	unsigned int stringIndex;
	unsigned int bytesCount = 0;

	while (accept[acceptIndex])
	{
		stringIndex = 0;

	while (s[stringIndex] != ' ')
	{
		if (accept[acceptIndex] == s[stringIndex])
		{
			bytesCount++;
		}
		stringIndex++;
	}
	acceptIndex++;
	}
	return (bytesCount);
}
