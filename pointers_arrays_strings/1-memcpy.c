#include "main.h"

/**
 * _memcpy - Functionality same as memcpy.
 * @src: String to copy in dest.
 * @dest: Destination string to write on.
 * @n: N bytes to write from @src in @dest
 * Return: Pointer to result string.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
