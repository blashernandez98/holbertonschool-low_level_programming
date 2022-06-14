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
