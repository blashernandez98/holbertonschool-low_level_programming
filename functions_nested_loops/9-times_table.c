#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int n, mult, out;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (mult = 1; mult < 10; mult++)
		{
			out = n * mult;
			if (out > 9)
			{
				_putchar((out / 10) + '0');
				_putchar((out % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(out + '0');
			}
			if (mult != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
