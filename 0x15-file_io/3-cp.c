#include "main.h"

/**
 * allocate_temp_buffer - Allocates memory for a temporary,
 * buffer of 1024 bytes.
 * @file: The name of the file the temporary buffer is being allocated for.
 *
 * Return: A pointer to the newly-allocated temporary buffer.
 */

char *allocate_temp_buffer(char *file)
{
	char *temp_buffer;

	temp_buffer = malloc(sizeof(char) * 1024);

	if (temp_buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't allocate memory for %s\n", file);
		exit(99);
	}
	return (temp_buffer);
}

/**
 * close_file_descriptor - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */

void close_file_descriptor(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 * read_write_files - Reads data from the source file,
 * and writes to the destination file.
 * @source_fd: The file descriptor of the source file.
 * @dest_fd: The file descriptor of the destination file.
 */

void read_write_files(int source_fd, int dest_fd)
{
	char temp_buffer[1024];
	int read_bytes, written_bytes;

	do {
		read_bytes = read(source_fd, temp_buffer, 1024);
		if (read_bytes == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from the source file\n");
			exit(98);
		}

		written_bytes = write(dest_fd, temp_buffer, read_bytes);

		if (written_bytes == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to the destination file\n");
			exit(99);
		}
	} while (read_bytes > 0);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 *
 *  Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	char *temp_buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	temp_buffer = allocate_temp_buffer(argv[2]);

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from the source file\n");
		free(temp_buffer);
		exit(98);
	}

	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to the destination file\n");
		free(temp_buffer);
		exit(99);
	}
	read_write_files(source_fd, dest_fd);
	free(temp_buffer);
	close_file_descriptor(source_fd);
	close_file_descriptor(dest_fd);

	return (0);
}
