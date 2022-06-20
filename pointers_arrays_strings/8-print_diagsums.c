#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: Pointer to matrix of @nx@n size of integers.
 * @n: Size of matrix.
 */

void print_diagsums(int *a, int n)
{
	int i, res = 0;

	for (i = 0; i < n * n; i++)
	{
		res += a[i];
		i += n;
	}
	printf("%d, ", res);
	res = 0;

	for (i = n - 1; i <= n * n  - n;)
	{
		res += a[i];
		i += n - 1;
	}
	printf("%d\n", res);
}
