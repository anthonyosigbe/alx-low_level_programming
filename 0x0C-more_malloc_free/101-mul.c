#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int stringLength(char *str);
char *createCharArray(int size);
char *removeLeadingZeroes(char *str);
int getDigit(char c);
void multiplyByDigit(char *result, char *number, int digit, int leadingZeroes);
void addNumbers(char *sum, char *nextNum, int nextLength);

/**
 * stringLength - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int stringLength(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * createCharArray - Creates an array of chars and initializes it with,
 * the character 'x'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 * Description: If there is insufficient space,
 * the function exits with a status of 98.
 * Return: A pointer to the array.
 */
char *createCharArray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';
	array[index] = '\0';
	return (array);
}

/**
 * removeLeadingZeroes - Removes leading zeroes from a string of numbers.
 * @str: The string of numbers to be processed.
 *
 * Return: A pointer to the next non-zero element.
 */
char *removeLeadingZeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * getDigit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function exits with a status of 98.
 *
 * Return: The converted int.
 */
int getDigit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
 * multiplyByDigit - Multiplies a string of numbers by a single digit.
 * @result: The buffer to store the result.
 * @number: The string of numbers.
 * @digit: The single digit.
 * @leadingZeroes: The necessary number of leading zeroes.
 *
 * Description: If the number contains a non-digit character,
 * the function exits with a status value of 98.
 */
void multiplyByDigit(char *result, char *number, int digit, int leadingZeroes)
{
	int numberLength, product, tens = 0;

	numberLength = stringLength(number) - 1;
	number += numberLength;

	while (*result)
	{
		*result = 'x';
		result++;
	}
	result--;

	while (leadingZeroes--)
	{
		*result = '0';
		result--;
	}
	for (; numberLength >= 0; numberLength--, number--, result--)
	{
		if (*number < '0' || *number > '9')
		{
			printf("Error\n");
			exit(98);
		}
		product = (*number - '0') * digit;
		product += tens;
		*result = (product % 10) + '0';
		tens = product / 10;
	}
	if (tens)
		*result = (tens % 10) + '0';
}

/**
 * addNumbers - Adds the numbers stored in two strings.
 * @sum: The buffer storing the running sum.
 * @nextNum: The next number to be added.
 * @nextLength: The length of nextNum.
 */
void addNumbers(char *sum, char *nextNum, int nextLength)
{
	int total, tens = 0;

	while (*(sum + 1))
		sum++;

	while (*(nextNum + 1))
		nextNum++;

	for (; *sum != 'x'; sum--)
	{
		total = (*sum - '0') + (*nextNum - '0');
		total += tens;
		*sum = (total % 10) + '0';
		tens = total / 10;
		nextNum--;
		nextLength--;
	}
	for (; nextLength >= 0 && *nextNum != 'x'; nextLength--)
	{
		total = (*nextNum - '0');
		total += tens;
		*sum = (total % 10) + '0';
		tens = total / 10;
		sum--;
		nextNum--;
	}
	if (tens)
		*sum = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number,
 * contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *finalProduct, *nextProduct;
	int size, index, digit, leadingZeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = removeLeadingZeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = removeLeadingZeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = stringLength(argv[1]) + stringLength(argv[2]);
	finalProduct = createCharArray(size + 1);
	nextProduct = createCharArray(size + 1);

	for (index = stringLength(argv[2]) - 1; index >= 0; index--)
	{
		digit = getDigit(*(argv[2] + index));
		multiplyByDigit(nextProduct, argv[1], digit, leadingZeroes++);
		addNumbers(finalProduct, nextProduct, size - 1);
	}
	for (index = 0; finalProduct[index]; index++)
	{
		if (finalProduct[index] != 'x')
			putchar(finalProduct[index]);
	}
	putchar('\n');
	free(nextProduct);
	free(finalProduct);

	return (0);
}

