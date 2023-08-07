#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 if successful, -1 on failure or if the file does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int content_length;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		content_length = _strlen(text_content);

		if (write(file_descriptor, text_content, content_length) == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}

/**
 * _strlen - Returns the length of a string.
 * @s: String to count.
 *
 * Return: String length.
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;

	return (count);
}
