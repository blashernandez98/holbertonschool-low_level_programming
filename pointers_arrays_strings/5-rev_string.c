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
 * rev_string - Function that reverses a string
 * @s: String to reverse
 */

void rev_string(char *s)
{
	int length = _strlen(s);
	char *end = s + length - 1;
	char aux;
	int i;

	for (i = 0; i < length / 2; i++)
	{
		aux = *s;
		*s = *end;
		*end = aux;
		s++;
		end--;
	}

}
