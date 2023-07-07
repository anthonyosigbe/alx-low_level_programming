#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers, followed by a new line.
 * @argc: Argument count that is passed in to the program.
 * @argv: Argument vector that points to an array.
 *
 * Return: Error if number contains symbols that ar not digits
 * otherwise 0.
 */

int main(int argc, char *argv[])
{
	int index;
	unsigned int total = 0;

	if (argc > 1)
	{
		for (index = 1; index < argc; index++)
		{
			char *arg = argv[index];
			unsigned int pos = 0;

			while (arg[pos] != '\0')
			{
				if (!isdigit(arg[pos]))
				{
					printf("Error\n");
					return (1);
				}
				pos++;
			}
			total += atoi(arg);
		}
		printf("%d\n", total);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

