#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array.
 * @array: Array input.
 * @size: Size of array.
 * @value: Value to search for.
 *
 * Return: Index of value in array or -1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; array && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
