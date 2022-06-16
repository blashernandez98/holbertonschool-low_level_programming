#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies a string.
 * @src: Source string to copy.
 * @dest: Destination string.
 * @n: N bytes to copy from src.
 * Return: Pointer to result string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	printf("dest: %s\nsrc: %s\n", dest, src);

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
