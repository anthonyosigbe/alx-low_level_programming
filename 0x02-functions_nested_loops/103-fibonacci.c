#include <stdio.h>

/**
 * Description: main -prints the sum of the even-valued terms,
 * followed by a new line.
 * Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long fibonacci1 = 0, fibonacci2 = 1, fibonacci_sum;
	float total_sum;

	while (1)
	{
		fibonacci_sum = fibonacci1 + fibonacci2;
		if (fibonacci_sum > 4000000)
			break;

		if ((fibonacci_sum % 2) == 0)
			total_sum += fibonacci_sum;

		fibonacci1 = fibonacci2;
		fibonacci2 = fibonacci_sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
