#include <stdio.h>

/**
 * Description: main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num_count;
	unsigned long fibonacci1 = 0, fibonacci2 = 1, value;
	unsigned long fibonacci1_pt1, fibonacci1_pt2, fibonacci2_pt1, fibonacci2_pt2;
	unsigned long pt1, pt2;

	for (num_count = 0; num_count < 92; num_count++)
	{
		value = fibonacci1 + fibonacci2;
		printf("%lu, ", value);

		fibonacci1 = fibonacci2;
		fibonacci2 = value;
	}

	fibonacci1_pt1 = fibonacci1 / 10000000000;
	fibonacci2_pt1 = fibonacci2 / 10000000000;
	fibonacci1_pt2 = fibonacci1 % 10000000000;
	fibonacci2_pt2 = fibonacci2 % 10000000000;

	for (num_count = 93; num_count < 99; num_count++)
	{
		pt1 = fibonacci1_pt1 + fibonacci2_pt1;
		pt2 = fibonacci1_pt2 + fibonacci2_pt2;
		if (fibonacci1_pt2 + fibonacci2_pt2 > 9999999999)
		{
			pt1 += 1;
			pt2 %= 10000000000;
		}

		printf("%lu%lu", pt1, pt2);
		if (num_count != 98)
			printf(", ");

		fibonacci1_pt1 = fibonacci2_pt1;
		fibonacci1_pt2 = fibonacci2_pt2;
		fibonacci2_pt1 = pt1;
		fibonacci2_pt2 = pt2;
	}
	printf("\n");
	return (0);
}
