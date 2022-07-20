#include "main.h"
#include <string.h>

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
 * binary_to_uint - Converts binary to unsigned int
 * @b: String of 0s and 1s.
 *
 * Return: Converted number or 0 if fails.
 */

unsigned int binary_to_uint(const char *b)
{
	int len, i, pow;
	unsigned int res = 0;

	if (b)
	{
		len = strlen(b);
		pow = len - 1;
		for (i = 0; i < len; i++, pow--)
		{
			if (b[i] == '1')
				res += pow2(pow);
			if (b[i] != '1' && b[i] != '0')
				return (0);
		}
	}
	return (res);
}
