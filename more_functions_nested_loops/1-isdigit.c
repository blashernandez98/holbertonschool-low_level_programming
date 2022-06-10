#include "main.h"

/**
 * _isdigit - Function that checks for digit character
 * @c: Character input
 * Return: 1 if @c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	return (0);
}
