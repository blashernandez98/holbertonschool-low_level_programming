#include "main.h"

/**
 * get_bit - Get bit at index
 * @n: Number
 * @index: Index
 *
 * Return: Bit of n at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	if (index)
		return ((n >> index) & 1);
	return (n && 1);
}
