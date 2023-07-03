#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals,
 * of a square matrix of integers.
 * @a: Matrix of the integers
 * @size: Size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int idx, dig1 = 0, dig2 = 0;
	int *ptr1 = a;
	int *ptr2 = a + size - 1;

	for (idx = 0; idx < size; idx++)
	{
		dig1 += *ptr1;
		ptr1 += size + 1;
	}

	for (idx = 0; idx < size; idx++)
	{
		dig2 += *ptr2;
		ptr2 += size - 1;
	}
	printf("%d, %d\n", dig1, dig2);
}
