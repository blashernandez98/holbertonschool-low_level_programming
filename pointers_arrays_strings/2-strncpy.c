#include "main.h"

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

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
