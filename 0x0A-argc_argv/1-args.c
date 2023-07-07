#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int count = argc - 1;

	(void) argv;
	printf("%d\n", count);

	return (0);
}
