#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0 on successful completion.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_copy(argv[1], argv[2]);
	exit(0);
}

/**
 * file_copy - Copies the contents from one file to another.
 * @src: The source file name.
 * @dest: The destination file name.
 *
 * Return: Nothing.
 */
void file_copy(const char *src, const char *dest)
{
	int src_fd, dest_fd, bytes_read;
	char buffer[1024];

	src_fd = open(src, O_RDONLY);
	if (!src || src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	dest_fd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((bytes_read = read(src_fd, buffer, 1024)) > 0)
	{
		if (write(dest_fd, buffer, bytes_read) != bytes_read || dest_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
}
