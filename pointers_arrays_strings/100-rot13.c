#include "main.h"
#include <stdlib.h>

/**
 * rot13 - Encodes string using rot13.
 * @s: String to encode.
 * Return: Pointer to encoded string.
 */

char *rot13(char *s)
{
	char alpha[53];
	char rot_13[53];
	int i, j;
	
	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot_13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (alpha[j] == s[i])
			{
				s[i] = rot_13[j];
				break;
			}
		}	
	}
	return (s);
}
