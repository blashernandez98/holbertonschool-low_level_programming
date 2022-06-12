#include "main.h"
#include <stdio.h>
/**
 * print_number - Prints an int to console.
 * @n: Int to print.
 */

void print_number(int n)
{
	int num_of_digits = 1;
	int divisor = 1;

	if (n < 0)
	{
		if (n < -1999999999)
		{
			_putchar('-');
			_putchar('2');
			n %= 1000000000;
			n *= -1;
		}
		else
		{
			n *= -1;
			_putchar('-');
		}
	}

	while (divisor <= n / 10)
	{
		num_of_digits++;
		divisor *= 10;
	}
	while (num_of_digits > 0)
	{
		_putchar(n / divisor + '0');
		n %= divisor;
		divisor /= 10;
		num_of_digits--;
	}
	_putchar('\n');
}
