#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 * @s: String to calculate length of.
 * Return: Lenght of string @s.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}


/**
 * isnumber - Evaluates a char to see if its a number
 * @c: char input
 * Return: Int: Value of char if its a number, -1 otherwise.
 */

int isnumber(char c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}


/**
 * _atoi - Converts string to integer.
 * @str: String to convert
 * Return: Integer inside string or 0 if no int.
 */

int _atoi(char *str)
{
	int res = 0, i = 0, start, mult = 1;

	while (str[i] != '\0')
	{
		if (isnumber(str[i]) > 0)
			break;
		i++;
	}
	if (str[i] != '\0')
	{
		start = i;
		while (str[i] != '\0')
			i++;
		i--;
		while (i >= start)
		{
			res += (str[i] * mult);
			mult *= 10;
			i--;
		}
		if (str[i] == '-')
			res *= -1;
	}
	return (res);
}
