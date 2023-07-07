#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers.
 * @argc: The number of arguments supplied.
 * @argv: Points to the arguments of an array
 *
 * Return: 0 if two arguments are provided, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = x * y;

		printf("%d\n", result);

		return (0);
	}
	printf("Error\n");
	return (1);
}
