#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array.
 * @mem: Number of elements in the array.
 * @size: Size of elements.
 * Return: Void pointer to buffer of newly allocated memory.
 */

void *_calloc(unsigned int mem, unsigned int size)
{
	void *res = NULL;

	if (mem && size)
	{
		res = malloc(mem * size);
		if (res)
			memset(res, 0, (mem * size));
	}
	return (res);
}
