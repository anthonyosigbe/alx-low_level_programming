#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: Width of the 2-dimensional array.
 * @height: Height of the 2-dimentional array.
 *
 * Return: Pointer to the 2-dimensional array of integers or,
 * NULL if width <= 0,height <= 0, or the function fails.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row_index, col_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (row_index = 0; row_index < height; row_index++)
	{
		grid[row_index] = (int *)malloc(sizeof(int) * width);

		if (grid[row_index] == NULL)
		{
			for (; row_index >= 0; row_index--)
				free(grid[row_index]);

			free(grid);
			return (NULL);
		}
	}

	for (row_index = 0; row_index < height; row_index++)
	{
		for (col_index = 0; col_index < width; col_index++)
			grid[row_index][col_index] = 0;
	}
	return (grid);
}
