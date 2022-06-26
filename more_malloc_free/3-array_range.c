#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int *array_range(int min, int max)
{
	int i, n;
	int *res = NULL;

	if (min > max)
		return (res);
	else
		n = max - min + 1;
	arr = malloc(sizeof(int) * n);
	if (arr)
	{
		for (i = 0; i < n; i++)
			arr[i] = min++;
	}
	return (arr);
}
