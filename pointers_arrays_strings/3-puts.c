#include "main.h"

/**
 * _puts - Function that prints a string to stdout.
 * @s: String to print.
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
