#include "main.h"
#include <stdio.h>

/**
 * _strstr -  locates a substring.
 * @haystack: String to be seached out.
 * @needle: Substring to be located.
 *
 * Return: A pointer at the begining if substring is located,
 * If substring is not located NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int haystackIndex = 0, needleIndex = 0;

	while (haystack[haystackIndex])
	{
		while (needle[needleIndex])
		{
			if (haystack[haystackIndex + needleIndex] != needle[needleIndex])
			{
				break;
			}

			needleIndex++;
		}

		if (needle[needleIndex] == '\0')
		{
			return (haystack + haystackIndex);
		}

		haystackIndex++;
	}

	return (NULL);
}
