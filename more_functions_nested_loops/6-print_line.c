#include "main.h"

/**
 * print_line - Function that prints a line to std output.
 * @n: Number of _ characters to print.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
