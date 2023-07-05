#include "main.h"

/**
 * factorial -  returns the factorial of a given number.
 * @n: Number of factorial to search for.
 *
 * Return: Factorial of n if n > 0.
 * Indicate an error if n < 1.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
