#include "main.h"
#include <stdio.h>

/**
 * guess - Finds sqrt of int by guessing
 * @n: Int to find sqrt.
 * @g: Guess
 * Return: Sqrt of @n if exists, closes int to sqrt otherwise.
 */

int guess(int n, int g)
{
	if (n / g == g && n % g == 0)
		return (g);
	else if (n > g * g * 100)
		return (guess(n, g * 10));
	else if ((g + 1) * (g + 1) > n)
		return (g);
	else
		return (guess(n, g + 1));
}

/**
 * sqrt_aprox - Find natural sqrt of int.
 * @n: Int to find sqrt.
 * Return: Sqrt of @n if it exists.
 * closes int to sqrt otherwise.
 */

int sqrt_aprox(int n)
{
	if (n > 3)
		return (guess(n, 2));
	else
		return (1);
}

/**
 * isdivisor - checks if a number is has any divisor.
 * @n: Number to check if divisible by @d.
 * @d: Initial posible divisor
 * @sqrt: Square root of @n.
 * Return: 1 if no divisor found, 0 otherwise.
 */

int isdivisor(int n, int d, int sqrt)
{
	if (n < 4)
		return (1);
	if (n % d == 0)
		return (0);
	if (d < sqrt)
		return (isdivisor(n, d + 1, sqrt));
	return (1);
}

/**
 * is_prime_number - Calculates wether a number is prime or not.
 * @n: Number to check if prime.
 * Return: 1 if prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	int sqrt = sqrt_aprox(n);

	if (n > 1)
		return (isdivisor(n, 2, sqrt));
	return (0);
}
