#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Allocates and returns pointer to 2 dimensonal array of ints.
 * @h: Height of array.
 * @w: With of array.
 * Return: Pointer to array.
 */

int **alloc_grid(int w, int h)
{
	int **grid = NULL;
	int i, j;

	if ((h <= 0) || (w <= 0))
		return (NULL);
	
	grid = (int**)malloc(h * sizeof(int*));
	for (i = 0; i < w; i++)
		grid[i] = (int*)malloc(sizeof(int));

	if (grid && grid[0])
	{
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < w; j++)
				grid[i][j] = 0;
		}
	}
	return (grid);
}
