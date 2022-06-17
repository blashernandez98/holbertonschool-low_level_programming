#include "main.h"

/**
 * _strchr - Function that locates char @c in string @s.
 * @s: String to find in.
 * @c: Char to look for.
 * Return: Pointer to first occurance of @c in @s
 * If no there is none, returns NULL.
 */

char *_strchr(char *s, char c)
{
	while (s)
	{
		if (*s == c)
			break;
		s++;
	}
	if (*s == c)
		return (s);
	else
		return NULL;
}
