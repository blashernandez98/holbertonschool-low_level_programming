#include "main.h"

/**
 * clear_bit - Sets bit of n at index to 0.
 * @n: Number
 * @index: Index
 *
 * Return: 1 if successful, -1 if fails.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
