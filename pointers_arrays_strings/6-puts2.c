#include "main.h"

/**
 * puts2 - Prints every other char of a string.
 * @s: String input.
 */

void puts2(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i+= 2)
		_putchar(s[i]);
	
}
