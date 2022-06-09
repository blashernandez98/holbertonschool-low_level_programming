#include "main.h"

/**
 * print_last_digit - Function that prints last digit of a number.
 * @n: Input number
 * Return: Last digit of number @n.
 */

int print_last_digit(int n)
{
	int abs = _abs(n);
	_putchar(abs % 10 + '0');
	return (abs % 10);
}
