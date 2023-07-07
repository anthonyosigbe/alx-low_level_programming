#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for an amount.
 * @argc: The number of arguments supplied.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly two - 1.
 * Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			coins += cents / 25;
			cents %= 25;
		}
		else if (cents >= 10)
		{
			coins += cents / 10;
			cents %= 10;
		}
		else if (cents >= 5)
		{
			coins += cents / 5;
			cents %= 5;
		}
		else if (cents >= 2)
		{
			coins += cents / 2;
			cents %= 2;
		}
		else
		{
			coins += cents;
			cents = 0;
		}
	}
	printf("%d\n", coins);
	return (0);
}
