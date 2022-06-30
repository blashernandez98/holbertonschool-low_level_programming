#include "function_pointers.h"

/**
 * array_iterator - Calls a function with each element of an array.
 * @arr: Array of ints.
 * @size: Size of @arr.
 * @action: Function to call.
 */

void array_iterator(int arr[], int size, void (*action)(int))
{
	int i;

	if (action)
	{
		for (i = 0; i < size; i++)
			(*action)(arr[i]);
	}
}
