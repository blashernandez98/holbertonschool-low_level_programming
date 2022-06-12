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

	while (divisor <= n / 10)
	{
		num_of_digits++;
		divisor *= 10;
	}
	while (num_of_digits > 0)
	{
		putchar(n / divisor + '0');
		n %= divisor;
		divisor /= 10;
		num_of_digits--;
	}
	putchar('\n');
}
