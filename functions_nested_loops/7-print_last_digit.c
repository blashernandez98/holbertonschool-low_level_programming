#include "main.h"

/**
 * print_last_digit - Function that prints last digit of a number.
 * @n: Input number
 * Return: Last digit of number @n.
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
