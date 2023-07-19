#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program to print its own opcodes.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0 to indicate successful execution.
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	int (*addr)(int, char **) = main;
	unsigned char opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcodes = *((unsigned char *)addr);
		printf("%.2x", opcodes);

		if (i != bytes - 1)
		{
			printf(" ");
		}
		addr++;
	}
	printf("\n");

	return (0);
}
