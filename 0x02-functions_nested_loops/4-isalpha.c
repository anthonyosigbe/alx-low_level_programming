#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: character to be checked.
 *
 * Return: 1 if charater is aplhabetic, lowercase or upper,
 *0 for otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
