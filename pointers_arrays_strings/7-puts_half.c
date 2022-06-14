#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 * @s: String to calculate length of.
 * Return: Lenght of string @s.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts_half - Function that prints half of a string.
 * @s: String input.
 */

void puts_half(char *s)
{
	int length = _strlen(s);
	int i = length / 2;

	if (length % 2 != 0)
		i++;

	for (; i < length; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
