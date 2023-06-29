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
	char generated_password[84];
	int position = 0, total = 0, set1, set2;

	srand(time(0));
	while (total < 2772)
	{
		generated_password[position] = 33 + rand() % 94;
		total += generated_password[position++];
	}
	generated_password[position] = '\0';

	if (total != 2772)
	{
		set1 = (total - 2772) / 2;
		set2 = (total - 2772) / 2;

		if ((total - 2772) % 2 != 0)
			set1++;

		for (position = 0; generated_password[position]; position++)
		{
			if (generated_password[position] >= (33 + set1))
			{
				generated_password[position] -= set1;
				break;
			}
		}
		for (position = 0; generated_password[position]; position++)
		{
			if (generated_password[position] >= (33 + set2))
			{
				generated_password[position] -= set2;
				break;
			}
		}
	}
	printf("%s", generated_password);

	return (0);
}
