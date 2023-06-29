#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time,
 * displaying the byte position,
 * the hex content, and the printable characters.
 * @buffer: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *buffer, int size)
{
	int byte, position;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (position = 0; position < 10; position++)
		{
			if (position + byte >= size)
				printf("  ");
			else
				printf("%02x", buffer[position + byte]);

			if ((position % 2) != 0 && position != 0)
				printf(" ");
		}

		for (position = 0; position < 10; position++)
		{
			if (position + byte >= size)
				break;

			else if (buffer[position + byte] >= 31 && buffer[position + byte] <= 126)
				printf("%c", buffer[position + byte]);
			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
