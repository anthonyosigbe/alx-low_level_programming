#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int validateInput(const char *str);
int multiply(int num1, int num2);
int main(int argc, char *argv[]);
int multiply(int num1, int num2);

/**
 * multiply - Multiplies two integers.
 * Description: Multiplies two numbers.
 * @num1: The first integer.
 * @num2: The second integer.
 *
 * Return: The product of num1 and num2.
 */

int multiply(int num1, int num2);

/**
 * validateInput - Validates if a string contains only digits.
 * @str: The string to validate.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */

int validateInput(const char *str);
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Description: Multiplies two positive numbers provided as,
 * command-line arguments.
 * It then converts the arguments to integers,
 * calculates their product using the multiply function,
 * and prints the result.
 *
 * Return: 0 on success, or 98 if the number of arguments is incorrect or,
 * the arguments contain non-digits. Print Error.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!validateInput(argv[1]) || !validateInput(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);

	printf("%d\n", result);
	return (0);
}

/**
 * multiply - Multiplies two integers.
 * @num1: The first integer.
 * @num2: The second integer.
 *
 * Return: The product of num1 and num2.
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * validateInput - Validates if a string contains only digits.
 * @str: The string to validate.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */

int validateInput(const char *str)
{
	while (*str != '\0')
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
