#include "main.h"

/**
 * leet - Encodes a string into "1337".
 * @s: String to encode.
 * Return: Pointer to encoded string.
 */

char *leet(char *s)
{
	char *let = "aAeEoOtTlL";
	char *enc = "4433007711";
	int i, j;

	if (s)
	{
		for (i = 0; s[i]; i++)
		{
			for (j = 0; let[j]; j++)
			{
				if (s[i] == let[j])
				{
					s[i] = enc[j];
					break;
				}
			}
		}
	}
	return (s);
}
