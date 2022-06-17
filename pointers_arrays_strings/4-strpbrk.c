#include "main.h"
#include "stddef.h"

/**
 * is_inside - Checks if char @c is inside string @s.
 * @s: String to search in.
 * @c: Char to search for.
 * Return: 1 if found, 0 otherwise.
 */

int is_inside(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

/**
 * _strpbrk - Same functionality as strpbrk.
 * @s: String to search in.
 * @accept: String with chars to search for in @s
 * Return: Pointer to first byte in @s that is a char
 * contained in @a, or NULL otherwise.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (is_inside(accept, *s))
			break;
		s++;
	}
	if (!(*s) && !(is_inside(accept, '\0')))
		s = NULL;
	return (s);
}
