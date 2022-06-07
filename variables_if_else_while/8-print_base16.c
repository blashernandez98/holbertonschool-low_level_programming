#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
	int main(void)
{
	char l;
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
