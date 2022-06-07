#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
	int main(void)
{
	int f, s, aux;

/**
 * conv - This prints two digit integers in format "00 01 ... 98 99".
 * @n: Integer to print.
 */
	void conv(int n)
	{
		if (n < 10)
		{
			putchar('0');
			putchar(n + '0');
		}
		else
		{
			aux = n / 10;
			putchar(aux + '0');
			aux = n % 10;
			putchar(aux + '0');
		}

	}

	for (f = 0; f <= 99; f++)
	{
		for (s = (f + 1); s <= 99; s++)
		{
			conv(f);
			putchar(' ');
			conv(s);
			if (!((f == 98) && (s == 99)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
