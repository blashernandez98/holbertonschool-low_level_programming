#include "main.h"
#include <stdio.h>

/**
 * print_spaces - Prints spaces depending on numb of digits of @digits
 * @digits: Input number
 */

void print_spaces(int digits)
{
	if (digits / 100 == 0)
		putchar(' ');
	if (digits / 10 == 0)
		putchar(' ');
}

/**
 * print_times_table - Prints the @n times table
 * @n: Number of times tables to print.
 */


void print_times_table(int n)
{
	int num, mult, out;

	if (!(n > 15 || n == 0))
	{
		for (num = 0; num <= n; num++)
		{
			printf("0, ");
			for (mult = 1; mult <= n; mult++)
			{
				out = num * mult;
				print_spaces(out);
				printf("%d", out);
				if (mult != n)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
	else
		printf("\n");
	printf("\n");
}
