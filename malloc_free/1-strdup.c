#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Creates duplicate of string
 * @str: String to duplicate
 * Return: Pointer to new memory with copy of str or NULL if fails.
 */

char *_strdup(char *str)
{
	char *copy = NULL;
	unsigned long int i, len;

	if (str)
	{
		len = strlen(str);
		copy = malloc(len + 1);
	}
	if (copy)
	{
		for (i = 0; i <= len; i++)
			copy[i] = str[i];
	}
	return (copy);
}
