#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
				_putchar('0');
			_putchar(h + '0');
			_putchar(':');
			if (m < 10)
				_putchar('0');
			_putchar(m + '0');
			_putchar('\n');
		}
	}
}
