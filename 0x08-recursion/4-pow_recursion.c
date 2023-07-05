#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 * @x: Raised to an exponent.
 * @y: The exponet of the raised to.
 *
 * Return: The outcome of x raise to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
