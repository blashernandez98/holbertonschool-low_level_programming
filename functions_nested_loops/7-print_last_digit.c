#include "main.h"

/**
 * print_last_digit - Function that prints last digit of a number.
 * @n: Input number
 * Return: Last digit of number @n.
 */

int print_last_digit(int n)
{
	long int abs;

	if (n > 0)
		abs = n;
	else
		abs = n * -1;
	_putchar(abs % 10 + '0');
	return (abs % 10);
}
