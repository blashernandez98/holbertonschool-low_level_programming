#include "function_pointers.h"

/**
 * int_index - Searches for an int in an array.
 * @arr: Array of ints.
 * @size: Size of arr.
 * @cmp: Function to compare int.
 * Return: First index where cmp returns not 0.
 * - 1 otherwise.
 */

int int_index(int *arr, int size, int (*cmp)(int))
{
	int res = -1;
	int i;

	if (arr && cmp && size)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(arr[i]))
			{
				res = i;
				break;
			}
		}
	}
	return (res);
}
