#include "main.h"

/**
 * _strcpy - Copies the string pointed by @src to @dest.
 * @src: String to cpy.
 * @dest: Where to cpy.
 * Return: Pointer to @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do
	{
		dest[i] = src[i];
		i++;
	} while (src[i - 1] == '\0')
	return (dest);
}
