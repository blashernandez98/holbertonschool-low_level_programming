#include "main.h"
#include <stdio.h>

/**
 * recursive_print - Prints non 0 number in binary
 * @n: Number to print
 */

void recursive_print(unsigned long int n)
{
	if (n)
	{
		recursive_print(n >> 1);
		printf("%ld", n & 1);
	}
}

/**
 * print_binary - Prints number in binary
 * @n: Number to print
 */

void print_binary(unsigned long int n)
{
	if (n)
		recursive_print(n);
	else
		printf("0");
}
