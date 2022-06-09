#include "main.h"

/**
 * print_alphabet_x10 - Entry point.
 * This program prints the alphabet in lowercase in order
 * 10 times followed by a newline
 *
 * Return: Always 0 (on success).
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
