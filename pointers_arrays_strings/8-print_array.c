#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints the @n elements of an array of ints.
 * @arr: Pointer to array of integers.
 * @n: Number of elements to print.
 */

void print_array(int *arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
