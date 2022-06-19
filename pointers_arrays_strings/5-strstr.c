#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of the
 * substring @needle in the string @haystack.
 * @needle: String to find.
 * @haystack: String to find in.
 * Return: Pointer to first char of @needle in
 * @haystack or NULL if its not there.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	char *res = NULL;

	while (*haystack)
	{
		i = 0;

		while (*haystack == needle[i] && needle[i])
		{
			if (i == 0)
				res = haystack;
			haystack++;
			i++;
		}
		if (!(needle[i]))
			return (res);
		if (i = 0)
			haystack++;
	}
	return (res);
}
