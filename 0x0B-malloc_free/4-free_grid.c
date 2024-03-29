#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free memories
 * @grid: previously created grid
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
