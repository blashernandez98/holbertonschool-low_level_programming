#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes of src.
 * @src: Source string to append.
 * @dest: Destination string.
 * @n: N bytes to copy from src.
 * Return: Pointer to result string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; (src[j] != '\0' && j < n); j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
