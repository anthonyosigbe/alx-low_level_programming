#include "dog.h"
#include <stdlib.h>

int _strlen(const char *str);
char *_strcpy(char *dest, const char *src);

/**
 * _strlen - Calculates the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - Copies the string pointed to by src, including,
 * the null byte, to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * * Return: The pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - Creates a new dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the newly created dog structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	_strcpy(doggy->name, name);

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	_strcpy(doggy->owner, owner);

	doggy->age = age;
	return (doggy);
}
