#include "main.h"

/**
 * _isalpha - This function receives a char as input
 * @c: char paramenter as input
 * Return: 1 if the char is a letter and 0 otherwise.
 */

int _isalpha(int c)
{
	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
		return (1);
	else
		return (0);
}
