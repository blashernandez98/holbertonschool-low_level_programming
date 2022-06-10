#include "main.h"

/**
 * print_diagonal - Function that prints a diagonal to std output.
 * @n: Number of / characters to print.
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
