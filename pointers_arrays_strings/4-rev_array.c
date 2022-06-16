#include "main.h"

/**
 * reverse_array - Reverses the content of an array of ints.
 * @a: Array to reverse.
 * @n: Number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int *end = a;
	int i, aux;

	if (!a)
		return;

	for (i = 1; i < n; i++)
		end++;
	for (i = n / 2; i > 0; i--)
	{
		aux = *a;
		*a = *end;
		*end = aux;
		a++;
		end--;
	}
}
