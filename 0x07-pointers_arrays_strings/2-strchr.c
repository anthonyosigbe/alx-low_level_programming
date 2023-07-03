#include "main.h"

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
	int i = 0, k;

	while (s[i])
	{
		i++;
	}

	for (k = 0; k <= i; k++)
	{
		if (c == s[k])
		{
			s += k;
			return (s);
		}
	}
	return ('\0');
}
