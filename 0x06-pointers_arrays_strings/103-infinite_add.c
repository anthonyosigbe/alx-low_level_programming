#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_position);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds two numbers stored in strings.
 * @n1: First number.
 * @n2: Second number.
 * @r: Buffer to store the result.
 * @r_position: Current position in the buffer.
 *
 * Return: Pointer to the result if the buffer can store the sum, otherwise 0.
 */
char *add_strings(char *n1, char *n2, char *r, int r_position)
{
	int sum, carry = 0;

	for (; *n1 && *n2; n1--, n2--, r_position--)
	{
		sum = (*n1 - '0') + (*n2 - '0') + carry;
		*(r + r_position) = (sum % 10) + '0';
		carry = sum / 10;
	}

	for (; *n1; n1--, r_position--)
	{
		sum = (*n1 - '0') + carry;
		*(r + r_position) = (sum % 10) + '0';
		carry = sum / 10;
	}

	for (; *n2; n2--, r_position--)
	{
		sum = (*n2 - '0') + carry;
		*(r + r_position) = (sum % 10) + '0';
		carry = sum / 10;
	}

	if (carry && r_position >= 0)
	{
		*(r + r_position) = (carry % 10) + '0';
		return (r + r_position);
	}
	else if (carry && r_position < 0)
		return (0);

	return (r + r_position + 1);
}

/**
 * infinite_add - Adds two numbers.
 * @n1: First number to be added.
 * @n2: Second number to be added.
 * @r: Buffer to store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the result if the buffer can store the sum, otherwise 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int position, n1_len = 0, n2_len = 0;

	for (position = 0; *(n1 + position); position++)
		n1_len++;

	for (position = 0; *(n2 + position); position++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
