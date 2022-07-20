#include "main.h"

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

	n = n ^ m;

	while (n)
	{
		res += n & 1;
		n >>= 1;
	}
	return (res);
}
