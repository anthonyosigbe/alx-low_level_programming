#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: Character that needs to be checked
 *
 * Return: 1 if c is lowercase or 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
else
		return (0);
}
