#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloctest - Free memory when malloc failed in 2d arr
 * @grid: Pointer to pointers of ints.
 * @i: Height of arr to check.
 * @width: Width of arr.
 * Return: 1 if failed, 0 on success.
 */

int malloctest(int **grid, int i, int width)
{
	int h, w;

	if (!(grid[i]))
	{
		for (h = --i; h >= 0; h--)
		{
			for (w = 0; w < width; w++)
				free(&grid[w][h]);
		}
		free(grid);
		return (1);
	}
	return (0);
}

/**
 * alloc_grid - Allocates and returns pointer to 2 dimensonal array of ints.
 * @h: Height of array.
 * @w: Width of array.
 * Return: Pointer to array.
 */

int **alloc_grid(int w, int h)
{
	int **grid = NULL;
	int i, j;

	if ((h <= 0) || (w <= 0))
		return (NULL);

	grid = (int **)malloc(h * sizeof(int *));
	if (!(grid))
		return (NULL);

	for (i = 0; i < h; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * w);
		if (malloctest(grid, i, w))
			return (NULL);
	}

	if (grid)
	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < w; j++)
				grid[i][j] = 0;
		}
	}
	return (grid);
}
