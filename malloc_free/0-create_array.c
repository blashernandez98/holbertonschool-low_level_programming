#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * ************** and initializes it with a specific char.
 * @size: Size of array.
 * @c: Char to initialize.
 * Return: Pointer to array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = NULL;

	if (size)
	{
		arr = malloc(size);
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	free(arr);
	return (arr);
}
