#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int get_wordLength(char *str);
int get_wordCount(char *str);
char **strtow(char *str);

/**
 * get_wordLength - Locates the index marking,
 * the end of the first word.
 * @str: Searched string.
 *
 * Return: Initial word pointed to by the str marked by the index.
 */

int get_wordLength(char *str)
{
	int i = 0, length = 0;

	while (str[i] && str[i] != ' ')
	{
		length++;
		i++;
	}
	return (length);
}

/**
 * get_wordCount - counts the number of within a string.
 * @str: String to be searched for.
 *
 * Return: Number of words within the string.
 */

int get_wordCount(char *str)
{
	int i = 0, words = 0, length = 0;

	while (str[i])
	{
		length++;
		i++;
	}
	for (i = 0; i < length; i++)
	{
		if (str[i] != ' ')
		{
			words++;
			i += get_wordLength(str + i);
		}
	}
	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: String that will be splitted.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 * Otherwise - a pointer to an array of strings (words).
 */

char **strtow(char *str)
{
	char **words_array;
	int i = 0, word_count, x, word_length, y;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = get_wordCount(str);
	if (word_count == 0)
		return (NULL);

	words_array = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (words_array == NULL)
		return (NULL);

	for (x = 0; x < word_count; x++)
	{
		while (str[i] == ' ')
			i++;

		word_length = get_wordLength(str + i);

		words_array[x] = (char *)malloc(sizeof(char) * (word_length + 1));
			if (words_array[x] == NULL)
			{
				for (; x >= 0; x--)
					free(words_array[x]);

				free(words_array);
				return (NULL);
			}
		for (y = 0; y < word_length; y++)
			words_array[x][y] = str[i++];

		words_array[x][y] = '\0';
	}
	words_array[x] = NULL;
	return (words_array);
}
