#include "main.h"

/**
 * print_triangle - Prints triangle, by using the character #.
 * @size: size of the triangle.
 * Prints on a new line.
 */
void print_triangle(int size)
{
	int height, base;

	if (size > 0)
	{
		for (height = 1; height <= size; height++)
		{
			for (base = size - height; base > 0; base--)
				_putchar(' ');

			for (base = 0; base < height; base++)
				_putchar('#');

			if (height == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
