#include "main.h"

/**
 * swap_int - Function that swaps the values of two int variables.
 * @a: First int to swap.
 * @b: Second int to swap.
 */

void swap_int(int *a, int *b)
{
	int c, d;
	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
