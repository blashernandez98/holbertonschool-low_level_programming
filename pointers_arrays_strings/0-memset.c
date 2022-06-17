#include "main.h"

/**
 * _memset - Functionality same as memset.
 * @b: Byte to write in dest.
 * @dest: Destination string to write byte @b.
 * @n: N bytes to write @b in @dest
 * Return: Pointer to result string.
 */

char *_memset(char *dest, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = b;
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
