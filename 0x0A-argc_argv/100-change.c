#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for an amount.
 * @argc: The number of arguments supplied.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 * Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int cents, coins;
	int i;
	int denominations[] = {25, 10, 5, 2, 1};
	int numDenominations = sizeof(denominations) / sizeof(denominations[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	coins = 0;

	for (i = 0; i < numDenominations; i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}
	printf("%d\n", coins);

	return (0);
}
