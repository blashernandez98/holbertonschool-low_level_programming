#include "main.h"

/**
 * _pow_recursion - Similar to std library "pow".
 * @a: Base of pow.
 * @b: Exponent of pow.
 * Return: @x ^ @y if y >= 0, -1 otherwise.
 */

int _pow_recursion(int a, int b)
{
	if (b > 0)
		return (a * _pow_recursion(a, b - 1));
	else if (b == 0)
		return (1);
	else
		return (-1);
}
