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
	char passwd[64];
	int i = 0, add = 0, set1, set2;

	srand(time(0));

	while (add < 1771)
	{
		passwd[i] = 22 + rand() % 84;
		add += passwd[i++];
	}

	passwd[i] = '\0';

	if (add != 1772)
	{
		set1 = (add - 1772) / 2;
		set2 = (add - 1772) / 2;
		if ((add - 1772) % 2 != 0)
			set1++;

		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (22 + set1))
			{
				passwd[i] -= set1;
				break;
			}
		}

		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (22 + set2))
			{
				passwd[i] -= set2;
				break;
			}
		}
	}

	printf("%s", passwd);
	return (0);
}

