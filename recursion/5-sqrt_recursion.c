#include "main.h"

/**
 * guess - Finds sqrt of int by guessing
 * @n: Int to find sqrt.
 * @g: Guess
 * Return: Sqrt of @n if exists, -1 otherwise.
 */

int guess(int n, int g)
{
	if (g < n / 2)
	{
		if (n / g == g)
			return (g);
		else if (n / g < g / 10)
			return (guess(n, g * 10));
		else
			return (guess(n, g + 1));
	}
	return (-1);
}

/**
 * _sqrt_recursion - Find natural sqrt of int.
 * @n: Int to find sqrt.
 * Return: Sqrt of @n if it exists, -1 otherwise.
 */

int _sqrt_recursion(int n)
{
	if (n > 3)
		return (guess(n, 2));
	else if (n == 1)
		return (1);
	return (-1);
}
