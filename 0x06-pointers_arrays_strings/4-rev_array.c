#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers to be reversed.
 * @n: the number of elements of array to be swaped.
 */

void reverse_array(int *a, int n)
{
	int brf, i;

	for (i = n - 1; i >= n / 2; i--)

	{
		brf = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = brf;
	}
}
