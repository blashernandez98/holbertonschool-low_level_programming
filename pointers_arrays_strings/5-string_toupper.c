#include "main.h"

/**
 * string_toupper - Converts all lowercase to uppercase.
 * @s: String to convert.
 * Return: Pointer to string.
 */

char *string_toupper(char *s)
{
	int i;

	if (s)
	{
		for (i = 0; s[i]; i++)
		{
			if (s[i] > 96 && s[i] < 123)
				s[i] -= 32;
		}
	}
	return (s);
}
