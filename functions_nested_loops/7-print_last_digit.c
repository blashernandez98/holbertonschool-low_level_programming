#include "main.h"

/**
 * print_last_digit - Function that prints last digit of a number.
 * @n: Input number
 * Return: Last digit of number @n.
 */

int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}
