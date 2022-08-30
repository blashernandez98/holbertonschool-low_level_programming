#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array.
 * @array: Input array.
 * @size: Size of array.
 * @value: Value to search for.
 *
 * Return: Index of value at array or -1 if not found.
 */

int binary_search(int *array, size_t size, int value)
{
	int half;
	size_t i;

	if (array && size > 1)
	{
		half = (size - 1) / 2;
		printf("Searching in array: ");
		for (i = 0; i < size - 1; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		if (array[half] == value)
			return (half);
		else if (array[half] > value)
			return (binary_search(array, half, value));
		else
			return (binary_search(array + half + 1, size - half - 1, value));
	}
	else
		return (-1);
}
