#include "main.h"

/**
 * _print_rev_recursion - Function that prints a reversed string with recursion
 * @s: String to print.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
