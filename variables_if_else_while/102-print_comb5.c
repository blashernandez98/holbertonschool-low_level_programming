#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
	int main(void)
{
	int f, s, aux;

	for (f = 0; f <= 99; f++)
	{
		for (s = (f + 1); s <= 99; s++)
		{
			if (f < 10)
			{
				putchar('0');
				putchar(f + '0');
			}
			else
			{
				aux = f / 10;
				putchar(aux + '0');
				aux = f % 10;
				putchar(aux + '0');
			}
			putchar(' ');
			if (s < 10)
			{
				putchar('0');
				putchar(s + '0');
			}
			else
			{
				aux = s / 10;
				putchar(aux + '0');
				aux = s % 10;
				putchar(aux + '0');
			}
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
