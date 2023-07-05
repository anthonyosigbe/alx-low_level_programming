#include "main.h"


int evaluate_prime(int input_num, int factor);
int is_prime_number(int n);

/**
 * evaluate_prime - Check if a number is prime.
 * @input_num: The number to be checked.
 * @factor: The factor to be tested.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int evaluate_prime(int input_num, int factor)
{
	if (input_num <= 1)
		return (0);

	if (input_num % factor == 0 && factor > 1)
		return (0);

	if ((input_num / factor) < factor)
		return (1);

	return (evaluate_prime(input_num, factor + 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (evaluate_prime(n, 1));
}
