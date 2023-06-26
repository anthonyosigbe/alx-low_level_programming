#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: Integer to be swaped
 * @b: Second integer to be swaped
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int val;

	val = *a;
	*a = *b;
	*b = val;
}
