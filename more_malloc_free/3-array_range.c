#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Creates array of ints.
 * @min: First value of array.
 * @max: Last value of array.
 * Return: Pointer to array of ints from min to max.
 */

int *array_range(int min, int max)
{
	int i, n;
	int *res = NULL;

	if (min > max)
		return (res);
	n = max - min + 1;
	res = malloc(sizeof(int) * n);
	if (res)
	{
		for (i = 0; i < n; i++)
			res[i] = min++;
	}
	return (res);
}
