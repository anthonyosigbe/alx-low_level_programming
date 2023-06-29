#include "main.h"

/**
 * _strcmp - compares two strings to a pointer
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: negative differencd if s1 < s2
 * positive if s1 > s2 and zero 0 if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
