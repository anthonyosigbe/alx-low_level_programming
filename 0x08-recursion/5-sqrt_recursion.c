#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number to calculate the natural square root
 *
 * Return: The natural square root.
 */

int _sqrt_recursion(int n)
{
	int num;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	for (num = 1; num * num <= n; num++)
	{
		if (num * num == n)
			return (num);
	}
	return (-1);
}
