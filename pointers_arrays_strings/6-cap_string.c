#include "main.h"

/**
 * separator - Indicates if a char is a word separator
 * @c: Char input
 * Return: 1 if separator, 0 otherwise.
 */

int separator(char c)
{
	switch (c)
	{
		case (32):
			return (1);
		case (9):
			return (1);
		case (10):
			return (1);
		case (44):
			return (1);
		case (59):
			return (1);
		case (46):
			return (1);
		case (33):
			return (1);
		case (63):
			return (1);
		case '\"':
			return (1);
		case ')':
			return (1);
		case '(':
			return (1);
		case '{':
			return (1);
		default:
			return (0);
	}
}

/**
 * cap_string - Capitalizes all words in a string.
 * @s: String to transform.
 * Return: Pointer to string.
 */

char *cap_string(char *s)
{
	int i;
	char neww = 1;

	if (s)
	{
		for (i = 0; s[i]; i++)
		{
			while ((s[i]) && (separator(s[i])))
			{
				neww = 1;
				i++;
			}
			if ((s[i]) && (neww))
			{
				if (s[i] < 123 && s[i] > 96)
					s[i] -= 32;
			}
			neww = 0;
		}
	}
	return (s);
}
