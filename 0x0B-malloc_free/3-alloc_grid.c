#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to 2-D arrays of int
 * @width: width of array
 * @height: height of array
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **grid;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
