#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
	int main(void)
{
	int f, s;
	int i = 1;

	for (f = 0; f <= 9; f++)
	{
		for (s = i; s <= 9; s++)
		{
			putchar(f + '0');
			putchar(s + '0');
			if (f != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
