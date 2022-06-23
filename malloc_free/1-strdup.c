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
	int i;

	if (str)
		copy = malloc(strlen(str));
	if (copy)
	{
		for (i = 0; i < strlen(str); i++)
			copy[i] = str[i];
	}
	return (copy);
}
