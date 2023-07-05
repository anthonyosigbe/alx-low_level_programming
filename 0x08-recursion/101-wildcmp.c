#include "main.h"

int strlen_wilds(char *str);
void iterate_wild(char **wildstr);
char *suffix_match(char *str, char *suffix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_wilds - Returns the length of a string,
 *                excluding wildcard characters.
 * @str: The string to measure.
 *
 * Return: The length of the string, excluding wildcards.
 */

int strlen_wilds(char *str)
{
	int length = 0, i = 0;

	if (*(str + i))
	{
		if (*str != '*')
			length++;

		i++;
		length += strlen_wilds(str + i);
	}

	return (length);
}

/**
 * iterate_wild - Iterates through a string located at a wildcard
 *                until it points to a non-wildcard character.
 * @wildstr: The string to be iterated through.
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * suffix_match - Checks if str matches the suffix.
 * @str: The string to be matched.
 * @suffix: The suffix.
 *
 * Return: Pointer to the end of suffix if str and,
 * suffix are identical.
 */

char *suffix_match(char *str, char *suffix)
{
	int str_len = strlen_wilds(str) - 1;
	int suffix_len = strlen_wilds(suffix) - 1;

	if (*suffix == '*')
		iterate_wild(&suffix);

	if (*(str + str_len - suffix_len) == *suffix && *suffix != '\0')
	{
		suffix++;
		return (suffix_match(str, suffix));
	}

	return (suffix);
}

/**
 * wildcmp - Compares two strings, taking wildcards into account.
 * @s1: The first string to compare.
 * @s2: The second string to compare, which may contain wildcards.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = suffix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
