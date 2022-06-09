#include "main.h"

/**
 * _islower - This function receives a char as input
 * @c: char paramenter as input
 * Return: 1 if the char is lowercase.
 */

int _islower(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	else
		return (0);
}
