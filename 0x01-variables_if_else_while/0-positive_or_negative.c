#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *Description:  main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0 (Success).
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negetive\n", n);
	else
		print("%d is zero\n", n);

	return (0);
}
