#include "main.h"

/**
 * _strlen - Function that returns lenght of a string.
 * @s: String to count length.
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
 * print_rev - Function that prints a string in reverse.
 * @s: String to reverse.
 */

void print_rev(char *s)
{
	int lenght = _strlen(s);
	char str[length];
	int i;

	for (i = 0; i < length; i++)
	{
		s = s + length - 1;
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
