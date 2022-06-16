#include "main.h"

/**
 * _strcmp - Same to strcmp.
 * @s1: First string.
 * @s2: Second string.
 * Return: Int value.
 */

int _strcmp(char *s1, char *s2)
{
	int res = 0;
	
	if (s1 && s2)
	{
		while (*s1 == *s2 && s1)
		{
			s1++;
			s2++;
		}
		res = (int)*s1 - (int)*s2;
	}
	return (res);
}
