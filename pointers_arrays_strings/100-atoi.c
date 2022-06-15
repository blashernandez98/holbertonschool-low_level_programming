#include "main.h"

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
		if (str[i] == 45)
			mult *= -1;
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
			res += (str[i] - '0') * mult;
			if (mult != 100000000)
				mult *= 10;
			i--;
		}
	}
	return (res);
}
