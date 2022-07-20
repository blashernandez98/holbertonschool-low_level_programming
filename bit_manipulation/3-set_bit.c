#include "main.h"

/**
 * pow2 - Calculates powers of 2.
 * @power: Power to calculate.
 *
 * Return: 2 ^ @power
 */

int pow2(int power)
{
	int i = 0, res = 1;

	for (i = 0; i < power; i++)
		res *= 2;
	return (res);
}

/**
 * set_bit - Sets bit of n at index to 1.
 * @n: Number
 * @index: Index
 *
 * Return: 1 if successful, -1 if fails.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n = ((*n) | pow2(index));

	return (1);
}
