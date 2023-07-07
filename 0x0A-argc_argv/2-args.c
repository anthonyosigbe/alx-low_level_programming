#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: Argument count supplied.
 * @argv: Argument Vector that points to an array.
 *
 * Return: ALways 0 (Success).
 */

int main(int argc, char *argv[])
{
	int count;
	char *argValue;

	for (count = 0; count < argc; count++)
	{
		argValue = argv[count];
		printf("%s\n", argValue);
	}
	return (0);
}
