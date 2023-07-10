#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program into a string.
 * @ac: Argument counts passed into the program.
 * @av: Arguments vector/array of the pointers.
 *
 * Return: NULL if ac == 0 or av == NULL,
 * pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg_num, char_num, i, str_size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg_num = 0; arg_num < ac; arg_num++)
	{
		for (char_num = 0; av[arg_num][char_num]; char_num++)
			str_size++;
	}
	str = (char *)malloc(sizeof(char) * (str_size + 1));

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg_num = 0; arg_num < ac; arg_num++)
	{
		for (char_num = 0; av[arg_num][char_num]; char_num++)
		{
			str[i++] = av[arg_num][char_num];
		}
		str[i++] = '\n';
	}
	str[str_size] = '\0';
	return (str);
}
