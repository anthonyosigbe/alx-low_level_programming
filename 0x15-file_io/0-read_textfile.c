#include "main.h"

/**
 * read_textfile - This function reads the content of a text file,
 * specified by the 'filename' and prints it to the,
 * standard output (stdout) using POSIX file I/O.
 * @filename: A pointer to a string containing the name of the file to be read.
 * @letters: The maximum number of letters to be read,
 * and printed from the file.
 *
 * Return: 0 on failure or filename is NULL,
 * otherwise, the actual bytes read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *read_buffer;

	if (filename == NULL)
		return (0);

	read_buffer = malloc(sizeof(char) * letters);
	if (read_buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(read_buffer);
		return (0);
	}

	bytes_read = read(file_descriptor, read_buffer, letters);
	if (bytes_read == -1)
	{
		free(read_buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, read_buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(read_buffer);
		close(file_descriptor);
		return (0);
	}

	free(read_buffer);
	close(file_descriptor);

	return (bytes_written);
}
