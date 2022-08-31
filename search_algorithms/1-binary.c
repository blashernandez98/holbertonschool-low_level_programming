#include "search_algos.h"

/**
 * print_array - Prints array.
 * @a: Array
 * @size: Size of array
 */

void print_array(int *a, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[i]);
}

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
	int half, pos;
	size_t i;

	if (array && size > 1)
	{
		half = (size - 1) / 2;
		print_array(array, size);	
		if (array[half] == value)
			return (half);
		else if (array[half] > value)
			return (binary_search(array, half, value));
		else
		{
			pos = binary_search(array + half + 1, size - half - 1, value);
			if (pos != -1)
				pos += half + 1;
			return (pos);
		}
	}
	else if (size == 1)
	{
		if (array[0] == value)
			return (0);
	}
	return (-1);
}
