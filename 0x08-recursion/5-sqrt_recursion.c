#include "main.h"

int find_sqrt(int input_num, int let);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Find the square root of a number.
 * @input_num: The number to find the square root of.
 * @let: The square root value to be tested.
 *
 * Return: Square root if found, otherwise -1.
 */
int find_sqrt(int input_num, int let)
{
	if ((let * let) == input_num)
		return (let);

	if (let == input_num / 2)
		return (-1);

	return (find_sqrt(input_num, let + 1));
}

/**
 * _sqrt_recursion - Calculate the square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: Square root if found, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	int let = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, let));
}

