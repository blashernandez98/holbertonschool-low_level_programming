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
		printf("%c", c);
	for (u = 'A'; u <= 'Z'; u++)
		printf("%c", u);
	printf("\n");
	return (0);
}
