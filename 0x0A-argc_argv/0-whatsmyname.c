#include "main.h"
#include <stdio.h>

/**
 * main - A progrsm that prints its name, followed bt ne line.
 * @argv: Argument Vector supplied to the program.
 * @argc: Argument count supplied to the program.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
