#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int pwd[120];
	int i, add, n;

	add = 0;

	srand(time(NULL));

	for (i = 0; i < 120; i++)
	{
		pwd[i] = rand() % 98;
		add += (pwd[i] + '0');
		putchar(pwd[i] + '0');

		if ((2772 - add) - '0' < 98)
		{
			n = 2772 - add - '0';
			add += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
