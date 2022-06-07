#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
	int main(void)
{
	int f, s, aux, aux2, i;

	for (f = 0; f <= 99; f++)
	{
		for (s = (f + 1); s <= 99; s++)
		{
			aux = f;
			for (i = 0; i <= 1; i++)
			{

				if (aux < 10)
				{
					putchar('0');
					putchar(aux + '0');
				}
				else
				{
					aux2 = aux / 10;
					putchar(aux2 + '0');
					aux2 = aux % 10;
					putchar(aux2 + '0');
				}
				if (i == 0)
					putchar(' ');
				aux = s;
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
