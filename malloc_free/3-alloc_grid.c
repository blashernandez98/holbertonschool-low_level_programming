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
	int size = 0;

	if ((h <= 0) || (w <= 0))
		return (NULL);
	size = w * h;
	grid = malloc(4 * size);

	if (grid)
	{
		for (; h >= 0; --h)
		{
			for (; w >= 0; --w)
				grid[w][h] = 0;
		}
	}
	return (grid);
}
