#include "main.h"

/**
 * recursive_bits - Finds number of different bits in number.
 * @n: First number
 * @m: Second number
 *
 * Return: 1 if current bit different, 0 otherwise.
 */

int recursive_bits(unsigned long int n, unsigned long int m)
{
	int res = 0;

	if (n || m)
	{
		res += recursive_bits(n >> 1, m >> 1);
		return ((~((n & 1) & (m & 1))) + res);
	}
	return (res);
}

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First number
 * @m: Second number
 *
 * Return: Number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;

	while (n || m)
	{
		res += (~((n & 1) & (m & 1)));
		n >>= 1;
		m >>= 1;
	}
	return (res);
}
