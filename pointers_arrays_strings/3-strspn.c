#include "main.h"

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
 * _strspn - Same functionality as strspn.
 * @s: String to look for.
 * @accept: Bytes to count.
 * Return: Number of bytes in the initial segment
 * of @s which consists only of bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	
	while (*s)
	{
		if (is_inside(accept, *s))
			res++;
		else
			break;
		s++;
	}
	return (res);
}
