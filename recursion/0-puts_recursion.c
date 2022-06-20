#include "main.h"

/**
 * _puts_recursion - Similar function to puts but with recursion.
 * @s: String to print.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
