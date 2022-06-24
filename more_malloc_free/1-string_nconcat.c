#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings in newly allocated memory.
 * @s1: First string
 * @s2: Second string.
 * @n: Bytes to concat from s2.
 * Return: Pointer to new string. 
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res = NULL;
	int len2 = strlen(s2);
	unsigned int i = 0, j;

	if (n < len2)
		res = malloc(strlen(s1) + n + 1);
	else
		res = malloc(strlen(s1) + len2 + 1);
	if (res)
	{
		while (s1)
		{
			res[i] = *s1++;
			i++;
		}
		for (j = 0; (s2[j]) && (j < n); j++)
		{
			res[i] = s2[j];
			i++;
		}
		res[i] = '\0';
	}
	return res;
}
