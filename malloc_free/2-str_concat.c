#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Allocates new memory to concat two strings
 * @s1: First string input
 * @s2: Second string input
 * Return: Pointer to new memory with @s1 + @s2
 */

char *str_concat(char *s1, char *s2)
{
	unsigned long int len = 0, i = 0;
	char *concat = NULL;

	if (s1)
		len += strlen(s1);
	if (s2)
		len += strlen(s2);

	if (len++ || (!(s1) && !(s2)))
	{
		concat = malloc(len);
	}
	if (concat)
	{
		for (; (s1) && (*s1); s1++)
		{
			concat[i] = *s1;
			i++;
		}
		for (; (s2) && (*s2); s2++)
		{
			concat[i] = *s2;
			i++;
		}
		concat[i] = '\0';
	}
	return (concat);
}
