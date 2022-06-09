#include "main.h"

/**
 * _abs - This functions returns the absolute value of an integer.
 * @n: Integer input param.
 * Return: The absolute value of the @n param.
 *
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
