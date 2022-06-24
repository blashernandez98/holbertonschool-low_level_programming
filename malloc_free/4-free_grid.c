#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * free_grid - Frees 2D array of ints.
 * @grid: Pointer to 2d array.
 * @h: Height of array.
 */

void free_grid(int **grid, int h)
{
	if (grid)
	{
		for (i = 0; i < h; i++)
			free(grid[i]);
		free(grid);
	}
}
