#include "main.h"

/**
 * _isupper - Function that checks for uppercase character
 * @c: Character input
 * Return: 1 if @c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	return (0);
}
