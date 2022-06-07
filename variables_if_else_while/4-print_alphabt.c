#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
	int main(void)
{
	char c, u;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (!((c == 'q') || (c == 'e')))
			putchar(c);
	}
	printf("\n");
	return (0);
}
