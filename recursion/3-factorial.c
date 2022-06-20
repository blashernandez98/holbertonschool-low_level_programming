#include "main.h"

/**
 * factorial - Calculaes factorial of an integer.
 * @n: Int input.
 * Return: Factorial of @n.
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
